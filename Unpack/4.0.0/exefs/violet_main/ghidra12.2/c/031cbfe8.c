/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cbfe8; name: FUN_031cbfe8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_031cbfe8(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [12];
  float fVar64;
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  float fVar9;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [12];
  float fVar14;
  ulong uVar15;
  byte bVar19;
  undefined8 uVar16;
  byte bVar18;
  byte bVar20;
  undefined1 auVar17 [16];
  byte bVar21;
  byte bVar23;
  byte bVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  float fVar34;
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined8 uVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  
  auVar46 = param_2[3];
  auVar17 = NEON_ext(auVar46,auVar46,8,1);
  auVar3 = NEON_ext(param_2[2],param_2[2],4,1);
  auVar22 = NEON_ext(auVar46,auVar46,0xc,1);
  fVar5 = auVar3._0_4_;
  auVar43._0_4_ = auVar46._0_4_ * fVar5;
  fVar7 = auVar3._4_4_;
  auVar43._4_4_ = auVar46._4_4_ * fVar7;
  fVar4 = auVar3._8_4_;
  auVar43._8_4_ = auVar46._8_4_ * fVar4;
  fVar6 = auVar3._12_4_;
  auVar43._12_4_ = auVar46._12_4_ * fVar6;
  auVar32 = NEON_ext(auVar43,auVar43,8,1);
  auVar63._0_4_ = auVar17._0_4_ * fVar5;
  auVar63._4_4_ = auVar17._4_4_ * fVar7;
  auVar63._8_4_ = auVar17._8_4_ * fVar4;
  auVar63._12_4_ = auVar17._12_4_ * fVar6;
  auVar26 = NEON_ext(auVar63,auVar63,4,1);
  auVar59._0_4_ = auVar22._0_4_ * fVar5;
  auVar59._4_4_ = auVar22._4_4_ * fVar7;
  auVar59._8_4_ = auVar22._8_4_ * fVar4;
  auVar59._12_4_ = auVar22._12_4_ * fVar6;
  auVar22 = NEON_ext(auVar43,auVar43,4,1);
  auVar17 = *param_2;
  auVar43 = param_2[1];
  auVar53 = NEON_ext(auVar43,auVar43,8,1);
  auVar55 = NEON_ext(auVar43,auVar43,0xc,1);
  fVar44 = auVar26._0_4_ - auVar32._0_4_;
  fVar47 = auVar26._4_4_ - auVar32._4_4_;
  fVar49 = auVar26._8_4_ - auVar32._8_4_;
  fVar51 = auVar26._12_4_ - auVar32._12_4_;
  auVar26 = NEON_ext(auVar59,auVar59,8,1);
  fVar37 = auVar63._0_4_ - auVar22._0_4_;
  fVar38 = auVar63._4_4_ - auVar22._4_4_;
  fVar39 = auVar63._8_4_ - auVar22._8_4_;
  fVar40 = auVar63._12_4_ - auVar22._12_4_;
  auVar22 = NEON_ext(auVar43,auVar43,4,1);
  fVar30 = auVar26._0_4_ - auVar59._0_4_;
  fVar34 = auVar26._4_4_ - auVar59._4_4_;
  fVar35 = auVar26._8_4_ - auVar59._8_4_;
  fVar36 = auVar26._12_4_ - auVar59._12_4_;
  fVar9 = auVar55._0_4_ * fVar37 + auVar22._0_4_ * fVar44 + auVar53._0_4_ * fVar30;
  fVar12 = auVar55._4_4_ * fVar38 + auVar22._4_4_ * fVar47 + auVar53._4_4_ * fVar34;
  fVar13 = auVar55._8_4_ * fVar39 + auVar22._8_4_ * fVar49 + auVar53._8_4_ * fVar35;
  fVar14 = auVar55._12_4_ * fVar40 + auVar22._12_4_ * fVar51 + auVar53._12_4_ * fVar36;
  fVar25 = auVar17._0_4_ * fVar9;
  fVar27 = auVar17._4_4_ * fVar12;
  fVar28 = auVar17._8_4_ * fVar13;
  fVar29 = auVar17._12_4_ * fVar14;
  uVar15 = CONCAT17((char)((ulong)_DAT_046a4ba0 >> 0x38),
                    (uint7)((byte)((ulong)_DAT_046a4ba0 >> 0x18) & 0x80) << 0x18) &
           0x80ffffffffffffff;
  bVar20 = (byte)((ulong)uRam00000000046a4ba8 >> 0x18) & 0x80;
  bVar21 = (byte)((ulong)uRam00000000046a4ba8 >> 0x38) & 0x80;
  bVar18 = (byte)(uVar15 >> 0x18);
  fVar25 = (float)CONCAT13(bVar18 ^ (byte)((uint)fVar25 >> 0x18),SUB43(fVar25,0));
  bVar19 = (byte)(uVar15 >> 0x38);
  auVar22._0_8_ =
       CONCAT17(bVar19 ^ (byte)((uint)fVar27 >> 0x18),
                CONCAT16((char)((uint)fVar27 >> 0x10),
                         CONCAT15((char)((uint)fVar27 >> 8),CONCAT14(SUB41(fVar27,0),fVar25))));
  auVar22[8] = SUB41(fVar28,0);
  auVar22[9] = (undefined1)((uint)fVar28 >> 8);
  auVar22[10] = (undefined1)((uint)fVar28 >> 0x10);
  auVar22[0xb] = bVar20 ^ (byte)((uint)fVar28 >> 0x18);
  auVar22[0xc] = SUB41(fVar29,0);
  auVar22[0xd] = (undefined1)((uint)fVar29 >> 8);
  auVar22[0xe] = (undefined1)((uint)fVar29 >> 0x10);
  auVar22[0xf] = bVar21 ^ (byte)((uint)fVar29 >> 0x18);
  auVar63 = NEON_ext(auVar22,auVar22,8,1);
  fVar25 = fVar25 + (float)((ulong)auVar22._0_8_ >> 0x20);
  fVar28 = auVar63._0_4_ + auVar63._4_4_;
  fVar27 = fVar25 + fVar28;
  if (ABS(fVar27) <= (float)*param_3) {
    uVar1 = 0x80040200;
  }
  else {
    auVar22 = NEON_ext(auVar17,auVar17,4,1);
    fVar57 = auVar22._0_4_;
    fVar60 = auVar22._4_4_;
    fVar61 = auVar22._8_4_;
    fVar62 = auVar22._12_4_;
    auVar54._0_4_ = auVar53._0_4_ * fVar57;
    auVar54._4_4_ = auVar53._4_4_ * fVar60;
    auVar54._8_4_ = auVar53._8_4_ * fVar61;
    auVar54._12_4_ = auVar53._12_4_ * fVar62;
    auVar17 = NEON_ext(auVar46,auVar46,4,1);
    auVar56._0_4_ = auVar55._0_4_ * fVar57;
    auVar56._4_4_ = auVar55._4_4_ * fVar60;
    auVar56._8_4_ = auVar55._8_4_ * fVar61;
    auVar56._12_4_ = auVar55._12_4_ * fVar62;
    uVar1 = 0;
    fVar29 = (float)CONCAT13(bVar18 ^ (byte)((uint)fVar9 >> 0x18),SUB43(fVar9,0));
    auVar11._0_8_ =
         CONCAT17(bVar19 ^ (byte)((uint)fVar12 >> 0x18),
                  CONCAT16((char)((uint)fVar12 >> 0x10),
                           CONCAT15((char)((uint)fVar12 >> 8),CONCAT14(SUB41(fVar12,0),fVar29))));
    auVar11[8] = SUB41(fVar13,0);
    auVar11[9] = (undefined1)((uint)fVar13 >> 8);
    auVar11[10] = (undefined1)((uint)fVar13 >> 0x10);
    auVar11[0xb] = bVar20 ^ (byte)((uint)fVar13 >> 0x18);
    auVar32[0xc] = SUB41(fVar14,0);
    auVar32._0_12_ = auVar11;
    auVar32[0xd] = (undefined1)((uint)fVar14 >> 8);
    auVar32[0xe] = (undefined1)((uint)fVar14 >> 0x10);
    auVar32[0xf] = bVar21 ^ (byte)((uint)fVar14 >> 0x18);
    auVar42._0_4_ = auVar43._0_4_ * fVar57;
    auVar42._4_4_ = auVar43._4_4_ * fVar60;
    auVar42._8_4_ = auVar43._8_4_ * fVar61;
    auVar42._12_4_ = auVar43._12_4_ * fVar62;
    auVar22 = NEON_ext(auVar22,auVar22,4,1);
    auVar63 = NEON_ext(auVar22,auVar22,4,1);
    auVar59 = NEON_ext(auVar54,auVar54,4,1);
    auVar46 = NEON_ext(auVar42,auVar42,8,1);
    auVar43 = NEON_ext(auVar42,auVar42,4,1);
    fVar45 = auVar59._0_4_ - auVar46._0_4_;
    fVar48 = auVar59._4_4_ - auVar46._4_4_;
    fVar50 = auVar59._8_4_ - auVar46._8_4_;
    fVar52 = auVar59._12_4_ - auVar46._12_4_;
    auVar46 = NEON_ext(auVar56,auVar56,8,1);
    fVar9 = fVar57 * fVar44 + fVar30 * auVar22._0_4_ + fVar37 * auVar63._0_4_;
    fVar12 = fVar60 * fVar47 + fVar34 * auVar22._4_4_ + fVar38 * auVar63._4_4_;
    fVar13 = fVar61 * fVar49 + fVar35 * auVar22._8_4_ + fVar39 * auVar63._8_4_;
    fVar34 = fVar62 * fVar51 + fVar36 * auVar22._12_4_ + fVar40 * auVar63._12_4_;
    fVar39 = auVar46._0_4_ - auVar56._0_4_;
    fVar40 = auVar46._4_4_ - auVar56._4_4_;
    fVar44 = auVar46._8_4_ - auVar56._8_4_;
    fVar47 = auVar46._12_4_ - auVar56._12_4_;
    uVar58 = NEON_fmov(0x3f800000,4);
    auVar22 = NEON_ext(auVar17,auVar17,4,1);
    auVar46 = NEON_ext(auVar3,auVar3,4,1);
    fVar35 = auVar54._0_4_ - auVar43._0_4_;
    fVar36 = auVar54._4_4_ - auVar43._4_4_;
    fVar37 = auVar54._8_4_ - auVar43._8_4_;
    fVar38 = auVar54._12_4_ - auVar43._12_4_;
    fVar27 = (float)uVar58 / fVar27;
    fVar14 = (float)((ulong)uVar58 >> 0x20) / (fVar25 + fVar28);
    auVar3 = NEON_ext(auVar22,auVar22,4,1);
    auVar43 = NEON_ext(auVar46,auVar46,4,1);
    uVar15 = CONCAT17(PTR_DAT_047e4998[0xa7],(uint7)(PTR_DAT_047e4998[0xa3] & 0x80) << 0x18) &
             0x80ffffffffffffff;
    bVar23 = (byte)(uVar15 >> 0x18);
    fVar30 = (float)CONCAT13(bVar23 ^ (byte)((uint)fVar9 >> 0x18),SUB43(fVar9,0));
    bVar24 = (byte)(uVar15 >> 0x38);
    auVar31._0_8_ =
         CONCAT17(bVar24 ^ (byte)((uint)fVar12 >> 0x18),
                  CONCAT16((char)((uint)fVar12 >> 0x10),
                           CONCAT15((char)((uint)fVar12 >> 8),CONCAT14(SUB41(fVar12,0),fVar30))));
    auVar31[8] = SUB41(fVar13,0);
    auVar31[9] = (undefined1)((uint)fVar13 >> 8);
    auVar31[10] = (undefined1)((uint)fVar13 >> 0x10);
    auVar31[0xb] = PTR_DAT_047e4998[0xab] & 0x80 ^ (byte)((uint)fVar13 >> 0x18);
    auVar33[0xc] = SUB41(fVar34,0);
    auVar33._0_12_ = auVar31;
    auVar33[0xd] = (undefined1)((uint)fVar34 >> 8);
    auVar33[0xe] = (undefined1)((uint)fVar34 >> 0x10);
    auVar33[0xf] = PTR_DAT_047e4998[0xaf] & 0x80 ^ (byte)((uint)fVar34 >> 0x18);
    fVar25 = auVar3._0_4_ * fVar35 + auVar17._0_4_ * fVar45 + auVar22._0_4_ * fVar39;
    fVar28 = auVar3._4_4_ * fVar36 + auVar17._4_4_ * fVar48 + auVar22._4_4_ * fVar40;
    fVar12 = auVar3._8_4_ * fVar37 + auVar17._8_4_ * fVar50 + auVar22._8_4_ * fVar44;
    fVar13 = auVar3._12_4_ * fVar38 + auVar17._12_4_ * fVar52 + auVar22._12_4_ * fVar47;
    fVar9 = (float)CONCAT13(bVar18 ^ (byte)((uint)fVar25 >> 0x18),SUB43(fVar25,0));
    auVar8._0_8_ = CONCAT17(bVar19 ^ (byte)((uint)fVar28 >> 0x18),
                            CONCAT16((char)((uint)fVar28 >> 0x10),
                                     CONCAT15((char)((uint)fVar28 >> 8),
                                              CONCAT14(SUB41(fVar28,0),fVar9))));
    auVar8[8] = SUB41(fVar12,0);
    auVar8[9] = (undefined1)((uint)fVar12 >> 8);
    auVar8[10] = (undefined1)((uint)fVar12 >> 0x10);
    auVar8[0xb] = bVar20 ^ (byte)((uint)fVar12 >> 0x18);
    auVar3[0xc] = SUB41(fVar13,0);
    auVar3._0_12_ = auVar8;
    auVar3[0xd] = (undefined1)((uint)fVar13 >> 8);
    auVar3[0xe] = (undefined1)((uint)fVar13 >> 0x10);
    auVar3[0xf] = bVar21 ^ (byte)((uint)fVar13 >> 0x18);
    fVar25 = auVar43._0_4_ * fVar35 + fVar5 * fVar45 + auVar46._0_4_ * fVar39;
    fVar28 = auVar43._4_4_ * fVar36 + fVar7 * fVar48 + auVar46._4_4_ * fVar40;
    fVar5 = auVar43._8_4_ * fVar37 + fVar4 * fVar50 + auVar46._8_4_ * fVar44;
    fVar7 = auVar43._12_4_ * fVar38 + fVar6 * fVar52 + auVar46._12_4_ * fVar47;
    fVar25 = (float)CONCAT13(bVar23 ^ (byte)((uint)fVar25 >> 0x18),SUB43(fVar25,0));
    auVar2._0_8_ = CONCAT17(bVar24 ^ (byte)((uint)fVar28 >> 0x18),
                            CONCAT16((char)((uint)fVar28 >> 0x10),
                                     CONCAT15((char)((uint)fVar28 >> 8),
                                              CONCAT14(SUB41(fVar28,0),fVar25))));
    auVar2[8] = SUB41(fVar5,0);
    auVar2[9] = (undefined1)((uint)fVar5 >> 8);
    auVar2[10] = (undefined1)((uint)fVar5 >> 0x10);
    auVar2[0xb] = PTR_DAT_047e4998[0xab] & 0x80 ^ (byte)((uint)fVar5 >> 0x18);
    auVar46[0xc] = SUB41(fVar7,0);
    auVar46._0_12_ = auVar2;
    auVar46[0xd] = (undefined1)((uint)fVar7 >> 8);
    auVar46[0xe] = (undefined1)((uint)fVar7 >> 0x10);
    auVar46[0xf] = PTR_DAT_047e4998[0xaf] & 0x80 ^ (byte)((uint)fVar7 >> 0x18);
    auVar53._0_4_ = fVar27 * fVar29;
    auVar53._4_4_ = fVar14 * (float)((ulong)auVar11._0_8_ >> 0x20);
    auVar53._8_4_ = fVar27 * auVar11._8_4_;
    auVar53._12_4_ = fVar14 * auVar32._12_4_;
    auVar43 = NEON_ext(auVar53,auVar53,8,1);
    auVar55._0_4_ = fVar27 * fVar30;
    auVar55._4_4_ = fVar14 * (float)((ulong)auVar31._0_8_ >> 0x20);
    auVar55._8_4_ = fVar27 * auVar31._8_4_;
    auVar55._12_4_ = fVar14 * auVar33._12_4_;
    auVar22 = NEON_ext(auVar55,auVar55,8,1);
    auVar26._0_4_ = fVar27 * fVar9;
    auVar26._4_4_ = fVar14 * (float)((ulong)auVar8._0_8_ >> 0x20);
    auVar26._8_4_ = fVar27 * auVar8._8_4_;
    auVar26._12_4_ = fVar14 * auVar3._12_4_;
    uVar41 = CONCAT44(auVar55._0_4_,auVar53._0_4_);
    auVar17._0_4_ = fVar27 * fVar25;
    register0x00005004 = fVar14 * (float)((ulong)auVar2._0_8_ >> 0x20);
    auVar17._8_4_ = fVar27 * auVar2._8_4_;
    auVar17._12_4_ = fVar14 * auVar46._12_4_;
    auVar46 = NEON_ext(auVar26,auVar26,8,1);
    auVar3 = NEON_ext(auVar17,auVar17,8,1);
    uVar10 = CONCAT44(auVar55._4_4_,auVar53._4_4_);
    uVar16 = CONCAT44(auVar17._0_4_,auVar26._0_4_);
    uVar58 = CONCAT44(register0x00005004,auVar26._4_4_);
    param_1[1] = uVar16;
    *param_1 = uVar41;
    param_1[3] = uVar58;
    param_1[2] = uVar10;
    param_1[5] = CONCAT44(auVar3._0_4_,auVar46._0_4_);
    param_1[4] = CONCAT44(auVar22._0_4_,auVar43._0_4_);
    param_1[7] = CONCAT44(auVar3._4_4_,auVar46._4_4_);
    param_1[6] = CONCAT44(auVar22._4_4_,auVar43._4_4_);
  }
  return uVar1;
}


