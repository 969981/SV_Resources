/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015fcb0; name: FUN_0015fcb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015fcb0(long param_1,long param_2,byte *param_3,long param_4,byte *param_5,short *param_6,
                 long param_7,int param_8,int param_9,short param_10,short param_11)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  short sVar8;
  undefined8 uVar9;
  short sVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined8 uVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined2 uVar27;
  short sVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined6 uVar31;
  undefined8 uVar32;
  undefined1 auVar35 [14];
  undefined1 auVar33 [12];
  undefined1 auVar36 [16];
  undefined1 auVar34 [14];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  short sVar56;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  undefined1 auVar57 [16];
  short sVar64;
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar89;
  short sVar90;
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  
  uVar23 = _DAT_03cabad0;
  uVar7 = _UNK_03cab058;
  uVar21 = _UNK_03caa578;
  uVar32 = _DAT_03caa570;
  bVar40 = (byte)_DAT_03cac0c0;
  bVar41 = (byte)((ulong)_DAT_03cac0c0 >> 8);
  bVar42 = (byte)((ulong)_DAT_03cac0c0 >> 0x10);
  bVar43 = (byte)((ulong)_DAT_03cac0c0 >> 0x18);
  bVar44 = (byte)((ulong)_DAT_03cac0c0 >> 0x20);
  bVar45 = (byte)((ulong)_DAT_03cac0c0 >> 0x28);
  bVar46 = (byte)((ulong)_DAT_03cac0c0 >> 0x30);
  bVar47 = (byte)((ulong)_DAT_03cac0c0 >> 0x38);
  bVar48 = (byte)_UNK_03cac0c8;
  bVar49 = (byte)((ulong)_UNK_03cac0c8 >> 8);
  bVar50 = (byte)((ulong)_UNK_03cac0c8 >> 0x10);
  bVar51 = (byte)((ulong)_UNK_03cac0c8 >> 0x18);
  bVar52 = (byte)((ulong)_UNK_03cac0c8 >> 0x20);
  bVar53 = (byte)((ulong)_UNK_03cac0c8 >> 0x28);
  bVar54 = (byte)((ulong)_UNK_03cac0c8 >> 0x30);
  bVar55 = (byte)((ulong)_UNK_03cac0c8 >> 0x38);
  if (param_8 < 9) {
    if (param_3 < param_5) {
      sVar56 = *param_6;
      sVar58 = param_6[1];
      sVar59 = param_6[2];
      sVar60 = param_6[3];
      sVar61 = param_6[4];
      sVar62 = param_6[5];
      sVar63 = param_6[6];
      sVar64 = param_6[7];
      do {
        auVar36._0_2_ = sVar56 - param_10;
        auVar36._2_2_ = sVar58 - param_10;
        auVar36._4_2_ = sVar59 - param_10;
        auVar36._6_2_ = sVar60 - param_10;
        auVar36._8_2_ = sVar61 - param_10;
        auVar36._10_2_ = sVar62 - param_10;
        auVar36._12_2_ = sVar63 - param_10;
        auVar36._14_2_ = sVar64 - param_10;
        auVar4._2_2_ = param_11;
        auVar4._0_2_ = param_11;
        auVar4._4_2_ = param_11;
        auVar4._6_2_ = param_11;
        auVar4._8_2_ = param_11;
        auVar4._10_2_ = param_11;
        auVar4._12_2_ = param_11;
        auVar4._14_2_ = param_11;
        auVar57 = NEON_smin(auVar36,auVar4,2);
        pbVar22 = param_3 + 1;
        auVar39 = *(undefined1 (*) [16])(param_7 + (ulong)*param_3 * 0x10);
        sVar28 = CONCAT11((byte)((ushort)-(ushort)(param_11 < auVar36._0_2_) >> 8) & bVar41,
                          (byte)-(ushort)(param_11 < auVar36._0_2_) & bVar40);
        uVar30 = CONCAT13((byte)((ushort)-(ushort)(param_11 < auVar36._2_2_) >> 8) & bVar43,
                          CONCAT12((byte)-(ushort)(param_11 < auVar36._2_2_) & bVar42,sVar28));
        uVar31 = CONCAT15((byte)((ushort)-(ushort)(param_11 < auVar36._4_2_) >> 8) & bVar45,
                          CONCAT14((byte)-(ushort)(param_11 < auVar36._4_2_) & bVar44,uVar30));
        uVar32 = CONCAT17((byte)((ushort)-(ushort)(param_11 < auVar36._6_2_) >> 8) & bVar47,
                          CONCAT16((byte)-(ushort)(param_11 < auVar36._6_2_) & bVar46,uVar31));
        auVar33._0_10_ =
             CONCAT19((byte)((ushort)-(ushort)(param_11 < auVar36._8_2_) >> 8) & bVar49,
                      CONCAT18((byte)-(ushort)(param_11 < auVar36._8_2_) & bVar48,uVar32));
        auVar33[10] = (byte)-(ushort)(param_11 < auVar36._10_2_) & bVar50;
        auVar33[0xb] = (byte)((ushort)-(ushort)(param_11 < auVar36._10_2_) >> 8) & bVar51;
        auVar34[0xc] = (byte)-(ushort)(param_11 < auVar36._12_2_) & bVar52;
        auVar34._0_12_ = auVar33;
        auVar34[0xd] = (byte)((ushort)-(ushort)(param_11 < auVar36._12_2_) >> 8) & bVar53;
        auVar37[0xe] = (byte)-(ushort)(param_11 < auVar36._14_2_) & bVar54;
        auVar37._0_14_ = auVar34;
        auVar37[0xf] = (byte)((ushort)-(ushort)(param_11 < auVar36._14_2_) >> 8) & bVar55;
        sVar56 = auVar57._0_2_ + auVar39._0_2_;
        sVar58 = auVar57._2_2_ + auVar39._2_2_;
        sVar59 = auVar57._4_2_ + auVar39._4_2_;
        sVar60 = auVar57._6_2_ + auVar39._6_2_;
        sVar61 = auVar57._8_2_ + auVar39._8_2_;
        sVar62 = auVar57._10_2_ + auVar39._10_2_;
        sVar63 = auVar57._12_2_ + auVar39._12_2_;
        auVar69._14_2_ = auVar39._14_2_;
        sVar64 = auVar57._14_2_ + auVar69._14_2_;
        auVar16._2_10_ = auVar39._6_10_;
        auVar16._0_2_ = (short)((ulong)uVar7 >> 0x10);
        auVar67._0_8_ = auVar16._0_8_ << 0x20;
        auVar67._10_6_ = auVar39._10_6_;
        auVar67._8_2_ = (short)((ulong)uVar7 >> 0x20);
        auVar69._0_12_ = auVar67._0_12_;
        auVar69._12_2_ = (short)((ulong)uVar7 >> 0x30);
        auVar65._4_12_ = auVar69._4_12_;
        auVar65._2_2_ = sVar61;
        auVar65._0_2_ = (short)uVar7;
        auVar66._8_8_ = auVar69._8_8_;
        auVar66._0_6_ = auVar65._0_6_;
        auVar66._6_2_ = sVar62;
        auVar68._12_4_ = auVar69._12_4_;
        auVar68._0_10_ = auVar66._0_10_;
        auVar68._10_2_ = sVar63;
        auVar70._0_14_ = auVar68._0_14_;
        auVar70._14_2_ = sVar64;
        auVar35._8_2_ = (short)(uVar23 >> 0x20);
        auVar35._0_8_ = (uVar23 >> 0x10 & 0xffff) << 0x20;
        uVar27 = (undefined2)(uVar23 >> 0x30);
        auVar35._10_2_ = 0;
        auVar35._12_2_ = uVar27;
        auVar14._2_2_ = sVar56;
        auVar14._0_2_ = (short)uVar23;
        auVar14._4_10_ = auVar35._4_10_;
        auVar15._6_2_ = sVar58;
        auVar15._0_6_ = auVar14._0_6_;
        auVar15._8_6_ = auVar35._8_6_;
        auVar38._0_10_ = auVar15._0_10_;
        auVar38._10_2_ = sVar59;
        auVar38._12_2_ = uVar27;
        auVar38._14_2_ = sVar60;
        auVar39 = NEON_smin(auVar38,auVar70,4);
        uVar29 = NEON_sminv(auVar39,4);
        *(ulong *)(param_1 + ((long)param_3 - param_4) * 8) =
             (ulong)(uint)(int)(short)(sVar28 + (short)((uint)uVar30 >> 0x10) +
                                       (short)((uint6)uVar31 >> 0x20) +
                                       (short)((ulong)uVar32 >> 0x30) +
                                       (short)((unkuint10)auVar33._0_10_ >> 0x40) + auVar33._10_2_ +
                                       auVar34._12_2_ + auVar37._14_2_);
        param_10 = (short)((uint)uVar29 >> 0x10);
        *(char *)(param_2 + ((long)param_3 - param_4)) = (char)uVar29;
        param_3 = pbVar22;
      } while (param_5 != pbVar22);
    }
  }
  else if (param_3 < param_5) {
    if (param_9 < 1) {
      auVar39._10_2_ = 0x7fff;
      auVar39._0_10_ = (unkuint10)0x7fff00007fff0000;
      auVar39._12_2_ = 0;
      auVar39._14_2_ = 0x7fff;
      uVar30 = NEON_sminv(auVar39,4);
      do {
        lVar24 = (long)param_3 - param_4;
        param_3 = param_3 + 1;
        *(undefined8 *)(param_1 + lVar24 * 8) = 0;
        *(char *)(param_2 + lVar24) = (char)uVar30;
      } while (param_3 < param_5);
    }
    else {
      do {
        bVar2 = *param_3;
        auVar57._8_8_ = 0x7fff00007fff0000;
        auVar57._0_8_ = 0x7fff00007fff0000;
        sVar62 = (short)((ulong)uVar21 >> 0x10);
        sVar63 = (short)((ulong)uVar21 >> 0x20);
        sVar64 = (short)((ulong)uVar21 >> 0x30);
        sVar58 = (short)uVar32;
        sVar59 = (short)((ulong)uVar32 >> 0x10);
        sVar60 = (short)((ulong)uVar32 >> 0x20);
        sVar61 = (short)((ulong)uVar32 >> 0x30);
        uVar23 = 0;
        uVar25 = 0;
        lVar24 = (long)param_3 - param_4;
        sVar56 = (short)uVar21;
        do {
          uVar26 = -(uVar25 >> 0x1f) & 0xfffffffe00000000 | uVar25 << 1;
          uVar13 = ((undefined8 *)((long)param_6 + uVar26))[1];
          uVar12 = *(undefined8 *)((long)param_6 + uVar26);
          puVar3 = (undefined8 *)(param_7 + (ulong)((uint)bVar2 * param_9) * 2 + uVar26);
          uVar9 = puVar3[1];
          uVar7 = *puVar3;
          sVar83 = (short)uVar12 - param_10;
          sVar84 = (short)((ulong)uVar12 >> 0x10) - param_10;
          sVar85 = (short)((ulong)uVar12 >> 0x20) - param_10;
          sVar86 = (short)((ulong)uVar12 >> 0x30) - param_10;
          sVar87 = (short)uVar13 - param_10;
          sVar88 = (short)((ulong)uVar13 >> 0x10) - param_10;
          sVar89 = (short)((ulong)uVar13 >> 0x20) - param_10;
          sVar90 = (short)((ulong)uVar13 >> 0x30) - param_10;
          auVar5._2_2_ = param_11;
          auVar5._0_2_ = param_11;
          auVar5._4_2_ = param_11;
          auVar5._6_2_ = param_11;
          auVar5._8_2_ = param_11;
          auVar5._10_2_ = param_11;
          auVar5._12_2_ = param_11;
          auVar5._14_2_ = param_11;
          auVar11._2_2_ = sVar84;
          auVar11._0_2_ = sVar83;
          auVar11._4_2_ = sVar85;
          auVar11._6_2_ = sVar86;
          auVar11._8_2_ = sVar87;
          auVar11._10_2_ = sVar88;
          auVar11._12_2_ = sVar89;
          auVar11._14_2_ = sVar90;
          auVar39 = NEON_smin(auVar11,auVar5,2);
          sVar28 = auVar39._0_2_ + (short)uVar7;
          sVar8 = auVar39._2_2_ + (short)((ulong)uVar7 >> 0x10);
          uVar71 = (undefined1)sVar8;
          uVar72 = (undefined1)((ushort)sVar8 >> 8);
          sVar8 = auVar39._4_2_ + (short)((ulong)uVar7 >> 0x20);
          uVar73 = (undefined1)sVar8;
          uVar74 = (undefined1)((ushort)sVar8 >> 8);
          sVar8 = auVar39._6_2_ + (short)((ulong)uVar7 >> 0x30);
          uVar75 = (undefined1)sVar8;
          uVar76 = (undefined1)((ushort)sVar8 >> 8);
          sVar8 = auVar39._8_2_ + (short)uVar9;
          sVar10 = auVar39._10_2_ + (short)((ulong)uVar9 >> 0x10);
          uVar77 = (undefined1)sVar10;
          uVar78 = (undefined1)((ushort)sVar10 >> 8);
          sVar10 = auVar39._12_2_ + (short)((ulong)uVar9 >> 0x20);
          uVar79 = (undefined1)sVar10;
          uVar80 = (undefined1)((ushort)sVar10 >> 8);
          auVar95._14_2_ = auVar39._14_2_;
          sVar10 = auVar95._14_2_ + (short)((ulong)uVar9 >> 0x30);
          uVar81 = (undefined1)sVar10;
          uVar82 = (undefined1)((ushort)sVar10 >> 8);
          uVar30 = CONCAT13(uVar72,CONCAT12(uVar71,sVar28));
          uVar31 = CONCAT15(uVar74,CONCAT14(uVar73,uVar30));
          auVar17._2_10_ = auVar39._6_10_;
          auVar17._0_2_ = sVar59;
          auVar93._0_8_ = auVar17._0_8_ << 0x20;
          auVar93._10_6_ = auVar39._10_6_;
          auVar93._8_2_ = sVar60;
          auVar95._0_12_ = auVar93._0_12_;
          auVar95._12_2_ = sVar61;
          auVar91._4_12_ = auVar95._4_12_;
          auVar91._2_2_ = sVar28;
          auVar91._0_2_ = sVar58;
          auVar92._8_8_ = auVar95._8_8_;
          auVar92._0_6_ = auVar91._0_6_;
          auVar92._6_2_ = (short)((uint)uVar30 >> 0x10);
          auVar94._12_4_ = auVar95._12_4_;
          auVar94._0_10_ = auVar92._0_10_;
          auVar94._10_2_ = (short)((uint6)uVar31 >> 0x20);
          auVar96._0_14_ = auVar94._0_14_;
          auVar96._14_2_ = (short)(CONCAT17(uVar76,CONCAT16(uVar75,uVar31)) >> 0x30);
          ((undefined8 *)((long)param_6 + uVar26))[1] =
               CONCAT17(uVar82,CONCAT16(uVar81,CONCAT15(uVar80,CONCAT14(uVar79,CONCAT13(uVar78,
                                                  CONCAT12(uVar77,sVar8))))));
          *(undefined8 *)((long)param_6 + uVar26) =
               CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar74,CONCAT14(uVar73,CONCAT13(uVar72,
                                                  CONCAT12(uVar71,sVar28))))));
          uVar71 = (undefined1)sVar62;
          uVar18 = (ushort)sVar62 >> 8;
          uVar72 = (undefined1)sVar63;
          uVar19 = (ushort)sVar63 >> 8;
          uVar73 = (undefined1)sVar64;
          uVar20 = (ushort)sVar64 >> 8;
          sVar58 = sVar58 + 8;
          sVar59 = sVar59 + 8;
          sVar60 = sVar60 + 8;
          sVar61 = sVar61 + 8;
          sVar62 = sVar62 + 8;
          sVar63 = sVar63 + 8;
          sVar64 = sVar64 + 8;
          auVar39 = NEON_smin(auVar57,auVar96,4);
          auVar6[2] = (char)sVar8;
          auVar6._0_2_ = sVar56;
          auVar6[3] = (char)((ushort)sVar8 >> 8);
          auVar6[4] = uVar71;
          auVar6[5] = (char)uVar18;
          auVar6[6] = uVar77;
          auVar6[7] = uVar78;
          auVar6[8] = uVar72;
          auVar6[9] = (char)uVar19;
          auVar6[10] = uVar79;
          auVar6[0xb] = uVar80;
          auVar6[0xc] = uVar73;
          auVar6[0xd] = (char)uVar20;
          auVar6[0xe] = uVar81;
          auVar6[0xf] = uVar82;
          auVar57 = NEON_smin(auVar39,auVar6,4);
          sVar28 = -(ushort)(param_11 < sVar83);
          sVar8 = -(ushort)(param_11 < sVar84);
          sVar10 = -(ushort)(param_11 < sVar85);
          sVar83 = -(ushort)(param_11 < sVar86);
          sVar84 = -(ushort)(param_11 < sVar87);
          sVar85 = -(ushort)(param_11 < sVar88);
          sVar86 = -(ushort)(param_11 < sVar89);
          sVar87 = -(ushort)(param_11 < sVar90);
          uVar26 = uVar25 & 0x3f;
          uVar1 = (int)uVar25 + 8;
          uVar25 = (ulong)uVar1;
          uVar23 = (ulong)(uint)(int)(short)(CONCAT11((byte)((ushort)sVar28 >> 8) & bVar41,
                                                      (byte)sVar28 & bVar40) +
                                             CONCAT11((byte)((ushort)sVar8 >> 8) & bVar43,
                                                      (byte)sVar8 & bVar42) +
                                             CONCAT11((byte)((ushort)sVar10 >> 8) & bVar45,
                                                      (byte)sVar10 & bVar44) +
                                             CONCAT11((byte)((ushort)sVar83 >> 8) & bVar47,
                                                      (byte)sVar83 & bVar46) +
                                             CONCAT11((byte)((ushort)sVar84 >> 8) & bVar49,
                                                      (byte)sVar84 & bVar48) +
                                             CONCAT11((byte)((ushort)sVar85 >> 8) & bVar51,
                                                      (byte)sVar85 & bVar50) +
                                             CONCAT11((byte)((ushort)sVar86 >> 8) & bVar53,
                                                      (byte)sVar86 & bVar52) +
                                            CONCAT11((byte)((ushort)sVar87 >> 8) & bVar55,
                                                     (byte)sVar87 & bVar54)) << uVar26 | uVar23;
          sVar56 = sVar56 + 8;
        } while ((int)uVar1 < param_9);
        uVar30 = NEON_sminv(auVar57,4);
        param_3 = param_3 + 1;
        *(ulong *)(param_1 + lVar24 * 8) = uVar23;
        param_10 = (short)((uint)uVar30 >> 0x10);
        *(char *)(param_2 + lVar24) = (char)uVar30;
      } while (param_3 != param_5);
    }
  }
  return;
}


