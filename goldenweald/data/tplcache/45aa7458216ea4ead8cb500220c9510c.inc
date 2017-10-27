[field:neirong/]
      <br />
      skype:  <br />
      公司地址：{dede:global.cfg_dz/}<br />
    </p>
  </div>
  <div class="lxwm_r">
    <form action="/plus/diy.php" enctype="multipart/form-data" method="post">
    	<input type="hidden" name="required" value="name,email,neirong" />
      <input type="hidden" name="action" value="post" />
      <input type="hidden" name="diyid" value="1" />
      <input type="hidden" name="do" value="2" />
      <p><span style="color: red;">*</span> 姓名：</p>
      <input name="name" type="text" class="lys1" value="" />
      <p>电话：</p>
      <input name="tel" type="text" class="lys1" value="" />
      <p><span style="color: red;">*</span> 邮箱：</p>
      <input name="email" type="text" class="lys1" value="" />
      <p><span style="color: red;">*</span> 留言内容：</p>
      <textarea name="neirong" cols="" rows=""  class="lys3"></textarea>
      <input name="" class="lyb1" type="submit" value="立即提交" />
      <input type="hidden" name="dede_fields" value="name,text;tel,text;neirong,multitext;email,text" />
      <input type="hidden" name="dede_fieldshash" value="79ab86229a5c0e82f8fd99be8d8fd655" />
    </form>
  </div>
</div>
<div class="hzkh">
  <div class="hzkh_t">友情链接</div>
  <div class="hzkh_c">
    <ul>
      {dede:arclist typeid=15}
      <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]"  alt="[field:title/]" title="[field:title/]" width="180" height="70"/></a></li>