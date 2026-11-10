/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022016d0; name: FUN_022016d0
 */


void FUN_022016d0(float *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  
  iVar1 = (int)(ABS(*param_1) * 1.2732395) + 1;
  uVar2 = (int)(ABS(param_1[1]) * 1.2732395) + 1U & 0xfffffffe;
  uVar3 = (int)(ABS(param_1[2]) * 1.2732395) + 1U & 0xfffffffe;
  uVar4 = (int)(ABS(param_1[3]) * 1.2732395) + 1U & 0xfffffffe;
  auVar16[8] = (char)uVar3;
  auVar16._0_8_ =
       CONCAT17((char)(uVar2 >> 0x18),
                CONCAT16((char)(uVar2 >> 0x10),
                         CONCAT15((char)(uVar2 >> 8),CONCAT14((char)uVar2,iVar1)))) &
       0xfffffffffffffffe;
  auVar16[9] = (char)(uVar3 >> 8);
  auVar16[10] = (char)(uVar3 >> 0x10);
  auVar16[0xb] = (char)(uVar3 >> 0x18);
  auVar16[0xc] = (char)uVar4;
  auVar16[0xd] = (char)(uVar4 >> 8);
  auVar16[0xe] = (char)(uVar4 >> 0x10);
  auVar16[0xf] = (char)(uVar4 >> 0x18);
  auVar16 = NEON_scvtf(auVar16,4);
  fVar10 = auVar16._0_4_;
  fVar12 = auVar16._4_4_;
  fVar13 = auVar16._8_4_;
  fVar14 = auVar16._12_4_;
  fVar10 = ABS(*param_1) + fVar10 * -0.78515625 + fVar10 * -0.00024187565 + fVar10 * -3.774895e-08;
  fVar12 = ABS(param_1[1]) + fVar12 * -0.78515625 + fVar12 * -0.00024187565 + fVar12 * -3.774895e-08
  ;
  fVar13 = ABS(param_1[2]) + fVar13 * -0.78515625 + fVar13 * -0.00024187565 + fVar13 * -3.774895e-08
  ;
  fVar14 = ABS(param_1[3]) + fVar14 * -0.78515625 + fVar14 * -0.00024187565 + fVar14 * -3.774895e-08
  ;
  fVar15 = fVar10 * fVar10;
  fVar17 = fVar12 * fVar12;
  fVar18 = fVar13 * fVar13;
  fVar19 = fVar14 * fVar14;
  auVar16 = NEON_fmov(0x3f800000,4);
  auVar11._0_4_ =
       fVar10 + fVar10 * fVar15 * (fVar15 * (fVar15 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar11._4_4_ =
       fVar12 + fVar12 * fVar17 * (fVar17 * (fVar17 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar11._8_4_ =
       fVar13 + fVar13 * fVar18 * (fVar18 * (fVar18 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar11._12_4_ =
       fVar14 + fVar14 * fVar19 * (fVar19 * (fVar19 * -0.00019515296 + 0.008332161) + -0.16666655);
  iVar6 = -(uint)(((char)uVar2 + 2U & 2) == 0);
  iVar7 = -(uint)(((char)uVar3 + 2U & 2) == 0);
  iVar8 = -(uint)(((char)uVar4 + 2U & 2) == 0);
  auVar9._4_4_ = fVar17 * fVar17 * (fVar17 * (fVar17 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar17 * -0.5 + auVar16._4_4_;
  auVar9._0_4_ = fVar15 * fVar15 * (fVar15 * (fVar15 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar15 * -0.5 + auVar16._0_4_;
  auVar9._8_4_ = fVar18 * fVar18 * (fVar18 * (fVar18 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar18 * -0.5 + auVar16._8_4_;
  auVar9._12_4_ =
       fVar19 * fVar19 * (fVar19 * (fVar19 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
       fVar19 * -0.5 + auVar16._12_4_;
  auVar5[4] = (char)iVar6;
  auVar5._0_4_ = -(uint)((((byte)iVar1 & 0xfe) + 2 & 2) == 0);
  auVar5[5] = (char)((uint)iVar6 >> 8);
  auVar5[6] = (char)((uint)iVar6 >> 0x10);
  auVar5[7] = (char)((uint)iVar6 >> 0x18);
  auVar5[8] = (char)iVar7;
  auVar5[9] = (char)((uint)iVar7 >> 8);
  auVar5[10] = (char)((uint)iVar7 >> 0x10);
  auVar5[0xb] = (char)((uint)iVar7 >> 0x18);
  auVar5[0xc] = (char)iVar8;
  auVar5[0xd] = (char)((uint)iVar8 >> 8);
  auVar5[0xe] = (char)((uint)iVar8 >> 0x10);
  auVar5[0xf] = (char)((uint)iVar8 >> 0x18);
  NEON_fmin(auVar11 ^ (auVar11 ^ auVar9) & ~auVar5,auVar16,4);
  return;
}


