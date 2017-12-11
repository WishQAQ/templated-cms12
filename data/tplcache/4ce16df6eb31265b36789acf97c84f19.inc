<li><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>
        <div class="lanmu" style="z-index:999;">
          <div class="nar"><img src="/skin/img/index_10.png"></div>
          <ul class="subnav">
            {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}
            <li><a href="[field:typedir function='cn_substr(@me,200,9) ' /]">[field:typename/]</a></li>
            {/dede:sql}
          </ul>
        </div>
      </li>