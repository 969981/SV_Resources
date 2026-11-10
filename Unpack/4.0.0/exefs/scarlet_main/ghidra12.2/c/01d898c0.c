/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d898c0; name: FUN_01d898c0
 */


void FUN_01d898c0(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_048371d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048371d8);
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_00a8a92c,&DAT_048371c8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048371d8);
    }
  }
  DAT_048371e0 = DAT_048371c8;
  FUN_0169eee8(param_1,*(undefined8 *)(DAT_048371c8 + 8));
  return;
}


