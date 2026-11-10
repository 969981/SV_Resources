/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f306dc; name: FUN_02f306dc
 */


int FUN_02f306dc(undefined8 *param_1,float *param_2,long param_3,float *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  undefined1 auVar14 [14];
  bool bVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  int iVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  short sVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  ulong uVar44;
  undefined1 auVar45 [16];
  float fVar47;
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  uint6 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  
  bVar22 = *(byte *)((long)param_1 + 0xb);
  uVar17 = (uint)bVar22;
  if (bVar22 == 0xff) {
    return 0;
  }
  uVar20 = *(byte *)((long)param_1 + 10) + 1;
  bVar3 = *(byte *)(param_3 + 0x38);
  uVar5 = (uint)bVar3 << 2;
  if (bVar22 == 0) {
    uVar21 = 0;
    uVar18 = 3;
  }
  else {
    fVar41 = (float)*(undefined8 *)(param_2 + 0xe);
    fVar42 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
    fVar47 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    fVar33 = fVar41 * fVar41 + fVar42 * fVar42 + fVar47 * fVar47;
    uVar18 = (uint)bVar22;
    uVar21 = uVar18 - 1 >> 2;
    if (bVar3 <= uVar21) {
      uVar21 = (uint)bVar3;
    }
    iVar39 = 4 << (ulong)(uVar21 & 0x1f);
    uVar6 = (uint)fVar33 >> 0x17 & 0xff;
    if (fVar33 != 0.0) {
      iVar53 = 0x10 << (ulong)(uVar21 & 0x1f);
      fVar34 = (float)(0x5f375a86 - ((int)fVar33 >> 1));
      uVar43 = NEON_scvtf(CONCAT44(iVar53,iVar53),4);
      fVar55 = *param_4;
      fVar56 = param_4[1];
      fVar49 = param_4[2];
      fVar48 = fVar55 * fVar55 + fVar56 * fVar56 + fVar49 * fVar49;
      iVar53 = -(uint)(fVar48 == 0.0);
      uVar54 = CONCAT13(~(byte)((uint)iVar53 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar53 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar53 >> 8),~(byte)iVar53)));
      uVar44 = CONCAT44(0x5f375a86 -
                        ((int)(fVar55 * fVar55 + fVar56 * fVar56 + fVar49 * fVar49) >> 1),
                        0x5f375a86 - ((int)fVar48 >> 1)) & CONCAT44(uVar54,uVar54);
      fVar48 = (float)uVar44;
      fVar55 = fVar41 * fVar34 * fVar55 * fVar48;
      fVar42 = fVar42 * (float)(0x5f375a86 -
                               ((int)(fVar41 * fVar41 + fVar42 * fVar42 + fVar47 * fVar47) >> 1)) *
               fVar56 * (float)(uVar44 >> 0x20);
      fVar47 = fVar47 * fVar34 * fVar49 * fVar48;
      fVar41 = (fVar55 + fVar42 + fVar47) * (float)(0x7ef504f3 - (int)uVar43) * 32767.0 + 0.5;
      fVar42 = (fVar55 + fVar42 + fVar47) * (float)(0x7ef504f3 - (int)((ulong)uVar43 >> 0x20)) *
               32767.0 + 0.5;
      sVar40 = (short)param_1[1];
      iVar53 = (int)fVar42 + (int)sVar40;
      uVar23 = (undefined1)((uint)iVar53 >> 8);
      uVar24 = (undefined1)((uint)iVar53 >> 0x10);
      uVar25 = (undefined1)((uint)iVar53 >> 0x18);
      iVar12 = (int)fVar41 + (int)sVar40;
      iVar13 = (int)(float)CONCAT13((char)((uint)fVar42 >> 0x18),
                                    CONCAT12((char)((uint)fVar42 >> 0x10),
                                             (short)(CONCAT15((char)((uint)fVar42 >> 8),
                                                              CONCAT14(SUB41(fVar42,0),fVar41)) >>
                                                    0x20))) + (int)sVar40;
      auVar45[4] = (char)iVar53;
      auVar45._0_4_ = (int)fVar41 + (int)sVar40;
      auVar45[5] = uVar23;
      auVar45[6] = uVar24;
      auVar45[7] = uVar25;
      auVar45[8] = (char)iVar12;
      auVar45[9] = (char)((uint)iVar12 >> 8);
      auVar45[10] = (char)((uint)iVar12 >> 0x10);
      auVar45[0xb] = (char)((uint)iVar12 >> 0x18);
      auVar45[0xc] = (char)iVar13;
      auVar45[0xd] = (char)((uint)iVar13 >> 8);
      auVar45[0xe] = (char)((uint)iVar13 >> 0x10);
      auVar45[0xf] = (char)((uint)iVar13 >> 0x18);
      uVar43 = NEON_sqxtn(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14((char)iVar53,
                                                                                   (int)fVar41 +
                                                                                   (int)sVar40)))),
                          auVar45,4);
      *(uint *)(param_1 + 1) = (uint)param_1[1] & 0xffff0000 | (uint)uVar43 & 0xffff;
    }
    uVar7 = uVar18 - 1 >> 1 & 1;
    pbVar1 = (byte *)((long)param_1 + (ulong)uVar7 + 0xc);
    bVar4 = *pbVar1;
    bVar3 = bVar4;
    if (uVar18 <= (uVar5 & 0xff)) {
      bVar3 = (byte)((uint)fVar33 >> 0x17);
    }
    uVar2 = (uint)bVar4;
    if (bVar4 <= uVar6) {
      uVar2 = uVar6;
    }
    uVar19 = (uint)bVar22;
    if (iVar39 * 2 != (uint)*(byte *)((long)param_1 + 10) &&
        (uVar18 < (uVar5 & 0xff) || uVar19 == (uVar5 & 0xff))) {
      bVar3 = (byte)uVar2;
    }
    if (((2 < uVar19) && (*(byte *)(param_3 + 0x3c) < uVar6)) &&
       (uVar17 = 0,
       uVar6 <= (uint)*(byte *)(param_3 + 0x3b) +
                (uint)*(byte *)((long)param_1 + (ulong)(uVar7 ^ 1) + 0xc))) {
      uVar17 = uVar19;
    }
    uVar18 = iVar39 - 1;
    *pbVar1 = bVar3;
  }
  if ((uVar18 & uVar20) != 0) goto LAB_02f30b38;
  uVar43 = *param_1;
  uVar18 = (uint)uVar43;
  fVar41 = *(float *)(param_3 + 0x30);
  uVar50 = CONCAT15((char)((uVar18 >> 10) >> 8),
                    CONCAT14((char)(uVar18 >> 10),(uint)((ushort)(uVar18 >> 10) & 0x3ff))) &
           0x3ffffffffff;
  auVar14._2_2_ = 0;
  auVar14._0_2_ = (ushort)uVar43 & 0x3ff;
  auVar14._4_4_ = (int)uVar50;
  auVar14._8_6_ =
       CONCAT15((byte)((ulong)uVar43 >> 0x3c),
                CONCAT14((char)((ulong)uVar43 >> 0x34),
                         (uint)(CONCAT11((byte)((ulong)uVar43 >> 0x18) >> 4,(char)(uVar18 >> 0x14))
                               & 0x3ff))) & 0x3ffffffffff;
  auVar59._0_12_ = auVar14._0_12_;
  auVar59._12_2_ = (short)(uVar50 >> 0x20);
  auVar59._14_2_ = 0;
  fVar55 = 0.0009765625 / fVar41;
  fVar56 = 0.0009765625 / fVar41;
  fVar48 = (float)*(double *)(param_2 + 6);
  auVar45 = NEON_scvtf(auVar59,4);
  fVar61 = (float)*(double *)(param_2 + 4);
  fVar57 = (float)*(double *)(param_2 + 8);
  uVar43 = NEON_fmov(0x3f800000,4);
  fVar49 = (float)uVar43 / fVar41;
  fVar34 = (float)((ulong)uVar43 >> 0x20) / fVar41;
  fVar42 = fVar41 * 1024.0;
  fVar41 = fVar41 * 1024.0;
  auVar58._0_6_ =
       CONCAT15((char)((uint)(int)(fVar41 * fVar48) >> 8),
                CONCAT14((char)(int)(fVar41 * fVar48),(uint)((ushort)(int)(fVar42 * fVar61) & 0x3ff)
                        )) & 0x3ffffffffff;
  auVar58._6_2_ = 0;
  auVar58[8] = (undefined1)(int)(fVar42 * fVar57);
  auVar58[9] = (byte)((uint)(int)(fVar42 * fVar57) >> 8) & 3;
  auVar58._10_2_ = 0;
  auVar58[0xc] = (undefined1)(int)(fVar41 * 0.0);
  auVar58[0xd] = (byte)((uint)(int)(fVar41 * 0.0) >> 8) & 3;
  auVar58._14_2_ = 0;
  auVar59 = NEON_scvtf(auVar58,4);
  fVar33 = ABS(fVar55 * auVar45._0_4_ - fVar55 * auVar59._0_4_);
  fVar47 = ABS(fVar56 * auVar45._4_4_ - fVar56 * auVar59._4_4_);
  fVar55 = ABS(fVar55 * auVar45._8_4_ - fVar55 * auVar59._8_4_);
  fVar56 = ABS(fVar56 * auVar45._12_4_ - fVar56 * auVar59._12_4_);
  fVar33 = (float)((uint)fVar33 ^
                  ((uint)fVar33 ^ (uint)(fVar49 - fVar33)) & ~-(uint)(fVar33 < fVar49 * 0.5));
  fVar47 = (float)((uint)fVar47 ^
                  ((uint)fVar47 ^ (uint)(fVar34 - fVar47)) & ~-(uint)(fVar47 < fVar34 * 0.5));
  fVar55 = (float)((uint)fVar55 ^
                  ((uint)fVar55 ^ (uint)(fVar49 - fVar55)) & ~-(uint)(fVar55 < fVar49 * 0.5));
  fVar56 = (float)((uint)fVar56 ^
                  ((uint)fVar56 ^ (uint)(fVar34 - fVar56)) & ~-(uint)(fVar56 < fVar34 * 0.5));
  auVar46._0_4_ = fVar33 * fVar33;
  auVar46._4_4_ = fVar47 * fVar47;
  auVar46._8_4_ = fVar55 * fVar55;
  auVar46._12_4_ = fVar56 * fVar56;
  auVar45 = NEON_ext(auVar46,auVar46,8,1);
  if (auVar46._0_4_ + auVar46._4_4_ + auVar45._0_4_ <= *(float *)(param_3 + 0x28)) {
    uVar43 = *(undefined8 *)((long)param_1 + 4);
    bVar22 = (byte)((ulong)uVar43 >> 8);
    auVar60._0_4_ = (CONCAT12(bVar22,(ushort)(byte)uVar43) & 0xffff) - 0x7f;
    auVar60._4_4_ = bVar22 - 0x7f;
    auVar60._8_4_ = (byte)((ulong)uVar43 >> 0x10) - 0x7f;
    auVar60._12_4_ = (byte)((ulong)uVar43 >> 0x18) - 0x7f;
    auVar59 = NEON_scvtf(auVar60,4);
    auVar51._0_4_ = (int)(*param_2 * 116.36363);
    auVar51._4_4_ = (int)(param_2[1] * 116.36363);
    auVar51._8_4_ = (int)(param_2[2] * 116.36363);
    auVar51._12_4_ = (int)(param_2[3] * 116.36363);
    auVar45 = NEON_scvtf(auVar51,4);
    fVar33 = auVar59._0_4_ * 0.00859375 - auVar45._0_4_ * 0.00859375;
    fVar47 = auVar59._4_4_ * 0.00859375 - auVar45._4_4_ * 0.00859375;
    fVar55 = auVar59._8_4_ * 0.00859375 - auVar45._8_4_ * 0.00859375;
    fVar56 = auVar59._12_4_ * 0.00859375 - auVar45._12_4_ * 0.00859375;
    auVar52._0_4_ = fVar33 * fVar33;
    auVar52._4_4_ = fVar47 * fVar47;
    auVar52._8_4_ = fVar55 * fVar55;
    auVar52._12_4_ = fVar56 * fVar56;
    auVar45 = NEON_ext(auVar52,auVar52,8,1);
    if (auVar52._0_4_ + auVar52._4_4_ + auVar45._0_4_ + auVar45._4_4_ <= *(float *)(param_3 + 0x2c))
    {
      if (uVar17 == 0) {
        uVar20 = 0;
        *(undefined2 *)(param_1 + 1) = 0;
        *(undefined2 *)((long)param_1 + 0xc) = 0;
      }
      else {
        if ((uVar17 & 3) == 0) {
          sVar40 = *(short *)(param_1 + 1);
          bVar22 = *(byte *)((long)param_1 + 0xd);
          if (0x7fff - (0x7fff - *(short *)(param_3 + 0x34) >> (uVar21 & 0x1f)) < (int)sVar40) {
            if ((uVar17 == (uVar5 & 0xff)) &&
               (*(byte *)(param_3 + 0x3a) <= *(byte *)((long)param_1 + 0xc) ||
                *(byte *)(param_3 + 0x3a) <= bVar22)) goto LAB_02f30a2c;
          }
          else {
            bVar15 = true;
            bVar16 = false;
            if (*(byte *)(param_3 + 0x39) <= bVar22 ||
                *(byte *)(param_3 + 0x39) <= *(byte *)((long)param_1 + 0xc)) {
              bVar16 = SBORROW4((int)sVar40,(int)*(short *)(param_3 + 0x36));
              bVar15 = (int)sVar40 - (int)*(short *)(param_3 + 0x36) < 0;
            }
            uVar20 = uVar5 & 0xff;
            if (bVar15 == bVar16) {
              uVar20 = uVar17;
            }
            uVar17 = uVar20;
          }
          iVar39 = (uint)((ushort)(int)(fVar41 * fVar48) & 0x3ff) << 10;
          iVar53 = (uint)((ushort)(int)(fVar42 * fVar57) & 0x3ff) << 0x14;
          auVar37._8_4_ = 0x7f;
          auVar37._0_8_ = 0x7f0000007f;
          auVar37._12_4_ = 0x7f;
          *(uint *)param_1 =
               CONCAT13((char)((uint)iVar53 >> 0x18),
                        CONCAT12((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar53 >> 0x10),
                                 CONCAT11((byte)((uint)iVar39 >> 8) |
                                          (byte)((uint)(int)(fVar42 * fVar61) >> 8) & 3,
                                          (char)(int)(fVar42 * fVar61))));
          uVar20 = 0;
          iVar39 = (int)((float)*(undefined8 *)param_2 * 116.36363) + 0x7f;
          iVar53 = (int)((float)((ulong)*(undefined8 *)param_2 >> 0x20) * 116.36363) + 0x7f;
          uVar23 = (undefined1)iVar53;
          uVar24 = (undefined1)((uint)iVar53 >> 8);
          uVar25 = (undefined1)((uint)iVar53 >> 0x10);
          uVar26 = (undefined1)((uint)iVar53 >> 0x18);
          iVar53 = (int)((float)*(undefined8 *)(param_2 + 2) * 116.36363) + 0x7f;
          uVar27 = (undefined1)((uint)iVar53 >> 8);
          uVar28 = (undefined1)((uint)iVar53 >> 0x10);
          uVar29 = (undefined1)((uint)iVar53 >> 0x18);
          iVar12 = (int)((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) * 116.36363) + 0x7f;
          uVar30 = (undefined1)((uint)iVar12 >> 8);
          uVar31 = (undefined1)((uint)iVar12 >> 0x10);
          uVar32 = (undefined1)((uint)iVar12 >> 0x18);
          auVar10[4] = uVar23;
          auVar10._0_4_ = iVar39;
          auVar10[5] = uVar24;
          auVar10[6] = uVar25;
          auVar10[7] = uVar26;
          auVar10[8] = (char)iVar53;
          auVar10[9] = uVar27;
          auVar10[10] = uVar28;
          auVar10[0xb] = uVar29;
          auVar10[0xc] = (char)iVar12;
          auVar10[0xd] = uVar30;
          auVar10[0xe] = uVar31;
          auVar10[0xf] = uVar32;
          auVar38._8_8_ = auVar37._8_8_;
          auVar38._0_8_ = NEON_sqxtn(0x7f0000007f,auVar10,4);
          auVar11[4] = uVar23;
          auVar11._0_4_ = iVar39;
          auVar11[5] = uVar24;
          auVar11[6] = uVar25;
          auVar11[7] = uVar26;
          auVar11[8] = (char)iVar53;
          auVar11[9] = uVar27;
          auVar11[10] = uVar28;
          auVar11[0xb] = uVar29;
          auVar11[0xc] = (char)iVar12;
          auVar11[0xd] = uVar30;
          auVar11[0xe] = uVar31;
          auVar11[0xf] = uVar32;
          auVar45 = NEON_sqxtn2(auVar38,auVar11,4);
          *(undefined2 *)(param_1 + 1) = 0;
          uVar43 = NEON_sqxtun(CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  iVar39)))),auVar45,2);
          bVar3 = 0;
          if ((uVar5 & 0xff) <= uVar17) {
            bVar3 = bVar22;
          }
          *(byte *)((long)param_1 + 0xc) = bVar3;
          *(int *)((long)param_1 + 4) = (int)uVar43;
        }
        if (0xfc < uVar17) {
          uVar17 = 0xfd;
        }
      }
      uVar17 = uVar17 + 1;
      goto LAB_02f30b38;
    }
  }
LAB_02f30a2c:
  iVar39 = (uint)((ushort)(int)(fVar41 * fVar48) & 0x3ff) << 10;
  iVar53 = (uint)((ushort)(int)(fVar42 * fVar57) & 0x3ff) << 0x14;
  auVar35._8_4_ = 0x7f;
  auVar35._0_8_ = 0x7f0000007f;
  auVar35._12_4_ = 0x7f;
  *(uint *)param_1 =
       CONCAT13((char)((uint)iVar53 >> 0x18),
                CONCAT12((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar53 >> 0x10),
                         CONCAT11((byte)((uint)iVar39 >> 8) |
                                  (byte)((uint)(int)(fVar42 * fVar61) >> 8) & 3,
                                  (char)(int)(fVar42 * fVar61))));
  uVar17 = 0;
  iVar39 = (int)((float)*(undefined8 *)param_2 * 116.36363) + 0x7f;
  iVar53 = (int)((float)((ulong)*(undefined8 *)param_2 >> 0x20) * 116.36363) + 0x7f;
  uVar23 = (undefined1)iVar53;
  uVar24 = (undefined1)((uint)iVar53 >> 8);
  uVar25 = (undefined1)((uint)iVar53 >> 0x10);
  uVar26 = (undefined1)((uint)iVar53 >> 0x18);
  iVar53 = (int)((float)*(undefined8 *)(param_2 + 2) * 116.36363) + 0x7f;
  uVar27 = (undefined1)((uint)iVar53 >> 8);
  uVar28 = (undefined1)((uint)iVar53 >> 0x10);
  uVar29 = (undefined1)((uint)iVar53 >> 0x18);
  iVar12 = (int)((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) * 116.36363) + 0x7f;
  uVar30 = (undefined1)((uint)iVar12 >> 8);
  uVar31 = (undefined1)((uint)iVar12 >> 0x10);
  uVar32 = (undefined1)((uint)iVar12 >> 0x18);
  auVar8[4] = uVar23;
  auVar8._0_4_ = iVar39;
  auVar8[5] = uVar24;
  auVar8[6] = uVar25;
  auVar8[7] = uVar26;
  auVar8[8] = (char)iVar53;
  auVar8[9] = uVar27;
  auVar8[10] = uVar28;
  auVar8[0xb] = uVar29;
  auVar8[0xc] = (char)iVar12;
  auVar8[0xd] = uVar30;
  auVar8[0xe] = uVar31;
  auVar8[0xf] = uVar32;
  auVar36._8_8_ = auVar35._8_8_;
  auVar36._0_8_ = NEON_sqxtn(0x7f0000007f,auVar8,4);
  auVar9[4] = uVar23;
  auVar9._0_4_ = iVar39;
  auVar9[5] = uVar24;
  auVar9[6] = uVar25;
  auVar9[7] = uVar26;
  auVar9[8] = (char)iVar53;
  auVar9[9] = uVar27;
  auVar9[10] = uVar28;
  auVar9[0xb] = uVar29;
  auVar9[0xc] = (char)iVar12;
  auVar9[0xd] = uVar30;
  auVar9[0xe] = uVar31;
  auVar9[0xf] = uVar32;
  auVar45 = NEON_sqxtn2(auVar36,auVar9,4);
  uVar43 = NEON_sqxtun(CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,iVar39)))),
                       auVar45,2);
  *(int *)((long)param_1 + 4) = (int)uVar43;
LAB_02f30b38:
  *(char *)((long)param_1 + 10) = (char)uVar20;
  *(char *)((long)param_1 + 0xb) = (char)uVar17;
  return (int)((uint)*(byte *)(param_3 + 0x38) * 4 - uVar17) >> 0x1f;
}


