/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a6f98; name: FUN_019a6f98
 */


void FUN_019a6f98(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((DAT_04839c20 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839c20);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1fbbc,&DAT_04839c10,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839c20);
    }
  }
  DAT_04839c08 = DAT_04839c10;
  if (DAT_04839c10 == 0) {
    *param_1 = 0;
    return;
  }
  FUN_019a7248(DAT_04839c10,param_2);
  return;
}


