<?php
$z[0]=Array("global","",57,83);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("channelartlist","\r\n      <li><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a>\r\n        <div class=\"lanmu\" style=\"z-index:999;\">\r\n          <div class=\"nar\"><img src=\"/skin/img/index_10.png\"></div>\r\n          <ul class=\"subnav\">\r\n            {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}\r\n            <li><a href=\"[field:typedir function='cn_substr(@me,200,9) ' /]\">[field:typename/]</a></li>\r\n            {/dede:sql}\r\n          </ul>\r\n        </div>\r\n      </li>\r\n      ",258,821);
$z[1][4]['typeid']="top";
$z[2]=Array("arclist"," <a href=\"[field:arcurl/]\" class=\"a_bigImg\"><img src=\"[field:picname/]\" width=\"100%\" height=\"538\" alt=\"\" /></a> ",1813,1974);
$z[2][4]['typeid']="10";
$z[2][4]['row']="3";
$z[3]=Array("global","",2490,2516);
$z[3][4]['name']="cfg_dianhua";
$z[4]=Array("type"," <a href=\"[field:typeurl /]\">",2552,2616);
$z[4][4]['typeid']="11";
$z[5]=Array("global","",2710,2734);
$z[5][4]['name']="cfg_dizhi";
$z[6]=Array("global","",3211,3232);
$z[6][4]['name']="cfg_qq";

?>