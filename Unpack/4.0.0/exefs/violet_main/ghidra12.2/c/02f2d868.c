/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f2d868; name: FUN_02f2d868
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2d868(long param_1,byte *param_2,undefined1 (*param_3) [16],int param_4,uint *param_5)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [12];
  uint uVar25;
  ulong uVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar37 [16];
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar44;
  float fVar45;
  int iVar46;
  int iVar47;
  undefined1 auVar43 [16];
  float fVar48;
  float fVar49;
  float fVar51;
  undefined1 auVar50 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [12];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  float fVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  float fVar90;
  float fVar91;
  
  bVar5 = param_2[4];
  uVar25 = (uint)bVar5;
  if (3 < (ulong)bVar5) {
    uVar25 = 4;
  }
  fVar49 = *(float *)(param_1 + 0xe0);
  uVar89 = *(undefined8 *)(param_1 + 0x38);
  *param_5 = uVar25;
  pauVar1 = (undefined1 (*) [12])(param_2 + 0x10);
  uVar23 = *(undefined8 *)(param_2 + 0x18);
  fVar32 = (float)uVar23;
  fVar33 = (float)((ulong)uVar23 >> 0x20);
  uVar36 = *(undefined8 *)*pauVar1;
  fVar42 = *(float *)*pauVar1;
  fVar45 = *(float *)(param_2 + 0x14);
  fVar56 = *(float *)(param_2 + 0x18);
  fVar48 = *(float *)(param_2 + 0x1c);
  auVar24 = *pauVar1;
  auVar60 = *pauVar1;
  fVar30 = (float)uVar36;
  fVar31 = (float)((ulong)uVar36 >> 0x20);
  fVar34 = 0.0;
  *(undefined8 *)(param_5 + 6) = uVar23;
  *(undefined8 *)(param_5 + 4) = uVar36;
  *(undefined8 *)(param_5 + 10) = uVar23;
  *(undefined8 *)(param_5 + 8) = uVar36;
  uVar36 = *(undefined8 *)(param_2 + 0x30);
  auVar37._0_8_ =
       CONCAT17((char)((ulong)uVar36 >> 0x18),
                CONCAT16((char)((ulong)uVar36 >> 0x10),
                         (uint6)(ushort)((ushort)uVar36 ^ 0x8000) << 0x10)) ^ 0x8000000000000000;
  auVar37._8_2_ = 0;
  auVar37[10] = (undefined1)((ulong)uVar36 >> 0x20);
  auVar37[0xb] = (byte)((ulong)uVar36 >> 0x28) ^ 0x80;
  auVar37._12_2_ = 0;
  auVar37[0xe] = (undefined1)((ulong)uVar36 >> 0x30);
  auVar37[0xf] = (byte)((ulong)uVar36 >> 0x38) ^ 0x80;
  auVar37 = NEON_scvtf(auVar37,4);
  fVar35 = auVar37._0_4_ * 5.086263e-10;
  fVar38 = auVar37._4_4_ * 5.086263e-10;
  fVar39 = auVar37._8_4_ * 5.086263e-10;
  fVar40 = auVar37._12_4_ * 5.086263e-10;
  auVar67._0_4_ = fVar35 * fVar35;
  auVar67._4_4_ = fVar38 * fVar38;
  auVar67._8_4_ = fVar39 * fVar39;
  auVar67._12_4_ = fVar40 * fVar40;
  auVar37 = NEON_ext(auVar67,auVar67,8,1);
  fVar29 = auVar37._0_4_ + auVar37._4_4_;
  auVar50 = ZEXT816(0);
  fVar28 = auVar67._0_4_ + auVar67._4_4_ + fVar29;
  if (fVar28 != 0.0) {
    fVar28 = SQRT(fVar28);
    fVar29 = SQRT(auVar67._0_4_ + auVar67._4_4_ + fVar29);
    auVar50._0_4_ = fVar35 / fVar28;
    auVar50._4_4_ = fVar38 / fVar29;
    auVar50._8_4_ = fVar39 / fVar28;
    auVar50._12_4_ = fVar40 / fVar29;
  }
  fVar29 = (float)*(double *)(param_3[1] + 8);
  fVar28 = (float)*(double *)param_3[1];
  fVar35 = (float)*(double *)param_3[2];
  if (param_4 == 1) {
    fVar38 = *(float *)(param_3[3] + 4);
    fVar39 = (float)*(undefined8 *)(param_1 + 0x20);
    fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fVar28 = fVar28 - (float)*(undefined8 *)(param_3[3] + 8) * fVar39;
    fVar29 = fVar29 - (float)((ulong)*(undefined8 *)(param_3[3] + 8) >> 0x20) * fVar40;
    fVar35 = fVar35 - fVar38 * fVar39;
    fVar34 = 0.0 - fVar38 * fVar40;
    auVar58._0_4_ = *(float *)(param_3[2] + 8) * -fVar39 * 0.5;
    auVar58._4_4_ = *(float *)(param_3[2] + 0xc) * -fVar40 * 0.5;
    auVar58._8_4_ = *(float *)param_3[3] * -fVar39 * 0.5;
    auVar58._12_4_ = fVar38 * -fVar40 * 0.5;
    auVar73 = NEON_ext(auVar58,auVar58,4,1);
    fVar38 = auVar58._0_4_ * auVar58._0_4_ + auVar58._4_4_ * auVar58._4_4_ +
             auVar58._8_4_ * auVar58._8_4_;
    fVar39 = auVar58._0_4_ * auVar58._0_4_ + auVar58._4_4_ * auVar58._4_4_ +
             auVar58._8_4_ * auVar58._8_4_;
    auVar37 = *param_3;
    auVar67 = NEON_ext(auVar37,auVar37,8,1);
    uVar36 = NEON_ext(auVar37._0_8_,auVar67._0_8_,4,1);
    fVar40 = auVar37._0_4_;
    fVar54 = auVar37._4_4_;
    fVar55 = auVar37._8_4_;
    fVar51 = auVar37._12_4_;
    auVar76._0_4_ = fVar40 * auVar73._0_4_ - auVar58._0_4_ * (float)uVar36;
    auVar76._4_4_ = fVar54 * auVar73._4_4_ - auVar58._4_4_ * (float)((ulong)uVar36 >> 0x20);
    auVar76._8_4_ = fVar55 * auVar58._0_4_ - auVar58._8_4_ * fVar40;
    auVar76._12_4_ = fVar51 * auVar58._4_4_ - auVar58._12_4_ * fVar54;
    auVar67 = NEON_ext(auVar76,auVar76,4,1);
    auVar62._0_4_ = fVar40 * auVar58._0_4_;
    auVar62._4_4_ = fVar54 * auVar58._4_4_;
    auVar62._8_4_ = fVar55 * auVar58._8_4_;
    auVar62._12_4_ = fVar51 * auVar58._12_4_;
    uVar36 = NEON_fmov(0x3f800000,4);
    fVar38 = fVar38 * (fVar38 * (fVar38 * -0.0029562549 + -0.02144013) + -0.33352822) +
             (float)uVar36;
    auVar37 = NEON_ext(auVar62,auVar62,8,1);
    fVar53 = auVar58._0_4_ * fVar51 + auVar67._0_4_ + fVar40 * fVar38;
    fVar54 = auVar58._4_4_ * fVar51 + auVar67._4_4_ +
             fVar54 * (fVar39 * (fVar39 * (fVar39 * -0.0029562549 + -0.02144013) + -0.33352822) +
                      (float)((ulong)uVar36 >> 0x20));
    fVar55 = auVar58._8_4_ * fVar51 + auVar76._0_4_ + fVar55 * fVar38;
    fVar39 = fVar38 * fVar51 - (auVar62._0_4_ + auVar62._4_4_ + auVar37._0_4_);
    auVar69._0_4_ = fVar53 * fVar53;
    auVar69._4_4_ = fVar54 * fVar54;
    auVar69._8_4_ = fVar55 * fVar55;
    auVar69._12_4_ = fVar39 * fVar39;
    auVar37 = NEON_ext(auVar69,auVar69,8,1);
    fVar38 = auVar37._0_4_ + auVar37._4_4_;
    fVar40 = SQRT(auVar69._0_4_ + auVar69._4_4_ + fVar38);
    fVar38 = SQRT(auVar69._0_4_ + auVar69._4_4_ + fVar38);
    auVar73._0_4_ = fVar53 / fVar40;
    auVar73._4_4_ = fVar54 / fVar38;
    auVar73._8_4_ = fVar55 / fVar40;
    auVar73._12_4_ = fVar39 / fVar38;
  }
  else {
    auVar73 = *param_3;
  }
  fVar38 = auVar73._0_4_;
  fVar54 = auVar50._0_4_;
  fVar39 = auVar73._4_4_;
  fVar55 = auVar50._4_4_;
  fVar40 = auVar73._8_4_;
  fVar51 = auVar50._8_4_;
  fVar53 = auVar73._12_4_;
  fVar52 = auVar50._12_4_;
  iVar41 = -(uint)(ABS(fVar38 - fVar54) <= 1.1920929e-07);
  iVar44 = -(uint)(ABS(fVar39 - fVar55) <= 1.1920929e-07);
  iVar46 = -(uint)(ABS(fVar40 - fVar51) <= 1.1920929e-07);
  iVar47 = -(uint)(ABS(fVar53 - fVar52) <= 1.1920929e-07);
  auVar6._12_4_ = fVar33;
  auVar6._0_12_ = auVar60;
  auVar7._12_4_ = fVar33;
  auVar7._0_12_ = auVar24;
  auVar37 = NEON_ext(auVar6,auVar7,4,1);
  if (CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
               (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar47 >> 0x18),
               CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                        (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar47 >> 0x10),
                        CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar41 >> 8) &
                                 (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar47 >> 8),
                                 (byte)iVar44 & (byte)iVar41 & (byte)iVar46 & (byte)iVar47))) == 0)
  {
    auVar57._0_4_ = -fVar54;
    auVar57._4_4_ = -fVar55;
    auVar57._8_4_ = -fVar51;
    auVar57._12_4_ = fVar52;
    auVar43._8_8_ = _UNK_03caab28;
    auVar43._0_8_ = _DAT_03caab20;
    auVar61._8_8_ = _UNK_03caa778;
    auVar61._0_8_ = _DAT_03caa770;
    auVar68._8_8_ = _UNK_03caa6a8;
    auVar68._0_8_ = _DAT_03caa6a0;
    auVar74._8_8_ = _UNK_03caab38;
    auVar74._0_8_ = _DAT_03caab30;
    auVar67 = a64_TBL(ZEXT816(0),auVar73,auVar43);
    auVar62 = a64_TBL(ZEXT816(0),auVar73,auVar61);
    auVar69 = a64_TBL(ZEXT816(0),auVar57,auVar68);
    auVar58 = a64_TBL(ZEXT816(0),auVar57,auVar74);
    auVar75._0_4_ = auVar62._0_4_ * auVar58._0_4_ - auVar67._0_4_ * auVar69._0_4_;
    auVar75._4_4_ = auVar62._4_4_ * auVar58._4_4_ - auVar67._4_4_ * auVar69._4_4_;
    auVar75._8_4_ = auVar62._8_4_ * auVar58._8_4_ - auVar67._8_4_ * auVar69._8_4_;
    auVar75._12_4_ = auVar62._12_4_ * auVar58._12_4_ - auVar67._12_4_ * auVar69._12_4_;
    auVar10._8_4_ = (int)_UNK_03cab148;
    auVar10._0_8_ = _DAT_03cab140;
    auVar10._12_4_ = (int)((ulong)_UNK_03cab148 >> 0x20);
    auVar76 = a64_TBL(ZEXT816(0),auVar75,auVar10);
    fVar48 = auVar76._12_4_ - (auVar62._12_4_ * auVar69._12_4_ + auVar67._12_4_ * auVar58._12_4_);
    auVar60._0_4_ =
         -(auVar76._0_4_ - (auVar62._0_4_ * auVar69._0_4_ + auVar67._0_4_ * auVar58._0_4_));
    auVar60._4_4_ =
         -(auVar76._4_4_ - (auVar62._4_4_ * auVar69._4_4_ + auVar67._4_4_ * auVar58._4_4_));
    auVar60._8_4_ =
         -(auVar76._8_4_ - (auVar62._8_4_ * auVar69._8_4_ + auVar67._8_4_ * auVar58._8_4_));
    auVar63._12_4_ = -fVar48;
    auVar63._0_12_ = auVar60;
    auVar58 = NEON_ext(auVar63,auVar63,4,1);
    auVar64._12_4_ = fVar48;
    auVar64._0_12_ = auVar60;
    auVar67 = NEON_ext(auVar64,auVar64,8,1);
    fVar59 = auVar67._4_4_ * auVar67._4_4_;
    fVar56 = fVar59 + -0.5;
    fVar59 = fVar59 + -0.5;
    fVar72 = fVar30 * auVar60._0_4_ + fVar31 * auVar60._4_4_ + fVar32 * auVar60._8_4_;
    fVar77 = fVar30 * auVar60._0_4_ + fVar31 * auVar60._4_4_ + fVar32 * auVar60._8_4_;
    auVar65._0_4_ = auVar37._0_4_ * auVar60._0_4_ - fVar30 * auVar58._0_4_;
    auVar65._4_4_ = auVar37._4_4_ * auVar60._4_4_ - fVar31 * auVar58._4_4_;
    auVar65._8_4_ = fVar30 * auVar60._8_4_ - fVar32 * auVar60._0_4_;
    auVar65._12_4_ = fVar31 * fVar48 - fVar33 * auVar60._4_4_;
    auVar67 = NEON_ext(auVar65,auVar65,4,1);
    fVar42 = fVar30 * fVar56 + auVar60._0_4_ * fVar72 + auVar67._0_4_ * fVar48;
    fVar45 = fVar31 * fVar59 + auVar60._4_4_ * fVar77 + auVar67._4_4_ * fVar48;
    fVar56 = fVar32 * fVar56 + auVar60._8_4_ * fVar72 + auVar65._0_4_ * fVar48;
    fVar48 = fVar33 * fVar59 + fVar48 * fVar77 + fVar48 * 0.0;
    fVar42 = fVar42 + fVar42;
    fVar45 = fVar45 + fVar45;
    fVar56 = fVar56 + fVar56;
    fVar48 = fVar48 + fVar48;
  }
  lVar27 = *(long *)(param_2 + 0x20);
  uVar36 = *(undefined8 *)(param_2 + 0x38);
  lVar3 = 0;
  if (lVar27 != 0) {
    lVar3 = lVar27 + 0x50;
  }
  if ((param_2[5] >> 3 & 1) != 0) {
    lVar4 = 0;
    if ((*param_2 & 0x30) != 0) {
      lVar4 = 0x90;
    }
    lVar4 = lVar4 + (ulong)bVar5 * 0x20;
    lVar4 = (ulong)(byte)PTR_DAT_047e4718[param_2[lVar4 + 0x44]] + lVar4;
    fVar28 = fVar28 + *(float *)(param_2 + lVar4 + 0x40);
    fVar29 = fVar29 + *(float *)(param_2 + lVar4 + 0x44);
    fVar35 = fVar35 + *(float *)(param_2 + lVar4 + 0x48);
    fVar34 = fVar34 + *(float *)(param_2 + lVar4 + 0x4c);
  }
  if (uVar25 == 0) {
    uVar36 = 0x7f7fffee;
  }
  else {
    auVar67 = NEON_ext(auVar50,auVar50,8,1);
    fVar77 = auVar67._4_4_ * auVar67._4_4_;
    fVar66 = fVar32 * fVar51 + fVar30 * fVar54 + fVar31 * fVar55;
    fVar71 = fVar32 * fVar51 + fVar30 * fVar54 + fVar31 * fVar55;
    auVar67 = NEON_ext(auVar73,auVar73,8,1);
    fVar79 = auVar67._4_4_ * auVar67._4_4_;
    fVar72 = fVar77 + -0.5;
    fVar77 = fVar77 + -0.5;
    fVar78 = fVar79 + -0.5;
    fVar79 = fVar79 + -0.5;
    auVar73 = NEON_ext(auVar73,auVar73,4,1);
    auVar67 = NEON_ext(auVar50,auVar50,4,1);
    auVar70._0_4_ = fVar30 * auVar67._0_4_ - auVar37._0_4_ * fVar54;
    auVar70._4_4_ = fVar31 * auVar67._4_4_ - auVar37._4_4_ * fVar55;
    auVar70._8_4_ = fVar32 * fVar54 - fVar30 * fVar51;
    auVar70._12_4_ = fVar33 * fVar55 - fVar31 * fVar52;
    auVar37 = NEON_ext(auVar70,auVar70,4,1);
    fVar59 = auVar37._0_4_ * fVar52 + fVar30 * fVar72 + fVar54 * fVar66;
    fVar55 = auVar37._4_4_ * fVar52 + fVar31 * fVar77 + fVar55 * fVar71;
    fVar51 = auVar70._0_4_ * fVar52 + fVar32 * fVar72 + fVar51 * fVar66;
    fVar52 = fVar52 * 0.0 + fVar33 * fVar77 + fVar52 * fVar71;
    fVar54 = -(float)uVar89 * fVar49;
    fVar49 = -(float)((ulong)uVar89 >> 0x20) * fVar49;
    fVar59 = fVar59 + fVar59;
    fVar55 = fVar55 + fVar55;
    fVar51 = fVar51 + fVar51;
    fVar52 = fVar52 + fVar52;
    fVar72 = (float)((int)(short)uVar36 << 0x10);
    fVar77 = (float)((int)(short)((ulong)uVar36 >> 0x10) << 0x10);
    fVar66 = (float)((int)(short)((ulong)uVar36 >> 0x20) << 0x10);
    fVar71 = (float)((int)(short)((ulong)uVar36 >> 0x30) << 0x10);
    auVar8._4_4_ = fVar55;
    auVar8._0_4_ = fVar59;
    auVar8._8_4_ = fVar51;
    auVar8._12_4_ = fVar52;
    auVar9._4_4_ = fVar55;
    auVar9._0_4_ = fVar59;
    auVar9._8_4_ = fVar51;
    auVar9._12_4_ = fVar52;
    auVar37 = NEON_ext(auVar8,auVar9,4,1);
    if (lVar27 == 0) {
      uVar36 = 0x7f7fffee7f7fffee;
      param_2 = param_2 + 0x50;
      uVar26 = 0;
      do {
        fVar80 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        fVar82 = fVar54 * fVar80;
        fVar80 = fVar49 * fVar80;
        param_5[uVar26 + 0xc] = (uint)fVar82;
        pauVar1 = (undefined1 (*) [12])(param_2 + -0x10);
        fVar85 = (float)((ulong)*(undefined8 *)(param_2 + -8) >> 0x20);
        uVar23 = *(undefined8 *)*pauVar1;
        fVar86 = (float)((ulong)uVar23 >> 0x20);
        auVar17._12_4_ = fVar85;
        auVar17._0_12_ = *pauVar1;
        auVar18._12_4_ = fVar85;
        auVar18._0_12_ = *pauVar1;
        auVar67 = NEON_ext(auVar17,auVar18,8,1);
        uVar89 = NEON_ext(uVar23,auVar67._0_8_,4,1);
        fVar81 = fVar59 * (float)uVar89 - auVar37._0_4_ * (float)uVar23;
        fVar83 = fVar55 * (float)((ulong)uVar89 >> 0x20) - auVar37._4_4_ * fVar86;
        fVar84 = fVar51 * (float)uVar23 - fVar59 * (float)*(undefined8 *)(param_2 + -8);
        fVar86 = fVar52 * fVar86 - fVar55 * fVar85;
        auVar19._4_4_ = fVar83;
        auVar19._0_4_ = fVar81;
        auVar19._8_4_ = fVar84;
        auVar19._12_4_ = fVar86;
        auVar20._4_4_ = fVar83;
        auVar20._0_4_ = fVar81;
        auVar20._8_4_ = fVar84;
        auVar20._12_4_ = fVar86;
        auVar67 = NEON_ext(auVar19,auVar20,4,1);
        uVar23 = NEON_ext(auVar67._0_8_,CONCAT44(fVar83,fVar81),4,1);
        fVar84 = auVar67._0_4_;
        fVar87 = auVar67._4_4_;
        fVar90 = fVar38 * fVar84 + fVar39 * fVar87 + fVar40 * fVar81;
        fVar91 = fVar38 * fVar84 + fVar39 * fVar87 + fVar40 * fVar81;
        fVar86 = fVar38 * (float)uVar23 - auVar73._0_4_ * fVar84;
        fVar83 = fVar39 * (float)((ulong)uVar23 >> 0x20) - auVar73._4_4_ * fVar87;
        fVar85 = fVar40 * fVar84 - fVar38 * fVar81;
        fVar88 = fVar53 * fVar87 - fVar39 * 0.0;
        auVar21._4_4_ = fVar83;
        auVar21._0_4_ = fVar86;
        auVar21._8_4_ = fVar85;
        auVar21._12_4_ = fVar88;
        auVar22._4_4_ = fVar83;
        auVar22._0_4_ = fVar86;
        auVar22._8_4_ = fVar85;
        auVar22._12_4_ = fVar88;
        auVar67 = NEON_ext(auVar21,auVar22,4,1);
        fVar83 = fVar78 * fVar84 + fVar38 * fVar90 + fVar53 * auVar67._0_4_;
        fVar84 = fVar79 * fVar87 + fVar39 * fVar91 + fVar53 * auVar67._4_4_;
        fVar86 = fVar78 * fVar81 + fVar40 * fVar90 + fVar53 * fVar86;
        fVar85 = fVar79 * 0.0 + fVar53 * fVar91 + fVar53 * 0.0;
        iVar41 = (int)uVar26;
        fVar81 = fVar72;
        if (((iVar41 != 0) && (fVar81 = fVar66, iVar41 != 2)) && (fVar81 = fVar77, iVar41 != 1)) {
          fVar81 = fVar71;
        }
        uVar36 = NEON_fmin(uVar36,CONCAT44(fVar80,fVar82),4);
        uVar2 = uVar26 + 1;
        param_2 = param_2 + 0x20;
        *(ulong *)(param_5 + uVar26 * 4 + 0x12) =
             CONCAT44((fVar34 + fVar85 + fVar85 + fVar48 * fVar81) - fVar33 * fVar80,
                      (fVar35 + fVar86 + fVar86 + fVar56 * fVar81) - fVar32 * fVar82);
        *(ulong *)(param_5 + uVar26 * 4 + 0x10) =
             CONCAT44((fVar29 + fVar84 + fVar84 + fVar45 * fVar81) - fVar31 * fVar80,
                      (fVar28 + fVar83 + fVar83 + fVar42 * fVar81) - fVar30 * fVar82);
        uVar26 = uVar2;
      } while (uVar25 != uVar2);
    }
    else {
      uVar36 = 0x7f7fffee7f7fffee;
      param_2 = param_2 + 0x50;
      uVar26 = 0;
      do {
        fVar82 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        fVar81 = *(float *)(lVar3 + uVar26 * 4);
        fVar80 = fVar54 * fVar82 + fVar81;
        fVar81 = fVar49 * fVar82 + fVar81;
        param_5[uVar26 + 0xc] = (uint)fVar80;
        pauVar1 = (undefined1 (*) [12])(param_2 + -0x10);
        fVar85 = (float)((ulong)*(undefined8 *)(param_2 + -8) >> 0x20);
        uVar23 = *(undefined8 *)*pauVar1;
        fVar86 = (float)((ulong)uVar23 >> 0x20);
        auVar11._12_4_ = fVar85;
        auVar11._0_12_ = *pauVar1;
        auVar12._12_4_ = fVar85;
        auVar12._0_12_ = *pauVar1;
        auVar67 = NEON_ext(auVar11,auVar12,8,1);
        uVar89 = NEON_ext(uVar23,auVar67._0_8_,4,1);
        fVar82 = fVar59 * (float)uVar89 - auVar37._0_4_ * (float)uVar23;
        fVar83 = fVar55 * (float)((ulong)uVar89 >> 0x20) - auVar37._4_4_ * fVar86;
        fVar84 = fVar51 * (float)uVar23 - fVar59 * (float)*(undefined8 *)(param_2 + -8);
        fVar86 = fVar52 * fVar86 - fVar55 * fVar85;
        auVar13._4_4_ = fVar83;
        auVar13._0_4_ = fVar82;
        auVar13._8_4_ = fVar84;
        auVar13._12_4_ = fVar86;
        auVar14._4_4_ = fVar83;
        auVar14._0_4_ = fVar82;
        auVar14._8_4_ = fVar84;
        auVar14._12_4_ = fVar86;
        auVar67 = NEON_ext(auVar13,auVar14,4,1);
        uVar23 = NEON_ext(auVar67._0_8_,CONCAT44(fVar83,fVar82),4,1);
        fVar84 = auVar67._0_4_;
        fVar87 = auVar67._4_4_;
        fVar90 = fVar38 * fVar84 + fVar39 * fVar87 + fVar40 * fVar82;
        fVar91 = fVar38 * fVar84 + fVar39 * fVar87 + fVar40 * fVar82;
        fVar86 = fVar38 * (float)uVar23 - auVar73._0_4_ * fVar84;
        fVar83 = fVar39 * (float)((ulong)uVar23 >> 0x20) - auVar73._4_4_ * fVar87;
        fVar85 = fVar40 * fVar84 - fVar38 * fVar82;
        fVar88 = fVar53 * fVar87 - fVar39 * 0.0;
        auVar15._4_4_ = fVar83;
        auVar15._0_4_ = fVar86;
        auVar15._8_4_ = fVar85;
        auVar15._12_4_ = fVar88;
        auVar16._4_4_ = fVar83;
        auVar16._0_4_ = fVar86;
        auVar16._8_4_ = fVar85;
        auVar16._12_4_ = fVar88;
        auVar67 = NEON_ext(auVar15,auVar16,4,1);
        fVar83 = fVar78 * fVar84 + fVar38 * fVar90 + fVar53 * auVar67._0_4_;
        fVar84 = fVar79 * fVar87 + fVar39 * fVar91 + fVar53 * auVar67._4_4_;
        fVar86 = fVar78 * fVar82 + fVar40 * fVar90 + fVar53 * fVar86;
        fVar85 = fVar79 * 0.0 + fVar53 * fVar91 + fVar53 * 0.0;
        iVar41 = (int)uVar26;
        fVar82 = fVar72;
        if (((iVar41 != 0) && (fVar82 = fVar66, iVar41 != 2)) && (fVar82 = fVar77, iVar41 != 1)) {
          fVar82 = fVar71;
        }
        uVar36 = NEON_fmin(uVar36,CONCAT44(fVar81,fVar80),4);
        uVar2 = uVar26 + 1;
        param_2 = param_2 + 0x20;
        *(ulong *)(param_5 + uVar26 * 4 + 0x12) =
             CONCAT44((fVar34 + fVar85 + fVar85 + fVar48 * fVar82) - fVar33 * fVar81,
                      (fVar35 + fVar86 + fVar86 + fVar56 * fVar82) - fVar32 * fVar80);
        *(ulong *)(param_5 + uVar26 * 4 + 0x10) =
             CONCAT44((fVar29 + fVar84 + fVar84 + fVar45 * fVar82) - fVar31 * fVar81,
                      (fVar28 + fVar83 + fVar83 + fVar42 * fVar82) - fVar30 * fVar80);
        uVar26 = uVar2;
      } while (uVar25 != uVar2);
    }
  }
  param_5[1] = (uint)uVar36;
  return;
}


