/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0163e008; name: FUN_0163e008
 */


void FUN_0163e008(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04840858 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04840858);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840858);
    }
  }
  uVar3 = FUN_01644f54(param_1);
  FUN_0163e0a8(&DAT_04840848,uVar3);
  lVar1 = 0;
  if (DAT_04840848 != 0) {
    lVar1 = DAT_04840848 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


