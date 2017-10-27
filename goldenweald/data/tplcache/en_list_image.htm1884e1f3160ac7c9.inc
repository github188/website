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
$z[5]=Array("type","[field:typelink /]",1261,1308);
$z[5][4]['row']="1";
$z[6]=Array("field","",1334,1363);
$z[6][4]['name']="typename";
$z[7]=Array("field","\r\n\$b = array(\"主页\");\r\n\$c = array(\"HOME\");\r\n@me=str_replace(\$b,\$c,@me);\r\n",1389,1518);
$z[7][4]['name']="position";
$z[7][4]['runphp']="yes";
$z[8]=Array("list","\r\n        <dd>\r\n          <div class=\"img cssimg\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" title=\"[field:title/]\" /></a></div>\r\n          <div class=\"txt\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></div>\r\n        </dd>\r\n        ",1584,1923);
$z[8][4]['pagesize']="12";
$z[8][4]['orderby']="click";
$z[9]=Array("pagelist","",2011,2077);
$z[9][4]['listsize']="5";
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[10]=Array("include","",2130,2170);
$z[10][4]['filename']="en_footer.htm";

?>