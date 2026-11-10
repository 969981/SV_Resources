/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ec3150; name: FUN_02ec3150
 */


void FUN_02ec3150(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  byte *pbVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  
  if ((int)param_1[1] != 0) {
    fVar66 = (float)param_1[3];
    fVar67 = (float)((ulong)param_1[3] >> 0x20);
    uVar6 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar63 = (float)uVar6;
    fVar65 = (float)((ulong)uVar6 >> 0x20);
    fVar61 = (float)param_1[5];
    fVar62 = (float)((ulong)param_1[5] >> 0x20);
    uVar6 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar58 = (float)uVar6;
    fVar60 = (float)((ulong)uVar6 >> 0x20);
    iVar23 = -(uint)((float)param_3[2] <= fVar58);
    iVar7 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= fVar60);
    bVar30 = (byte)((uint)iVar7 >> 8);
    bVar31 = (byte)((uint)iVar7 >> 0x10);
    bVar32 = (byte)((uint)iVar7 >> 0x18);
    iVar8 = -(uint)((float)param_3[3] <= fVar61);
    bVar33 = (byte)((uint)iVar8 >> 8);
    bVar34 = (byte)((uint)iVar8 >> 0x10);
    bVar35 = (byte)((uint)iVar8 >> 0x18);
    iVar10 = -(uint)((float)((ulong)param_3[3] >> 0x20) <= fVar62);
    lVar18 = param_2[1];
    auVar47 = *(undefined1 (*) [16])(param_3 + 6);
    auVar42 = *(undefined1 (*) [16])(param_3 + 8);
    iVar11 = -(uint)(fVar63 <= (float)param_3[4]);
    iVar13 = -(uint)(fVar65 <= (float)((ulong)param_3[4] >> 0x20));
    bVar36 = (byte)((uint)iVar13 >> 8);
    bVar37 = (byte)((uint)iVar13 >> 0x10);
    bVar38 = (byte)((uint)iVar13 >> 0x18);
    iVar14 = -(uint)(fVar66 <= (float)param_3[5]);
    bVar39 = (byte)((uint)iVar14 >> 8);
    bVar40 = (byte)((uint)iVar14 >> 0x10);
    bVar41 = (byte)((uint)iVar14 >> 0x18);
    iVar15 = -(uint)(fVar67 <= (float)((ulong)param_3[5] >> 0x20));
    lVar21 = *param_1;
    auVar51._12_4_ = fVar62;
    auVar51._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar52 = NEON_fmax(auVar47,auVar51,4);
    auVar54._12_4_ = fVar67;
    auVar54._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar51 = NEON_fmin(auVar42,auVar54,4);
    auVar53[4] = (byte)iVar7;
    auVar53._0_4_ = iVar23;
    auVar53[5] = bVar30;
    auVar53[6] = bVar31;
    auVar53[7] = bVar32;
    auVar53[8] = (byte)iVar8;
    auVar53[9] = bVar33;
    auVar53[10] = bVar34;
    auVar53[0xb] = bVar35;
    auVar53[0xc] = (char)iVar10;
    auVar53[0xd] = (char)((uint)iVar10 >> 8);
    auVar53[0xe] = (char)((uint)iVar10 >> 0x10);
    auVar53[0xf] = (char)((uint)iVar10 >> 0x18);
    auVar47 = auVar47 ^ (auVar47 ^ auVar52) & ~auVar53;
    auVar52[4] = (byte)iVar13;
    auVar52._0_4_ = iVar11;
    auVar52[5] = bVar36;
    auVar52[6] = bVar37;
    auVar52[7] = bVar38;
    auVar52[8] = (byte)iVar14;
    auVar52[9] = bVar39;
    auVar52[10] = bVar40;
    auVar52[0xb] = bVar41;
    auVar52[0xc] = (char)iVar15;
    auVar52[0xd] = (char)((uint)iVar15 >> 8);
    auVar52[0xe] = (char)((uint)iVar15 >> 0x10);
    auVar52[0xf] = (char)((uint)iVar15 >> 0x18);
    auVar42 = auVar42 ^ (auVar42 ^ auVar51) & ~auVar52;
    param_3[7] = auVar47._8_8_;
    param_3[6] = auVar47._0_8_;
    param_3[9] = auVar42._8_8_;
    param_3[8] = auVar42._0_8_;
    if (CONCAT13(bVar38 & bVar32 & (byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                 bVar41 & bVar35,
                 CONCAT12(bVar37 & bVar31 &
                          (byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                          bVar40 & bVar34,
                          CONCAT11(bVar36 & bVar30 &
                                   (byte)((uint)iVar11 >> 8) & (byte)((uint)iVar23 >> 8) &
                                   bVar39 & bVar33,
                                   (byte)iVar13 & (byte)iVar7 & (byte)iVar11 & (byte)iVar23 &
                                   (byte)iVar14 & (byte)iVar8))) != 0) {
      uVar20 = 0;
      pbVar29 = (byte *)(lVar21 + (long)param_1);
LAB_02ec31f8:
      bVar30 = pbVar29[3];
      uVar19 = (uint)uVar20;
      if ((char)bVar30 < '\0') goto LAB_02ec33d4;
      lVar21 = *param_3;
      lVar24 = *(long *)(lVar21 + 0xa8);
      if (lVar24 == 0) {
LAB_02ec3268:
        lVar28 = *(long *)(lVar21 + 0x50);
        lVar27 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar30,pbVar29[4]) * 0x60 + param_1[8];
        lVar25 = *(long *)(lVar28 + 0x40);
        lVar24 = lVar25 + lVar28 + 0x40;
        lVar3 = 0;
        if (lVar25 != 0) {
          lVar3 = lVar24;
        }
        iVar23 = (int)(lVar27 - lVar3 >> 5) * -0x55555555;
        if ((*(int *)(lVar21 + 0x94) != iVar23) || (*(int *)(lVar21 + 0x98) != iVar23)) {
          lVar24 = lVar24 + (long)iVar23 * 0x60;
          *(long *)(lVar21 + 0x60) = lVar24;
          *(int *)(lVar21 + 0x94) = iVar23;
          *(int *)(lVar21 + 0x98) = iVar23;
          lVar25 = *(long *)(lVar28 + 0x70);
          lVar3 = 0;
          if (lVar25 != 0) {
            lVar3 = lVar25 + lVar28 + 0x70;
          }
          *(ulong *)(lVar21 + 0x70) = lVar3 + (ulong)*(uint *)(lVar24 + 0x48) * 4;
          lVar25 = *(long *)(lVar28 + 0x80);
          lVar3 = 0;
          if (lVar25 != 0) {
            lVar3 = lVar25 + lVar28 + 0x80;
          }
          *(ulong *)(lVar21 + 0x78) = lVar3 + (ulong)*(byte *)(lVar24 + 0x5b) * 0x80000;
          lVar25 = *(long *)(lVar28 + 0x60);
          lVar3 = 0;
          if (lVar25 != 0) {
            lVar3 = lVar25 + lVar28 + 0x60;
          }
          lVar3 = lVar3 + (ulong)*(uint *)(lVar24 + 0x4c) * 2;
          *(long *)(lVar21 + 0x80) = lVar3;
          lVar26 = *(long *)(lVar28 + 0x90);
          lVar25 = 0;
          if (lVar26 != 0) {
            lVar25 = lVar26 + lVar28 + 0x90;
          }
          *(ulong *)(lVar21 + 0x88) = lVar25 + (ulong)*(uint *)(lVar24 + 0x54) * 4;
          *(uint *)(lVar21 + 0x90) = (uint)*(byte *)(lVar24 + 0x58);
          lVar26 = *(long *)(lVar28 + 0x50);
          lVar25 = 0;
          if (lVar26 != 0) {
            lVar25 = lVar26 + lVar28 + 0x50;
          }
          *(ulong *)(lVar21 + 0x68) = lVar25 + (ulong)*(uint *)(lVar24 + 0x50) * 4;
          uVar6 = *(undefined8 *)(lVar24 + 0x30);
          *(undefined8 *)(lVar21 + 0x38) = *(undefined8 *)(lVar24 + 0x38);
          *(undefined8 *)(lVar21 + 0x30) = uVar6;
          uVar6 = *(undefined8 *)(lVar24 + 0x3c);
          *(ulong *)(lVar21 + 0x48) = (ulong)*(uint *)(lVar24 + 0x44);
          *(undefined8 *)(lVar21 + 0x40) = uVar6;
          *(ulong *)(lVar21 + 0x80) = lVar3 + (ulong)*(byte *)(lVar24 + 0x58) * -2;
        }
        FUN_02ec36cc(lVar27,param_2,param_3);
      }
      else {
        lVar27 = *(long *)(lVar24 + 0x20);
        lVar3 = 0;
        if (lVar27 != 0) {
          lVar3 = lVar27 + lVar24 + 0x20;
        }
        lVar28 = *(long *)(lVar3 + 0x48);
        lVar27 = 0;
        if (lVar28 != 0) {
          lVar27 = lVar28 + lVar3 + 0x48;
        }
        uVar5 = uVar19 + 0x1f;
        if (-1 < (int)uVar19) {
          uVar5 = uVar19;
        }
        if ((*(uint *)(lVar24 + 0x28 +
                      (long)((int)uVar5 >> 5) * 4 +
                      (long)(*(int *)(lVar27 + 0x68) << 3) * 4 + *(long *)(lVar24 + 0x28)) >>
             (ulong)(uVar19 & 0x1f) & 1) != 0) goto LAB_02ec3268;
      }
      goto LAB_02ec3398;
    }
  }
  return;
LAB_02ec33d4:
  uVar2 = (long)(int)uVar19 + 1;
  fVar62 = (fVar58 - fVar63) * 0.0044247787;
  fVar67 = (fVar60 - fVar65) * 0.0044247787;
  fVar9 = (fVar61 - fVar66) * 0.0044247787;
  uVar1 = (((ulong)bVar30 & 0x7f) << 9 | (ulong)pbVar29[4] << 1) + (long)(int)uVar19;
  pbVar29 = (byte *)((long)param_1 + uVar2 * 5 + *param_1);
  bVar32 = pbVar29[1] >> 4;
  pbVar4 = (byte *)((long)param_1 + uVar1 * 5 + *param_1);
  bVar33 = *pbVar29 >> 4;
  bVar30 = *pbVar29 & 0xf;
  bVar31 = pbVar29[1] & 0xf;
  fVar59 = fVar63 + (float)(byte)(bVar33 * bVar33) * fVar62;
  fVar64 = fVar65 + (float)(byte)(bVar32 * bVar32) * fVar67;
  fVar69 = fVar58 - (float)(byte)(bVar30 * bVar30) * fVar62;
  fVar56 = fVar60 - (float)(byte)(bVar31 * bVar31) * fVar67;
  bVar30 = pbVar29[2] & 0xf;
  bVar33 = *pbVar4 >> 4;
  bVar31 = *pbVar4 & 0xf;
  bVar32 = pbVar29[2] >> 4;
  bVar34 = pbVar4[1] >> 4;
  fVar57 = fVar61 - (float)(byte)(bVar30 * bVar30) * fVar9;
  fVar46 = fVar58 - (float)(byte)(bVar31 * bVar31) * fVar62;
  bVar30 = pbVar4[1] & 0xf;
  fVar55 = fVar63 + (float)(byte)(bVar33 * bVar33) * fVar62;
  fVar49 = fVar65 + (float)(byte)(bVar34 * bVar34) * fVar67;
  bVar31 = pbVar4[2] >> 4;
  fVar12 = fVar60 - (float)(byte)(bVar30 * bVar30) * fVar67;
  bVar30 = pbVar4[2] & 0xf;
  fVar68 = fVar66 + (float)(byte)(bVar32 * bVar32) * fVar9;
  fVar50 = fVar66 + (float)(byte)(bVar31 * bVar31) * fVar9;
  fVar62 = fVar61 - (float)(byte)(bVar30 * bVar30) * fVar9;
  auVar53 = *(undefined1 (*) [16])(param_3 + 6);
  auVar47._4_4_ = fVar56;
  auVar47._0_4_ = fVar69;
  auVar47._8_4_ = fVar57;
  auVar47._12_4_ = 0;
  auVar52 = NEON_fmax(auVar53,auVar47,4);
  auVar16._4_4_ = fVar64;
  auVar16._0_4_ = fVar59;
  auVar16._8_4_ = fVar68;
  auVar16._12_4_ = 0;
  auVar54 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar16,4);
  fVar65 = (float)param_3[4];
  auVar48._0_4_ = -(uint)(fVar59 <= fVar65);
  fVar66 = (float)((ulong)param_3[4] >> 0x20);
  auVar48._4_4_ = -(uint)(fVar64 <= fVar66);
  fVar67 = (float)param_3[5];
  auVar48._8_4_ = -(uint)(fVar68 <= fVar67);
  fVar9 = (float)((ulong)param_3[5] >> 0x20);
  auVar48._12_4_ = -(uint)(0.0 <= fVar9);
  fVar58 = (float)param_3[2];
  auVar43._0_4_ = -(uint)(fVar58 <= fVar69);
  fVar60 = (float)((ulong)param_3[2] >> 0x20);
  auVar43._4_4_ = -(uint)(fVar60 <= fVar56);
  fVar61 = (float)param_3[3];
  auVar43._8_4_ = -(uint)(fVar61 <= fVar57);
  fVar63 = (float)((ulong)param_3[3] >> 0x20);
  auVar43._12_4_ = -(uint)(fVar63 <= 0.0);
  iVar23 = -(uint)(fVar58 <= fVar46);
  iVar7 = -(uint)(fVar60 <= fVar12);
  bVar30 = (byte)((uint)iVar7 >> 8);
  bVar31 = (byte)((uint)iVar7 >> 0x10);
  bVar32 = (byte)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(fVar61 <= fVar62);
  iVar10 = -(uint)(fVar63 <= 0.0);
  iVar11 = -(uint)(fVar55 <= fVar65);
  iVar13 = -(uint)(fVar49 <= fVar66);
  bVar33 = (byte)((uint)iVar13 >> 8);
  bVar34 = (byte)((uint)iVar13 >> 0x10);
  bVar35 = (byte)((uint)iVar13 >> 0x18);
  iVar14 = -(uint)(fVar50 <= fVar67);
  iVar15 = -(uint)(0.0 <= fVar9);
  auVar53 = auVar53 ^ (auVar53 ^ auVar52) & ~auVar43;
  auVar54 = auVar54 ^ (auVar54 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar48;
  auVar42._4_4_ = fVar49;
  auVar42._0_4_ = fVar55;
  auVar42._8_4_ = fVar50;
  auVar42._12_4_ = 0;
  auVar51 = NEON_fmin(auVar54,auVar42,4);
  auVar17._4_4_ = fVar12;
  auVar17._0_4_ = fVar46;
  auVar17._8_4_ = fVar62;
  auVar17._12_4_ = 0;
  auVar52 = NEON_fmax(auVar53,auVar17,4);
  auVar44[0xc] = (char)iVar10;
  auVar44._8_4_ = iVar8;
  auVar44[0xd] = (char)((uint)iVar10 >> 8);
  auVar44[0xe] = (char)((uint)iVar10 >> 0x10);
  auVar44[0xf] = (char)((uint)iVar10 >> 0x18);
  auVar44[4] = (byte)iVar7;
  auVar44._0_4_ = iVar23;
  auVar44[5] = bVar30;
  auVar44[6] = bVar31;
  auVar44[7] = bVar32;
  auVar52 = auVar52 ^ (auVar52 ^ auVar53) & auVar44;
  param_3[7] = auVar52._8_8_;
  param_3[6] = auVar52._0_8_;
  auVar45[0xc] = (char)iVar15;
  auVar45._8_4_ = iVar14;
  auVar45[0xd] = (char)((uint)iVar15 >> 8);
  auVar45[0xe] = (char)((uint)iVar15 >> 0x10);
  auVar45[0xf] = (char)((uint)iVar15 >> 0x18);
  auVar45[4] = (byte)iVar13;
  auVar45._0_4_ = iVar11;
  auVar45[5] = bVar33;
  auVar45[6] = bVar34;
  auVar45[7] = bVar35;
  auVar51 = auVar51 ^ (auVar51 ^ auVar54) & auVar45;
  param_3[9] = auVar51._8_8_;
  param_3[8] = auVar51._0_8_;
  bVar30 = CONCAT13((byte)((uint)auVar48._4_4_ >> 0x18) & (byte)((uint)auVar43._4_4_ >> 0x18) &
                    (byte)((uint)auVar48._0_4_ >> 0x18) & (byte)((uint)auVar43._0_4_ >> 0x18) &
                    (byte)((uint)auVar48._8_4_ >> 0x18) & (byte)((uint)auVar43._8_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar48._4_4_ >> 0x10) &
                             (byte)((uint)auVar43._4_4_ >> 0x10) &
                             (byte)((uint)auVar48._0_4_ >> 0x10) &
                             (byte)((uint)auVar43._0_4_ >> 0x10) &
                             (byte)((uint)auVar48._8_4_ >> 0x10) &
                             (byte)((uint)auVar43._8_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar48._4_4_ >> 8) &
                                      (byte)((uint)auVar43._4_4_ >> 8) &
                                      (byte)((uint)auVar48._0_4_ >> 8) &
                                      (byte)((uint)auVar43._0_4_ >> 8) &
                                      (byte)((uint)auVar48._8_4_ >> 8) &
                                      (byte)((uint)auVar43._8_4_ >> 8),
                                      (byte)auVar48._4_4_ & (byte)auVar43._4_4_ &
                                      (byte)auVar48._0_4_ & (byte)auVar43._0_4_ &
                                      (byte)auVar48._8_4_ & (byte)auVar43._8_4_))) != 0 |
           (CONCAT13(bVar35 & bVar32 & (byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                     (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar8 >> 0x18),
                     CONCAT12(bVar34 & bVar31 &
                              (byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                              (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar8 >> 0x10),
                              CONCAT11(bVar33 & bVar30 &
                                       (byte)((uint)iVar11 >> 8) & (byte)((uint)iVar23 >> 8) &
                                       (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar8 >> 8),
                                       (byte)iVar13 & (byte)iVar7 & (byte)iVar11 & (byte)iVar23 &
                                       (byte)iVar14 & (byte)iVar8))) != 0) << 1;
  uVar20 = uVar2 & 0xffffffff;
  fVar58 = fVar69;
  fVar60 = fVar56;
  fVar61 = fVar57;
  fVar63 = fVar59;
  fVar65 = fVar64;
  fVar66 = fVar68;
  if (bVar30 != 1) {
    if (bVar30 == 3) {
      iVar23 = (int)param_2[1];
      lVar21 = (long)iVar23;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar23) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar21 + 1);
        iVar23 = (int)param_2[1];
      }
      puVar22 = (undefined8 *)(*param_2 + (long)iVar23 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar21 + 1);
      *(int *)(puVar22 + 4) = (int)uVar1;
      puVar22[1] = (ulong)(uint)fVar50;
      *puVar22 = CONCAT44(fVar49,fVar55);
      puVar22[3] = (ulong)(uint)fVar62;
      puVar22[2] = CONCAT44(fVar12,fVar46);
      uVar20 = uVar2 & 0xffffffff;
    }
    else if (bVar30 == 2) {
      uVar20 = uVar1 & 0xffffffff;
      pbVar29 = pbVar4;
      fVar58 = fVar46;
      fVar60 = fVar12;
      fVar61 = fVar62;
      fVar63 = fVar55;
      fVar65 = fVar49;
      fVar66 = fVar50;
    }
    else {
LAB_02ec3398:
      if ((int)param_2[1] <= (int)lVar18) {
        return;
      }
      iVar23 = (int)param_2[1] + -1;
      puVar22 = (undefined8 *)(*param_2 + (long)iVar23 * 0x30);
      *(int *)(param_2 + 1) = iVar23;
      uVar20 = (ulong)*(int *)(puVar22 + 4);
      pbVar29 = (byte *)((long)param_1 + uVar20 * 5 + *param_1);
      fVar58 = (float)puVar22[2];
      fVar60 = (float)((ulong)puVar22[2] >> 0x20);
      fVar61 = (float)puVar22[3];
      fVar63 = (float)*puVar22;
      fVar65 = (float)((ulong)*puVar22 >> 0x20);
      fVar66 = (float)puVar22[1];
    }
  }
  goto LAB_02ec31f8;
}


