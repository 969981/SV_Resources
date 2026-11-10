/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f77ae4; name: FUN_02f77ae4
 */


void FUN_02f77ae4(long param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  int iVar10;
  undefined8 uVar9;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  fVar36 = (float)param_4[1];
  fVar14 = (float)*param_4;
  fVar35 = (float)((ulong)*param_4 >> 0x20);
  iVar7 = -(uint)(fVar14 == 0.0);
  iVar10 = -(uint)(fVar35 == 0.0);
  iVar11 = -(uint)(fVar36 == 0.0);
  if (CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar7 >> 0x18) &
               (byte)((uint)iVar11 >> 0x18),
               CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar7 >> 0x10) &
                        (byte)((uint)iVar11 >> 0x10),
                        CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar7 >> 8) &
                                 (byte)((uint)iVar11 >> 8),(byte)iVar10 & (byte)iVar7 & (byte)iVar11
                                ))) == 0) {
    fVar37 = (float)(*(double *)(param_1 + 0xe8) - *(double *)(param_1 + 0x108));
    fVar8 = (float)(*(double *)(param_1 + 0xe0) - *(double *)(param_1 + 0x100));
    uVar9 = CONCAT44(fVar37,fVar8);
    fVar25 = (float)(*(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0x110));
    fVar13 = (float)(*(double *)(param_1 + 0xf8) - *(double *)(param_1 + 0x118));
    uVar12 = CONCAT44(fVar13,fVar25);
    auVar26._0_4_ = fVar8 - ((float)*param_2 - *param_3);
    auVar26._4_4_ = fVar37 - ((float)((ulong)*param_2 >> 0x20) - param_3[1]);
    auVar26._8_4_ = fVar25 - ((float)param_2[1] - param_3[2]);
    auVar26._12_4_ = fVar13 - ((float)((ulong)param_2[1] >> 0x20) - param_3[3]);
    auVar31._0_4_ = (0.0 - fVar14) * 0.5;
    auVar31._4_4_ = (0.0 - fVar35) * 0.5;
    auVar31._8_4_ = (0.0 - fVar36) * 0.5;
    auVar31._12_4_ = (0.0 - (float)((ulong)param_4[1] >> 0x20)) * 0.5;
    auVar42 = NEON_ext(auVar31,auVar31,4,1);
    fVar35 = auVar31._8_4_ * auVar31._8_4_ +
             auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_;
    fVar36 = auVar31._8_4_ * auVar31._8_4_ +
             auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_;
    pauVar1 = (undefined1 (*) [12])(param_1 + 0x130);
    fVar25 = (float)*(undefined8 *)(param_1 + 0x138);
    fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20);
    uVar3 = *(undefined8 *)*pauVar1;
    fVar13 = (float)uVar3;
    fVar8 = (float)((ulong)uVar3 >> 0x20);
    auVar29._12_4_ = fVar15;
    auVar29._0_12_ = *pauVar1;
    auVar43._12_4_ = fVar15;
    auVar43._0_12_ = *pauVar1;
    auVar29 = NEON_ext(auVar29,auVar43,8,1);
    uVar3 = NEON_ext(uVar3,auVar29._0_8_,4,1);
    fVar14 = (float)((ulong)uVar3 >> 0x20);
    fVar30 = auVar29._4_4_ * auVar29._4_4_;
    fVar37 = auVar42._0_4_ * fVar13 - auVar31._0_4_ * (float)uVar3;
    fVar38 = auVar42._4_4_ * fVar8 - auVar31._4_4_ * fVar14;
    fVar39 = auVar31._0_4_ * fVar25 - auVar31._8_4_ * fVar13;
    fVar40 = auVar31._4_4_ * fVar15 - auVar31._12_4_ * fVar8;
    auVar4._4_4_ = fVar38;
    auVar4._0_4_ = fVar37;
    auVar4._8_4_ = fVar39;
    auVar4._12_4_ = fVar40;
    auVar5._4_4_ = fVar38;
    auVar5._0_4_ = fVar37;
    auVar5._8_4_ = fVar39;
    auVar5._12_4_ = fVar40;
    auVar29 = NEON_ext(auVar4,auVar5,4,1);
    uVar6 = NEON_fmov(0x3f800000,4);
    auVar32._0_4_ = auVar31._0_4_ * fVar13;
    auVar32._4_4_ = auVar31._4_4_ * fVar8;
    auVar32._8_4_ = auVar31._8_4_ * fVar25;
    auVar32._12_4_ = auVar31._12_4_ * fVar15;
    fVar35 = fVar35 * (fVar35 * (fVar35 * -0.0029562549 + -0.02144013) + -0.33352822) + (float)uVar6
    ;
    fVar38 = auVar31._0_4_ * fVar15 + auVar29._0_4_ + fVar13 * fVar35;
    fVar39 = auVar31._4_4_ * fVar15 + auVar29._4_4_ +
             fVar8 * (fVar36 * (fVar36 * (fVar36 * -0.0029562549 + -0.02144013) + -0.33352822) +
                     (float)((ulong)uVar6 >> 0x20));
    fVar40 = auVar31._8_4_ * fVar15 + fVar37 + fVar25 * fVar35;
    auVar29 = NEON_ext(auVar32,auVar32,8,1);
    fVar36 = fVar35 * fVar15 - (auVar32._0_4_ + auVar32._4_4_ + auVar29._0_4_);
    auVar33._0_4_ = fVar38 * fVar38;
    auVar33._4_4_ = fVar39 * fVar39;
    auVar33._8_4_ = fVar40 * fVar40;
    auVar33._12_4_ = fVar36 * fVar36;
    auVar29 = NEON_ext(auVar33,auVar33,8,1);
    fVar35 = auVar29._0_4_ + auVar29._4_4_;
    fVar37 = SQRT(auVar33._0_4_ + auVar33._4_4_ + fVar35);
    fVar35 = SQRT(auVar33._0_4_ + auVar33._4_4_ + fVar35);
    auVar34._0_4_ = fVar38 / fVar37;
    auVar34._4_4_ = fVar39 / fVar35;
    auVar34._8_4_ = fVar40 / fVar37;
    auVar34._12_4_ = fVar36 / fVar35;
    fVar39 = fVar30 + -0.5;
    fVar30 = fVar30 + -0.5;
    auVar29 = NEON_ext(auVar34,auVar34,8,1);
    fVar38 = auVar29._4_4_ * auVar29._4_4_;
    fVar40 = auVar26._0_4_ * auVar34._0_4_ + auVar26._4_4_ * auVar34._4_4_ +
             auVar26._8_4_ * auVar34._8_4_;
    fVar41 = auVar26._0_4_ * auVar34._0_4_ + auVar26._4_4_ * auVar34._4_4_ +
             auVar26._8_4_ * auVar34._8_4_;
    auVar43 = NEON_ext(auVar34,auVar34,4,1);
    fVar37 = fVar38 + -0.5;
    fVar38 = fVar38 + -0.5;
    auVar29 = NEON_ext(auVar26,auVar26,4,1);
    auVar27._0_4_ = auVar26._0_4_ * auVar43._0_4_ - auVar29._0_4_ * auVar34._0_4_;
    auVar27._4_4_ = auVar26._4_4_ * auVar43._4_4_ - auVar29._4_4_ * auVar34._4_4_;
    auVar27._8_4_ = auVar26._8_4_ * auVar34._0_4_ - auVar26._0_4_ * auVar34._8_4_;
    auVar27._12_4_ = auVar26._12_4_ * auVar34._4_4_ - auVar26._4_4_ * auVar34._12_4_;
    auVar29 = NEON_ext(auVar27,auVar27,4,1);
    fVar35 = auVar26._0_4_ * fVar37 + auVar34._0_4_ * fVar40 + auVar29._0_4_ * auVar34._12_4_;
    fVar36 = auVar26._4_4_ * fVar38 + auVar34._4_4_ * fVar41 + auVar29._4_4_ * auVar34._12_4_;
    fVar37 = auVar26._8_4_ * fVar37 + auVar34._8_4_ * fVar40 + auVar27._0_4_ * auVar34._12_4_;
    fVar38 = auVar26._12_4_ * fVar38 + auVar34._12_4_ * fVar41 + auVar34._12_4_ * 0.0;
    auVar28._0_4_ = fVar35 + fVar35;
    auVar28._4_4_ = fVar36 + fVar36;
    auVar28._8_4_ = fVar37 + fVar37;
    auVar28._12_4_ = fVar38 + fVar38;
    fVar38 = fVar13 * auVar28._0_4_ + fVar8 * auVar28._4_4_ + fVar25 * auVar28._8_4_;
    fVar40 = fVar13 * auVar28._0_4_ + fVar8 * auVar28._4_4_ + fVar25 * auVar28._8_4_;
    auVar29 = NEON_ext(auVar28,auVar28,4,1);
    fVar35 = fVar13 * auVar29._0_4_ - (float)uVar3 * auVar28._0_4_;
    fVar14 = fVar8 * auVar29._4_4_ - fVar14 * auVar28._4_4_;
    uVar16 = (undefined1)((uint)fVar14 >> 8);
    uVar17 = (undefined1)((uint)fVar14 >> 0x10);
    uVar18 = (undefined1)((uint)fVar14 >> 0x18);
    fVar36 = fVar25 * auVar28._0_4_ - fVar13 * auVar28._8_4_;
    uVar19 = (undefined1)((uint)fVar36 >> 8);
    uVar20 = (undefined1)((uint)fVar36 >> 0x10);
    uVar21 = (undefined1)((uint)fVar36 >> 0x18);
    fVar37 = fVar15 * auVar28._4_4_ - fVar8 * auVar28._12_4_;
    uVar22 = (undefined1)((uint)fVar37 >> 8);
    uVar23 = (undefined1)((uint)fVar37 >> 0x10);
    uVar24 = (undefined1)((uint)fVar37 >> 0x18);
    auVar42[4] = SUB41(fVar14,0);
    auVar42._0_4_ = fVar35;
    auVar42[5] = uVar16;
    auVar42[6] = uVar17;
    auVar42[7] = uVar18;
    auVar42[8] = SUB41(fVar36,0);
    auVar42[9] = uVar19;
    auVar42[10] = uVar20;
    auVar42[0xb] = uVar21;
    auVar42[0xc] = SUB41(fVar37,0);
    auVar42[0xd] = uVar22;
    auVar42[0xe] = uVar23;
    auVar42[0xf] = uVar24;
    auVar2[4] = SUB41(fVar14,0);
    auVar2._0_4_ = fVar35;
    auVar2[5] = uVar16;
    auVar2[6] = uVar17;
    auVar2[7] = uVar18;
    auVar2[8] = SUB41(fVar36,0);
    auVar2[9] = uVar19;
    auVar2[10] = uVar20;
    auVar2[0xb] = uVar21;
    auVar2[0xc] = SUB41(fVar37,0);
    auVar2[0xd] = uVar22;
    auVar2[0xe] = uVar23;
    auVar2[0xf] = uVar24;
    auVar29 = NEON_ext(auVar42,auVar2,4,1);
    fVar14 = fVar39 * auVar28._0_4_ + fVar13 * fVar38 + auVar29._0_4_ * fVar15;
    fVar36 = fVar30 * auVar28._4_4_ + fVar8 * fVar40 + auVar29._4_4_ * fVar15;
    fVar35 = fVar39 * auVar28._8_4_ + fVar25 * fVar38 + fVar35 * fVar15;
    fVar37 = fVar30 * auVar28._12_4_ + fVar15 * fVar40 + fVar15 * 0.0;
    fVar14 = fVar14 + fVar14;
    fVar36 = fVar36 + fVar36;
    fVar35 = fVar35 + fVar35;
    fVar37 = fVar37 + fVar37;
  }
  else {
    uVar12 = param_2[1];
    uVar9 = *param_2;
    fVar35 = (float)*(undefined8 *)(param_3 + 2);
    fVar37 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    fVar14 = (float)*(undefined8 *)param_3;
    fVar36 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  }
  *(ulong *)(param_1 + 0x1c08) =
       CONCAT44((float)((ulong)uVar12 >> 0x20) - fVar37,(float)uVar12 - fVar35);
  *(ulong *)(param_1 + 0x1c00) =
       CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar36,(float)uVar9 - fVar14);
  return;
}


