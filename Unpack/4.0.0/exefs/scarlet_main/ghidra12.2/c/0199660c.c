/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199660c; name: FUN_0199660c
 */


undefined8 FUN_0199660c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if (((lVar3 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
     (lVar3 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8), lVar3 != 0)) {
    lVar4 = *(long *)(param_1 + 0x170);
    lVar1 = *(long *)(param_1 + 0x178);
    if (lVar4 != lVar1) {
      while (*(long *)(lVar4 + 8) != lVar3) {
        lVar4 = lVar4 + 0x10;
        if (lVar1 == lVar4) {
          return 0;
        }
      }
    }
    if (lVar4 != lVar1) {
      return *(undefined8 *)(lVar4 + 8);
    }
  }
  return 0;
}


