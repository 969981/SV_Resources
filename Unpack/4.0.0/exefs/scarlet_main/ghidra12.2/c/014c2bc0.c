/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c2bc0; name: FUN_014c2bc0
 */


uint FUN_014c2bc0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int local_28 [5];
  byte local_14 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) {
    uVar2 = 0xfd;
  }
  else {
    uVar2 = 0xfd;
    if (*(long *)PTR_DAT_047d0860 != 0) {
      local_14[0] = 0xfd;
      FUN_00f42ddc(local_28,*(long *)PTR_DAT_047d0860,local_14,*param_1);
      uVar2 = (uint)local_14[0];
      if (DAT_045dfcb0 <= local_14[0] || local_28[0] != 0) {
        uVar2 = 0xfffffffd;
      }
    }
  }
  return uVar2;
}


