/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148c4ac; name: FUN_0148c4ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0148c4ac(undefined1 param_1 [16],float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar13;
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 auVar10 [16];
  float fVar14;
  undefined1 auVar15 [12];
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar23;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  fVar13 = param_1._8_4_;
  fVar11 = param_1._4_4_;
  fVar8 = param_1._0_4_;
  fVar14 = param_2[4];
  fVar12 = param_2[5];
  fVar21 = param_2[6];
  fVar22 = param_2[7];
  auVar16._0_4_ = fVar14 * *(float *)PTR_DAT_047d41d0 + fVar12 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar16._4_4_ =
       fVar21 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar22 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar16._8_4_ = fVar14 * *(float *)PTR_DAT_047d41d0 + fVar12 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar16._12_4_ =
       fVar21 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar22 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar16 = NEON_ext(auVar16,auVar16,4,1);
  fVar3 = auVar16._0_4_ + auVar16._4_4_;
  fVar3 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar3) * fVar3 +
          *(float *)PTR_DAT_047d41a0 * (float)(fVar3 < *(float *)PTR_DAT_047d4180) * fVar3) -
          *(float *)PTR_DAT_047d4190;
  if ((fVar3 < *(float *)PTR_DAT_047d41c0) || (*(float *)PTR_DAT_047d41b0 < fVar3)) {
    auVar53._0_4_ = fVar14 * fVar14 + fVar12 * fVar12;
    auVar53._4_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar53._8_4_ = fVar14 * fVar14 + fVar12 * fVar12;
    auVar53._12_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar16 = NEON_ext(auVar53,auVar53,4,1);
    fVar4 = auVar16._0_4_ + auVar16._4_4_;
    fVar5 = auVar16._8_4_ + auVar16._12_4_;
    fVar6 = auVar16._0_4_ + auVar16._4_4_;
    fVar7 = auVar16._8_4_ + auVar16._12_4_;
    fVar3 = param_2[8];
    fVar1 = param_2[9];
    fVar2 = param_2[10];
    fVar8 = fVar8 - fVar3;
    fVar11 = fVar11 - fVar1;
    fVar13 = fVar13 - fVar2;
    fVar14 = -fVar14 / fVar4;
    fVar20 = -fVar12 / fVar5;
    fVar21 = -fVar21 / fVar6;
    fVar22 = fVar22 / fVar7;
    auVar40._4_4_ = fVar13;
    auVar40._0_4_ = fVar13;
    auVar40._8_4_ = fVar13;
    auVar40._12_4_ = fVar13;
    iVar23 = -(uint)(fVar4 == 0.0);
    iVar33 = -(uint)(fVar5 == 0.0);
    iVar34 = -(uint)(fVar6 == 0.0);
    iVar35 = -(uint)(fVar7 == 0.0);
    fVar12 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                      CONCAT11((byte)((uint)fVar14 >> 8) &
                                               ~(byte)((uint)iVar23 >> 8),
                                               SUB41(fVar14,0) & ~(byte)iVar23)));
    auVar15._0_8_ =
         CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                  CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                           CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar33,fVar12))));
    auVar15[8] = SUB41(fVar21,0) & ~(byte)iVar34;
    auVar15[9] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar34 >> 8);
    auVar15[10] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    auVar15[0xb] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    auVar17[0xc] = SUB41(fVar22,0) & ~(byte)iVar35;
    auVar17._0_12_ = auVar15;
    auVar17[0xd] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar35 >> 8);
    auVar17[0xe] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
    auVar17[0xf] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
    auVar41._4_12_ = auVar40._4_12_;
    auVar41._0_4_ = fVar8;
    auVar43._0_8_ = auVar41._0_8_;
    auVar43._8_4_ = fVar11;
    auVar43._12_4_ = fVar13;
    auVar42._8_8_ = auVar43._8_8_;
    auVar42._4_4_ = fVar13;
    auVar42._0_4_ = fVar8;
    auVar44._0_12_ = auVar42._0_12_;
    auVar44._12_4_ = fVar13;
    auVar53 = NEON_ext(auVar44,auVar44,8,1);
    fVar4 = auVar17._12_4_;
    fVar5 = -fVar12;
    fVar21 = (float)((ulong)auVar15._0_8_ >> 0x20);
    fVar6 = -fVar21;
    fVar22 = auVar15._8_4_;
    fVar7 = -fVar22;
    auVar49._4_4_ = fVar22;
    auVar49._0_4_ = fVar22;
    auVar49._8_4_ = fVar22;
    auVar49._12_4_ = fVar22;
    auVar50 = NEON_ext(auVar49,auVar17,0xc,1);
    auVar24._4_4_ = fVar7;
    auVar24._0_4_ = fVar7;
    auVar24._8_4_ = fVar7;
    auVar24._12_4_ = fVar7;
    auVar51._4_4_ = fVar21;
    auVar51._0_4_ = fVar21;
    auVar51._8_4_ = fVar21;
    auVar51._12_4_ = fVar21;
    fVar14 = auVar53._0_4_;
    auVar45._4_12_ = auVar44._4_12_;
    auVar45._0_4_ = fVar14;
    auVar47._0_8_ = auVar45._0_8_;
    auVar47._8_4_ = auVar53._8_4_;
    auVar47._12_4_ = fVar13;
    auVar46._8_8_ = auVar47._8_8_;
    auVar46._4_4_ = fVar8;
    auVar46._0_4_ = fVar14;
    auVar48._0_12_ = auVar46._0_12_;
    auVar48._12_4_ = fVar11;
    auVar52 = NEON_ext(auVar51,auVar50,0xc,1);
    fVar20 = (float)_DAT_03cab640;
    fVar36 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar37 = (float)_UNK_03cab648;
    fVar38 = (float)((ulong)_UNK_03cab648 >> 0x20);
    auVar16 = NEON_ext(auVar48,auVar53,8,1);
    auVar16 = NEON_ext(auVar16,auVar16,0xc,1);
    auVar25._4_12_ = auVar24._4_12_;
    auVar25._0_4_ = fVar5;
    auVar27._0_8_ = auVar25._0_8_;
    auVar27._8_4_ = fVar6;
    auVar27._12_4_ = fVar7;
    auVar26._8_8_ = auVar27._8_8_;
    auVar26._4_4_ = fVar7;
    auVar26._0_4_ = fVar5;
    auVar28._0_12_ = auVar26._0_12_;
    auVar28._12_4_ = fVar7;
    auVar9._0_4_ = (fVar8 * fVar4 + fVar12 * fVar20 * 0.0 + auVar16._0_4_ * auVar52._0_4_ * fVar20)
                   - auVar50._0_4_ * fVar14;
    auVar9._4_4_ = (fVar11 * fVar4 + fVar21 * fVar36 * 0.0 + auVar16._4_4_ * auVar52._4_4_ * fVar36)
                   - auVar50._4_4_ * auVar53._4_4_;
    auVar9._8_4_ = (fVar13 * fVar4 + fVar22 * fVar37 * 0.0 + auVar16._8_4_ * auVar52._8_4_ * fVar37)
                   - auVar50._8_4_ * auVar53._8_4_;
    auVar9._12_4_ =
         (fVar4 * 0.0 + fVar8 * fVar12 * fVar38 + auVar16._12_4_ * auVar52._12_4_ * fVar38) -
         auVar50._12_4_ * auVar53._12_4_;
    auVar18._4_4_ = auVar9._8_4_;
    auVar18._0_4_ = auVar9._8_4_;
    auVar18._8_4_ = auVar9._8_4_;
    auVar18._12_4_ = auVar9._8_4_;
    auVar50 = NEON_ext(auVar28,auVar28,8,1);
    auVar16 = NEON_ext(auVar18,auVar9,0xc,1);
    auVar39._4_4_ = auVar9._4_4_;
    auVar39._0_4_ = auVar9._4_4_;
    auVar39._8_4_ = auVar9._4_4_;
    auVar39._12_4_ = auVar9._4_4_;
    fVar14 = auVar50._0_4_;
    auVar29._4_12_ = auVar28._4_12_;
    auVar29._0_4_ = fVar14;
    auVar31._0_8_ = auVar29._0_8_;
    auVar31._8_4_ = auVar50._8_4_;
    auVar31._12_4_ = fVar7;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._4_4_ = fVar5;
    auVar30._0_4_ = fVar14;
    auVar32._0_12_ = auVar30._0_12_;
    auVar32._12_4_ = fVar6;
    auVar53 = NEON_ext(auVar39,auVar16,0xc,1);
    auVar52 = NEON_ext(auVar32,auVar50,8,1);
    auVar52 = NEON_ext(auVar52,auVar52,0xc,1);
    fVar14 = fVar3 + ((fVar5 * auVar9._12_4_ + fVar4 * auVar9._0_4_ * fVar20 +
                      auVar52._0_4_ * auVar53._0_4_ * fVar20) - auVar16._0_4_ * fVar14);
    fVar12 = fVar1 + ((fVar6 * auVar9._12_4_ + fVar4 * auVar9._4_4_ * fVar36 +
                      auVar52._4_4_ * auVar53._4_4_ * fVar36) - auVar16._4_4_ * auVar50._4_4_);
    fVar21 = fVar2 + ((fVar7 * auVar9._12_4_ + fVar4 * auVar9._8_4_ * fVar37 +
                      auVar52._8_4_ * auVar53._8_4_ * fVar37) - auVar16._8_4_ * auVar50._8_4_);
    auVar19._0_4_ = fVar14 - (fVar3 - ABS(*param_2 * 0.5));
    auVar19._4_4_ = fVar12 - (fVar1 - ABS(param_2[1] * 0.5));
    auVar19._8_4_ = fVar21 - (fVar2 - ABS(param_2[2] * 0.5));
    auVar19._12_4_ = (param_2[0xb] + 0.0) - 0.0;
    auVar10._0_4_ = (fVar3 + ABS(*param_2 * 0.5)) - fVar14;
    auVar10._4_4_ = (fVar1 + ABS(param_2[1] * 0.5)) - fVar12;
    auVar10._8_4_ = (fVar2 + ABS(param_2[2] * 0.5)) - fVar21;
    auVar10._12_4_ = 0.0 - (param_2[0xb] + 0.0);
    auVar16 = NEON_fmin(auVar19,auVar10,4);
    auVar15 = auVar16._0_12_;
  }
  else {
    auVar52._0_4_ = fVar8 - (param_2[8] - ABS(*param_2 * 0.5));
    auVar52._4_4_ = fVar11 - (param_2[9] - ABS(param_2[1] * 0.5));
    auVar52._8_4_ = fVar13 - (param_2[10] - ABS(param_2[2] * 0.5));
    auVar52._12_4_ = param_1._12_4_ - 0.0;
    auVar50._0_4_ = (param_2[8] + ABS(*param_2 * 0.5)) - fVar8;
    auVar50._4_4_ = (param_2[9] + ABS(param_2[1] * 0.5)) - fVar11;
    auVar50._8_4_ = (param_2[10] + ABS(param_2[2] * 0.5)) - fVar13;
    auVar50._12_4_ = 0.0 - param_1._12_4_;
    auVar16 = NEON_fmin(auVar52,auVar50,4);
    auVar15 = auVar16._0_12_;
  }
  if ((0.0 <= auVar15._0_4_) && (0.0 <= auVar15._4_4_)) {
    return 0.0 <= auVar15._8_4_;
  }
  return false;
}


