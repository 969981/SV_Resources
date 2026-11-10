/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b287e0; name: FUN_01b287e0
 */


void FUN_01b287e0(ulong param_1)

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
  FUN_020e59f8(uVar2);
  return;
}


