/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b1c6c; name: FUN_002b1c6c
 */


undefined8 * FUN_002b1c6c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  size_t __n;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar14 = (long)param_4 - (long)param_3;
  if (lVar14 < 1) {
    return param_2;
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar12 = (long)param_2 - lVar4 >> 4;
  lVar13 = lVar14 >> 4;
  if (param_1[2] - (long)puVar3 >> 4 < lVar13) {
    uVar5 = lVar13 + ((long)puVar3 - lVar4 >> 4);
    if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - lVar4;
    uVar8 = lVar4 >> 3;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (0x7fffffffffffffe < (ulong)(lVar4 >> 4)) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar4 = 0;
      puVar3 = (undefined8 *)(lVar12 << 4);
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar5 << 4);
      puVar3 = (undefined8 *)(lVar4 + lVar12 * 0x10);
    }
    if (((int)lVar14 - 0x10U >> 4 & 1) == 0) {
      uVar15 = param_3[1];
      *puVar3 = *param_3;
      puVar3[1] = uVar15;
      param_3 = param_3 + 2;
      puVar2 = puVar3 + 2;
    }
    else {
      puVar2 = puVar3;
    }
    puVar7 = puVar3 + lVar13 * 2;
    if (0xf < lVar14 - 0x10U) {
      do {
        uVar15 = param_3[1];
        *puVar2 = *param_3;
        puVar2[1] = uVar15;
        puVar6 = param_3 + 2;
        uVar15 = param_3[3];
        param_3 = param_3 + 4;
        puVar2[2] = *puVar6;
        puVar2[3] = uVar15;
        puVar2 = puVar2 + 4;
      } while (puVar7 != puVar2);
    }
    sVar1 = (long)param_2 - *param_1;
    if (0 < (long)sVar1) {
      memcpy((void *)((long)puVar3 - sVar1),(void *)*param_1,sVar1);
    }
    __n = param_1[1] - (long)param_2;
    if (0 < (long)__n) {
      memcpy(puVar7,param_2,__n);
      puVar7 = (undefined8 *)((long)puVar7 + __n);
    }
    lVar14 = *param_1;
    *param_1 = (long)((long)puVar3 - sVar1);
    param_1[1] = (long)puVar7;
    param_1[2] = lVar4 + uVar5 * 0x10;
    if (lVar14 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    return puVar3;
  }
  uVar5 = (long)puVar3 - (long)param_2 >> 4;
  puVar2 = puVar3;
  if (lVar13 <= (long)uVar5) goto LAB_002b1ecc;
  puVar7 = param_3 + uVar5 * 2;
  if (puVar7 != param_4) {
    uVar8 = (long)param_4 + (~uVar5 * 0x10 - (long)param_3);
    puVar6 = puVar3;
    if (uVar8 < 0x70) {
      puVar10 = puVar7;
    }
    else {
      uVar8 = uVar8 >> 4;
      puVar10 = puVar7;
      if (param_3 + (uVar5 + uVar8) * 2 + 2 <= puVar3 || puVar3 + uVar8 * 2 + 2 <= puVar7) {
        uVar9 = uVar8 + 1 & 0x1ffffffffffffff8;
        puVar6 = puVar3 + uVar9 * 2;
        puVar10 = puVar7 + uVar9 * 2;
        puVar2 = puVar3 + 8;
        puVar11 = puVar7 + 8;
        uVar5 = uVar9;
        do {
          uVar17 = puVar11[-8];
          uVar16 = puVar11[-5];
          uVar15 = puVar11[-6];
          uVar5 = uVar5 - 8;
          uVar21 = puVar11[-3];
          uVar20 = puVar11[-4];
          uVar19 = puVar11[-1];
          uVar18 = puVar11[-2];
          uVar25 = puVar11[1];
          uVar24 = *puVar11;
          uVar23 = puVar11[3];
          uVar22 = puVar11[2];
          uVar29 = puVar11[5];
          uVar28 = puVar11[4];
          uVar27 = puVar11[7];
          uVar26 = puVar11[6];
          puVar2[-7] = puVar11[-7];
          puVar2[-8] = uVar17;
          puVar2[-5] = uVar16;
          puVar2[-6] = uVar15;
          puVar11 = puVar11 + 0x10;
          puVar2[-3] = uVar21;
          puVar2[-4] = uVar20;
          puVar2[-1] = uVar19;
          puVar2[-2] = uVar18;
          puVar2[1] = uVar25;
          *puVar2 = uVar24;
          puVar2[3] = uVar23;
          puVar2[2] = uVar22;
          puVar2[5] = uVar29;
          puVar2[4] = uVar28;
          puVar2[7] = uVar27;
          puVar2[6] = uVar26;
          puVar2 = puVar2 + 0x10;
        } while (uVar5 != 0);
        puVar2 = puVar6;
        if (uVar8 + 1 == uVar9) goto LAB_002b1ebc;
      }
    }
    do {
      puVar11 = puVar10 + 2;
      uVar15 = *puVar10;
      puVar6[1] = puVar10[1];
      *puVar6 = uVar15;
      puVar2 = puVar6 + 2;
      puVar6 = puVar6 + 2;
      puVar10 = puVar11;
    } while (param_4 != puVar11);
  }
LAB_002b1ebc:
  param_1[1] = (long)puVar2;
  if ((long)puVar3 - (long)param_2 < 1) {
    return param_2;
  }
  param_4 = puVar7;
LAB_002b1ecc:
  sVar1 = (long)puVar2 - (long)(param_2 + lVar13 * 2);
  puVar7 = puVar2;
  if (puVar2 + lVar13 * -2 < puVar3) {
    puVar6 = puVar2;
    puVar10 = puVar2 + lVar13 * -2;
    do {
      puVar11 = puVar10 + 2;
      uVar15 = *puVar10;
      puVar7 = puVar6 + 2;
      puVar6[1] = puVar10[1];
      *puVar6 = uVar15;
      puVar6 = puVar7;
      puVar10 = puVar11;
    } while (puVar11 < puVar3);
  }
  param_1[1] = (long)puVar7;
  if (sVar1 != 0) {
    memmove(puVar2 + ((long)sVar1 >> 4) * -2,param_2,sVar1);
  }
  if ((long)param_4 - (long)param_3 == 0) {
    return param_2;
  }
  uVar5 = ((long)param_4 - (long)param_3) - 0x10;
  puVar3 = param_2;
  if (uVar5 < 0x70) {
  }
  else {
    uVar5 = uVar5 >> 4;
    if ((param_3 + uVar5 * 2 + 2 <= param_2) ||
       ((undefined8 *)(lVar4 + (lVar12 + uVar5) * 0x10 + 0x10) <= param_3)) {
      uVar9 = uVar5 + 1 & 0x1ffffffffffffff8;
      puVar2 = param_3 + 8;
      param_3 = param_3 + uVar9 * 2;
      puVar3 = param_2 + uVar9 * 2;
      puVar7 = (undefined8 *)(lVar4 + lVar12 * 0x10 + 0x40);
      uVar8 = uVar9;
      do {
        uVar18 = puVar2[-7];
        uVar17 = puVar2[-8];
        uVar16 = puVar2[-5];
        uVar15 = puVar2[-6];
        uVar8 = uVar8 - 8;
        uVar22 = puVar2[-3];
        uVar21 = puVar2[-4];
        uVar20 = puVar2[-1];
        uVar19 = puVar2[-2];
        uVar25 = *puVar2;
        uVar24 = puVar2[3];
        uVar23 = puVar2[2];
        uVar29 = puVar2[5];
        uVar28 = puVar2[4];
        uVar27 = puVar2[7];
        uVar26 = puVar2[6];
        puVar7[1] = puVar2[1];
        *puVar7 = uVar25;
        puVar7[3] = uVar24;
        puVar7[2] = uVar23;
        puVar2 = puVar2 + 0x10;
        puVar7[5] = uVar29;
        puVar7[4] = uVar28;
        puVar7[7] = uVar27;
        puVar7[6] = uVar26;
        puVar7[-7] = uVar18;
        puVar7[-8] = uVar17;
        puVar7[-5] = uVar16;
        puVar7[-6] = uVar15;
        puVar7[-3] = uVar22;
        puVar7[-4] = uVar21;
        puVar7[-1] = uVar20;
        puVar7[-2] = uVar19;
        puVar7 = puVar7 + 0x10;
      } while (uVar8 != 0);
      if (uVar5 + 1 == uVar9) {
        return param_2;
      }
    }
  }
  do {
    puVar2 = param_3 + 2;
    uVar15 = *param_3;
    puVar3[1] = param_3[1];
    *puVar3 = uVar15;
    puVar3 = puVar3 + 2;
    param_3 = puVar2;
  } while (param_4 != puVar2);
  return param_2;
}


