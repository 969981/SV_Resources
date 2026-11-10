/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fd67a8; name: FUN_01fd67a8
 */


bool FUN_01fd67a8(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  lVar2 = *param_1;
  if (lVar2 != *(long *)PTR_DAT_047d3e30) {
    if (*param_3 == 0x133a8707be4aa423) {
      return *param_2 != lVar2;
    }
    if (*param_3 == 0x137e8707be8470ef) {
      return *param_2 == lVar2;
    }
  }
  return false;
}


