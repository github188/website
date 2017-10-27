<?php
$z[0]=Array("global","",254,280);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",321,343);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",383,434);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",1051,1094);
$z[3][4]['filename']="en_head_new.htm";
$z[4]=Array("include","",1116,1154);
$z[4][4]['filename']="en_left.htm";
$z[5]=Array("type","[field:typelink /]",1256,1303);
$z[5][4]['row']="1";
$z[6]=Array("field","",1329,1358);
$z[6][4]['name']="typename";
$z[7]=Array("field","\r\n\$b = array(\"主页\");\r\n\$c = array(\"HOME\");\r\n@me=str_replace(\$b,\$c,@me);\r\n",1384,1513);
$z[7][4]['name']="position";
$z[7][4]['runphp']="yes";
$z[8]=Array("field","",1589,1608);
$z[8][4]['name']="title";
$z[9]=Array("field","",1662,1683);
$z[9][4]['name']="writer";
$z[10]=Array("field","",1707,1772);
$z[10][4]['name']="pubdate";
$z[10][4]['function']="strftime(\"%b %d, %Y\",@me)";
$z[11]=Array("sql","    \r\n[field:body/]  \r\n",1861,1962);
$z[11][4]['sql']="Select body from dede_addonarticle where aid=~aid~";
$z[12]=Array("prenext","",2011,2092);
$z[12][4]['get']="pre";
$z[12][4]['function']="str_replace(\"上一篇\",\"Previous Post\",@me)";
$z[13]=Array("prenext","",2111,2189);
$z[13][4]['get']="next";
$z[13][4]['function']="str_replace(\"下一篇\",\"Next Post\",@me)";
$z[14]=Array("include","",2240,2280);
$z[14][4]['filename']="en_footer.htm";

?>