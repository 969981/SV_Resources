/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a6cd0; name: FUN_012a6cd0
 */


undefined8 * FUN_012a6cd0(void)

{
  int iVar1;
  
  if (((DAT_04859c60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859c60), iVar1 != 0)) {
    DAT_04859c48 = 0;
    DAT_04859c5c = 1;
    nn::os::InitializeLightEvent(&DAT_04859c50,0,1);
    FUN_00100190(PTR_LAB_047ddce0,&DAT_04859c48,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04859c60);
  }
  return &DAT_04859c48;
}


