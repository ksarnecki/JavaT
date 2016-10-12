package mednt.zdrowastrona.model;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import mednt.dbconn.DBConn;
import mednt.dbconn.SDBResult;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class GenDb {
  static String box(int[] ints) {
    String buf = "";
    for (int i=0;i<ints.length;i++)
    buf = buf + (((i==0) ? "" : ",") + ints[i]);
    return buf;
  }
  static String box(DBConn db, String[] strs) {
    String buf = "";
    for (int i=0;i<strs.length;i++) {
    if (i!=0)
      buf = buf + ",";
    buf = buf + "'";
    buf = buf + (db.escape(strs[i]));
    buf = buf + "'";
    }
    return buf;
  }
  private static String prepare(String sql, HashMap<String, String> pmap) {
    Pattern forPattern = Pattern.compile("%for\\s*%\\[([^\\]]*)\\]\\s*%in\\s*%\\[([^\\]]*)\\]\\s*%do(.*?)%endfor");
    while(true) {
      Matcher m = forPattern.matcher(sql);
      if (m.find()) {
        String forString = m.group(0);
        String itValue = m.group(1);
        String[] itArr = pmap.get(m.group(2)) != null ? pmap.get(m.group(2)).split(",") : new String[0];
        String forBody = m.group(3);
        String appString = "";
        for(int i=0;i<itArr.length;i++) {
          HashMap<String, String> cpmap = pmap;
          if(itArr[i].indexOf("'")>=0)
            cpmap.put(itValue, itArr[i].substring(1, itArr[i].length()-1));
          else
            cpmap.put(itValue, itArr[i]);
          appString += prepare(forBody, cpmap);
        }
        int forPos = sql.indexOf(forString);
        sql = sql.substring(0, forPos-1) + appString + sql.substring(forPos+forString.length());
      } else {
        break;
      }
    }
    for (int i=0;i<pmap.entrySet().toArray().Size();i++)
      sql = sql.replaceAll("%\\["+pmap.entrySet().toArray()[i].getKey()+"]", pmap.entrySet().toArray()[i].getValue());
    return sql;
  }
  static public AppArticleCategories getArticleCategories(DBConn _db, int[] articleIds) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("articleIds", "" + GenDb.box(articleIds));
    SDBResult _res = _db.query(GenDb.prepare("SELECT zatc.category_id, zc.name, zc.url, zatc.article_id FROM zs_article_to_category zatc JOIN zs_category zc ON zc.id = zatc.category_id AND zc.state_id = 1 WHERE zatc.article_id IN (%[articleIds]) AND zatc.state_id = 1", _pmap));
    AppArticleCategories _ret = new AppArticleCategories();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppArticleCategory(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2),_res.i(i, 3)));
    return _ret;
  }
  static public AppImage getAppImage(DBConn _db, int id) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("id", "" + id);
    SDBResult _res = _db.query(GenDb.prepare("SELECT file_path, alt FROM zs_image WHERE id = %[id]", _pmap));
    if (_res.rows()<1)
      throw new RuntimeException("getAppImage - result not found");
    AppImage _ret = new AppImage(_res.s(0, 0),_res.s(0, 1));
    return _ret;
  }
  static public AppShortArticleBoxes getShortArticleBoxes(DBConn _db, int limit, int catId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("limit", "" + limit);
    _pmap.put("catId", "" + catId);
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsa.id, zsa.title, zsa.url, zsa.modified, zsa.intro_text, zsi.file_path, zsi.alt FROM zs_article zsa JOIN zs_image zsi ON zsa.image_id = zsi.id WHERE	  (CASE WHEN %[catId] > 0 THEN  zsa.id IN(SELECT article_id FROM zs_article_to_category WHERE category_id = %[catId] ) ELSE 1 = 1 END)	    ORDER BY zsa.modified DESC LIMIT %[limit] ", _pmap));
    AppShortArticleBoxes _ret = new AppShortArticleBoxes();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppShortArticleBox(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2),_res.s(i, 3),_res.s(i, 4),new AppImage(_res.s(i, 5),_res.s(i, 6))));
    return _ret;
  }
  static public AppImportantInfBoxes getAppImportantInfBoxes(DBConn _db, int limit, int catId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("limit", "" + limit);
    _pmap.put("catId", "" + catId);
    SDBResult _res = _db.query(GenDb.prepare("SELECT id, title, url FROM zs_article WHERE id IN(SELECT article_id FROM zs_article_to_category WHERE category_id = %[catId])", _pmap));
    AppImportantInfBoxes _ret = new AppImportantInfBoxes();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppImportantInfBox(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2)));
    return _ret;
  }
  static public AppArticle getArticle(DBConn _db, int articleId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("articleId", "" + articleId);
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsa.id, zsa.title, zsa.full_text, zsi.file_path, zsi.alt FROM zs_article zsa LEFT JOIN zs_image zsi ON zsa.image_id = zsi.id WHERE zsa.id = %[articleId]", _pmap));
    if (_res.rows()<1)
      throw new RuntimeException("getArticle - result not found");
    AppArticle _ret = new AppArticle(_res.i(0, 0),_res.s(0, 1),_res.s(0, 2),new AppImage(_res.s(0, 3),_res.s(0, 4)));
    return _ret;
  }
  static public AppAdvert getRandomAdvert(DBConn _db, int place) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("place", "" + place);
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsa.id, zsa.name, zsa.url, zsi.file_path FROM zs_advert zsa JOIN zs_image zsi ON zsa.image_id = zsi.id WHERE zsa.place_id = %[place] ORDER BY RAND() LIMIT 1", _pmap));
    if (_res.rows()<1)
      throw new RuntimeException("getRandomAdvert - result not found");
    AppAdvert _ret = new AppAdvert(_res.i(0, 0),_res.s(0, 1),_res.s(0, 2),_res.s(0, 3));
    return _ret;
  }
  static public int countGlossaryRecords(DBConn _db) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    SDBResult _res = _db.query(GenDb.prepare("SELECT COUNT(*) FROM zs_glossary WHERE state_id = 1", _pmap));
    if (_res.rows()<1)
      throw new RuntimeException("countGlossaryRecords - result not found");
    int _ret =_res.i(0, 0);
    return _ret;
  }
  static public AppGlossaryList getGlossaryList(DBConn _db, int offset, int limit) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("offset", "" + offset);
    _pmap.put("limit", "" + limit);
    SDBResult _res = _db.query(GenDb.prepare("SELECT id, name, url FROM zs_glossary WHERE state_id = 1 ORDER BY name LIMIT %[limit] OFFSET %[offset]", _pmap));
    AppGlossaryList _ret = new AppGlossaryList();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppGlossaryRecord(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2)));
    return _ret;
  }
  static public AppLifeSystems getLifeSystems(DBConn _db) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsl.id, zsl.name, zsa.url, zsl.descr_article_id FROM zs_life_system zsl JOIN zs_article zsa ON zsl.descr_article_id = zsa.id", _pmap));
    AppLifeSystems _ret = new AppLifeSystems();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppLifeSystem(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2),_res.i(i, 3)));
    return _ret;
  }
  static public AppArticleBoxes getLifeSystemsAppArticleBoxes(DBConn _db) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsa.id, zsa.title, zsa.url, zsa.modified,		(CASE WHEN LENGTH(zsa.intro_text) > 0 THEN zsa.intro_text ELSE zsa.plain_full_text END), zsi.file_path, zsi.alt, zsa.views_count FROM zs_article zsa 		LEFT JOIN zs_image zsi ON zsi.id = zsa.image_id AND zsi.state_id = 1 WHERE zsa.state_id = 1 AND zsa.id IN (SELECT descr_article_id FROM zs_life_system) ORDER BY zsa.title", _pmap));
    if(_res.rows()==0)
      return new AppArticleBoxes();
    int[] getArticleCategoriesobj0 = new int[_res.rows()];
    for (int i=0;i<_res.rows();i++)
      getArticleCategoriesobj0[i]= _res.i(i, 0);
    AppArticleCategories arr0 =getArticleCategories(_db ,getArticleCategoriesobj0);
    HashMap<Integer, AppArticleCategories> hmap0 = new HashMap<Integer, AppArticleCategories>();
    for (int i=0;i<arr0.Size();i++) {
      AppArticleCategories s;
      if(!hmap0.containsKey(arr0.Get(i).getArticleId()))
        s = new AppArticleCategories();
      else
        s = hmap0.get(arr0.Get(i).getArticleId());
      s.Insert(arr0.Get(i));
      hmap0.put(arr0.Get(i).getArticleId(), s);
    }
    AppArticleBoxes _ret = new AppArticleBoxes();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppArticleBox(_res.i(i, 0),hmap0.containsKey(_res.i(i,0)) ? hmap0.get(_res.i(i,0)) : new AppArticleCategories(),_res.s(i, 1),_res.s(i, 2),_res.s(i, 3),_res.s(i, 4),new AppImage(_res.s(i, 5),_res.s(i, 6)),_res.i(i, 7)));
    return _ret;
  }
  static public AppArticleBoxes getAppArticleBoxes(DBConn _db, int limit, int offset, int categoryId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("limit", "" + limit);
    _pmap.put("offset", "" + offset);
    _pmap.put("categoryId", "" + categoryId);
    SDBResult _res = _db.query(GenDb.prepare("", _pmap));
    if(_res.rows()==0)
      return new AppArticleBoxes();
    int[] getArticleCategoriesobj0 = new int[_res.rows()];
    for (int i=0;i<_res.rows();i++)
      getArticleCategoriesobj0[i]= _res.i(i, 0);
    AppArticleCategories arr0 =getArticleCategories(_db ,getArticleCategoriesobj0);
    HashMap<Integer, AppArticleCategories> hmap0 = new HashMap<Integer, AppArticleCategories>();
    for (int i=0;i<arr0.Size();i++) {
      AppArticleCategories s;
      if(!hmap0.containsKey(arr0.Get(i).getArticleId()))
        s = new AppArticleCategories();
      else
        s = hmap0.get(arr0.Get(i).getArticleId());
      s.Insert(arr0.Get(i));
      hmap0.put(arr0.Get(i).getArticleId(), s);
    }
    AppArticleBoxes _ret = new AppArticleBoxes();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppArticleBox(_res.i(i, 0),hmap0.containsKey(_res.i(i,0)) ? hmap0.get(_res.i(i,0)) : new AppArticleCategories(),_res.s(i, 1),_res.s(i, 2),_res.s(i, 3),_res.s(i, 4),new AppImage(_res.s(i, 5),_res.s(i, 6)),_res.i(i, 7)));
    return _ret;
  }
  static public int countArticlesFromCategory(DBConn _db, int categoryId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("categoryId", "" + categoryId);
    SDBResult _res = _db.query(GenDb.prepare("SELECT SUM(count) FROM (SELECT COUNT(*) AS count FROM zs_article_to_category zatc LEFT JOIN zs_article zsa ON zatc.article_id = zsa.id AND zsa.state_id = 1 	LEFT JOIN zs_category zsc ON zatc.category_id = zsc.id	WHERE zatc.state_id = 1 AND (zatc.category_id = %[categoryId]  OR zsc.parent_id = %[categoryId]) AND (CASE WHEN %[categoryId] > 0 THEN 0 = 0 ELSE 0 = 1 END) 	UNION ALL SELECT COUNT(*) AS count FROM zs_article WHERE state_id = 1 AND (CASE WHEN %[categoryId] > 0 THEN 0 = 1 ELSE 0 = 0 END))d ", _pmap));
    if (_res.rows()<1)
      throw new RuntimeException("countArticlesFromCategory - result not found");
    int _ret =_res.i(0, 0);
    return _ret;
  }
  static public AppSurveys getLifeSystemSurveys(DBConn _db, int lifeSystemId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("lifeSystemId", "" + lifeSystemId);
    SDBResult _res = _db.query(GenDb.prepare("SELECT zss.id, zss.name, zsa.url, zsa.id FROM zs_surveys zss LEFT JOIN zs_article zsa ON zsa.id = zss.descr_article_id AND zsa.state_id = 1 WHERE zss.life_system_id = %[lifeSystemId]", _pmap));
    AppSurveys _ret = new AppSurveys();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppSurvey(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2),_res.i(i, 3)));
    return _ret;
  }
  static public AppDiseases getLifeSystemDiseases(DBConn _db, int lifeSystemId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("lifeSystemId", "" + lifeSystemId);
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsd.id, zsd.name, zsa.url, zsa.id FROM zs_disease zsd LEFT JOIN zs_article zsa ON zsa.id = zsd.descr_article_id AND zsa.state_id = 1 WHERE zsd.life_system_id = %[lifeSystemId]", _pmap));
    AppDiseases _ret = new AppDiseases();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppDisease(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2),_res.i(i, 3)));
    return _ret;
  }
  static public AppGlossary getGlossaryRecord(DBConn _db, int glossaryId) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("glossaryId", "" + glossaryId);
    SDBResult _res = _db.query(GenDb.prepare("SELECT id, name, descr FROM zs_glossary WHERE id = %[glossaryId] AND state_id = 1", _pmap));
    if (_res.rows()<1)
      throw new RuntimeException("getGlossaryRecord - result not found");
    AppGlossary _ret = new AppGlossary(_res.i(0, 0),_res.s(0, 1),_res.s(0, 2));
    return _ret;
  }
  static public AppMobileDrWidgetBoxes getMobileDrWidgetBoxes(DBConn _db) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsm.id, zsm.name, zsm.full_text, zsi.file_path, zsi.alt, zsm.google_play_url, zsm.windows_store_url, zsm.app_store_url FROM zs_mobile zsm JOIN zs_image zsi ON zsm.image_id = zsi.id WHERE zsi.state_id = 1", _pmap));
    AppMobileDrWidgetBoxes _ret = new AppMobileDrWidgetBoxes();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppMobileDrWidgetBox(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2),new AppImage(_res.s(i, 3),_res.s(i, 4)),_res.s(i, 5),_res.s(i, 6),_res.s(i, 7)));
    return _ret;
  }
  static public AppSearchBoxes getSearchBoxes(DBConn _db, String[] phrase) {
    HashMap<String, String> _pmap = new HashMap<String, String>();
    _pmap.put("phrase", "" + GenDb.box(_db, phrase));
    SDBResult _res = _db.query(GenDb.prepare("SELECT zsa.id, zsa.title, zsc.name, zsa.plain_full_text, zsa.created FROM zs_article_to_category zatc LEFT JOIN zs_article zsa ON zatc.article_id = zsa.id AND zsa.state_id = 1	LEFT JOIN zs_category zsc ON zatc.category_id = zsc.id WHERE zsc.state_id = 1 %for %[elem] %in %[phrase] %do AND zsa.plain_full_text LIKE '%%[elem]%' %endfor	UNION	SELECT id, name, 'słownik', descr, created FROM zs_glossary WHERE state_id = 1 %for %[elem] %in %[phrase] %do AND descr LIKE '%%[elem]%' %endfor	UNION	SELECT id, name, 'aplikacje mobilne', plain_full_text, '' FROM zs_mobile WHERE 1=1 %for %[elem] %in %[phrase] %do AND plain_full_text LIKE '%%[elem]%' %endfor", _pmap));
    AppSearchBoxes _ret = new AppSearchBoxes();
    for (int i=0;i<_res.rows();i++)
      _ret.Insert(new AppSearchBox(_res.i(i, 0),_res.s(i, 1),_res.s(i, 2),_res.s(i, 3),_res.s(i, 4)));
    return _ret;
  }
}
