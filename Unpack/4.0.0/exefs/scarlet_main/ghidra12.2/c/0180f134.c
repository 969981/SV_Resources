/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180f134; name: FUN_0180f134
 */


void FUN_0180f134(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d3e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e50), iVar1 != 0))
  {
    FUN_00100190(&LAB_008f4e24,PTR_DAT_047d3e58,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e50);
  }
  DAT_04802840 = *(undefined8 *)PTR_DAT_047d3e58;
  return;
}


