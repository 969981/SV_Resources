/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6726c; name: FUN_01c6726c
 */


void FUN_01c6726c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_04839790 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839790);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000,param_3);
      __cxa_guard_release(&DAT_04839790);
    }
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    return;
  }
  FUN_01ea3f4c(DAT_04839780,param_1,param_2,param_3);
  return;
}


