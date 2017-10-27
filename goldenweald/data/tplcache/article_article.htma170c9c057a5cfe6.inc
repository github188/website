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
$z[4]=Array("include","",1071,1111);
$z[4][4]['filename']="head_new.htm";
$z[5]=Array("include","",1133,1168);
$z[5][4]['filename']="left.htm";
$z[6]=Array("type","[field:typelink /]",1270,1317);
$z[6][4]['row']="1";
$z[7]=Array("field","",1343,1372);
$z[7][4]['name']="typename";
$z[8]=Array("field","",1403,1425);
$z[8][4]['name']="position";
$z[9]=Array("field","",1501,1520);
$z[9][4]['name']="title";
$z[10]=Array("field","",1578,1599);
$z[10][4]['name']="writer";
$z[11]=Array("field","",1639,1691);
$z[11][4]['name']="pubdate";
$z[11][4]['function']="MyDate('Y-m-d',@me)";
$z[12]=Array("sql","    \r\n[field:body/]  \r\n",1776,1877);
$z[12][4]['sql']="Select body from dede_addonarticle where aid=~aid~";
$z[13]=Array("prenext","",1926,1951);
$z[13][4]['get']="pre";
$z[14]=Array("prenext","",1970,1996);
$z[14][4]['get']="next";
$z[15]=Array("include","",2047,2084);
$z[15][4]['filename']="footer.htm";

?>