/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00879da4; name: FUN_00879da4
 */


void FUN_00879da4(long param_1,uint *param_2,uint param_3)

{
  float *pfVar1;
  void *__dest;
  undefined8 *puVar2;
  char cVar3;
  float fVar4;
  float *pfVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong __n;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
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
  undefined8 uVar30;
  undefined8 uVar31;
  
  if (*param_2 == 0) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x18);
  lVar11 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  __n = (ulong)(param_3 << 2);
  if ((param_3 & 0xf) == 0) {
    uVar18 = 0;
    uVar17 = 0;
    do {
      memcpy((void *)(lVar16 + (uVar18 & 0xffffff00) * 4),*(void **)(param_2 + uVar17 * 2 + 10),__n)
      ;
      uVar17 = uVar17 + 1;
      uVar18 = uVar18 + 0x100;
    } while (uVar17 < *param_2);
  }
  else {
    uVar18 = 0;
    uVar17 = 0;
    do {
      __dest = (void *)(lVar16 + (uVar18 & 0xffffff00) * 4);
      memcpy(__dest,*(void **)(param_2 + uVar17 * 2 + 10),__n);
      memset((void *)((long)__dest + (ulong)param_3 * 4),0,(ulong)((param_3 & 0xf) * -4 + 0x40));
      uVar17 = uVar17 + 1;
      uVar18 = uVar18 + 0x100;
    } while (uVar17 < *param_2);
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    lVar15 = lVar11;
    lVar9 = lVar11;
    if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_00879ebc;
LAB_00879fd4:
    lVar9 = lVar16;
    if (*(char *)(param_1 + 600) != '\0') goto LAB_00879ef0;
LAB_00879fe4:
    cVar3 = *(char *)(param_1 + 0x290);
    uVar7 = *param_2;
    lVar16 = lVar15;
    lVar15 = lVar9;
joined_r0x0087a114:
    if (cVar3 != '\0') goto LAB_0087a118;
LAB_0087a1e4:
    lVar16 = lVar15;
    goto LAB_0087a2b4;
  }
  FUN_0087a9bc(param_1,param_2,param_3,lVar16,lVar11);
  lVar15 = *(long *)(param_1 + 0x20);
  if (lVar11 == lVar15) {
    lVar15 = *(long *)(param_1 + 0x18);
  }
  lVar9 = lVar15;
  lVar16 = lVar11;
  if (*(char *)(param_1 + 0xb0) == '\0') goto LAB_00879fd4;
LAB_00879ebc:
  FUN_0087ab30(param_1,param_2,param_3,lVar16,lVar9,uVar6);
  lVar15 = *(long *)(param_1 + 0x20);
  if (lVar9 == lVar15) {
    lVar15 = *(long *)(param_1 + 0x18);
  }
  if (*(char *)(param_1 + 600) == '\0') goto LAB_00879fe4;
LAB_00879ef0:
  if (*param_2 != 0) {
    pfVar1 = (float *)(param_1 + 0x28c);
    uVar7 = param_3 & 0xfffffff0;
    uVar17 = (ulong)uVar7;
    if (uVar7 == 0) {
      if (param_3 != 0) {
        uVar17 = 0;
        do {
          lVar16 = (ulong)(uint)((int)uVar17 << 8) * 4;
          pfVar5 = pfVar1;
          if (**(int **)(param_2 + uVar17 * 2 + 2) != 2) {
            pfVar5 = (float *)(param_1 + (ulong)param_2[uVar17 + 0x12] * 4 + 0x25c);
          }
          fVar4 = *pfVar5;
          uVar18 = 0;
          do {
            uVar7 = (int)uVar18 + 4;
            puVar10 = (undefined8 *)(lVar9 + lVar16 + uVar18 * 4);
            uVar19 = puVar10[1];
            uVar6 = *puVar10;
            puVar10 = (undefined8 *)(lVar15 + lVar16 + uVar18 * 4);
            puVar10[1] = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar4,(float)uVar19 * fVar4);
            *puVar10 = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar4,(float)uVar6 * fVar4);
            uVar18 = (ulong)uVar7;
          } while (uVar7 < param_3);
          uVar17 = uVar17 + 1;
        } while (uVar17 < *param_2);
      }
    }
    else if (uVar7 < param_3) {
      uVar18 = 0;
      do {
        lVar16 = (uVar18 & 0xffffff) * 0x400;
        lVar11 = (ulong)(uint)((int)uVar18 << 8) * 4;
        pfVar5 = pfVar1;
        if (**(int **)(param_2 + uVar18 * 2 + 2) != 2) {
          pfVar5 = (float *)(param_1 + (ulong)param_2[uVar18 + 0x12] * 4 + 0x25c);
        }
        fVar4 = *pfVar5;
        uVar14 = 0;
        puVar10 = (undefined8 *)(lVar9 + 0x20 + lVar16);
        puVar12 = (undefined8 *)(lVar15 + 0x20 + lVar16);
        do {
          uVar6 = puVar10[-4];
          uVar20 = puVar10[-1];
          uVar19 = puVar10[-2];
          uVar14 = uVar14 + 0x10;
          uVar22 = puVar10[1];
          uVar21 = *puVar10;
          uVar24 = puVar10[3];
          uVar23 = puVar10[2];
          puVar12[-3] = CONCAT44((float)((ulong)puVar10[-3] >> 0x20) * fVar4,
                                 (float)puVar10[-3] * fVar4);
          puVar12[-4] = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar4,(float)uVar6 * fVar4);
          puVar12[-1] = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar4,(float)uVar20 * fVar4);
          puVar12[-2] = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar4,(float)uVar19 * fVar4);
          puVar12[1] = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar4,(float)uVar22 * fVar4);
          *puVar12 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar4,(float)uVar21 * fVar4);
          puVar12[3] = CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar4,(float)uVar24 * fVar4);
          puVar12[2] = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar4,(float)uVar23 * fVar4);
          puVar10 = puVar10 + 8;
          puVar12 = puVar12 + 8;
        } while (uVar14 < uVar17);
        uVar14 = uVar17;
        do {
          uVar7 = (int)uVar14 + 4;
          puVar10 = (undefined8 *)(lVar9 + lVar11 + uVar14 * 4);
          uVar19 = puVar10[1];
          uVar6 = *puVar10;
          puVar10 = (undefined8 *)(lVar15 + lVar11 + uVar14 * 4);
          puVar10[1] = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar4,(float)uVar19 * fVar4);
          *puVar10 = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar4,(float)uVar6 * fVar4);
          uVar14 = (ulong)uVar7;
        } while (uVar7 < param_3);
        uVar18 = uVar18 + 1;
      } while (uVar18 < *param_2);
    }
    else {
      uVar18 = 0;
      do {
        lVar16 = (uVar18 & 0xffffff) * 0x400;
        pfVar5 = pfVar1;
        if (**(int **)(param_2 + uVar18 * 2 + 2) != 2) {
          pfVar5 = (float *)(param_1 + (ulong)param_2[uVar18 + 0x12] * 4 + 0x25c);
        }
        fVar4 = *pfVar5;
        uVar14 = 0;
        puVar10 = (undefined8 *)(lVar9 + 0x20 + lVar16);
        puVar12 = (undefined8 *)(lVar15 + 0x20 + lVar16);
        do {
          uVar6 = puVar10[-4];
          uVar20 = puVar10[-1];
          uVar19 = puVar10[-2];
          uVar14 = uVar14 + 0x10;
          uVar22 = puVar10[1];
          uVar21 = *puVar10;
          uVar24 = puVar10[3];
          uVar23 = puVar10[2];
          puVar12[-3] = CONCAT44((float)((ulong)puVar10[-3] >> 0x20) * fVar4,
                                 (float)puVar10[-3] * fVar4);
          puVar12[-4] = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar4,(float)uVar6 * fVar4);
          puVar12[-1] = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar4,(float)uVar20 * fVar4);
          puVar12[-2] = CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar4,(float)uVar19 * fVar4);
          puVar12[1] = CONCAT44((float)((ulong)uVar22 >> 0x20) * fVar4,(float)uVar22 * fVar4);
          *puVar12 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar4,(float)uVar21 * fVar4);
          puVar12[3] = CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar4,(float)uVar24 * fVar4);
          puVar12[2] = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar4,(float)uVar23 * fVar4);
          puVar10 = puVar10 + 8;
          puVar12 = puVar12 + 8;
        } while (uVar14 < uVar17);
        uVar18 = uVar18 + 1;
      } while (uVar18 < *param_2);
    }
  }
  if (lVar15 != *(long *)(param_1 + 0x20)) {
    cVar3 = *(char *)(param_1 + 0x290);
    uVar7 = *param_2;
    lVar16 = *(long *)(param_1 + 0x20);
    goto joined_r0x0087a114;
  }
  lVar16 = *(long *)(param_1 + 0x18);
  uVar7 = *param_2;
  if (*(char *)(param_1 + 0x290) == '\0') goto LAB_0087a1e4;
LAB_0087a118:
  if (uVar7 == 0) goto LAB_0087a2ec;
  uVar7 = param_3 & 0xfffffff0;
  uVar17 = (ulong)uVar7;
  if (uVar7 == 0) {
    if (param_3 != 0) {
      uVar17 = 0;
      do {
        lVar9 = *(long *)(param_1 + 0x298);
        lVar11 = (ulong)(uint)((int)uVar17 << 8) * 4;
        uVar18 = 0;
        do {
          uVar7 = (int)uVar18 + 4;
          lVar13 = uVar18 * 4;
          puVar10 = (undefined8 *)(lVar15 + lVar11 + lVar13);
          uVar19 = puVar10[1];
          uVar6 = *puVar10;
          puVar10 = (undefined8 *)(lVar9 + lVar13);
          uVar21 = puVar10[1];
          uVar20 = *puVar10;
          puVar10 = (undefined8 *)(lVar16 + lVar11 + lVar13);
          puVar10[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                                (float)uVar21 * (float)uVar19);
          *puVar10 = CONCAT44((float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar6 >> 0x20),
                              (float)uVar20 * (float)uVar6);
          uVar18 = (ulong)uVar7;
        } while (uVar7 < param_3);
        uVar7 = *param_2;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar7);
      goto LAB_0087a2b4;
    }
  }
  else {
    if (uVar7 < param_3) {
      uVar18 = 0;
      do {
        lVar9 = *(long *)(param_1 + 0x298);
        uVar8 = (uVar18 & 0xffffff) << 10 | 0x30;
        lVar11 = (ulong)(uint)((int)uVar18 << 8) * 4;
        uVar14 = 0;
        puVar10 = (undefined8 *)(lVar9 + 0x20);
        do {
          puVar12 = (undefined8 *)(lVar15 + uVar8);
          uVar14 = uVar14 + 0x10;
          uVar6 = puVar10[-4];
          uVar20 = puVar10[-1];
          uVar19 = puVar10[-2];
          uVar25 = puVar12[-6];
          uVar30 = puVar12[-3];
          uVar28 = puVar12[-4];
          uVar27 = puVar12[-1];
          uVar26 = puVar12[-2];
          uVar31 = puVar12[1];
          uVar29 = *puVar12;
          uVar22 = puVar10[1];
          uVar21 = *puVar10;
          uVar24 = puVar10[3];
          uVar23 = puVar10[2];
          puVar2 = (undefined8 *)(lVar16 + uVar8);
          uVar8 = uVar8 + 0x40;
          puVar2[-5] = CONCAT44((float)((ulong)puVar10[-3] >> 0x20) *
                                (float)((ulong)puVar12[-5] >> 0x20),
                                (float)puVar10[-3] * (float)puVar12[-5]);
          puVar2[-6] = CONCAT44((float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                (float)uVar6 * (float)uVar25);
          puVar2[-3] = CONCAT44((float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar30 >> 0x20),
                                (float)uVar20 * (float)uVar30);
          puVar2[-4] = CONCAT44((float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar28 >> 0x20),
                                (float)uVar19 * (float)uVar28);
          puVar2[-1] = CONCAT44((float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar27 >> 0x20),
                                (float)uVar22 * (float)uVar27);
          puVar2[-2] = CONCAT44((float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar26 >> 0x20),
                                (float)uVar21 * (float)uVar26);
          puVar2[1] = CONCAT44((float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar31 >> 0x20),
                               (float)uVar24 * (float)uVar31);
          *puVar2 = CONCAT44((float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar29 >> 0x20),
                             (float)uVar23 * (float)uVar29);
          puVar10 = puVar10 + 8;
        } while (uVar14 < uVar17);
        uVar14 = uVar17;
        do {
          uVar7 = (int)uVar14 + 4;
          lVar13 = uVar14 * 4;
          puVar10 = (undefined8 *)(lVar15 + lVar11 + lVar13);
          uVar19 = puVar10[1];
          uVar6 = *puVar10;
          puVar10 = (undefined8 *)(lVar9 + lVar13);
          uVar21 = puVar10[1];
          uVar20 = *puVar10;
          puVar10 = (undefined8 *)(lVar16 + lVar11 + lVar13);
          puVar10[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                                (float)uVar21 * (float)uVar19);
          *puVar10 = CONCAT44((float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar6 >> 0x20),
                              (float)uVar20 * (float)uVar6);
          uVar14 = (ulong)uVar7;
        } while (uVar7 < param_3);
        uVar7 = *param_2;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar7);
    }
    else {
      uVar18 = 0;
      do {
        uVar8 = (uVar18 & 0xffffff) << 10 | 0x30;
        uVar14 = 0;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x298) + 0x20);
        do {
          puVar12 = (undefined8 *)(lVar15 + uVar8);
          uVar14 = uVar14 + 0x10;
          uVar6 = puVar10[-4];
          uVar20 = puVar10[-1];
          uVar19 = puVar10[-2];
          uVar25 = puVar12[-6];
          uVar30 = puVar12[-3];
          uVar28 = puVar12[-4];
          uVar27 = puVar12[-1];
          uVar26 = puVar12[-2];
          uVar31 = puVar12[1];
          uVar29 = *puVar12;
          uVar22 = puVar10[1];
          uVar21 = *puVar10;
          uVar24 = puVar10[3];
          uVar23 = puVar10[2];
          puVar2 = (undefined8 *)(lVar16 + uVar8);
          uVar8 = uVar8 + 0x40;
          puVar2[-5] = CONCAT44((float)((ulong)puVar10[-3] >> 0x20) *
                                (float)((ulong)puVar12[-5] >> 0x20),
                                (float)puVar10[-3] * (float)puVar12[-5]);
          puVar2[-6] = CONCAT44((float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                (float)uVar6 * (float)uVar25);
          puVar2[-3] = CONCAT44((float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar30 >> 0x20),
                                (float)uVar20 * (float)uVar30);
          puVar2[-4] = CONCAT44((float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar28 >> 0x20),
                                (float)uVar19 * (float)uVar28);
          puVar2[-1] = CONCAT44((float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar27 >> 0x20),
                                (float)uVar22 * (float)uVar27);
          puVar2[-2] = CONCAT44((float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar26 >> 0x20),
                                (float)uVar21 * (float)uVar26);
          puVar2[1] = CONCAT44((float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar31 >> 0x20),
                               (float)uVar24 * (float)uVar31);
          *puVar2 = CONCAT44((float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar29 >> 0x20),
                             (float)uVar23 * (float)uVar29);
          puVar10 = puVar10 + 8;
        } while (uVar14 < uVar17);
        uVar7 = *param_2;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar7);
    }
LAB_0087a2b4:
    if (uVar7 == 0) goto LAB_0087a2ec;
  }
  uVar18 = 0;
  uVar17 = 0;
  do {
    memcpy(*(void **)(param_2 + uVar17 * 2 + 10),(void *)(lVar16 + (uVar18 & 0xffffff00) * 4),__n);
    uVar17 = uVar17 + 1;
    uVar18 = uVar18 + 0x100;
  } while (uVar17 < *param_2);
LAB_0087a2ec:
  *param_2 = 0;
  return;
}


