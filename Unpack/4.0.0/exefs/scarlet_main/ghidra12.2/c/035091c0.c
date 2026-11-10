/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035091c0; name: FUN_035091c0
 */


undefined1  [16] FUN_035091c0(float *param_1,float *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar8;
  float *pfVar7;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
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
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float afStack_250 [128];
  
  uVar9 = (ulong)param_4;
  pfVar6 = (float *)((long)afStack_250 + (0x200 - (uVar9 * 4 + 0xf & 0x7fffffff0)));
  uVar2 = param_4 & 3;
  uVar4 = param_4;
  if (uVar2 != 0) {
    memset((void *)(param_3 + uVar9 * 4),0,(ulong)((4 - uVar2) * 4));
    uVar4 = (4 - uVar2) + param_4;
  }
  fVar15 = *param_1;
  fVar17 = param_1[1];
  fVar42 = param_1[2];
  fVar41 = param_1[3];
  if (uVar4 != 0) {
    uVar22 = *(undefined8 *)(param_1 + 6);
    uVar21 = *(undefined8 *)(param_1 + 4);
    uVar24 = *(undefined8 *)(param_1 + 10);
    uVar23 = *(undefined8 *)(param_1 + 8);
    uVar26 = *(undefined8 *)(param_1 + 0xe);
    uVar25 = *(undefined8 *)(param_1 + 0xc);
    uVar28 = *(undefined8 *)(param_1 + 0x12);
    uVar27 = *(undefined8 *)(param_1 + 0x10);
    uVar30 = *(undefined8 *)(param_1 + 0x16);
    uVar29 = *(undefined8 *)(param_1 + 0x14);
    uVar32 = *(undefined8 *)(param_1 + 0x1a);
    uVar31 = *(undefined8 *)(param_1 + 0x18);
    uVar34 = *(undefined8 *)(param_1 + 0x1e);
    uVar33 = *(undefined8 *)(param_1 + 0x1c);
    uVar36 = *(undefined8 *)(param_1 + 0x22);
    uVar35 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = 0;
    fVar20 = fVar17;
    fVar19 = fVar15;
    do {
      uVar1 = (int)uVar5 + 4;
      puVar3 = (undefined8 *)(param_3 + uVar5 * 4);
      uVar40 = puVar3[1];
      uVar38 = *puVar3;
      fVar37 = (float)uVar38;
      fVar39 = (float)((ulong)uVar38 >> 0x20);
      fVar17 = (float)uVar40;
      fVar15 = (float)((ulong)uVar40 >> 0x20);
      fVar10 = (float)uVar33 * fVar42;
      fVar12 = (float)((ulong)uVar33 >> 0x20) * fVar42;
      fVar11 = (float)uVar35 * fVar41;
      fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar41;
      fVar14 = (float)((ulong)uVar36 >> 0x20) * fVar41;
      fVar41 = fVar17 * (float)uVar22 + (float)uVar30 * fVar19 + (float)uVar32 * fVar20 +
               (float)uVar24 * fVar17 + (float)uVar26 * fVar39 + (float)uVar28 * fVar37 +
               (float)uVar34 * fVar42 + (float)uVar36 * fVar41;
      fVar42 = fVar15 * (float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar30 >> 0x20) * fVar19 +
               (float)((ulong)uVar32 >> 0x20) * fVar20 + (float)((ulong)uVar24 >> 0x20) * fVar17 +
               (float)((ulong)uVar26 >> 0x20) * fVar39 + (float)((ulong)uVar28 >> 0x20) * fVar37 +
               (float)((ulong)uVar34 >> 0x20) * fVar42 + fVar14;
      *(ulong *)(pfVar6 + uVar5 + 2) = CONCAT44(fVar42,fVar41);
      *(ulong *)(pfVar6 + uVar5) =
           CONCAT44(fVar39 * (float)((ulong)uVar21 >> 0x20) +
                    (float)((ulong)uVar29 >> 0x20) * fVar19 +
                    (float)((ulong)uVar31 >> 0x20) * fVar20 +
                    (float)((ulong)uVar23 >> 0x20) * fVar17 +
                    (float)((ulong)uVar25 >> 0x20) * fVar39 +
                    (float)((ulong)uVar27 >> 0x20) * fVar37 + fVar12 + fVar13,
                    fVar37 * (float)uVar21 + (float)uVar29 * fVar19 + (float)uVar31 * fVar20 +
                    (float)uVar23 * fVar17 + (float)uVar25 * fVar39 + (float)uVar27 * fVar37 +
                    fVar10 + fVar11);
      uVar5 = (ulong)uVar1;
      fVar20 = fVar17;
      fVar19 = fVar15;
    } while (uVar1 < uVar4);
  }
  *(ulong *)param_1 = CONCAT44(fVar17,fVar15);
  *(ulong *)(param_1 + 2) = CONCAT44(fVar41,fVar42);
  uVar4 = param_4;
  if (uVar2 != 0) {
    memset(pfVar6 + uVar9,0,(ulong)((4 - uVar2) * 4));
    uVar4 = (4 - uVar2) + param_4;
  }
  fVar15 = *param_2;
  fVar17 = param_2[1];
  fVar42 = param_2[2];
  fVar41 = param_2[3];
  if (uVar4 != 0) {
    uVar22 = *(undefined8 *)(param_2 + 6);
    uVar21 = *(undefined8 *)(param_2 + 4);
    uVar24 = *(undefined8 *)(param_2 + 10);
    uVar23 = *(undefined8 *)(param_2 + 8);
    uVar26 = *(undefined8 *)(param_2 + 0xe);
    uVar25 = *(undefined8 *)(param_2 + 0xc);
    uVar28 = *(undefined8 *)(param_2 + 0x12);
    uVar27 = *(undefined8 *)(param_2 + 0x10);
    uVar30 = *(undefined8 *)(param_2 + 0x16);
    uVar29 = *(undefined8 *)(param_2 + 0x14);
    uVar32 = *(undefined8 *)(param_2 + 0x1a);
    uVar31 = *(undefined8 *)(param_2 + 0x18);
    uVar34 = *(undefined8 *)(param_2 + 0x1e);
    uVar33 = *(undefined8 *)(param_2 + 0x1c);
    uVar36 = *(undefined8 *)(param_2 + 0x22);
    uVar35 = *(undefined8 *)(param_2 + 0x20);
    uVar9 = 0;
    fVar20 = fVar17;
    fVar19 = fVar15;
    do {
      uVar2 = (int)uVar9 + 4;
      uVar40 = *(undefined8 *)(pfVar6 + uVar9 + 2);
      uVar38 = *(undefined8 *)(pfVar6 + uVar9);
      fVar37 = (float)uVar38;
      fVar39 = (float)((ulong)uVar38 >> 0x20);
      fVar17 = (float)uVar40;
      fVar15 = (float)((ulong)uVar40 >> 0x20);
      fVar10 = (float)uVar33 * fVar42;
      fVar12 = (float)((ulong)uVar33 >> 0x20) * fVar42;
      fVar11 = (float)uVar35 * fVar41;
      fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar41;
      fVar14 = (float)((ulong)uVar36 >> 0x20) * fVar41;
      fVar41 = fVar17 * (float)uVar22 + (float)uVar30 * fVar19 + (float)uVar32 * fVar20 +
               (float)uVar24 * fVar17 + (float)uVar26 * fVar39 + (float)uVar28 * fVar37 +
               (float)uVar34 * fVar42 + (float)uVar36 * fVar41;
      fVar42 = fVar15 * (float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar30 >> 0x20) * fVar19 +
               (float)((ulong)uVar32 >> 0x20) * fVar20 + (float)((ulong)uVar24 >> 0x20) * fVar17 +
               (float)((ulong)uVar26 >> 0x20) * fVar39 + (float)((ulong)uVar28 >> 0x20) * fVar37 +
               (float)((ulong)uVar34 >> 0x20) * fVar42 + fVar14;
      *(ulong *)(pfVar6 + uVar9 + 2) = CONCAT44(fVar42,fVar41);
      *(ulong *)(pfVar6 + uVar9) =
           CONCAT44(fVar39 * (float)((ulong)uVar21 >> 0x20) +
                    (float)((ulong)uVar29 >> 0x20) * fVar19 +
                    (float)((ulong)uVar31 >> 0x20) * fVar20 +
                    (float)((ulong)uVar23 >> 0x20) * fVar17 +
                    (float)((ulong)uVar25 >> 0x20) * fVar39 +
                    (float)((ulong)uVar27 >> 0x20) * fVar37 + fVar12 + fVar13,
                    fVar37 * (float)uVar21 + (float)uVar29 * fVar19 + (float)uVar31 * fVar20 +
                    (float)uVar23 * fVar17 + (float)uVar25 * fVar39 + (float)uVar27 * fVar37 +
                    fVar10 + fVar11);
      uVar9 = (ulong)uVar2;
      fVar20 = fVar17;
      fVar19 = fVar15;
    } while (uVar2 < uVar4);
  }
  *(ulong *)param_2 = CONCAT44(fVar17,fVar15);
  *(ulong *)(param_2 + 2) = CONCAT44(fVar41,fVar42);
  fVar15 = 0.0;
  fVar17 = 0.0;
  fVar42 = 0.0;
  fVar41 = 0.0;
  pfVar7 = pfVar6;
  do {
    pfVar8 = pfVar7 + 4;
    fVar15 = fVar15 + *pfVar7 * *pfVar7;
    fVar17 = fVar17 + pfVar7[1] * pfVar7[1];
    fVar42 = fVar42 + pfVar7[2] * pfVar7[2];
    fVar41 = fVar41 + pfVar7[3] * pfVar7[3];
    pfVar7 = pfVar8;
  } while (pfVar8 < pfVar6 + (ulong)(param_4 >> 2) * 4);
  auVar18._4_4_ = fVar17;
  auVar18._0_4_ = fVar15;
  auVar18._8_4_ = fVar42;
  auVar18._12_4_ = fVar41;
  auVar18 = NEON_rev64(auVar18,4);
  fVar42 = auVar18._8_4_ + fVar42;
  auVar16._0_4_ = fVar42 + auVar18._0_4_ + fVar15;
  auVar16._4_4_ = fVar42 + auVar18._4_4_ + fVar17;
  auVar16._8_4_ = fVar42 + fVar42;
  auVar16._12_4_ = fVar42 + auVar18._12_4_ + fVar41;
  return auVar16;
}


