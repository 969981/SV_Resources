/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f64ec0; name: FUN_01f64ec0
 */


long FUN_01f64ec0(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar4 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar4;
  if (((lVar4 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) ||
     (lVar4 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8), lVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x40);
    if (plVar5 == *(long **)(param_1 + 0x48)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar6 = *plVar5;
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x170);
          lVar6 = *(long *)(lVar6 + 0x178);
          if ((lVar7 != lVar6) && (*(long *)(lVar7 + 8) != lVar4)) {
            do {
              lVar8 = lVar7 + 0x10;
              if (lVar6 == lVar8) {
                lVar7 = lVar6;
                break;
              }
              plVar1 = (long *)(lVar7 + 0x18);
              lVar7 = lVar8;
            } while (*plVar1 != lVar4);
          }
          if (lVar6 != lVar7) {
            lVar3 = lVar3 + 1;
          }
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != *(long **)(param_1 + 0x48));
    }
  }
  return lVar3;
}


