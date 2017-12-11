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
$z[4]=Array("include","",577,612);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",733,1117);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #22ac38;\">[field:typename /]</a>",1159,1267);
$z[6][4]['typeid']="2";
$z[7]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #e60012;\">[field:typename /]</a>",1294,1402);
$z[7][4]['typeid']="5";
$z[8]=Array("type","<a href=\"[field:typelink/]\" style=\"color:#333;\"><span>All the series</span><br>\r\n    全部系列</a>",1472,1597);
$z[9]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\" ><span>[field:typenameen /]</span><br>\r\n          [field:typename/]</a></li>\r\n       ",1652,1918);
$z[9][4]['type']="son";
$z[9][4]['currentstyle']="<li><a href='~typelink~' style='color:#e60012;'></span><br>~typename~</a> </li>";
$z[10]=Array("field","",2105,2124);
$z[10][4]['name']="title";
$z[11]=Array("field","",2226,2278);
$z[11][4]['name']="pubdate";
$z[11][4]['function']="MyDate('Y-m-d',@me)";
$z[12]=Array("field","",2287,2305);
$z[12][4]['name']="body";
$z[13]=Array("prenext","",2424,2449);
$z[13][4]['get']="pre";
$z[14]=Array("prenext","",2534,2560);
$z[14][4]['get']="next";
$z[15]=Array("include","",2647,2684);
$z[15][4]['filename']="footer.htm";

?>