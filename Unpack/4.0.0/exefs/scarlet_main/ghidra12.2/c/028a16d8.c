/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a16d8; name: FUN_028a16d8
 */


ulong FUN_028a16d8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  WebPageReturnValue aWStack_4030 [8192];
  ShowWebPageArg aSStack_2030 [8192];
  
  nn::web::ShowWebPageArg::ShowWebPageArg(aSStack_2030,(char *)(param_1 + 0x48));
  nn::web::ShowWebPageArg::SetDisplayUrlKind(aSStack_2030,1);
  nn::web::ShowWebPageArg::SetCallbackUrl((char *)aSStack_2030);
  nn::web::WebPageReturnValue::WebPageReturnValue(aWStack_4030);
  uVar2 = nn::web::ShowWebPage(aWStack_4030,aSStack_2030);
  if (((int)uVar2 == 0) &&
     (uVar2 = nn::web::WebPageReturnValue::GetWebExitReason(), (int)uVar2 == 3)) {
    uVar3 = nn::web::WebPageReturnValue::GetLastUrl();
    uVar2 = nn::web::WebPageReturnValue::GetLastUrlSize();
    if (uVar2 < 0x100) {
      uVar1 = snprintf((char *)(param_1 + 0x248),0x100,"%s",uVar3);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}


