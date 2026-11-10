/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aef334; name: FUN_01aef334
 */


void FUN_01aef334(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar1 != 0))
  {
    FUN_00100190(&LAB_008f48bc,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  FUN_01aef398(PTR_DAT_047d3be8);
  return;
}


