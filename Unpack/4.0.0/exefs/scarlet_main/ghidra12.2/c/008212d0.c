/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008212d0; name: FUN_008212d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_008212d0(int *param_1,undefined8 *param_2,ulong param_3,byte *param_4,ulong param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
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
  uint5 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte bVar45;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  uint uVar47;
  uint uVar46;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  uint uVar52;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  uint uVar57;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  uint uVar62;
  uint uVar66;
  int iVar67;
  int iVar68;
  uint uVar69;
  int iVar70;
  int iVar71;
  uint uVar72;
  int iVar73;
  int iVar74;
  uint uVar75;
  int iVar76;
  int iVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined1 auVar110 [16];
  
  if (*param_1 < 0) {
    if (*param_1 != -1) {
      lVar23 = 0;
      uVar22 = 0x16;
      goto LAB_008215a0;
    }
    FUN_0082112c(param_1,0);
  }
  if ((long)param_5 < 0) {
    lVar23 = 0;
    *param_1 = -0x16;
    uVar22 = 0x16;
  }
  else if (param_3 < (param_5 + 3 >> 2) * 3) {
    lVar23 = 0;
    *param_1 = -0x22;
    uVar22 = 0x22;
  }
  else if (param_5 == 0) {
LAB_008215b4:
    uVar22 = 0;
    lVar23 = 0;
  }
  else {
    iVar67 = *param_1;
    puVar25 = param_2;
    uVar22 = _DAT_03cabe40;
    uVar21 = _UNK_03cabe48;
    if (0 < iVar67) {
      do {
        if (param_5 == 0) goto LAB_008215b4;
        cVar1 = *(char *)((long)param_1 + (ulong)*param_4 + 10);
        if (cVar1 < '\0') {
          if (cVar1 != -2) goto LAB_00821584;
        }
        else {
          *param_1 = iVar67 + 1;
          *(char *)((long)param_1 + (long)iVar67 + 4) = cVar1;
          iVar67 = *param_1;
        }
        param_5 = param_5 - 1;
        param_4 = param_4 + 1;
      } while (iVar67 < 4);
      uVar46 = (int)*(char *)((long)param_1 + 5) << 0xc | (int)(char)param_1[1] << 0x12 |
               (int)*(char *)((long)param_1 + 6) << 6 | (int)*(char *)((long)param_1 + 7);
      *(char *)param_2 = (char)(uVar46 >> 0x10);
      *(char *)((long)param_2 + 2) = (char)uVar46;
      *(char *)((long)param_2 + 1) = (char)(uVar46 >> 8);
      *param_1 = 0;
      puVar25 = (undefined8 *)((long)param_2 + 3);
      uVar22 = _DAT_03cabe40;
      uVar21 = _UNK_03cabe48;
    }
    _DAT_03cabe40 = uVar22;
    _UNK_03cabe48 = uVar21;
    if (0x1f < param_5) {
      bVar2 = *(byte *)(param_1 + 2);
      bVar3 = *(byte *)((long)param_1 + 9);
      puVar24 = puVar25;
      do {
        bVar4 = *param_4;
        bVar5 = param_4[1];
        bVar6 = param_4[2];
        bVar7 = param_4[3];
        bVar8 = param_4[4];
        bVar9 = param_4[5];
        bVar10 = param_4[6];
        bVar11 = param_4[7];
        bVar12 = param_4[8];
        bVar13 = param_4[9];
        bVar14 = param_4[10];
        bVar15 = param_4[0xb];
        bVar16 = param_4[0xc];
        bVar17 = param_4[0xd];
        bVar18 = param_4[0xe];
        bVar19 = param_4[0xf];
        bVar26 = -('@' < (char)bVar4) & -((char)bVar4 < '[');
        bVar27 = -('@' < (char)bVar5) & -((char)bVar5 < '[');
        bVar28 = -('@' < (char)bVar6) & -((char)bVar6 < '[');
        bVar29 = -('@' < (char)bVar7) & -((char)bVar7 < '[');
        bVar30 = -('@' < (char)bVar8) & -((char)bVar8 < '[');
        bVar31 = -('@' < (char)bVar9) & -((char)bVar9 < '[');
        bVar32 = -('@' < (char)bVar10) & -((char)bVar10 < '[');
        bVar33 = -('@' < (char)bVar11) & -((char)bVar11 < '[');
        bVar34 = -('@' < (char)bVar12) & -((char)bVar12 < '[');
        bVar35 = -('@' < (char)bVar13) & -((char)bVar13 < '[');
        bVar36 = -('@' < (char)bVar14) & -((char)bVar14 < '[');
        bVar37 = -('@' < (char)bVar15) & -((char)bVar15 < '[');
        bVar38 = -('@' < (char)bVar16) & -((char)bVar16 < '[');
        bVar39 = -('@' < (char)bVar17) & -((char)bVar17 < '[');
        bVar40 = -('@' < (char)bVar18) & -((char)bVar18 < '[');
        bVar41 = -('@' < (char)bVar19) & -((char)bVar19 < '[');
        bVar94 = -('`' < (char)bVar4) & -((char)bVar4 < '{');
        bVar95 = -('`' < (char)bVar5) & -((char)bVar5 < '{');
        bVar96 = -('`' < (char)bVar6) & -((char)bVar6 < '{');
        bVar97 = -('`' < (char)bVar7) & -((char)bVar7 < '{');
        bVar98 = -('`' < (char)bVar8) & -((char)bVar8 < '{');
        bVar99 = -('`' < (char)bVar9) & -((char)bVar9 < '{');
        bVar100 = -('`' < (char)bVar10) & -((char)bVar10 < '{');
        bVar101 = -('`' < (char)bVar11) & -((char)bVar11 < '{');
        bVar102 = -('`' < (char)bVar12) & -((char)bVar12 < '{');
        bVar103 = -('`' < (char)bVar13) & -((char)bVar13 < '{');
        bVar104 = -('`' < (char)bVar14) & -((char)bVar14 < '{');
        bVar105 = -('`' < (char)bVar15) & -((char)bVar15 < '{');
        bVar106 = -('`' < (char)bVar16) & -((char)bVar16 < '{');
        bVar107 = -('`' < (char)bVar17) & -((char)bVar17 < '{');
        bVar108 = -('`' < (char)bVar18) & -((char)bVar18 < '{');
        bVar109 = -('`' < (char)bVar19) & -((char)bVar19 < '{');
        bVar78 = -('/' < (char)bVar4) & -((char)bVar4 < ':');
        bVar79 = -('/' < (char)bVar5) & -((char)bVar5 < ':');
        bVar80 = -('/' < (char)bVar6) & -((char)bVar6 < ':');
        bVar81 = -('/' < (char)bVar7) & -((char)bVar7 < ':');
        bVar82 = -('/' < (char)bVar8) & -((char)bVar8 < ':');
        bVar83 = -('/' < (char)bVar9) & -((char)bVar9 < ':');
        bVar84 = -('/' < (char)bVar10) & -((char)bVar10 < ':');
        bVar85 = -('/' < (char)bVar11) & -((char)bVar11 < ':');
        bVar86 = -('/' < (char)bVar12) & -((char)bVar12 < ':');
        bVar87 = -('/' < (char)bVar13) & -((char)bVar13 < ':');
        bVar88 = -('/' < (char)bVar14) & -((char)bVar14 < ':');
        bVar89 = -('/' < (char)bVar15) & -((char)bVar15 < ':');
        bVar90 = -('/' < (char)bVar16) & -((char)bVar16 < ':');
        bVar91 = -('/' < (char)bVar17) & -((char)bVar17 < ':');
        bVar92 = -('/' < (char)bVar18) & -((char)bVar18 < ':');
        bVar93 = -('/' < (char)bVar19) & -((char)bVar19 < ':');
        bVar45 = -(bVar4 == bVar3);
        bVar48 = -(bVar5 == bVar3);
        bVar49 = -(bVar6 == bVar3);
        bVar50 = -(bVar7 == bVar3);
        bVar51 = -(bVar8 == bVar3);
        bVar53 = -(bVar9 == bVar3);
        bVar54 = -(bVar10 == bVar3);
        bVar55 = -(bVar11 == bVar3);
        bVar56 = -(bVar12 == bVar3);
        bVar58 = -(bVar13 == bVar3);
        bVar59 = -(bVar14 == bVar3);
        bVar60 = -(bVar15 == bVar3);
        bVar61 = -(bVar16 == bVar3);
        bVar63 = -(bVar17 == bVar3);
        bVar64 = -(bVar18 == bVar3);
        bVar65 = -(bVar19 == bVar3);
        iVar67 = CONCAT13(bVar50 | -(bVar7 == bVar2) | bVar29 | bVar97 | bVar81,
                          CONCAT12(bVar49 | -(bVar6 == bVar2) | bVar28 | bVar96 | bVar80,
                                   CONCAT11(bVar48 | -(bVar5 == bVar2) | bVar27 | bVar95 | bVar79,
                                            bVar45 | -(bVar4 == bVar2) | bVar26 | bVar94 | bVar78)))
        ;
        iVar68 = CONCAT13(bVar60 | -(bVar15 == bVar2) | bVar37 | bVar105 | bVar89,
                          CONCAT12(bVar59 | -(bVar14 == bVar2) | bVar36 | bVar104 | bVar88,
                                   CONCAT11(bVar58 | -(bVar13 == bVar2) | bVar35 | bVar103 | bVar87,
                                            bVar56 | -(bVar12 == bVar2) | bVar34 | bVar102 | bVar86)
                                  ));
        puVar25 = puVar24;
        if ((-(uint)((int)(CONCAT17(bVar55 | -(bVar11 == bVar2) | bVar33 | bVar101 | bVar85,
                                    CONCAT16(bVar54 | -(bVar10 == bVar2) | bVar32 | bVar100 | bVar84
                                             ,CONCAT15(bVar53 | -(bVar9 == bVar2) | bVar31 | bVar99
                                                       | bVar83,CONCAT14(bVar51 | -(bVar8 == bVar2)
                                                                         | bVar30 | bVar98 | bVar82,
                                                                         iVar67)))) >> 0x20) == -1)
            - (uint)(iVar67 == -1)) +
            (-(uint)((int)(CONCAT17(bVar65 | -(bVar19 == bVar2) | bVar41 | bVar109 | bVar93,
                                    CONCAT16(bVar64 | -(bVar18 == bVar2) | bVar40 | bVar108 | bVar92
                                             ,CONCAT15(bVar63 | -(bVar17 == bVar2) | bVar39 |
                                                       bVar107 | bVar91,
                                                       CONCAT14(bVar61 | -(bVar16 == bVar2) | bVar38
                                                                | bVar106 | bVar90,iVar68)))) >>
                          0x20) == -1) - (uint)(iVar68 == -1)) != -4) break;
        param_5 = param_5 - 0x10;
        uVar46 = CONCAT31((int3)(((uint)CONCAT11(-(bVar7 == bVar2) & ~bVar50,
                                                 -(bVar6 == bVar2) & ~bVar49) << 0x10) >> 8),
                          -(bVar4 == bVar2) & ~bVar45) & 0xffffff3e;
        uVar47 = CONCAT22((short)(uVar46 >> 0x10),CONCAT11(-(bVar5 == bVar2) & ~bVar48,(char)uVar46)
                         ) & 0xffff3eff;
        uVar66 = CONCAT13((char)(uVar47 >> 0x18),CONCAT12((char)(uVar46 >> 0x10),(short)uVar47)) &
                 0x3e3effff;
        uVar46 = CONCAT31((int3)(((uint)CONCAT11(-(bVar11 == bVar2) & ~bVar55,
                                                 -(bVar10 == bVar2) & ~bVar54) << 0x10) >> 8),
                          -(bVar8 == bVar2) & ~bVar51) & 0xffffff3e;
        uVar47 = CONCAT22((short)(uVar46 >> 0x10),CONCAT11(-(bVar9 == bVar2) & ~bVar53,(char)uVar46)
                         ) & 0xffff3eff;
        uVar69 = CONCAT13((char)(uVar47 >> 0x18),CONCAT12((char)(uVar46 >> 0x10),(short)uVar47)) &
                 0x3e3effff;
        uVar46 = CONCAT31((int3)(((uint)CONCAT11(-(bVar15 == bVar2) & ~bVar60,
                                                 -(bVar14 == bVar2) & ~bVar59) << 0x10) >> 8),
                          -(bVar12 == bVar2) & ~bVar56) & 0xffffff3e;
        uVar47 = CONCAT22((short)(uVar46 >> 0x10),
                          CONCAT11(-(bVar13 == bVar2) & ~bVar58,(char)uVar46)) & 0xffff3eff;
        uVar72 = CONCAT13((char)(uVar47 >> 0x18),CONCAT12((char)(uVar46 >> 0x10),(short)uVar47)) &
                 0x3e3effff;
        uVar47 = CONCAT31((int3)(((uint)CONCAT11(-(bVar19 == bVar2) & ~bVar65,
                                                 -(bVar18 == bVar2) & ~bVar64) << 0x10) >> 8),
                          -(bVar16 == bVar2) & ~bVar61) & 0xffffff3e;
        uVar46 = CONCAT22((short)(uVar47 >> 0x10),
                          CONCAT11(-(bVar17 == bVar2) & ~bVar63,(char)uVar47)) & 0xffff3eff;
        uVar75 = CONCAT13((char)(uVar46 >> 0x18),CONCAT12((char)(uVar47 >> 0x10),(short)uVar46)) &
                 0x3e3effff;
        uVar46 = CONCAT31((int3)(((uint)CONCAT11(bVar50,bVar49) << 0x10) >> 8),bVar45) & 0xffffff3f;
        uVar47 = CONCAT22((short)(uVar46 >> 0x10),CONCAT11(bVar48,(char)uVar46)) & 0xffff3fff;
        uVar46 = CONCAT13((char)(uVar47 >> 0x18),CONCAT12((char)(uVar46 >> 0x10),(short)uVar47)) &
                 0x3f3fffff;
        uVar47 = CONCAT31((int3)(((uint)CONCAT11(bVar55,bVar54) << 0x10) >> 8),bVar51) & 0xffffff3f;
        uVar52 = CONCAT22((short)(uVar47 >> 0x10),CONCAT11(bVar53,(char)uVar47)) & 0xffff3fff;
        uVar47 = CONCAT13((char)(uVar52 >> 0x18),CONCAT12((char)(uVar47 >> 0x10),(short)uVar52)) &
                 0x3f3fffff;
        uVar52 = CONCAT31((int3)(((uint)CONCAT11(bVar60,bVar59) << 0x10) >> 8),bVar56) & 0xffffff3f;
        uVar57 = CONCAT22((short)(uVar52 >> 0x10),CONCAT11(bVar58,(char)uVar52)) & 0xffff3fff;
        uVar52 = CONCAT13((char)(uVar57 >> 0x18),CONCAT12((char)(uVar52 >> 0x10),(short)uVar57)) &
                 0x3f3fffff;
        uVar62 = CONCAT31((int3)(((uint)CONCAT11(bVar65,bVar64) << 0x10) >> 8),bVar61) & 0xffffff3f;
        uVar57 = CONCAT22((short)(uVar62 >> 0x10),CONCAT11(bVar63,(char)uVar62)) & 0xffff3fff;
        uVar57 = CONCAT13((char)(uVar57 >> 0x18),CONCAT12((char)(uVar62 >> 0x10),(short)uVar57)) &
                 0x3f3fffff;
        param_4 = param_4 + 0x10;
        auVar43[0] = (byte)uVar46 | (byte)uVar66 | bVar4 + 0xbf & (char)(bVar26 << 7) >> 7 |
                     bVar4 + 0xb9 & (char)(bVar94 << 7) >> 7 | bVar4 + 4 & (char)(bVar78 << 7) >> 7;
        auVar43[1] = (byte)(uVar46 >> 8) | (byte)(uVar66 >> 8) |
                     bVar5 + 0xbf & (char)(bVar27 << 7) >> 7 |
                     bVar5 + 0xb9 & (char)(bVar95 << 7) >> 7 | bVar5 + 4 & (char)(bVar79 << 7) >> 7;
        auVar43[2] = (byte)(uVar46 >> 0x10) | (byte)(uVar66 >> 0x10) |
                     bVar6 + 0xbf & (char)(bVar28 << 7) >> 7 |
                     bVar6 + 0xb9 & (char)(bVar96 << 7) >> 7 | bVar6 + 4 & (char)(bVar80 << 7) >> 7;
        auVar43[3] = (byte)(uVar46 >> 0x18) | (byte)(uVar66 >> 0x18) |
                     bVar7 + 0xbf & (char)(bVar29 << 7) >> 7 |
                     bVar7 + 0xb9 & (char)(bVar97 << 7) >> 7 | bVar7 + 4 & (char)(bVar81 << 7) >> 7;
        auVar43[4] = (byte)uVar47 | (byte)uVar69 | bVar8 + 0xbf & (char)(bVar30 << 7) >> 7 |
                     bVar8 + 0xb9 & (char)(bVar98 << 7) >> 7 | bVar8 + 4 & (char)(bVar82 << 7) >> 7;
        auVar43[5] = (byte)(uVar47 >> 8) | (byte)(uVar69 >> 8) |
                     bVar9 + 0xbf & (char)(bVar31 << 7) >> 7 |
                     bVar9 + 0xb9 & (char)(bVar99 << 7) >> 7 | bVar9 + 4 & (char)(bVar83 << 7) >> 7;
        auVar43[6] = (byte)(uVar47 >> 0x10) | (byte)(uVar69 >> 0x10) |
                     bVar10 + 0xbf & (char)(bVar32 << 7) >> 7 |
                     bVar10 + 0xb9 & (char)(bVar100 << 7) >> 7 |
                     bVar10 + 4 & (char)(bVar84 << 7) >> 7;
        auVar43[7] = (byte)(uVar47 >> 0x18) | (byte)(uVar69 >> 0x18) |
                     bVar11 + 0xbf & (char)(bVar33 << 7) >> 7 |
                     bVar11 + 0xb9 & (char)(bVar101 << 7) >> 7 |
                     bVar11 + 4 & (char)(bVar85 << 7) >> 7;
        auVar43[8] = (byte)uVar52 | (byte)uVar72 | bVar12 + 0xbf & (char)(bVar34 << 7) >> 7 |
                     bVar12 + 0xb9 & (char)(bVar102 << 7) >> 7 |
                     bVar12 + 4 & (char)(bVar86 << 7) >> 7;
        auVar43[9] = (byte)(uVar52 >> 8) | (byte)(uVar72 >> 8) |
                     bVar13 + 0xbf & (char)(bVar35 << 7) >> 7 |
                     bVar13 + 0xb9 & (char)(bVar103 << 7) >> 7 |
                     bVar13 + 4 & (char)(bVar87 << 7) >> 7;
        auVar43[10] = (byte)(uVar52 >> 0x10) | (byte)(uVar72 >> 0x10) |
                      bVar14 + 0xbf & (char)(bVar36 << 7) >> 7 |
                      bVar14 + 0xb9 & (char)(bVar104 << 7) >> 7 |
                      bVar14 + 4 & (char)(bVar88 << 7) >> 7;
        auVar43[0xb] = (byte)(uVar52 >> 0x18) | (byte)(uVar72 >> 0x18) |
                       bVar15 + 0xbf & (char)(bVar37 << 7) >> 7 |
                       bVar15 + 0xb9 & (char)(bVar105 << 7) >> 7 |
                       bVar15 + 4 & (char)(bVar89 << 7) >> 7;
        auVar43[0xc] = (byte)uVar57 | (byte)uVar75 | bVar16 + 0xbf & (char)(bVar38 << 7) >> 7 |
                       bVar16 + 0xb9 & (char)(bVar106 << 7) >> 7 |
                       bVar16 + 4 & (char)(bVar90 << 7) >> 7;
        auVar43[0xd] = (byte)(uVar57 >> 8) | (byte)(uVar75 >> 8) |
                       bVar17 + 0xbf & (char)(bVar39 << 7) >> 7 |
                       bVar17 + 0xb9 & (char)(bVar107 << 7) >> 7 |
                       bVar17 + 4 & (char)(bVar91 << 7) >> 7;
        auVar43[0xe] = (byte)(uVar57 >> 0x10) | (byte)(uVar75 >> 0x10) |
                       bVar18 + 0xbf & (char)(bVar40 << 7) >> 7 |
                       bVar18 + 0xb9 & (char)(bVar108 << 7) >> 7 |
                       bVar18 + 4 & (char)(bVar92 << 7) >> 7;
        auVar43[0xf] = (byte)(uVar57 >> 0x18) | (byte)(uVar75 >> 0x18) |
                       bVar19 + 0xbf & (char)(bVar41 << 7) >> 7 |
                       bVar19 + 0xb9 & (char)(bVar109 << 7) >> 7 |
                       bVar19 + 4 & (char)(bVar93 << 7) >> 7;
        auVar44 = NEON_rev32(auVar43,1);
        iVar67 = (uint)(auVar44[2] & 0x3f) << 0x14;
        iVar70 = (uint)(auVar44[6] & 0x3f) << 0x14;
        iVar73 = (uint)(auVar44[10] & 0x3f) << 0x14;
        iVar76 = (uint)(auVar44[0xe] & 0x3f) << 0x14;
        uVar42 = CONCAT14(auVar44[4],(uint)(auVar44[0] & 0x3f)) & 0x3fffffffff;
        iVar68 = (uint)(auVar44[1] & 0x3f) << 0xe;
        iVar71 = (uint)(auVar44[5] & 0x3f) << 0xe;
        iVar74 = (uint)(auVar44[9] & 0x3f) << 0xe;
        iVar77 = (uint)(auVar44[0xd] & 0x3f) << 0xe;
        auVar20[1] = (byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar68 >> 0x10);
        auVar20[0] = (byte)((uint)iVar68 >> 8) | (byte)uVar42;
        auVar20[2] = (byte)((uint)iVar67 >> 0x18) |
                     (byte)(((uint)(auVar44[3] & 0x3f) << 0x1a) >> 0x18);
        auVar20[3] = 0;
        auVar20[4] = (byte)((uint)iVar71 >> 8) | (byte)(uVar42 >> 0x20);
        auVar20[5] = (byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar71 >> 0x10);
        auVar20[6] = (byte)((uint)iVar70 >> 0x18) |
                     (byte)(((uint)(auVar44[7] & 0x3f) << 0x1a) >> 0x18);
        auVar20[7] = 0;
        auVar20[8] = (byte)((uint)iVar74 >> 8) | auVar44[8] & 0x3f;
        auVar20[9] = (byte)((uint)iVar73 >> 0x10) | (byte)((uint)iVar74 >> 0x10);
        auVar20[10] = (byte)((uint)iVar73 >> 0x18) |
                      (byte)(((uint)(auVar44[0xb] & 0x3f) << 0x1a) >> 0x18);
        auVar20[0xb] = 0;
        auVar20[0xc] = (byte)((uint)iVar77 >> 8) | auVar44[0xc] & 0x3f;
        auVar20[0xd] = (byte)((uint)iVar76 >> 0x10) | (byte)((uint)iVar77 >> 0x10);
        auVar20[0xe] = (byte)((uint)iVar76 >> 0x18) |
                       (byte)(((uint)(auVar44[0xf] & 0x3f) << 0x1a) >> 0x18);
        auVar20[0xf] = 0;
        auVar44._8_8_ = uVar21;
        auVar44._0_8_ = uVar22;
        auVar44 = a64_TBL(ZEXT816(0),auVar20 << 8,auVar44);
        puVar25 = (undefined8 *)((long)puVar24 + 0xc);
        puVar24[1] = auVar44._8_8_;
        *puVar24 = auVar44._0_8_;
        puVar24 = puVar25;
      } while (0x18 < param_5);
    }
LAB_00821500:
    if (param_5 != 0) {
      cVar1 = *(char *)((long)param_1 + (ulong)*param_4 + 10);
      if (cVar1 < '\0') {
        if (cVar1 != -2) goto LAB_00821584;
      }
      else {
        iVar67 = *param_1;
        *param_1 = iVar67 + 1;
        *(char *)((long)param_1 + (long)iVar67 + 4) = cVar1;
      }
      param_5 = param_5 - 1;
      param_4 = param_4 + 1;
      if (3 < *param_1) {
        uVar46 = (int)*(char *)((long)param_1 + 5) << 0xc | (int)(char)param_1[1] << 0x12 |
                 (int)*(char *)((long)param_1 + 6) << 6 | (int)*(char *)((long)param_1 + 7);
        *(char *)puVar25 = (char)(uVar46 >> 0x10);
        *(char *)((long)puVar25 + 1) = (char)(uVar46 >> 8);
        *(char *)((long)puVar25 + 2) = (char)uVar46;
        puVar25 = (undefined8 *)((long)puVar25 + 3);
        *param_1 = 0;
      }
      goto LAB_00821500;
    }
    uVar22 = 0;
    lVar23 = (long)puVar25 - (long)param_2;
  }
  goto LAB_008215a0;
LAB_00821584:
  lVar23 = 0;
  *param_1 = -0x54;
  uVar22 = 0x54;
LAB_008215a0:
  auVar110._8_8_ = lVar23;
  auVar110._0_8_ = uVar22;
  return auVar110;
}


