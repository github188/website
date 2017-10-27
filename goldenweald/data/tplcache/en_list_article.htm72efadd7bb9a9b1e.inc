<?php
$z[0]=Array("global","",254,280);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",321,343);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",383,434);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",1053,1096);
$z[3][4]['filename']="en_head_new.htm";
$z[4]=Array("include","",1118,1156);
$z[4][4]['filename']="en_left.htm";
$z[5]=Array("type","[field:typelink /]",1264,1311);
$z[5][4]['row']="1";
$z[6]=Array("field","",1337,1366);
$z[6][4]['name']="typename";
$z[7]=Array("field","\r\n\$b = array(\"主页\");\r\n\$c = array(\"HOME\");\r\n@me=str_replace(\$b,\$c,@me);\r\n",1392,1521);
$z[7][4]['name']="position";
$z[7][4]['runphp']="yes";
$z[8]=Array("list","\r\n        <li>\r\n          <div class=\"img cssimg\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" /></a></div>\r\n          <div class=\"txt\">\r\n            <h2><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h2>\r\n            <p>[field:description function=\"cn_substr(@me,400)\"/]...<a href=\"[field:arcurl/]\" style=\"color:#ff6600;text-decoration:none;\">【View more】</a></p>\r\n          </div>\r\n        </li>\r\n        <div class=\"s\"></div>\r\n        ",1602,2130);
$z[8][4]['pagesize']="6";
$z[9]=Array("pagelist","",2216,2282);
$z[9][4]['listsize']="5";
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[10]=Array("include","",2335,2375);
$z[10][4]['filename']="en_footer.htm";

?>