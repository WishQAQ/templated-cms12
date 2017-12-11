<?php
$z[0]=Array("field","",139,158);
$z[0][4]['name']="title";
$z[1]=Array("global","",159,185);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",226,248);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",288,339);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",854,889);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",990,1374);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #22ac38;\">[field:typename /]</a>",1416,1524);
$z[6][4]['typeid']="2";
$z[7]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #e60012;\">[field:typename /]</a>",1551,1659);
$z[7][4]['typeid']="5";
$z[8]=Array("type","<a href=\"[field:typelink/]\" style=\"color:#333;\"><span>All the series</span><br>\r\n    全部系列</a>",1729,1854);
$z[9]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\" ><span>[field:typenameen /]</span><br>\r\n          [field:typename/]</a></li>\r\n       ",1908,2174);
$z[9][4]['type']="son";
$z[9][4]['currentstyle']="<li><a href='~typelink~' style='color:#e60012;'></span><br>~typename~</a> </li>";
$z[10]=Array("field","",2852,2871);
$z[10][4]['name']="title";
$z[11]=Array("productimagelist","\r\n            <li style=\"margin-top:0px;\">\r\n              <div class=\"img-wrap\"><a href=\"javascript:;\" hidefocus=\"true\"><img src=\"[field:imgsrc/]\" rel=\"[field:imgsrc/]\" height=\"67\"/></a></div>\r\n            </li>\r\n            ",4042,4314);
$z[12]=Array("include","",4769,4806);
$z[12][4]['filename']="footer.htm";

?>