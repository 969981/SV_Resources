/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bfcac; name: FUN_031bfcac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031bfcac(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  int iVar33;
  undefined4 uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 auVar62 [16];
  
  uVar40 = param_3[1];
  uVar46 = *param_3;
  uVar18 = param_3[3];
  uVar3 = param_3[2];
  fVar6 = (float)uVar3 - (float)uVar46;
  fVar7 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar46 >> 0x20);
  fVar8 = (float)uVar18 - (float)uVar40;
  fVar11 = (float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar40 >> 0x20);
  uVar10 = CONCAT44(fVar11,fVar8);
  fVar45 = (float)*param_4;
  fVar12 = (float)param_4[2] - fVar45;
  fVar56 = (float)((ulong)*param_4 >> 0x20);
  fVar13 = (float)((ulong)param_4[2] >> 0x20) - fVar56;
  fVar57 = (float)param_4[1];
  fVar14 = (float)param_4[3] - fVar57;
  fVar58 = (float)((ulong)param_4[1] >> 0x20);
  fVar15 = (float)((ulong)param_4[3] >> 0x20) - fVar58;
  fVar16 = fVar6 * fVar12 + fVar7 * fVar13 + fVar8 * fVar14;
  fVar17 = fVar6 * fVar12 + fVar7 * fVar13 + fVar8 * fVar14;
  if (fVar16 < 0.0) {
    fVar16 = -fVar16;
    fVar17 = -fVar17;
    fVar6 = -fVar6;
    fVar7 = -fVar7;
    uVar10 = CONCAT44(-fVar11,-fVar8);
    uVar4 = uVar46;
    uVar5 = uVar40;
  }
  else {
    uVar4 = uVar3;
    uVar5 = uVar18;
    uVar3 = uVar46;
    uVar18 = uVar40;
  }
  fVar28 = (float)uVar3;
  fVar20 = (float)((ulong)uVar3 >> 0x20);
  fVar37 = (float)uVar18;
  fVar50 = fVar16 * fVar16;
  fVar21 = (fVar45 - fVar28) * fVar6;
  fVar23 = (fVar56 - fVar20) * fVar7;
  fVar9 = (float)uVar10;
  fVar24 = (fVar57 - fVar37) * fVar9;
  fVar8 = fVar12 * (fVar45 - fVar28);
  fVar11 = fVar13 * (fVar56 - fVar20);
  fVar19 = fVar14 * (fVar57 - fVar37);
  fVar22 = fVar21 + fVar23 + fVar24;
  fVar24 = fVar21 + fVar23 + fVar24;
  fVar27 = fVar19 + fVar8 + fVar11;
  fVar19 = fVar19 + fVar8 + fVar11;
  fVar8 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar11 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar21 = fVar9 * fVar9 + fVar8;
  fVar23 = fVar9 * fVar9 + fVar11;
  fVar25 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar26 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar31 = fVar21 * fVar25;
  fVar32 = ABS(fVar31 - fVar50);
  fVar38 = fVar22 * fVar25 - fVar16 * fVar27;
  uVar46 = NEON_fmov(0x3f800000,4);
  if ((bool)(~((fVar31 - fVar50) * (fVar31 - fVar50) <= fVar38 * fVar32) & 1)) {
    if (fVar38 <= 0.0) {
      uVar2 = 2;
      uVar40 = 0;
    }
    else {
      if (fVar32 <= (fVar50 + ABS(fVar31)) * 9.536743e-07) goto LAB_031bfd98;
      uVar2 = 0;
      uVar40 = CONCAT44((fVar24 * fVar26 - fVar17 * fVar19) / ABS(fVar23 * fVar26 - fVar17 * fVar17)
                        ,fVar38 / fVar32);
    }
  }
  else {
LAB_031bfd98:
    uVar2 = 1;
    uVar40 = uVar46;
  }
  fVar38 = fVar16 * (float)uVar40 - fVar27;
  if ((bool)(~(fVar25 <= fVar38) & 1)) {
    if (fVar38 <= 0.0) {
      uVar46 = 0;
      uVar2 = 8;
      goto LAB_031bfde4;
    }
    uVar46 = CONCAT44((fVar17 * (float)((ulong)uVar40 >> 0x20) - fVar19) / fVar26,fVar38 / fVar25);
  }
  else {
    uVar2 = 4;
LAB_031bfde4:
    fVar38 = fVar22 + fVar16 * (float)uVar46;
    if (fVar38 <= 0.0) {
      uVar2 = uVar2 | 2;
      uVar40 = 0;
    }
    else if ((bool)(~(fVar21 <= fVar38) & 1)) {
      uVar40 = CONCAT44((fVar24 + fVar17 * (float)((ulong)uVar46 >> 0x20)) / fVar23,fVar38 / fVar21)
      ;
    }
    else {
      uVar2 = uVar2 | 1;
      uVar40 = NEON_fmov(0x3f800000,4);
    }
  }
  param_1 = param_1 + param_2;
  fVar51 = (float)((ulong)uVar40 >> 0x20);
  fVar38 = (float)((ulong)uVar10 >> 0x20);
  fVar36 = (float)((ulong)uVar46 >> 0x20);
  fVar39 = fVar28 + fVar6 * (float)uVar40;
  fVar41 = fVar20 + fVar7 * fVar51;
  fVar43 = fVar37 + fVar9 * (float)uVar40;
  fVar50 = (float)((ulong)uVar18 >> 0x20);
  fVar44 = fVar50 + fVar38 * fVar51;
  fVar51 = fVar39 - (fVar45 + fVar12 * (float)uVar46);
  fVar56 = fVar41 - (fVar56 + fVar13 * fVar36);
  fVar57 = fVar43 - (fVar57 + fVar14 * (float)uVar46);
  fVar58 = fVar44 - (fVar58 + fVar15 * fVar36);
  uVar34 = (undefined4)((ulong)param_5[3] >> 0x20);
  *(float *)(param_5 + 3) = fVar57;
  *(float *)((long)param_5 + 0x1c) = fVar58;
  *(float *)(param_5 + 2) = fVar51;
  *(float *)((long)param_5 + 0x14) = fVar56;
  uVar46 = NEON_fmax(CONCAT44(uVar34,uVar34),0x3400000034000000,4);
  fVar45 = SQRT(fVar51 * fVar51 + fVar56 * fVar56 + fVar57 * fVar57);
  fVar49 = SQRT(fVar51 * fVar51 + fVar56 * fVar56 + fVar57 * fVar57);
  fVar36 = fVar45 - param_1;
  if ((float)uVar46 <= fVar36) {
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar45 = (float)uVar3 / fVar45;
    param_5[3] = CONCAT44(fVar36,fVar57 * fVar45);
    param_5[2] = CONCAT44(fVar56 * ((float)((ulong)uVar3 >> 0x20) / fVar49),fVar51 * fVar45);
    return;
  }
  if (fVar45 < 1.1920929e-07) {
    auVar52._4_4_ = fVar7;
    auVar52._0_4_ = fVar6;
    auVar52._8_8_ = uVar10;
    auVar53._0_12_ = auVar52._0_12_;
    auVar53._12_4_ = 0;
    auVar47._8_8_ = _UNK_03caaa68;
    auVar47._0_8_ = _DAT_03caaa60;
    auVar48 = a64_TBL(ZEXT816(0),auVar53,auVar47);
    auVar54._8_4_ = (int)_UNK_03cabbb8;
    auVar54._0_8_ = _DAT_03cabbb0;
    auVar54._12_4_ = (int)((ulong)_UNK_03cabbb8 >> 0x20);
    auVar54 = a64_TBL(ZEXT816(0),auVar53,auVar54);
    fVar58 = auVar54._0_4_;
    fVar45 = fVar58 * fVar58;
    fVar56 = auVar54._4_4_ * auVar54._4_4_;
    uVar59 = (undefined1)((uint)fVar56 >> 8);
    uVar60 = (undefined1)((uint)fVar56 >> 0x10);
    uVar61 = (undefined1)((uint)fVar56 >> 0x18);
    fVar57 = auVar54._8_4_ * auVar54._8_4_;
    fVar51 = auVar54._12_4_ * auVar54._12_4_;
    auVar62[4] = SUB41(fVar56,0);
    auVar62._0_4_ = fVar45;
    auVar62[5] = uVar59;
    auVar62[6] = uVar60;
    auVar62[7] = uVar61;
    auVar62._8_4_ = fVar57;
    auVar62._12_4_ = fVar51;
    auVar1[4] = SUB41(fVar56,0);
    auVar1._0_4_ = fVar45;
    auVar1[5] = uVar59;
    auVar1[6] = uVar60;
    auVar1[7] = uVar61;
    auVar1._8_4_ = fVar57;
    auVar1._12_4_ = fVar51;
    auVar62 = NEON_ext(auVar62,auVar1,8,1);
    fVar57 = auVar62._0_4_ + auVar62._4_4_;
    auVar29._4_12_ = auVar48._4_12_;
    auVar29._0_4_ = -auVar48._0_4_;
    auVar55._4_12_ = auVar54._4_12_;
    auVar55._0_4_ = -fVar58;
    uVar35 = CONCAT44(-(uint)(fVar11 < fVar45 + fVar56 + fVar57),
                      -(uint)(fVar8 < fVar45 + fVar56 + fVar57)) & 0x100000001;
    iVar33 = (int)uVar35;
    iVar30 = (int)(uVar35 >> 0x20);
    auVar48._0_4_ = (iVar33 << 0x1f) >> 0x1f;
    auVar48._4_4_ = (iVar30 << 0x1f) >> 0x1f;
    auVar48._8_4_ = (iVar33 << 0x1f) >> 0x1f;
    auVar48._12_4_ = (iVar30 << 0x1f) >> 0x1f;
    auVar29 = auVar29 ^ (auVar29 ^ auVar55) & auVar48;
    fVar51 = auVar29._0_4_;
    fVar56 = auVar29._4_4_;
    fVar57 = auVar29._8_4_;
    fVar8 = fVar51 * fVar51 + fVar56 * fVar56 + fVar57 * fVar57;
    fVar45 = 0.0;
    fVar49 = 0.0;
    if (fVar8 == 0.0) {
      fVar51 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      fVar58 = 0.0;
    }
    else {
      fVar8 = SQRT(fVar8);
      fVar58 = SQRT(fVar51 * fVar51 + fVar56 * fVar56 + fVar57 * fVar57);
      fVar51 = fVar51 / fVar8;
      fVar56 = fVar56 / fVar58;
      fVar57 = fVar57 / fVar8;
      fVar58 = auVar29._12_4_ / fVar58;
    }
  }
  else {
    uVar46 = NEON_fmov(0x3f800000,4);
    fVar8 = (float)uVar46 / fVar45;
    fVar11 = (float)((ulong)uVar46 >> 0x20) / fVar49;
    fVar51 = fVar51 * fVar8;
    fVar56 = fVar56 * fVar11;
    fVar57 = fVar57 * fVar8;
    fVar58 = fVar58 * fVar11;
  }
  param_5[1] = CONCAT44(fVar44 + fVar58 * (param_2 - fVar49),fVar43 + fVar57 * (param_2 - fVar45));
  *param_5 = CONCAT44(fVar41 + fVar56 * (param_2 - fVar49),fVar39 + fVar51 * (param_2 - fVar45));
  *(float *)(param_5 + 3) = fVar57;
  *(float *)((long)param_5 + 0x1c) = fVar36;
  *(float *)(param_5 + 2) = fVar51;
  *(float *)((long)param_5 + 0x14) = fVar56;
  if (fVar25 * fVar21 * 0.2 < fVar32) {
    return;
  }
  uVar46 = NEON_fmov(0x3f800000,4);
  iVar33 = -(uint)(fVar31 == 0.0);
  uVar34 = CONCAT13(~(byte)((uint)iVar33 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar33 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar33 >> 8),~(byte)iVar33)));
  uVar35 = CONCAT44((float)((ulong)uVar46 >> 0x20) / (fVar23 * fVar26),(float)uVar46 / fVar31) &
           CONCAT44(uVar34,uVar34);
  fVar58 = (float)uVar35;
  fVar45 = fVar25 * fVar58;
  fVar8 = (float)(uVar35 >> 0x20);
  fVar11 = fVar26 * fVar8;
  fVar58 = fVar21 * fVar58;
  fVar8 = fVar23 * fVar8;
  if ((uVar2 & 0xaaaaaaaa) == 0) {
    fVar31 = -fVar27;
    uVar40 = param_4[1];
    uVar46 = *param_4;
    if (0.0 < fVar31) {
      if (fVar25 < fVar31) goto LAB_031bffa8;
      if (0.0 < fVar22) {
        if (fVar21 < fVar22) goto LAB_031bffa8;
        if (fVar22 * fVar22 * fVar45 < fVar27 * fVar27 * fVar58) goto LAB_031c004c;
      }
      fVar28 = fVar8 * -fVar19;
      uVar46 = CONCAT44(fVar13 * fVar28 + (float)((ulong)uVar46 >> 0x20),
                        fVar12 * fVar58 * fVar31 + (float)uVar46);
      uVar40 = CONCAT44(fVar15 * fVar28 + (float)((ulong)uVar40 >> 0x20),
                        fVar14 * fVar58 * fVar31 + (float)uVar40);
    }
    else if (0.0 < fVar22) {
      if (fVar21 < fVar22) goto LAB_031bffa8;
LAB_031c004c:
      fVar31 = fVar24 * fVar11;
      uVar3 = CONCAT44(fVar20 + fVar7 * fVar31,fVar28 + fVar6 * fVar22 * fVar45);
      uVar18 = CONCAT44(fVar50 + fVar38 * fVar31,fVar37 + fVar9 * fVar22 * fVar45);
    }
    fVar37 = (float)uVar3 - (float)uVar46;
    fVar28 = (float)((ulong)uVar3 >> 0x20);
    fVar31 = fVar28 - (float)((ulong)uVar46 >> 0x20);
    fVar32 = (float)uVar18 - (float)uVar40;
    fVar20 = (float)((ulong)uVar18 >> 0x20);
    fVar50 = param_1 + (float)((ulong)param_5[7] >> 0x20);
    fVar39 = fVar37 * fVar37 + fVar31 * fVar31 + fVar32 * fVar32;
    if (fVar39 < fVar50 * fVar50) {
      fVar49 = SQRT(fVar39);
      fVar42 = SQRT(fVar37 * fVar37 + fVar31 * fVar31 + fVar32 * fVar32);
      fVar50 = fVar51;
      fVar41 = fVar56;
      fVar43 = fVar57;
      fVar44 = fVar36;
      if (1.1920929e-07 < fVar39) {
        if (fVar39 == 0.0) {
          fVar50 = 0.0;
          fVar41 = 0.0;
          fVar43 = 0.0;
          fVar44 = 0.0;
        }
        else {
          fVar50 = fVar37 / fVar49;
          fVar41 = fVar31 / fVar42;
          fVar43 = fVar32 / fVar49;
          fVar44 = (fVar20 - (float)((ulong)uVar40 >> 0x20)) / fVar42;
        }
      }
      param_5[5] = CONCAT44(fVar20 + (param_2 - fVar42) * fVar44,
                            (float)uVar18 + (param_2 - fVar49) * fVar43);
      param_5[4] = CONCAT44(fVar28 + (param_2 - fVar42) * fVar41,
                            (float)uVar3 + (param_2 - fVar49) * fVar50);
      *(float *)(param_5 + 7) = fVar43;
      *(float *)((long)param_5 + 0x3c) = fVar49 - param_1;
      *(float *)(param_5 + 6) = fVar50;
      *(float *)((long)param_5 + 0x34) = fVar41;
    }
  }
LAB_031bffa8:
  if ((uVar2 & 0x55555555) != 0) {
    return;
  }
  fVar28 = (fVar27 + fVar25) - fVar16;
  fVar16 = (fVar21 - fVar22) - fVar16;
  uVar18 = param_4[3];
  uVar3 = param_4[2];
  if (0.0 < fVar28) {
    if (fVar25 < fVar28) {
      return;
    }
    if (0.0 < fVar16) {
      if (fVar21 < fVar16) {
        return;
      }
      if (fVar16 * fVar16 * fVar45 < fVar28 * fVar28 * fVar58) goto LAB_031c009c;
    }
    fVar8 = ((fVar19 + fVar26) - fVar17) * fVar8;
    uVar3 = CONCAT44((float)((ulong)uVar3 >> 0x20) - fVar13 * fVar8,
                     (float)uVar3 - fVar12 * fVar28 * fVar58);
    uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar15 * fVar8,
                      (float)uVar18 - fVar14 * fVar28 * fVar58);
  }
  else {
    if (fVar16 <= 0.0) goto LAB_031c014c;
    if (fVar21 < fVar16) {
      return;
    }
LAB_031c009c:
    fVar11 = ((fVar23 - fVar24) - fVar17) * fVar11;
    uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) - fVar7 * fVar11,
                     (float)uVar4 - fVar6 * fVar16 * fVar45);
    uVar5 = CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar38 * fVar11,
                     (float)uVar5 - fVar9 * fVar16 * fVar45);
  }
LAB_031c014c:
  fVar8 = (float)uVar4 - (float)uVar3;
  fVar6 = (float)((ulong)uVar4 >> 0x20);
  fVar11 = fVar6 - (float)((ulong)uVar3 >> 0x20);
  fVar12 = (float)uVar5 - (float)uVar18;
  fVar7 = (float)((ulong)uVar5 >> 0x20);
  fVar13 = param_1 + (float)((ulong)param_5[0xb] >> 0x20);
  fVar14 = fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12;
  if (fVar13 * fVar13 <= fVar14) {
    return;
  }
  fVar13 = SQRT(fVar14);
  fVar15 = SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12);
  if (1.1920929e-07 < fVar14) {
    if (fVar14 == 0.0) {
      fVar51 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      fVar36 = 0.0;
    }
    else {
      fVar51 = fVar8 / fVar13;
      fVar56 = fVar11 / fVar15;
      fVar57 = fVar12 / fVar13;
      fVar36 = (fVar7 - (float)((ulong)uVar18 >> 0x20)) / fVar15;
    }
  }
  param_5[9] = CONCAT44(fVar7 + (param_2 - fVar15) * fVar36,
                        (float)uVar5 + (param_2 - fVar13) * fVar57);
  param_5[8] = CONCAT44(fVar6 + (param_2 - fVar15) * fVar56,
                        (float)uVar4 + (param_2 - fVar13) * fVar51);
  *(float *)(param_5 + 0xb) = fVar57;
  *(float *)((long)param_5 + 0x5c) = fVar13 - param_1;
  *(float *)(param_5 + 10) = fVar51;
  *(float *)((long)param_5 + 0x54) = fVar56;
  return;
}


