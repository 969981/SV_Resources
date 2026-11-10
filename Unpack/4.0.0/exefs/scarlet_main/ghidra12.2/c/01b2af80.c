/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2af80; name: FUN_01b2af80
 */


void FUN_01b2af80(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_04840580 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840580);
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840580);
    }
  }
  DAT_04840568 = DAT_04840570;
  FUN_020e626c(param_1,DAT_04840570,param_2,param_3);
  return;
}


