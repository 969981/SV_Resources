/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f9a3c; name: FUN_026f9a3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_026f9a3c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar21;
  undefined1 auVar17 [12];
  float fVar20;
  undefined1 auVar18 [16];
  float fVar22;
  undefined1 auVar19 [16];
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar49;
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
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  float local_14;
  
  puVar9 = &local_80;
  fVar16 = param_2[4];
  fVar20 = param_2[5];
  fVar21 = param_2[6];
  fVar22 = param_2[7];
  auVar18._0_4_ = fVar16 * *(float *)PTR_DAT_047d41d0 + fVar20 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar18._4_4_ =
       fVar21 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar22 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar18._8_4_ = fVar16 * *(float *)PTR_DAT_047d41d0 + fVar20 * *(float *)(PTR_DAT_047d41d0 + 4);
  auVar18._12_4_ =
       fVar21 * *(float *)(PTR_DAT_047d41d0 + 8) + fVar22 * *(float *)(PTR_DAT_047d41d0 + 0xc);
  auVar18 = NEON_ext(auVar18,auVar18,4,1);
  fVar10 = auVar18._0_4_ + auVar18._4_4_;
  fVar10 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar10) * fVar10 +
           *(float *)PTR_DAT_047d41a0 * (float)(fVar10 < *(float *)PTR_DAT_047d4180) * fVar10) -
           *(float *)PTR_DAT_047d4190;
  if ((fVar10 < *(float *)PTR_DAT_047d41c0) || (*(float *)PTR_DAT_047d41b0 < fVar10)) {
    fVar69 = param_1[8];
    auVar48._0_4_ = fVar16 * fVar16 + fVar20 * fVar20;
    auVar48._4_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar48._8_4_ = fVar16 * fVar16 + fVar20 * fVar20;
    auVar48._12_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar18 = NEON_ext(auVar48,auVar48,4,1);
    fVar11 = auVar18._0_4_ + auVar18._4_4_;
    fVar12 = auVar18._8_4_ + auVar18._12_4_;
    fVar13 = auVar18._0_4_ + auVar18._4_4_;
    fVar14 = auVar18._8_4_ + auVar18._12_4_;
    fVar10 = param_2[8];
    fVar2 = param_2[9];
    fVar15 = param_2[10];
    fVar16 = -fVar16 / fVar11;
    fVar20 = -fVar20 / fVar12;
    fVar21 = -fVar21 / fVar13;
    fVar22 = fVar22 / fVar14;
    iVar26 = -(uint)(fVar11 == 0.0);
    iVar27 = -(uint)(fVar12 == 0.0);
    iVar28 = -(uint)(fVar13 == 0.0);
    iVar29 = -(uint)(fVar14 == 0.0);
    fVar11 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT11((byte)((uint)fVar16 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               SUB41(fVar16,0) & ~(byte)iVar26)));
    auVar17._0_8_ =
         CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                  CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                           CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar27,fVar11))));
    auVar17[8] = SUB41(fVar21,0) & ~(byte)iVar28;
    auVar17[9] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar28 >> 8);
    auVar17[10] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
    auVar17[0xb] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
    auVar68[0xc] = SUB41(fVar22,0) & ~(byte)iVar29;
    auVar68._0_12_ = auVar17;
    auVar68[0xd] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar29 >> 8);
    auVar68[0xe] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    auVar68[0xf] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    fVar20 = *param_1 - fVar10;
    fVar21 = param_1[1] - fVar2;
    fVar37 = param_1[2] - fVar15;
    auVar51._4_4_ = fVar37;
    auVar51._0_4_ = fVar37;
    auVar51._8_4_ = fVar37;
    auVar51._12_4_ = fVar37;
    fVar23 = (*param_1 + param_1[4] * fVar69) - fVar10;
    fVar25 = (param_1[1] + param_1[5] * fVar69) - fVar2;
    fVar69 = (param_1[2] + param_1[6] * fVar69) - fVar15;
    auVar40._0_4_ = -fVar11;
    fVar22 = (float)((ulong)auVar17._0_8_ >> 0x20);
    fVar49 = -fVar22;
    fVar12 = auVar17._8_4_;
    auVar39._8_4_ = -fVar12;
    fVar13 = auVar68._12_4_;
    auVar52._4_12_ = auVar51._4_12_;
    auVar52._0_4_ = fVar20;
    auVar54._0_8_ = auVar52._0_8_;
    auVar54._8_4_ = fVar21;
    auVar54._12_4_ = fVar37;
    auVar53._8_8_ = auVar54._8_8_;
    auVar53._4_4_ = fVar37;
    auVar53._0_4_ = fVar20;
    auVar55._0_12_ = auVar53._0_12_;
    auVar55._12_4_ = fVar37;
    auVar70 = NEON_ext(auVar55,auVar55,8,1);
    fVar16 = auVar70._0_4_;
    auVar56._4_12_ = auVar55._4_12_;
    auVar56._0_4_ = fVar16;
    auVar58._0_8_ = auVar56._0_8_;
    auVar58._8_4_ = auVar70._8_4_;
    auVar58._12_4_ = fVar37;
    auVar57._8_8_ = auVar58._8_8_;
    auVar57._4_4_ = fVar20;
    auVar57._0_4_ = fVar16;
    auVar59._0_12_ = auVar57._0_12_;
    auVar59._12_4_ = fVar21;
    auVar60 = NEON_ext(auVar59,auVar70,8,1);
    auVar67._4_4_ = fVar12;
    auVar67._0_4_ = fVar12;
    auVar67._8_4_ = fVar12;
    auVar67._12_4_ = fVar12;
    auVar68 = NEON_ext(auVar67,auVar68,0xc,1);
    auVar74._4_4_ = fVar22;
    auVar74._0_4_ = fVar22;
    auVar74._8_4_ = fVar22;
    auVar74._12_4_ = fVar22;
    auVar18 = NEON_ext(auVar74,auVar68,0xc,1);
    fVar71 = (float)_DAT_03cab640;
    fVar72 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar73 = (float)_UNK_03cab648;
    fVar34 = (float)((ulong)_UNK_03cab648 >> 0x20);
    fVar14 = fVar11 * fVar34;
    fVar30 = auVar18._0_4_ * fVar71;
    fVar32 = auVar18._4_4_ * fVar72;
    fVar33 = auVar18._8_4_ * fVar73;
    fVar34 = auVar18._12_4_ * fVar34;
    auVar18 = NEON_ext(auVar60,auVar60,0xc,1);
    fVar35 = (fVar20 * fVar13 + fVar11 * fVar71 * 0.0 + auVar18._0_4_ * fVar30) -
             auVar68._0_4_ * fVar16;
    fVar36 = (fVar21 * fVar13 + fVar22 * fVar72 * 0.0 + auVar18._4_4_ * fVar32) -
             auVar68._4_4_ * auVar70._4_4_;
    fVar37 = (fVar37 * fVar13 + fVar12 * fVar73 * 0.0 + auVar18._8_4_ * fVar33) -
             auVar68._8_4_ * auVar70._8_4_;
    fVar38 = (fVar13 * 0.0 + fVar20 * fVar14 + auVar18._12_4_ * fVar34) -
             auVar68._12_4_ * auVar70._12_4_;
    auVar39._4_4_ = auVar39._8_4_;
    auVar39._0_4_ = auVar39._8_4_;
    auVar39._12_4_ = auVar39._8_4_;
    auVar50._4_4_ = fVar37;
    auVar50._0_4_ = fVar37;
    auVar50._8_4_ = fVar37;
    auVar50._12_4_ = fVar37;
    auVar40._4_12_ = auVar39._4_12_;
    auVar42._0_8_ = auVar40._0_8_;
    auVar42._8_4_ = fVar49;
    auVar42._12_4_ = auVar39._8_4_;
    auVar41._8_8_ = auVar42._8_8_;
    auVar41._4_4_ = auVar39._8_4_;
    auVar41._0_4_ = auVar40._0_4_;
    auVar43._0_12_ = auVar41._0_12_;
    auVar43._12_4_ = auVar39._8_4_;
    auVar74 = NEON_ext(auVar43,auVar43,8,1);
    fVar16 = auVar74._0_4_;
    auVar44._4_12_ = auVar43._4_12_;
    auVar44._0_4_ = fVar16;
    fVar21 = auVar74._8_4_;
    auVar46._0_8_ = auVar44._0_8_;
    auVar46._8_4_ = fVar21;
    auVar46._12_4_ = auVar39._8_4_;
    auVar45._8_8_ = auVar46._8_8_;
    auVar45._4_4_ = auVar40._0_4_;
    auVar45._0_4_ = fVar16;
    auVar47._0_12_ = auVar45._0_12_;
    auVar47._12_4_ = fVar49;
    auVar18 = NEON_ext(auVar47,auVar74,8,1);
    auVar48 = NEON_ext(auVar18,auVar18,0xc,1);
    auVar60._4_4_ = fVar36;
    auVar60._0_4_ = fVar35;
    auVar60._8_4_ = fVar37;
    auVar60._12_4_ = fVar38;
    auVar18 = NEON_ext(auVar50,auVar60,0xc,1);
    auVar61._4_4_ = fVar36;
    auVar61._0_4_ = fVar36;
    auVar61._8_4_ = fVar36;
    auVar61._12_4_ = fVar36;
    auVar62 = NEON_ext(auVar61,auVar18,0xc,1);
    auVar65._12_4_ = auVar62._12_4_;
    auVar70._4_4_ = fVar69;
    auVar70._0_4_ = fVar23;
    auVar70._8_4_ = fVar25;
    auVar70._12_4_ = fVar69;
    auVar1._4_4_ = fVar69;
    auVar1._0_4_ = fVar23;
    auVar1._8_4_ = fVar25;
    auVar1._12_4_ = fVar69;
    auVar60 = NEON_ext(auVar70,auVar1,8,1);
    fVar20 = auVar60._0_4_;
    auVar63._4_12_ = auVar62._4_12_;
    auVar63._0_4_ = fVar20;
    auVar65._0_8_ = auVar63._0_8_;
    auVar65._8_4_ = auVar60._8_4_;
    auVar64._8_8_ = auVar65._8_8_;
    auVar64._4_4_ = fVar23;
    auVar64._0_4_ = fVar20;
    auVar66._0_12_ = auVar64._0_12_;
    auVar66._12_4_ = fVar25;
    auVar70 = NEON_ext(auVar66,auVar60,8,1);
    auVar70 = NEON_ext(auVar70,auVar70,0xc,1);
    auVar24._0_4_ =
         (fVar23 * fVar13 + fVar11 * fVar71 * 0.0 + auVar70._0_4_ * fVar30) - auVar68._0_4_ * fVar20
    ;
    auVar24._4_4_ =
         (fVar25 * fVar13 + fVar22 * fVar72 * 0.0 + auVar70._4_4_ * fVar32) -
         auVar68._4_4_ * auVar60._4_4_;
    auVar24._8_4_ =
         (fVar69 * fVar13 + fVar12 * fVar73 * 0.0 + auVar70._8_4_ * fVar33) -
         auVar68._8_4_ * auVar60._8_4_;
    auVar24._12_4_ =
         (fVar13 * 0.0 + fVar23 * fVar14 + auVar70._12_4_ * fVar34) -
         auVar68._12_4_ * auVar60._12_4_;
    fVar11 = fVar10 + ((auVar40._0_4_ * fVar38 + fVar13 * fVar35 * fVar71 +
                       auVar48._0_4_ * auVar62._0_4_ * fVar71) - auVar18._0_4_ * fVar16);
    fVar12 = fVar2 + ((fVar49 * fVar38 + fVar13 * fVar36 * fVar72 +
                      auVar48._4_4_ * auVar62._4_4_ * fVar72) - auVar18._4_4_ * auVar74._4_4_);
    fVar14 = fVar15 + ((auVar39._8_4_ * fVar38 + fVar13 * fVar37 * fVar73 +
                       auVar48._8_4_ * auVar62._8_4_ * fVar73) - auVar18._8_4_ * fVar21);
    fVar23 = param_2[0xb] + 0.0;
    auVar19._4_4_ = auVar24._8_4_;
    auVar19._0_4_ = auVar24._8_4_;
    auVar19._8_4_ = auVar24._8_4_;
    auVar19._12_4_ = auVar24._8_4_;
    auVar18 = NEON_ext(auVar19,auVar24,0xc,1);
    auVar31._4_4_ = auVar24._4_4_;
    auVar31._0_4_ = auVar24._4_4_;
    auVar31._8_4_ = auVar24._4_4_;
    auVar31._12_4_ = auVar24._4_4_;
    auVar60 = NEON_ext(auVar31,auVar18,0xc,1);
    fVar16 = (fVar10 + ((auVar40._0_4_ * auVar24._12_4_ + fVar13 * auVar24._0_4_ * fVar71 +
                        auVar48._0_4_ * auVar60._0_4_ * fVar71) - auVar18._0_4_ * fVar16)) - fVar11;
    fVar20 = (fVar2 + ((fVar49 * auVar24._12_4_ + fVar13 * auVar24._4_4_ * fVar72 +
                       auVar48._4_4_ * auVar60._4_4_ * fVar72) - auVar18._4_4_ * auVar74._4_4_)) -
             fVar12;
    fVar21 = (fVar15 + ((auVar39._8_4_ * auVar24._12_4_ + fVar13 * auVar24._8_4_ * fVar73 +
                        auVar48._8_4_ * auVar60._8_4_ * fVar73) - auVar18._8_4_ * fVar21)) - fVar14;
    fVar22 = (param_2[0xb] + 0.0) - fVar23;
    uStack_58 = CONCAT44(fVar23,fVar14);
    local_60 = CONCAT44(fVar12,fVar11);
    uStack_48 = CONCAT44(fVar22,fVar21);
    local_50 = CONCAT44(fVar20,fVar16);
    auVar62._0_4_ = fVar16 * fVar16 + fVar20 * fVar20;
    auVar62._4_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar62._8_4_ = fVar16 * fVar16 + fVar20 * fVar20;
    auVar62._12_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar18 = NEON_ext(auVar62,auVar62,4,1);
    local_40 = SQRT(auVar18._0_4_ + auVar18._4_4_);
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (local_40 < 1.1920929e-07) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(local_40)) {
        bVar3 = local_40 < -1.1920929e-07;
        bVar4 = local_40 == -1.1920929e-07;
        bVar5 = false;
      }
    }
    if (bVar4 || bVar3 != bVar5) {
      uStack_48 = CONCAT44(fVar22 / local_40,fVar21 / local_40);
      local_50 = CONCAT44(fVar20 / local_40,fVar16 / local_40);
    }
    local_80 = CONCAT44(fVar2 - ABS(param_2[1] * 0.5),fVar10 - ABS(*param_2 * 0.5));
    uStack_70 = CONCAT44(fVar2 + ABS(param_2[1] * 0.5),fVar10 + ABS(*param_2 * 0.5));
    uStack_78 = (ulong)(uint)(fVar15 - ABS(param_2[2] * 0.5));
    uStack_68 = (ulong)(uint)(fVar15 + ABS(param_2[2] * 0.5));
    pfVar6 = (float *)&local_60;
  }
  else {
    puVar9 = &local_60;
    local_60 = CONCAT44(param_2[9] - ABS(param_2[1] * 0.5),param_2[8] - ABS(*param_2 * 0.5));
    local_50 = CONCAT44(param_2[9] + ABS(param_2[1] * 0.5),param_2[8] + ABS(*param_2 * 0.5));
    uStack_58 = (ulong)(uint)(param_2[10] - ABS(param_2[2] * 0.5));
    uStack_48 = (ulong)(uint)(param_2[10] + ABS(param_2[2] * 0.5));
    pfVar6 = param_1;
  }
  uVar7 = FUN_026f799c(pfVar6,puVar9,param_3,&local_14);
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if (param_3 != (float *)0x0) {
      fVar15 = param_1[8];
      fVar22 = *param_1;
      fVar10 = param_1[1];
      fVar2 = param_1[3];
      fVar16 = param_1[4];
      fVar20 = param_1[5];
      fVar21 = param_1[7];
      param_3[2] = param_1[2] + param_1[6] * fVar15 * local_14;
      param_3[3] = fVar2 + fVar21 * fVar15 * local_14;
      *param_3 = fVar22 + fVar16 * fVar15 * local_14;
      param_3[1] = fVar10 + fVar20 * fVar15 * local_14;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = local_14;
    }
    uVar8 = 1;
  }
  return uVar8;
}


