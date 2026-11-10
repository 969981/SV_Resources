/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae4e00; name: FUN_02ae4e00
 */


void FUN_02ae4e00(short *param_1,short *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  undefined8 uVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  long lVar18;
  short *psVar19;
  short *psVar20;
  long lVar21;
  undefined8 uVar22;
  short *psVar23;
  
LAB_02ae4e34:
  psVar17 = param_2 + -0x14;
  psVar13 = param_1;
LAB_02ae4e40:
  param_1 = psVar13;
  uVar12 = (long)param_2 - (long)param_1;
  switch(((long)uVar12 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    goto switchD_02ae538c_caseD_0;
  case 2:
    bVar8 = *(int *)(param_2 + -0x12) < *(int *)(param_1 + 2);
    if (param_2[-0x14] != *param_1) {
      bVar8 = param_2[-0x14] < *param_1;
    }
    if (bVar8) {
      uVar22 = *(undefined8 *)(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      uVar1 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -0x14);
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar4 = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0xc);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -8);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      uVar14 = *(undefined8 *)(param_2 + -4);
      param_2[-4] = 0;
      param_2[-3] = 0;
      param_2[-2] = 0;
      param_2[-1] = 0;
      *(undefined8 *)(param_1 + 0x10) = uVar14;
      plVar10 = *(long **)(param_2 + -4);
      *(undefined8 *)(param_2 + -0x14) = uVar1;
      *(undefined8 *)(param_2 + -0x10) = uVar3;
      *(undefined8 *)(param_2 + -0xc) = uVar2;
      *(undefined8 *)(param_2 + -8) = uVar4;
      param_2[-4] = 0;
      param_2[-3] = 0;
      param_2[-2] = 0;
      param_2[-1] = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      *(undefined8 *)(param_2 + -4) = uVar22;
      return;
    }
    return;
  case 3:
    FUN_02ae5630(param_1,param_1 + 0x14,psVar17);
    return;
  case 4:
    FUN_02ae5920(param_1,param_1 + 0x14,param_1 + 0x28,psVar17);
    return;
  case 5:
    FUN_02ae5b40(param_1,param_1 + 0x14,param_1 + 0x28,param_1 + 0x3c,psVar17);
    return;
  default:
    if (0x117 < (long)uVar12) {
      psVar13 = param_1 + (uVar12 / 0x50) * 0x14;
      if ((long)uVar12 < 0x9c19) {
        iVar9 = FUN_02ae5630(param_1,psVar13,psVar17);
      }
      else {
        lVar21 = (uVar12 / 0xa0) * 4 + uVar12 / 0xa0;
        iVar9 = FUN_02ae5b40(param_1,param_1 + lVar21 * 4,psVar13,psVar13 + lVar21 * 4,psVar17);
      }
      sVar6 = *param_1;
      sVar7 = *psVar13;
      iVar5 = *(int *)(param_1 + 2);
      bVar8 = iVar5 < *(int *)(param_1 + (uVar12 / 0x50) * 0x14 + 2);
      if (sVar6 != sVar7) {
        bVar8 = sVar6 < sVar7;
      }
      if (!bVar8) break;
      psVar19 = psVar17;
      goto LAB_02ae4f90;
    }
    FUN_02ae5630(param_1,param_1 + 0x14,param_1 + 0x28);
    if (param_1 + 0x3c == param_2) {
      return;
    }
    lVar21 = 0;
    psVar13 = param_1 + 0x3c;
    psVar17 = param_1 + 0x28;
    goto LAB_02ae5440;
  }
  psVar19 = param_2;
  while (psVar16 = psVar19, param_1 + 0x28 != psVar16) {
    bVar8 = *(int *)(psVar16 + -0x26) < *(int *)(param_1 + (uVar12 / 0x50) * 0x14 + 2);
    if (psVar16[-0x28] != sVar7) {
      bVar8 = psVar16[-0x28] < sVar7;
    }
    psVar19 = psVar16 + -0x14;
    if (bVar8) goto code_r0x02ae4f34;
  }
  psVar19 = param_1 + 0x14;
  bVar8 = iVar5 < *(int *)(param_2 + -0x12);
  if (sVar6 != param_2[-0x14]) {
    bVar8 = sVar6 < param_2[-0x14];
  }
  if (!bVar8) {
    if (psVar19 == psVar17) {
      return;
    }
    psVar19 = param_1 + 0x28;
    while( true ) {
      bVar8 = iVar5 < *(int *)(psVar19 + -0x12);
      if (sVar6 != psVar19[-0x14]) {
        bVar8 = sVar6 < psVar19[-0x14];
      }
      if (bVar8) break;
      bVar8 = psVar19 == psVar17;
      psVar19 = psVar19 + 0x14;
      if (bVar8) {
        return;
      }
    }
    uVar22 = *(undefined8 *)(psVar19 + -4);
    psVar19[-4] = 0;
    psVar19[-3] = 0;
    psVar19[-2] = 0;
    psVar19[-1] = 0;
    uVar1 = *(undefined8 *)(psVar19 + -0x14);
    uVar3 = *(undefined8 *)(psVar19 + -0x10);
    *(undefined8 *)(psVar19 + -0x14) = *(undefined8 *)(param_2 + -0x14);
    uVar2 = *(undefined8 *)(psVar19 + -0xc);
    uVar4 = *(undefined8 *)(psVar19 + -8);
    *(undefined8 *)(psVar19 + -0x10) = *(undefined8 *)(param_2 + -0x10);
    *(undefined8 *)(psVar19 + -0xc) = *(undefined8 *)(param_2 + -0xc);
    *(undefined8 *)(psVar19 + -8) = *(undefined8 *)(param_2 + -8);
    psVar19[-4] = 0;
    psVar19[-3] = 0;
    psVar19[-2] = 0;
    psVar19[-1] = 0;
    uVar14 = *(undefined8 *)(param_2 + -4);
    param_2[-4] = 0;
    param_2[-3] = 0;
    param_2[-2] = 0;
    param_2[-1] = 0;
    *(undefined8 *)(psVar19 + -4) = uVar14;
    plVar10 = *(long **)(param_2 + -4);
    *(undefined8 *)(param_2 + -0x14) = uVar1;
    *(undefined8 *)(param_2 + -0x10) = uVar3;
    *(undefined8 *)(param_2 + -0xc) = uVar2;
    *(undefined8 *)(param_2 + -8) = uVar4;
    param_2[-4] = 0;
    param_2[-3] = 0;
    param_2[-2] = 0;
    param_2[-1] = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    *(undefined8 *)(param_2 + -4) = uVar22;
  }
  if (psVar19 == psVar17) {
    return;
  }
  psVar16 = psVar17;
  while( true ) {
    sVar6 = *param_1;
    do {
      psVar13 = psVar19;
      bVar8 = *(int *)(param_1 + 2) < *(int *)(psVar13 + 2);
      if (sVar6 != *psVar13) {
        bVar8 = sVar6 < *psVar13;
      }
      psVar19 = psVar13 + 0x14;
    } while (!bVar8);
    do {
      psVar15 = psVar16;
      psVar16 = psVar15 + -0x14;
      bVar8 = *(int *)(param_1 + 2) < *(int *)(psVar15 + -0x12);
      if (sVar6 != *psVar16) {
        bVar8 = sVar6 < *psVar16;
      }
    } while (bVar8);
    if (psVar16 <= psVar13) break;
    uVar22 = *(undefined8 *)(psVar13 + 0x10);
    psVar13[0x10] = 0;
    psVar13[0x11] = 0;
    psVar13[0x12] = 0;
    psVar13[0x13] = 0;
    uVar1 = *(undefined8 *)psVar13;
    uVar3 = *(undefined8 *)(psVar13 + 4);
    *(undefined8 *)psVar13 = *(undefined8 *)psVar16;
    uVar2 = *(undefined8 *)(psVar13 + 8);
    uVar4 = *(undefined8 *)(psVar13 + 0xc);
    *(undefined8 *)(psVar13 + 4) = *(undefined8 *)(psVar15 + -0x10);
    *(undefined8 *)(psVar13 + 8) = *(undefined8 *)(psVar15 + -0xc);
    *(undefined8 *)(psVar13 + 0xc) = *(undefined8 *)(psVar15 + -8);
    psVar13[0x10] = 0;
    psVar13[0x11] = 0;
    psVar13[0x12] = 0;
    psVar13[0x13] = 0;
    uVar14 = *(undefined8 *)(psVar15 + -4);
    psVar15[-4] = 0;
    psVar15[-3] = 0;
    psVar15[-2] = 0;
    psVar15[-1] = 0;
    *(undefined8 *)(psVar13 + 0x10) = uVar14;
    plVar10 = *(long **)(psVar15 + -4);
    *(undefined8 *)psVar16 = uVar1;
    *(undefined8 *)(psVar15 + -0x10) = uVar3;
    *(undefined8 *)(psVar15 + -0xc) = uVar2;
    *(undefined8 *)(psVar15 + -8) = uVar4;
    psVar15[-4] = 0;
    psVar15[-3] = 0;
    psVar15[-2] = 0;
    psVar15[-1] = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    *(undefined8 *)(psVar15 + -4) = uVar22;
  }
  goto LAB_02ae4e40;
code_r0x02ae4f34:
  uVar22 = *(undefined8 *)(param_1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  psVar19 = psVar16 + -0x28;
  *(undefined8 *)param_1 = *(undefined8 *)psVar19;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(psVar16 + -0x24);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(psVar16 + -0x20);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(psVar16 + -0x1c);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar14 = *(undefined8 *)(psVar16 + -0x18);
  psVar16[-0x18] = 0;
  psVar16[-0x17] = 0;
  psVar16[-0x16] = 0;
  psVar16[-0x15] = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar14;
  plVar10 = *(long **)(psVar16 + -0x18);
  *(undefined8 *)psVar19 = uVar1;
  *(undefined8 *)(psVar16 + -0x24) = uVar3;
  psVar16[-0x18] = 0;
  psVar16[-0x17] = 0;
  psVar16[-0x16] = 0;
  psVar16[-0x15] = 0;
  *(undefined8 *)(psVar16 + -0x20) = uVar2;
  *(undefined8 *)(psVar16 + -0x1c) = uVar4;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  iVar9 = iVar9 + 1;
  *(undefined8 *)(psVar16 + -0x18) = uVar22;
LAB_02ae4f90:
  psVar16 = param_1 + 0x14;
  psVar15 = psVar16;
  if (psVar16 < psVar19) {
    while( true ) {
      sVar6 = *psVar13;
      psVar16 = psVar15 + -0x14;
      do {
        psVar20 = psVar16;
        psVar16 = psVar20 + 0x14;
        bVar8 = *(int *)(psVar20 + 0x16) < *(int *)(psVar13 + 2);
        if (*psVar16 != sVar6) {
          bVar8 = *psVar16 < sVar6;
        }
      } while (bVar8);
      psVar15 = psVar20 + 0x28;
      do {
        psVar23 = psVar19;
        psVar19 = psVar23 + -0x14;
        bVar8 = *(int *)(psVar23 + -0x12) < *(int *)(psVar13 + 2);
        if (*psVar19 != sVar6) {
          bVar8 = *psVar19 < sVar6;
        }
      } while (!bVar8);
      if (psVar19 < psVar16) break;
      uVar22 = *(undefined8 *)(psVar20 + 0x24);
      psVar20[0x24] = 0;
      psVar20[0x25] = 0;
      psVar20[0x26] = 0;
      psVar20[0x27] = 0;
      uVar1 = *(undefined8 *)psVar16;
      uVar3 = *(undefined8 *)(psVar20 + 0x18);
      *(undefined8 *)psVar16 = *(undefined8 *)psVar19;
      uVar2 = *(undefined8 *)(psVar20 + 0x1c);
      uVar4 = *(undefined8 *)(psVar20 + 0x20);
      *(undefined8 *)(psVar20 + 0x18) = *(undefined8 *)(psVar23 + -0x10);
      *(undefined8 *)(psVar20 + 0x1c) = *(undefined8 *)(psVar23 + -0xc);
      *(undefined8 *)(psVar20 + 0x20) = *(undefined8 *)(psVar23 + -8);
      psVar20[0x24] = 0;
      psVar20[0x25] = 0;
      psVar20[0x26] = 0;
      psVar20[0x27] = 0;
      uVar14 = *(undefined8 *)(psVar23 + -4);
      psVar23[-4] = 0;
      psVar23[-3] = 0;
      psVar23[-2] = 0;
      psVar23[-1] = 0;
      *(undefined8 *)(psVar20 + 0x24) = uVar14;
      plVar10 = *(long **)(psVar23 + -4);
      *(undefined8 *)psVar19 = uVar1;
      *(undefined8 *)(psVar23 + -0x10) = uVar3;
      *(undefined8 *)(psVar23 + -0xc) = uVar2;
      *(undefined8 *)(psVar23 + -8) = uVar4;
      psVar23[-4] = 0;
      psVar23[-3] = 0;
      psVar23[-2] = 0;
      psVar23[-1] = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      *(undefined8 *)(psVar23 + -4) = uVar22;
      iVar9 = iVar9 + 1;
      psVar20 = psVar19;
      if (psVar13 != psVar16) {
        psVar20 = psVar13;
      }
      psVar13 = psVar20;
    }
  }
  if (psVar16 != psVar13) {
    bVar8 = *(int *)(psVar13 + 2) < *(int *)(psVar16 + 2);
    if (*psVar13 != *psVar16) {
      bVar8 = *psVar13 < *psVar16;
    }
    if (bVar8) {
      uVar22 = *(undefined8 *)(psVar16 + 0x10);
      psVar16[0x10] = 0;
      psVar16[0x11] = 0;
      psVar16[0x12] = 0;
      psVar16[0x13] = 0;
      uVar1 = *(undefined8 *)psVar16;
      uVar3 = *(undefined8 *)(psVar16 + 4);
      *(undefined8 *)psVar16 = *(undefined8 *)psVar13;
      uVar2 = *(undefined8 *)(psVar16 + 8);
      uVar4 = *(undefined8 *)(psVar16 + 0xc);
      *(undefined8 *)(psVar16 + 4) = *(undefined8 *)(psVar13 + 4);
      *(undefined8 *)(psVar16 + 8) = *(undefined8 *)(psVar13 + 8);
      *(undefined8 *)(psVar16 + 0xc) = *(undefined8 *)(psVar13 + 0xc);
      psVar16[0x10] = 0;
      psVar16[0x11] = 0;
      psVar16[0x12] = 0;
      psVar16[0x13] = 0;
      uVar14 = *(undefined8 *)(psVar13 + 0x10);
      psVar13[0x10] = 0;
      psVar13[0x11] = 0;
      psVar13[0x12] = 0;
      psVar13[0x13] = 0;
      *(undefined8 *)(psVar16 + 0x10) = uVar14;
      plVar10 = *(long **)(psVar13 + 0x10);
      *(undefined8 *)psVar13 = uVar1;
      *(undefined8 *)(psVar13 + 4) = uVar3;
      *(undefined8 *)(psVar13 + 8) = uVar2;
      *(undefined8 *)(psVar13 + 0xc) = uVar4;
      psVar13[0x10] = 0;
      psVar13[0x11] = 0;
      psVar13[0x12] = 0;
      psVar13[0x13] = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      iVar9 = iVar9 + 1;
      *(undefined8 *)(psVar13 + 0x10) = uVar22;
    }
  }
  if (iVar9 == 0) {
    uVar12 = FUN_02ae5e10(param_1,psVar16);
    uVar11 = FUN_02ae5e10(psVar16 + 0x14,param_2);
    if ((uVar11 & 1) != 0) goto LAB_02ae536c;
    psVar13 = psVar16 + 0x14;
    if ((uVar12 & 1) != 0) goto LAB_02ae4e40;
  }
  if (((long)param_2 - (long)psVar16 >> 3) * -0x3333333333333333 <=
      ((long)psVar16 - (long)param_1 >> 3) * -0x3333333333333333) {
    FUN_02ae4e00(psVar16 + 0x14,param_2);
    param_2 = psVar16;
    goto LAB_02ae4e34;
  }
  FUN_02ae4e00(param_1,psVar16);
  psVar13 = psVar16 + 0x14;
  goto LAB_02ae4e40;
LAB_02ae536c:
  param_2 = psVar16;
  if ((uVar12 & 1) != 0) {
    return;
  }
  goto LAB_02ae4e34;
LAB_02ae5440:
  psVar19 = psVar13;
  bVar8 = *(int *)(psVar19 + 2) < *(int *)(psVar17 + 2);
  if (*psVar19 != *psVar17) {
    bVar8 = *psVar19 < *psVar17;
  }
  if (bVar8) {
    uVar1 = *(undefined8 *)psVar19;
    uVar3 = *(undefined8 *)(psVar19 + 4);
    plVar10 = (long *)0x0;
    uVar2 = *(undefined8 *)(psVar19 + 8);
    uVar4 = *(undefined8 *)(psVar19 + 0xc);
    uVar14 = *(undefined8 *)(psVar19 + 0x10);
    psVar19[0x10] = 0;
    psVar19[0x11] = 0;
    psVar19[0x12] = 0;
    psVar19[0x13] = 0;
    lVar18 = lVar21;
    while( true ) {
      *(undefined8 *)((long)param_1 + lVar18 + 0x78) =
           *(undefined8 *)((long)param_1 + lVar18 + 0x50);
      *(undefined8 *)((long)param_1 + lVar18 + 0x80) =
           *(undefined8 *)((long)param_1 + lVar18 + 0x58);
      *(undefined8 *)((long)param_1 + lVar18 + 0x98) = 0;
      *(undefined8 *)((long)param_1 + lVar18 + 0x88) =
           *(undefined8 *)((long)param_1 + lVar18 + 0x60);
      *(undefined8 *)((long)param_1 + lVar18 + 0x90) =
           *(undefined8 *)((long)param_1 + lVar18 + 0x68);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      uVar22 = *(undefined8 *)((long)param_1 + lVar18 + 0x70);
      *(undefined8 *)((long)param_1 + lVar18 + 0x70) = 0;
      *(undefined8 *)((long)param_1 + lVar18 + 0x98) = uVar22;
      if (lVar18 == -0x50) {
        psVar13 = param_1;
        goto LAB_02ae5520;
      }
      sVar6 = *(short *)((long)param_1 + lVar18 + 0x28);
      bVar8 = (int)((ulong)uVar1 >> 0x20) < *(int *)((long)param_1 + lVar18 + 0x2c);
      if (sVar6 != (short)uVar1) {
        bVar8 = (short)uVar1 < sVar6;
      }
      if (!bVar8) break;
      plVar10 = *(long **)((long)param_1 + lVar18 + 0x70);
      lVar18 = lVar18 + -0x28;
    }
    psVar13 = (short *)((long)param_1 + lVar18 + 0x50);
LAB_02ae5520:
    *(undefined8 *)psVar13 = uVar1;
    *(undefined8 *)(psVar13 + 4) = uVar3;
    *(undefined8 *)((long)param_1 + lVar18 + 0x60) = uVar2;
    *(undefined8 *)(psVar13 + 0xc) = uVar4;
    plVar10 = *(long **)((long)param_1 + lVar18 + 0x70);
    *(undefined8 *)((long)param_1 + lVar18 + 0x70) = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    *(undefined8 *)((long)param_1 + lVar18 + 0x70) = uVar14;
  }
  lVar21 = lVar21 + 0x28;
  psVar13 = psVar19 + 0x14;
  psVar17 = psVar19;
  if (psVar19 + 0x14 == param_2) {
switchD_02ae538c_caseD_0:
    return;
  }
  goto LAB_02ae5440;
}


