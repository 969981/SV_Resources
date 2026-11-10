/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb0560; name: FUN_00cb0560
 */


void FUN_00cb0560(undefined8 *param_1,uint param_2,int param_3,undefined8 *param_4,float *param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  undefined3 uVar4;
  undefined3 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  float fVar22;
  undefined1 auVar23 [12];
  byte bVar27;
  undefined1 auVar24 [16];
  byte bVar26;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  int iVar37;
  int iVar39;
  int iVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  int iVar43;
  undefined1 auVar44 [16];
  
  uVar11 = param_4[1];
  auVar24._8_4_ = 0x3a83126f;
  auVar24._0_8_ = 0x3a83126f3a83126f;
  auVar24._12_4_ = 0x3a83126f;
  fVar28 = (float)*param_4;
  fVar31 = (float)((ulong)*param_4 >> 0x20);
  fVar33 = ABS(fVar31);
  fVar6 = ABS((float)uVar11);
  fVar32 = (float)((ulong)uVar11 >> 0x20);
  fVar22 = ABS(fVar32);
  auVar29[4] = SUB41(fVar33,0);
  auVar29._0_4_ = ABS(fVar28);
  auVar29[5] = (char)((uint)fVar33 >> 8);
  auVar29[6] = (char)((uint)fVar33 >> 0x10);
  auVar29[7] = (char)((uint)fVar33 >> 0x18);
  auVar29[8] = SUB41(fVar6,0);
  auVar29[9] = (char)((uint)fVar6 >> 8);
  auVar29[10] = (char)((uint)fVar6 >> 0x10);
  auVar29[0xb] = (char)((uint)fVar6 >> 0x18);
  auVar29[0xc] = SUB41(fVar22,0);
  auVar29[0xd] = (char)((uint)fVar22 >> 8);
  auVar29[0xe] = (char)((uint)fVar22 >> 0x10);
  auVar29[0xf] = (char)((uint)fVar22 >> 0x18);
  auVar29 = NEON_fmax(auVar29,auVar24,4);
  uVar12 = auVar29[0];
  uVar13 = auVar29[1];
  uVar14 = auVar29[2];
  bVar15 = (byte)(-(uint)(fVar28 < 0.0) >> 0x18) & 0x80 ^ auVar29[3];
  uVar16 = auVar29[4];
  uVar17 = auVar29[5];
  uVar18 = auVar29[6];
  bVar19 = (byte)(-(uint)(fVar31 < 0.0) >> 0x18) & 0x80 ^ auVar29[7];
  auVar23[8] = auVar29[8];
  auVar23[9] = auVar29[9];
  auVar23[10] = auVar29[10];
  bVar20 = (byte)(-(uint)((float)uVar11 < 0.0) >> 0x18) & 0x80 ^ auVar29[0xb];
  bVar21 = (byte)(-(uint)(fVar32 < 0.0) >> 0x18) & 0x80 ^ auVar29[0xf];
  if ((int)param_2 < 3) {
    *param_5 = *param_5 * auVar29._0_4_;
    uVar16 = uVar12;
    uVar17 = uVar13;
    uVar18 = uVar14;
    bVar27 = bVar15;
    auVar23[8] = uVar12;
    auVar23[9] = uVar13;
    auVar23[10] = uVar14;
    auVar23[0xb] = bVar15;
  }
  else {
    bVar27 = bVar19;
    auVar23[0xb] = bVar20;
    if ((param_3 == 0) && (fVar33 = *param_5, 1e-05 < ABS(fVar33))) {
      auVar38 = NEON_fmov(0xbf800000,4);
      uVar3 = auVar29._0_3_;
      uVar4 = auVar29._4_3_;
      uVar5 = auVar29._8_3_;
      iVar37 = -(uint)(ABS((float)CONCAT13(bVar15,uVar3) + auVar38._0_4_) <= 1.1920929e-07);
      iVar39 = -(uint)(ABS((float)CONCAT13(bVar19,uVar4) + auVar38._4_4_) <= 1.1920929e-07);
      iVar40 = -(uint)(ABS((float)CONCAT13(bVar20,uVar5) + auVar38._8_4_) <= 1.1920929e-07);
      if (CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                   (byte)((uint)iVar40 >> 0x18),
                   CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                            (byte)((uint)iVar40 >> 0x10),
                            CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar37 >> 8) &
                                     (byte)((uint)iVar40 >> 8),
                                     (byte)iVar39 & (byte)iVar37 & (byte)iVar40))) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 1);
        auVar38._0_8_ = *param_1;
        puVar10 = (undefined4 *)((long)param_1 + 0x14);
        uVar35 = CONCAT17((char)((uint)uVar2 >> 0x18),
                          CONCAT16((char)((uint)uVar2 >> 0x10),
                                   CONCAT15((char)((uint)uVar2 >> 8),CONCAT14((char)uVar2,uVar2))));
        auVar38._8_8_ = uVar35;
        auVar44._8_8_ = uVar35;
        auVar44._0_8_ = auVar38._0_8_;
        lVar9 = (ulong)param_2 - 1;
        do {
          uVar2 = *puVar10;
          uVar16 = (undefined1)uVar2;
          uVar17 = (undefined1)((uint)uVar2 >> 8);
          uVar18 = (undefined1)((uint)uVar2 >> 0x10);
          auVar23[8] = (undefined1)((uint)uVar2 >> 0x18);
          lVar9 = lVar9 + -1;
          puVar1 = (undefined8 *)(puVar10 + -2);
          puVar10 = puVar10 + 3;
          auVar7[8] = uVar16;
          auVar7._0_8_ = *puVar1;
          auVar7[9] = uVar17;
          auVar7[10] = uVar18;
          auVar7[0xb] = auVar23[8];
          auVar7[0xc] = uVar16;
          auVar7[0xd] = uVar17;
          auVar7[0xe] = uVar18;
          auVar7[0xf] = auVar23[8];
          auVar44 = NEON_fmin(auVar44,auVar7,4);
          auVar8[8] = uVar16;
          auVar8._0_8_ = *puVar1;
          auVar8[9] = uVar17;
          auVar8[10] = uVar18;
          auVar8[0xb] = auVar23[8];
          auVar8[0xc] = uVar16;
          auVar8[0xd] = uVar17;
          auVar8[0xe] = uVar18;
          auVar8[0xf] = auVar23[8];
          auVar38 = NEON_fmax(auVar38,auVar8,4);
        } while (lVar9 != 0);
        uVar35 = CONCAT44(fVar33,fVar33);
        fVar6 = (auVar38._0_4_ - auVar44._0_4_) * 0.5;
        fVar22 = (auVar38._4_4_ - auVar44._4_4_) * 0.5;
        fVar41 = (auVar38._8_4_ - auVar44._8_4_) * 0.5;
        fVar42 = (auVar38._12_4_ - auVar44._12_4_) * 0.5;
        fVar28 = auVar29._0_4_ * (fVar33 + fVar6);
        fVar31 = auVar29._4_4_ * (fVar33 + fVar22);
        fVar32 = auVar29._8_4_ * (fVar33 + fVar41);
        iVar37 = -(uint)(fVar33 < fVar28);
        iVar39 = -(uint)(fVar33 < fVar31);
        iVar40 = -(uint)(fVar33 < fVar32);
        if (CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                     (byte)((uint)iVar40 >> 0x18),
                     CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                              (byte)((uint)iVar40 >> 0x10),
                              CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar37 >> 8) &
                                       (byte)((uint)iVar40 >> 8),
                                       (byte)iVar39 & (byte)iVar37 & (byte)iVar40))) == 0) {
          uVar35 = NEON_fminp(CONCAT44(fVar31,fVar28),CONCAT44(fVar31,fVar28),4);
          uVar35 = NEON_fmin(CONCAT44(fVar32,fVar32),uVar35,4);
        }
        fVar34 = (float)uVar35;
        fVar36 = (float)((ulong)uVar35 >> 0x20);
        *param_5 = fVar34;
        fVar28 = (fVar28 - fVar34) / fVar6;
        fVar31 = (fVar31 - fVar36) / fVar22;
        fVar32 = (fVar32 - fVar34) / fVar41;
        fVar33 = (auVar29._12_4_ * (fVar33 + fVar42) - fVar36) / fVar42;
        iVar37 = -(uint)(fVar6 == 0.0);
        iVar39 = -(uint)(fVar22 == 0.0);
        iVar40 = -(uint)(fVar41 == 0.0);
        iVar43 = -(uint)(fVar42 == 0.0);
        auVar30[0] = SUB41(fVar28,0) & ~(byte)iVar37;
        auVar30[1] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar37 >> 8);
        auVar30[2] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
        auVar30[3] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
        auVar30[4] = SUB41(fVar31,0) & ~(byte)iVar39;
        auVar30[5] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar39 >> 8);
        auVar30[6] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
        auVar30[7] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
        auVar30[8] = SUB41(fVar32,0) & ~(byte)iVar40;
        auVar30[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar40 >> 8);
        auVar30[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
        auVar30[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
        auVar30[0xc] = SUB41(fVar33,0) & ~(byte)iVar43;
        auVar30[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar43 >> 8);
        auVar30[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
        auVar30[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
        auVar24 = NEON_fmax(auVar30,auVar24,4);
        bVar26 = (byte)(-(uint)((float)CONCAT13(bVar15,uVar3) < 0.0) >> 0x18) & 0x80 ^ auVar24[3];
        fVar22 = (float)CONCAT13(bVar26,auVar24._0_3_);
        uVar16 = auVar24[4];
        uVar17 = auVar24[5];
        uVar18 = auVar24[6];
        bVar27 = (byte)(-(uint)((float)CONCAT13(bVar19,uVar4) < 0.0) >> 0x18) & 0x80 ^ auVar24[7];
        auVar23._0_8_ = CONCAT17(bVar27,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,fVar22))));
        auVar23[8] = auVar24[8];
        auVar23[9] = auVar24[9];
        auVar23[10] = auVar24[10];
        auVar23[0xb] = (byte)(-(uint)((float)CONCAT13(bVar20,uVar5) < 0.0) >> 0x18) & 0x80 ^
                       auVar24[0xb];
        auVar25[0xc] = auVar24[0xc];
        auVar25._0_12_ = auVar23;
        auVar25[0xd] = auVar24[0xd];
        auVar25[0xe] = auVar24[0xe];
        auVar25[0xf] = (byte)(-(uint)((float)CONCAT13(bVar21,auVar29._12_3_) < 0.0) >> 0x18) & 0x80
                       ^ auVar24[0xf];
        fVar33 = (auVar44._4_4_ + auVar38._4_4_) * 0.5 *
                 ((float)CONCAT13(bVar19,uVar4) - (float)((ulong)auVar23._0_8_ >> 0x20));
        fVar6 = (auVar44._12_4_ + auVar38._12_4_) * 0.5 *
                ((float)CONCAT13(bVar21,auVar29._12_3_) - auVar25._12_4_);
        param_6[1] = CONCAT17((char)((uint)fVar6 >> 0x18),
                              CONCAT16((char)((uint)fVar6 >> 0x10),
                                       CONCAT15((char)((uint)fVar6 >> 8),
                                                CONCAT14(SUB41(fVar6,0),
                                                         (auVar44._8_4_ + auVar38._8_4_) * 0.5 *
                                                         ((float)CONCAT13(bVar20,uVar5) -
                                                         auVar23._8_4_)))));
        *param_6 = CONCAT17((char)((uint)fVar33 >> 0x18),
                            CONCAT16((char)((uint)fVar33 >> 0x10),
                                     CONCAT15((char)((uint)fVar33 >> 8),
                                              CONCAT14(SUB41(fVar33,0),
                                                       (auVar44._0_4_ + auVar38._0_4_) * 0.5 *
                                                       ((float)CONCAT13(bVar15,uVar3) - fVar22)))));
        uVar12 = auVar24[0];
        uVar13 = auVar24[1];
        uVar14 = auVar24[2];
        goto LAB_00cb05f8;
      }
    }
  }
  *param_6 = 0;
  param_6[1] = 0;
  bVar26 = bVar15;
LAB_00cb05f8:
  param_4[1] = CONCAT17((char)((ulong)uVar11 >> 0x38),
                        CONCAT16((char)((ulong)uVar11 >> 0x30),
                                 CONCAT15((char)((ulong)uVar11 >> 0x28),
                                          CONCAT14((char)((ulong)uVar11 >> 0x20),
                                                   CONCAT13(auVar23[0xb],
                                                            CONCAT12(auVar23[10],
                                                                     CONCAT11(auVar23[9],auVar23[8])
                                                                    ))))));
  *param_4 = CONCAT17(bVar27,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(bVar26,
                                                  CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))));
  return;
}


