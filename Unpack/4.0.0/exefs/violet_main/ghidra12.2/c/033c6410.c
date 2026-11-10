/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c6410; name: FUN_033c6410
 */


void FUN_033c6410(float param_1,long param_2,uint param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  undefined1 auVar22 [16];
  int iVar28;
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
  float fVar40;
  undefined1 auVar41 [12];
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar48 [14];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 auVar65 [16];
  
  fVar29 = *(float *)(param_4 + 0x14);
  fVar34 = *(float *)(param_4 + 0x18) * param_1;
  fVar12 = fVar34 + param_1 * *(float *)(param_4 + 0x20);
  fVar33 = *(float *)(param_2 + 0xc);
  fVar18 = fVar29 + fVar33 * fVar12;
  fVar36 = fVar12 + fVar34;
  lVar1 = param_7 + (ulong)param_3 * 4;
  fVar35 = fVar36 + fVar34;
  fVar19 = fVar18 + fVar33 * fVar36;
  fVar20 = fVar19 + fVar33 * fVar35;
  auVar42._0_4_ = fVar29 - (float)(int)fVar29;
  auVar42._4_4_ = fVar18 - (float)(int)fVar18;
  auVar42._8_4_ = fVar19 - (float)(int)fVar19;
  auVar42._12_4_ = fVar20 - (float)(int)fVar20;
  if (param_3 != 0) {
    fVar38 = fVar33 * 4.0;
    fVar18 = fVar34 * 4.0;
    fVar29 = *(float *)(param_4 + 0x30) * 0.01;
    fVar37 = *(float *)(param_2 + 0xb0);
    fVar19 = fVar29 + *(float *)(param_4 + 0x38) * 0.01;
    auVar65._0_8_ = CONCAT44(fVar36,fVar12);
    fVar36 = fVar37 + *(float *)(param_2 + 0xb8);
    fVar30 = fVar37 * 4.0;
    fVar31 = *(float *)(param_4 + 0x30) * 0.04;
    fVar39 = fVar36 + fVar37;
    fVar32 = fVar33 * 6.0 * fVar34;
    fVar12 = fVar19 + fVar29;
    fVar47 = fVar39 + fVar37;
    fVar20 = fVar12 + fVar29;
    fVar37 = fVar47 + fVar37;
    fVar29 = fVar20 + fVar29;
    uVar16 = CONCAT44(fVar35 + fVar34,fVar35);
    fVar34 = fVar33 * 20000.0;
    uVar10 = 0;
    do {
      fVar13 = (float)auVar65._0_8_;
      fVar14 = (float)((ulong)auVar65._0_8_ >> 0x20);
      fVar15 = (float)uVar16;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      lVar11 = uVar10 * 4;
      uVar2 = (int)uVar10 + 4;
      uVar10 = (ulong)uVar2;
      pfVar3 = (float *)(param_6 + lVar11);
      fVar35 = auVar42._0_4_ + *pfVar3 * fVar36 * 0.2 * (fVar34 - fVar13 * fVar33);
      fVar23 = auVar42._4_4_ + pfVar3[1] * fVar39 * 0.2 * (fVar34 - fVar14 * fVar33);
      fVar25 = auVar42._8_4_ + pfVar3[2] * fVar47 * 0.2 * (fVar34 - fVar15 * fVar33);
      fVar27 = auVar42._12_4_ + pfVar3[3] * fVar37 * 0.2 * (fVar34 - fVar17 * fVar33);
      fVar36 = fVar36 + fVar30;
      fVar39 = fVar39 + fVar30;
      fVar47 = fVar47 + fVar30;
      fVar37 = fVar37 + fVar30;
      fVar52 = auVar42._0_4_ + fVar32 + fVar38 * fVar13;
      fVar53 = auVar42._4_4_ + fVar32 + fVar38 * fVar14;
      fVar54 = auVar42._8_4_ + fVar32 + fVar38 * fVar15;
      fVar55 = auVar42._12_4_ + fVar32 + fVar38 * fVar17;
      auVar22._0_4_ = fVar35 - (float)(int)fVar35;
      auVar22._4_4_ = fVar23 - (float)(int)fVar23;
      auVar22._8_4_ = fVar25 - (float)(int)fVar25;
      auVar22._12_4_ = fVar27 - (float)(int)fVar27;
      auVar42 = NEON_fmov(0x3f800000,4);
      fVar40 = auVar42._0_4_;
      auVar49._0_4_ = auVar22._0_4_ + fVar40;
      fVar44 = auVar42._4_4_;
      auVar49._4_4_ = auVar22._4_4_ + fVar44;
      fVar45 = auVar42._8_4_;
      auVar49._8_4_ = auVar22._8_4_ + fVar45;
      fVar46 = auVar42._12_4_;
      auVar49._12_4_ = auVar22._12_4_ + fVar46;
      iVar21 = -(uint)(auVar22._4_4_ < 0.0);
      iVar24 = -(uint)(auVar22._8_4_ < 0.0);
      iVar26 = -(uint)(auVar22._12_4_ < 0.0);
      auVar5[4] = (char)iVar21;
      auVar5._0_4_ = -(uint)(auVar22._0_4_ < 0.0);
      auVar5[5] = (char)((uint)iVar21 >> 8);
      auVar5[6] = (char)((uint)iVar21 >> 0x10);
      auVar5[7] = (char)((uint)iVar21 >> 0x18);
      auVar5[8] = (char)iVar24;
      auVar5[9] = (char)((uint)iVar24 >> 8);
      auVar5[10] = (char)((uint)iVar24 >> 0x10);
      auVar5[0xb] = (char)((uint)iVar24 >> 0x18);
      auVar5[0xc] = (char)iVar26;
      auVar5[0xd] = (char)((uint)iVar26 >> 8);
      auVar5[0xe] = (char)((uint)iVar26 >> 0x10);
      auVar5[0xf] = (char)((uint)iVar26 >> 0x18);
      auVar22 = auVar22 ^ (auVar22 ^ auVar49) & auVar5;
      auVar42 = NEON_fmov(0xbf800000,4);
      auVar50._0_4_ = auVar22._0_4_ + auVar42._0_4_;
      auVar50._4_4_ = auVar22._4_4_ + auVar42._4_4_;
      auVar50._8_4_ = auVar22._8_4_ + auVar42._8_4_;
      auVar50._12_4_ = auVar22._12_4_ + auVar42._12_4_;
      iVar21 = -(uint)(auVar50._4_4_ < 0.0);
      iVar24 = -(uint)(auVar50._8_4_ < 0.0);
      iVar26 = -(uint)(auVar50._12_4_ < 0.0);
      auVar6[4] = (char)iVar21;
      auVar6._0_4_ = -(uint)(auVar50._0_4_ < 0.0);
      auVar6[5] = (char)((uint)iVar21 >> 8);
      auVar6[6] = (char)((uint)iVar21 >> 0x10);
      auVar6[7] = (char)((uint)iVar21 >> 0x18);
      auVar6[8] = (char)iVar24;
      auVar6[9] = (char)((uint)iVar24 >> 8);
      auVar6[10] = (char)((uint)iVar24 >> 0x10);
      auVar6[0xb] = (char)((uint)iVar24 >> 0x18);
      auVar6[0xc] = (char)iVar26;
      auVar6[0xd] = (char)((uint)iVar26 >> 8);
      auVar6[0xe] = (char)((uint)iVar26 >> 0x10);
      auVar6[0xf] = (char)((uint)iVar26 >> 0x18);
      auVar22 = auVar22 ^ (auVar22 ^ auVar50) & ~auVar6;
      auVar51._0_4_ = fVar40 - fVar19;
      auVar51._4_4_ = fVar44 - fVar12;
      auVar51._8_4_ = fVar45 - fVar20;
      auVar51._12_4_ = fVar46 - fVar29;
      iVar21 = -(uint)(fVar19 <= auVar22._0_4_);
      iVar24 = -(uint)(fVar12 <= auVar22._4_4_);
      uVar56 = (undefined1)((uint)iVar24 >> 8);
      uVar57 = (undefined1)((uint)iVar24 >> 0x10);
      bVar58 = (byte)((uint)iVar24 >> 0x18);
      iVar26 = -(uint)(fVar20 <= auVar22._8_4_);
      uVar59 = (undefined1)((uint)iVar26 >> 8);
      uVar60 = (undefined1)((uint)iVar26 >> 0x10);
      bVar61 = (byte)((uint)iVar26 >> 0x18);
      iVar28 = -(uint)(fVar29 <= auVar22._12_4_);
      uVar62 = (undefined1)((uint)iVar28 >> 8);
      uVar63 = (undefined1)((uint)iVar28 >> 0x10);
      bVar64 = (byte)((uint)iVar28 >> 0x18);
      auVar4._4_4_ = fVar12;
      auVar4._0_4_ = fVar19;
      auVar4._8_4_ = fVar20;
      auVar4._12_4_ = fVar29;
      auVar7[4] = (char)iVar24;
      auVar7._0_4_ = iVar21;
      auVar7[5] = uVar56;
      auVar7[6] = uVar57;
      auVar7[7] = bVar58;
      auVar7[8] = (char)iVar26;
      auVar7[9] = uVar59;
      auVar7[10] = uVar60;
      auVar7[0xb] = bVar61;
      auVar7[0xc] = (char)iVar28;
      auVar7[0xd] = uVar62;
      auVar7[0xe] = uVar63;
      auVar7[0xf] = bVar64;
      auVar51 = auVar51 ^ (auVar51 ^ auVar4) & ~auVar7;
      auVar9._4_4_ = auVar22._4_4_ - fVar12;
      auVar9._0_4_ = auVar22._0_4_ - fVar19;
      auVar9._8_4_ = auVar22._8_4_ - fVar20;
      auVar9._12_4_ = auVar22._12_4_ - fVar29;
      auVar8[4] = (char)iVar24;
      auVar8._0_4_ = iVar21;
      auVar8[5] = uVar56;
      auVar8[6] = uVar57;
      auVar8[7] = bVar58;
      auVar8[8] = (char)iVar26;
      auVar8[9] = uVar59;
      auVar8[10] = uVar60;
      auVar8[0xb] = bVar61;
      auVar8[0xc] = (char)iVar28;
      auVar8[0xd] = uVar62;
      auVar8[0xe] = uVar63;
      auVar8[0xf] = bVar64;
      auVar22 = auVar22 ^ (auVar22 ^ auVar9) & auVar8;
      fVar19 = fVar19 + fVar31;
      fVar12 = fVar12 + fVar31;
      fVar20 = fVar20 + fVar31;
      fVar29 = fVar29 + fVar31;
      auVar65 = NEON_frecpe(auVar51,4);
      auVar42 = NEON_frecps(auVar51,auVar65,4);
      fVar35 = (float)((uint)((byte)((uint)iVar21 >> 0x18) & 0x3f) << 0x18) +
               auVar22._0_4_ * auVar65._0_4_ * 0.5 * auVar42._0_4_;
      fVar23 = (float)((uint)(bVar58 & 0x3f) << 0x18) +
               auVar22._4_4_ * auVar65._4_4_ * 0.5 * auVar42._4_4_;
      fVar25 = (float)((uint)(bVar61 & 0x3f) << 0x18) +
               auVar22._8_4_ * auVar65._8_4_ * 0.5 * auVar42._8_4_;
      fVar27 = (float)((uint)(bVar64 & 0x3f) << 0x18) +
               auVar22._12_4_ * auVar65._12_4_ * 0.5 * auVar42._12_4_;
      auVar65._0_8_ = CONCAT44(fVar14 + fVar18,fVar13 + fVar18);
      auVar65._8_4_ = fVar15 + fVar18;
      auVar65._12_4_ = fVar17 + fVar18;
      iVar21 = -(uint)(fVar35 < fVar40);
      iVar24 = -(uint)(fVar23 < fVar44);
      iVar26 = -(uint)(fVar25 < fVar45);
      iVar28 = -(uint)(fVar27 < fVar46);
      fVar35 = fVar35 * 512.0;
      fVar23 = fVar23 * 512.0;
      fVar25 = fVar25 * 512.0;
      fVar27 = fVar27 * 512.0;
      fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                               CONCAT12((byte)((uint)fVar35 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                                        CONCAT11((byte)((uint)fVar35 >> 8) &
                                                 (byte)((uint)iVar21 >> 8),
                                                 SUB41(fVar35,0) & (byte)iVar21)));
      auVar41._0_8_ =
           CONCAT17((byte)((uint)fVar23 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                    CONCAT16((byte)((uint)fVar23 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                             CONCAT15((byte)((uint)fVar23 >> 8) & (byte)((uint)iVar24 >> 8),
                                      CONCAT14(SUB41(fVar23,0) & (byte)iVar24,fVar35))));
      auVar41[8] = SUB41(fVar25,0) & (byte)iVar26;
      auVar41[9] = (byte)((uint)fVar25 >> 8) & (byte)((uint)iVar26 >> 8);
      auVar41[10] = (byte)((uint)fVar25 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
      auVar41[0xb] = (byte)((uint)fVar25 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
      auVar43[0xc] = SUB41(fVar27,0) & (byte)iVar28;
      auVar43._0_12_ = auVar41;
      auVar43[0xd] = (byte)((uint)fVar27 >> 8) & (byte)((uint)iVar28 >> 8);
      auVar43[0xe] = (byte)((uint)fVar27 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
      auVar43[0xf] = (byte)((uint)fVar27 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
      fVar23 = (float)((ulong)auVar41._0_8_ >> 0x20);
      iVar21 = (int)fVar23;
      fVar25 = auVar41._8_4_;
      fVar27 = auVar43._12_4_;
      iVar24 = (int)fVar27;
      auVar42._0_4_ = fVar52 - (float)(int)fVar52;
      auVar42._4_4_ = fVar53 - (float)(int)fVar53;
      auVar42._8_4_ = fVar54 - (float)(int)fVar54;
      auVar42._12_4_ = fVar55 - (float)(int)fVar55;
      iVar26 = (int)fVar25 + 1;
      uVar16 = auVar65._8_8_;
      ((undefined8 *)(param_7 + lVar11))[1] =
           CONCAT17((char)((uint)iVar24 >> 0x18),
                    CONCAT16((char)((uint)iVar24 >> 0x10),
                             CONCAT15((char)((uint)iVar24 >> 8),CONCAT14((char)iVar24,(int)fVar25)))
                   );
      *(undefined8 *)(param_7 + lVar11) =
           CONCAT17((char)((uint)iVar21 >> 0x18),
                    CONCAT16((char)((uint)iVar21 >> 0x10),
                             CONCAT15((char)((uint)iVar21 >> 8),CONCAT14((char)iVar21,(int)fVar35)))
                   );
      auVar48._0_8_ =
           CONCAT26(0,CONCAT15((char)((uint)(iVar21 + 1) >> 8),
                               CONCAT14((char)(iVar21 + 1),(uint)((short)(int)fVar35 + 1U & 0x1ff)))
                      & 0x1ffffffffff);
      auVar48[8] = (char)iVar26;
      auVar48[9] = (byte)((uint)iVar26 >> 8) & 1;
      auVar48._10_2_ = 0;
      auVar48[0xc] = (char)(iVar24 + 1);
      auVar48[0xd] = (byte)((uint)(iVar24 + 1) >> 8) & 1;
      ((ulong *)(lVar1 + lVar11))[1] = (ulong)auVar48._8_6_;
      *(ulong *)(lVar1 + lVar11) = auVar48._0_8_;
      pfVar3 = (float *)(param_5 + lVar11);
      pfVar3[2] = fVar25 - (float)(int)fVar25;
      pfVar3[3] = fVar27 - (float)(int)fVar27;
      *pfVar3 = fVar35 - (float)(int)fVar35;
      pfVar3[1] = fVar23 - (float)(int)fVar23;
    } while (uVar2 < param_3);
  }
  *(int *)(param_4 + 0x14) = auVar42._0_4_;
  FUN_033c5e00(*(undefined8 *)(param_4 + 8),param_3,param_7,lVar1);
  FUN_033c5eb0(param_3,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1,param_5,param_5);
  return;
}


