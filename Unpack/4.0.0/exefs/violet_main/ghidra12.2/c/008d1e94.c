/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d1e94; name: FUN_008d1e94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_008d1e94(float param_1,ulong *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  puVar11 = PTR_Float2Pi_047d23e8;
  lVar12 = *(long *)(param_4 + 0xa0);
  uVar34 = *(undefined4 *)(lVar12 + 0x848);
  fVar33 = *(float *)PTR_FloatPi_047d2460 * param_1 + *(float *)PTR_FloatPi_047d2460 * param_1;
  uVar13 = (char)uVar34;
  uVar15 = (char)((uint)uVar34 >> 8);
  uVar17 = (char)((uint)uVar34 >> 0x10);
  uVar19 = (char)((uint)uVar34 >> 0x18);
  if (*(char *)(lVar12 + 0x839) != '\0') {
    uVar13 = SUB41(fVar33,0);
    uVar15 = (char)((uint)fVar33 >> 8);
    uVar17 = (char)((uint)fVar33 >> 0x10);
    uVar19 = (char)((uint)fVar33 >> 0x18);
  }
  fVar33 = (float)CONCAT13(uVar19,CONCAT12(uVar17,CONCAT11(uVar15,uVar13))) +
           *(float *)(lVar12 + 0x840) * (float)*(uint *)(param_4 + 0xac) * 2.3283064e-10 +
           *(float *)(lVar12 + 0x840) * -0.5;
  fVar36 = 0.5;
  if (fVar33 < 0.0) {
    fVar36 = -0.5;
  }
  fVar35 = *(float *)PTR_Float1Divided2Pi_047d23d0;
  uVar1 = *(uint *)(param_4 + 0xac) * 0x41c64e6d + 0x3039;
  *(uint *)(param_4 + 0xac) = uVar1;
  puVar10 = PTR_CosCoefficients_047d23e0;
  puVar9 = PTR_SinCoefficients_047d23d8;
  fVar33 = fVar33 - *(float *)puVar11 * (float)(int)(fVar35 * fVar33 + fVar36);
  if (fVar33 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
    if (-*(float *)PTR_FloatPiDivided2_047d23f0 <= fVar33) {
      fVar36 = 1.0;
      goto LAB_008d1f98;
    }
    fVar36 = -*(float *)PTR_FloatPi_047d23a0;
  }
  else {
    fVar36 = *(float *)PTR_FloatPi_047d23a0;
  }
  fVar33 = fVar36 - fVar33;
  fVar36 = -1.0;
LAB_008d1f98:
  fVar39 = fVar33 * fVar33;
  fVar43 = *(float *)PTR_SinCoefficients_047d23d8;
  fVar44 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
  fVar46 = *(float *)(PTR_SinCoefficients_047d23d8 + 8);
  fVar50 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
  *(uint *)(param_4 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
  fVar45 = *(float *)puVar10;
  fVar51 = *(float *)(puVar10 + 4);
  fVar47 = *(float *)(puVar10 + 8);
  fVar52 = *(float *)(puVar10 + 0xc);
  fVar48 = *(float *)(puVar9 + 0x10);
  fVar49 = *(float *)(puVar10 + 0x10);
  fVar35 = 1.0 - *(float *)(lVar12 + 0x850);
  fVar35 = (float)uVar1 * 2.3283064e-10 + (1.0 - (float)uVar1 * 2.3283064e-10) * fVar35 * fVar35;
  if (fVar35 <= 0.0) {
    uVar13 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar19 = 0;
  }
  else {
    fVar4 = SQRT(fVar35);
    uVar13 = SUB41(fVar4,0);
    uVar15 = (undefined1)((uint)fVar4 >> 8);
    uVar17 = (undefined1)((uint)fVar4 >> 0x10);
    uVar19 = (undefined1)((uint)fVar4 >> 0x18);
    if (NAN(fVar4)) {
      fVar35 = sqrtf(fVar35);
      uVar13 = SUB41(fVar35,0);
      uVar15 = (undefined1)((uint)fVar35 >> 8);
      uVar17 = (undefined1)((uint)fVar35 >> 0x10);
      uVar19 = (undefined1)((uint)fVar35 >> 0x18);
    }
  }
  fVar35 = fVar33 * (fVar39 * (fVar39 * (fVar50 + fVar39 * (fVar39 * (fVar44 - fVar43 * fVar39) -
                                                           fVar46)) - fVar48) + 1.0) *
           (float)CONCAT13(uVar19,CONCAT12(uVar17,CONCAT11(uVar15,uVar13)));
  fVar44 = fVar36 * (fVar39 * (fVar39 * (fVar52 + fVar39 * (fVar39 * (fVar51 - fVar39 * fVar45) -
                                                           fVar47)) - fVar49) + 1.0) *
           (float)CONCAT13(uVar19,CONCAT12(uVar17,CONCAT11(uVar15,uVar13)));
  fVar39 = *(float *)(lVar12 + 0x85c) * *(float *)(param_7 + 0x90);
  fVar43 = *(float *)(lVar12 + 0x864) * *(float *)(param_7 + 0x98);
  fVar36 = (float)CONCAT13(uVar19,CONCAT12(uVar17,CONCAT11(uVar15,uVar13))) * fVar35;
  fVar33 = (float)CONCAT13(uVar19,CONCAT12(uVar17,CONCAT11(uVar15,uVar13))) * fVar44;
  param_2[1] = (ulong)(uint)(fVar44 * fVar43);
  *param_2 = (ulong)(uint)(fVar35 * fVar39);
  if (fVar39 <= fVar43) {
    fVar36 = fVar36 * (fVar39 / fVar43);
  }
  else {
    fVar33 = fVar33 * (fVar43 / fVar39);
  }
  fVar35 = fVar36 * fVar36;
  fVar39 = fVar33 * fVar33;
  uVar13 = (undefined1)((uint)fVar39 >> 8);
  uVar15 = (undefined1)((uint)fVar39 >> 0x10);
  uVar17 = (undefined1)((uint)fVar39 >> 0x18);
  auVar37._4_4_ = 0;
  auVar37._0_4_ = fVar35;
  auVar37[8] = SUB41(fVar39,0);
  auVar37[9] = uVar13;
  auVar37[10] = uVar15;
  auVar37[0xb] = uVar17;
  auVar37._12_4_ = 0;
  auVar41._4_4_ = 0;
  auVar41._0_4_ = fVar35;
  auVar41[8] = SUB41(fVar39,0);
  auVar41[9] = uVar13;
  auVar41[10] = uVar15;
  auVar41[0xb] = uVar17;
  auVar41._12_4_ = 0;
  auVar37 = NEON_ext(auVar37,auVar41,8,1);
  fVar35 = auVar37._0_4_ + fVar35;
  fVar39 = auVar37._4_4_ + 0.0;
  fVar43 = fVar35 + fVar39;
  fVar35 = fVar35 + fVar39;
  uVar13 = SUB41(fVar35,0);
  uVar15 = (undefined1)((uint)fVar35 >> 8);
  uVar17 = (undefined1)((uint)fVar35 >> 0x10);
  uVar19 = (undefined1)((uint)fVar35 >> 0x18);
  if (fVar43 <= 0.0) {
    bVar25 = (byte)_UNK_03caa5b8;
    bVar26 = (byte)((ulong)_UNK_03caa5b8 >> 8);
    bVar27 = (byte)((ulong)_UNK_03caa5b8 >> 0x10);
    bVar28 = (byte)((ulong)_UNK_03caa5b8 >> 0x18);
    bVar29 = (byte)((ulong)_UNK_03caa5b8 >> 0x20);
    bVar30 = (byte)((ulong)_UNK_03caa5b8 >> 0x28);
    bVar31 = (byte)((ulong)_UNK_03caa5b8 >> 0x30);
    bVar32 = (byte)((ulong)_UNK_03caa5b8 >> 0x38);
    bVar14 = (byte)_DAT_03caa5b0;
    bVar16 = (byte)((ulong)_DAT_03caa5b0 >> 8);
    bVar18 = (byte)((ulong)_DAT_03caa5b0 >> 0x10);
    bVar20 = (byte)((ulong)_DAT_03caa5b0 >> 0x18);
    bVar21 = (byte)((ulong)_DAT_03caa5b0 >> 0x20);
    bVar22 = (byte)((ulong)_DAT_03caa5b0 >> 0x28);
    bVar23 = (byte)((ulong)_DAT_03caa5b0 >> 0x30);
    bVar24 = (byte)((ulong)_DAT_03caa5b0 >> 0x38);
  }
  else {
    auVar2[4] = uVar13;
    auVar2._0_4_ = fVar43;
    auVar2[5] = uVar15;
    auVar2[6] = uVar17;
    auVar2[7] = uVar19;
    auVar2[8] = SUB41(fVar43,0);
    auVar2[9] = (char)((uint)fVar43 >> 8);
    auVar2[10] = (char)((uint)fVar43 >> 0x10);
    auVar2[0xb] = (char)((uint)fVar43 >> 0x18);
    auVar2[0xc] = uVar13;
    auVar2[0xd] = uVar15;
    auVar2[0xe] = uVar17;
    auVar2[0xf] = uVar19;
    auVar37 = NEON_frsqrte(auVar2,4);
    auVar40._0_4_ = fVar43 * auVar37._0_4_;
    auVar40._4_4_ = fVar35 * auVar37._4_4_;
    auVar40._8_4_ = fVar43 * auVar37._8_4_;
    uVar3 = (undefined2)(CONCAT15(uVar15,CONCAT14(uVar13,fVar43)) >> 0x20);
    auVar40._12_4_ = (float)CONCAT13(uVar19,CONCAT12(uVar17,uVar3)) * auVar37._12_4_;
    auVar41 = NEON_frsqrts(auVar37,auVar40,4);
    auVar38._0_4_ = auVar37._0_4_ * auVar41._0_4_;
    auVar38._4_4_ = auVar37._4_4_ * auVar41._4_4_;
    auVar38._8_4_ = auVar37._8_4_ * auVar41._8_4_;
    auVar38._12_4_ = auVar37._12_4_ * auVar41._12_4_;
    auVar42._0_4_ = fVar43 * auVar38._0_4_;
    auVar42._4_4_ = fVar35 * auVar38._4_4_;
    auVar42._8_4_ = fVar43 * auVar38._8_4_;
    auVar42._12_4_ = (float)CONCAT13(uVar19,CONCAT12(uVar17,uVar3)) * auVar38._12_4_;
    iVar5 = -(uint)(fVar43 == 0.0);
    iVar6 = -(uint)(fVar35 == 0.0);
    iVar7 = -(uint)(fVar43 == 0.0);
    iVar8 = -(uint)((float)CONCAT13(uVar19,CONCAT12(uVar17,uVar3)) == 0.0);
    auVar37 = NEON_frsqrts(auVar38,auVar42,4);
    fVar36 = fVar36 * auVar38._0_4_ * auVar37._0_4_;
    fVar35 = auVar38._4_4_ * auVar37._4_4_ * 0.0;
    fVar33 = fVar33 * auVar38._8_4_ * auVar37._8_4_;
    fVar39 = auVar38._12_4_ * auVar37._12_4_ * 0.0;
    bVar14 = SUB41(fVar36,0) & ~(byte)iVar5;
    bVar16 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar5 >> 8);
    bVar18 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
    bVar20 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
    bVar21 = SUB41(fVar35,0) & ~(byte)iVar6;
    bVar22 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar6 >> 8);
    bVar23 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
    bVar24 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
    bVar25 = SUB41(fVar33,0) & ~(byte)iVar7;
    bVar26 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar7 >> 8);
    bVar27 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
    bVar28 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
    bVar29 = SUB41(fVar39,0) & ~(byte)iVar8;
    bVar30 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar8 >> 8);
    bVar31 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
    bVar32 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  }
  fVar35 = *(float *)(param_7 + 0x6c);
  fVar33 = (float)CONCAT13(bVar24,CONCAT12(bVar23,CONCAT11(bVar22,bVar21))) * fVar35;
  fVar36 = (float)CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar29))) * fVar35;
  param_3[1] = CONCAT17((char)((uint)fVar36 >> 0x18),
                        CONCAT16((char)((uint)fVar36 >> 0x10),
                                 CONCAT15((char)((uint)fVar36 >> 8),
                                          CONCAT14(SUB41(fVar36,0),
                                                   (float)CONCAT13(bVar28,CONCAT12(bVar27,CONCAT11(
                                                  bVar26,bVar25))) * fVar35))));
  *param_3 = CONCAT17((char)((uint)fVar33 >> 0x18),
                      CONCAT16((char)((uint)fVar33 >> 0x10),
                               CONCAT15((char)((uint)fVar33 >> 8),
                                        CONCAT14(SUB41(fVar33,0),
                                                 (float)CONCAT13(bVar20,CONCAT12(bVar18,CONCAT11(
                                                  bVar16,bVar14))) * fVar35))));
  return 1;
}


