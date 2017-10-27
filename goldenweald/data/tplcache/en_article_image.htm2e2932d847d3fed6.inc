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
$z[4]=Array("include","",976,1014);
$z[4][4]['filename']="en_left.htm";
$z[5]=Array("type","[field:typelink /]",1108,1155);
$z[5][4]['row']="1";
$z[6]=Array("field","",1181,1210);
$z[6][4]['name']="typename";
$z[7]=Array("field","\r\n\$b = array(\"主页\");\r\n\$c = array(\"HOME\");\r\n@me=str_replace(\$b,\$c,@me);\r\n",1236,1365);
$z[7][4]['name']="position";
$z[7][4]['runphp']="yes";
$z[8]=Array("field","",1534,1554);
$z[8][4]['name']="litpic";
$z[9]=Array("field","",1606,1626);
$z[9][4]['name']="litpic";
$z[10]=Array("field","",1814,1833);
$z[10][4]['name']="title";
$z[11]=Array("field","",1853,1908);
$z[11][4]['name']="description";
$z[11][4]['function']="cn_substr(@me,140)";
$z[12]=Array("global","",1972,1993);
$z[12][4]['name']="cfg_dh";
$z[13]=Array("sql"," [field:body/] ",2285,2378);
$z[13][4]['sql']="Select body from dede_addonarticle where aid=~aid~";
$z[14]=Array("likearticle","\r\n					<dd>\r\n						<div class=\"img cssimg\">\r\n							<a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" title=\"[field:title/]\" /></a>\r\n						</div>\r\n						<div class=\"txt\">\r\n							<a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a>\r\n						</div>\r\n					</dd>\r\n					",2478,2833);
$z[14][4]['row']="4";
$z[14][4]['flag']="h";
$z[15]=Array("include","",2877,2917);
$z[15][4]['filename']="en_footer.htm";

?>