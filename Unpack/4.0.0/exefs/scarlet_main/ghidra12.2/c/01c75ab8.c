/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c75ab8; name: FUN_01c75ab8
 */


void FUN_01c75ab8(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_04839928 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839928);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000,param_3);
      __cxa_guard_release(&DAT_04839928);
    }
  }
  DAT_04839910 = DAT_04839918;
  if (DAT_04839918 == 0) {
    return;
  }
  FUN_01eb7500(DAT_04839918,param_1,param_2,param_3);
  return;
}


