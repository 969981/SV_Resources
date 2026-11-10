/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272b538; name: FUN_0272b538
 */


void FUN_0272b538(undefined8 param_1,long *param_2,long param_3)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  lVar8 = *param_2;
  plVar7 = *(long **)(*(long *)(lVar8 + 0x30) + 0x110);
  plVar10 = *(long **)(*(long *)(lVar8 + 0x30) + 0x118);
  plVar12 = plVar7;
  if ((plVar7 != plVar10) && (*plVar7 != 0x3f9b328b5d25fa31)) {
    do {
      plVar12 = plVar12 + 0xc;
      if (plVar10 == plVar12) {
        plVar12 = plVar10;
        goto LAB_0272b590;
      }
    } while (*plVar12 != 0x3f9b328b5d25fa31);
  }
LAB_0272b590:
  if (plVar10 != plVar12) {
    iVar6 = (int)((ulong)((long)plVar12 - (long)plVar7) >> 5) * -0x55555555;
    lVar3 = plVar7[(long)iVar6 * 0xc + 4];
    lVar4 = plVar7[(long)iVar6 * 0xc + 5];
    lVar13 = lVar3;
    if (lVar3 != lVar4) {
      lVar9 = lVar3;
      if (*(uint *)(lVar3 + 0x20) != (uint)*(byte *)(param_3 + 0x14)) {
        do {
          lVar13 = lVar9 + 0x28;
          if (lVar4 == lVar13) {
            lVar13 = lVar4;
            goto LAB_0272b5d0;
          }
          puVar1 = (uint *)(lVar9 + 0x48);
          lVar9 = lVar13;
        } while (*puVar1 != (uint)*(byte *)(param_3 + 0x14));
      }
    }
LAB_0272b5d0:
    if (lVar4 != lVar13) {
      lVar9 = (long)iVar6;
      uVar11 = (ulong)*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x59);
      lVar4 = *(long *)(lVar8 + 0x80);
      if ((ulong)(*(long *)(lVar8 + 0x88) - lVar4 >> 2) <= uVar11) goto LAB_0272b938;
      *(uint *)(lVar4 + uVar11 * 4) =
           (int)((ulong)(lVar13 - lVar3) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar4 + uVar11 * 4) &
           (*(uint *)((long)plVar7 + lVar9 * 0x60 + 0x5c) ^ 0xffffffff);
      lVar8 = *param_2;
      plVar7 = *(long **)(*(long *)(lVar8 + 0x30) + 0x110);
      plVar10 = *(long **)(*(long *)(lVar8 + 0x30) + 0x118);
    }
  }
  plVar12 = plVar7;
  if ((plVar7 != plVar10) && (*plVar7 != -0xc722efe8987e08f)) {
    do {
      plVar12 = plVar12 + 0xc;
      if (plVar10 == plVar12) {
        plVar12 = plVar10;
        goto LAB_0272b690;
      }
    } while (*plVar12 != -0xc722efe8987e08f);
  }
LAB_0272b690:
  if (plVar10 != plVar12) {
    iVar6 = (int)((ulong)((long)plVar12 - (long)plVar7) >> 5) * -0x55555555;
    lVar3 = plVar7[(long)iVar6 * 0xc + 4];
    lVar4 = plVar7[(long)iVar6 * 0xc + 5];
    lVar13 = lVar3;
    if (lVar3 != lVar4) {
      lVar9 = lVar3;
      if (*(uint *)(lVar3 + 0x20) != (uint)*(byte *)(param_3 + 0x11)) {
        do {
          lVar13 = lVar9 + 0x28;
          if (lVar4 == lVar13) {
            lVar13 = lVar4;
            goto LAB_0272b6d0;
          }
          puVar1 = (uint *)(lVar9 + 0x48);
          lVar9 = lVar13;
        } while (*puVar1 != (uint)*(byte *)(param_3 + 0x11));
      }
    }
LAB_0272b6d0:
    if (lVar4 != lVar13) {
      lVar9 = (long)iVar6;
      uVar11 = (ulong)*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x59);
      lVar4 = *(long *)(lVar8 + 0x80);
      if ((ulong)(*(long *)(lVar8 + 0x88) - lVar4 >> 2) <= uVar11) {
LAB_0272b938:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar4 + uVar11 * 4) =
           (int)((ulong)(lVar13 - lVar3) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar4 + uVar11 * 4) &
           (*(uint *)((long)plVar7 + lVar9 * 0x60 + 0x5c) ^ 0xffffffff);
    }
  }
  if (*(char *)(param_3 + 0x12) == '\0') {
    iVar6 = 0;
    if (*(char *)(param_3 + 0x13) != '\0') {
      iVar6 = 3;
    }
  }
  else if (*(char *)(param_3 + 0x15) == '\0') {
    iVar6 = 1;
    if (*(char *)(param_3 + 0x13) != '\0') {
      iVar6 = 2;
    }
  }
  else {
    iVar6 = 4;
  }
  lVar8 = *param_2;
  plVar7 = *(long **)(*(long *)(lVar8 + 0x30) + 0x110);
  plVar10 = *(long **)(*(long *)(lVar8 + 0x30) + 0x118);
  plVar12 = plVar7;
  if ((plVar7 != plVar10) && (*plVar7 != 0x1857115a0e76ce46)) {
    do {
      plVar12 = plVar12 + 0xc;
      if (plVar10 == plVar12) {
        plVar12 = plVar10;
        goto LAB_0272b798;
      }
    } while (*plVar12 != 0x1857115a0e76ce46);
  }
LAB_0272b798:
  if (plVar10 != plVar12) {
    iVar5 = (int)((ulong)((long)plVar12 - (long)plVar7) >> 5) * -0x55555555;
    lVar3 = plVar7[(long)iVar5 * 0xc + 4];
    lVar4 = plVar7[(long)iVar5 * 0xc + 5];
    lVar13 = lVar3;
    if ((lVar3 != lVar4) && (lVar9 = lVar3, *(int *)(lVar3 + 0x20) != iVar6)) {
      do {
        lVar13 = lVar9 + 0x28;
        if (lVar4 == lVar13) {
          lVar13 = lVar4;
          goto LAB_0272b7d8;
        }
        piVar2 = (int *)(lVar9 + 0x48);
        lVar9 = lVar13;
      } while (*piVar2 != iVar6);
    }
LAB_0272b7d8:
    if (lVar4 != lVar13) {
      lVar9 = (long)iVar5;
      uVar11 = (ulong)*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x59);
      lVar4 = *(long *)(lVar8 + 0x80);
      if ((ulong)(*(long *)(lVar8 + 0x88) - lVar4 >> 2) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar4 + uVar11 * 4) =
           (int)((ulong)(lVar13 - lVar3) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar7 + lVar9 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar4 + uVar11 * 4) &
           (*(uint *)((long)plVar7 + lVar9 * 0x60 + 0x5c) ^ 0xffffffff);
      lVar8 = *param_2;
    }
  }
  FUN_00d100a8(lVar8);
  return;
}


