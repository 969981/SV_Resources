/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d72654; name: FUN_01d72654
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01d72654(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 auVar18 [12];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  float fVar25;
  undefined1 auVar20 [16];
  float fVar26;
  undefined1 auVar21 [16];
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  if (((DAT_04837608 & 1) == 0) && (iVar32 = __cxa_guard_acquire(&DAT_04837608), iVar32 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  DAT_04837610 = DAT_048375f8;
  fVar7 = (float)*param_1;
  fVar8 = (float)((ulong)*param_1 >> 0x20);
  fVar9 = (float)param_1[1];
  fVar10 = (float)((ulong)param_1[1] >> 0x20);
  for (lVar3 = *(long *)(DAT_048375f8 + 0x1b8); lVar3 != *(long *)(DAT_048375f8 + 0x1c0);
      lVar3 = lVar3 + 0x60) {
    fVar11 = *(float *)(lVar3 + 0x20) - fVar7;
    fVar13 = *(float *)(lVar3 + 0x24) - fVar8;
    fVar14 = *(float *)(lVar3 + 0x28) - fVar9;
    fVar11 = fVar11 * fVar11;
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    auVar12._0_4_ = fVar11 + fVar13;
    auVar12._4_4_ = fVar14 + 0.0;
    auVar12._8_4_ = fVar11 + fVar13;
    auVar12._12_4_ = fVar14 + 0.0;
    auVar12 = NEON_ext(auVar12,auVar12,4,1);
    if (auVar12._0_4_ + auVar12._4_4_ <= *(float *)(lVar3 + 0x30) * *(float *)(lVar3 + 0x30)) {
      DAT_04837610 = DAT_048375f8;
      return 1;
    }
  }
  lVar3 = *(long *)(DAT_048375f8 + 0x1f0);
  if (lVar3 != *(long *)(DAT_048375f8 + 0x1f8)) {
    fVar11 = *(float *)PTR_DAT_047d41b0;
    do {
      fVar13 = *(float *)(lVar3 + 0x30);
      fVar14 = *(float *)(lVar3 + 0x34);
      fVar16 = *(float *)(lVar3 + 0x38);
      fVar25 = *(float *)(lVar3 + 0x3c);
      fVar17 = fVar13 * (float)*(undefined8 *)PTR_DAT_047d41d0;
      fVar22 = fVar14 * (float)((ulong)*(undefined8 *)PTR_DAT_047d41d0 >> 0x20);
      fVar23 = fVar16 * (float)*(undefined8 *)(PTR_DAT_047d41d0 + 8);
      fVar24 = fVar25 * (float)((ulong)*(undefined8 *)(PTR_DAT_047d41d0 + 8) >> 0x20);
      auVar59._0_4_ = fVar17 + fVar22;
      auVar59._4_4_ = fVar23 + fVar24;
      auVar59._8_4_ = fVar17 + fVar22;
      auVar59._12_4_ = fVar23 + fVar24;
      auVar12 = NEON_ext(auVar59,auVar59,4,1);
      fVar17 = auVar12._0_4_ + auVar12._4_4_;
      fVar17 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar17) * fVar17 +
               *(float *)PTR_DAT_047d41a0 * (float)(fVar17 < *(float *)PTR_DAT_047d4180) * fVar17) -
               *(float *)PTR_DAT_047d4190;
      bVar1 = false;
      bVar2 = true;
      if (*(float *)PTR_DAT_047d41c0 <= fVar17) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar17) && !NAN(fVar11)) {
          bVar1 = fVar17 == fVar11;
          bVar2 = fVar11 <= fVar17;
        }
      }
      if (bVar2 && !bVar1) {
        auVar61._0_4_ = fVar13 * fVar13 + fVar14 * fVar14;
        auVar61._4_4_ = fVar16 * fVar16 + fVar25 * fVar25;
        auVar61._8_4_ = fVar13 * fVar13 + fVar14 * fVar14;
        auVar61._12_4_ = fVar16 * fVar16 + fVar25 * fVar25;
        auVar12 = NEON_ext(auVar61,auVar61,4,1);
        fVar24 = auVar12._0_4_ + auVar12._4_4_;
        fVar4 = auVar12._8_4_ + auVar12._12_4_;
        fVar5 = auVar12._0_4_ + auVar12._4_4_;
        fVar6 = auVar12._8_4_ + auVar12._12_4_;
        fVar17 = *(float *)(lVar3 + 0x40);
        fVar22 = *(float *)(lVar3 + 0x44);
        fVar23 = *(float *)(lVar3 + 0x48);
        fVar13 = -fVar13 / fVar24;
        fVar14 = -fVar14 / fVar4;
        fVar16 = -fVar16 / fVar5;
        fVar25 = fVar25 / fVar6;
        iVar32 = -(uint)(fVar24 == 0.0);
        iVar34 = -(uint)(fVar4 == 0.0);
        iVar36 = -(uint)(fVar5 == 0.0);
        iVar38 = -(uint)(fVar6 == 0.0);
        fVar27 = fVar7 - fVar17;
        fVar30 = fVar8 - fVar22;
        fVar31 = fVar9 - fVar23;
        auVar49._4_4_ = fVar31;
        auVar49._0_4_ = fVar31;
        auVar49._8_4_ = fVar31;
        auVar49._12_4_ = fVar31;
        fVar4 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                         ~(byte)((uint)iVar32 >> 0x10),
                                         CONCAT11((byte)((uint)fVar13 >> 8) &
                                                  ~(byte)((uint)iVar32 >> 8),
                                                  SUB41(fVar13,0) & ~(byte)iVar32)));
        auVar18._0_8_ =
             CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                      CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                               CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                        CONCAT14(SUB41(fVar14,0) & ~(byte)iVar34,fVar4))));
        auVar18[8] = SUB41(fVar16,0) & ~(byte)iVar36;
        auVar18[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar36 >> 8);
        auVar18[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
        auVar18[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
        auVar20[0xc] = SUB41(fVar25,0) & ~(byte)iVar38;
        auVar20._0_12_ = auVar18;
        auVar20[0xd] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar38 >> 8);
        auVar20[0xe] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
        auVar20[0xf] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
        auVar50._4_12_ = auVar49._4_12_;
        auVar50._0_4_ = fVar27;
        auVar52._0_8_ = auVar50._0_8_;
        auVar52._8_4_ = fVar30;
        auVar52._12_4_ = fVar31;
        auVar51._8_8_ = auVar52._8_8_;
        auVar51._4_4_ = fVar31;
        auVar51._0_4_ = fVar27;
        auVar53._0_12_ = auVar51._0_12_;
        auVar53._12_4_ = fVar31;
        auVar62 = NEON_ext(auVar53,auVar53,8,1);
        fVar26 = auVar20._12_4_;
        fVar33 = -fVar4;
        fVar5 = (float)((ulong)auVar18._0_8_ >> 0x20);
        fVar35 = -fVar5;
        fVar6 = auVar18._8_4_;
        fVar37 = -fVar6;
        auVar58._4_4_ = fVar6;
        auVar58._0_4_ = fVar6;
        auVar58._8_4_ = fVar6;
        auVar58._12_4_ = fVar6;
        auVar59 = NEON_ext(auVar58,auVar20,0xc,1);
        auVar39._4_4_ = fVar37;
        auVar39._0_4_ = fVar37;
        auVar39._8_4_ = fVar37;
        auVar39._12_4_ = fVar37;
        auVar60._4_4_ = fVar5;
        auVar60._0_4_ = fVar5;
        auVar60._8_4_ = fVar5;
        auVar60._12_4_ = fVar5;
        fVar14 = (float)_DAT_03cab640;
        fVar16 = (float)((ulong)_DAT_03cab640 >> 0x20);
        fVar25 = (float)_UNK_03cab648;
        fVar24 = (float)((ulong)_UNK_03cab648 >> 0x20);
        fVar13 = auVar62._0_4_;
        auVar54._4_12_ = auVar53._4_12_;
        auVar54._0_4_ = fVar13;
        auVar56._0_8_ = auVar54._0_8_;
        auVar56._8_4_ = auVar62._8_4_;
        auVar56._12_4_ = fVar31;
        auVar55._8_8_ = auVar56._8_8_;
        auVar55._4_4_ = fVar27;
        auVar55._0_4_ = fVar13;
        auVar57._0_12_ = auVar55._0_12_;
        auVar57._12_4_ = fVar30;
        auVar61 = NEON_ext(auVar60,auVar59,0xc,1);
        auVar12 = NEON_ext(auVar57,auVar62,8,1);
        auVar12 = NEON_ext(auVar12,auVar12,0xc,1);
        auVar40._4_12_ = auVar39._4_12_;
        auVar40._0_4_ = fVar33;
        auVar42._0_8_ = auVar40._0_8_;
        auVar42._8_4_ = fVar35;
        auVar42._12_4_ = fVar37;
        auVar41._8_8_ = auVar42._8_8_;
        auVar41._4_4_ = fVar37;
        auVar41._0_4_ = fVar33;
        auVar43._0_12_ = auVar41._0_12_;
        auVar43._12_4_ = fVar37;
        auVar28._0_4_ =
             (fVar27 * fVar26 + fVar4 * fVar14 * 0.0 + auVar12._0_4_ * auVar61._0_4_ * fVar14) -
             auVar59._0_4_ * fVar13;
        auVar28._4_4_ =
             (fVar30 * fVar26 + fVar5 * fVar16 * 0.0 + auVar12._4_4_ * auVar61._4_4_ * fVar16) -
             auVar59._4_4_ * auVar62._4_4_;
        auVar28._8_4_ =
             (fVar31 * fVar26 + fVar6 * fVar25 * 0.0 + auVar12._8_4_ * auVar61._8_4_ * fVar25) -
             auVar59._8_4_ * auVar62._8_4_;
        auVar28._12_4_ =
             (fVar26 * 0.0 + fVar27 * fVar4 * fVar24 + auVar12._12_4_ * auVar61._12_4_ * fVar24) -
             auVar59._12_4_ * auVar62._12_4_;
        auVar21._4_4_ = auVar28._8_4_;
        auVar21._0_4_ = auVar28._8_4_;
        auVar21._8_4_ = auVar28._8_4_;
        auVar21._12_4_ = auVar28._8_4_;
        auVar48._4_4_ = auVar28._4_4_;
        auVar48._0_4_ = auVar28._4_4_;
        auVar48._8_4_ = auVar28._4_4_;
        auVar48._12_4_ = auVar28._4_4_;
        auVar59 = NEON_ext(auVar43,auVar43,8,1);
        auVar12 = NEON_ext(auVar21,auVar28,0xc,1);
        fVar13 = auVar59._0_4_;
        auVar44._4_12_ = auVar43._4_12_;
        auVar44._0_4_ = fVar13;
        auVar46._0_8_ = auVar44._0_8_;
        auVar46._8_4_ = auVar59._8_4_;
        auVar46._12_4_ = fVar37;
        auVar45._8_8_ = auVar46._8_8_;
        auVar45._4_4_ = fVar33;
        auVar45._0_4_ = fVar13;
        auVar47._0_12_ = auVar45._0_12_;
        auVar47._12_4_ = fVar35;
        auVar62 = NEON_ext(auVar48,auVar12,0xc,1);
        auVar61 = NEON_ext(auVar47,auVar59,8,1);
        auVar61 = NEON_ext(auVar61,auVar61,0xc,1);
        fVar24 = ABS(*(float *)(lVar3 + 0x20) * 0.5);
        fVar4 = ABS(*(float *)(lVar3 + 0x24) * 0.5);
        fVar5 = ABS(*(float *)(lVar3 + 0x28) * 0.5);
        fVar13 = fVar17 + ((fVar33 * auVar28._12_4_ + fVar26 * auVar28._0_4_ * fVar14 +
                           auVar61._0_4_ * auVar62._0_4_ * fVar14) - auVar12._0_4_ * fVar13);
        fVar14 = fVar22 + ((fVar35 * auVar28._12_4_ + fVar26 * auVar28._4_4_ * fVar16 +
                           auVar61._4_4_ * auVar62._4_4_ * fVar16) - auVar12._4_4_ * auVar59._4_4_);
        fVar16 = fVar23 + ((fVar37 * auVar28._12_4_ + fVar26 * auVar28._8_4_ * fVar25 +
                           auVar61._8_4_ * auVar62._8_4_ * fVar25) - auVar12._8_4_ * auVar59._8_4_);
        fVar25 = *(float *)(lVar3 + 0x4c) + 0.0;
        auVar29._0_4_ = fVar13 - (fVar17 - fVar24);
        auVar29._4_4_ = fVar14 - (fVar22 - fVar4);
        auVar29._8_4_ = fVar16 - (fVar23 - fVar5);
        auVar29._12_4_ = fVar25 - 0.0;
        auVar62._0_4_ = (fVar17 + fVar24) - fVar13;
        auVar62._4_4_ = (fVar22 + fVar4) - fVar14;
        auVar62._8_4_ = (fVar23 + fVar5) - fVar16;
        auVar62._12_4_ = 0.0 - fVar25;
        auVar12 = NEON_fmin(auVar29,auVar62,4);
        auVar18 = auVar12._0_12_;
      }
      else {
        fVar13 = ABS(*(float *)(lVar3 + 0x20) * 0.5);
        fVar14 = ABS(*(float *)(lVar3 + 0x24) * 0.5);
        fVar16 = ABS(*(float *)(lVar3 + 0x28) * 0.5);
        auVar19._0_4_ = fVar7 - (*(float *)(lVar3 + 0x40) - fVar13);
        auVar19._4_4_ = fVar8 - (*(float *)(lVar3 + 0x44) - fVar14);
        auVar19._8_4_ = fVar9 - (*(float *)(lVar3 + 0x48) - fVar16);
        auVar19._12_4_ = fVar10 - 0.0;
        auVar15._0_4_ = (*(float *)(lVar3 + 0x40) + fVar13) - fVar7;
        auVar15._4_4_ = (*(float *)(lVar3 + 0x44) + fVar14) - fVar8;
        auVar15._8_4_ = (*(float *)(lVar3 + 0x48) + fVar16) - fVar9;
        auVar15._12_4_ = 0.0 - fVar10;
        auVar12 = NEON_fmin(auVar19,auVar15,4);
        auVar18 = auVar12._0_12_;
      }
      if (((0.0 <= auVar18._8_4_) && (0.0 <= auVar18._0_4_)) && (0.0 <= auVar18._4_4_)) {
        DAT_04837610 = DAT_048375f8;
        return 1;
      }
      lVar3 = lVar3 + 0x70;
    } while (*(long *)(DAT_048375f8 + 0x1f8) != lVar3);
  }
  return 0;
}


