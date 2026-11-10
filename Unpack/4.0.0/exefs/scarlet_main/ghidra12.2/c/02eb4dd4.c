/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb4dd4; name: FUN_02eb4dd4
 */


undefined8
FUN_02eb4dd4(long param_1,undefined8 *param_2,float *param_3,undefined1 (*param_4) [16],
            undefined8 *param_5,undefined8 param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar4 = *param_4;
  auVar3 = param_4[1];
  fVar26 = (auVar3._4_4_ - auVar4._4_4_) * 0.5;
  uStack_18 = CONCAT44((auVar3._12_4_ - auVar4._12_4_) * 0.5,(auVar3._8_4_ - auVar4._8_4_) * 0.5);
  fVar28 = (auVar3._4_4_ + auVar4._4_4_) * 0.5;
  uVar7 = (undefined1)((uint)fVar28 >> 8);
  uVar8 = (undefined1)((uint)fVar28 >> 0x10);
  uVar9 = (undefined1)((uint)fVar28 >> 0x18);
  uStack_28 = CONCAT44((auVar3._12_4_ + auVar4._12_4_) * 0.5,(auVar3._8_4_ + auVar4._8_4_) * 0.5);
  local_30 = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(SUB41(fVar28,0),
                                                                   (auVar3._0_4_ + auVar4._0_4_) *
                                                                   0.5))));
  uStack_20 = CONCAT17((char)((uint)fVar26 >> 0x18),
                       CONCAT16((char)((uint)fVar26 >> 0x10),
                                CONCAT15((char)((uint)fVar26 >> 8),
                                         CONCAT14(SUB41(fVar26,0),
                                                  (auVar3._0_4_ - auVar4._0_4_) * 0.5))));
  fVar18 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  fVar16 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar24 = (float)*(undefined8 *)(param_1 + 0xa8);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  fVar20 = (float)*(undefined8 *)(param_1 + 0xa0);
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
  iVar19 = -(uint)(fVar20 < fVar16);
  iVar21 = -(uint)(fVar22 < fVar17);
  iVar23 = -(uint)(fVar24 < fVar18);
  if (CONCAT13((byte)((uint)iVar21 >> 0x18) | (byte)((uint)iVar19 >> 0x18) |
               (byte)((uint)iVar23 >> 0x18),
               CONCAT12((byte)((uint)iVar21 >> 0x10) | (byte)((uint)iVar19 >> 0x10) |
                        (byte)((uint)iVar23 >> 0x10),
                        CONCAT11((byte)((uint)iVar21 >> 8) | (byte)((uint)iVar19 >> 8) |
                                 (byte)((uint)iVar23 >> 8),
                                 (byte)iVar21 | (byte)iVar19 | (byte)iVar23))) == 0) {
    fVar14 = (float)param_2[1];
    fVar15 = (float)((ulong)param_2[1] >> 0x20);
    fVar1 = (float)*param_2;
    fVar10 = (float)((ulong)*param_2 >> 0x20);
    fVar11 = (fVar20 - fVar16) * 0.5;
    fVar12 = (fVar22 - fVar17) * 0.5;
    fVar13 = (fVar24 - fVar18) * 0.5;
    fVar25 = (float)param_2[2];
    fVar27 = (float)((ulong)param_2[2] >> 0x20);
    fVar29 = (float)param_2[3];
    fVar30 = (float)((ulong)param_2[3] >> 0x20);
    fVar20 = (fVar16 + fVar20) * 0.5;
    fVar22 = (fVar17 + fVar22) * 0.5;
    fVar24 = (fVar18 + fVar24) * 0.5;
    fVar16 = (float)param_2[4];
    fVar17 = (float)((ulong)param_2[4] >> 0x20);
    fVar18 = (float)param_2[5];
    fVar35 = (float)((ulong)param_2[5] >> 0x20);
    fVar31 = ABS(fVar16 * fVar13) + ABS(fVar1 * fVar11) + ABS(fVar25 * fVar12);
    fVar33 = ABS(fVar17 * fVar13) + ABS(fVar10 * fVar11) + ABS(fVar27 * fVar12);
    fVar34 = ABS(fVar18 * fVar13) + ABS(fVar14 * fVar11) + ABS(fVar29 * fVar12);
    fVar13 = ABS(fVar35 * fVar13) + ABS(fVar15 * fVar11) + ABS(fVar30 * fVar12);
    fVar16 = (float)param_2[6] + fVar16 * fVar24 + fVar1 * fVar20 + fVar25 * fVar22;
    fVar17 = (float)((ulong)param_2[6] >> 0x20) +
             fVar17 * fVar24 + fVar10 * fVar20 + fVar27 * fVar22;
    fVar18 = (float)param_2[7] + fVar18 * fVar24 + fVar14 * fVar20 + fVar29 * fVar22;
    fVar12 = (float)((ulong)param_2[7] >> 0x20) +
             fVar35 * fVar24 + fVar15 * fVar20 + fVar30 * fVar22;
    fVar20 = fVar31 + fVar16;
    fVar22 = fVar33 + fVar17;
    fVar24 = fVar34 + fVar18;
    fVar11 = fVar13 + fVar12;
    fVar16 = fVar16 - fVar31;
    fVar17 = fVar17 - fVar33;
    fVar18 = fVar18 - fVar34;
    fVar12 = fVar12 - fVar13;
  }
  uVar32 = NEON_fmin(CONCAT44(fVar26 + fVar22,fVar26 + fVar22),
                     CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(SUB41(fVar28,0),fVar28)))
                             ),4);
  uVar32 = NEON_fmax(CONCAT44(fVar17 - fVar26,fVar17 - fVar26),uVar32,4);
  fVar26 = fVar28 - (float)uVar32;
  fVar28 = fVar28 - (float)((ulong)uVar32 >> 0x20);
  if (fVar26 * fVar26 <= (float)*param_5) {
    fVar13 = (fVar22 - fVar17) + ABS(fVar26);
    fVar1 = (fVar22 - fVar17) + ABS(fVar28);
    auVar2._4_4_ = fVar17;
    auVar2._0_4_ = fVar16;
    auVar2._8_4_ = fVar18;
    auVar2._12_4_ = fVar12;
    auVar4 = NEON_fmax(auVar2,auVar4,4);
    auVar5._4_4_ = fVar17;
    auVar5._0_4_ = fVar16;
    auVar5._8_4_ = fVar18;
    auVar5._12_4_ = fVar12;
    auVar2 = NEON_fmax(auVar5,auVar3,4);
    auVar3._4_4_ = fVar22;
    auVar3._0_4_ = fVar20;
    auVar3._8_4_ = fVar24;
    auVar3._12_4_ = fVar11;
    auVar5 = NEON_fmin(auVar3,auVar4,4);
    fVar26 = SQRT(fVar13 * fVar13 - fVar26 * fVar26);
    fVar28 = SQRT(fVar1 * fVar1 - fVar28 * fVar28);
    auVar4._4_4_ = fVar22;
    auVar4._0_4_ = fVar20;
    auVar4._8_4_ = fVar24;
    auVar4._12_4_ = fVar11;
    auVar3 = NEON_fmin(auVar4,auVar2,4);
    fVar20 = fVar26 + auVar3._0_4_;
    fVar24 = fVar28 + auVar3._4_4_;
    fVar22 = fVar26 + auVar3._8_4_;
    fVar17 = (float)(CONCAT17((char)((uint)fVar28 >> 0x18),
                              CONCAT16((char)((uint)fVar28 >> 0x10),
                                       CONCAT15((char)((uint)fVar28 >> 8),
                                                CONCAT14(SUB41(fVar28,0),fVar26)))) >> 0x20);
    fVar11 = fVar17 + auVar3._12_4_;
    fVar16 = auVar5._0_4_ - fVar26;
    fVar28 = auVar5._4_4_ - fVar28;
    fVar26 = auVar5._8_4_ - fVar26;
    fVar17 = auVar5._12_4_ - fVar17;
    iVar19 = -(uint)(fVar20 < fVar16);
    iVar21 = -(uint)(fVar24 < fVar28);
    iVar23 = -(uint)(fVar22 < fVar26);
    if (CONCAT13((byte)((uint)iVar21 >> 0x18) | (byte)((uint)iVar19 >> 0x18) |
                 (byte)((uint)iVar23 >> 0x18),
                 CONCAT12((byte)((uint)iVar21 >> 0x10) | (byte)((uint)iVar19 >> 0x10) |
                          (byte)((uint)iVar23 >> 0x10),
                          CONCAT11((byte)((uint)iVar21 >> 8) | (byte)((uint)iVar19 >> 8) |
                                   (byte)((uint)iVar23 >> 8),
                                   (byte)iVar21 | (byte)iVar19 | (byte)iVar23))) == 0) {
      fVar11 = (fVar16 + fVar20) * 0.5;
      fVar17 = (fVar28 + fVar24) * 0.5;
      fVar10 = (fVar26 + fVar22) * 0.5;
      fVar20 = (fVar20 - fVar16) * 0.5;
      fVar28 = (fVar24 - fVar28) * 0.5;
      fVar26 = (fVar22 - fVar26) * 0.5;
      fVar14 = (float)*(undefined8 *)(param_3 + 10);
      fVar15 = (float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
      fVar22 = (float)*(undefined8 *)(param_3 + 8);
      fVar24 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
      fVar18 = ABS(fVar22 * fVar26) + ABS(*param_3 * fVar20) + ABS(param_3[4] * fVar28);
      fVar12 = ABS(fVar24 * fVar26) + ABS(param_3[1] * fVar20) + ABS(param_3[5] * fVar28);
      fVar13 = ABS(fVar14 * fVar26) + ABS(param_3[2] * fVar20) + ABS(param_3[6] * fVar28);
      fVar1 = ABS(fVar15 * fVar26) + ABS(param_3[3] * fVar20) + ABS(param_3[7] * fVar28);
      fVar16 = (float)*(undefined8 *)(param_3 + 0xc) +
               fVar22 * fVar10 + *param_3 * fVar11 + param_3[4] * fVar17;
      fVar28 = (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20) +
               fVar24 * fVar10 + param_3[1] * fVar11 + param_3[5] * fVar17;
      fVar26 = (float)*(undefined8 *)(param_3 + 0xe) +
               fVar14 * fVar10 + param_3[2] * fVar11 + param_3[6] * fVar17;
      fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 0xe) >> 0x20) +
               fVar15 * fVar10 + param_3[3] * fVar11 + param_3[7] * fVar17;
      fVar20 = fVar18 + fVar16;
      fVar24 = fVar12 + fVar28;
      fVar22 = fVar13 + fVar26;
      fVar11 = fVar1 + fVar17;
      fVar16 = fVar16 - fVar18;
      fVar28 = fVar28 - fVar12;
      fVar26 = fVar26 - fVar13;
      fVar17 = fVar17 - fVar1;
    }
    fVar18 = (float)*(undefined8 *)(param_1 + 0x70);
    fVar16 = fVar16 * fVar18;
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    auVar6._0_8_ = CONCAT44(fVar28 * fVar12,fVar16);
    fVar28 = (float)*(undefined8 *)(param_1 + 0x78);
    auVar6._8_4_ = fVar26 * fVar28;
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    auVar6._12_4_ = fVar17 * fVar26;
    fVar20 = fVar20 * fVar18;
    uStack_40 = CONCAT44(fVar24 * fVar12,fVar20);
    fVar22 = fVar22 * fVar28;
    uStack_38 = CONCAT44(fVar11 * fVar26,fVar22);
    uStack_48 = auVar6._8_8_;
    fVar20 = fVar20 - fVar16;
    fVar22 = fVar22 - auVar6._8_4_;
    uVar32 = NEON_fmax(CONCAT44(fVar20,fVar20),CONCAT44(fVar22,fVar22),4);
    local_50 = auVar6._0_8_;
    uVar32 = FUN_02eb46c0(1,param_1,param_2,&local_50,0x20 - LZCOUNT((int)(float)uVar32 + 1),
                          &local_30,&uStack_20,param_5,param_6);
  }
  else {
    uVar32 = 0;
  }
  return uVar32;
}


