/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f085e8; name: FUN_02f085e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f085e8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  int iVar11;
  int iVar14;
  int iVar15;
  undefined1 auVar12 [16];
  int iVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  
  auVar3 = *param_1;
  auVar8 = param_1[1];
  auVar23 = param_1[2];
  auVar31 = NEON_ext(auVar3,auVar3,8,1);
  auVar33 = NEON_ext(auVar8,auVar8,8,1);
  fVar19 = (float)(*(double *)param_2[1] -
                  ((double)*(float *)param_1[3] + (double)*(float *)param_1[4]));
  auVar12 = NEON_ext(auVar23,auVar23,8,1);
  fVar10 = (float)(*(double *)(param_2[1] + 8) -
                  ((double)*(float *)(param_1[3] + 4) + (double)*(float *)(param_1[4] + 4)));
  fVar1 = (float)(*(double *)param_2[2] -
                 ((double)*(float *)(param_1[3] + 8) + (double)*(float *)(param_1[4] + 8)));
  *(float *)(*param_1 + 0xc) = auVar31._0_4_ * fVar1 + auVar3._0_4_ * fVar19 + auVar3._4_4_ * fVar10
  ;
  *(float *)(param_1[1] + 0xc) =
       auVar33._0_4_ * fVar1 + auVar8._0_4_ * fVar19 + auVar8._4_4_ * fVar10;
  *(float *)(param_1[2] + 0xc) =
       auVar12._0_4_ * fVar1 + auVar23._0_4_ * fVar19 + auVar23._4_4_ * fVar10;
  if (param_3 == (undefined1 (*) [16])0x0) {
    fVar1 = (float)*(undefined8 *)(param_1[2] + 8);
    fVar6 = (float)*(undefined8 *)param_1[2];
    fVar20 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
    fVar10 = *(float *)*param_1;
    fVar19 = *(float *)(*param_1 + 8);
    fVar4 = *(float *)(param_1[1] + 4);
    fVar5 = *(float *)(param_1[1] + 8);
    if (fVar1 < 0.0) {
      uVar34 = NEON_fmov(0x3f800000,4);
      fVar24 = *(float *)(*param_1 + 4) + *(float *)param_1[1];
      fVar26 = (float)uVar34 - fVar1;
      if (fVar10 <= fVar4) {
        fVar26 = fVar26 - (fVar10 - fVar4);
        fVar2 = fVar5 + fVar20;
        fVar1 = fVar6 - fVar19;
        fVar10 = fVar24;
      }
      else {
        fVar2 = fVar19 + fVar6;
        fVar1 = fVar5 - fVar20;
        fVar10 = (fVar10 - fVar4) + fVar26;
        fVar26 = fVar24;
      }
    }
    else {
      uVar34 = NEON_fmov(0x3f800000,4);
      fVar26 = *(float *)(*param_1 + 4) - *(float *)param_1[1];
      fVar1 = fVar1 + (float)uVar34;
      if (-fVar4 <= fVar10) {
        fVar1 = fVar10 + fVar4 + fVar1;
        fVar2 = fVar26;
        fVar10 = fVar5 - fVar20;
        fVar26 = fVar6 - fVar19;
      }
      else {
        fVar2 = fVar1 - (fVar10 + fVar4);
        fVar1 = fVar26;
        fVar10 = fVar19 + fVar6;
        fVar26 = fVar5 + fVar20;
      }
    }
    fVar19 = fVar10 * fVar10 + fVar26 * fVar26;
    fVar5 = fVar2 * fVar2 + fVar1 * fVar1;
    fVar4 = fVar19 + fVar5;
    auVar3 = ZEXT816(0);
    fVar20 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar6 = 0.0;
    if (fVar4 != 0.0) {
      fVar4 = SQRT(fVar4);
      fVar6 = SQRT(fVar19 + fVar5);
      fVar20 = fVar10 / fVar4;
      fVar24 = fVar26 / fVar6;
      fVar25 = fVar2 / fVar4;
      fVar6 = fVar1 / fVar6;
    }
    auVar12._0_4_ = -fVar20;
    auVar12._4_4_ = -fVar24;
    auVar12._8_4_ = -fVar25;
    auVar12._12_4_ = fVar6;
    auVar23._8_8_ = _UNK_03caab28;
    auVar23._0_8_ = _DAT_03caab20;
    auVar33._8_8_ = _UNK_03caa778;
    auVar33._0_8_ = _DAT_03caa770;
    auVar30._8_8_ = _UNK_03caa6a8;
    auVar30._0_8_ = _DAT_03caa6a0;
    auVar28._8_8_ = _UNK_03caab38;
    auVar28._0_8_ = _DAT_03caab30;
    auVar23 = a64_TBL(ZEXT816(0),auVar12,auVar23);
    auVar12 = a64_TBL(ZEXT816(0),auVar12,auVar33);
    auVar33 = a64_TBL(ZEXT816(0),*param_2,auVar30);
    auVar31 = a64_TBL(ZEXT816(0),*param_2,auVar28);
    auVar29._0_4_ = auVar12._0_4_ * auVar31._0_4_ - auVar23._0_4_ * auVar33._0_4_;
    auVar29._4_4_ = auVar12._4_4_ * auVar31._4_4_ - auVar23._4_4_ * auVar33._4_4_;
    auVar29._8_4_ = auVar12._8_4_ * auVar31._8_4_ - auVar23._8_4_ * auVar33._8_4_;
    auVar29._12_4_ = auVar12._12_4_ * auVar31._12_4_ - auVar23._12_4_ * auVar33._12_4_;
    auVar32._8_8_ = _UNK_03cab148;
    auVar32._0_8_ = _DAT_03cab140;
    auVar30 = a64_TBL(ZEXT816(0),auVar29,auVar32);
    auVar8._12_4_ =
         auVar30._12_4_ - (auVar12._12_4_ * auVar33._12_4_ + auVar23._12_4_ * auVar31._12_4_);
    fVar19 = -(auVar30._0_4_ - (auVar12._0_4_ * auVar33._0_4_ + auVar23._0_4_ * auVar31._0_4_));
    fVar4 = -(auVar30._4_4_ - (auVar12._4_4_ * auVar33._4_4_ + auVar23._4_4_ * auVar31._4_4_));
    auVar8._0_8_ = CONCAT44(fVar4,fVar19);
    auVar8._8_4_ = -(auVar30._8_4_ - (auVar12._8_4_ * auVar33._8_4_ + auVar23._8_4_ * auVar31._8_4_)
                    );
    auVar31._0_4_ = fVar19 * fVar19;
    auVar31._4_4_ = fVar4 * fVar4;
    auVar31._8_4_ = auVar8._8_4_ * auVar8._8_4_;
    auVar31._12_4_ = auVar8._12_4_ * auVar8._12_4_;
    auVar23 = NEON_ext(auVar31,auVar31,8,1);
    *(long *)(param_1[10] + 8) = auVar8._8_8_;
    *(undefined8 *)param_1[10] = auVar8._0_8_;
    fVar10 = auVar23._0_4_ + auVar23._4_4_;
    fVar1 = auVar31._0_4_ + auVar31._4_4_ + fVar10;
    if (fVar1 != 0.0) {
      fVar1 = SQRT(fVar1);
      fVar10 = SQRT(auVar31._0_4_ + auVar31._4_4_ + fVar10);
      auVar3._0_4_ = fVar19 / fVar1;
      auVar3._4_4_ = fVar4 / fVar10;
      auVar3._8_4_ = auVar8._8_4_ / fVar1;
      auVar3._12_4_ = auVar8._12_4_ / fVar10;
    }
  }
  else {
    auVar3 = *param_3;
    auVar23 = *param_2;
    iVar11 = -(uint)(auVar3._0_4_ == auVar23._0_4_);
    iVar14 = -(uint)(auVar3._4_4_ == auVar23._4_4_);
    iVar15 = -(uint)(auVar3._8_4_ == auVar23._8_4_);
    auVar7._12_4_ = auVar3._12_4_;
    iVar16 = -(uint)(auVar7._12_4_ == auVar23._12_4_);
    if (CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                 (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                 CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                          (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                          CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar11 >> 8) &
                                   (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar16 >> 8),
                                   (byte)iVar14 & (byte)iVar11 & (byte)iVar15 & (byte)iVar16))) == 0
       ) {
      auVar7._0_4_ = -auVar3._0_4_;
      auVar7._4_4_ = -auVar3._4_4_;
      auVar7._8_4_ = -auVar3._8_4_;
      auVar13._8_8_ = _UNK_03caab28;
      auVar13._0_8_ = _DAT_03caab20;
      auVar17._8_8_ = _UNK_03caa778;
      auVar17._0_8_ = _DAT_03caa770;
      auVar12 = a64_TBL(ZEXT816(0),auVar7,auVar13);
      auVar8 = a64_TBL(ZEXT816(0),auVar7,auVar17);
      auVar18._8_8_ = _UNK_03caa6a8;
      auVar18._0_8_ = _DAT_03caa6a0;
      auVar21._8_8_ = _UNK_03caab38;
      auVar21._0_8_ = _DAT_03caab30;
      auVar31 = a64_TBL(ZEXT816(0),auVar23,auVar18);
      auVar3 = a64_TBL(ZEXT816(0),auVar23,auVar21);
      auVar22._0_4_ = auVar8._0_4_ * auVar3._0_4_ - auVar12._0_4_ * auVar31._0_4_;
      auVar22._4_4_ = auVar8._4_4_ * auVar3._4_4_ - auVar12._4_4_ * auVar31._4_4_;
      auVar22._8_4_ = auVar8._8_4_ * auVar3._8_4_ - auVar12._8_4_ * auVar31._8_4_;
      auVar22._12_4_ = auVar8._12_4_ * auVar3._12_4_ - auVar12._12_4_ * auVar31._12_4_;
      auVar27._8_8_ = _UNK_03cab148;
      auVar27._0_8_ = _DAT_03cab140;
      auVar23 = a64_TBL(ZEXT816(0),auVar22,auVar27);
      fVar6 = auVar23._12_4_ - (auVar8._12_4_ * auVar31._12_4_ + auVar12._12_4_ * auVar3._12_4_);
      fVar19 = -(auVar23._0_4_ - (auVar8._0_4_ * auVar31._0_4_ + auVar12._0_4_ * auVar3._0_4_));
      fVar4 = -(auVar23._4_4_ - (auVar8._4_4_ * auVar31._4_4_ + auVar12._4_4_ * auVar3._4_4_));
      fVar5 = -(auVar23._8_4_ - (auVar8._8_4_ * auVar31._8_4_ + auVar12._8_4_ * auVar3._8_4_));
      auVar9._0_4_ = fVar19 * fVar19;
      auVar9._4_4_ = fVar4 * fVar4;
      auVar9._8_4_ = fVar5 * fVar5;
      auVar9._12_4_ = fVar6 * fVar6;
      auVar3 = NEON_ext(auVar9,auVar9,8,1);
      *(float *)(param_1[10] + 8) = fVar5;
      *(float *)(param_1[10] + 0xc) = fVar6;
      *(float *)param_1[10] = fVar19;
      *(float *)(param_1[10] + 4) = fVar4;
      fVar10 = auVar3._0_4_ + auVar3._4_4_;
      fVar1 = auVar9._0_4_ + auVar9._4_4_ + fVar10;
      if (fVar1 == 0.0) {
        auVar3 = ZEXT816(0);
      }
      else {
        fVar1 = SQRT(fVar1);
        fVar10 = SQRT(auVar9._0_4_ + auVar9._4_4_ + fVar10);
        auVar3._0_4_ = fVar19 / fVar1;
        auVar3._4_4_ = fVar4 / fVar10;
        auVar3._8_4_ = fVar5 / fVar1;
        auVar3._12_4_ = fVar6 / fVar10;
      }
    }
    else {
      auVar3._8_8_ = _UNK_03cabe58;
      auVar3._0_8_ = _DAT_03cabe50;
    }
  }
  *(long *)(param_1[10] + 8) = auVar3._8_8_;
  *(long *)param_1[10] = auVar3._0_8_;
  FUN_02f1fd74();
  return;
}


