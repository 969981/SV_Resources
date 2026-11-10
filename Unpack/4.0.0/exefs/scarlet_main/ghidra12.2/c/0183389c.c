/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183389c; name: FUN_0183389c
 */


bool FUN_0183389c(ushort *param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_2 != 0xfd) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar2 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar2;
    if (lVar2 != 0) {
      if (*(long *)PTR_DAT_047d0a08 == 0) {
        return false;
      }
      iVar1 = FUN_00f21480();
      if (iVar1 == 1) {
        return (*param_1 & 3) == (ushort)*param_2;
      }
    }
  }
  return false;
}


