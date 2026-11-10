/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c90fc; name: FUN_008c90fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c90fc(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar10 [16];
  float fVar14;
  uint uVar15;
  uint uVar18;
  float fVar19;
  uint uVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  uVar1 = *(uint *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
  uVar2 = uVar1 * 0x41c64e6d + 0x3039;
  fVar5 = (float)*(uint *)(param_1 + 0xac) * 2.3283064e-10;
  lVar4 = *(long *)(param_1 + 0xa0);
  fVar8 = *(float *)(lVar4 + 0x788);
  *(uint *)(param_1 + 0xac) = uVar1;
  fVar24 = *(float *)(lVar4 + 0x794);
  fVar22 = *(float *)(lVar4 + 0x78c);
  *(uint *)(param_1 + 0xac) = uVar2;
  fVar27 = *(float *)(lVar4 + 0x798);
  uVar3 = uVar2 * 0x41c64e6d + 0x3039;
  fVar14 = *(float *)(lVar4 + 0x790);
  *(uint *)(param_1 + 0xac) = uVar3;
  fVar8 = fVar8 + fVar24 * (fVar5 + fVar5 + -1.0);
  fVar22 = fVar22 + fVar27 * ((float)uVar1 * 2.3283064e-10 + (float)uVar1 * 2.3283064e-10 + -1.0);
  fVar14 = fVar14 + ((float)uVar2 * 2.3283064e-10 + (float)uVar2 * 2.3283064e-10 + -1.0) *
                    *(float *)(lVar4 + 0x79c);
  fVar5 = *(float *)PTR_Float1Divided2Pi_047d23d0;
  fVar24 = fVar8 * fVar5;
  fVar27 = fVar22 * fVar5;
  fVar19 = fVar14 * fVar5;
  auVar16._0_4_ = (int)(fVar24 + (float)(~-(uint)(0.0 <= fVar24) & 0x80000000 ^ 0x3f000000));
  auVar16._4_4_ = (int)(fVar27 + (float)(~-(uint)(0.0 <= fVar27) & 0x80000000 ^ 0x3f000000));
  auVar16._8_4_ = (int)(fVar19 + (float)(~-(uint)(0.0 <= fVar19) & 0x80000000 ^ 0x3f000000));
  auVar16._12_4_ =
       (int)(fVar5 * 0.0 + (float)(~-(uint)(0.0 <= fVar5 * 0.0) & 0x80000000 ^ 0x3f000000));
  fVar28 = *(float *)PTR_SinCoefficients_047d23d8;
  fVar5 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
  fVar24 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
  fVar27 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
  auVar17 = NEON_scvtf(auVar16,4);
  fVar19 = *(float *)PTR_Float2Pi_047d23e8;
  fVar33 = *(float *)PTR_FloatPiDivided2_047d23f0;
  fVar29 = *(float *)PTR_FloatPi_047d23a0;
  fVar8 = fVar8 - auVar17._0_4_ * fVar19;
  fVar22 = fVar22 - auVar17._4_4_ * fVar19;
  fVar14 = fVar14 - auVar17._8_4_ * fVar19;
  fVar19 = 0.0 - auVar17._12_4_ * fVar19;
  fVar30 = -fVar29;
  fVar34 = -fVar33;
  uVar15 = -(uint)(fVar33 < fVar8);
  uVar18 = -(uint)(fVar33 < fVar22);
  uVar20 = -(uint)(fVar33 < fVar14);
  uVar21 = -(uint)(fVar33 < fVar19);
  fVar33 = (float)((uint)(fVar29 - fVar8) ^ ((uint)(fVar29 - fVar8) ^ (uint)fVar8) & ~uVar15);
  fVar22 = (float)((uint)(fVar29 - fVar22) ^ ((uint)(fVar29 - fVar22) ^ (uint)fVar22) & ~uVar18);
  fVar14 = (float)((uint)(fVar29 - fVar14) ^ ((uint)(fVar29 - fVar14) ^ (uint)fVar14) & ~uVar20);
  fVar19 = (float)((uint)(fVar29 - fVar19) ^ ((uint)(fVar29 - fVar19) ^ (uint)fVar19) & ~uVar21);
  fVar35 = *(float *)PTR_CosCoefficients_047d23e0;
  uVar9 = -(uint)(fVar33 < fVar34);
  uVar11 = -(uint)(fVar22 < fVar34);
  uVar12 = -(uint)(fVar14 < fVar34);
  uVar13 = -(uint)(fVar19 < fVar34);
  fVar36 = -*(float *)(PTR_SinCoefficients_047d23d8 + 8);
  fVar33 = (float)((uint)fVar33 ^ ((uint)fVar33 ^ (uint)(fVar30 - fVar33)) & uVar9);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar30 - fVar22)) & uVar11);
  fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)(fVar30 - fVar14)) & uVar12);
  fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)(fVar30 - fVar19)) & uVar13);
  fVar39 = -*(float *)(PTR_CosCoefficients_047d23e0 + 8);
  fVar30 = fVar33 * fVar33;
  fVar34 = fVar22 * fVar22;
  fVar31 = fVar14 * fVar14;
  fVar32 = fVar19 * fVar19;
  fVar8 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
  fVar38 = -*(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
  fVar29 = -*(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
  uVar1 = uVar3 * 0x41c64e6d + 0x3039;
  auVar17 = NEON_fmov(0x3f800000,4);
  fVar37 = *(float *)(lVar4 + 0x770);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar2 = uVar1 * 0x41c64e6d + 0x3039;
  auVar25._0_4_ =
       auVar17._0_4_ +
       fVar30 * (fVar29 + fVar30 * (fVar8 + fVar30 * (fVar39 + fVar30 * (fVar27 - fVar30 * fVar35)))
                );
  auVar25._4_4_ =
       auVar17._4_4_ +
       fVar34 * (fVar29 + fVar34 * (fVar8 + fVar34 * (fVar39 + fVar34 * (fVar27 - fVar34 * fVar35)))
                );
  auVar25._8_4_ =
       auVar17._8_4_ +
       fVar31 * (fVar29 + fVar31 * (fVar8 + fVar31 * (fVar39 + fVar31 * (fVar27 - fVar31 * fVar35)))
                );
  auVar25._12_4_ =
       auVar17._12_4_ +
       fVar32 * (fVar29 + fVar32 * (fVar8 + fVar32 * (fVar39 + fVar32 * (fVar27 - fVar32 * fVar35)))
                );
  fVar27 = *(float *)(lVar4 + 0x77c);
  auVar23._0_4_ =
       fVar33 * (auVar17._0_4_ +
                fVar30 * (fVar38 + fVar30 * (fVar24 + fVar30 * (fVar36 + fVar30 * (fVar5 - fVar30 * 
                                                  fVar28)))));
  auVar23._4_4_ =
       fVar22 * (auVar17._4_4_ +
                fVar34 * (fVar38 + fVar34 * (fVar24 + fVar34 * (fVar36 + fVar34 * (fVar5 - fVar34 * 
                                                  fVar28)))));
  auVar23._8_4_ =
       fVar14 * (auVar17._8_4_ +
                fVar31 * (fVar38 + fVar31 * (fVar24 + fVar31 * (fVar36 + fVar31 * (fVar5 - fVar31 * 
                                                  fVar28)))));
  auVar23._12_4_ =
       fVar19 * (auVar17._12_4_ +
                fVar32 * (fVar38 + fVar32 * (fVar24 + fVar32 * (fVar36 + fVar32 * (fVar5 - fVar32 * 
                                                  fVar28)))));
  fVar5 = *(float *)(lVar4 + 0x774);
  *(uint *)(param_1 + 0xac) = uVar2;
  auVar26[0] = ~(byte)uVar9 & ~(byte)uVar15;
  auVar26[1] = ~(byte)(uVar9 >> 8) & ~(byte)(uVar15 >> 8);
  auVar26[2] = ~(byte)(uVar9 >> 0x10) & ~(byte)(uVar15 >> 0x10);
  auVar26[3] = ~(byte)(uVar9 >> 0x18) & ~(byte)(uVar15 >> 0x18);
  auVar26[4] = ~(byte)uVar11 & ~(byte)uVar18;
  auVar26[5] = ~(byte)(uVar11 >> 8) & ~(byte)(uVar18 >> 8);
  auVar26[6] = ~(byte)(uVar11 >> 0x10) & ~(byte)(uVar18 >> 0x10);
  auVar26[7] = ~(byte)(uVar11 >> 0x18) & ~(byte)(uVar18 >> 0x18);
  auVar26[8] = ~(byte)uVar12 & ~(byte)uVar20;
  auVar26[9] = ~(byte)(uVar12 >> 8) & ~(byte)(uVar20 >> 8);
  auVar26[10] = ~(byte)(uVar12 >> 0x10) & ~(byte)(uVar20 >> 0x10);
  auVar26[0xb] = ~(byte)(uVar12 >> 0x18) & ~(byte)(uVar20 >> 0x18);
  auVar26[0xc] = ~(byte)uVar13 & ~(byte)uVar21;
  auVar26[0xd] = ~(byte)(uVar13 >> 8) & ~(byte)(uVar21 >> 8);
  auVar26[0xe] = ~(byte)(uVar13 >> 0x10) & ~(byte)(uVar21 >> 0x10);
  auVar26[0xf] = ~(byte)(uVar13 >> 0x18) & ~(byte)(uVar21 >> 0x18);
  auVar17._4_4_ = -auVar25._4_4_;
  auVar17._0_4_ = -auVar25._0_4_;
  auVar17._8_4_ = -auVar25._8_4_;
  auVar17._12_4_ = -auVar25._12_4_;
  auVar10._4_4_ = -auVar25._4_4_;
  auVar10._0_4_ = -auVar25._0_4_;
  auVar10._8_4_ = -auVar25._8_4_;
  auVar10._12_4_ = -auVar25._12_4_;
  auVar10 = auVar10 ^ (auVar17 ^ auVar25) & auVar26;
  fVar28 = auVar10._4_4_;
  uVar6 = CONCAT44(fVar5 + ((float)uVar1 * 2.3283064e-10 + (float)uVar1 * 2.3283064e-10 + -1.0) *
                           *(float *)(lVar4 + 0x780),
                   fVar37 + ((float)uVar3 * 2.3283064e-10 + (float)uVar3 * 2.3283064e-10 + -1.0) *
                            fVar27);
  auVar26 = NEON_ext(auVar23,auVar23,8,1);
  auVar17 = NEON_ext(auVar10,auVar10,8,1);
  fVar5 = auVar17._0_4_;
  fVar24 = auVar26._0_4_;
  fVar35 = auVar23._4_4_ * (float)DAT_03cb56b0;
  fVar36 = (float)((ulong)DAT_03cb56b0 >> 0x20) * 0.0;
  fVar29 = fVar28 * (float)DAT_03cb5410;
  fVar30 = (float)((ulong)DAT_03cb5410 >> 0x20) * 0.0;
  fVar27 = *(float *)(lVar4 + 0x778);
  *(uint *)(param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
  fVar19 = auVar10._0_4_;
  fVar33 = *(float *)(lVar4 + 0x7a0);
  uVar7 = (ulong)(uint)(fVar27 + ((float)uVar2 * 2.3283064e-10 + (float)uVar2 * 2.3283064e-10 + -1.0
                                 ) * *(float *)(lVar4 + 0x784));
  fVar27 = fVar24 * auVar23._0_4_ * (float)_DAT_03cab9d0 + fVar5 * auVar23._4_4_ * fVar19;
  fVar8 = fVar5 * auVar23._0_4_ * (float)((ulong)_DAT_03cab9d0 >> 0x20) +
          fVar24 * auVar23._4_4_ * fVar19;
  fVar22 = auVar23._0_4_ * 0.0 * (float)_UNK_03cab9d8 + fVar29 * fVar19;
  fVar14 = auVar23._0_4_ * 0.0 * (float)((ulong)_UNK_03cab9d8 >> 0x20) + fVar30 * fVar19;
  fVar32 = *(float *)(lVar4 + 0x7a8);
  fVar34 = fVar24 * fVar19 * (float)_DAT_03caac70 + fVar5 * auVar23._4_4_ * auVar23._0_4_;
  fVar31 = fVar5 * fVar19 * (float)((ulong)_DAT_03caac70 >> 0x20) +
           fVar24 * auVar23._4_4_ * auVar23._0_4_;
  fVar29 = fVar19 * 0.0 * (float)_UNK_03caac78 + fVar29 * auVar23._0_4_;
  fVar19 = fVar19 * 0.0 * (float)((ulong)_UNK_03caac78 >> 0x20) + fVar30 * auVar23._0_4_;
  fVar30 = *(float *)(lVar4 + 0x7a4);
  *(ulong *)(param_1 + 0x308) = CONCAT44(fVar36,fVar35);
  *(ulong *)(param_1 + 0x300) = CONCAT44(fVar24 * fVar28,fVar5 * fVar28);
  *(float *)(param_1 + 0x318) = fVar29;
  *(float *)(param_1 + 0x31c) = fVar19;
  *(float *)(param_1 + 0x310) = fVar34;
  *(float *)(param_1 + 0x314) = fVar31;
  *(ulong *)(param_1 + 0x2e8) = CONCAT44(fVar14 * fVar32,fVar22 * fVar32);
  *(ulong *)(param_1 + 0x2e0) = CONCAT44(fVar8 * fVar32,fVar27 * fVar32);
  *(ulong *)(param_1 + 0x2f8) = uVar7;
  *(undefined8 *)(param_1 + 0x2f0) = uVar6;
  *(ulong *)(param_1 + 0x328) = CONCAT44(fVar14,fVar22);
  *(ulong *)(param_1 + 800) = CONCAT44(fVar8,fVar27);
  *(ulong *)(param_1 + 0x338) = uVar7;
  *(undefined8 *)(param_1 + 0x330) = uVar6;
  *(float *)(param_1 + 0x2c8) = fVar35 * fVar33;
  *(float *)(param_1 + 0x2cc) = fVar36 * fVar33;
  *(float *)(param_1 + 0x2c0) = fVar5 * fVar28 * fVar33;
  *(float *)(param_1 + 0x2c4) = fVar24 * fVar28 * fVar33;
  *(ulong *)(param_1 + 0x2d8) = CONCAT44(fVar19 * fVar30,fVar29 * fVar30);
  *(ulong *)(param_1 + 0x2d0) = CONCAT44(fVar31 * fVar30,fVar34 * fVar30);
  return;
}


