/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cff48; name: FUN_002cff48
 */


undefined1 * FUN_002cff48(long *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  size_t __n;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (param_3 == 0) {
    return param_2;
  }
  puVar17 = (undefined1 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar17) < param_3) {
    lVar18 = *param_1;
    puVar17 = puVar17 + (param_3 - lVar18);
    if ((long)puVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = param_1[2] - lVar18;
    puVar9 = (undefined1 *)(uVar5 * 2);
    if (puVar17 <= puVar9) {
      puVar17 = puVar9;
    }
    if (0x3ffffffffffffffe < uVar5) {
      puVar17 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar17 == (undefined1 *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,puVar17);
    }
    puVar9 = param_2 + (lVar3 - lVar18);
    puVar14 = puVar9 + param_3;
    puVar13 = puVar9;
    if ((0x3f < param_3) && ((param_4 + 1 <= puVar9 || (puVar14 <= param_4)))) {
      uVar2 = *param_4;
      uVar19 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12(
                                                  uVar2,CONCAT11(uVar2,uVar2)))))));
      uVar20 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12(
                                                  uVar2,CONCAT11(uVar2,uVar2)))))));
      uVar6 = param_3 & 0xffffffffffffffc0;
      puVar13 = puVar9 + uVar6;
      puVar10 = (undefined8 *)(param_2 + (lVar3 - lVar18) + 0x20);
      uVar5 = uVar6;
      do {
        puVar10[1] = uVar20;
        *puVar10 = uVar19;
        puVar10[3] = uVar20;
        puVar10[2] = uVar19;
        uVar5 = uVar5 - 0x40;
        puVar10[-3] = uVar20;
        puVar10[-4] = uVar19;
        puVar10[-1] = uVar20;
        puVar10[-2] = uVar19;
        puVar10 = puVar10 + 8;
      } while (uVar5 != 0);
      if (uVar6 == param_3) goto LAB_002d0090;
    }
    puVar8 = param_2 + lVar3 + ((param_3 - (long)puVar13) - lVar18);
    do {
      puVar8 = puVar8 + -1;
      *puVar13 = *param_4;
      puVar13 = puVar13 + 1;
    } while (puVar8 != (undefined1 *)0x0);
LAB_002d0090:
    sVar4 = (long)param_2 - *param_1;
    if (0 < (long)sVar4) {
      memcpy(puVar9 + -sVar4,(void *)*param_1,sVar4);
    }
    __n = param_1[1] - (long)param_2;
    if (0 < (long)__n) {
      memcpy(puVar14,param_2,__n);
      puVar14 = puVar14 + __n;
    }
    lVar18 = *param_1;
    *param_1 = (long)(puVar9 + -sVar4);
    param_1[1] = (long)puVar14;
    param_1[2] = (long)(puVar17 + lVar3);
    if (lVar18 == 0) {
      return puVar9;
    }
    FUN_0049e790(PTR_LAB_047cba48);
    return puVar9;
  }
  uVar5 = (long)puVar17 - (long)param_2;
  puVar9 = puVar17;
  if (uVar5 < param_3) {
    uVar6 = param_3 - uVar5;
    if (uVar6 != 0) {
      puVar9 = puVar17 + uVar6;
      puVar14 = puVar17;
      if ((0x3f < uVar6) && ((param_4 + 1 <= puVar17 || (puVar9 <= param_4)))) {
        uVar2 = *param_4;
        uVar19 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12
                                                  (uVar2,CONCAT11(uVar2,uVar2)))))));
        uVar20 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12
                                                  (uVar2,CONCAT11(uVar2,uVar2)))))));
        uVar12 = uVar6 & 0xffffffffffffffc0;
        puVar14 = puVar17 + uVar12;
        puVar10 = (undefined8 *)(puVar17 + 0x20);
        uVar11 = uVar12;
        do {
          puVar10[-3] = uVar20;
          puVar10[-4] = uVar19;
          puVar10[-1] = uVar20;
          puVar10[-2] = uVar19;
          uVar11 = uVar11 - 0x40;
          puVar10[1] = uVar20;
          *puVar10 = uVar19;
          puVar10[3] = uVar20;
          puVar10[2] = uVar19;
          puVar10 = puVar10 + 8;
        } while (uVar11 != 0);
        if (uVar6 == uVar12) goto LAB_002d0158;
      }
      puVar13 = param_2 + (param_3 - (long)puVar14);
      do {
        puVar13 = puVar13 + -1;
        *puVar14 = *param_4;
        puVar14 = puVar14 + 1;
      } while (puVar13 != (undefined1 *)0x0);
    }
LAB_002d0158:
    param_1[1] = (long)puVar9;
    if (uVar5 == 0) {
      return param_2;
    }
  }
  else {
    uVar5 = param_3;
  }
  puVar14 = param_2 + param_3;
  puVar13 = puVar9 + -param_3;
  sVar4 = (long)puVar9 - (long)puVar14;
  puVar8 = puVar9;
  if (puVar13 < puVar17) {
    puVar1 = puVar17 + (long)(puVar14 + (-(long)param_2 - (long)puVar9));
    if (puVar1 < (undefined1 *)0x40) {
      puVar7 = puVar9;
    }
    else if ((puVar17 <= puVar9) ||
            (puVar7 = puVar9, puVar9 + (long)puVar1 <= puVar9 + (long)param_2 + -(long)puVar14)) {
      puVar15 = (undefined1 *)((ulong)puVar1 & 0xffffffffffffffc0);
      puVar13 = puVar13 + (long)puVar15;
      puVar8 = puVar9 + (long)puVar15;
      puVar10 = (undefined8 *)(puVar9 + 0x20);
      puVar16 = (undefined8 *)(puVar9 + (long)param_2 + -(long)puVar14 + 0x20);
      puVar14 = puVar15;
      do {
        uVar19 = puVar16[-4];
        uVar21 = puVar16[-1];
        uVar20 = puVar16[-2];
        puVar14 = puVar14 + -0x40;
        uVar23 = puVar16[1];
        uVar22 = *puVar16;
        uVar25 = puVar16[3];
        uVar24 = puVar16[2];
        puVar10[-3] = puVar16[-3];
        puVar10[-4] = uVar19;
        puVar10[-1] = uVar21;
        puVar10[-2] = uVar20;
        puVar10[1] = uVar23;
        *puVar10 = uVar22;
        puVar10[3] = uVar25;
        puVar10[2] = uVar24;
        puVar10 = puVar10 + 8;
        puVar16 = puVar16 + 8;
      } while (puVar14 != (undefined1 *)0x0);
      puVar7 = puVar8;
      if (puVar15 == puVar1) goto LAB_002d01fc;
    }
    do {
      puVar14 = puVar13 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar13;
      puVar7 = puVar8;
      puVar13 = puVar14;
    } while (puVar14 < puVar17);
  }
LAB_002d01fc:
  param_1[1] = (long)puVar8;
  if (sVar4 != 0) {
    memmove(puVar9 + -sVar4,param_2,sVar4);
  }
  puVar17 = param_4;
  if ((param_2 <= param_4) && (puVar17 = param_4 + param_3, (undefined1 *)param_1[1] <= param_4)) {
    puVar17 = param_4;
  }
  if ((uVar5 < 0x40) || ((param_2 < puVar17 + 1 && (puVar17 < param_2 + uVar5)))) {
    puVar9 = param_2;
    uVar6 = uVar5;
  }
  else {
    uVar2 = *puVar17;
    uVar19 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12(
                                                  uVar2,CONCAT11(uVar2,uVar2)))))));
    uVar20 = CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(uVar2,CONCAT12(
                                                  uVar2,CONCAT11(uVar2,uVar2)))))));
    uVar12 = uVar5 & 0xffffffffffffffc0;
    puVar9 = param_2 + uVar12;
    uVar6 = uVar5 & 0x3f;
    puVar10 = (undefined8 *)(param_2 + 0x20);
    uVar11 = uVar12;
    do {
      puVar10[1] = uVar20;
      *puVar10 = uVar19;
      puVar10[3] = uVar20;
      puVar10[2] = uVar19;
      uVar11 = uVar11 - 0x40;
      puVar10[-3] = uVar20;
      puVar10[-4] = uVar19;
      puVar10[-1] = uVar20;
      puVar10[-2] = uVar19;
      puVar10 = puVar10 + 8;
    } while (uVar11 != 0);
    if (uVar5 == uVar12) {
      return param_2;
    }
  }
  uVar11 = uVar6 - 1;
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar6 = uVar6 - 1;
    *puVar9 = *puVar17;
    puVar9 = puVar9 + 1;
  }
  if (2 < uVar11) {
    do {
      *puVar9 = *puVar17;
      puVar9[1] = *puVar17;
      puVar9[2] = *puVar17;
      puVar9[3] = *puVar17;
      uVar6 = uVar6 - 4;
      puVar9 = puVar9 + 4;
    } while (uVar6 != 0);
  }
  return param_2;
}


