/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00312450; name: FUN_00312450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00312450(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar44;
  int iVar53;
  int iVar54;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  
  uVar29 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar29 = param_2[1];
  }
  uVar34 = uVar29 % 3;
  uVar21 = ((ulong)(byte)(&DAT_03cd4988)[uVar34] + (uVar29 / 3) * 4) * 0xb;
  uVar23 = uVar21 >> 3;
  if ((uVar21 & 7) != 0) {
    uVar23 = uVar23 + 1;
  }
  FUN_003670f0(param_1,uVar23);
  uVar19 = _UNK_03cab978;
  uVar18 = _DAT_03cab970;
  pbVar22 = (byte *)((long)param_2 + 9);
  if (*param_2 != 0) {
    pbVar22 = (byte *)param_2[2];
  }
  pbVar1 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar1 = (byte *)param_1[2];
  }
  pbVar30 = pbVar1;
  if (uVar29 < 3) {
    uVar27 = 0;
    uVar25 = 0;
  }
  else {
    uVar23 = 0;
    uVar25 = 0;
    uVar27 = 0;
    do {
      bVar3 = pbVar22[1];
      uVar21 = (ulong)*pbVar22 & 0xfc;
      lVar26 = (ulong)((uint)(bVar3 >> 4) | (*pbVar22 & 3) << 4) * 4;
      bVar2 = (&DAT_03cd498e)[lVar26];
      uVar31 = (uint)bVar2 + (uint)(byte)(&DAT_03cd498e)[uVar21];
      uVar25 = (uint)*(ushort *)(&DAT_03cd498c + uVar21) << (ulong)(bVar2 & 0x1f) |
               (uint)*(ushort *)(&DAT_03cd498c + lVar26) | uVar25 << (ulong)(uVar31 & 0x1f);
      uVar31 = uVar31 + uVar27;
      iVar36 = (int)uVar18;
      iVar38 = (int)((ulong)uVar18 >> 0x20);
      iVar35 = (int)uVar19;
      iVar37 = (int)((ulong)uVar19 >> 0x20);
      pbVar24 = pbVar30;
      if (8 < uVar31) {
        uVar27 = (uVar27 + bVar2 + (uint)(byte)(&DAT_03cd498e)[uVar21]) - 9;
        if (uVar27 < 0x78) {
LAB_003127b0:
          do {
            uVar31 = uVar31 - 8;
            pbVar30 = pbVar24 + 1;
            *pbVar24 = (byte)(uVar25 >> (ulong)(uVar31 & 0x1f));
            pbVar24 = pbVar30;
          } while (8 < uVar31);
        }
        else {
          iVar44 = uVar31 + iVar36;
          uVar61 = (undefined1)iVar44;
          uVar62 = (undefined1)((uint)iVar44 >> 8);
          uVar63 = (undefined1)((uint)iVar44 >> 0x10);
          uVar64 = (undefined1)((uint)iVar44 >> 0x18);
          iVar44 = uVar31 + iVar38;
          uVar65 = (undefined1)iVar44;
          uVar66 = (undefined1)((uint)iVar44 >> 8);
          uVar67 = (undefined1)((uint)iVar44 >> 0x10);
          uVar68 = (undefined1)((uint)iVar44 >> 0x18);
          iVar44 = uVar31 + iVar35;
          uVar69 = (undefined1)iVar44;
          uVar70 = (undefined1)((uint)iVar44 >> 8);
          uVar71 = (undefined1)((uint)iVar44 >> 0x10);
          uVar72 = (undefined1)((uint)iVar44 >> 0x18);
          iVar44 = uVar31 + iVar37;
          uVar73 = (undefined1)iVar44;
          uVar74 = (undefined1)((uint)iVar44 >> 8);
          uVar75 = (undefined1)((uint)iVar44 >> 0x10);
          uVar76 = (undefined1)((uint)iVar44 >> 0x18);
          auVar40._4_4_ = uVar25;
          auVar40._0_4_ = uVar25;
          auVar40._8_4_ = uVar25;
          auVar40._12_4_ = uVar25;
          uVar32 = (ulong)((uVar27 >> 3) + 1);
          uVar33 = uVar32 & 0x3ffffff0;
          uVar21 = (uVar33 - 0x10 >> 4) + 1;
          lVar26 = 0;
          if (uVar33 - 0x10 != 0) {
            lVar20 = -(uVar21 & 0x1ffffffffffffffe);
            do {
              pbVar24 = pbVar30 + lVar26 + 0x10;
              lVar26 = lVar26 + 0x20;
              auVar46._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -8);
              auVar46._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -8);
              auVar46._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -8);
              auVar46._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -8);
              auVar48._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x28);
              auVar48._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x28);
              auVar48._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x28);
              auVar48._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x28);
              auVar93._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x88);
              auVar93._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x88);
              auVar93._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x88);
              auVar93._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x88);
              auVar46 = NEON_ushl(auVar40,auVar46,4);
              auVar90._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0xa8);
              auVar90._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0xa8);
              auVar90._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0xa8);
              auVar90._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0xa8);
              auVar48 = NEON_ushl(auVar40,auVar48,4);
              auVar57 = NEON_ushl(auVar40,auVar93,4);
              auVar97 = NEON_ushl(auVar40,auVar90,4);
              auVar91._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -200);
              auVar91._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -200);
              auVar91._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -200);
              auVar91._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -200);
              auVar85._0_8_ =
                   CONCAT44(CONCAT13(auVar97[0xc],
                                     CONCAT12(auVar97[8],CONCAT11(auVar97[4],auVar97[0]))),
                            CONCAT13(auVar57[0xc],
                                     CONCAT12(auVar57[8],CONCAT11(auVar57[4],auVar57[0]))));
              auVar57._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x48);
              auVar57._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x48);
              auVar57._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x48);
              auVar57._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x48);
              auVar57 = NEON_ushl(auVar40,auVar57,4);
              auVar97 = NEON_ushl(auVar40,auVar91,4);
              auVar85[9] = auVar97[4];
              auVar85[8] = auVar97[0];
              auVar85[10] = auVar97[8];
              auVar85[0xb] = auVar97[0xc];
              auVar92._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0xe8);
              auVar92._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0xe8);
              auVar92._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0xe8);
              auVar92._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0xe8);
              auVar93 = NEON_ushl(auVar40,auVar92,4);
              auVar97._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x68);
              auVar97._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x68);
              auVar97._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x68);
              auVar97._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x68);
              auVar97 = NEON_ushl(auVar40,auVar97,4);
              iVar44 = CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x100;
              uVar61 = (undefined1)iVar44;
              uVar62 = (undefined1)((uint)iVar44 >> 8);
              uVar63 = (undefined1)((uint)iVar44 >> 0x10);
              uVar64 = (undefined1)((uint)iVar44 >> 0x18);
              iVar44 = CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x100;
              uVar65 = (undefined1)iVar44;
              uVar66 = (undefined1)((uint)iVar44 >> 8);
              uVar67 = (undefined1)((uint)iVar44 >> 0x10);
              uVar68 = (undefined1)((uint)iVar44 >> 0x18);
              iVar44 = CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x100;
              uVar69 = (undefined1)iVar44;
              uVar70 = (undefined1)((uint)iVar44 >> 8);
              uVar71 = (undefined1)((uint)iVar44 >> 0x10);
              uVar72 = (undefined1)((uint)iVar44 >> 0x18);
              iVar44 = CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x100;
              uVar73 = (undefined1)iVar44;
              uVar74 = (undefined1)((uint)iVar44 >> 8);
              uVar75 = (undefined1)((uint)iVar44 >> 0x10);
              uVar76 = (undefined1)((uint)iVar44 >> 0x18);
              auVar85[0xd] = auVar93[4];
              auVar85[0xc] = auVar93[0];
              auVar85[0xe] = auVar93[8];
              auVar85[0xf] = auVar93[0xc];
              lVar20 = lVar20 + 2;
              *(uint *)(pbVar24 + -8) =
                   CONCAT13(auVar57[0xc],CONCAT12(auVar57[8],CONCAT11(auVar57[4],auVar57[0])));
              *(uint *)(pbVar24 + -4) =
                   CONCAT13(auVar97[0xc],CONCAT12(auVar97[8],CONCAT11(auVar97[4],auVar97[0])));
              *(uint *)(pbVar24 + -0x10) =
                   CONCAT13(auVar46[0xc],CONCAT12(auVar46[8],CONCAT11(auVar46[4],auVar46[0])));
              *(uint *)(pbVar24 + -0xc) =
                   CONCAT13(auVar48[0xc],CONCAT12(auVar48[8],CONCAT11(auVar48[4],auVar48[0])));
              *(long *)(pbVar24 + 8) = auVar85._8_8_;
              *(undefined8 *)pbVar24 = auVar85._0_8_;
            } while (lVar20 != 0);
          }
          uVar31 = uVar31 + (int)uVar33 * -8;
          pbVar24 = pbVar30 + uVar33;
          if ((uVar21 & 1) != 0) {
            auVar77._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -8);
            auVar77._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -8);
            auVar77._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -8);
            auVar77._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -8);
            auVar80._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x28);
            auVar80._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x28);
            auVar80._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x28);
            auVar80._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x28);
            auVar46 = NEON_ushl(auVar40,auVar77,4);
            auVar86._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x48);
            auVar86._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x48);
            auVar86._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x48);
            auVar86._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x48);
            auVar48 = NEON_ushl(auVar40,auVar80,4);
            iVar44 = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x68);
            iVar53 = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x68);
            iVar54 = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x68);
            auVar57 = NEON_ushl(auVar40,auVar86,4);
            auVar17[4] = (char)iVar44;
            auVar17._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x68);
            auVar17[5] = (char)((uint)iVar44 >> 8);
            auVar17[6] = (char)((uint)iVar44 >> 0x10);
            auVar17[7] = (char)((uint)iVar44 >> 0x18);
            auVar17[8] = (char)iVar53;
            auVar17[9] = (char)((uint)iVar53 >> 8);
            auVar17[10] = (char)((uint)iVar53 >> 0x10);
            auVar17[0xb] = (char)((uint)iVar53 >> 0x18);
            auVar17[0xc] = (char)iVar54;
            auVar17[0xd] = (char)((uint)iVar54 >> 8);
            auVar17[0xe] = (char)((uint)iVar54 >> 0x10);
            auVar17[0xf] = (char)((uint)iVar54 >> 0x18);
            auVar40 = NEON_ushl(auVar40,auVar17,4);
            *(ulong *)(pbVar30 + lVar26 + 8) =
                 CONCAT17(auVar40[0xc],
                          CONCAT16(auVar40[8],
                                   CONCAT15(auVar40[4],
                                            CONCAT14(auVar40[0],
                                                     CONCAT13(auVar57[0xc],
                                                              CONCAT12(auVar57[8],
                                                                       CONCAT11(auVar57[4],
                                                                                auVar57[0])))))));
            *(ulong *)(pbVar30 + lVar26) =
                 CONCAT17(auVar48[0xc],
                          CONCAT16(auVar48[8],
                                   CONCAT15(auVar48[4],
                                            CONCAT14(auVar48[0],
                                                     CONCAT13(auVar46[0xc],
                                                              CONCAT12(auVar46[8],
                                                                       CONCAT11(auVar46[4],
                                                                                auVar46[0])))))));
          }
          if (uVar33 != uVar32) goto LAB_003127b0;
        }
        bVar3 = pbVar22[1];
      }
      lVar20 = (ulong)((uint)(pbVar22[2] >> 6) | (bVar3 & 0xf) << 2) * 4;
      lVar26 = ((ulong)pbVar22[2] & 0x3f) * 4;
      bVar2 = (&DAT_03cd498e)[lVar26];
      uVar27 = (uint)bVar2 + (uint)(byte)(&DAT_03cd498e)[lVar20];
      uVar25 = (uint)*(ushort *)(&DAT_03cd498c + lVar20) << (ulong)(bVar2 & 0x1f) |
               (uint)*(ushort *)(&DAT_03cd498c + lVar26) | uVar25 << (ulong)(uVar27 & 0x1f);
      uVar27 = uVar27 + uVar31;
      pbVar30 = pbVar24;
      if (8 < uVar27) {
        uVar31 = (uVar31 + bVar2 + (uint)(byte)(&DAT_03cd498e)[lVar20]) - 9;
        if (0x77 < uVar31) {
          iVar36 = uVar27 + iVar36;
          uVar61 = (undefined1)iVar36;
          uVar62 = (undefined1)((uint)iVar36 >> 8);
          uVar63 = (undefined1)((uint)iVar36 >> 0x10);
          uVar64 = (undefined1)((uint)iVar36 >> 0x18);
          iVar38 = uVar27 + iVar38;
          uVar65 = (undefined1)iVar38;
          uVar66 = (undefined1)((uint)iVar38 >> 8);
          uVar67 = (undefined1)((uint)iVar38 >> 0x10);
          uVar68 = (undefined1)((uint)iVar38 >> 0x18);
          iVar35 = uVar27 + iVar35;
          uVar69 = (undefined1)iVar35;
          uVar70 = (undefined1)((uint)iVar35 >> 8);
          uVar71 = (undefined1)((uint)iVar35 >> 0x10);
          uVar72 = (undefined1)((uint)iVar35 >> 0x18);
          iVar37 = uVar27 + iVar37;
          uVar73 = (undefined1)iVar37;
          uVar74 = (undefined1)((uint)iVar37 >> 8);
          uVar75 = (undefined1)((uint)iVar37 >> 0x10);
          uVar76 = (undefined1)((uint)iVar37 >> 0x18);
          auVar60._4_4_ = uVar25;
          auVar60._0_4_ = uVar25;
          auVar60._8_4_ = uVar25;
          auVar60._12_4_ = uVar25;
          uVar32 = (ulong)((uVar31 >> 3) + 1);
          uVar33 = uVar32 & 0x3ffffff0;
          uVar21 = (uVar33 - 0x10 >> 4) + 1;
          lVar26 = 0;
          if (uVar33 - 0x10 != 0) {
            lVar20 = -(uVar21 & 0x1ffffffffffffffe);
            do {
              pbVar30 = pbVar24 + lVar26 + 0x10;
              lVar26 = lVar26 + 0x20;
              auVar78._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -8);
              auVar78._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -8);
              auVar78._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -8);
              auVar78._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -8);
              auVar81._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x28);
              auVar81._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x28);
              auVar81._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x28);
              auVar81._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x28);
              auVar87._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x88);
              auVar87._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x88);
              auVar87._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x88);
              auVar87._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x88);
              auVar40 = NEON_ushl(auVar60,auVar78,4);
              auVar94._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0xa8);
              auVar94._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0xa8);
              auVar94._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0xa8);
              auVar94._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0xa8);
              auVar46 = NEON_ushl(auVar60,auVar81,4);
              auVar48 = NEON_ushl(auVar60,auVar87,4);
              auVar57 = NEON_ushl(auVar60,auVar94,4);
              auVar95._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -200);
              auVar95._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -200);
              auVar95._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -200);
              auVar95._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -200);
              auVar88._0_8_ =
                   CONCAT44(CONCAT13(auVar57[0xc],
                                     CONCAT12(auVar57[8],CONCAT11(auVar57[4],auVar57[0]))),
                            CONCAT13(auVar48[0xc],
                                     CONCAT12(auVar48[8],CONCAT11(auVar48[4],auVar48[0]))));
              auVar82._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x48);
              auVar82._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x48);
              auVar82._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x48);
              auVar82._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x48);
              auVar48 = NEON_ushl(auVar60,auVar82,4);
              auVar57 = NEON_ushl(auVar60,auVar95,4);
              auVar88[9] = auVar57[4];
              auVar88[8] = auVar57[0];
              auVar88[10] = auVar57[8];
              auVar88[0xb] = auVar57[0xc];
              auVar96._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0xe8);
              auVar96._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0xe8);
              auVar96._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0xe8);
              auVar96._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0xe8);
              auVar97 = NEON_ushl(auVar60,auVar96,4);
              auVar83._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x68);
              auVar83._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x68);
              auVar83._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x68);
              auVar83._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x68);
              auVar57 = NEON_ushl(auVar60,auVar83,4);
              iVar36 = CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x100;
              uVar61 = (undefined1)iVar36;
              uVar62 = (undefined1)((uint)iVar36 >> 8);
              uVar63 = (undefined1)((uint)iVar36 >> 0x10);
              uVar64 = (undefined1)((uint)iVar36 >> 0x18);
              iVar36 = CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x100;
              uVar65 = (undefined1)iVar36;
              uVar66 = (undefined1)((uint)iVar36 >> 8);
              uVar67 = (undefined1)((uint)iVar36 >> 0x10);
              uVar68 = (undefined1)((uint)iVar36 >> 0x18);
              iVar36 = CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x100;
              uVar69 = (undefined1)iVar36;
              uVar70 = (undefined1)((uint)iVar36 >> 8);
              uVar71 = (undefined1)((uint)iVar36 >> 0x10);
              uVar72 = (undefined1)((uint)iVar36 >> 0x18);
              iVar36 = CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x100;
              uVar73 = (undefined1)iVar36;
              uVar74 = (undefined1)((uint)iVar36 >> 8);
              uVar75 = (undefined1)((uint)iVar36 >> 0x10);
              uVar76 = (undefined1)((uint)iVar36 >> 0x18);
              auVar88[0xd] = auVar97[4];
              auVar88[0xc] = auVar97[0];
              auVar88[0xe] = auVar97[8];
              auVar88[0xf] = auVar97[0xc];
              lVar20 = lVar20 + 2;
              *(uint *)(pbVar30 + -8) =
                   CONCAT13(auVar48[0xc],CONCAT12(auVar48[8],CONCAT11(auVar48[4],auVar48[0])));
              *(uint *)(pbVar30 + -4) =
                   CONCAT13(auVar57[0xc],CONCAT12(auVar57[8],CONCAT11(auVar57[4],auVar57[0])));
              *(uint *)(pbVar30 + -0x10) =
                   CONCAT13(auVar40[0xc],CONCAT12(auVar40[8],CONCAT11(auVar40[4],auVar40[0])));
              *(uint *)(pbVar30 + -0xc) =
                   CONCAT13(auVar46[0xc],CONCAT12(auVar46[8],CONCAT11(auVar46[4],auVar46[0])));
              *(long *)(pbVar30 + 8) = auVar88._8_8_;
              *(undefined8 *)pbVar30 = auVar88._0_8_;
            } while (lVar20 != 0);
          }
          uVar27 = uVar27 + (int)uVar33 * -8;
          pbVar30 = pbVar24 + uVar33;
          if ((uVar21 & 1) != 0) {
            auVar79._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -8);
            auVar79._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -8);
            auVar79._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -8);
            auVar79._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -8);
            auVar84._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x28);
            auVar84._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x28);
            auVar84._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x28);
            auVar84._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x28);
            auVar46 = NEON_ushl(auVar60,auVar79,4);
            auVar89._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x48);
            auVar89._4_4_ = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x48);
            auVar89._8_4_ = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x48);
            auVar89._12_4_ = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x48);
            auVar48 = NEON_ushl(auVar60,auVar84,4);
            iVar36 = -(CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) + -0x68);
            iVar38 = -(CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69))) + -0x68);
            iVar35 = -(CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))) + -0x68);
            auVar57 = NEON_ushl(auVar60,auVar89,4);
            auVar16[4] = (char)iVar36;
            auVar16._0_4_ = -(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) + -0x68);
            auVar16[5] = (char)((uint)iVar36 >> 8);
            auVar16[6] = (char)((uint)iVar36 >> 0x10);
            auVar16[7] = (char)((uint)iVar36 >> 0x18);
            auVar16[8] = (char)iVar38;
            auVar16[9] = (char)((uint)iVar38 >> 8);
            auVar16[10] = (char)((uint)iVar38 >> 0x10);
            auVar16[0xb] = (char)((uint)iVar38 >> 0x18);
            auVar16[0xc] = (char)iVar35;
            auVar16[0xd] = (char)((uint)iVar35 >> 8);
            auVar16[0xe] = (char)((uint)iVar35 >> 0x10);
            auVar16[0xf] = (char)((uint)iVar35 >> 0x18);
            auVar40 = NEON_ushl(auVar60,auVar16,4);
            *(ulong *)(pbVar24 + lVar26 + 8) =
                 CONCAT17(auVar40[0xc],
                          CONCAT16(auVar40[8],
                                   CONCAT15(auVar40[4],
                                            CONCAT14(auVar40[0],
                                                     CONCAT13(auVar57[0xc],
                                                              CONCAT12(auVar57[8],
                                                                       CONCAT11(auVar57[4],
                                                                                auVar57[0])))))));
            *(ulong *)(pbVar24 + lVar26) =
                 CONCAT17(auVar48[0xc],
                          CONCAT16(auVar48[8],
                                   CONCAT15(auVar48[4],
                                            CONCAT14(auVar48[0],
                                                     CONCAT13(auVar46[0xc],
                                                              CONCAT12(auVar46[8],
                                                                       CONCAT11(auVar46[4],
                                                                                auVar46[0])))))));
          }
          pbVar24 = pbVar30;
          if (uVar33 == uVar32) goto LAB_003125bc;
        }
        do {
          uVar27 = uVar27 - 8;
          pbVar30 = pbVar24 + 1;
          *pbVar24 = (byte)(uVar25 >> (ulong)(uVar27 & 0x1f));
          pbVar24 = pbVar30;
        } while (8 < uVar27);
      }
LAB_003125bc:
      uVar23 = uVar23 + 1;
      pbVar22 = pbVar22 + 3;
    } while (uVar23 < uVar29 / 3);
  }
  iVar36 = (int)((ulong)_DAT_03cab970 >> 0x20);
  iVar38 = (int)((ulong)_UNK_03cab978 >> 0x20);
  if (uVar34 != 2) {
    if (uVar34 != 1) goto LAB_00312d04;
    uVar29 = (ulong)*pbVar22 & 0xfc;
    lVar26 = ((ulong)*pbVar22 & 3) * 0x40;
    bVar2 = (&DAT_03cd498e)[lVar26];
    uVar31 = (uint)bVar2 + (uint)(byte)(&DAT_03cd498e)[uVar29];
    uVar28 = uVar31 + uVar27;
    uVar25 = (uint)*(ushort *)(&DAT_03cd498c + uVar29) << (ulong)(bVar2 & 0x1f) |
             (uint)*(ushort *)(&DAT_03cd498c + lVar26) | uVar25 << (ulong)(uVar31 & 0x1f);
    if (uVar28 < 9) {
      pbVar22 = pbVar22 + 1;
      uVar27 = uVar28;
      goto LAB_00312d04;
    }
    uVar27 = (uVar27 + bVar2 + (uint)(byte)(&DAT_03cd498e)[uVar29]) - 9;
    if (uVar27 < 0x78) {
      pbVar24 = pbVar30;
LAB_00312afc:
      do {
        uVar28 = uVar28 - 8;
        pbVar30 = pbVar24 + 1;
        *pbVar24 = (byte)(uVar25 >> (ulong)(uVar28 & 0x1f));
        pbVar24 = pbVar30;
      } while (8 < uVar28);
    }
    else {
      iVar35 = uVar28 + (int)_DAT_03cab970;
      iVar36 = uVar28 + iVar36;
      iVar37 = uVar28 + (int)_UNK_03cab978;
      iVar38 = uVar28 + iVar38;
      uVar23 = (ulong)((uVar27 >> 3) + 1);
      uVar21 = uVar23 & 0x3ffffff0;
      uVar28 = uVar28 + (int)uVar21 * -8;
      pbVar24 = pbVar30 + uVar21;
      pbVar30 = pbVar30 + 8;
      uVar29 = uVar21;
      do {
        uVar29 = uVar29 - 0x10;
        auVar39._0_4_ = -(iVar35 + -8);
        auVar39._4_4_ = -(iVar36 + -8);
        auVar39._8_4_ = -(iVar37 + -8);
        auVar39._12_4_ = -(iVar38 + -8);
        auVar45._0_4_ = -(iVar35 + -0x28);
        auVar45._4_4_ = -(iVar36 + -0x28);
        auVar45._8_4_ = -(iVar37 + -0x28);
        auVar45._12_4_ = -(iVar38 + -0x28);
        auVar4._4_4_ = uVar25;
        auVar4._0_4_ = uVar25;
        auVar4._8_4_ = uVar25;
        auVar4._12_4_ = uVar25;
        auVar40 = NEON_ushl(auVar4,auVar39,4);
        auVar5._4_4_ = uVar25;
        auVar5._0_4_ = uVar25;
        auVar5._8_4_ = uVar25;
        auVar5._12_4_ = uVar25;
        auVar46 = NEON_ushl(auVar5,auVar45,4);
        auVar56._0_4_ = -(iVar35 + -0x48);
        auVar56._4_4_ = -(iVar36 + -0x48);
        auVar56._8_4_ = -(iVar37 + -0x48);
        auVar56._12_4_ = -(iVar38 + -0x48);
        auVar6._4_4_ = uVar25;
        auVar6._0_4_ = uVar25;
        auVar6._8_4_ = uVar25;
        auVar6._12_4_ = uVar25;
        auVar57 = NEON_ushl(auVar6,auVar56,4);
        iVar44 = iVar35 + -0x68;
        iVar53 = iVar36 + -0x68;
        iVar54 = iVar37 + -0x68;
        iVar55 = iVar38 + -0x68;
        iVar35 = iVar35 + -0x80;
        iVar36 = iVar36 + -0x80;
        iVar37 = iVar37 + -0x80;
        iVar38 = iVar38 + -0x80;
        auVar47._0_4_ = -iVar44;
        auVar47._4_4_ = -iVar53;
        auVar47._8_4_ = -iVar54;
        auVar47._12_4_ = -iVar55;
        auVar7._4_4_ = uVar25;
        auVar7._0_4_ = uVar25;
        auVar7._8_4_ = uVar25;
        auVar7._12_4_ = uVar25;
        auVar48 = NEON_ushl(auVar7,auVar47,4);
        *(uint *)pbVar30 =
             CONCAT13(auVar57[0xc],CONCAT12(auVar57[8],CONCAT11(auVar57[4],auVar57[0])));
        *(uint *)(pbVar30 + 4) =
             CONCAT13(auVar48[0xc],CONCAT12(auVar48[8],CONCAT11(auVar48[4],auVar48[0])));
        *(uint *)(pbVar30 + -8) =
             CONCAT13(auVar40[0xc],CONCAT12(auVar40[8],CONCAT11(auVar40[4],auVar40[0])));
        *(uint *)(pbVar30 + -4) =
             CONCAT13(auVar46[0xc],CONCAT12(auVar46[8],CONCAT11(auVar46[4],auVar46[0])));
        pbVar30 = pbVar30 + 0x10;
      } while (uVar29 != 0);
      if (uVar21 != uVar23) goto LAB_00312afc;
    }
    pbVar22 = pbVar22 + 1;
    pbVar30 = pbVar24;
    uVar27 = uVar28;
    goto LAB_00312d04;
  }
  bVar3 = pbVar22[1];
  uVar29 = (ulong)*pbVar22 & 0xfc;
  lVar26 = (ulong)((uint)(bVar3 >> 4) | (*pbVar22 & 3) << 4) * 4;
  bVar2 = (&DAT_03cd498e)[lVar26];
  uVar31 = (uint)bVar2 + (uint)(byte)(&DAT_03cd498e)[uVar29];
  uVar25 = (uint)*(ushort *)(&DAT_03cd498c + uVar29) << (ulong)(bVar2 & 0x1f) |
           (uint)*(ushort *)(&DAT_03cd498c + lVar26) | uVar25 << (ulong)(uVar31 & 0x1f);
  uVar31 = uVar31 + uVar27;
  if (8 < uVar31) {
    uVar27 = (uVar27 + bVar2 + (uint)(byte)(&DAT_03cd498e)[uVar29]) - 9;
    if (uVar27 < 0x78) {
      pbVar24 = pbVar30;
LAB_00312bd4:
      do {
        uVar31 = uVar31 - 8;
        pbVar30 = pbVar24 + 1;
        *pbVar24 = (byte)(uVar25 >> (ulong)(uVar31 & 0x1f));
        pbVar24 = pbVar30;
      } while (8 < uVar31);
    }
    else {
      iVar35 = uVar31 + (int)_DAT_03cab970;
      iVar36 = uVar31 + iVar36;
      iVar37 = uVar31 + (int)_UNK_03cab978;
      iVar38 = uVar31 + iVar38;
      uVar23 = (ulong)((uVar27 >> 3) + 1);
      uVar21 = uVar23 & 0x3ffffff0;
      uVar31 = uVar31 + (int)uVar21 * -8;
      pbVar24 = pbVar30 + uVar21;
      pbVar30 = pbVar30 + 8;
      uVar29 = uVar21;
      do {
        uVar29 = uVar29 - 0x10;
        auVar41._0_4_ = -(iVar35 + -8);
        auVar41._4_4_ = -(iVar36 + -8);
        auVar41._8_4_ = -(iVar37 + -8);
        auVar41._12_4_ = -(iVar38 + -8);
        auVar49._0_4_ = -(iVar35 + -0x28);
        auVar49._4_4_ = -(iVar36 + -0x28);
        auVar49._8_4_ = -(iVar37 + -0x28);
        auVar49._12_4_ = -(iVar38 + -0x28);
        auVar12._4_4_ = uVar25;
        auVar12._0_4_ = uVar25;
        auVar12._8_4_ = uVar25;
        auVar12._12_4_ = uVar25;
        auVar40 = NEON_ushl(auVar12,auVar41,4);
        auVar13._4_4_ = uVar25;
        auVar13._0_4_ = uVar25;
        auVar13._8_4_ = uVar25;
        auVar13._12_4_ = uVar25;
        auVar46 = NEON_ushl(auVar13,auVar49,4);
        auVar58._0_4_ = -(iVar35 + -0x48);
        auVar58._4_4_ = -(iVar36 + -0x48);
        auVar58._8_4_ = -(iVar37 + -0x48);
        auVar58._12_4_ = -(iVar38 + -0x48);
        auVar14._4_4_ = uVar25;
        auVar14._0_4_ = uVar25;
        auVar14._8_4_ = uVar25;
        auVar14._12_4_ = uVar25;
        auVar48 = NEON_ushl(auVar14,auVar58,4);
        auVar42._0_8_ =
             CONCAT44(CONCAT13(auVar46[0xc],CONCAT12(auVar46[8],CONCAT11(auVar46[4],auVar46[0]))),
                      CONCAT13(auVar40[0xc],CONCAT12(auVar40[8],CONCAT11(auVar40[4],auVar40[0]))));
        iVar44 = iVar35 + -0x68;
        iVar53 = iVar36 + -0x68;
        iVar54 = iVar37 + -0x68;
        iVar55 = iVar38 + -0x68;
        iVar35 = iVar35 + -0x80;
        iVar36 = iVar36 + -0x80;
        iVar37 = iVar37 + -0x80;
        iVar38 = iVar38 + -0x80;
        auVar50._0_4_ = -iVar44;
        auVar50._4_4_ = -iVar53;
        auVar50._8_4_ = -iVar54;
        auVar50._12_4_ = -iVar55;
        auVar42[9] = auVar48[4];
        auVar42[8] = auVar48[0];
        auVar42[10] = auVar48[8];
        auVar42[0xb] = auVar48[0xc];
        auVar15._4_4_ = uVar25;
        auVar15._0_4_ = uVar25;
        auVar15._8_4_ = uVar25;
        auVar15._12_4_ = uVar25;
        auVar40 = NEON_ushl(auVar15,auVar50,4);
        auVar42[0xd] = auVar40[4];
        auVar42[0xc] = auVar40[0];
        auVar42[0xe] = auVar40[8];
        auVar42[0xf] = auVar40[0xc];
        *(long *)pbVar30 = auVar42._8_8_;
        *(undefined8 *)(pbVar30 + -8) = auVar42._0_8_;
        pbVar30 = pbVar30 + 0x10;
      } while (uVar29 != 0);
      pbVar30 = pbVar24;
      if (uVar21 != uVar23) goto LAB_00312bd4;
    }
    bVar3 = pbVar22[1];
  }
  lVar26 = (ulong)((bVar3 & 0xf) << 2) * 4;
  uVar27 = uVar31 + (byte)(&DAT_03cd498e)[lVar26];
  uVar25 = uVar25 << (ulong)((byte)(&DAT_03cd498e)[lVar26] & 0x1f) |
           (uint)*(ushort *)(&DAT_03cd498c + lVar26);
  if (8 < uVar27) {
    if (uVar27 - 9 < 0x78) {
      pbVar24 = pbVar30;
    }
    else {
      iVar36 = uVar27 + (int)_DAT_03cab970;
      iVar38 = uVar27 + (int)((ulong)_DAT_03cab970 >> 0x20);
      iVar35 = uVar27 + (int)_UNK_03cab978;
      iVar37 = uVar27 + (int)((ulong)_UNK_03cab978 >> 0x20);
      uVar23 = (ulong)((uVar27 - 9 >> 3) + 1);
      uVar21 = uVar23 & 0x3ffffff0;
      uVar27 = uVar27 + (int)uVar21 * -8;
      pbVar24 = pbVar30 + uVar21;
      pbVar30 = pbVar30 + 8;
      uVar29 = uVar21;
      do {
        uVar29 = uVar29 - 0x10;
        auVar43._0_4_ = -(iVar36 + -8);
        auVar43._4_4_ = -(iVar38 + -8);
        auVar43._8_4_ = -(iVar35 + -8);
        auVar43._12_4_ = -(iVar37 + -8);
        auVar51._0_4_ = -(iVar36 + -0x28);
        auVar51._4_4_ = -(iVar38 + -0x28);
        auVar51._8_4_ = -(iVar35 + -0x28);
        auVar51._12_4_ = -(iVar37 + -0x28);
        auVar8._4_4_ = uVar25;
        auVar8._0_4_ = uVar25;
        auVar8._8_4_ = uVar25;
        auVar8._12_4_ = uVar25;
        auVar40 = NEON_ushl(auVar8,auVar43,4);
        auVar9._4_4_ = uVar25;
        auVar9._0_4_ = uVar25;
        auVar9._8_4_ = uVar25;
        auVar9._12_4_ = uVar25;
        auVar46 = NEON_ushl(auVar9,auVar51,4);
        auVar59._0_4_ = -(iVar36 + -0x48);
        auVar59._4_4_ = -(iVar38 + -0x48);
        auVar59._8_4_ = -(iVar35 + -0x48);
        auVar59._12_4_ = -(iVar37 + -0x48);
        auVar10._4_4_ = uVar25;
        auVar10._0_4_ = uVar25;
        auVar10._8_4_ = uVar25;
        auVar10._12_4_ = uVar25;
        auVar57 = NEON_ushl(auVar10,auVar59,4);
        iVar44 = iVar36 + -0x68;
        iVar53 = iVar38 + -0x68;
        iVar54 = iVar35 + -0x68;
        iVar55 = iVar37 + -0x68;
        iVar36 = iVar36 + -0x80;
        iVar38 = iVar38 + -0x80;
        iVar35 = iVar35 + -0x80;
        iVar37 = iVar37 + -0x80;
        auVar52._0_4_ = -iVar44;
        auVar52._4_4_ = -iVar53;
        auVar52._8_4_ = -iVar54;
        auVar52._12_4_ = -iVar55;
        auVar11._4_4_ = uVar25;
        auVar11._0_4_ = uVar25;
        auVar11._8_4_ = uVar25;
        auVar11._12_4_ = uVar25;
        auVar48 = NEON_ushl(auVar11,auVar52,4);
        *(uint *)pbVar30 =
             CONCAT13(auVar57[0xc],CONCAT12(auVar57[8],CONCAT11(auVar57[4],auVar57[0])));
        *(uint *)(pbVar30 + 4) =
             CONCAT13(auVar48[0xc],CONCAT12(auVar48[8],CONCAT11(auVar48[4],auVar48[0])));
        *(uint *)(pbVar30 + -8) =
             CONCAT13(auVar40[0xc],CONCAT12(auVar40[8],CONCAT11(auVar40[4],auVar40[0])));
        *(uint *)(pbVar30 + -4) =
             CONCAT13(auVar46[0xc],CONCAT12(auVar46[8],CONCAT11(auVar46[4],auVar46[0])));
        pbVar30 = pbVar30 + 0x10;
      } while (uVar29 != 0);
      pbVar30 = pbVar24;
      if (uVar21 == uVar23) goto LAB_00312cfc;
    }
    do {
      uVar27 = uVar27 - 8;
      *pbVar24 = (byte)(uVar25 >> (ulong)(uVar27 & 0x1f));
      pbVar30 = pbVar24 + 1;
      pbVar24 = pbVar24 + 1;
    } while (8 < uVar27);
  }
LAB_00312cfc:
  pbVar22 = pbVar22 + 2;
LAB_00312d04:
  pbVar24 = pbVar30;
  if (uVar27 != 0) {
    pbVar24 = pbVar30 + 1;
    *pbVar30 = (byte)(uVar25 << (ulong)(8 - uVar27 & 0x1f)) | (byte)(0xff >> (ulong)(uVar27 & 0x1f))
    ;
  }
  lVar26 = *param_1;
  pbVar30 = (byte *)((long)param_1 + 9);
  if (lVar26 != 0) {
    pbVar30 = (byte *)param_1[2];
  }
  uVar29 = param_1[1] & 0xff;
  if (lVar26 != 0) {
    uVar29 = param_1[1];
  }
  if (pbVar24 <= pbVar30 + uVar29) {
    if (lVar26 == 0) {
      *(char *)(param_1 + 1) = (char)((long)pbVar24 - (long)pbVar1);
    }
    else {
      param_1[1] = (long)pbVar24 - (long)pbVar1;
    }
    pbVar1 = (byte *)((long)param_2 + 9);
    if (*param_2 != 0) {
      pbVar1 = (byte *)param_2[2];
    }
    uVar29 = param_2[1] & 0xff;
    if (*param_2 != 0) {
      uVar29 = param_2[1];
    }
    if (pbVar22 == pbVar1 + uVar29) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


