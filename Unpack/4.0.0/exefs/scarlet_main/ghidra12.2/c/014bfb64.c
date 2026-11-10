/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014bfb64; name: FUN_014bfb64
 */


bool FUN_014bfb64(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  puVar3 = PTR_DAT_047d0a08;
  if (lVar5 != 0) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      return false;
    }
    iVar4 = FUN_00f21480();
    if (((iVar4 == 1) && (*(long *)puVar3 != 0)) &&
       (lVar5 = *(long *)(*(long *)puVar3 + 0xb8), lVar5 != 0)) {
      lVar6 = *(long *)(param_1 + 0x170);
      lVar2 = *(long *)(param_1 + 0x178);
      if ((lVar6 != lVar2) && (*(long *)(lVar6 + 8) != lVar5)) {
        do {
          lVar7 = lVar6 + 0x10;
          if (lVar2 == lVar7) {
            lVar6 = lVar2;
            break;
          }
          plVar1 = (long *)(lVar6 + 0x18);
          lVar6 = lVar7;
        } while (*plVar1 != lVar5);
      }
      return lVar2 != lVar6;
    }
  }
  return false;
}


