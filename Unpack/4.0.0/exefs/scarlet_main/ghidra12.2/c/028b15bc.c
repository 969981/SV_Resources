/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b15bc; name: FUN_028b15bc
 */


void FUN_028b15bc(void)

{
  int iVar1;
  
  if (((DAT_048638a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048638a8), iVar1 != 0)) {
    FUN_00100190(&LAB_02c7b5ec,&DAT_04863898,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048638a8);
  }
  FUN_012cc338(&DAT_04863898,0);
  return;
}


