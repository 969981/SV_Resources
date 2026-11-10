/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae33c0; name: FUN_02ae33c0
 */


void FUN_02ae33c0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  undefined2 uVar11;
  short sVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  short *psVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
LAB_02ae340c:
  puVar28 = (undefined8 *)((long)param_2 - 0x1c);
  puVar29 = param_1;
LAB_02ae3418:
  param_1 = puVar29;
  uVar15 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar15 >> 2) * 0x6db6db6db6db6db7) < 6) {
                    /* WARNING: Could not recover jumptable at 0x02ae3b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_02ae3b18 +
              (ulong)*(ushort *)(&DAT_03d60b8c + ((long)uVar15 >> 2) * -0x2492492492492492) * 4))();
    return;
  }
  if (0x363 < (long)uVar15) {
    uVar30 = uVar15 / 0x38;
    puVar29 = (undefined8 *)((long)param_1 + uVar30 * 0x1c);
    if ((long)uVar15 < 0x6d45) {
      psVar17 = (short *)((long)param_1 + uVar30 * 0x1c + 2);
      sVar9 = *psVar17;
      piVar21 = (int *)((long)param_1 + uVar30 * 0x1c + 4);
      bVar1 = *piVar21 < *(int *)((long)param_1 + 4);
      if (sVar9 != *(short *)((long)param_1 + 2)) {
        bVar1 = sVar9 < *(short *)((long)param_1 + 2);
      }
      bVar2 = *(int *)(param_2 + -3) < *piVar21;
      if (sVar9 != *(short *)((long)param_2 - 0x1a)) {
        bVar2 = *(short *)((long)param_2 - 0x1a) < sVar9;
      }
      if (bVar1) {
        if (bVar2) {
          uVar4 = *param_1;
          uVar25 = param_1[1];
          uVar23 = param_1[2];
          uVar8 = *(undefined4 *)(param_1 + 3);
          uVar26 = *(undefined8 *)((long)param_2 - 0xc);
          uVar5 = *puVar28;
          uVar24 = *(undefined8 *)((long)param_2 - 0x14);
          *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_2 - 4);
          param_1[1] = uVar24;
          param_1[2] = uVar26;
          *param_1 = uVar5;
          *(undefined4 *)((long)param_2 - 4) = uVar8;
          *(undefined8 *)((long)param_2 - 0x14) = uVar25;
          *(undefined8 *)((long)param_2 - 0xc) = uVar23;
          *puVar28 = uVar4;
        }
        else {
          uVar4 = *param_1;
          uVar25 = param_1[1];
          uVar23 = param_1[2];
          uVar8 = *(undefined4 *)(param_1 + 3);
          uVar26 = puVar29[2];
          uVar5 = *puVar29;
          uVar24 = puVar29[1];
          *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar29 + 3);
          param_1[1] = uVar24;
          param_1[2] = uVar26;
          *param_1 = uVar5;
          *(undefined4 *)(puVar29 + 3) = uVar8;
          puVar29[1] = uVar25;
          puVar29[2] = uVar23;
          *puVar29 = uVar4;
          bVar1 = *(int *)(param_2 + -3) < *piVar21;
          if (*(short *)((long)param_2 - 0x1a) != *psVar17) {
            bVar1 = *(short *)((long)param_2 - 0x1a) < *psVar17;
          }
          if (bVar1) {
            uVar4 = *puVar29;
            uVar25 = puVar29[1];
            uVar23 = puVar29[2];
            uVar8 = *(undefined4 *)(puVar29 + 3);
            uVar26 = *(undefined8 *)((long)param_2 - 0xc);
            uVar5 = *puVar28;
            uVar24 = *(undefined8 *)((long)param_2 - 0x14);
            *(undefined4 *)(puVar29 + 3) = *(undefined4 *)((long)param_2 - 4);
            puVar29[1] = uVar24;
            puVar29[2] = uVar26;
            *puVar29 = uVar5;
            *(undefined4 *)((long)param_2 - 4) = uVar8;
            *(undefined8 *)((long)param_2 - 0x14) = uVar25;
            *(undefined8 *)((long)param_2 - 0xc) = uVar23;
            *puVar28 = uVar4;
            goto LAB_02ae36b0;
          }
        }
LAB_02ae36b8:
        iVar14 = 1;
      }
      else if (!bVar2) {
        iVar14 = 0;
      }
      else {
        uVar4 = *puVar29;
        uVar25 = puVar29[1];
        uVar23 = puVar29[2];
        uVar8 = *(undefined4 *)(puVar29 + 3);
        uVar26 = *(undefined8 *)((long)param_2 - 0xc);
        uVar5 = *puVar28;
        uVar24 = *(undefined8 *)((long)param_2 - 0x14);
        *(undefined4 *)(puVar29 + 3) = *(undefined4 *)((long)param_2 - 4);
        puVar29[1] = uVar24;
        puVar29[2] = uVar26;
        *puVar29 = uVar5;
        *(undefined4 *)((long)param_2 - 4) = uVar8;
        *(undefined8 *)((long)param_2 - 0x14) = uVar25;
        *(undefined8 *)((long)param_2 - 0xc) = uVar23;
        *puVar28 = uVar4;
        bVar1 = *piVar21 < *(int *)((long)param_1 + 4);
        if (*psVar17 != *(short *)((long)param_1 + 2)) {
          bVar1 = *psVar17 < *(short *)((long)param_1 + 2);
        }
        if (!bVar1) goto LAB_02ae36b8;
        uVar4 = *param_1;
        uVar25 = param_1[1];
        uVar23 = param_1[2];
        uVar8 = *(undefined4 *)(param_1 + 3);
        uVar26 = puVar29[2];
        uVar5 = *puVar29;
        uVar24 = puVar29[1];
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar29 + 3);
        param_1[1] = uVar24;
        param_1[2] = uVar26;
        *param_1 = uVar5;
        *(undefined4 *)(puVar29 + 3) = uVar8;
        puVar29[1] = uVar25;
        puVar29[2] = uVar23;
        *puVar29 = uVar4;
LAB_02ae36b0:
        iVar14 = 2;
      }
    }
    else {
      lVar16 = (uVar15 / 0x70) * 0x1c;
      iVar14 = FUN_02ae4530(param_1,(long)param_1 + lVar16,puVar29,(long)puVar29 + lVar16,puVar28);
    }
    sVar9 = *(short *)((long)param_1 + 2);
    iVar6 = *(int *)((long)param_1 + 4);
    sVar10 = *(short *)((long)param_1 + uVar30 * 0x1c + 2);
    iVar7 = *(int *)((long)param_1 + uVar30 * 0x1c + 4);
    bVar1 = iVar6 < iVar7;
    if (sVar9 != sVar10) {
      bVar1 = sVar9 < sVar10;
    }
    if (!bVar1) goto LAB_02ae3700;
    puVar19 = puVar28;
    goto LAB_02ae378c;
  }
  sVar12 = *(short *)((long)param_1 + 0x1e);
  sVar9 = *(short *)((long)param_1 + 2);
  sVar10 = *(short *)((long)param_1 + 0x3a);
  bVar1 = *(int *)(param_1 + 4) < *(int *)((long)param_1 + 4);
  if (sVar12 != sVar9) {
    bVar1 = sVar12 < sVar9;
  }
  puVar29 = param_1 + 7;
  puVar28 = (undefined8 *)((long)param_1 + 0x1c);
  bVar2 = *(int *)((long)param_1 + 0x3c) < *(int *)(param_1 + 4);
  if (sVar10 != sVar12) {
    bVar2 = sVar10 < sVar12;
  }
  if (bVar1) {
    if (bVar2) {
      local_80 = *param_1;
      local_78 = param_1[1];
      local_70 = param_1[2];
      local_68 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 10);
      param_1[1] = param_1[8];
      param_1[2] = param_1[9];
      *param_1 = *puVar29;
    }
    else {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar25 = param_1[2];
      uVar8 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x34);
      param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
      param_1[2] = *(undefined8 *)((long)param_1 + 0x2c);
      *param_1 = *puVar28;
      *(undefined4 *)((long)param_1 + 0x34) = uVar8;
      *(undefined8 *)((long)param_1 + 0x24) = uVar5;
      *(undefined8 *)((long)param_1 + 0x2c) = uVar25;
      *puVar28 = uVar4;
      bVar1 = *(int *)((long)param_1 + 0x3c) < *(int *)(param_1 + 4);
      if (sVar10 != *(short *)((long)param_1 + 0x1e)) {
        bVar1 = sVar10 < *(short *)((long)param_1 + 0x1e);
      }
      if (!bVar1) goto LAB_02ae3db8;
      local_80 = *puVar28;
      local_78 = *(undefined8 *)((long)param_1 + 0x24);
      local_70 = *(undefined8 *)((long)param_1 + 0x2c);
      local_68 = *(undefined4 *)((long)param_1 + 0x34);
      *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_1 + 10);
      *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
      *(undefined8 *)((long)param_1 + 0x2c) = param_1[9];
      *puVar28 = *puVar29;
    }
    *(undefined4 *)(param_1 + 10) = local_68;
    *puVar29 = local_80;
    param_1[8] = local_78;
    param_1[9] = local_70;
  }
  else if (bVar2) {
    uVar4 = *puVar28;
    uVar5 = *(undefined8 *)((long)param_1 + 0x24);
    uVar25 = *(undefined8 *)((long)param_1 + 0x2c);
    uVar8 = *(undefined4 *)((long)param_1 + 0x34);
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_1 + 10);
    *puVar28 = *puVar29;
    *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
    *(undefined8 *)((long)param_1 + 0x2c) = param_1[9];
    *(undefined4 *)(param_1 + 10) = uVar8;
    param_1[8] = uVar5;
    param_1[9] = uVar25;
    *puVar29 = uVar4;
    bVar1 = *(int *)(param_1 + 4) < *(int *)((long)param_1 + 4);
    if (*(short *)((long)param_1 + 0x1e) != sVar9) {
      bVar1 = *(short *)((long)param_1 + 0x1e) < sVar9;
    }
    if (bVar1) {
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar25 = param_1[2];
      uVar8 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x34);
      param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
      param_1[2] = *(undefined8 *)((long)param_1 + 0x2c);
      *param_1 = *puVar28;
      *(undefined4 *)((long)param_1 + 0x34) = uVar8;
      *(undefined8 *)((long)param_1 + 0x24) = uVar5;
      *(undefined8 *)((long)param_1 + 0x2c) = uVar25;
      *puVar28 = uVar4;
    }
  }
LAB_02ae3db8:
  if ((undefined8 *)((long)param_1 + 0x54U) == param_2) {
    return;
  }
  lVar16 = 0;
  puVar28 = (undefined8 *)((long)param_1 + 0x54U);
  goto LAB_02ae3dc8;
LAB_02ae3700:
  puVar20 = param_2 + -7;
  while (puVar19 = puVar20, param_1 != puVar19) {
    bVar1 = *(int *)((long)puVar19 + 4) < iVar7;
    if (*(short *)((long)puVar19 + 2) != sVar10) {
      bVar1 = *(short *)((long)puVar19 + 2) < sVar10;
    }
    puVar20 = (undefined8 *)((long)puVar19 - 0x1c);
    if (bVar1) goto code_r0x02ae3740;
  }
  puVar20 = (undefined8 *)((long)param_1 + 0x1c);
  bVar1 = iVar6 < *(int *)(param_2 + -3);
  if (sVar9 != *(short *)((long)param_2 - 0x1a)) {
    bVar1 = sVar9 < *(short *)((long)param_2 - 0x1a);
  }
  if (!bVar1) {
    if (puVar20 == puVar28) {
      return;
    }
    puVar20 = param_1 + 7;
    while( true ) {
      bVar1 = iVar6 < *(int *)(puVar20 + -3);
      if (sVar9 != *(short *)((long)puVar20 - 0x1a)) {
        bVar1 = sVar9 < *(short *)((long)puVar20 - 0x1a);
      }
      if (bVar1) break;
      puVar20 = (undefined8 *)((long)puVar20 + 0x1c);
      if (param_2 == puVar20) {
        return;
      }
    }
    uVar25 = *(undefined8 *)((long)puVar20 - 0x1c);
    uVar24 = *(undefined8 *)((long)puVar20 - 0x14);
    uVar23 = *(undefined8 *)((long)puVar20 - 0xc);
    uVar8 = *(undefined4 *)((long)puVar20 - 4);
    uVar26 = *(undefined8 *)((long)param_2 - 0xc);
    uVar4 = *puVar28;
    uVar5 = *(undefined8 *)((long)param_2 - 0x14);
    *(undefined4 *)((long)puVar20 - 4) = *(undefined4 *)((long)param_2 - 4);
    *(undefined8 *)((long)puVar20 - 0xc) = uVar26;
    *(undefined8 *)((long)puVar20 - 0x14) = uVar5;
    *(undefined8 *)((long)puVar20 - 0x1c) = uVar4;
    *(undefined4 *)((long)param_2 - 4) = uVar8;
    *(undefined8 *)((long)param_2 - 0x14) = uVar24;
    *(undefined8 *)((long)param_2 - 0xc) = uVar23;
    *puVar28 = uVar25;
  }
  if (puVar20 == puVar28) {
    return;
  }
  puVar19 = puVar28;
  while( true ) {
    sVar9 = *(short *)((long)param_1 + 2);
    puVar29 = (undefined8 *)((long)puVar20 - 0x1c);
    do {
      puVar31 = puVar29;
      bVar1 = *(int *)((long)param_1 + 4) < *(int *)(puVar31 + 4);
      if (sVar9 != *(short *)((long)puVar31 + 0x1e)) {
        bVar1 = sVar9 < *(short *)((long)puVar31 + 0x1e);
      }
      puVar29 = (undefined8 *)((long)puVar31 + 0x1c);
    } while (!bVar1);
    puVar20 = puVar31 + 7;
    do {
      puVar22 = puVar19;
      puVar19 = (undefined8 *)((long)puVar22 - 0x1c);
      bVar1 = *(int *)((long)param_1 + 4) < *(int *)(puVar22 + -3);
      if (sVar9 != *(short *)((long)puVar22 - 0x1a)) {
        bVar1 = sVar9 < *(short *)((long)puVar22 - 0x1a);
      }
    } while (bVar1);
    if (puVar19 <= puVar29) break;
    uVar4 = *puVar29;
    uVar25 = *(undefined8 *)((long)puVar31 + 0x24);
    uVar23 = *(undefined8 *)((long)puVar31 + 0x2c);
    uVar8 = *(undefined4 *)((long)puVar31 + 0x34);
    uVar26 = *(undefined8 *)((long)puVar22 - 0xc);
    uVar5 = *puVar19;
    uVar24 = *(undefined8 *)((long)puVar22 - 0x14);
    *(undefined4 *)((long)puVar31 + 0x34) = *(undefined4 *)((long)puVar22 - 4);
    *(undefined8 *)((long)puVar31 + 0x24) = uVar24;
    *(undefined8 *)((long)puVar31 + 0x2c) = uVar26;
    *puVar29 = uVar5;
    *(undefined4 *)((long)puVar22 - 4) = uVar8;
    *(undefined8 *)((long)puVar22 - 0x14) = uVar25;
    *(undefined8 *)((long)puVar22 - 0xc) = uVar23;
    *puVar19 = uVar4;
  }
  goto LAB_02ae3418;
code_r0x02ae3740:
  uVar4 = *param_1;
  uVar25 = param_1[1];
  iVar14 = iVar14 + 1;
  uVar26 = param_1[2];
  uVar8 = *(undefined4 *)(param_1 + 3);
  uVar23 = *puVar19;
  uVar5 = puVar19[1];
  uVar24 = puVar19[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar19 + 3);
  param_1[1] = uVar5;
  param_1[2] = uVar24;
  *param_1 = uVar23;
  *(undefined4 *)(puVar19 + 3) = uVar8;
  *puVar19 = uVar4;
  puVar19[1] = uVar25;
  puVar19[2] = uVar26;
LAB_02ae378c:
  puVar20 = (undefined8 *)((long)param_1 + 0x1c);
  puVar31 = puVar20;
  if (puVar20 < puVar19) {
    while( true ) {
      sVar9 = *(short *)((long)puVar29 + 2);
      puVar20 = (undefined8 *)((long)puVar31 - 0x1c);
      do {
        puVar22 = puVar20;
        bVar1 = *(int *)(puVar22 + 4) < *(int *)((long)puVar29 + 4);
        if (*(short *)((long)puVar22 + 0x1e) != sVar9) {
          bVar1 = *(short *)((long)puVar22 + 0x1e) < sVar9;
        }
        puVar20 = (undefined8 *)((long)puVar22 + 0x1c);
      } while (bVar1);
      puVar31 = puVar22 + 7;
      do {
        puVar18 = puVar19;
        bVar1 = *(int *)(puVar18 + -3) < *(int *)((long)puVar29 + 4);
        if (*(short *)((long)puVar18 + -0x1a) != sVar9) {
          bVar1 = *(short *)((long)puVar18 + -0x1a) < sVar9;
        }
        puVar19 = (undefined8 *)((long)puVar18 + -0x1c);
      } while (!bVar1);
      if (puVar19 < puVar20) break;
      uVar4 = *puVar20;
      uVar5 = *(undefined8 *)((long)puVar22 + 0x24);
      uVar25 = *(undefined8 *)((long)puVar22 + 0x2c);
      iVar14 = iVar14 + 1;
      puVar3 = puVar19;
      if (puVar29 != puVar20) {
        puVar3 = puVar29;
      }
      uVar8 = *(undefined4 *)((long)puVar22 + 0x34);
      uVar26 = *(undefined8 *)((long)puVar18 + -0xc);
      uVar24 = *puVar19;
      uVar23 = *(undefined8 *)((long)puVar18 + -0x14);
      *(undefined4 *)((long)puVar22 + 0x34) = *(undefined4 *)((long)puVar18 + -4);
      *(undefined8 *)((long)puVar22 + 0x24) = uVar23;
      *(undefined8 *)((long)puVar22 + 0x2c) = uVar26;
      *puVar20 = uVar24;
      *(undefined4 *)((long)puVar18 + -4) = uVar8;
      *(undefined8 *)((long)puVar18 + -0x14) = uVar5;
      *(undefined8 *)((long)puVar18 + -0xc) = uVar25;
      *puVar19 = uVar4;
      puVar29 = puVar3;
    }
  }
  if (puVar20 != puVar29) {
    bVar1 = *(int *)((long)puVar29 + 4) < *(int *)((long)puVar20 + 4);
    if (*(short *)((long)puVar29 + 2) != *(short *)((long)puVar20 + 2)) {
      bVar1 = *(short *)((long)puVar29 + 2) < *(short *)((long)puVar20 + 2);
    }
    if (bVar1) {
      uVar4 = *puVar20;
      uVar25 = puVar20[1];
      iVar14 = iVar14 + 1;
      uVar23 = puVar20[2];
      uVar8 = *(undefined4 *)(puVar20 + 3);
      uVar5 = *puVar29;
      uVar24 = puVar29[1];
      uVar26 = puVar29[2];
      *(undefined4 *)(puVar20 + 3) = *(undefined4 *)(puVar29 + 3);
      *puVar20 = uVar5;
      puVar20[1] = uVar24;
      puVar20[2] = uVar26;
      *(undefined4 *)(puVar29 + 3) = uVar8;
      puVar29[1] = uVar25;
      puVar29[2] = uVar23;
      *puVar29 = uVar4;
    }
  }
  if (iVar14 == 0) {
    uVar15 = FUN_02ae4790(param_1,puVar20);
    uVar30 = FUN_02ae4790((undefined8 *)((long)puVar20 + 0x1cU),param_2);
    if ((uVar30 & 1) != 0) goto LAB_02ae3af4;
    puVar29 = (undefined8 *)((long)puVar20 + 0x1cU);
    if ((uVar15 & 1) != 0) goto LAB_02ae3418;
  }
  if (((long)param_2 - (long)puVar20 >> 2) * 0x6db6db6db6db6db7 <=
      ((long)puVar20 - (long)param_1 >> 2) * 0x6db6db6db6db6db7) {
    FUN_02ae33c0((long)puVar20 + 0x1c,param_2);
    param_2 = puVar20;
    goto LAB_02ae340c;
  }
  FUN_02ae33c0(param_1,puVar20);
  puVar29 = (undefined8 *)((long)puVar20 + 0x1c);
  goto LAB_02ae3418;
LAB_02ae3af4:
  param_2 = puVar20;
  if ((uVar15 & 1) != 0) {
    return;
  }
  goto LAB_02ae340c;
LAB_02ae3dc8:
  sVar9 = *(short *)((long)puVar28 + 2);
  iVar14 = *(int *)((long)puVar28 + 4);
  bVar1 = iVar14 < *(int *)((long)puVar29 + 4);
  if (sVar9 != *(short *)((long)puVar29 + 2)) {
    bVar1 = sVar9 < *(short *)((long)puVar29 + 2);
  }
  if (bVar1) {
    uVar4 = puVar28[1];
    uVar5 = puVar28[2];
    uVar8 = *(undefined4 *)(puVar28 + 3);
    uVar11 = *(undefined2 *)puVar28;
    lVar13 = lVar16;
    do {
      lVar27 = lVar13;
      *(undefined8 *)((long)param_1 + lVar27 + 0x54) =
           *(undefined8 *)((long)param_1 + lVar27 + 0x38);
      *(undefined8 *)((long)param_1 + lVar27 + 0x5c) =
           *(undefined8 *)((long)param_1 + lVar27 + 0x40);
      *(undefined8 *)((long)param_1 + lVar27 + 100) = *(undefined8 *)((long)param_1 + lVar27 + 0x48)
      ;
      *(undefined4 *)((long)param_1 + lVar27 + 0x6c) =
           *(undefined4 *)((long)param_1 + lVar27 + 0x50);
      if (lVar27 == -0x38) {
        puVar29 = param_1;
        goto LAB_02ae3e7c;
      }
      sVar10 = *(short *)((long)param_1 + lVar27 + 0x1e);
      bVar1 = iVar14 < *(int *)((long)param_1 + lVar27 + 0x20);
      if (sVar9 != sVar10) {
        bVar1 = sVar9 < sVar10;
      }
      lVar13 = lVar27 + -0x1c;
    } while (bVar1);
    puVar29 = (undefined8 *)((long)param_1 + lVar27 + 0x38);
LAB_02ae3e7c:
    *(undefined2 *)puVar29 = uVar11;
    *(short *)((long)puVar29 + 2) = sVar9;
    *(int *)((long)puVar29 + 4) = iVar14;
    *(undefined4 *)(puVar29 + 3) = uVar8;
    puVar29[1] = uVar4;
    puVar29[2] = uVar5;
  }
  puVar20 = (undefined8 *)((long)puVar28 + 0x1c);
  lVar16 = lVar16 + 0x1c;
  puVar29 = puVar28;
  puVar28 = puVar20;
  if (puVar20 == param_2) {
    return;
  }
  goto LAB_02ae3dc8;
}


