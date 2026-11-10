/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ead48; name: FUN_008ead48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_008ead48(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined2 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined5 uVar35;
  undefined4 uVar36;
  float *pfVar37;
  long lVar38;
  long lVar39;
  float *pfVar40;
  int iVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar98;
  float fVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  float fVar107;
  undefined8 uVar106;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar126;
  float fVar127;
  undefined8 uVar125;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined8 uVar131;
  float fVar132;
  undefined8 uVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined8 uVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  undefined8 local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  if (param_3 != 3) {
    lVar38 = *(long *)(*(long *)(param_2 + 0x238) + (ulong)param_3 * 8 + 0x340);
    if (lVar38 != 0) {
      pfVar40 = *(float **)(*(long *)(param_2 + 0x238) + 0x338);
      FUN_00d8d140(param_1,*(undefined8 *)(lVar38 + 8),0x3f);
      fVar1 = pfVar40[0xc];
      fVar3 = pfVar40[0xd];
      fVar5 = pfVar40[0xe];
      fVar6 = pfVar40[4];
      fVar120 = pfVar40[0xb];
      fVar7 = pfVar40[7];
      fVar2 = pfVar40[5];
      fVar4 = pfVar40[6];
      if (pfVar40[0xf] == 0.0) {
        fVar15 = pfVar40[0x11];
        uStack_d8 = (ulong)(uint)pfVar40[0x12];
        local_e0 = CONCAT17((char)((uint)fVar15 >> 0x18),
                            CONCAT16((char)((uint)fVar15 >> 0x10),
                                     CONCAT15((char)((uint)fVar15 >> 8),
                                              *(undefined5 *)(pfVar40 + 0x10))));
        FUN_008d7c6c(&local_d0,&local_e0);
        fVar15 = (float)local_d0;
        fVar96 = (float)DAT_03cab620;
        fVar99 = (float)((ulong)DAT_03cab620 >> 0x20);
        fVar97 = (float)DAT_03cab628;
        fVar161 = (float)((ulong)DAT_03cab628 >> 0x20);
        fVar122 = (float)_UNK_03caa5b8;
        fVar123 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
        fVar110 = (float)_DAT_03caa5b0;
        fVar121 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
        fVar119 = (float)local_b0;
        fVar44 = (float)((ulong)local_d0 >> 0x20);
        fVar26 = (float)_DAT_03cabe60;
        fVar88 = (float)((ulong)_DAT_03cabe60 >> 0x20);
        fVar89 = (float)_UNK_03cabe68;
        fVar87 = (float)((ulong)_UNK_03cabe68 >> 0x20);
        fVar94 = (float)uStack_c8;
        fVar42 = (float)((ulong)uStack_c8 >> 0x20);
        fVar124 = (float)_DAT_03cabe50;
        fVar126 = (float)((ulong)_DAT_03cabe50 >> 0x20);
        fVar128 = (float)_UNK_03cabe58;
        fVar129 = (float)((ulong)_UNK_03cabe58 >> 0x20);
        fVar130 = (float)((ulong)local_b0 >> 0x20);
        fVar98 = (float)uStack_c0;
        fVar127 = (float)((ulong)uStack_c0 >> 0x20);
        fVar19 = (float)uStack_b8;
        fVar118 = (float)((ulong)uStack_b8 >> 0x20);
        fVar132 = (float)uStack_a8;
        auVar34 = *(undefined1 (*) [12])(pfVar40 + 8);
        fVar21 = (float)((ulong)uStack_a8 >> 0x20);
        fVar108 = fVar96 * fVar15 + fVar26 * fVar44 + fVar110 * fVar94 + fVar124 * fVar42 + 0.0;
        fVar105 = fVar99 * fVar15 + fVar88 * fVar44 + fVar121 * fVar94 + fVar126 * fVar42 + 0.0;
        fVar111 = fVar97 * fVar15 + fVar89 * fVar44 + fVar122 * fVar94 + fVar128 * fVar42 + 0.0;
        fVar113 = fVar161 * fVar15 + fVar87 * fVar44 + fVar123 * fVar94 + fVar129 * fVar42 + 0.0;
        fVar104 = fVar96 * fVar98 + fVar26 * fVar127 + fVar110 * fVar19 + fVar124 * fVar118 + 0.0;
        fVar107 = fVar99 * fVar98 + fVar88 * fVar127 + fVar121 * fVar19 + fVar126 * fVar118 + 0.0;
        fVar109 = fVar97 * fVar98 + fVar89 * fVar127 + fVar122 * fVar19 + fVar128 * fVar118 + 0.0;
        fVar112 = fVar161 * fVar98 + fVar87 * fVar127 + fVar123 * fVar19 + fVar129 * fVar118 + 0.0;
        fVar118 = fVar96 * fVar119 + fVar26 * fVar130 + fVar110 * fVar132 + fVar124 * fVar21 + 0.0;
        fVar93 = fVar99 * fVar119 + fVar88 * fVar130 + fVar121 * fVar132 + fVar126 * fVar21 + 0.0;
        fVar95 = fVar97 * fVar119 + fVar89 * fVar130 + fVar122 * fVar132 + fVar128 * fVar21 + 0.0;
        fVar132 = fVar161 * fVar119 + fVar87 * fVar130 + fVar123 * fVar132 + fVar129 * fVar21 + 0.0;
        fVar15 = auVar34._0_4_ +
                 fVar96 * fStack_a0 + fVar26 * fStack_9c + fVar110 * fStack_98 + fVar124 * fStack_94
        ;
        fVar44 = auVar34._4_4_ +
                 fVar99 * fStack_a0 + fVar88 * fStack_9c + fVar121 * fStack_98 + fVar126 * fStack_94
        ;
        fVar94 = auVar34._8_4_ +
                 fVar97 * fStack_a0 + fVar89 * fStack_9c + fVar122 * fStack_98 + fVar128 * fStack_94
        ;
        fVar42 = fVar161 * fStack_a0 + fVar87 * fStack_9c + fVar123 * fStack_98 +
                 fVar129 * fStack_94 + 0.0;
        fVar26 = *(float *)(param_2 + 0x350);
        fVar88 = *(float *)(param_2 + 0x354);
        fVar89 = *(float *)(param_2 + 0x358);
        fVar99 = (float)*(undefined8 *)(param_2 + 0x368);
        fVar87 = (float)*(undefined8 *)(param_2 + 0x360);
        fVar96 = (float)((ulong)*(undefined8 *)(param_2 + 0x360) >> 0x20);
        uVar100 = NEON_fmov(0x3f800000,4);
        fVar21 = (float)((ulong)uVar100 >> 0x20);
        fVar110 = (float)*(undefined8 *)(param_2 + 0x378);
        fVar98 = (float)*(undefined8 *)(param_2 + 0x340);
        fVar127 = (float)((ulong)*(undefined8 *)(param_2 + 0x340) >> 0x20);
        fVar19 = (float)*(undefined8 *)(param_2 + 0x348);
        fVar97 = (float)*(undefined8 *)(param_2 + 0x370);
        fVar161 = (float)((ulong)*(undefined8 *)(param_2 + 0x370) >> 0x20);
        uStack_e8 = CONCAT44(fVar108 * 0.0 + fVar105 * 0.0 + fVar111 * 0.0 + fVar21 * fVar113,
                             fVar19 * fVar108 + fVar89 * fVar105 + fVar99 * fVar111 +
                             fVar110 * fVar113);
        local_f0 = CONCAT44(fVar127 * fVar108 + fVar88 * fVar105 + fVar96 * fVar111 +
                            fVar161 * fVar113,
                            fVar98 * fVar108 + fVar26 * fVar105 + fVar87 * fVar111 +
                            fVar97 * fVar113);
        local_100 = fVar98 * fVar104 + fVar26 * fVar107 + fVar87 * fVar109 + fVar97 * fVar112;
        fVar119 = fVar127 * fVar104 + fVar88 * fVar107 + fVar96 * fVar109 + fVar161 * fVar112;
        fStack_f8 = fVar19 * fVar104 + fVar89 * fVar107 + fVar99 * fVar109 + fVar110 * fVar112;
        fVar130 = fVar104 * 0.0 + fVar107 * 0.0 + fVar109 * 0.0 + fVar21 * fVar112;
        local_110 = fVar98 * fVar118 + fVar26 * fVar93 + fVar87 * fVar95 + fVar97 * fVar132;
        fStack_10c = fVar127 * fVar118 + fVar88 * fVar93 + fVar96 * fVar95 + fVar161 * fVar132;
        fStack_108 = fVar19 * fVar118 + fVar89 * fVar93 + fVar99 * fVar95 + fVar110 * fVar132;
        fStack_104 = fVar118 * 0.0 + fVar93 * 0.0 + fVar95 * 0.0 + fVar21 * fVar132;
        fVar127 = fVar127 * fVar15 + fVar88 * fVar44 + fVar96 * fVar94 + fVar161 * fVar42;
        fVar19 = fVar19 * fVar15 + fVar89 * fVar44 + fVar99 * fVar94 + fVar110 * fVar42;
        fVar118 = fVar15 * 0.0 + fVar44 * 0.0 + fVar94 * 0.0 + fVar21 * fVar42;
        fStack_f4 = (float)(CONCAT17((char)((uint)fVar130 >> 0x18),
                                     CONCAT16((char)((uint)fVar130 >> 0x10),
                                              CONCAT15((char)((uint)fVar130 >> 8),
                                                       CONCAT14(SUB41(fVar130,0),fStack_f8)))) >>
                           0x20);
        fStack_fc = (float)(CONCAT17((char)((uint)fVar119 >> 0x18),
                                     CONCAT16((char)((uint)fVar119 >> 0x10),
                                              CONCAT15((char)((uint)fVar119 >> 8),
                                                       CONCAT14(SUB41(fVar119,0),local_100)))) >>
                           0x20);
        uStack_118 = SUB41(fVar19,0);
        uStack_117 = (undefined7)
                     (CONCAT17((char)((uint)fVar118 >> 0x18),
                               CONCAT16((char)((uint)fVar118 >> 0x10),
                                        CONCAT15((char)((uint)fVar118 >> 8),
                                                 CONCAT14(SUB41(fVar118,0),fVar19)))) >> 8);
        local_120 = CONCAT17((char)((uint)fVar127 >> 0x18),
                             CONCAT16((char)((uint)fVar127 >> 0x10),
                                      CONCAT15((char)((uint)fVar127 >> 8),
                                               CONCAT14(SUB41(fVar127,0),
                                                        fVar98 * fVar15 + fVar26 * fVar44 +
                                                        fVar87 * fVar94 + fVar97 * fVar42))));
      }
      else {
        lVar39 = *(long *)(param_5 + 8);
        fVar132 = (float)_DAT_03cabe50;
        fVar98 = *(float *)(lVar39 + 0x110) + fVar132;
        fVar108 = (float)((ulong)_DAT_03cabe50 >> 0x20);
        fVar127 = *(float *)(lVar39 + 0x114) + fVar108;
        fVar111 = (float)_UNK_03cabe58;
        fVar15 = *(float *)(lVar39 + 0x118) + fVar111;
        fVar26 = (float)((ulong)_UNK_03cabe58 >> 0x20);
        fVar44 = fVar26 + 0.0;
        uVar100 = CONCAT17((char)((uint)fVar44 >> 0x18),
                           CONCAT16((char)((uint)fVar44 >> 0x10),
                                    CONCAT15((char)((uint)fVar44 >> 8),
                                             CONCAT14(SUB41(fVar44,0),fVar15))));
        uStack_118 = SUB41(fVar15,0);
        uStack_117 = (undefined7)((ulong)uVar100 >> 8);
        fVar15 = pfVar40[0x11];
        uStack_d8 = (ulong)(uint)pfVar40[0x12];
        local_e0 = CONCAT17((char)((uint)fVar15 >> 0x18),
                            CONCAT16((char)((uint)fVar15 >> 0x10),
                                     CONCAT15((char)((uint)fVar15 >> 8),
                                              *(undefined5 *)(pfVar40 + 0x10))));
        FUN_008d7c6c(SUB41(pfVar40[0x10],0),0,&local_d0,&local_e0);
        fVar15 = (float)DAT_03cab620;
        fVar44 = (float)((ulong)DAT_03cab620 >> 0x20);
        fVar94 = (float)DAT_03cab628;
        fVar42 = (float)((ulong)DAT_03cab628 >> 0x20);
        fVar19 = (float)_DAT_03cabe60;
        fVar118 = (float)((ulong)_DAT_03cabe60 >> 0x20);
        fVar119 = (float)_UNK_03cabe68;
        fVar130 = (float)((ulong)_UNK_03cabe68 >> 0x20);
        fVar21 = (float)_DAT_03caa5b0;
        fVar105 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
        fVar113 = (float)_UNK_03caa5b8;
        fVar88 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
        fVar104 = (float)uStack_c0;
        fVar109 = (float)((ulong)uStack_c0 >> 0x20);
        fVar112 = (float)uStack_b8;
        fVar110 = (float)((ulong)uStack_b8 >> 0x20);
        fVar107 = pfVar40[8];
        fVar89 = pfVar40[9];
        fVar122 = pfVar40[10];
        fVar87 = fVar15 * (float)local_d0 + fVar19 * local_d0._4_4_ + fVar21 * (float)uStack_c8 +
                 fVar132 * uStack_c8._4_4_ + 0.0;
        fVar93 = fVar44 * (float)local_d0 + fVar118 * local_d0._4_4_ + fVar105 * (float)uStack_c8 +
                 fVar108 * uStack_c8._4_4_ + 0.0;
        fVar95 = fVar94 * (float)local_d0 + fVar119 * local_d0._4_4_ + fVar113 * (float)uStack_c8 +
                 fVar111 * uStack_c8._4_4_ + 0.0;
        fVar96 = fVar42 * (float)local_d0 + fVar130 * local_d0._4_4_ + fVar88 * (float)uStack_c8 +
                 fVar26 * uStack_c8._4_4_ + 0.0;
        fVar99 = fVar15 * fVar104 + fVar19 * fVar109 + fVar21 * fVar112 + fVar132 * fVar110 + 0.0;
        fVar97 = fVar44 * fVar104 + fVar118 * fVar109 + fVar105 * fVar112 + fVar108 * fVar110 + 0.0;
        fVar161 = fVar94 * fVar104 + fVar119 * fVar109 + fVar113 * fVar112 + fVar111 * fVar110 + 0.0
        ;
        fVar104 = fVar42 * fVar104 + fVar130 * fVar109 + fVar88 * fVar112 + fVar26 * fVar110 + 0.0;
        fVar121 = (float)local_b0;
        fVar123 = (float)((ulong)local_b0 >> 0x20);
        fVar124 = (float)uStack_a8;
        fVar126 = (float)((ulong)uStack_a8 >> 0x20);
        fVar109 = fVar15 * fVar121 + fVar19 * fVar123 + fVar21 * fVar124 + fVar132 * fVar126 + 0.0;
        fVar112 = fVar44 * fVar121 + fVar118 * fVar123 + fVar105 * fVar124 + fVar108 * fVar126 + 0.0
        ;
        fVar110 = fVar94 * fVar121 + fVar119 * fVar123 + fVar113 * fVar124 + fVar111 * fVar126 + 0.0
        ;
        fVar121 = fVar42 * fVar121 + fVar130 * fVar123 + fVar88 * fVar124 + fVar26 * fVar126 + 0.0;
        fVar132 = fVar15 * fStack_a0 + fVar19 * fStack_9c + fVar21 * fStack_98 + fVar132 * fStack_94
                  + fVar107 * *(float *)(lVar39 + 0xc0) + fVar89 * *(float *)(lVar39 + 0xc4) +
                    fVar122 * *(float *)(lVar39 + 200);
        fVar108 = fVar44 * fStack_a0 + fVar118 * fStack_9c + fVar105 * fStack_98 +
                  fVar108 * fStack_94 +
                  fVar107 * *(float *)(lVar39 + 0xd0) + fVar89 * *(float *)(lVar39 + 0xd4) +
                  fVar122 * *(float *)(lVar39 + 0xd8);
        fVar111 = fVar94 * fStack_a0 + fVar119 * fStack_9c + fVar113 * fStack_98 +
                  fVar111 * fStack_94 +
                  fVar107 * *(float *)(lVar39 + 0xe0) + fVar89 * *(float *)(lVar39 + 0xe4) +
                  fVar122 * *(float *)(lVar39 + 0xe8);
        fVar26 = fVar42 * fStack_a0 + fVar130 * fStack_9c + fVar88 * fStack_98 + fVar26 * fStack_94
                 + 0.0;
        fVar127 = (float)(CONCAT17((char)((uint)fVar127 >> 0x18),
                                   CONCAT16((char)((uint)fVar127 >> 0x10),
                                            CONCAT15((char)((uint)fVar127 >> 8),
                                                     CONCAT14(SUB41(fVar127,0),fVar98)))) >> 0x20);
        fVar89 = (float)CONCAT71(uStack_117,uStack_118);
        fVar107 = (float)((ulong)uVar100 >> 0x20);
        uStack_e8 = CONCAT44(fVar42 * fVar87 + fVar130 * fVar93 + fVar88 * fVar95 + fVar107 * fVar96
                             ,fVar94 * fVar87 + fVar119 * fVar93 + fVar113 * fVar95 +
                              fVar89 * fVar96);
        local_f0 = CONCAT44(fVar44 * fVar87 + fVar118 * fVar93 + fVar105 * fVar95 + fVar127 * fVar96
                            ,fVar15 * fVar87 + fVar19 * fVar93 + fVar21 * fVar95 + fVar98 * fVar96);
        local_100 = fVar15 * fVar99 + fVar19 * fVar97 + fVar21 * fVar161 + fVar98 * fVar104;
        fStack_fc = fVar44 * fVar99 + fVar118 * fVar97 + fVar105 * fVar161 + fVar127 * fVar104;
        fStack_f8 = fVar94 * fVar99 + fVar119 * fVar97 + fVar113 * fVar161 + fVar89 * fVar104;
        fStack_f4 = fVar42 * fVar99 + fVar130 * fVar97 + fVar88 * fVar161 + fVar107 * fVar104;
        local_110 = fVar15 * fVar109 + fVar19 * fVar112 + fVar21 * fVar110 + fVar98 * fVar121;
        fStack_10c = fVar44 * fVar109 + fVar118 * fVar112 + fVar105 * fVar110 + fVar127 * fVar121;
        fStack_108 = fVar94 * fVar109 + fVar119 * fVar112 + fVar113 * fVar110 + fVar89 * fVar121;
        fStack_104 = fVar42 * fVar109 + fVar130 * fVar112 + fVar88 * fVar110 + fVar107 * fVar121;
        fVar44 = fVar44 * fVar132 + fVar118 * fVar108 + fVar105 * fVar111 + fVar127 * fVar26;
        fVar94 = fVar94 * fVar132 + fVar119 * fVar108 + fVar113 * fVar111 + fVar89 * fVar26;
        fVar42 = fVar42 * fVar132 + fVar130 * fVar108 + fVar88 * fVar111 + fVar107 * fVar26;
        uStack_118 = SUB41(fVar94,0);
        uStack_117 = (undefined7)
                     (CONCAT17((char)((uint)fVar42 >> 0x18),
                               CONCAT16((char)((uint)fVar42 >> 0x10),
                                        CONCAT15((char)((uint)fVar42 >> 8),
                                                 CONCAT14(SUB41(fVar42,0),fVar94)))) >> 8);
        local_120 = CONCAT17((char)((uint)fVar44 >> 0x18),
                             CONCAT16((char)((uint)fVar44 >> 0x10),
                                      CONCAT15((char)((uint)fVar44 >> 8),
                                               CONCAT14(SUB41(fVar44,0),
                                                        fVar15 * fVar132 + fVar19 * fVar108 +
                                                        fVar21 * fVar111 + fVar98 * fVar26))));
      }
      iVar41 = (int)(pfVar40[3] + 1.0);
      if (0 < iVar41) {
        uVar62 = (undefined1)((uint)fStack_108 >> 0x18);
        uVar64 = SUB41(fStack_104,0);
        uVar69 = (undefined1)((uint)fStack_104 >> 8);
        uVar73 = (undefined1)((uint)fStack_104 >> 0x10);
        uVar77 = (undefined1)((uint)fStack_104 >> 0x18);
        fVar121 = 0.0;
        fVar155 = (float)uStack_e8;
        fVar158 = (float)((ulong)uStack_e8 >> 0x20);
        fVar147 = (float)((ulong)local_f0 >> 0x20);
        fVar122 = 0.0;
        uVar81 = SUB41(local_110,0);
        uVar82 = (undefined1)((uint)local_110 >> 8);
        uVar83 = (undefined1)((uint)local_110 >> 0x10);
        uVar84 = (undefined1)((uint)local_110 >> 0x18);
        uVar85 = (undefined1)((ulong)uStack_e8 >> 0x30);
        uVar86 = (undefined1)((ulong)uStack_e8 >> 0x38);
        uVar67 = (undefined1)((uint7)uStack_117 >> 0x18);
        uVar70 = (undefined1)((uint7)uStack_117 >> 0x20);
        uVar74 = (undefined1)((uint7)uStack_117 >> 0x28);
        uVar78 = (undefined1)((uint7)uStack_117 >> 0x30);
        uVar47 = (undefined4)((ulong)local_120 >> 0x20);
        uVar36 = CONCAT13((char)((uint7)uStack_117 >> 0x10),
                          CONCAT12((char)((uint7)uStack_117 >> 8),
                                   CONCAT11((char)uStack_117,uStack_118)));
        uVar52 = SUB41(local_100,0);
        uVar54 = (undefined1)((uint)local_100 >> 8);
        uVar56 = (undefined1)((uint)local_100 >> 0x10);
        uVar58 = (undefined1)((uint)local_100 >> 0x18);
        uVar65 = (undefined1)local_120;
        uVar71 = (undefined1)((ulong)local_120 >> 8);
        uVar75 = (undefined1)((ulong)local_120 >> 0x10);
        uVar79 = (undefined1)((ulong)local_120 >> 0x18);
        uVar35 = CONCAT14((char)((ulong)local_f0 >> 0x38),
                          CONCAT13((char)((ulong)local_f0 >> 0x30),
                                   CONCAT12((char)((ulong)local_f0 >> 0x28),
                                            CONCAT11((char)((ulong)local_f0 >> 0x20),uVar84))));
        uVar45 = (undefined4)((uint5)uVar35 >> 8);
        uVar46 = (undefined4)
                 (CONCAT18((char)((uint)fStack_10c >> 0x18),
                           CONCAT17((char)((uint)fStack_10c >> 0x10),
                                    CONCAT16((char)((uint)fStack_10c >> 8),
                                             CONCAT15(SUB41(fStack_10c,0),uVar35)))) >> 0x28);
        uVar43 = (undefined4)
                 (CONCAT17(uVar62,CONCAT16((char)((uint)fStack_108 >> 0x10),
                                           CONCAT15((char)((uint)fStack_108 >> 8),
                                                    CONCAT14(SUB41(fStack_108,0),fVar155)))) >> 0x20
                 );
        uVar114 = SUB41(fStack_f4,0);
        uVar115 = (undefined1)((uint)fStack_f4 >> 8);
        uVar116 = (undefined1)((uint)fStack_f4 >> 0x10);
        uVar117 = (undefined1)((uint)fStack_f4 >> 0x18);
        fVar15 = (float)local_f0;
        uVar100 = NEON_rev64(CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(uVar52,fVar15)
                                                                     ))),4);
        auVar91[4] = uVar52;
        auVar91._0_4_ = fVar15;
        auVar91[5] = uVar54;
        auVar91[6] = uVar56;
        auVar91[7] = uVar58;
        auVar91[8] = uVar81;
        auVar91[9] = uVar82;
        auVar91[10] = uVar83;
        auVar91[0xb] = uVar84;
        auVar91[0xc] = uVar65;
        auVar91[0xd] = uVar71;
        auVar91[0xe] = uVar75;
        auVar91[0xf] = uVar79;
        uVar101 = a64_TBL(ZEXT816(0),auVar91,DAT_03cb54a8);
        auVar103[4] = uVar52;
        auVar103._0_4_ = fVar15;
        auVar103[5] = uVar54;
        auVar103[6] = uVar56;
        auVar103[7] = uVar58;
        auVar103[8] = uVar81;
        auVar103[9] = uVar82;
        auVar103[10] = uVar83;
        auVar103[0xb] = uVar84;
        auVar103[0xc] = uVar65;
        auVar103[0xd] = uVar71;
        auVar103[0xe] = uVar75;
        auVar103[0xf] = uVar79;
        uVar20 = a64_TBL(ZEXT816(0),auVar103,DAT_03cb53e8);
        auVar8[4] = uVar52;
        auVar8._0_4_ = fVar15;
        auVar8[5] = uVar54;
        auVar8[6] = uVar56;
        auVar8[7] = uVar58;
        auVar8[8] = uVar81;
        auVar8[9] = uVar82;
        auVar8[10] = uVar83;
        auVar8[0xb] = uVar84;
        auVar8[0xc] = uVar65;
        auVar8[0xd] = uVar71;
        auVar8[0xe] = uVar75;
        auVar8[0xf] = uVar79;
        uVar90 = a64_TBL(ZEXT816(0),auVar8,DAT_03cb5388);
        uVar102 = NEON_rev64(CONCAT44(fStack_fc,uVar45),4);
        auVar27._4_4_ = fStack_fc;
        auVar27._0_4_ = uVar45;
        auVar27._8_4_ = uVar46;
        auVar27._12_4_ = uVar47;
        uVar106 = a64_TBL(ZEXT816(0),auVar27,DAT_03cb53e8);
        auVar28._4_4_ = fStack_fc;
        auVar28._0_4_ = uVar45;
        auVar28._8_4_ = uVar46;
        auVar28._12_4_ = uVar47;
        uVar131 = a64_TBL(ZEXT816(0),auVar28,DAT_03cb5388);
        auVar29._4_4_ = fStack_fc;
        auVar29._0_4_ = uVar45;
        auVar29._8_4_ = uVar46;
        auVar29._12_4_ = uVar47;
        uVar30 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54a8);
        fVar118 = (float)uVar30;
        fVar119 = (float)((ulong)uVar30 >> 0x20);
        uVar30 = NEON_rev64(CONCAT44(fStack_f8,fVar155),4);
        fVar112 = (float)uVar30;
        fVar110 = (float)((ulong)uVar30 >> 0x20);
        auVar31._4_4_ = fStack_f8;
        auVar31._0_4_ = fVar155;
        auVar31._8_4_ = uVar43;
        auVar31._12_4_ = uVar36;
        uVar125 = a64_TBL(ZEXT816(0),auVar31,DAT_03cb53e8);
        auVar32._4_4_ = fStack_f8;
        auVar32._0_4_ = fVar155;
        auVar32._8_4_ = uVar43;
        auVar32._12_4_ = uVar36;
        uVar133 = a64_TBL(ZEXT816(0),auVar32,DAT_03cb5388);
        auVar33._4_4_ = fStack_f8;
        auVar33._0_4_ = fVar155;
        auVar33._8_4_ = uVar43;
        auVar33._12_4_ = uVar36;
        uVar30 = a64_TBL(ZEXT816(0),auVar33,DAT_03cb54a8);
        fVar134 = (float)uVar30;
        fVar136 = (float)((ulong)uVar30 >> 0x20);
        uVar23 = (undefined2)
                 (CONCAT12((char)((ulong)uStack_e8 >> 0x28),
                           CONCAT11((char)((ulong)uStack_e8 >> 0x20),uVar62)) >> 8);
        auVar22[2] = uVar85;
        auVar22._0_2_ = uVar23;
        auVar22[3] = uVar86;
        auVar22[4] = uVar114;
        auVar22[5] = uVar115;
        auVar22[6] = uVar116;
        auVar22[7] = uVar117;
        auVar22[8] = uVar64;
        auVar22[9] = uVar69;
        auVar22[10] = uVar73;
        auVar22[0xb] = uVar77;
        auVar22[0xc] = uVar67;
        auVar22[0xd] = uVar70;
        auVar22[0xe] = uVar74;
        auVar22[0xf] = uVar78;
        uVar30 = a64_TBL(ZEXT816(0),auVar22,DAT_03cb53e8);
        fVar135 = (float)uVar30;
        fVar137 = (float)((ulong)uVar30 >> 0x20);
        auVar24[2] = uVar85;
        auVar24._0_2_ = uVar23;
        auVar24[3] = uVar86;
        auVar24[4] = uVar114;
        auVar24[5] = uVar115;
        auVar24[6] = uVar116;
        auVar24[7] = uVar117;
        auVar24[8] = uVar64;
        auVar24[9] = uVar69;
        auVar24[10] = uVar73;
        auVar24[0xb] = uVar77;
        auVar24[0xc] = uVar67;
        auVar24[0xd] = uVar70;
        auVar24[0xe] = uVar74;
        auVar24[0xf] = uVar78;
        uVar141 = a64_TBL(ZEXT816(0),auVar24,DAT_03cb5388);
        fVar88 = (float)uVar90;
        fVar42 = (float)uVar106;
        fVar87 = (float)((ulong)uVar90 >> 0x20);
        fVar98 = (float)((ulong)uVar106 >> 0x20);
        fVar95 = (float)uVar101;
        fVar99 = (float)((ulong)uVar101 >> 0x20);
        uVar90 = NEON_rev64(CONCAT17(uVar117,CONCAT16(uVar116,CONCAT15(uVar115,CONCAT14(uVar114,
                                                  CONCAT13(uVar86,CONCAT12(uVar85,uVar23)))))),4);
        auVar25[2] = uVar85;
        auVar25._0_2_ = uVar23;
        auVar25[3] = uVar86;
        auVar25[4] = uVar114;
        auVar25[5] = uVar115;
        auVar25[6] = uVar116;
        auVar25[7] = uVar117;
        auVar25[8] = uVar64;
        auVar25[9] = uVar69;
        auVar25[10] = uVar73;
        auVar25[0xb] = uVar77;
        auVar25[0xc] = uVar67;
        auVar25[0xd] = uVar70;
        auVar25[0xe] = uVar74;
        auVar25[0xf] = uVar78;
        uVar30 = a64_TBL(ZEXT816(0),auVar25,DAT_03cb54a8);
        fVar128 = (float)uVar133;
        fVar129 = (float)((ulong)uVar133 >> 0x20);
        fVar124 = (float)uVar125;
        fVar140 = (float)uVar141;
        fVar126 = (float)((ulong)uVar125 >> 0x20);
        fVar142 = (float)((ulong)uVar141 >> 0x20);
        fVar143 = (float)uVar30;
        fVar144 = (float)((ulong)uVar30 >> 0x20);
        fVar138 = (float)uVar90;
        fVar139 = (float)((ulong)uVar90 >> 0x20);
        fVar123 = 0.0;
        fVar105 = fVar124 * fVar140 - fVar128 * fVar135;
        fVar111 = fVar126 * fVar142 - fVar129 * fVar137;
        fVar113 = fStack_f8 * fVar143 - fVar134 * fStack_f4;
        fVar26 = fStack_f8 * fVar144 - fVar136 * fStack_f4;
        fVar145 = fVar112 * fVar140 - fVar138 * fVar128;
        fVar146 = fVar110 * fVar142 - fVar139 * fVar129;
        fVar148 = fVar155 * fVar143 - fVar158 * fVar134;
        fVar149 = fVar155 * fVar144 - fVar158 * fVar136;
        fVar151 = fVar112 * fVar135 - fVar138 * fVar124;
        fVar153 = fVar110 * fVar137 - fVar139 * fVar126;
        fVar156 = fVar155 * fStack_f4 - fVar158 * fStack_f8;
        fVar159 = fVar155 * fStack_f4 - fVar158 * fStack_f8;
        fVar44 = (float)uVar102;
        fVar94 = (float)((ulong)uVar102 >> 0x20);
        fVar127 = (float)uVar100;
        fVar19 = (float)((ulong)uVar100 >> 0x20);
        fVar21 = (float)uVar20;
        fVar108 = (float)((ulong)uVar20 >> 0x20);
        fVar130 = (float)uVar131;
        fVar132 = (float)((ulong)uVar131 >> 0x20);
        fVar152 = fVar21 * fVar130 - fVar88 * fVar42;
        fVar154 = fVar108 * fVar132 - fVar87 * fVar98;
        fVar157 = local_100 * fVar118 - fVar95 * fStack_fc;
        fVar160 = local_100 * fVar119 - fVar99 * fStack_fc;
        fVar89 = fVar127 * fVar130 - fVar88 * fVar44;
        fVar93 = fVar19 * fVar132 - fVar87 * fVar94;
        fVar96 = fVar15 * fVar118 - fVar95 * fVar147;
        fVar97 = fVar15 * fVar119 - fVar99 * fVar147;
        fVar161 = ((fVar44 * fVar105 - fVar42 * fVar145) + fVar151 * fVar130) * (float)_DAT_03cabc00
        ;
        fVar162 = (float)((ulong)_DAT_03cabc00 >> 0x20);
        fVar104 = ((fVar94 * fVar111 - fVar98 * fVar146) + fVar153 * fVar132) * fVar162;
        fVar107 = ((fVar147 * fVar113 - fStack_fc * fVar148) + fVar156 * fVar118) *
                  (float)_UNK_03cabc08;
        fVar163 = (float)((ulong)_UNK_03cabc08 >> 0x20);
        fVar109 = ((fVar147 * fVar26 - fStack_fc * fVar149) + fVar159 * fVar119) * fVar163;
        fVar118 = fVar127 * fVar42 - fVar44 * fVar21;
        fVar119 = fVar19 * fVar98 - fVar94 * fVar108;
        fVar130 = fVar15 * fStack_fc - fVar147 * local_100;
        fVar132 = fVar15 * fStack_fc - fVar147 * local_100;
        fVar44 = fVar15 * fVar161;
        fVar94 = local_100 * fVar104;
        uVar52 = (undefined1)((uint)fVar94 >> 8);
        uVar54 = (undefined1)((uint)fVar94 >> 0x10);
        uVar56 = (undefined1)((uint)fVar94 >> 0x18);
        fVar42 = local_110 * fVar107;
        uVar58 = (undefined1)((uint)fVar42 >> 8);
        uVar62 = (undefined1)((uint)fVar42 >> 0x10);
        uVar64 = (undefined1)((uint)fVar42 >> 0x18);
        fVar98 = (float)local_120 * fVar109;
        uVar67 = (undefined1)((uint)fVar98 >> 8);
        uVar65 = (undefined1)((uint)fVar98 >> 0x10);
        uVar69 = (undefined1)((uint)fVar98 >> 0x18);
        auVar9[4] = SUB41(fVar94,0);
        auVar9._0_4_ = fVar44;
        auVar9[5] = uVar52;
        auVar9[6] = uVar54;
        auVar9[7] = uVar56;
        auVar9[8] = SUB41(fVar42,0);
        auVar9[9] = uVar58;
        auVar9[10] = uVar62;
        auVar9[0xb] = uVar64;
        auVar9[0xc] = SUB41(fVar98,0);
        auVar9[0xd] = uVar67;
        auVar9[0xe] = uVar65;
        auVar9[0xf] = uVar69;
        auVar10[4] = SUB41(fVar94,0);
        auVar10._0_4_ = fVar44;
        auVar10[5] = uVar52;
        auVar10[6] = uVar54;
        auVar10[7] = uVar56;
        auVar10[8] = SUB41(fVar42,0);
        auVar10[9] = uVar58;
        auVar10[10] = uVar62;
        auVar10[0xb] = uVar64;
        auVar10[0xc] = SUB41(fVar98,0);
        auVar10[0xd] = uVar67;
        auVar10[0xe] = uVar65;
        auVar10[0xf] = uVar69;
        auVar91 = NEON_ext(auVar9,auVar10,8,1);
        fVar147 = (float)((ulong)_DAT_03cac210 >> 0x20);
        fVar150 = (float)((ulong)_UNK_03cac218 >> 0x20);
        fVar44 = auVar91._0_4_ + fVar44;
        fVar94 = auVar91._4_4_ + fVar94;
        fVar42 = fVar44 + fVar94;
        fVar44 = fVar44 + fVar94;
        uVar52 = SUB41(fVar44,0);
        uVar54 = (undefined1)((uint)fVar44 >> 8);
        uVar56 = (undefined1)((uint)fVar44 >> 0x10);
        uVar58 = (undefined1)((uint)fVar44 >> 0x18);
        uVar62 = SUB41(fVar42,0);
        uVar64 = (undefined1)((uint)fVar42 >> 8);
        uVar67 = (undefined1)((uint)fVar42 >> 0x10);
        uVar65 = (undefined1)((uint)fVar42 >> 0x18);
        auVar11[4] = uVar52;
        auVar11._0_4_ = fVar42;
        auVar11[5] = uVar54;
        auVar11[6] = uVar56;
        auVar11[7] = uVar58;
        auVar11[8] = uVar62;
        auVar11[9] = uVar64;
        auVar11[10] = uVar67;
        auVar11[0xb] = uVar65;
        auVar11[0xc] = uVar52;
        auVar11[0xd] = uVar54;
        auVar11[0xe] = uVar56;
        auVar11[0xf] = uVar58;
        auVar91 = NEON_frecpe(auVar11,4);
        auVar12[4] = uVar52;
        auVar12._0_4_ = fVar42;
        auVar12[5] = uVar54;
        auVar12[6] = uVar56;
        auVar12[7] = uVar58;
        auVar12[8] = uVar62;
        auVar12[9] = uVar64;
        auVar12[10] = uVar67;
        auVar12[0xb] = uVar65;
        auVar12[0xc] = uVar52;
        auVar12[0xd] = uVar54;
        auVar12[0xe] = uVar56;
        auVar12[0xf] = uVar58;
        auVar103 = NEON_frecps(auVar91,auVar12,4);
        auVar92._0_4_ = auVar91._0_4_ * auVar103._0_4_;
        auVar92._4_4_ = auVar91._4_4_ * auVar103._4_4_;
        auVar92._8_4_ = auVar91._8_4_ * auVar103._8_4_;
        auVar92._12_4_ = auVar91._12_4_ * auVar103._12_4_;
        auVar13[4] = uVar52;
        auVar13._0_4_ = fVar42;
        auVar13[5] = uVar54;
        auVar13[6] = uVar56;
        auVar13[7] = uVar58;
        auVar13[8] = uVar62;
        auVar13[9] = uVar64;
        auVar13[10] = uVar67;
        auVar13[0xb] = uVar65;
        auVar13[0xc] = uVar52;
        auVar13[0xd] = uVar54;
        auVar13[0xe] = uVar56;
        auVar13[0xf] = uVar58;
        auVar91 = NEON_frecps(auVar92,auVar13,4);
        iVar14 = -(uint)(fVar42 == 0.0);
        iVar16 = -(uint)(fVar44 == 0.0);
        iVar17 = -(uint)(fVar42 == 0.0);
        iVar18 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar56,(short)(CONCAT15(uVar54,CONCAT14(
                                                  uVar52,fVar42)) >> 0x20))) == 0.0);
        bVar48 = ~(byte)iVar14;
        bVar49 = ~(byte)((uint)iVar14 >> 8);
        bVar50 = ~(byte)((uint)iVar14 >> 0x10);
        bVar51 = ~(byte)((uint)iVar14 >> 0x18);
        bVar53 = ~(byte)iVar16;
        bVar55 = ~(byte)((uint)iVar16 >> 8);
        bVar57 = ~(byte)((uint)iVar16 >> 0x10);
        bVar59 = ~(byte)((uint)iVar16 >> 0x18);
        bVar60 = ~(byte)iVar17;
        bVar61 = ~(byte)((uint)iVar17 >> 8);
        bVar63 = ~(byte)((uint)iVar17 >> 0x10);
        bVar66 = ~(byte)((uint)iVar17 >> 0x18);
        bVar68 = ~(byte)iVar18;
        bVar72 = ~(byte)((uint)iVar18 >> 8);
        bVar76 = ~(byte)((uint)iVar18 >> 0x10);
        bVar80 = ~(byte)((uint)iVar18 >> 0x18);
        fVar44 = auVar92._0_4_ * auVar91._0_4_;
        fVar94 = auVar92._4_4_ * auVar91._4_4_;
        fVar42 = auVar92._8_4_ * auVar91._8_4_;
        fVar98 = auVar92._12_4_ * auVar91._12_4_;
        fVar161 = fVar44 * fVar161;
        fVar104 = fVar94 * fVar104;
        fVar107 = fVar42 * fVar107;
        fVar109 = fVar98 * fVar109;
        fVar105 = fVar44 * ((fVar127 * fVar105 - fVar21 * fVar145) + fVar151 * fVar88) *
                           (float)_DAT_03cac210;
        fVar108 = fVar94 * ((fVar19 * fVar111 - fVar108 * fVar146) + fVar153 * fVar87) * fVar147;
        fVar111 = fVar42 * ((fVar15 * fVar113 - local_100 * fVar148) + fVar156 * fVar95) *
                           (float)_UNK_03cac218;
        fVar113 = fVar98 * ((fVar15 * fVar26 - local_100 * fVar149) + fVar159 * fVar99) * fVar150;
        fVar15 = ((fVar138 * fVar152 - fVar135 * fVar89) + fVar118 * fVar140) * (float)_DAT_03cabc00
                 * fVar44;
        fVar127 = ((fVar139 * fVar154 - fVar137 * fVar93) + fVar119 * fVar142) * fVar162 * fVar94;
        fVar19 = ((fVar158 * fVar157 - fStack_f4 * fVar96) + fVar130 * fVar143) *
                 (float)_UNK_03cabc08 * fVar42;
        fVar21 = ((fVar158 * fVar160 - fStack_f4 * fVar97) + fVar132 * fVar144) * fVar163 * fVar98;
        fVar44 = ((fVar112 * fVar152 - fVar124 * fVar89) + fVar118 * fVar128) * (float)_DAT_03cac210
                 * fVar44;
        fVar94 = ((fVar110 * fVar154 - fVar126 * fVar93) + fVar119 * fVar129) * fVar147 * fVar94;
        fVar42 = ((fVar155 * fVar157 - fStack_f8 * fVar96) + fVar130 * fVar134) *
                 (float)_UNK_03cac218 * fVar42;
        fVar98 = ((fVar155 * fVar160 - fStack_f8 * fVar97) + fVar132 * fVar136) * fVar150 * fVar98;
        do {
          local_d0 = 0;
          uStack_c8 = 0;
          pfVar37 = (float *)FUN_00c5b304(*(undefined8 *)(param_5 + 0x30),&local_d0,0xc0);
          if (pfVar37 == (float *)0x0) {
            return 1;
          }
          *pfVar37 = fVar123;
          pfVar37[1] = fVar122;
          pfVar37[2] = fVar121;
          pfVar37[3] = pfVar40[0xf];
          pfVar37[4] = fVar1;
          pfVar37[5] = fVar3;
          pfVar37[6] = fVar5;
          pfVar37[0x2c] = fVar6;
          pfVar37[0x2d] = fVar2;
          pfVar37[0x2e] = fVar4;
          pfVar37[0x2f] = 0.0;
          *(undefined8 *)(pfVar37 + 10) = uStack_e8;
          *(undefined8 *)(pfVar37 + 8) = local_f0;
          *(ulong *)(pfVar37 + 0xe) = CONCAT44(fStack_f4,fStack_f8);
          *(ulong *)(pfVar37 + 0xc) = CONCAT44(fStack_fc,local_100);
          pfVar37[7] = 0.0;
          pfVar37[0x28] = (float)(int)fVar120;
          *(ulong *)(pfVar37 + 0x12) = CONCAT44(fStack_104,fStack_108);
          *(ulong *)(pfVar37 + 0x10) = CONCAT44(fStack_10c,local_110);
          *(ulong *)(pfVar37 + 0x16) = CONCAT71(uStack_117,uStack_118);
          *(undefined8 *)(pfVar37 + 0x14) = local_120;
          pfVar37[0x29] = fVar7;
          pfVar37[0x2a] = 0.0;
          pfVar37[0x2b] = 0.0;
          *(ulong *)(pfVar37 + 0x1a) =
               CONCAT17((byte)((uint)fVar109 >> 0x18) & bVar80,
                        CONCAT16((byte)((uint)fVar109 >> 0x10) & bVar76,
                                 CONCAT15((byte)((uint)fVar109 >> 8) & bVar72,
                                          CONCAT14(SUB41(fVar109,0) & bVar68,
                                                   CONCAT13((byte)((uint)fVar107 >> 0x18) & bVar66,
                                                            CONCAT12((byte)((uint)fVar107 >> 0x10) &
                                                                     bVar63,CONCAT11((byte)((uint)
                                                  fVar107 >> 8) & bVar61,SUB41(fVar107,0) & bVar60))
                                                  )))));
          *(ulong *)(pfVar37 + 0x18) =
               CONCAT17((byte)((uint)fVar104 >> 0x18) & bVar59,
                        CONCAT16((byte)((uint)fVar104 >> 0x10) & bVar57,
                                 CONCAT15((byte)((uint)fVar104 >> 8) & bVar55,
                                          CONCAT14(SUB41(fVar104,0) & bVar53,
                                                   CONCAT13((byte)((uint)fVar161 >> 0x18) & bVar51,
                                                            CONCAT12((byte)((uint)fVar161 >> 0x10) &
                                                                     bVar50,CONCAT11((byte)((uint)
                                                  fVar161 >> 8) & bVar49,SUB41(fVar161,0) & bVar48))
                                                  )))));
          *(ulong *)(pfVar37 + 0x1e) =
               CONCAT17((byte)((uint)fVar113 >> 0x18) & bVar80,
                        CONCAT16((byte)((uint)fVar113 >> 0x10) & bVar76,
                                 CONCAT15((byte)((uint)fVar113 >> 8) & bVar72,
                                          CONCAT14(SUB41(fVar113,0) & bVar68,
                                                   CONCAT13((byte)((uint)fVar111 >> 0x18) & bVar66,
                                                            CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                                                     bVar63,CONCAT11((byte)((uint)
                                                  fVar111 >> 8) & bVar61,SUB41(fVar111,0) & bVar60))
                                                  )))));
          *(ulong *)(pfVar37 + 0x1c) =
               CONCAT17((byte)((uint)fVar108 >> 0x18) & bVar59,
                        CONCAT16((byte)((uint)fVar108 >> 0x10) & bVar57,
                                 CONCAT15((byte)((uint)fVar108 >> 8) & bVar55,
                                          CONCAT14(SUB41(fVar108,0) & bVar53,
                                                   CONCAT13((byte)((uint)fVar105 >> 0x18) & bVar51,
                                                            CONCAT12((byte)((uint)fVar105 >> 0x10) &
                                                                     bVar50,CONCAT11((byte)((uint)
                                                  fVar105 >> 8) & bVar49,SUB41(fVar105,0) & bVar48))
                                                  )))));
          *(ulong *)(pfVar37 + 0x22) =
               CONCAT17((byte)((uint)fVar21 >> 0x18) & bVar80,
                        CONCAT16((byte)((uint)fVar21 >> 0x10) & bVar76,
                                 CONCAT15((byte)((uint)fVar21 >> 8) & bVar72,
                                          CONCAT14(SUB41(fVar21,0) & bVar68,
                                                   CONCAT13((byte)((uint)fVar19 >> 0x18) & bVar66,
                                                            CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                     bVar63,CONCAT11((byte)((uint)
                                                  fVar19 >> 8) & bVar61,SUB41(fVar19,0) & bVar60))))
                                         )));
          *(ulong *)(pfVar37 + 0x20) =
               CONCAT17((byte)((uint)fVar127 >> 0x18) & bVar59,
                        CONCAT16((byte)((uint)fVar127 >> 0x10) & bVar57,
                                 CONCAT15((byte)((uint)fVar127 >> 8) & bVar55,
                                          CONCAT14(SUB41(fVar127,0) & bVar53,
                                                   CONCAT13((byte)((uint)fVar15 >> 0x18) & bVar51,
                                                            CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                                     bVar50,CONCAT11((byte)((uint)
                                                  fVar15 >> 8) & bVar49,SUB41(fVar15,0) & bVar48))))
                                         )));
          *(ulong *)(pfVar37 + 0x26) =
               CONCAT17((byte)((uint)fVar98 >> 0x18) & bVar80,
                        CONCAT16((byte)((uint)fVar98 >> 0x10) & bVar76,
                                 CONCAT15((byte)((uint)fVar98 >> 8) & bVar72,
                                          CONCAT14(SUB41(fVar98,0) & bVar68,
                                                   CONCAT13((byte)((uint)fVar42 >> 0x18) & bVar66,
                                                            CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                                                     bVar63,CONCAT11((byte)((uint)
                                                  fVar42 >> 8) & bVar61,SUB41(fVar42,0) & bVar60))))
                                         )));
          *(ulong *)(pfVar37 + 0x24) =
               CONCAT17((byte)((uint)fVar94 >> 0x18) & bVar59,
                        CONCAT16((byte)((uint)fVar94 >> 0x10) & bVar57,
                                 CONCAT15((byte)((uint)fVar94 >> 8) & bVar55,
                                          CONCAT14(SUB41(fVar94,0) & bVar53,
                                                   CONCAT13((byte)((uint)fVar44 >> 0x18) & bVar51,
                                                            CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                                                     bVar50,CONCAT11((byte)((uint)
                                                  fVar44 >> 8) & bVar49,SUB41(fVar44,0) & bVar48))))
                                         )));
          iVar14 = *(int *)(lVar38 + 0x148);
          if (*(int *)(lVar38 + 0x144) != -1) {
            FUN_008f1150(param_1,*(int *)(lVar38 + 0x144),0,&local_d0,0xc0);
          }
          if (iVar14 != -1) {
            FUN_008f1150(param_1,iVar14,4,&local_d0,0xc0);
          }
          FUN_008e076c(*(undefined8 *)(param_2 + 0x98),param_1,param_2,lVar38,param_4,param_5);
          fVar122 = fVar122 + pfVar40[1];
          fVar123 = fVar123 + *pfVar40;
          fVar121 = fVar121 + pfVar40[2];
          iVar41 = iVar41 + -1;
        } while (iVar41 != 0);
      }
      return 1;
    }
  }
  FUN_008d43d0(param_2,0x80);
  return 0;
}


