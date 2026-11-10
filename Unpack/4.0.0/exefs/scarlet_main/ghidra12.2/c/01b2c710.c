/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2c710; name: FUN_01b2c710
 */


void FUN_01b2c710(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_04840e50 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840e50);
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_02b28708,&DAT_04840e40,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840e50);
    }
  }
  DAT_04840e88 = DAT_04840e40;
  FUN_021360b8(param_1);
  return;
}


