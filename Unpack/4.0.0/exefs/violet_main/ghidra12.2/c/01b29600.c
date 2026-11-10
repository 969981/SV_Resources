/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b29600; name: FUN_01b29600
 */


void FUN_01b29600(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if ((DAT_04840580 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840580);
    uVar2 = param_1 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840580);
      uVar2 = param_1 & 0xffffffff;
    }
  }
  DAT_04840568 = DAT_04840570;
  FUN_020e66b4(uVar2);
  return;
}


