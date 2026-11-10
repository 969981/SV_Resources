/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fb2c0; name: FUN_026fb2c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_026fb2c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  int iVar15;
  float fVar16;
  int iVar25;
  int iVar26;
  undefined1 auVar17 [12];
  float fVar27;
  int iVar28;
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar74;
  float fVar75;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar76;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  float local_40;
  float local_14;
  
  puVar6 = &local_80;
  fVar27 = param_2[4];
  fVar9 = param_2[5];
  fVar16 = param_2[6];
  fVar32 = param_2[7];
  auVar13._0_4_ = fVar27 * *(float *)PTR_DAT_047d41d0 + fVar9 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar13._4_4_ =
       fVar16 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar32 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar13._8_4_ = fVar27 * *(float *)PTR_DAT_047d41d0 + fVar9 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar13._12_4_ =
       fVar16 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar32 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar13 = NEON_ext(auVar13,auVar13,4,1);
  fVar7 = auVar13._0_4_ + auVar13._4_4_;
  fVar7 = ((float)((float)*(undefined8 *)PTR_DAT_047d4180 <= fVar7) * fVar7 +
          *(float *)PTR_DAT_047d41a0 * (float)(fVar7 < (float)*(undefined8 *)PTR_DAT_047d4180) *
          fVar7) - *(float *)PTR_DAT_047d4190;
  if ((fVar7 < *(float *)PTR_DAT_047d41c0) || (*(float *)PTR_DAT_047d41b0 < fVar7)) {
    fVar35 = param_1[8];
    fVar7 = param_2[8];
    fVar1 = param_2[9];
    fVar2 = param_2[10];
    auVar50._0_4_ = fVar27 * fVar27 + fVar9 * fVar9;
    auVar50._4_4_ = fVar16 * fVar16 + fVar32 * fVar32;
    auVar50._8_4_ = fVar27 * fVar27 + fVar9 * fVar9;
    auVar50._12_4_ = fVar16 * fVar16 + fVar32 * fVar32;
    auVar13 = NEON_ext(auVar50,auVar50,4,1);
    fVar8 = auVar13._0_4_ + auVar13._4_4_;
    fVar10 = auVar13._8_4_ + auVar13._12_4_;
    fVar11 = auVar13._0_4_ + auVar13._4_4_;
    fVar12 = auVar13._8_4_ + auVar13._12_4_;
    fVar29 = -fVar27 / fVar8;
    fVar30 = -fVar9 / fVar10;
    fVar31 = -fVar16 / fVar11;
    fVar32 = fVar32 / fVar12;
    fVar55 = *param_1 - fVar7;
    fVar56 = param_1[1] - fVar1;
    fVar57 = param_1[2] - fVar2;
    auVar41._4_4_ = fVar57;
    auVar41._0_4_ = fVar57;
    auVar41._8_4_ = fVar57;
    auVar41._12_4_ = fVar57;
    fVar36 = (*param_1 + param_1[4] * fVar35) - fVar7;
    fVar38 = (param_1[1] + param_1[5] * fVar35) - fVar1;
    fVar35 = (param_1[2] + param_1[6] * fVar35) - fVar2;
    auVar58._4_4_ = fVar35;
    auVar58._0_4_ = fVar35;
    auVar58._8_4_ = fVar35;
    auVar58._12_4_ = fVar35;
    iVar15 = -(uint)(fVar8 == 0.0);
    iVar25 = -(uint)(fVar10 == 0.0);
    iVar26 = -(uint)(fVar11 == 0.0);
    iVar28 = -(uint)(fVar12 == 0.0);
    auVar42._4_12_ = auVar41._4_12_;
    auVar42._0_4_ = fVar55;
    auVar44._0_8_ = auVar42._0_8_;
    auVar44._8_4_ = fVar56;
    auVar44._12_4_ = fVar57;
    auVar43._8_8_ = auVar44._8_8_;
    auVar43._4_4_ = fVar57;
    auVar43._0_4_ = fVar55;
    auVar45._0_12_ = auVar43._0_12_;
    auVar45._12_4_ = fVar57;
    auVar39 = NEON_ext(auVar45,auVar45,8,1);
    auVar59._4_12_ = auVar58._4_12_;
    auVar59._0_4_ = fVar36;
    auVar61._0_8_ = auVar59._0_8_;
    auVar61._8_4_ = fVar38;
    auVar61._12_4_ = fVar35;
    auVar60._8_8_ = auVar61._8_8_;
    auVar60._4_4_ = fVar35;
    auVar60._0_4_ = fVar36;
    auVar62._0_12_ = auVar60._0_12_;
    auVar62._12_4_ = fVar35;
    auVar70 = NEON_ext(auVar62,auVar62,8,1);
    fVar27 = auVar39._0_4_;
    auVar46._4_12_ = auVar45._4_12_;
    auVar46._0_4_ = fVar27;
    auVar48._0_8_ = auVar46._0_8_;
    auVar48._8_4_ = auVar39._8_4_;
    auVar48._12_4_ = fVar57;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._4_4_ = fVar55;
    auVar47._0_4_ = fVar27;
    auVar49._0_12_ = auVar47._0_12_;
    auVar49._12_4_ = fVar56;
    auVar13 = NEON_ext(auVar49,auVar39,8,1);
    auVar50 = NEON_ext(auVar13,auVar13,0xc,1);
    fVar9 = auVar70._0_4_;
    auVar63._4_12_ = auVar62._4_12_;
    auVar63._0_4_ = fVar9;
    auVar65._0_8_ = auVar63._0_8_;
    auVar65._8_4_ = auVar70._8_4_;
    auVar65._12_4_ = fVar35;
    auVar64._8_8_ = auVar65._8_8_;
    auVar64._4_4_ = fVar36;
    auVar64._0_4_ = fVar9;
    auVar66._0_12_ = auVar64._0_12_;
    auVar66._12_4_ = fVar38;
    auVar13 = NEON_ext(auVar66,auVar70,8,1);
    fVar16 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                             CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                      CONCAT11((byte)((uint)fVar29 >> 8) &
                                               ~(byte)((uint)iVar15 >> 8),
                                               SUB41(fVar29,0) & ~(byte)iVar15)));
    auVar17._0_8_ =
         CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                  CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                           CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                    CONCAT14(SUB41(fVar30,0) & ~(byte)iVar25,fVar16))));
    auVar17[8] = SUB41(fVar31,0) & ~(byte)iVar26;
    auVar17[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar17[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar17[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    auVar73[0xc] = SUB41(fVar32,0) & ~(byte)iVar28;
    auVar73._0_12_ = auVar17;
    auVar73[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar28 >> 8);
    auVar73[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
    auVar73[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
    fVar12 = -fVar16;
    fVar32 = (float)((ulong)auVar17._0_8_ >> 0x20);
    fVar29 = -fVar32;
    fVar8 = auVar17._8_4_;
    fVar30 = -fVar8;
    fVar10 = auVar73._12_4_;
    auVar68._4_4_ = fVar8;
    auVar68._0_4_ = fVar8;
    auVar68._8_4_ = fVar8;
    auVar68._12_4_ = fVar8;
    auVar72._4_4_ = fVar32;
    auVar72._0_4_ = fVar32;
    auVar72._8_4_ = fVar32;
    auVar72._12_4_ = fVar32;
    auVar69 = NEON_ext(auVar68,auVar73,0xc,1);
    auVar73 = NEON_ext(auVar72,auVar69,0xc,1);
    fVar52 = (float)_DAT_03cab640;
    fVar71 = auVar73._0_4_ * fVar52;
    fVar53 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar74 = auVar73._4_4_ * fVar53;
    fVar54 = (float)_UNK_03cab648;
    fVar75 = auVar73._8_4_ * fVar54;
    fVar11 = (float)((ulong)_UNK_03cab648 >> 0x20);
    fVar76 = auVar73._12_4_ * fVar11;
    fVar11 = fVar16 * fVar11;
    auVar13 = NEON_ext(auVar13,auVar13,0xc,1);
    auVar19._12_4_ = auVar13._12_4_;
    fVar31 = (fVar55 * fVar10 + fVar16 * fVar52 * 0.0 + auVar50._0_4_ * fVar71) -
             auVar69._0_4_ * fVar27;
    fVar56 = (fVar56 * fVar10 + fVar32 * fVar53 * 0.0 + auVar50._4_4_ * fVar74) -
             auVar69._4_4_ * auVar39._4_4_;
    fVar57 = (fVar57 * fVar10 + fVar8 * fVar54 * 0.0 + auVar50._8_4_ * fVar75) -
             auVar69._8_4_ * auVar39._8_4_;
    fVar55 = (fVar10 * 0.0 + fVar55 * fVar11 + auVar50._12_4_ * fVar76) -
             auVar69._12_4_ * auVar39._12_4_;
    auVar37._0_4_ =
         (fVar36 * fVar10 + fVar16 * fVar52 * 0.0 + auVar13._0_4_ * fVar71) - auVar69._0_4_ * fVar9;
    auVar37._4_4_ =
         (fVar38 * fVar10 + fVar32 * fVar53 * 0.0 + auVar13._4_4_ * fVar74) -
         auVar69._4_4_ * auVar70._4_4_;
    auVar37._8_4_ =
         (fVar35 * fVar10 + fVar8 * fVar54 * 0.0 + auVar13._8_4_ * fVar75) -
         auVar69._8_4_ * auVar70._8_4_;
    auVar37._12_4_ =
         (fVar10 * 0.0 + fVar36 * fVar11 + auVar19._12_4_ * fVar76) -
         auVar69._12_4_ * auVar70._12_4_;
    auVar70._4_12_ = auVar13._4_12_;
    auVar70._0_4_ = fVar12;
    auVar19._0_8_ = auVar70._0_8_;
    auVar19._8_4_ = fVar29;
    auVar18._8_8_ = auVar19._8_8_;
    auVar18._4_4_ = fVar30;
    auVar18._0_4_ = fVar12;
    auVar20._0_12_ = auVar18._0_12_;
    auVar20._12_4_ = fVar30;
    auVar33._4_4_ = fVar57;
    auVar33._0_4_ = fVar57;
    auVar33._8_4_ = fVar57;
    auVar33._12_4_ = fVar57;
    auVar40._4_4_ = fVar56;
    auVar40._0_4_ = fVar56;
    auVar40._8_4_ = fVar56;
    auVar40._12_4_ = fVar56;
    auVar39._4_4_ = fVar56;
    auVar39._0_4_ = fVar31;
    auVar39._8_4_ = fVar57;
    auVar39._12_4_ = fVar55;
    auVar50 = NEON_ext(auVar33,auVar39,0xc,1);
    auVar51._4_4_ = auVar37._8_4_;
    auVar51._0_4_ = auVar37._8_4_;
    auVar51._8_4_ = auVar37._8_4_;
    auVar51._12_4_ = auVar37._8_4_;
    auVar67._4_4_ = auVar37._4_4_;
    auVar67._0_4_ = auVar37._4_4_;
    auVar67._8_4_ = auVar37._4_4_;
    auVar67._12_4_ = auVar37._4_4_;
    auVar69 = NEON_ext(auVar51,auVar37,0xc,1);
    auVar39 = NEON_ext(auVar40,auVar50,0xc,1);
    auVar73 = NEON_ext(auVar20,auVar20,8,1);
    auVar70 = NEON_ext(auVar67,auVar69,0xc,1);
    fVar27 = auVar73._0_4_;
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = fVar27;
    fVar9 = auVar73._8_4_;
    auVar23._0_8_ = auVar21._0_8_;
    auVar23._8_4_ = fVar9;
    auVar23._12_4_ = fVar30;
    auVar22._8_8_ = auVar23._8_8_;
    auVar22._4_4_ = fVar12;
    auVar22._0_4_ = fVar27;
    auVar24._0_12_ = auVar22._0_12_;
    auVar24._12_4_ = fVar29;
    auVar13 = NEON_ext(auVar24,auVar73,8,1);
    auVar13 = NEON_ext(auVar13,auVar13,0xc,1);
    fVar8 = (fVar12 * fVar55 + fVar10 * fVar31 * fVar52 + auVar13._0_4_ * auVar39._0_4_ * fVar52) -
            auVar50._0_4_ * fVar27;
    fVar11 = (fVar29 * fVar55 + fVar10 * fVar56 * fVar53 + auVar13._4_4_ * auVar39._4_4_ * fVar53) -
             auVar50._4_4_ * auVar73._4_4_;
    fVar31 = (fVar30 * fVar55 + fVar10 * fVar57 * fVar54 + auVar13._8_4_ * auVar39._8_4_ * fVar54) -
             auVar50._8_4_ * fVar9;
    fVar16 = fVar8 - ((fVar12 * auVar37._12_4_ + fVar10 * auVar37._0_4_ * fVar52 +
                      auVar13._0_4_ * auVar70._0_4_ * fVar52) - auVar69._0_4_ * fVar27);
    fVar32 = fVar11 - ((fVar29 * auVar37._12_4_ + fVar10 * auVar37._4_4_ * fVar53 +
                       auVar13._4_4_ * auVar70._4_4_ * fVar53) - auVar69._4_4_ * auVar73._4_4_);
    uStack_50 = CONCAT44(fVar32,fVar16);
    fVar27 = fVar31 - ((fVar30 * auVar37._12_4_ + fVar10 * auVar37._8_4_ * fVar54 +
                       auVar13._8_4_ * auVar70._8_4_ * fVar54) - auVar69._8_4_ * fVar9);
    auVar34._0_8_ = CONCAT44(fVar1 + fVar11,fVar7 + fVar8);
    auVar34._8_4_ = fVar2 + fVar31;
    auVar34._12_4_ = param_2[0xb] + 0.0;
    uStack_58 = auVar34._8_8_;
    auVar69._0_4_ = fVar16 * fVar16 + fVar32 * fVar32;
    auVar69._4_4_ = fVar27 * fVar27 + 0.0;
    auVar69._8_4_ = fVar16 * fVar16 + fVar32 * fVar32;
    auVar69._12_4_ = fVar27 * fVar27 + 0.0;
    auVar13 = NEON_ext(auVar69,auVar69,4,1);
    local_40 = SQRT(auVar13._0_4_ + auVar13._4_4_);
    local_80 = CONCAT44(fVar1 - ABS(param_2[1] * 0.5),fVar7 - ABS(*param_2 * 0.5));
    uStack_70 = CONCAT44(fVar1 + ABS(param_2[1] * 0.5),fVar7 + ABS(*param_2 * 0.5));
    uStack_78 = (ulong)(uint)(fVar2 - ABS(param_2[2] * 0.5));
    uStack_68 = (ulong)(uint)(fVar2 + ABS(param_2[2] * 0.5));
    pfVar3 = (float *)&local_60;
    local_60 = auVar34._0_8_;
  }
  else {
    puVar6 = &local_60;
    fVar27 = (float)*(undefined8 *)(param_2 + 8);
    fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    local_60 = CONCAT44(fVar9 - ABS(param_2[1] * 0.5),fVar27 - ABS(*param_2 * 0.5));
    uStack_50 = CONCAT44(fVar9 + ABS(param_2[1] * 0.5),fVar27 + ABS(*param_2 * 0.5));
    fVar27 = (float)*(undefined8 *)(param_2 + 10) + ABS(param_2[2] * 0.5);
    uStack_58 = (ulong)(uint)((float)*(undefined8 *)(param_2 + 10) - ABS(param_2[2] * 0.5));
    pfVar3 = param_1;
  }
  uStack_48 = (ulong)(uint)fVar27;
  uVar4 = FUN_00ca4a58(pfVar3,puVar6,param_3,&local_14);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (param_3 != (float *)0x0) {
      fVar32 = param_1[8];
      fVar27 = *param_1;
      fVar9 = param_1[1];
      fVar16 = param_1[3];
      uVar14 = *(undefined8 *)(param_1 + 6);
      uVar5 = *(undefined8 *)(param_1 + 4);
      param_3[2] = param_1[2] + (float)uVar14 * fVar32 * local_14;
      param_3[3] = fVar16 + (float)((ulong)uVar14 >> 0x20) * fVar32 * local_14;
      *param_3 = fVar27 + (float)uVar5 * fVar32 * local_14;
      param_3[1] = fVar9 + (float)((ulong)uVar5 >> 0x20) * fVar32 * local_14;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = local_14;
    }
    uVar5 = 1;
  }
  return uVar5;
}


