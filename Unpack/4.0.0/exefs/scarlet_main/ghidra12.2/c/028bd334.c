/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bd334; name: FUN_028bd334
 */


void FUN_028bd334(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  FUN_028bd398(PTR_DAT_047d3910);
  return;
}


