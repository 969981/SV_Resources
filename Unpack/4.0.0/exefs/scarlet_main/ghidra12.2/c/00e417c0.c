/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e417c0; name: FUN_00e417c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00e417c0(float param_1,int *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar26 [16];
  float fVar28;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar51;
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  undefined1 auVar54 [12];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  puVar6 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar6 < 5) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if ((ulong)puVar6[2] != 0) {
      puVar7 = (uint *)((long)param_2 + (ulong)puVar6[2]);
      lVar5 = (long)puVar7 + (ulong)*puVar7;
    }
    if (6 < *puVar6) {
      puVar7 = (uint *)0x0;
      if ((ulong)puVar6[3] != 0) {
        puVar7 = (uint *)((long)param_2 + (ulong)puVar6[3]);
        puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
      }
      goto LAB_00e41804;
    }
  }
  puVar7 = (uint *)0x0;
LAB_00e41804:
  lVar1 = lVar5 + 4;
  puVar6 = (ushort *)(lVar5 + 8);
  lVar5 = ((lVar1 + (ulong)*puVar7 * 2) - (long)puVar6) + -2;
  if (lVar5 != 0) {
    uVar9 = lVar5 >> 1;
    puVar3 = puVar6 + (uVar9 >> 1) + 1;
    uVar4 = (uVar9 >> 1 ^ 0xffffffffffffffff) + uVar9;
    if (param_1 <= (float)puVar6[uVar9 >> 1]) {
      puVar3 = puVar6;
      uVar4 = uVar9 >> 1;
    }
    while (puVar6 = puVar3, uVar4 != 0) {
      uVar9 = uVar4 >> 1;
      puVar3 = puVar6 + uVar9 + 1;
      uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= (float)puVar6[uVar9]) {
        puVar3 = puVar6;
        uVar4 = uVar9;
      }
    }
  }
  uVar4 = (ulong)((long)puVar6 - lVar1) >> 1;
  iVar18 = (int)uVar4;
  uVar8 = (uint)*(ushort *)(lVar1 + (ulong)(iVar18 - 1U) * 2);
  uVar9 = *(ulong *)((long)puVar7 + (ulong)(iVar18 - 1U) * 6 + 4);
  fVar17 = (param_1 - (float)uVar8) /
           (float)(int)(*(ushort *)(lVar1 + (uVar4 & 0xffffffff) * 2) - uVar8);
  auVar42._0_8_ = CONCAT44((int)(uVar9 >> 0x12),(uint)uVar9 >> 3) & 0x7fff00007fff;
  auVar42._8_4_ = (uint)(uVar9 >> 0x21) & 0x7fff;
  auVar42._12_4_ = 0;
  auVar42 = NEON_ucvtf(auVar42,4);
  uVar8 = (uint)uVar9 & 3;
  fVar41 = (float)_DAT_03cabb50;
  auVar45._0_4_ = fVar41 + auVar42._0_4_ * 4.7938363e-05;
  fVar43 = (float)((ulong)_DAT_03cabb50 >> 0x20);
  auVar45._4_4_ = fVar43 + auVar42._4_4_ * 4.7938363e-05;
  fVar16 = (float)_UNK_03cabb58;
  fVar22 = (float)((ulong)_UNK_03cabb58 >> 0x20);
  auVar45._8_4_ = fVar16 + auVar42._8_4_ * 4.7938363e-05;
  auVar32._12_4_ = fVar22 + auVar42._12_4_ * 4.7938363e-05;
  auVar32._0_12_ = auVar45;
  fVar12 = 1.0 - (auVar45._0_4_ * auVar45._0_4_ + auVar45._4_4_ * auVar45._4_4_ +
                 auVar45._8_4_ * auVar45._8_4_ + auVar32._12_4_ * auVar32._12_4_);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar39 = (float)NEON_frsqrte(fVar12);
  fVar39 = fVar12 - (fVar39 * fVar12 * fVar39 * fVar12 - fVar12) * 0.5;
  fVar61 = (float)NEON_frsqrte(fVar39);
  fVar39 = fVar39 - (fVar61 * fVar39 * fVar61 * fVar39 - fVar12) * 0.5;
  fVar12 = (float)NEON_frsqrte(fVar39);
  fVar12 = fVar12 * fVar39;
  if (uVar8 == 3) {
    auVar50._12_4_ = fVar12;
    auVar50._0_12_ = auVar45;
  }
  else if (uVar8 == 1) {
    auVar15._4_4_ = auVar45._8_4_;
    auVar15._0_4_ = auVar45._0_4_;
    auVar15._8_4_ = auVar45._0_4_;
    auVar15._12_4_ = fVar12;
    auVar42 = NEON_ext(auVar32,auVar32,4,1);
    auVar50 = NEON_ext(auVar15,auVar42,8,1);
  }
  else if (uVar8 == 2) {
    auVar32 = NEON_ext(auVar32,auVar32,8,1);
    auVar42 = NEON_ext(auVar32,ZEXT416((uint)fVar12),4,1);
    auVar50 = NEON_ext(auVar42,auVar32,4,1);
  }
  else {
    auVar42 = NEON_ext(auVar32,ZEXT416((uint)fVar12),4,1);
    auVar50 = NEON_ext(auVar42,auVar32,0xc,1);
  }
  auVar13._0_8_ = -(ulong)((uVar9 & 4) == 0);
  auVar55._0_4_ = -auVar50._0_4_;
  auVar55._4_4_ = -auVar50._4_4_;
  auVar55._8_4_ = -auVar50._8_4_;
  auVar55._12_4_ = -auVar50._12_4_;
  auVar13._8_8_ = auVar13._0_8_;
  auVar14 = auVar55 ^ (auVar55 ^ auVar50) & auVar13;
  if (0.0 < fVar17) {
    uVar4 = *(ulong *)((long)puVar7 + ((ulong)((long)puVar6 - lVar1) >> 1 & 0xffffffff) * 6 + 4);
    auVar47._0_8_ = CONCAT44((int)(uVar4 >> 0x12),(uint)uVar4 >> 3) & 0x7fff00007fff;
    auVar47._8_4_ = (uint)(uVar4 >> 0x21) & 0x7fff;
    auVar47._12_4_ = 0;
    uVar8 = (uint)uVar4 & 3;
    auVar42 = NEON_ucvtf(auVar47,4);
    auVar46._0_4_ = fVar41 + auVar42._0_4_ * 4.7938363e-05;
    auVar46._4_4_ = fVar43 + auVar42._4_4_ * 4.7938363e-05;
    auVar46._8_4_ = fVar16 + auVar42._8_4_ * 4.7938363e-05;
    auVar48._12_4_ = fVar22 + auVar42._12_4_ * 4.7938363e-05;
    auVar48._0_12_ = auVar46;
    fVar12 = 1.0 - (auVar46._0_4_ * auVar46._0_4_ + auVar46._4_4_ * auVar46._4_4_ +
                   auVar46._8_4_ * auVar46._8_4_ + auVar48._12_4_ * auVar48._12_4_);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar39 = (float)NEON_frsqrte(fVar12);
    fVar39 = fVar12 - (fVar39 * fVar12 * fVar39 * fVar12 - fVar12) * 0.5;
    fVar61 = (float)NEON_frsqrte(fVar39);
    fVar39 = fVar39 - (fVar61 * fVar39 * fVar61 * fVar39 - fVar12) * 0.5;
    fVar12 = (float)NEON_frsqrte(fVar39);
    fVar12 = fVar12 * fVar39;
    if (uVar8 == 3) {
      auVar49._12_4_ = fVar12;
      auVar49._0_12_ = auVar46;
    }
    else if (uVar8 == 1) {
      auVar60._4_4_ = auVar46._8_4_;
      auVar60._0_4_ = auVar46._0_4_;
      auVar60._8_4_ = auVar46._0_4_;
      auVar60._12_4_ = fVar12;
      auVar42 = NEON_ext(auVar48,auVar48,4,1);
      auVar49 = NEON_ext(auVar60,auVar42,8,1);
    }
    else if (uVar8 == 2) {
      auVar42 = NEON_ext(auVar48,auVar48,8,1);
      auVar32 = NEON_ext(auVar42,ZEXT416((uint)fVar12),4,1);
      auVar49 = NEON_ext(auVar32,auVar42,4,1);
    }
    else {
      auVar42 = NEON_ext(auVar48,ZEXT416((uint)fVar12),4,1);
      auVar49 = NEON_ext(auVar42,auVar48,0xc,1);
    }
    auVar56._0_8_ = -(ulong)((uVar4 & 4) == 0);
    auVar62._0_4_ = -auVar49._0_4_;
    auVar62._4_4_ = -auVar49._4_4_;
    auVar62._8_4_ = -auVar49._8_4_;
    auVar62._12_4_ = -auVar49._12_4_;
    auVar56._8_8_ = auVar56._0_8_;
    auVar49 = auVar49 ^ (auVar49 ^ auVar62) & ~auVar56;
    if (1.0 <= fVar17) {
      return auVar49;
    }
    uVar4 = *(ulong *)((long)puVar7 + (ulong)(iVar18 - 2) * 6 + 4);
    auVar57._0_8_ = CONCAT44((int)(uVar4 >> 0x12),(uint)uVar4 >> 3) & 0x7fff00007fff;
    auVar57._8_4_ = (uint)(uVar4 >> 0x21) & 0x7fff;
    auVar57._12_4_ = 0;
    uVar8 = (uint)uVar4 & 3;
    auVar42 = NEON_ucvtf(auVar57,4);
    auVar54._0_4_ = fVar41 + auVar42._0_4_ * 4.7938363e-05;
    auVar54._4_4_ = fVar43 + auVar42._4_4_ * 4.7938363e-05;
    auVar54._8_4_ = fVar16 + auVar42._8_4_ * 4.7938363e-05;
    auVar58._12_4_ = fVar22 + auVar42._12_4_ * 4.7938363e-05;
    auVar58._0_12_ = auVar54;
    fVar12 = 1.0 - (auVar54._0_4_ * auVar54._0_4_ + auVar54._4_4_ * auVar54._4_4_ +
                   auVar54._8_4_ * auVar54._8_4_ + auVar58._12_4_ * auVar58._12_4_);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar39 = (float)NEON_frsqrte(fVar12);
    fVar39 = fVar12 - (fVar39 * fVar12 * fVar39 * fVar12 - fVar12) * 0.5;
    fVar61 = (float)NEON_frsqrte(fVar39);
    fVar39 = fVar39 - (fVar61 * fVar39 * fVar61 * fVar39 - fVar12) * 0.5;
    fVar12 = (float)NEON_frsqrte(fVar39);
    fVar12 = fVar12 * fVar39;
    if (uVar8 == 3) {
      auVar59._12_4_ = fVar12;
      auVar59._0_12_ = auVar54;
    }
    else if (uVar8 == 1) {
      auVar64._4_4_ = auVar54._8_4_;
      auVar64._0_4_ = auVar54._0_4_;
      auVar64._8_4_ = auVar54._0_4_;
      auVar64._12_4_ = fVar12;
      auVar42 = NEON_ext(auVar58,auVar58,4,1);
      auVar59 = NEON_ext(auVar64,auVar42,8,1);
    }
    else if (uVar8 == 2) {
      auVar42 = NEON_ext(auVar58,auVar58,8,1);
      auVar32 = NEON_ext(auVar42,ZEXT416((uint)fVar12),4,1);
      auVar59 = NEON_ext(auVar32,auVar42,4,1);
    }
    else {
      auVar42 = NEON_ext(auVar58,ZEXT416((uint)fVar12),4,1);
      auVar59 = NEON_ext(auVar42,auVar58,0xc,1);
    }
    uVar9 = *(ulong *)((long)puVar7 + (ulong)(iVar18 + 1) * 6 + 4);
    auVar63._0_8_ = -(ulong)((uVar4 & 4) == 0);
    auVar63._8_8_ = auVar63._0_8_;
    auVar29._0_8_ = CONCAT44((int)(uVar9 >> 0x12),(uint)uVar9 >> 3) & 0x7fff00007fff;
    auVar29._8_4_ = (uint)(uVar9 >> 0x21) & 0x7fff;
    auVar29._12_4_ = 0;
    uVar8 = (uint)uVar9 & 3;
    auVar42 = NEON_ucvtf(auVar29,4);
    auVar23._0_4_ = fVar41 + auVar42._0_4_ * 4.7938363e-05;
    auVar23._4_4_ = fVar43 + auVar42._4_4_ * 4.7938363e-05;
    auVar23._8_4_ = fVar16 + auVar42._8_4_ * 4.7938363e-05;
    auVar24._12_4_ = fVar22 + auVar42._12_4_ * 4.7938363e-05;
    auVar24._0_12_ = auVar23;
    auVar2._4_4_ = -auVar59._4_4_;
    auVar2._0_4_ = -auVar59._0_4_;
    auVar2._8_4_ = -auVar59._8_4_;
    auVar2._12_4_ = -auVar59._12_4_;
    auVar30._4_4_ = -auVar59._4_4_;
    auVar30._0_4_ = -auVar59._0_4_;
    auVar30._8_4_ = -auVar59._8_4_;
    auVar30._12_4_ = -auVar59._12_4_;
    auVar30 = auVar30 ^ (auVar2 ^ auVar59) & auVar63;
    fVar12 = 1.0 - (auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_ +
                   auVar23._8_4_ * auVar23._8_4_ + auVar24._12_4_ * auVar24._12_4_);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar41 = (float)NEON_frsqrte(fVar12);
    fVar41 = fVar12 - (fVar41 * fVar12 * fVar41 * fVar12 - fVar12) * 0.5;
    fVar43 = (float)NEON_frsqrte(fVar41);
    fVar41 = fVar41 - (fVar43 * fVar41 * fVar43 * fVar41 - fVar12) * 0.5;
    fVar12 = (float)NEON_frsqrte(fVar41);
    fVar12 = fVar12 * fVar41;
    if (uVar8 == 3) {
      auVar25._12_4_ = fVar12;
      auVar25._0_12_ = auVar23;
    }
    else if (uVar8 == 1) {
      auVar38._4_4_ = auVar23._8_4_;
      auVar38._0_4_ = auVar23._0_4_;
      auVar38._8_4_ = auVar23._0_4_;
      auVar38._12_4_ = fVar12;
      auVar42 = NEON_ext(auVar24,auVar24,4,1);
      auVar25 = NEON_ext(auVar38,auVar42,8,1);
    }
    else if (uVar8 == 2) {
      auVar42 = NEON_ext(auVar24,auVar24,8,1);
      auVar32 = NEON_ext(auVar42,ZEXT416((uint)fVar12),4,1);
      auVar25 = NEON_ext(auVar32,auVar42,4,1);
    }
    else {
      auVar42 = NEON_ext(auVar24,ZEXT416((uint)fVar12),4,1);
      auVar25 = NEON_ext(auVar42,auVar24,0xc,1);
    }
    fVar44 = auVar49._0_4_;
    fVar51 = auVar49._4_4_;
    fVar52 = auVar49._8_4_;
    fVar53 = auVar49._12_4_;
    auVar37._0_8_ = -(ulong)((uVar9 & 4) == 0);
    auVar40._0_4_ = -auVar25._0_4_;
    auVar40._4_4_ = -auVar25._4_4_;
    auVar40._8_4_ = -auVar25._8_4_;
    auVar40._12_4_ = -auVar25._12_4_;
    auVar37._8_8_ = auVar37._0_8_;
    auVar25 = auVar25 ^ (auVar25 ^ auVar40) & ~auVar37;
    fVar12 = auVar14._0_4_;
    fVar41 = auVar14._4_4_;
    fVar43 = auVar14._8_4_;
    fVar16 = auVar14._12_4_;
    fVar28 = (fVar44 - auVar30._0_4_) * 0.5;
    fVar34 = (fVar51 - auVar30._4_4_) * 0.5;
    fVar35 = (fVar52 - auVar30._8_4_) * 0.5;
    fVar36 = (fVar53 - auVar30._12_4_) * 0.5;
    fVar22 = (auVar25._0_4_ - fVar12) * 0.5;
    fVar39 = (auVar25._4_4_ - fVar41) * 0.5;
    fVar61 = (auVar25._8_4_ - fVar43) * 0.5;
    fVar27 = (auVar25._12_4_ - fVar16) * 0.5;
    auVar42 = NEON_fmov(0x40400000,4);
    fVar12 = fVar12 + (fVar28 + ((((fVar44 * auVar42._0_4_ - fVar12 * auVar42._0_4_) -
                                  (fVar28 + fVar28)) - fVar22) +
                                (((fVar12 + fVar12) - (fVar44 + fVar44)) + fVar28 + fVar22) * fVar17
                                ) * fVar17) * fVar17;
    fVar41 = fVar41 + (fVar34 + ((((fVar51 * auVar42._4_4_ - fVar41 * auVar42._4_4_) -
                                  (fVar34 + fVar34)) - fVar39) +
                                (((fVar41 + fVar41) - (fVar51 + fVar51)) + fVar34 + fVar39) * fVar17
                                ) * fVar17) * fVar17;
    fVar43 = fVar43 + (fVar35 + ((((fVar52 * auVar42._8_4_ - fVar43 * auVar42._8_4_) -
                                  (fVar35 + fVar35)) - fVar61) +
                                (((fVar43 + fVar43) - (fVar52 + fVar52)) + fVar35 + fVar61) * fVar17
                                ) * fVar17) * fVar17;
    fVar16 = fVar16 + (fVar36 + ((((fVar53 * auVar42._12_4_ - fVar16 * auVar42._12_4_) -
                                  (fVar36 + fVar36)) - fVar27) +
                                (((fVar16 + fVar16) - (fVar53 + fVar53)) + fVar36 + fVar27) * fVar17
                                ) * fVar17) * fVar17;
    auVar10._0_4_ = fVar12 * fVar12 + fVar41 * fVar41;
    auVar10._4_4_ = fVar43 * fVar43 + fVar16 * fVar16;
    auVar10._8_4_ = fVar12 * fVar12 + fVar41 * fVar41;
    auVar10._12_4_ = fVar43 * fVar43 + fVar16 * fVar16;
    auVar42 = NEON_ext(auVar10,auVar10,4,1);
    auVar11._0_4_ = auVar42._0_4_ + auVar42._4_4_;
    auVar11._4_4_ = auVar42._8_4_ + auVar42._12_4_;
    auVar11._8_4_ = auVar42._0_4_ + auVar42._4_4_;
    auVar11._12_4_ = auVar42._8_4_ + auVar42._12_4_;
    auVar42 = NEON_frsqrte(auVar11,4);
    auVar31._0_4_ = auVar11._0_4_ * auVar42._0_4_;
    auVar31._4_4_ = auVar11._4_4_ * auVar42._4_4_;
    auVar31._8_4_ = auVar11._8_4_ * auVar42._8_4_;
    auVar31._12_4_ = auVar11._12_4_ * auVar42._12_4_;
    auVar32 = NEON_frsqrts(auVar42,auVar31,4);
    auVar26._0_4_ = auVar42._0_4_ * auVar32._0_4_;
    auVar26._4_4_ = auVar42._4_4_ * auVar32._4_4_;
    auVar26._8_4_ = auVar42._8_4_ * auVar32._8_4_;
    auVar26._12_4_ = auVar42._12_4_ * auVar32._12_4_;
    auVar33._0_4_ = auVar11._0_4_ * auVar26._0_4_;
    auVar33._4_4_ = auVar11._4_4_ * auVar26._4_4_;
    auVar33._8_4_ = auVar11._8_4_ * auVar26._8_4_;
    auVar33._12_4_ = auVar11._12_4_ * auVar26._12_4_;
    iVar18 = -(uint)(auVar11._0_4_ == 0.0);
    iVar19 = -(uint)(auVar11._4_4_ == 0.0);
    iVar20 = -(uint)(auVar11._8_4_ == 0.0);
    iVar21 = -(uint)(auVar11._12_4_ == 0.0);
    auVar42 = NEON_frsqrts(auVar26,auVar33,4);
    fVar12 = auVar26._0_4_ * auVar42._0_4_ * fVar12;
    fVar41 = auVar26._4_4_ * auVar42._4_4_ * fVar41;
    fVar43 = auVar26._8_4_ * auVar42._8_4_ * fVar43;
    fVar16 = auVar26._12_4_ * auVar42._12_4_ * fVar16;
    auVar14[0] = SUB41(fVar12,0) & ~(byte)iVar18;
    auVar14[1] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar18 >> 8);
    auVar14[2] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
    auVar14[3] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
    auVar14[4] = SUB41(fVar41,0) & ~(byte)iVar19;
    auVar14[5] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar19 >> 8);
    auVar14[6] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
    auVar14[7] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
    auVar14[8] = SUB41(fVar43,0) & ~(byte)iVar20;
    auVar14[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar20 >> 8);
    auVar14[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
    auVar14[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
    auVar14[0xc] = SUB41(fVar16,0) & ~(byte)iVar21;
    auVar14[0xd] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar21 >> 8);
    auVar14[0xe] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
    auVar14[0xf] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  }
  return auVar14;
}


