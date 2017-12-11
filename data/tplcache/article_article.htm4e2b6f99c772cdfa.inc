<?php
$z[0]=Array("field","",139,158);
$z[0][4]['name']="title";
$z[1]=Array("global","",159,185);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",226,255);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",295,353);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",870,905);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1008,1392);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #22ac38;\">[field:typename /]</a>",1436,1544);
$z[6][4]['typeid']="2";
$z[7]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #e60012;\">[field:typename /]</a>",1571,1679);
$z[7][4]['typeid']="5";
$z[8]=Array("type","<a href=\"[field:typelink/]\" style=\"color:#333;\"><span>All the series</span><br>\r\n      全部系列</a>",1755,1882);
$z[9]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\" style=\"color:#e60012;\"><span>[field:typenameen /]</span><br>\r\n          [field:typename/]</a></li>\r\n        ",1943,2135);
$z[9][4]['type']="son";
$z[10]=Array("field","",2305,2324);
$z[10][4]['name']="title";
$z[11]=Array("field","",2364,2416);
$z[11][4]['name']="pubdate";
$z[11][4]['function']="MyDate('Y-m-d',@me)";
$z[12]=Array("field","",2671,2689);
$z[12][4]['name']="body";
$z[13]=Array("include","",2873,2910);
$z[13][4]['filename']="footer.htm";

?>