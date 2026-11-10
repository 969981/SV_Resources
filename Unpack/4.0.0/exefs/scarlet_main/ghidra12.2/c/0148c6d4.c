/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148c6d4; name: FUN_0148c6d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0148c6d4(undefined1 param_1 [16],float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float extraout_s0;
  float fVar6;
  float fVar7;
  float extraout_var;
  float fVar8;
  float fVar9;
  float extraout_var_00;
  float fVar10;
  int iVar11;
  int iVar25;
  undefined1 auVar12 [12];
  int iVar24;
  undefined1 auVar13 [16];
  int iVar26;
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  undefined8 local_30;
  ulong uStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  
  auVar22 = *(undefined1 (*) [16])(param_2 + 4);
  fVar66 = auVar22._0_4_;
  fVar69 = auVar22._4_4_;
  fVar70 = auVar22._8_4_;
  fVar71 = auVar22._12_4_;
  auVar13._0_4_ = fVar66 * *(float *)PTR_DAT_047d41d0 + fVar69 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar13._4_4_ =
       fVar70 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar71 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar13._8_4_ = fVar66 * *(float *)PTR_DAT_047d41d0 + fVar69 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar13._12_4_ =
       fVar70 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar71 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar13 = NEON_ext(auVar13,auVar13,4,1);
  fVar1 = auVar13._0_4_ + auVar13._4_4_;
  fVar1 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar1) * fVar1 +
          *(float *)PTR_DAT_047d41a0 * (float)(fVar1 < *(float *)PTR_DAT_047d4180) * fVar1) -
          *(float *)PTR_DAT_047d4190;
  if ((fVar1 < *(float *)PTR_DAT_047d41c0) || (*(float *)PTR_DAT_047d41b0 < fVar1)) {
    auVar51._0_4_ = fVar66 * fVar66 + fVar69 * fVar69;
    auVar51._4_4_ = fVar70 * fVar70 + fVar71 * fVar71;
    auVar51._8_4_ = fVar66 * fVar66 + fVar69 * fVar69;
    auVar51._12_4_ = fVar70 * fVar70 + fVar71 * fVar71;
    auVar13 = NEON_ext(auVar51,auVar51,4,1);
    fVar27 = -fVar66;
    fVar30 = -fVar69;
    fVar32 = -fVar70;
    fVar1 = auVar13._0_4_ + auVar13._4_4_;
    fVar2 = auVar13._8_4_ + auVar13._12_4_;
    fVar3 = auVar13._0_4_ + auVar13._4_4_;
    fVar4 = auVar13._8_4_ + auVar13._12_4_;
    fVar28 = fVar27 / fVar1;
    fVar31 = fVar30 / fVar2;
    fVar33 = fVar32 / fVar3;
    fVar34 = fVar71 / fVar4;
    fVar6 = (float)*(undefined8 *)(param_2 + 8);
    fVar5 = param_1._0_4_ - fVar6;
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar7 = param_1._4_4_ - fVar8;
    fVar10 = (float)*(undefined8 *)(param_2 + 10);
    fVar9 = param_1._8_4_ - fVar10;
    auVar42._4_4_ = fVar9;
    auVar42._0_4_ = fVar9;
    auVar42._8_4_ = fVar9;
    auVar42._12_4_ = fVar9;
    iVar11 = -(uint)(fVar1 == 0.0);
    iVar24 = -(uint)(fVar2 == 0.0);
    iVar25 = -(uint)(fVar3 == 0.0);
    iVar26 = -(uint)(fVar4 == 0.0);
    fVar2 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                            CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                     CONCAT11((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar11 >> 8)
                                              ,SUB41(fVar28,0) & ~(byte)iVar11)));
    auVar12._0_8_ =
         CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    CONCAT14(SUB41(fVar31,0) & ~(byte)iVar24,fVar2))));
    auVar12[8] = SUB41(fVar33,0) & ~(byte)iVar25;
    auVar12[9] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar12[10] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar12[0xb] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar55[0xc] = SUB41(fVar34,0) & ~(byte)iVar26;
    auVar55._0_12_ = auVar12;
    auVar55[0xd] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar55[0xe] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar55[0xf] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar43._4_12_ = auVar42._4_12_;
    auVar43._0_4_ = fVar5;
    auVar45._0_8_ = auVar43._0_8_;
    auVar45._8_4_ = fVar7;
    auVar45._12_4_ = fVar9;
    auVar44._8_8_ = auVar45._8_8_;
    auVar44._4_4_ = fVar9;
    auVar44._0_4_ = fVar5;
    auVar46._0_12_ = auVar44._0_12_;
    auVar46._12_4_ = fVar9;
    auVar72 = NEON_ext(auVar46,auVar46,8,1);
    fVar28 = auVar55._12_4_;
    fVar3 = (float)((ulong)auVar12._0_8_ >> 0x20);
    fVar4 = auVar12._8_4_;
    fVar31 = -fVar4;
    auVar54._4_4_ = fVar4;
    auVar54._0_4_ = fVar4;
    auVar54._8_4_ = fVar4;
    auVar54._12_4_ = fVar4;
    auVar67._4_4_ = fVar3;
    auVar67._0_4_ = fVar3;
    auVar67._8_4_ = fVar3;
    auVar67._12_4_ = fVar3;
    auVar55 = NEON_ext(auVar54,auVar55,0xc,1);
    fVar1 = auVar72._0_4_;
    auVar47._4_12_ = auVar46._4_12_;
    auVar47._0_4_ = fVar1;
    auVar49._0_8_ = auVar47._0_8_;
    auVar49._8_4_ = auVar72._8_4_;
    auVar49._12_4_ = fVar9;
    auVar48._8_8_ = auVar49._8_8_;
    auVar48._4_4_ = fVar5;
    auVar48._0_4_ = fVar1;
    auVar50._0_12_ = auVar48._0_12_;
    auVar50._12_4_ = fVar7;
    auVar13 = NEON_ext(auVar50,auVar72,8,1);
    auVar68 = NEON_ext(auVar67,auVar55,0xc,1);
    fVar33 = (float)_DAT_03cab640;
    fVar34 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar73 = (float)_UNK_03cab648;
    fVar74 = (float)((ulong)_UNK_03cab648 >> 0x20);
    auVar13 = NEON_ext(auVar13,auVar13,0xc,1);
    auVar35._12_4_ = fVar5;
    auVar35._8_4_ = -fVar3;
    auVar35._4_4_ = fVar31;
    auVar35._0_4_ = -fVar2;
    auVar36._0_12_ = auVar35._0_12_;
    auVar36._12_4_ = fVar31;
    auVar51 = NEON_ext(auVar36,auVar36,8,1);
    auVar37._4_12_ = auVar36._4_12_;
    auVar37._0_4_ = auVar51._0_4_;
    auVar39._0_8_ = auVar37._0_8_;
    auVar39._8_4_ = auVar51._8_4_;
    auVar39._12_4_ = fVar31;
    auVar38._8_8_ = auVar39._8_8_;
    auVar38._4_4_ = -fVar2;
    auVar38._0_4_ = auVar51._0_4_;
    auVar40._0_12_ = auVar38._0_12_;
    auVar40._12_4_ = -fVar3;
    auVar53._0_4_ =
         (fVar5 * fVar28 + fVar2 * fVar33 * 0.0 + auVar13._0_4_ * auVar68._0_4_ * fVar33) -
         auVar55._0_4_ * fVar1;
    auVar53._4_4_ =
         (fVar7 * fVar28 + fVar3 * fVar34 * 0.0 + auVar13._4_4_ * auVar68._4_4_ * fVar34) -
         auVar55._4_4_ * auVar72._4_4_;
    auVar53._8_4_ =
         (fVar9 * fVar28 + fVar4 * fVar73 * 0.0 + auVar13._8_4_ * auVar68._8_4_ * fVar73) -
         auVar55._8_4_ * auVar72._8_4_;
    auVar53._12_4_ =
         (fVar28 * 0.0 + fVar5 * fVar2 * fVar74 + auVar13._12_4_ * auVar68._12_4_ * fVar74) -
         auVar55._12_4_ * auVar72._12_4_;
    auVar51 = NEON_ext(auVar40,auVar51,8,1);
    auVar68._4_4_ = auVar53._8_4_;
    auVar68._0_4_ = auVar53._8_4_;
    auVar68._8_4_ = auVar53._8_4_;
    auVar68._12_4_ = auVar53._8_4_;
    auVar56._4_4_ = auVar53._4_4_;
    auVar56._0_4_ = auVar53._4_4_;
    auVar56._8_4_ = auVar53._4_4_;
    auVar56._12_4_ = auVar53._4_4_;
    auVar13 = NEON_ext(auVar68,auVar53,0xc,1);
    NEON_ext(auVar56,auVar13,0xc,1);
    NEON_ext(auVar51,auVar51,0xc,1);
    local_30 = CONCAT44(fVar8 - ABS(param_2[1] * 0.5),fVar6 - ABS(*param_2 * 0.5));
    uStack_20 = CONCAT44(fVar8 + ABS(param_2[1] * 0.5),fVar6 + ABS(*param_2 * 0.5));
    uStack_28 = (ulong)(uint)(fVar10 - ABS(param_2[2] * 0.5));
    uStack_18 = (ulong)(uint)(fVar10 + ABS(param_2[2] * 0.5));
    FUN_0148c9bc(&local_30);
    fVar6 = extraout_s0 - fVar6;
    fVar8 = extraout_var - fVar8;
    fVar10 = extraout_var_00 - fVar10;
    auVar72._4_4_ = fVar10;
    auVar72._0_4_ = fVar10;
    auVar72._8_4_ = fVar10;
    auVar72._12_4_ = fVar10;
    auVar14._4_12_ = auVar72._4_12_;
    auVar14._0_4_ = fVar6;
    auVar16._0_8_ = auVar14._0_8_;
    auVar16._8_4_ = fVar8;
    auVar16._12_4_ = fVar10;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = fVar10;
    auVar15._0_4_ = fVar6;
    auVar17._0_12_ = auVar15._0_12_;
    auVar17._12_4_ = fVar10;
    auVar41._4_4_ = fVar70;
    auVar41._0_4_ = fVar70;
    auVar41._8_4_ = fVar70;
    auVar41._12_4_ = fVar70;
    auVar51 = NEON_ext(auVar41,auVar22,0xc,1);
    auVar52._4_4_ = fVar69;
    auVar52._0_4_ = fVar69;
    auVar52._8_4_ = fVar69;
    auVar52._12_4_ = fVar69;
    auVar55 = NEON_ext(auVar17,auVar17,8,1);
    fVar1 = auVar55._0_4_;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = fVar1;
    auVar20._0_8_ = auVar18._0_8_;
    auVar20._8_4_ = auVar55._8_4_;
    auVar20._12_4_ = fVar10;
    auVar19._8_8_ = auVar20._8_8_;
    auVar19._4_4_ = fVar6;
    auVar19._0_4_ = fVar1;
    auVar21._0_12_ = auVar19._0_12_;
    auVar21._12_4_ = fVar8;
    auVar53 = NEON_ext(auVar52,auVar51,0xc,1);
    auVar22 = NEON_ext(auVar21,auVar55,8,1);
    auVar13 = NEON_ext(auVar22,auVar22,0xc,1);
    auVar22._0_4_ =
         (fVar6 * fVar71 + fVar66 * fVar33 * 0.0 + auVar13._0_4_ * auVar53._0_4_ * fVar33) -
         auVar51._0_4_ * fVar1;
    auVar22._4_4_ =
         (fVar8 * fVar71 + fVar69 * fVar34 * 0.0 + auVar13._4_4_ * auVar53._4_4_ * fVar34) -
         auVar51._4_4_ * auVar55._4_4_;
    auVar22._8_4_ =
         (fVar10 * fVar71 + fVar70 * fVar73 * 0.0 + auVar13._8_4_ * auVar53._8_4_ * fVar73) -
         auVar51._8_4_ * auVar55._8_4_;
    auVar22._12_4_ =
         (fVar71 * 0.0 + fVar6 * fVar66 * fVar74 + auVar13._12_4_ * auVar53._12_4_ * fVar74) -
         auVar51._12_4_ * auVar55._12_4_;
    auVar57._4_4_ = fVar32;
    auVar57._0_4_ = fVar32;
    auVar57._8_4_ = fVar32;
    auVar57._12_4_ = fVar32;
    auVar23._4_4_ = auVar22._8_4_;
    auVar23._0_4_ = auVar22._8_4_;
    auVar23._8_4_ = auVar22._8_4_;
    auVar23._12_4_ = auVar22._8_4_;
    auVar13 = NEON_ext(auVar23,auVar22,0xc,1);
    auVar29._4_4_ = auVar22._4_4_;
    auVar29._0_4_ = auVar22._4_4_;
    auVar29._8_4_ = auVar22._4_4_;
    auVar29._12_4_ = auVar22._4_4_;
    auVar58._4_12_ = auVar57._4_12_;
    auVar58._0_4_ = fVar27;
    auVar60._0_8_ = auVar58._0_8_;
    auVar60._8_4_ = fVar30;
    auVar60._12_4_ = fVar32;
    auVar59._8_8_ = auVar60._8_8_;
    auVar59._4_4_ = fVar32;
    auVar59._0_4_ = fVar27;
    auVar61._0_12_ = auVar59._0_12_;
    auVar61._12_4_ = fVar32;
    auVar22 = NEON_ext(auVar61,auVar61,8,1);
    NEON_ext(auVar29,auVar13,0xc,1);
    auVar62._4_12_ = auVar61._4_12_;
    auVar62._0_4_ = auVar22._0_4_;
    auVar64._0_8_ = auVar62._0_8_;
    auVar64._8_4_ = auVar22._8_4_;
    auVar64._12_4_ = fVar32;
    auVar63._8_8_ = auVar64._8_8_;
    auVar63._4_4_ = fVar27;
    auVar63._0_4_ = auVar22._0_4_;
    auVar65._0_12_ = auVar63._0_12_;
    auVar65._12_4_ = fVar30;
    auVar22 = NEON_ext(auVar65,auVar22,8,1);
    NEON_ext(auVar22,auVar22,0xc,1);
  }
  else {
    local_30 = CONCAT44(param_2[9] - ABS(param_2[1] * 0.5),param_2[8] - ABS(*param_2 * 0.5));
    uStack_20 = CONCAT44(param_2[9] + ABS(param_2[1] * 0.5),param_2[8] + ABS(*param_2 * 0.5));
    uStack_28 = (ulong)(uint)(param_2[10] - ABS(param_2[2] * 0.5));
    uStack_18 = (ulong)(uint)(param_2[10] + ABS(param_2[2] * 0.5));
    FUN_0148c9bc(&local_30);
  }
  return;
}


