/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02200b10; name: FUN_02200b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02200b10(float param_1,long *param_2,undefined8 param_3,double *param_4,
                 undefined1 (*param_5) [16],undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  float fVar15;
  byte bVar20;
  float fVar21;
  float fVar22;
  byte bVar23;
  ulong uVar16;
  float fVar24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar25;
  undefined1 auVar19 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar40;
  int iVar44;
  undefined8 uVar41;
  int iVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  undefined1 auVar48 [16];
  float fVar49;
  
  lVar1 = (**(code **)(*param_2 + 0x80))();
  pauVar2 = (undefined1 (*) [16])
            (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(lVar1 + 0x80));
  uVar5 = 0;
  uVar6 = 0;
  fVar29 = *(float *)(lVar1 + 0xc);
  iVar40 = -(uint)(*(float *)(lVar1 + 0xa0) == 0.0);
  iVar44 = -(uint)(*(float *)(lVar1 + 0xa4) == 0.0);
  iVar45 = -(uint)(*(float *)(lVar1 + 0xa8) == 0.0);
  fVar26 = *(float *)(lVar1 + 0x1c);
  fVar34 = *(float *)(lVar1 + 0x2c);
  if (CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
               (byte)((uint)iVar45 >> 0x18),
               CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                        (byte)((uint)iVar45 >> 0x10),
                        CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar40 >> 8) &
                                 (byte)((uint)iVar45 >> 8),
                                 (byte)iVar44 & (byte)iVar40 & (byte)iVar45))) != 0) {
    iVar40 = -(uint)(fVar29 == 0.0);
    iVar44 = -(uint)(fVar26 == 0.0);
    iVar45 = -(uint)(fVar34 == 0.0);
    if (CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                 (byte)((uint)iVar45 >> 0x18),
                 CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                          (byte)((uint)iVar45 >> 0x10),
                          CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar40 >> 8) &
                                   (byte)((uint)iVar45 >> 8),
                                   (byte)iVar44 & (byte)iVar40 & (byte)iVar45))) != 0) {
      auVar7._0_4_ = (float)(*param_4 -
                            ((double)*(float *)(lVar1 + 0x30) + (double)*(float *)(lVar1 + 0x40)));
      auVar7._4_4_ = (float)(param_4[1] -
                            ((double)*(float *)(lVar1 + 0x34) + (double)*(float *)(lVar1 + 0x44)));
      auVar7._8_4_ = (float)(param_4[2] -
                            ((double)*(float *)(lVar1 + 0x38) + (double)*(float *)(lVar1 + 0x48)));
      fVar26 = *(float *)*pauVar2;
      fVar29 = *(float *)(*pauVar2 + 4);
      fVar34 = *(float *)(*pauVar2 + 8);
      fVar25 = *(float *)(*pauVar2 + 0xc);
      goto LAB_02200da0;
    }
  }
  auVar8 = *param_5;
  fVar3 = auVar8._0_4_;
  fVar4 = auVar8._4_4_;
  fVar15 = auVar8._8_4_;
  fVar21 = auVar8._12_4_;
  auVar18 = NEON_ext(auVar8,auVar8,8,1);
  fVar49 = auVar18._4_4_ * auVar18._4_4_;
  uVar35 = NEON_ext(auVar8._0_8_,auVar18._0_8_,4,1);
  uVar41 = NEON_ext(CONCAT44(fVar26,fVar29),(ulong)(uint)fVar34,4,1);
  fVar24 = fVar49 + -0.5;
  fVar22 = fVar29 * fVar3 + fVar26 * fVar4 + fVar34 * fVar15;
  auVar32._0_4_ = (float)uVar41 * fVar3 - fVar29 * (float)uVar35;
  auVar32._4_4_ = (float)((ulong)uVar41 >> 0x20) * fVar4 - fVar26 * (float)((ulong)uVar35 >> 0x20);
  auVar32._8_4_ = fVar29 * fVar15 - fVar34 * fVar3;
  auVar32._12_4_ = fVar26 * fVar21 - fVar4 * 0.0;
  auVar18 = NEON_ext(auVar32,auVar32,4,1);
  auVar8._0_4_ = -*(float *)(lVar1 + 0xa0);
  auVar8._4_4_ = -*(float *)(lVar1 + 0xa4);
  auVar8._8_4_ = -*(float *)(lVar1 + 0xa8);
  auVar8._12_4_ = *(undefined4 *)(lVar1 + 0xac);
  auVar46._8_8_ = _UNK_03caab38;
  auVar46._0_8_ = _DAT_03caab30;
  auVar48._8_8_ = _UNK_03caa778;
  auVar48._0_8_ = _DAT_03caa770;
  auVar46 = a64_TBL(ZEXT816(0),auVar8,auVar46);
  fVar25 = fVar29 * fVar24 + fVar3 * fVar22 + auVar18._0_4_ * fVar21;
  fVar26 = fVar26 * (fVar49 + -0.5) + fVar4 * (fVar29 * fVar3 + fVar26 * fVar4 + fVar34 * fVar15) +
           auVar18._4_4_ * fVar21;
  fVar29 = fVar34 * fVar24 + fVar15 * fVar22 + auVar32._0_4_ * fVar21;
  auVar39._8_8_ = _UNK_03caab28;
  auVar39._0_8_ = _DAT_03caab20;
  auVar42._8_8_ = _UNK_03caa6a8;
  auVar42._0_8_ = _DAT_03caa6a0;
  auVar39 = a64_TBL(ZEXT816(0),*pauVar2,auVar39);
  auVar32 = a64_TBL(ZEXT816(0),*pauVar2,auVar48);
  auVar42 = a64_TBL(ZEXT816(0),auVar8,auVar42);
  auVar7._0_4_ = (float)((*param_4 - *(double *)pauVar2[1]) + (double)(fVar25 + fVar25));
  auVar7._4_4_ = (float)((param_4[1] - *(double *)(pauVar2[1] + 8)) + (double)(fVar26 + fVar26));
  auVar7._8_4_ = (float)((param_4[2] - *(double *)pauVar2[2]) + (double)(fVar29 + fVar29));
  auVar28._8_8_ = _UNK_03cab148;
  auVar28._0_8_ = _DAT_03cab140;
  auVar18._0_4_ = auVar32._0_4_ * auVar46._0_4_ - auVar39._0_4_ * auVar42._0_4_;
  auVar18._4_4_ = auVar32._4_4_ * auVar46._4_4_ - auVar39._4_4_ * auVar42._4_4_;
  auVar18._8_4_ = auVar32._8_4_ * auVar46._8_4_ - auVar39._8_4_ * auVar42._8_4_;
  auVar18._12_4_ = auVar32._12_4_ * auVar46._12_4_ - auVar39._12_4_ * auVar42._12_4_;
  auVar8 = a64_TBL(ZEXT816(0),auVar18,auVar28);
  fVar25 = auVar8._12_4_ - (auVar32._12_4_ * auVar42._12_4_ + auVar39._12_4_ * auVar46._12_4_);
  fVar26 = -(auVar8._0_4_ - (auVar32._0_4_ * auVar42._0_4_ + auVar39._0_4_ * auVar46._0_4_));
  fVar29 = -(auVar8._4_4_ - (auVar32._4_4_ * auVar42._4_4_ + auVar39._4_4_ * auVar46._4_4_));
  fVar34 = -(auVar8._8_4_ - (auVar32._8_4_ * auVar42._8_4_ + auVar39._8_4_ * auVar46._8_4_));
LAB_02200da0:
  auVar27._8_8_ = _UNK_03caab28;
  auVar27._0_8_ = _DAT_03caab20;
  auVar17._0_4_ = -fVar26;
  auVar17._4_4_ = -fVar29;
  auVar17._8_4_ = -fVar34;
  param_6[1] = (ulong)(uint)(auVar7._8_4_ * param_1);
  *param_6 = CONCAT44(auVar7._4_4_ * param_1,auVar7._0_4_ * param_1);
  auVar36._8_8_ = _UNK_03caa778;
  auVar36._0_8_ = _DAT_03caa770;
  auVar17._12_4_ = fVar25;
  auVar31._8_8_ = _UNK_03caa6a8;
  auVar31._0_8_ = _DAT_03caa6a0;
  auVar28 = a64_TBL(ZEXT816(0),*param_5,auVar27);
  auVar8 = a64_TBL(ZEXT816(0),*param_5,auVar36);
  auVar37._8_8_ = _UNK_03caab38;
  auVar37._0_8_ = _DAT_03caab30;
  auVar32 = a64_TBL(ZEXT816(0),auVar17,auVar31);
  auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar37);
  auVar38._0_4_ = auVar8._0_4_ * auVar18._0_4_ - auVar28._0_4_ * auVar32._0_4_;
  auVar38._4_4_ = auVar8._4_4_ * auVar18._4_4_ - auVar28._4_4_ * auVar32._4_4_;
  auVar38._8_4_ = auVar8._8_4_ * auVar18._8_4_ - auVar28._8_4_ * auVar32._8_4_;
  auVar38._12_4_ = auVar8._12_4_ * auVar18._12_4_ - auVar28._12_4_ * auVar32._12_4_;
  auVar43._8_8_ = _UNK_03cab148;
  auVar43._0_8_ = _DAT_03cab140;
  auVar39 = a64_TBL(ZEXT816(0),auVar38,auVar43);
  fVar25 = auVar39._12_4_ - (auVar8._12_4_ * auVar32._12_4_ + auVar28._12_4_ * auVar18._12_4_);
  fVar26 = -(auVar39._0_4_ - (auVar8._0_4_ * auVar32._0_4_ + auVar28._0_4_ * auVar18._0_4_));
  fVar29 = -(auVar39._4_4_ - (auVar8._4_4_ * auVar32._4_4_ + auVar28._4_4_ * auVar18._4_4_));
  fVar34 = -(auVar39._8_4_ - (auVar8._8_4_ * auVar32._8_4_ + auVar28._8_4_ * auVar18._8_4_));
  if (0.9396926 <= ABS(fVar25)) {
    param_1 = param_1 + param_1;
    fVar3 = fVar26 * param_1;
    fVar4 = fVar29 * param_1;
    fVar15 = fVar34 * param_1;
    param_1 = fVar25 * param_1;
    bVar20 = (byte)(-(uint)(fVar25 < 0.0) >> 0x18);
    bVar23 = (byte)(-(uint)(fVar25 < 0.0) >> 0x18);
    uVar16 = CONCAT17(bVar23,(uint7)(bVar20 & 0x80) << 0x18) & 0x80ffffffffffffff;
    iVar40 = -(uint)(fVar34 * fVar34 + fVar26 * fVar26 + fVar29 * fVar29 < 5.820766e-11);
    iVar44 = -(uint)(fVar34 * fVar34 + fVar26 * fVar26 + fVar29 * fVar29 < 5.820766e-11);
    bVar9 = (byte)((uint)iVar40 >> 8);
    bVar10 = (byte)((uint)iVar40 >> 0x10);
    bVar11 = (byte)((uint)iVar40 >> 0x18);
    bVar12 = (byte)((uint)iVar44 >> 8);
    bVar13 = (byte)((uint)iVar44 >> 0x10);
    bVar14 = (byte)((uint)iVar44 >> 0x18);
    uVar5 = CONCAT17(((byte)(uVar16 >> 0x38) ^ (byte)((uint)fVar4 >> 0x18)) & ~bVar14,
                     CONCAT16((byte)((uint)fVar4 >> 0x10) & ~bVar13,
                              CONCAT15((byte)((uint)fVar4 >> 8) & ~bVar12,
                                       CONCAT14(SUB41(fVar4,0) & ~(byte)iVar44,
                                                CONCAT13(((byte)(uVar16 >> 0x18) ^
                                                         (byte)((uint)fVar3 >> 0x18)) & ~bVar11,
                                                         CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                                                  ~bVar10,CONCAT11((byte)((uint)
                                                  fVar3 >> 8) & ~bVar9,
                                                  SUB41(fVar3,0) & ~(byte)iVar40)))))));
    uVar6 = CONCAT17((bVar23 & 0x80 ^ (byte)((uint)param_1 >> 0x18)) & ~bVar14,
                     CONCAT16((byte)((uint)param_1 >> 0x10) & ~bVar13,
                              CONCAT15((byte)((uint)param_1 >> 8) & ~bVar12,
                                       CONCAT14(SUB41(param_1,0) & ~(byte)iVar44,
                                                CONCAT13((bVar20 & 0x80 ^
                                                         (byte)((uint)fVar15 >> 0x18)) & ~bVar11,
                                                         CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                                  ~bVar10,CONCAT11((byte)((uint)
                                                  fVar15 >> 8) & ~bVar9,
                                                  SUB41(fVar15,0) & ~(byte)iVar40)))))));
  }
  else {
    auVar19._0_4_ = fVar26 * fVar26;
    auVar19._4_4_ = fVar29 * fVar29;
    auVar19._8_4_ = fVar34 * fVar34;
    auVar19._12_4_ = fVar25 * fVar25;
    auVar8 = NEON_ext(auVar19,auVar19,8,1);
    fVar4 = auVar8._0_4_ + auVar8._4_4_;
    fVar3 = auVar19._0_4_ + auVar19._4_4_ + fVar4;
    fVar15 = 0.0;
    fVar22 = 0.0;
    fVar24 = 0.0;
    fVar21 = 0.0;
    if (fVar3 != 0.0) {
      fVar3 = SQRT(fVar3);
      fVar21 = SQRT(auVar19._0_4_ + auVar19._4_4_ + fVar4);
      fVar15 = fVar26 / fVar3;
      fVar22 = fVar29 / fVar21;
      fVar24 = fVar34 / fVar3;
      fVar21 = fVar25 / fVar21;
    }
    fVar26 = fVar15 * fVar15 + fVar22 * fVar22 + fVar24 * fVar24;
    if (fVar26 != 0.0) {
      fVar26 = SQRT(fVar26);
      fVar29 = SQRT(fVar15 * fVar15 + fVar22 * fVar22 + fVar24 * fVar24);
      uVar5 = CONCAT44(fVar22 / fVar29,fVar15 / fVar26);
      uVar6 = CONCAT44(fVar21 / fVar29,fVar24 / fVar26);
    }
    fVar26 = ABS(fVar21);
    auVar18 = NEON_fmov(0x3f800000,4);
    auVar33._0_4_ = ABS(fVar26);
    auVar33._4_4_ = ABS(ABS(fVar21));
    auVar33._8_4_ = ABS(fVar26);
    auVar33._12_4_ = ABS(ABS(fVar21));
    auVar8 = NEON_fmin(auVar33,auVar18,4);
    fVar29 = auVar8._0_4_;
    fVar34 = (auVar18._0_4_ - fVar29) * 0.5;
    uVar47 = -(uint)(0.5 < fVar29);
    bVar9 = (char)((fVar21 < 0.0) * -0x80) >> 7;
    bVar10 = (char)((fVar21 < 0.0) * -0x80) >> 7;
    uVar16 = CONCAT17(bVar10,(uint7)(bVar9 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar25 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(fVar29 * fVar29)) & ~uVar47);
    fVar34 = (float)((uint)SQRT(fVar34) ^ ((uint)SQRT(fVar34) ^ (uint)fVar29) & ~uVar47);
    fVar34 = fVar34 + fVar34 * fVar25 * (fVar25 * (fVar25 * (fVar25 * (fVar25 * 0.0421632 +
                                                                      0.024181312) + 0.045470025) +
                                                  0.074953005) + 0.16666752);
    uVar30 = auVar8._0_8_ ^
             (auVar8._0_8_ ^
             (ulong)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)(1.5707964 - (fVar34 + fVar34))) & uVar47)
             ) & ~(ulong)-(uint)(fVar29 < 0.0001);
    fVar26 = 1.5707964 -
             (float)CONCAT13((byte)(-(uint)(fVar26 < 0.0) >> 0x18) & 0x80 ^ (byte)(uVar30 >> 0x18),
                             (int3)uVar30);
    fVar26 = fVar26 + fVar26;
    fVar34 = param_1 * fVar26;
    param_1 = param_1 * fVar26;
    fVar26 = (float)CONCAT13((byte)((ulong)uVar5 >> 0x18) ^ (byte)(uVar16 >> 0x18),(int3)uVar5);
    fVar29 = (float)CONCAT13((byte)((ulong)uVar6 >> 0x18) ^ bVar9 & 0x80,(int3)uVar6);
    uVar5 = CONCAT44(param_1 * (float)(CONCAT17((byte)((ulong)uVar5 >> 0x38) ^
                                                (byte)(uVar16 >> 0x38),
                                                CONCAT16((char)((ulong)uVar5 >> 0x30),
                                                         CONCAT15((char)((ulong)uVar5 >> 0x28),
                                                                  CONCAT14((char)((ulong)uVar5 >>
                                                                                 0x20),fVar26)))) >>
                                      0x20),fVar34 * fVar26);
    uVar6 = CONCAT44(param_1 * (float)(CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ bVar10 & 0x80,
                                                CONCAT16((char)((ulong)uVar6 >> 0x30),
                                                         CONCAT15((char)((ulong)uVar6 >> 0x28),
                                                                  CONCAT14((char)((ulong)uVar6 >>
                                                                                 0x20),fVar29)))) >>
                                      0x20),fVar34 * fVar29);
  }
  param_7[1] = uVar6;
  *param_7 = uVar5;
  return;
}


