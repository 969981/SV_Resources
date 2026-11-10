/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea2b08; name: FUN_00ea2b08
 */


bool FUN_00ea2b08(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  puVar1 = PTR_DAT_047d0a08;
  if (lVar3 != 0) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      return false;
    }
    iVar2 = FUN_00f21480();
    if (((iVar2 == 1) && (*(long *)puVar1 != 0)) &&
       (lVar3 = *(long *)(*(long *)puVar1 + 0xb8), lVar3 != 0)) {
      return *(long *)(param_1 + 0x168) == lVar3;
    }
  }
  return false;
}


