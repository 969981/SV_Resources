/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020d5ed8; name: FUN_020d5ed8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_020d5ed8(long param_1,long *param_2,undefined8 *param_3,float *param_4,
            undefined1 (*param_5) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined1 auVar14 [12];
  int iVar19;
  undefined1 auVar15 [16];
  int iVar20;
  int iVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  float fVar23;
  float fVar36;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  lVar3 = *param_2;
  fVar9 = (float)*param_3 - *param_4;
  fVar10 = (float)((ulong)*param_3 >> 0x20) - param_4[1];
  fVar11 = (float)param_3[1] - param_4[2];
  fVar12 = (float)((ulong)param_3[1] >> 0x20) - param_4[3];
  auVar15._0_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar15._4_4_ = fVar11 * fVar11 + 0.0;
  auVar15._8_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar15._12_4_ = fVar11 * fVar11 + 0.0;
  auVar15 = NEON_ext(auVar15,auVar15,4,1);
  fVar23 = *(float *)(lVar3 + (ulong)*(uint *)(param_1 + 0x70));
  if (fVar23 * fVar23 < auVar15._0_4_ + auVar15._4_4_) {
    return 0;
  }
  auVar38._0_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar38._4_4_ = fVar11 * fVar11 + fVar12 * fVar12;
  auVar38._8_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar38._12_4_ = fVar11 * fVar11 + fVar12 * fVar12;
  auVar15 = NEON_ext(auVar38,auVar38,4,1);
  auVar40._0_4_ = auVar15._0_4_ + auVar15._4_4_;
  auVar40._4_4_ = auVar15._8_4_ + auVar15._12_4_;
  auVar40._8_4_ = auVar15._0_4_ + auVar15._4_4_;
  auVar40._12_4_ = auVar15._8_4_ + auVar15._12_4_;
  auVar15 = NEON_frsqrte(auVar40,4);
  auVar37._0_4_ = auVar40._0_4_ * auVar15._0_4_;
  auVar37._4_4_ = auVar40._4_4_ * auVar15._4_4_;
  auVar37._8_4_ = auVar40._8_4_ * auVar15._8_4_;
  auVar37._12_4_ = auVar40._12_4_ * auVar15._12_4_;
  auVar38 = NEON_frsqrts(auVar15,auVar37,4);
  auVar24._0_4_ = auVar15._0_4_ * auVar38._0_4_;
  auVar24._4_4_ = auVar15._4_4_ * auVar38._4_4_;
  auVar24._8_4_ = auVar15._8_4_ * auVar38._8_4_;
  auVar24._12_4_ = auVar15._12_4_ * auVar38._12_4_;
  auVar39._0_4_ = auVar40._0_4_ * auVar24._0_4_;
  auVar39._4_4_ = auVar40._4_4_ * auVar24._4_4_;
  auVar39._8_4_ = auVar40._8_4_ * auVar24._8_4_;
  auVar39._12_4_ = auVar40._12_4_ * auVar24._12_4_;
  iVar13 = -(uint)(auVar40._0_4_ == 0.0);
  iVar19 = -(uint)(auVar40._4_4_ == 0.0);
  iVar20 = -(uint)(auVar40._8_4_ == 0.0);
  iVar21 = -(uint)(auVar40._12_4_ == 0.0);
  auVar15 = NEON_frsqrts(auVar24,auVar39,4);
  fVar9 = fVar9 * auVar24._0_4_ * auVar15._0_4_;
  fVar10 = fVar10 * auVar24._4_4_ * auVar15._4_4_;
  fVar11 = fVar11 * auVar24._8_4_ * auVar15._8_4_;
  fVar12 = fVar12 * auVar24._12_4_ * auVar15._12_4_;
  fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar13)));
  fVar11 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                           CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                    CONCAT11((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                             SUB41(fVar11,0) & ~(byte)iVar20)));
  fVar10 = (float)(CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                            CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                     CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar19 >> 8)
                                              ,CONCAT14(SUB41(fVar10,0) & ~(byte)iVar19,fVar9)))) >>
                  0x20);
  fVar12 = (float)(CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                            CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                     CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar21 >> 8)
                                              ,CONCAT14(SUB41(fVar12,0) & ~(byte)iVar21,fVar11))))
                  >> 0x20);
  auVar43._0_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar43._4_4_ = fVar11 * fVar11 + fVar12 * fVar12;
  auVar43._8_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar43._12_4_ = fVar11 * fVar11 + fVar12 * fVar12;
  auVar15 = NEON_ext(auVar43,auVar43,4,1);
  if (auVar15._0_4_ + auVar15._4_4_ <= 0.0) {
    return 1;
  }
  auVar15 = *param_5;
  fVar23 = auVar15._0_4_;
  auVar26._0_4_ = -fVar23;
  fVar46 = auVar15._4_4_;
  fVar36 = -fVar46;
  fVar47 = auVar15._8_4_;
  auVar25._8_4_ = -fVar47;
  fVar22 = auVar15._12_4_;
  auVar41._4_4_ = fVar47;
  auVar41._0_4_ = fVar47;
  auVar41._8_4_ = fVar47;
  auVar41._12_4_ = fVar47;
  auVar15 = NEON_ext(auVar41,auVar15,0xc,1);
  auVar25._4_4_ = auVar25._8_4_;
  auVar25._0_4_ = auVar25._8_4_;
  auVar25._12_4_ = auVar25._8_4_;
  auVar44._4_4_ = fVar46;
  auVar44._0_4_ = fVar46;
  auVar44._8_4_ = fVar46;
  auVar44._12_4_ = fVar46;
  fVar49 = (float)_DAT_03cab640;
  fVar50 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar51 = (float)_UNK_03cab648;
  fVar48 = (float)((ulong)_UNK_03cab648 >> 0x20);
  auVar38 = NEON_ext(auVar44,auVar15,0xc,1);
  auVar26._4_12_ = auVar25._4_12_;
  auVar28._0_8_ = auVar26._0_8_;
  auVar28._8_4_ = fVar36;
  auVar28._12_4_ = auVar25._8_4_;
  auVar27._8_8_ = auVar28._8_8_;
  auVar27._4_4_ = auVar25._8_4_;
  auVar27._0_4_ = auVar26._0_4_;
  auVar29._0_12_ = auVar27._0_12_;
  auVar29._12_4_ = auVar25._8_4_;
  fVar45 = (float)_DAT_03caa5b0 * fVar22 + fVar23 * fVar49 * 0.0 +
           (float)DAT_03cab620 * auVar38._0_4_ * fVar49 + (float)_DAT_03caad80 * auVar15._0_4_;
  fVar46 = (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar22 + fVar46 * fVar50 * 0.0 +
           (float)((ulong)DAT_03cab620 >> 0x20) * auVar38._4_4_ * fVar50 +
           (float)((ulong)_DAT_03caad80 >> 0x20) * auVar15._4_4_;
  fVar47 = (float)_UNK_03caa5b8 * fVar22 + fVar47 * fVar51 * 0.0 +
           (float)DAT_03cab628 * auVar38._8_4_ * fVar51 + (float)_UNK_03caad88 * auVar15._8_4_;
  fVar48 = (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar22 + fVar23 * fVar48 * 0.0 +
           (float)((ulong)DAT_03cab628 >> 0x20) * auVar38._12_4_ * fVar48 +
           (float)((ulong)_UNK_03caad88 >> 0x20) * auVar15._12_4_;
  auVar16._4_4_ = fVar47;
  auVar16._0_4_ = fVar47;
  auVar16._8_4_ = fVar47;
  auVar16._12_4_ = fVar47;
  auVar2._4_4_ = fVar46;
  auVar2._0_4_ = fVar45;
  auVar2._8_4_ = fVar47;
  auVar2._12_4_ = fVar48;
  auVar15 = NEON_ext(auVar16,auVar2,0xc,1);
  auVar42._4_4_ = fVar46;
  auVar42._0_4_ = fVar46;
  auVar42._8_4_ = fVar46;
  auVar42._12_4_ = fVar46;
  auVar40 = NEON_ext(auVar29,auVar29,8,1);
  fVar23 = auVar40._0_4_;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = fVar23;
  auVar32._0_8_ = auVar30._0_8_;
  auVar32._8_4_ = auVar40._8_4_;
  auVar32._12_4_ = auVar25._8_4_;
  auVar31._8_8_ = auVar32._8_8_;
  auVar31._4_4_ = auVar26._0_4_;
  auVar31._0_4_ = fVar23;
  auVar33._0_12_ = auVar31._0_12_;
  auVar33._12_4_ = fVar36;
  auVar43 = NEON_ext(auVar42,auVar15,0xc,1);
  auVar38 = NEON_ext(auVar33,auVar40,8,1);
  auVar38 = NEON_ext(auVar38,auVar38,0xc,1);
  fVar23 = (auVar26._0_4_ * fVar48 + fVar22 * fVar45 * fVar49 +
           auVar38._0_4_ * auVar43._0_4_ * fVar49) - auVar15._0_4_ * fVar23;
  fVar46 = (fVar36 * fVar48 + fVar22 * fVar46 * fVar50 + auVar38._4_4_ * auVar43._4_4_ * fVar50) -
           auVar15._4_4_ * auVar40._4_4_;
  fVar47 = (auVar25._8_4_ * fVar48 + fVar22 * fVar47 * fVar51 +
           auVar38._8_4_ * auVar43._8_4_ * fVar51) - auVar15._8_4_ * auVar40._8_4_;
  auVar5._0_4_ = fVar23 * fVar23 + fVar46 * fVar46;
  auVar5._4_4_ = fVar47 * fVar47 + 0.0;
  auVar5._8_4_ = fVar23 * fVar23 + fVar46 * fVar46;
  auVar5._12_4_ = fVar47 * fVar47 + 0.0;
  auVar15 = NEON_ext(auVar5,auVar5,4,1);
  auVar6._0_4_ = auVar15._0_4_ + auVar15._4_4_;
  auVar6._4_4_ = auVar15._8_4_ + auVar15._12_4_;
  auVar6._8_4_ = auVar15._0_4_ + auVar15._4_4_;
  auVar6._12_4_ = auVar15._8_4_ + auVar15._12_4_;
  auVar15 = NEON_frsqrte(auVar6,4);
  auVar34._0_4_ = auVar6._0_4_ * auVar15._0_4_;
  auVar34._4_4_ = auVar6._4_4_ * auVar15._4_4_;
  auVar34._8_4_ = auVar6._8_4_ * auVar15._8_4_;
  auVar34._12_4_ = auVar6._12_4_ * auVar15._12_4_;
  auVar38 = NEON_frsqrts(auVar15,auVar34,4);
  auVar17._0_4_ = auVar15._0_4_ * auVar38._0_4_;
  auVar17._4_4_ = auVar15._4_4_ * auVar38._4_4_;
  auVar17._8_4_ = auVar15._8_4_ * auVar38._8_4_;
  auVar17._12_4_ = auVar15._12_4_ * auVar38._12_4_;
  auVar35._0_4_ = auVar6._0_4_ * auVar17._0_4_;
  auVar35._4_4_ = auVar6._4_4_ * auVar17._4_4_;
  auVar35._8_4_ = auVar6._8_4_ * auVar17._8_4_;
  auVar35._12_4_ = auVar6._12_4_ * auVar17._12_4_;
  iVar13 = -(uint)(auVar6._0_4_ == 0.0);
  iVar19 = -(uint)(auVar6._4_4_ == 0.0);
  iVar20 = -(uint)(auVar6._8_4_ == 0.0);
  iVar21 = -(uint)(auVar6._12_4_ == 0.0);
  auVar15 = NEON_frsqrts(auVar17,auVar35,4);
  fVar23 = auVar17._0_4_ * auVar15._0_4_ * fVar23;
  fVar46 = auVar17._4_4_ * auVar15._4_4_ * fVar46;
  fVar47 = auVar17._8_4_ * auVar15._8_4_ * fVar47;
  fVar22 = auVar17._12_4_ * auVar15._12_4_ * 0.0;
  fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                           CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                    CONCAT11((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                             SUB41(fVar23,0) & ~(byte)iVar13)));
  auVar14._0_8_ =
       CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                         CONCAT15((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                  CONCAT14(SUB41(fVar46,0) & ~(byte)iVar19,fVar23))));
  auVar14[8] = SUB41(fVar47,0) & ~(byte)iVar20;
  auVar14[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar20 >> 8);
  auVar14[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
  auVar14[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
  auVar18[0xc] = SUB41(fVar22,0) & ~(byte)iVar21;
  auVar18._0_12_ = auVar14;
  auVar18[0xd] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar21 >> 8);
  auVar18[0xe] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  auVar18[0xf] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  fVar46 = (float)((ulong)auVar14._0_8_ >> 0x20);
  fVar47 = auVar14._8_4_;
  fVar22 = auVar18._12_4_;
  auVar7._0_4_ = fVar23 * fVar23 + fVar46 * fVar46;
  auVar7._4_4_ = fVar47 * fVar47 + fVar22 * fVar22;
  auVar7._8_4_ = fVar23 * fVar23 + fVar46 * fVar46;
  auVar7._12_4_ = fVar47 * fVar47 + fVar22 * fVar22;
  auVar15 = NEON_ext(auVar7,auVar7,4,1);
  if (auVar15._0_4_ + auVar15._4_4_ <= 0.0) {
    return 1;
  }
  auVar8._0_4_ = fVar9 * fVar23 + fVar10 * fVar46;
  auVar8._4_4_ = fVar11 * fVar47 + fVar12 * fVar22;
  auVar8._8_4_ = fVar9 * fVar23 + fVar10 * fVar46;
  auVar8._12_4_ = fVar11 * fVar47 + fVar12 * fVar22;
  auVar15 = NEON_ext(auVar8,auVar8,4,1);
  fVar12 = fVar23 * fVar11 - fVar9 * fVar47;
  fVar9 = auVar15._0_4_ + auVar15._4_4_;
  if (fVar12 <= 0.0) {
    if (0.0 <= fVar12) goto LAB_020d611c;
    uVar1 = *(uint *)(param_1 + 0x78);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x74);
  }
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  uVar4 = (ulong)(*(float *)(lVar3 + (ulong)uVar1) *
                  (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390) *
                 (fVar12 / *(float *)PTR_FloatPi_047d23a0));
  if (fVar9 < *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar4 >> 0x18 & 0xff) * 0x10) +
              *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar4 >> 0x18 & 0xff) * 0x10) + 8)
              * (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08) {
    return 0;
  }
LAB_020d611c:
  fVar10 = fVar11 * fVar46 - fVar47 * fVar10;
  if (fVar10 <= 0.0) {
    if (0.0 <= fVar10) {
      return 1;
    }
    uVar1 = *(uint *)(param_1 + 0x7c);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x80);
  }
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  uVar4 = (ulong)(*(float *)(lVar3 + (ulong)uVar1) *
                  (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390) *
                 (fVar10 / *(float *)PTR_FloatPi_047d23a0));
  if (*(float *)(PTR_SinCosSampleTable_047d2398 + (uVar4 >> 0x18 & 0xff) * 0x10) +
      *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar4 >> 0x18 & 0xff) * 0x10) + 8) *
      (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08 <= fVar9) {
    return 1;
  }
  return 0;
}


