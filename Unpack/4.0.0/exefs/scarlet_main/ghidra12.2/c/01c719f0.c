/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c719f0; name: FUN_01c719f0
 */


void FUN_01c719f0(undefined4 param_1)

{
  int iVar1;
  
  if ((DAT_04839928 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839928);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839928);
    }
  }
  DAT_04839910 = DAT_04839918;
  if (DAT_04839918 == 0) {
    return;
  }
  FUN_01eb7038(DAT_04839918,param_1);
  return;
}


