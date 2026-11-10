/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4a568; name: FUN_00d4a568
 */


void FUN_00d4a568(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  float fVar13;
  long lVar12;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_38;
  float fStack_34;
  
  fVar17 = param_1._0_4_;
  FUN_00d4a7f4();
  fStack_38 = param_3._8_4_;
  fStack_34 = param_3._12_4_;
  lVar1 = *(long *)(param_5 + 0x1e8);
  uStack_58 = param_1._8_4_;
  uStack_54 = param_1._12_4_;
  *(undefined4 *)(lVar1 + 0x88) = uStack_58;
  *(undefined4 *)(lVar1 + 0x8c) = uStack_54;
  *(float *)(lVar1 + 0x80) = fVar17;
  *(int *)(lVar1 + 0x84) = param_1._4_4_;
  *(long *)(lVar1 + 0x98) = param_2._8_8_;
  *(long *)(lVar1 + 0x90) = param_2._0_8_;
  *(float *)(lVar1 + 0xa8) = fStack_38;
  *(float *)(lVar1 + 0xac) = fStack_34;
  *(long *)(lVar1 + 0xa0) = param_3._0_8_;
  *(long *)(lVar1 + 0xb8) = param_4._8_8_;
  *(long *)(lVar1 + 0xb0) = param_4._0_8_;
  lVar1 = *(long *)(param_5 + 0x1e8);
  fVar18 = param_2._4_4_;
  fVar47 = param_4._8_4_;
  if (fStack_34 == 0.0) {
    lVar12 = (ulong)(uint)((param_4._0_4_ + 1.0) / fVar17) << 0x20;
    auVar22._8_8_ = (ulong)(uint)((1.0 - param_4._0_4_) / fVar17) << 0x20;
    auVar22._0_8_ = DAT_03cb56b0;
    auVar37._8_8_ = (ulong)(uint)((1.0 - param_4._4_4_) / fVar18) << 0x20;
    auVar37._0_8_ = DAT_03cb5690;
    auVar23._8_8_ = (ulong)(uint)((param_4._4_4_ + 1.0) / fVar18) << 0x20;
    auVar23._0_8_ = DAT_03cb5600;
    fVar18 = 1.0 - fVar47;
    uVar9 = DAT_03cb5410;
    fVar17 = fStack_38;
  }
  else {
    fVar17 = -1.0 / fVar17;
    fVar18 = -1.0 / fVar18;
    fVar8 = (float)DAT_03cb5410;
    fVar10 = (float)((ulong)DAT_03cb5410 >> 0x20);
    auVar40._0_4_ = fVar8 * fVar8 + fVar10 * fVar10;
    auVar40._4_4_ = fVar17 * fVar17 + 0.0;
    auVar40._8_4_ = fVar8 * fVar8 + fVar10 * fVar10;
    auVar40._12_4_ = fVar17 * fVar17 + 0.0;
    auVar22 = NEON_ext(auVar40,auVar40,4,1);
    fVar14 = (float)DAT_03cb56b0;
    fVar16 = (float)((ulong)DAT_03cb56b0 >> 0x20);
    fVar19 = (float)DAT_03cb5600;
    fVar21 = (float)((ulong)DAT_03cb5600 >> 0x20);
    auVar2._0_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar2._4_4_ = auVar22._8_4_ + auVar22._12_4_;
    auVar2._8_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar2._12_4_ = auVar22._8_4_ + auVar22._12_4_;
    fVar30 = (float)DAT_03cb5690;
    fVar31 = (float)((ulong)DAT_03cb5690 >> 0x20);
    auVar43._0_4_ = fVar14 * fVar14 + fVar16 * fVar16;
    auVar43._4_4_ = fVar17 * fVar17 + 0.0;
    auVar43._8_4_ = fVar14 * fVar14 + fVar16 * fVar16;
    auVar43._12_4_ = fVar17 * fVar17 + 0.0;
    auVar3._0_4_ = fVar19 * fVar19 + fVar21 * fVar21;
    auVar3._4_4_ = fVar18 * fVar18 + 0.0;
    auVar3._8_4_ = fVar19 * fVar19 + fVar21 * fVar21;
    auVar3._12_4_ = fVar18 * fVar18 + 0.0;
    auVar22 = NEON_ext(auVar43,auVar43,4,1);
    auVar4._0_4_ = fVar30 * fVar30 + fVar31 * fVar31;
    auVar4._4_4_ = fVar18 * fVar18 + 0.0;
    auVar4._8_4_ = fVar30 * fVar30 + fVar31 * fVar31;
    auVar4._12_4_ = fVar18 * fVar18 + 0.0;
    auVar5._0_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar5._4_4_ = auVar22._8_4_ + auVar22._12_4_;
    auVar5._8_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar5._12_4_ = auVar22._8_4_ + auVar22._12_4_;
    auVar23 = NEON_ext(auVar3,auVar3,4,1);
    auVar22 = NEON_ext(auVar4,auVar4,4,1);
    auVar6._0_4_ = auVar23._0_4_ + auVar23._4_4_;
    auVar6._4_4_ = auVar23._8_4_ + auVar23._12_4_;
    auVar6._8_4_ = auVar23._0_4_ + auVar23._4_4_;
    auVar6._12_4_ = auVar23._8_4_ + auVar23._12_4_;
    auVar23 = NEON_frsqrte(auVar5,4);
    auVar7._0_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar7._4_4_ = auVar22._8_4_ + auVar22._12_4_;
    auVar7._8_4_ = auVar22._0_4_ + auVar22._4_4_;
    auVar7._12_4_ = auVar22._8_4_ + auVar22._12_4_;
    auVar22 = NEON_frsqrte(auVar2,4);
    auVar39._0_4_ = auVar5._0_4_ * auVar23._0_4_;
    auVar39._4_4_ = auVar5._4_4_ * auVar23._4_4_;
    auVar39._8_4_ = auVar5._8_4_ * auVar23._8_4_;
    auVar39._12_4_ = auVar5._12_4_ * auVar23._12_4_;
    auVar36._0_4_ = auVar2._0_4_ * auVar22._0_4_;
    auVar36._4_4_ = auVar2._4_4_ * auVar22._4_4_;
    auVar36._8_4_ = auVar2._8_4_ * auVar22._8_4_;
    auVar36._12_4_ = auVar2._12_4_ * auVar22._12_4_;
    auVar40 = NEON_frsqrts(auVar23,auVar39,4);
    auVar43 = NEON_frsqrte(auVar6,4);
    auVar37 = NEON_frsqrts(auVar22,auVar36,4);
    auVar15._0_4_ = auVar22._0_4_ * auVar37._0_4_;
    auVar15._4_4_ = auVar22._4_4_ * auVar37._4_4_;
    auVar15._8_4_ = auVar22._8_4_ * auVar37._8_4_;
    auVar15._12_4_ = auVar22._12_4_ * auVar37._12_4_;
    auVar24._0_4_ = auVar23._0_4_ * auVar40._0_4_;
    auVar24._4_4_ = auVar23._4_4_ * auVar40._4_4_;
    auVar24._8_4_ = auVar23._8_4_ * auVar40._8_4_;
    auVar24._12_4_ = auVar23._12_4_ * auVar40._12_4_;
    auVar41._0_4_ = auVar6._0_4_ * auVar43._0_4_;
    auVar41._4_4_ = auVar6._4_4_ * auVar43._4_4_;
    auVar41._8_4_ = auVar6._8_4_ * auVar43._8_4_;
    auVar41._12_4_ = auVar6._12_4_ * auVar43._12_4_;
    auVar22 = NEON_frsqrte(auVar7,4);
    auVar23 = NEON_frsqrts(auVar43,auVar41,4);
    auVar42._0_4_ = auVar43._0_4_ * auVar23._0_4_;
    auVar42._4_4_ = auVar43._4_4_ * auVar23._4_4_;
    auVar42._8_4_ = auVar43._8_4_ * auVar23._8_4_;
    auVar42._12_4_ = auVar43._12_4_ * auVar23._12_4_;
    auVar44._0_4_ = auVar7._0_4_ * auVar22._0_4_;
    auVar44._4_4_ = auVar7._4_4_ * auVar22._4_4_;
    auVar44._8_4_ = auVar7._8_4_ * auVar22._8_4_;
    auVar44._12_4_ = auVar7._12_4_ * auVar22._12_4_;
    auVar23 = NEON_frsqrts(auVar22,auVar44,4);
    auVar38._0_4_ = auVar22._0_4_ * auVar23._0_4_;
    auVar38._4_4_ = auVar22._4_4_ * auVar23._4_4_;
    auVar38._8_4_ = auVar22._8_4_ * auVar23._8_4_;
    auVar38._12_4_ = auVar22._12_4_ * auVar23._12_4_;
    auVar45._0_4_ = auVar2._0_4_ * auVar15._0_4_;
    auVar45._4_4_ = auVar2._4_4_ * auVar15._4_4_;
    auVar45._8_4_ = auVar2._8_4_ * auVar15._8_4_;
    auVar45._12_4_ = auVar2._12_4_ * auVar15._12_4_;
    iVar32 = -(uint)(auVar2._0_4_ == 0.0);
    iVar33 = -(uint)(auVar2._4_4_ == 0.0);
    iVar34 = -(uint)(auVar2._8_4_ == 0.0);
    iVar35 = -(uint)(auVar2._12_4_ == 0.0);
    auVar22 = NEON_frsqrts(auVar15,auVar45,4);
    auVar46._0_4_ = auVar5._0_4_ * auVar24._0_4_;
    auVar46._4_4_ = auVar5._4_4_ * auVar24._4_4_;
    auVar46._8_4_ = auVar5._8_4_ * auVar24._8_4_;
    auVar46._12_4_ = auVar5._12_4_ * auVar24._12_4_;
    iVar26 = -(uint)(auVar5._0_4_ == 0.0);
    iVar27 = -(uint)(auVar5._4_4_ == 0.0);
    iVar28 = -(uint)(auVar5._8_4_ == 0.0);
    iVar29 = -(uint)(auVar5._12_4_ == 0.0);
    auVar23 = NEON_frsqrts(auVar24,auVar46,4);
    fVar8 = fVar8 * auVar15._0_4_ * auVar22._0_4_;
    fVar10 = fVar10 * auVar15._4_4_ * auVar22._4_4_;
    fVar11 = fVar17 * auVar15._8_4_ * auVar22._8_4_;
    fVar13 = auVar15._12_4_ * auVar22._12_4_ * 0.0;
    lVar12 = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                      CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                               CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                        CONCAT14(SUB41(fVar13,0) & ~(byte)iVar35,
                                                 CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                          ~(byte)((uint)iVar34 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                                                   ~(byte)((uint)iVar34 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar11 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar34 >> 8),SUB41(fVar11,0) & ~(byte)iVar34))))))
                     );
    fVar14 = fVar14 * auVar24._0_4_ * auVar23._0_4_;
    fVar16 = fVar16 * auVar24._4_4_ * auVar23._4_4_;
    fVar17 = fVar17 * auVar24._8_4_ * auVar23._8_4_;
    fVar11 = auVar24._12_4_ * auVar23._12_4_ * 0.0;
    auVar22[0] = SUB41(fVar14,0) & ~(byte)iVar26;
    auVar22[1] = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar22[2] = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar22[3] = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar22[4] = SUB41(fVar16,0) & ~(byte)iVar27;
    auVar22[5] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar27 >> 8);
    auVar22[6] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
    auVar22[7] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
    auVar22[8] = SUB41(fVar17,0) & ~(byte)iVar28;
    auVar22[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar28 >> 8);
    auVar22[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
    auVar22[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
    auVar22[0xc] = SUB41(fVar11,0) & ~(byte)iVar29;
    auVar22[0xd] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar29 >> 8);
    auVar22[0xe] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    auVar22[0xf] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    auVar20._0_4_ = auVar6._0_4_ * auVar42._0_4_;
    auVar20._4_4_ = auVar6._4_4_ * auVar42._4_4_;
    auVar20._8_4_ = auVar6._8_4_ * auVar42._8_4_;
    auVar20._12_4_ = auVar6._12_4_ * auVar42._12_4_;
    auVar23 = NEON_frsqrts(auVar42,auVar20,4);
    auVar25._0_4_ = auVar7._0_4_ * auVar38._0_4_;
    auVar25._4_4_ = auVar7._4_4_ * auVar38._4_4_;
    auVar25._8_4_ = auVar7._8_4_ * auVar38._8_4_;
    auVar25._12_4_ = auVar7._12_4_ * auVar38._12_4_;
    auVar37 = NEON_frsqrts(auVar38,auVar25,4);
    fVar19 = fVar19 * auVar42._0_4_ * auVar23._0_4_;
    fVar21 = fVar21 * auVar42._4_4_ * auVar23._4_4_;
    fVar17 = fVar18 * auVar42._8_4_ * auVar23._8_4_;
    fVar11 = auVar42._12_4_ * auVar23._12_4_ * 0.0;
    fVar30 = fVar30 * auVar38._0_4_ * auVar37._0_4_;
    fVar31 = fVar31 * auVar38._4_4_ * auVar37._4_4_;
    fVar18 = fVar18 * auVar38._8_4_ * auVar37._8_4_;
    fVar13 = auVar38._12_4_ * auVar37._12_4_ * 0.0;
    iVar26 = -(uint)(auVar6._0_4_ == 0.0);
    iVar27 = -(uint)(auVar6._4_4_ == 0.0);
    iVar28 = -(uint)(auVar6._8_4_ == 0.0);
    iVar29 = -(uint)(auVar6._12_4_ == 0.0);
    auVar23[0] = SUB41(fVar19,0) & ~(byte)iVar26;
    auVar23[1] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar23[2] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar23[3] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar23[4] = SUB41(fVar21,0) & ~(byte)iVar27;
    auVar23[5] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar27 >> 8);
    auVar23[6] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
    auVar23[7] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
    auVar23[8] = SUB41(fVar17,0) & ~(byte)iVar28;
    auVar23[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar28 >> 8);
    auVar23[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
    auVar23[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
    auVar23[0xc] = SUB41(fVar11,0) & ~(byte)iVar29;
    auVar23[0xd] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar29 >> 8);
    auVar23[0xe] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    auVar23[0xf] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    iVar26 = -(uint)(auVar7._0_4_ == 0.0);
    iVar27 = -(uint)(auVar7._4_4_ == 0.0);
    iVar28 = -(uint)(auVar7._8_4_ == 0.0);
    iVar29 = -(uint)(auVar7._12_4_ == 0.0);
    auVar37[0] = SUB41(fVar30,0) & ~(byte)iVar26;
    auVar37[1] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar37[2] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar37[3] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar37[4] = SUB41(fVar31,0) & ~(byte)iVar27;
    auVar37[5] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar27 >> 8);
    auVar37[6] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
    auVar37[7] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
    auVar37[8] = SUB41(fVar18,0) & ~(byte)iVar28;
    auVar37[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar28 >> 8);
    auVar37[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
    auVar37[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
    auVar37[0xc] = SUB41(fVar13,0) & ~(byte)iVar29;
    auVar37[0xd] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar29 >> 8);
    auVar37[0xe] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    auVar37[0xf] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    fVar18 = fStack_38 * (fVar47 / fStack_38);
    uVar9 = CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                     CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                              CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                       CONCAT14(SUB41(fVar10,0) & ~(byte)iVar33,
                                                CONCAT13((byte)((uint)fVar8 >> 0x18) &
                                                         ~(byte)((uint)iVar32 >> 0x18),
                                                         CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                                                  ~(byte)((uint)iVar32 >> 0x10),
                                                                  CONCAT11((byte)((uint)fVar8 >> 8)
                                                                           & ~(byte)((uint)iVar32 >>
                                                                                    8),
                                                                           SUB41(fVar8,0) &
                                                                           ~(byte)iVar32)))))));
    fVar17 = fStack_38 + 1.0;
  }
  *(long *)(lVar1 + 0xe8) = auVar23._8_8_;
  *(long *)(lVar1 + 0xe0) = auVar23._0_8_;
  *(long *)(lVar1 + 0xf8) = auVar37._8_8_;
  *(long *)(lVar1 + 0xf0) = auVar37._0_8_;
  *(long *)(lVar1 + 200) = lVar12;
  *(undefined8 *)(lVar1 + 0xc0) = uVar9;
  *(long *)(lVar1 + 0xd8) = auVar22._8_8_;
  *(long *)(lVar1 + 0xd0) = auVar22._0_8_;
  *(undefined4 *)(lVar1 + 0x108) = 0xbf800000;
  *(float *)(lVar1 + 0x10c) = fVar18 / fVar17;
  *(undefined4 *)(lVar1 + 0x100) = 0;
  *(undefined4 *)(lVar1 + 0x104) = 0;
  *(undefined4 *)(lVar1 + 0x118) = 0x3f800000;
  *(float *)(lVar1 + 0x11c) = fVar47 / fStack_38;
  *(undefined4 *)(lVar1 + 0x110) = 0;
  *(undefined4 *)(lVar1 + 0x114) = 0;
  *(undefined1 *)(*(long *)(param_5 + 0x1e8) + 0x180) = 1;
  return;
}


