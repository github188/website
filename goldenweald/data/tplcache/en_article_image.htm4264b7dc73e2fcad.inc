<?php
$z[0]=Array("global","",166,192);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",234,256);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",297,348);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",913,954);
$z[3][4]['filename']="en_head_1.htm";
$z[4]=Array("include","",976,1011);
$z[4][4]['filename']="left.htm";
$z[5]=Array("type","[field:typelink /]",1105,1152);
$z[5][4]['row']="1";
$z[6]=Array("field","",1178,1207);
$z[6][4]['name']="typename";
$z[7]=Array("field","",1238,1260);
$z[7][4]['name']="position";
$z[8]=Array("field","",1429,1449);
$z[8][4]['name']="litpic";
$z[9]=Array("field","",1501,1521);
$z[9][4]['name']="litpic";
$z[10]=Array("field","",1709,1728);
$z[10][4]['name']="title";
$z[11]=Array("field","",1748,1803);
$z[11][4]['name']="description";
$z[11][4]['function']="cn_substr(@me,140)";
$z[12]=Array("global","",1867,1888);
$z[12][4]['name']="cfg_dh";
$z[13]=Array("sql"," [field:body/] ",2180,2273);
$z[13][4]['sql']="Select body from dede_addonarticle where aid=~aid~";
$z[14]=Array("likearticle","\r\n					<dd>\r\n						<div class=\"img cssimg\">\r\n							<a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" title=\"[field:title/]\" /></a>\r\n						</div>\r\n						<div class=\"txt\">\r\n							<a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a>\r\n						</div>\r\n					</dd>\r\n					",2373,2728);
$z[14][4]['row']="4";
$z[14][4]['flag']="h";
$z[15]=Array("include","",2772,2812);
$z[15][4]['filename']="en_footer.htm";

?>