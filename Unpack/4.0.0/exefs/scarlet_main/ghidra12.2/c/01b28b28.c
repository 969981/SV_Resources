/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b28b28; name: FUN_01b28b28
 */


void FUN_01b28b28(ulong param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  uVar3 = param_2;
  if ((DAT_04840580 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840580);
    uVar3 = param_2 & 0xffffffff;
    uVar2 = param_1 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840580);
      uVar2 = param_1 & 0xffffffff;
      uVar3 = param_2 & 0xffffffff;
    }
  }
  DAT_04840568 = DAT_04840570;
  FUN_020e5ecc(uVar2,uVar3);
  return;
}


