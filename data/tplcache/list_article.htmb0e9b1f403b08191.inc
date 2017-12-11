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
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",713,1097);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #22ac38;\">[field:typename /]</a>",1141,1249);
$z[6][4]['typeid']="2";
$z[7]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #e60012;\">[field:typename /]</a>",1276,1384);
$z[7][4]['typeid']="5";
$z[8]=Array("type","<a href=\"[field:typelink/]\" style=\"color:#333;\"><span>All the series</span><br>\r\n      全部系列</a>",1460,1587);
$z[9]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\" style=\"color:#e60012;\"><span>[field:typenameen /]</span><br>\r\n          [field:typename/]</a></li>\r\n        ",1648,1840);
$z[9][4]['type']="son";
$z[10]=Array("list","\r\n      <li><a href=\"[field:arcurl/]\">\r\n        <div class=\"fl\"><img src=\"[field:picname/]\" width=\"284\" height=\"241\"></div>\r\n        <div class=\"baojia_txt\">\r\n          <h2>[field:title/]</h2>\r\n          <i>￥<strong>查看</strong></i> <b style=\"height:60px;\"><span></span></b>\r\n          <h3>Click to view<span>点击查看</span></h3>\r\n        </div>\r\n        <div class=\"cl\"></div>\r\n        </a></li>\r\n      ",1945,2381);
$z[11]=Array("include","",2488,2525);
$z[11][4]['filename']="footer.htm";

?>