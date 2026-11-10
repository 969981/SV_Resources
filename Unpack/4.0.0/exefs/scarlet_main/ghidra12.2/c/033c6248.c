/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c6248; name: FUN_033c6248
 */


void FUN_033c6248(float param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  byte bVar49;
  int iVar50;
  int iVar53;
  int iVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar55;
  int iVar57;
  undefined1 auVar56 [16];
  int iVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  
  fVar20 = *(float *)(param_4 + 0x14);
  fVar23 = *(float *)(param_4 + 0x18) * param_1;
  fVar12 = fVar23 + param_1 * *(float *)(param_4 + 0x20);
  fVar22 = *(float *)(param_2 + 0xc);
  fVar16 = fVar20 + fVar22 * fVar12;
  fVar26 = fVar12 + fVar23;
  lVar1 = param_7 + (ulong)param_3 * 4;
  fVar24 = fVar26 + fVar23;
  fVar17 = fVar16 + fVar22 * fVar26;
  fVar18 = fVar17 + fVar22 * fVar24;
  fVar20 = fVar20 - (float)(int)fVar20;
  fVar16 = fVar16 - (float)(int)fVar16;
  fVar17 = fVar17 - (float)(int)fVar17;
  fVar18 = fVar18 - (float)(int)fVar18;
  if (param_3 != 0) {
    fVar19 = fVar23 * 4.0;
    fVar21 = fVar22 * 4.0;
    auVar60._0_8_ = CONCAT44(fVar26,fVar12);
    fVar27 = fVar22 * 6.0 * fVar23;
    fVar12 = *(float *)(param_4 + 0x30) * 0.01;
    fVar26 = *(float *)(param_4 + 0x30) * 0.04;
    uVar14 = CONCAT44(fVar24 + fVar23,fVar24);
    fVar22 = fVar12 + *(float *)(param_4 + 0x38) * 0.01;
    fVar23 = fVar22 + fVar12;
    fVar24 = fVar23 + fVar12;
    fVar12 = fVar24 + fVar12;
    auVar25 = NEON_fmov(0x3f800000,4);
    uVar10 = 0;
    do {
      iVar50 = -(uint)(fVar22 <= fVar20);
      iVar53 = -(uint)(fVar23 <= fVar16);
      uVar33 = (undefined1)((uint)iVar53 >> 8);
      uVar35 = (undefined1)((uint)iVar53 >> 0x10);
      bVar28 = (byte)((uint)iVar53 >> 0x18);
      iVar54 = -(uint)(fVar24 <= fVar17);
      uVar39 = (undefined1)((uint)iVar54 >> 8);
      uVar41 = (undefined1)((uint)iVar54 >> 0x10);
      bVar29 = (byte)((uint)iVar54 >> 0x18);
      iVar55 = -(uint)(fVar12 <= fVar18);
      uVar45 = (undefined1)((uint)iVar55 >> 8);
      uVar47 = (undefined1)((uint)iVar55 >> 0x10);
      bVar30 = (byte)((uint)iVar55 >> 0x18);
      auVar51._0_4_ = auVar25._0_4_ - fVar22;
      auVar51._4_4_ = auVar25._4_4_ - fVar23;
      auVar51._8_4_ = auVar25._8_4_ - fVar24;
      auVar51._12_4_ = auVar25._12_4_ - fVar12;
      lVar11 = uVar10 * 4;
      auVar56._0_4_ = fVar20 - fVar22;
      auVar56._4_4_ = fVar16 - fVar23;
      auVar56._8_4_ = fVar17 - fVar24;
      auVar56._12_4_ = fVar18 - fVar12;
      uVar2 = (int)uVar10 + 4;
      uVar10 = (ulong)uVar2;
      auVar59._4_4_ = fVar23;
      auVar59._0_4_ = fVar22;
      auVar59._8_4_ = fVar24;
      auVar59._12_4_ = fVar12;
      auVar4[4] = (char)iVar53;
      auVar4._0_4_ = iVar50;
      auVar4[5] = uVar33;
      auVar4[6] = uVar35;
      auVar4[7] = bVar28;
      auVar4[8] = (char)iVar54;
      auVar4[9] = uVar39;
      auVar4[10] = uVar41;
      auVar4[0xb] = bVar29;
      auVar4[0xc] = (char)iVar55;
      auVar4[0xd] = uVar45;
      auVar4[0xe] = uVar47;
      auVar4[0xf] = bVar30;
      auVar51 = auVar51 ^ (auVar51 ^ auVar59) & ~auVar4;
      auVar52._4_4_ = fVar16;
      auVar52._0_4_ = fVar20;
      auVar52._8_4_ = fVar17;
      auVar52._12_4_ = fVar18;
      auVar5[4] = (char)iVar53;
      auVar5._0_4_ = iVar50;
      auVar5[5] = uVar33;
      auVar5[6] = uVar35;
      auVar5[7] = bVar28;
      auVar5[8] = (char)iVar54;
      auVar5[9] = uVar39;
      auVar5[10] = uVar41;
      auVar5[0xb] = bVar29;
      auVar5[0xc] = (char)iVar55;
      auVar5[0xd] = uVar45;
      auVar5[0xe] = uVar47;
      auVar5[0xf] = bVar30;
      auVar56 = auVar56 ^ (auVar56 ^ auVar52) & ~auVar5;
      fVar13 = (float)((ulong)auVar60._0_8_ >> 0x20);
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar20 = fVar20 + fVar27 + fVar21 * (float)auVar60._0_8_;
      fVar16 = fVar16 + fVar27 + fVar21 * fVar13;
      fVar17 = fVar17 + fVar27 + fVar21 * (float)uVar14;
      fVar18 = fVar18 + fVar27 + fVar21 * fVar15;
      auVar59 = NEON_frecpe(auVar51,4);
      auVar52 = NEON_frecps(auVar51,auVar59,4);
      fVar6 = (float)((uint)((byte)((uint)iVar50 >> 0x18) & 0x3f) << 0x18) +
              auVar52._0_4_ * auVar59._0_4_ * auVar56._0_4_ * 0.5;
      fVar7 = (float)((uint)(bVar28 & 0x3f) << 0x18) +
              auVar52._4_4_ * auVar59._4_4_ * auVar56._4_4_ * 0.5;
      fVar8 = (float)((uint)(bVar29 & 0x3f) << 0x18) +
              auVar52._8_4_ * auVar59._8_4_ * auVar56._8_4_ * 0.5;
      fVar9 = (float)((uint)(bVar30 & 0x3f) << 0x18) +
              auVar52._12_4_ * auVar59._12_4_ * auVar56._12_4_ * 0.5;
      auVar60._0_8_ = CONCAT44(fVar13 + fVar19,(float)auVar60._0_8_ + fVar19);
      auVar60._8_4_ = (float)uVar14 + fVar19;
      auVar60._12_4_ = fVar15 + fVar19;
      iVar50 = -(uint)(fVar6 < auVar25._0_4_);
      iVar53 = -(uint)(fVar7 < auVar25._4_4_);
      iVar54 = -(uint)(fVar8 < auVar25._8_4_);
      iVar55 = -(uint)(fVar9 < auVar25._12_4_);
      fVar6 = fVar6 * 512.0;
      fVar7 = fVar7 * 512.0;
      fVar8 = fVar8 * 512.0;
      fVar9 = fVar9 * 512.0;
      bVar28 = SUB41(fVar6,0) & (byte)iVar50;
      bVar29 = (byte)((uint)fVar6 >> 8) & (byte)((uint)iVar50 >> 8);
      bVar30 = (byte)((uint)fVar6 >> 0x10) & (byte)((uint)iVar50 >> 0x10);
      bVar31 = (byte)((uint)fVar6 >> 0x18) & (byte)((uint)iVar50 >> 0x18);
      bVar32 = SUB41(fVar7,0) & (byte)iVar53;
      bVar34 = (byte)((uint)fVar7 >> 8) & (byte)((uint)iVar53 >> 8);
      bVar36 = (byte)((uint)fVar7 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
      bVar37 = (byte)((uint)fVar7 >> 0x18) & (byte)((uint)iVar53 >> 0x18);
      bVar38 = SUB41(fVar8,0) & (byte)iVar54;
      bVar40 = (byte)((uint)fVar8 >> 8) & (byte)((uint)iVar54 >> 8);
      bVar42 = (byte)((uint)fVar8 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
      bVar43 = (byte)((uint)fVar8 >> 0x18) & (byte)((uint)iVar54 >> 0x18);
      bVar44 = SUB41(fVar9,0) & (byte)iVar55;
      bVar46 = (byte)((uint)fVar9 >> 8) & (byte)((uint)iVar55 >> 8);
      bVar48 = (byte)((uint)fVar9 >> 0x10) & (byte)((uint)iVar55 >> 0x10);
      bVar49 = (byte)((uint)fVar9 >> 0x18) & (byte)((uint)iVar55 >> 0x18);
      iVar50 = (int)(float)CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
      iVar53 = (int)(float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar34,bVar32)));
      iVar54 = (int)(float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar40,bVar38)));
      iVar55 = (int)(float)CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
      fVar6 = (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar34,bVar32))) -
              (float)(int)(float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar34,bVar32)));
      fVar7 = (float)CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar46,bVar44))) -
              (float)(int)(float)CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
      iVar57 = iVar53 + 1;
      iVar58 = iVar55 + 1;
      fVar20 = fVar20 - (float)(int)fVar20;
      fVar16 = fVar16 - (float)(int)fVar16;
      fVar17 = fVar17 - (float)(int)fVar17;
      fVar18 = fVar18 - (float)(int)fVar18;
      fVar22 = fVar22 + fVar26;
      fVar23 = fVar23 + fVar26;
      fVar24 = fVar24 + fVar26;
      fVar12 = fVar12 + fVar26;
      piVar3 = (int *)(param_7 + lVar11);
      piVar3[2] = iVar54;
      piVar3[3] = iVar55;
      *piVar3 = iVar50;
      piVar3[1] = iVar53;
      ((ulong *)(lVar1 + lVar11))[1] =
           (ulong)(CONCAT15((char)((uint)iVar58 >> 8),
                            CONCAT14((char)iVar58,(uint)((short)iVar54 + 1U & 0x1ff))) &
                  0x1ffffffffff);
      *(ulong *)(lVar1 + lVar11) =
           (ulong)(CONCAT15((char)((uint)iVar57 >> 8),
                            CONCAT14((char)iVar57,(uint)((short)iVar50 + 1U & 0x1ff))) &
                  0x1ffffffffff);
      uVar14 = auVar60._8_8_;
      ((undefined8 *)(param_5 + lVar11))[1] =
           CONCAT17((char)((uint)fVar7 >> 0x18),
                    CONCAT16((char)((uint)fVar7 >> 0x10),
                             CONCAT15((char)((uint)fVar7 >> 8),
                                      CONCAT14(SUB41(fVar7,0),
                                               (float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(
                                                  bVar40,bVar38))) -
                                               (float)(int)(float)CONCAT13(bVar43,CONCAT12(bVar42,
                                                  CONCAT11(bVar40,bVar38)))))));
      *(undefined8 *)(param_5 + lVar11) =
           CONCAT17((char)((uint)fVar6 >> 0x18),
                    CONCAT16((char)((uint)fVar6 >> 0x10),
                             CONCAT15((char)((uint)fVar6 >> 8),
                                      CONCAT14(SUB41(fVar6,0),
                                               (float)CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(
                                                  bVar29,bVar28))) -
                                               (float)(int)(float)CONCAT13(bVar31,CONCAT12(bVar30,
                                                  CONCAT11(bVar29,bVar28)))))));
    } while (uVar2 < param_3);
  }
  *(float *)(param_4 + 0x14) = fVar20;
  FUN_033c5e00(*(undefined8 *)(param_4 + 8),param_3,param_7,lVar1);
  FUN_033c5eb0(param_3,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1,param_5,param_5);
  return;
}


