<?php
$z[0]=Array("field","",141,160);
$z[0][4]['name']="title";
$z[1]=Array("global","",161,187);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",228,257);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",297,355);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",578,613);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",732,1116);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #22ac38;\">[field:typename /]</a>",1158,1266);
$z[6][4]['typeid']="2";
$z[7]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #e60012;\">[field:typename /]</a>",1293,1401);
$z[7][4]['typeid']="5";
$z[8]=Array("type","<a href=\"[field:typelink/]\" style=\"color:#333;\"><span>All the series</span><br>\r\n    全部系列</a>",1471,1596);
$z[9]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\" ><span>[field:typenameen /]</span><br>\r\n          [field:typename/]</a></li>\r\n       ",1650,1916);
$z[9][4]['type']="son";
$z[9][4]['currentstyle']="<li><a href='~typelink~' style='color:#e60012;'></span><br>~typename~</a> </li>";
$z[10]=Array("list","\r\n      <li style=\"width:980px; height:45px; line-height:45px; float:left; font-size:16px;\"><a href=\"[field:arcurl/]\" style=\"color:#333;\">[field:title/]</a></li>\r\n      <li style=\"width:200px; height:45px; line-height:45px; float:left; text-align:right; font-size:16px;\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</li>\r\n     ",2021,2374);
$z[11]=Array("include","",2668,2705);
$z[11][4]['filename']="footer.htm";

?>