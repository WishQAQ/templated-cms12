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
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",734,1118);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #22ac38;\">[field:typename /]</a>",1162,1270);
$z[6][4]['typeid']="2";
$z[7]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #e60012;\">[field:typename /]</a>",1297,1405);
$z[7][4]['typeid']="5";
$z[8]=Array("type","<a href=\"[field:typelink/]\" style=\"color:#333;\"><span>All the series</span><br>\r\n      全部系列</a>",1481,1608);
$z[9]=Array("channel","\r\n        <li><a href=\"[field:typelink/]\" ><span>[field:typenameen /]</span><br>\r\n          [field:typename/]</a></li>\r\n        ",1669,1968);
$z[9][4]['type']="son";
$z[9][4]['currentstyle']="<li><a href='~typelink~' style='color:#e60012;'></span><br> ~typename~</a> </li>";
$z[10]=Array("list","\r\n      <li> <a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" width=\"388\" height=\"593\"></a>\r\n        <div class=\"main_list_tit\">PHOTO NAME<br>\r\n          <b>[field:title/]</b><span class=\"fr\">[field:pubdate function=\"MyDate('Y/m/d',@me)\"/]</span></div>\r\n        <div class=\"main_list_txt\">\r\n          <h4>PHOTO DESCRIPTION</h4>\r\n          <p style=\"height:20px; overflow:hidden\"></p>\r\n        </div>\r\n        <div><a href=\"[field:arcurl/]\"><img src=\"/skin/img/main03.jpg\"></a></div>\r\n      </li>\r\n      ",2076,2621);
$z[10][4]['pagesize']="9";
$z[11]=Array("pagelist","",2858,2924);
$z[11][4]['listitem']="index,end,pre,next,pageno";
$z[11][4]['listsize']="2";
$z[12]=Array("include","",3635,3672);
$z[12][4]['filename']="footer.htm";

?>