<?php
$z[0]=Array("global","",139,165);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",206,235);
$z[1][4]['name']="keywords";
$z[2]=Array("global","",275,305);
$z[2][4]['name']="cfg_description";
$z[3]=Array("include","",529,564);
$z[3][4]['filename']="head.htm";
$z[4]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",686,1070);
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #22ac38;\">[field:typename /]</a>",1114,1222);
$z[5][4]['typeid']="2";
$z[6]=Array("type","<a href=\"[field:typeurl /]\" style=\"color: #e60012;\">[field:typename /]</a>",1249,1357);
$z[6][4]['typeid']="5";
$z[7]=Array("arclist","\r\n      <li> <a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" width=\"388\" height=\"593\"></a>\r\n        <div class=\"main_list_tit\">PHOTO NAME<br>\r\n          <b>[field:title/]</b><span class=\"fr\">2016/08/05</span></div>\r\n        <div class=\"main_list_txt\">\r\n          <h4> PHOTO DESCRIPTION</h4>\r\n          <p style=\"height:70px; overflow:hidden\"></p>\r\n        </div>\r\n        <div><a href=\"[field:arcurl/]\"><img src=\"/skin/img/main03.jpg\"></a></div>\r\n      </li>\r\n      ",1523,2051);
$z[7][4]['typeid']="4";
$z[7][4]['titlelen']="80";
$z[8]=Array("include","",2372,2409);
$z[8][4]['filename']="footer.htm";

?>