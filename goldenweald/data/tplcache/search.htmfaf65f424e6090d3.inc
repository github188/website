<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",341,363);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",403,454);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1071,1109);
$z[4][4]['filename']="head_2.htm";
$z[5]=Array("include","",1133,1168);
$z[5][4]['filename']="left.htm";
$z[6]=Array("global","",1230,1285);
$z[6][4]['name']="keyword";
$z[6][4]['function']="RemoveXSS(@me)";
$z[7]=Array("list","\r\n        <li>\r\n          <div class=\"img\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" /></a></div>\r\n          <div class=\"txt\">\r\n            <h2><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h2>\r\n            <p>[field:description function=\"cn_substr(@me,240)\"/]......<a href=\"[field:arcurl/]\" style=\"color:#ff6600;text-decoration:none;\">【点击详情】</a></p>\r\n          </div>\r\n        </li>\r\n        <div class=\"s\"></div>\r\n        ",1367,1894);
$z[7][4]['pagesize']="6";
$z[8]=Array("pagelist","",1982,2048);
$z[8][4]['listsize']="5";
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[9]=Array("include","",2101,2138);
$z[9][4]['filename']="footer.htm";

?>