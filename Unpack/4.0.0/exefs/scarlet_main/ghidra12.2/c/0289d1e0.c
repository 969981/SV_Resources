/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289d1e0; name: FUN_0289d1e0
 */


void FUN_0289d1e0(undefined1 *param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  if ((lVar5 != 0) && (*param_4 != 0)) {
    lVar6 = FUN_00fe9b78();
    lVar7 = FUN_013fcac4(*param_4);
    uVar8 = FUN_013fcabc(*param_4);
    lVar5 = *(long *)(param_2 + 0x318);
    lVar13 = *(long *)(param_2 + 800);
    if (lVar5 != lVar13) {
      do {
        if ((uVar8 == *(byte *)(lVar5 + 8)) && (*(long *)(lVar5 + 0x10) == *param_3))
        goto LAB_0289d298;
        lVar5 = lVar5 + 0x18;
      } while (lVar13 != lVar5);
      lVar5 = lVar13;
    }
LAB_0289d298:
    lVar9 = FUN_01a45624(*param_4);
    lVar14 = *param_3;
    lVar10 = FUN_01a45624(*param_4);
    if (((lVar13 != lVar5) || (lVar14 == lVar9)) || (lVar10 == 0)) {
      plVar11 = *(long **)(lVar7 + 0x20);
      plVar1 = plVar11;
      if (*(long *)(lVar7 + 0x28) != 0) {
        plVar1 = plVar11 + *(long *)(lVar7 + 0x28);
      }
      if (plVar11 != plVar1) {
        plVar3 = *(long **)(lVar6 + 0x20);
        plVar2 = plVar3;
        if (*(long *)(lVar6 + 0x28) != 0) {
          plVar2 = plVar3 + *(long *)(lVar6 + 0x28);
        }
        if (plVar2 != plVar3) {
          do {
            if (*plVar11 != *param_3) {
              lVar5 = *plVar3;
              plVar12 = plVar3;
              while (lVar5 != *plVar11) {
                if (plVar2 + -1 == plVar12) goto LAB_0289d328;
                plVar12 = plVar12 + 1;
                lVar5 = *plVar12;
              }
              if (plVar2 != plVar12) {
                *param_1 = 0;
                *(long *)(param_1 + 8) = *plVar11;
                goto LAB_0289d370;
              }
            }
LAB_0289d328:
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar1);
        }
      }
      *(undefined8 *)(param_1 + 8) = 0;
LAB_0289d370:
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


