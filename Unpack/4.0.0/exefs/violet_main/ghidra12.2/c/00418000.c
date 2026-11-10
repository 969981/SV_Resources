/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00418000; name: FUN_00418000
 */


undefined8
FUN_00418000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  ulong uVar51;
  long lVar52;
  ulong uVar53;
  long lVar54;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  ulong uVar61;
  long lVar62;
  ulong uVar63;
  undefined1 auStack_308 [216];
  ushort local_230;
  undefined4 local_22e;
  undefined1 local_22a;
  undefined1 local_229;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226;
  undefined2 local_225;
  undefined1 local_223;
  undefined1 local_222;
  undefined1 local_221;
  undefined1 local_220;
  undefined1 local_21f;
  byte local_21e;
  byte local_21d;
  byte local_21c;
  ushort local_21b;
  undefined4 local_219;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213;
  undefined1 local_212;
  undefined1 local_211;
  undefined1 auStack_1f0 [40];
  undefined1 auStack_1c8 [40];
  undefined1 auStack_1a0 [80];
  ushort local_150;
  byte local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  undefined1 local_147;
  undefined2 local_146;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined2 local_141;
  undefined1 local_13f;
  byte local_13e;
  byte local_13d;
  byte local_13c;
  ushort local_13b;
  undefined3 local_139;
  undefined1 local_136;
  undefined1 local_135;
  undefined2 local_134;
  undefined1 local_132;
  undefined1 local_131;
  ushort local_110;
  byte local_10e;
  undefined2 local_10d;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined1 local_100;
  undefined1 local_ff;
  byte local_fe;
  byte local_fd;
  byte local_fc;
  ushort local_fb;
  byte local_f9;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined2 local_f6;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  byte local_f1;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  char local_80 [32];
  
  FUN_00475350(auStack_308);
  FUN_004766e0(auStack_308,param_5,0x20);
  FUN_00475390(&local_110,auStack_308);
  local_110 = local_110 & 0xfff8;
  local_f1 = local_f1 & 0x3f | 0x40;
  FUN_00475350(auStack_308);
  FUN_004766e0(auStack_308,auStack_f0,0x20);
  FUN_004766e0(auStack_308,param_2,param_3);
  FUN_00475390(&local_150,auStack_308);
  FUN_00418eb0(&local_150);
  FUN_00419600(auStack_1f0,&local_150);
  FUN_00420f00(&local_230,auStack_1a0);
  FUN_00421730(auStack_a8,auStack_1f0,&local_230);
  FUN_00421730(auStack_d0,auStack_1c8,&local_230);
  FUN_00421ab0(param_1,auStack_d0);
  FUN_00421ab0(local_80,auStack_a8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_80[0] << 7;
  FUN_00475350(auStack_308);
  FUN_004766e0(auStack_308,param_1,0x20);
  FUN_004766e0(auStack_308,param_4,0x20);
  FUN_004766e0(auStack_308,param_2,param_3);
  FUN_00475390(&local_230,auStack_308);
  FUN_00418eb0(&local_230);
  uVar56 = ((ulong)local_fe & 0xf8 | (ulong)local_fd << 8 | (ulong)local_fc << 0x10) >> 3;
  uVar22 = (ulong)local_230 | ((ulong)(byte)local_22e & 0x1f) << 0x10;
  uVar63 = (ulong)local_21b | ((ulong)(byte)local_219 & 0x1f) << 0x10;
  uVar46 = (ulong)local_110 | ((ulong)local_10e & 0x1f) << 0x10;
  uVar61 = (ulong)local_fb | ((ulong)local_f9 & 0x1f) << 0x10;
  uVar50 = (ulong)(local_22e >> 5) & 0x1fffff;
  uVar59 = (ulong)(uint3)(CONCAT12(local_229,CONCAT11(local_22a,local_22e._3_1_)) >> 2) & 0x1fffff;
  uVar39 = (ulong)(CONCAT13(local_10b,CONCAT21(local_10d,local_10e)) >> 5) & 0x1fffff;
  uVar42 = (ulong)(uint3)(CONCAT12(local_109,CONCAT11(local_10a,local_10b)) >> 2) & 0x1fffff;
  uVar26 = (ulong)(CONCAT13(local_223,CONCAT21(local_225,local_226)) >> 4) & 0x1fffff;
  lVar38 = uVar46 * uVar59 + uVar39 * uVar50 + uVar42 * uVar22 +
           ((ulong)(uint3)(CONCAT12(local_149,CONCAT11(local_14a,local_14b)) >> 2) & 0x1fffff);
  uVar48 = (ulong)(CONCAT13(local_226,CONCAT12(local_227,CONCAT11(local_228,local_229))) >> 7) &
           0x1fffff;
  uVar40 = (ulong)(CONCAT13(local_106,CONCAT12(local_107,CONCAT11(local_108,local_109))) >> 7) &
           0x1fffff;
  uVar29 = (ulong)(CONCAT13(local_103,CONCAT12(local_104,CONCAT11(local_105,local_106))) >> 4) &
           0x1fffff;
  uVar23 = (ulong)(CONCAT13(local_21e,CONCAT12(local_21f,CONCAT11(local_220,local_221))) >> 6) &
           0x1fffff;
  uVar20 = (ulong)(CONCAT13(local_fe,CONCAT12(local_ff,CONCAT11(local_100,local_101))) >> 6) &
           0x1fffff;
  lVar52 = uVar46 * uVar26 + uVar39 * uVar48 + uVar42 * uVar59 + uVar40 * uVar50 + uVar29 * uVar22 +
           ((ulong)(CONCAT13(local_143,CONCAT12(local_144,local_146)) >> 4) & 0x1fffff);
  uVar53 = (ulong)(uint3)(CONCAT12(local_101,CONCAT11(local_102,local_103)) >> 1) & 0x1fffff;
  uVar25 = (ulong)(uint3)(CONCAT12(local_221,CONCAT11(local_222,local_223)) >> 1) & 0x1fffff;
  lVar13 = uVar46 * uVar23 + uVar39 * uVar25 + uVar42 * uVar26 + uVar40 * uVar48 + uVar29 * uVar59 +
           uVar53 * uVar50 + uVar20 * uVar22 +
           ((ulong)(CONCAT13(local_13e,CONCAT12(local_13f,local_141)) >> 6) & 0x1fffff);
  uVar51 = ((ulong)local_21e & 0xf8 | (ulong)local_21d << 8 | (ulong)local_21c << 0x10) >> 3;
  lVar14 = uVar46 * uVar63 + uVar39 * uVar51 + uVar42 * uVar23 + uVar40 * uVar25 + uVar29 * uVar26 +
           uVar53 * uVar48 + uVar20 * uVar59 + uVar56 * uVar50 + uVar61 * uVar22 +
           ((ulong)local_13b | ((ulong)(byte)local_139 & 0x1f) << 0x10);
  uVar33 = (ulong)(uint3)(CONCAT12(local_214,CONCAT11(local_215,local_219._3_1_)) >> 2) & 0x1fffff;
  uVar31 = (ulong)(CONCAT13((undefined1)local_f6,CONCAT12(local_f7,CONCAT11(local_f8,local_f9))) >>
                  5) & 0x1fffff;
  uVar57 = (ulong)(uint3)(CONCAT12(local_f4,local_f6) >> 2) & 0x1fffff;
  uVar47 = (ulong)(local_219 >> 5) & 0x1fffff;
  lVar32 = uVar46 * uVar33 + uVar39 * uVar47 + uVar42 * uVar63 + uVar40 * uVar51 + uVar29 * uVar23 +
           uVar53 * uVar25 + uVar20 * uVar26 + uVar56 * uVar48 + uVar61 * uVar59 + uVar31 * uVar50 +
           uVar57 * uVar22 +
           ((ulong)(uint3)(CONCAT12((undefined1)local_134,CONCAT11(local_135,local_136)) >> 2) &
           0x1fffff);
  lVar34 = ((ulong)local_150 | ((ulong)local_14e & 0x1f) << 0x10) + uVar46 * uVar22;
  uVar1 = lVar34 + 0x100000;
  lVar15 = uVar46 * uVar50 + uVar39 * uVar22 + (uVar1 >> 0x15) +
           ((ulong)(CONCAT13(local_14b,CONCAT12(local_14c,CONCAT11(local_14d,local_14e))) >> 5) &
           0x1fffff);
  uVar2 = lVar14 + 0x100000;
  lVar16 = uVar46 * uVar47 + uVar39 * uVar63 + uVar42 * uVar51 + uVar40 * uVar23 + uVar29 * uVar25 +
           uVar53 * uVar26 + uVar20 * uVar48 + uVar56 * uVar59 + uVar61 * uVar50 + uVar31 * uVar22 +
           ((long)uVar2 >> 0x15) + ((ulong)(CONCAT13(local_136,local_139) >> 5) & 0x1fffff);
  uVar45 = (ulong)(CONCAT13(local_211,CONCAT12(local_212,CONCAT11(local_213,local_214))) >> 7);
  uVar35 = (ulong)(CONCAT13(local_f1,CONCAT12(local_f2,CONCAT11(local_f3,local_f4))) >> 7);
  lVar55 = uVar39 * uVar45 + uVar42 * uVar33 + uVar40 * uVar47 + uVar29 * uVar63 + uVar53 * uVar51 +
           uVar20 * uVar23 + uVar56 * uVar25 + uVar61 * uVar26 + uVar31 * uVar48 + uVar57 * uVar59 +
           uVar35 * uVar50;
  lVar43 = uVar40 * uVar45 + uVar29 * uVar33 + uVar53 * uVar47 + uVar20 * uVar63 + uVar56 * uVar51 +
           uVar61 * uVar23 + uVar31 * uVar25 + uVar57 * uVar26 + uVar35 * uVar48;
  lVar49 = uVar53 * uVar45 + uVar20 * uVar33 + uVar56 * uVar47 + uVar61 * uVar63 + uVar31 * uVar51 +
           uVar57 * uVar23 + uVar35 * uVar25;
  lVar54 = uVar56 * uVar45 + uVar61 * uVar33 + uVar31 * uVar47 + uVar57 * uVar63 + uVar35 * uVar51;
  uVar3 = lVar49 + 0x100000;
  lVar27 = uVar31 * uVar45 + uVar57 * uVar33 + uVar35 * uVar47;
  uVar4 = lVar38 + 0x100000;
  lVar17 = uVar46 * uVar48 + uVar39 * uVar59 + uVar42 * uVar50 + uVar40 * uVar22 +
           ((ulong)(CONCAT13((undefined1)local_146,CONCAT12(local_147,CONCAT11(local_148,local_149))
                            ) >> 7) & 0x1fffff) + (uVar4 >> 0x15);
  lVar18 = uVar20 * uVar45 + uVar56 * uVar33 + uVar61 * uVar47 + uVar31 * uVar63 + uVar57 * uVar51 +
           uVar35 * uVar23 + ((long)uVar3 >> 0x15);
  uVar5 = lVar54 + 0x100000;
  lVar62 = uVar61 * uVar45 + uVar31 * uVar33 + uVar57 * uVar47 + uVar35 * uVar63 +
           ((long)uVar5 >> 0x15);
  uVar6 = lVar27 + 0x100000;
  lVar60 = uVar57 * uVar45 + uVar35 * uVar33 + (uVar6 >> 0x15);
  uVar7 = uVar35 * uVar45 + 0x100000;
  uVar28 = uVar7 >> 0x15;
  uVar8 = lVar15 + 0x100000;
  uVar9 = lVar17 + 0x100000;
  uVar10 = lVar18 + 0x100000;
  lVar54 = (lVar54 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar10 >> 0x15);
  uVar5 = lVar62 + 0x100000;
  lVar27 = (lVar27 - (uVar6 & 0x7fffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar62 = lVar62 - (uVar5 & 0xffffffffffe00000);
  uVar5 = lVar60 + 0x100000;
  lVar30 = (uVar35 * uVar45 - (uVar7 & 0x7fffffffffe00000)) + (uVar5 >> 0x15);
  lVar60 = lVar60 - (uVar5 & 0x7fffffffffe00000);
  uVar5 = lVar43 + 0x100000;
  uVar6 = lVar55 + 0x100000;
  lVar44 = uVar42 * uVar45 + uVar40 * uVar33 + uVar29 * uVar47 + uVar53 * uVar63 + uVar20 * uVar51 +
           uVar56 * uVar23 + uVar61 * uVar25 + uVar31 * uVar26 + uVar57 * uVar48 + uVar35 * uVar59 +
           ((long)uVar6 >> 0x15);
  lVar37 = uVar29 * uVar45 + uVar53 * uVar33 + uVar20 * uVar47 + uVar56 * uVar63 + uVar61 * uVar51 +
           uVar31 * uVar23 + uVar57 * uVar25 + uVar35 * uVar26 + ((long)uVar5 >> 0x15);
  uVar7 = lVar52 + 0x100000;
  lVar19 = uVar46 * uVar25 + uVar39 * uVar26 + uVar42 * uVar48 + uVar40 * uVar59 + uVar29 * uVar50 +
           uVar53 * uVar22 +
           ((ulong)(uint3)(CONCAT12((undefined1)local_141,CONCAT11(local_142,local_143)) >> 1) &
           0x1fffff) + ((long)uVar7 >> 0x15);
  uVar11 = lVar19 + 0x100000;
  uVar12 = lVar13 + 0x100000;
  lVar41 = uVar46 * uVar51 + uVar39 * uVar23 + uVar42 * uVar25 + uVar40 * uVar26 + uVar29 * uVar48 +
           uVar53 * uVar59 + uVar20 * uVar50 + uVar56 * uVar22 +
           (((ulong)local_13e & 0xf8 | (ulong)local_13d << 8 | (ulong)local_13c << 0x10) >> 3) +
           ((long)uVar12 >> 0x15);
  lVar21 = (lVar54 * 0xa2c13 + ((long)uVar11 >> 0x15) + lVar13) - (uVar12 & 0xffffffffffe00000);
  uVar12 = lVar41 + 0x100000;
  lVar58 = (lVar27 * 0xa2c13 + lVar62 * 0x72d18 + lVar54 * 0x9fb67 + lVar14 + ((long)uVar12 >> 0x15)
           ) - (uVar2 & 0xffffffffffe00000);
  uVar2 = lVar32 + 0x100000;
  lVar13 = uVar46 * uVar45 + uVar39 * uVar33 + uVar42 * uVar47 + uVar40 * uVar63 + uVar29 * uVar51 +
           uVar53 * uVar23 + uVar20 * uVar25 + uVar56 * uVar26 + uVar61 * uVar48 + uVar31 * uVar59 +
           uVar57 * uVar50 + uVar35 * uVar22 +
           (ulong)(CONCAT13(local_131,CONCAT12(local_132,local_134)) >> 7) + ((long)uVar2 >> 0x15);
  uVar20 = lVar16 + 0x100000;
  lVar24 = (lVar30 * 0xa2c13 + lVar60 * 0x72d18 + lVar27 * 0x9fb67 + lVar62 * -0xf39ad +
            lVar54 * 0x215d1 + lVar32 + ((long)uVar20 >> 0x15)) - (uVar2 & 0xffffffffffe00000);
  uVar2 = lVar58 + 0x100000;
  uVar22 = lVar13 + 0x100000;
  lVar36 = (lVar60 * 0xa2c13 + lVar27 * 0x72d18 + lVar62 * 0x9fb67 + lVar54 * -0xf39ad + lVar16 +
           ((long)uVar2 >> 0x15)) - (uVar20 & 0xffffffffffe00000);
  lVar14 = ((lVar55 + uVar28 * 0x72d18) - (uVar6 & 0xffffffffffe00000)) + lVar30 * 0x9fb67 +
           lVar60 * -0xf39ad + lVar27 * 0x215d1 + lVar62 * -0xa6f7d + ((long)uVar22 >> 0x15);
  uVar6 = lVar37 + 0x100000;
  uVar20 = lVar44 + 0x100000;
  lVar43 = ((lVar43 + uVar28 * -0xf39ad) - (uVar5 & 0xffffffffffe00000)) + ((long)uVar20 >> 0x15) +
           lVar30 * 0x215d1 + lVar60 * -0xa6f7d;
  uVar5 = lVar14 + 0x100000;
  lVar32 = ((lVar44 + uVar28 * 0x9fb67) - (uVar20 & 0xffffffffffe00000)) + lVar30 * -0xf39ad +
           lVar60 * 0x215d1 + lVar27 * -0xa6f7d + ((long)uVar5 >> 0x15);
  lVar16 = ((lVar49 + uVar28 * -0xa6f7d) - (uVar3 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15);
  uVar3 = lVar43 + 0x100000;
  lVar44 = ((lVar37 + uVar28 * 0x215d1) - (uVar6 & 0xffffffffffe00000)) + lVar30 * -0xa6f7d +
           ((long)uVar3 >> 0x15);
  uVar6 = lVar24 + 0x100000;
  lVar13 = ((uVar28 * 0xa2c13 + lVar30 * 0x72d18 + lVar60 * 0x9fb67 + lVar27 * -0xf39ad +
             lVar62 * 0x215d1 + lVar54 * -0xa6f7d + lVar13) - (uVar22 & 0xffffffffffe00000)) +
           ((long)uVar6 >> 0x15);
  uVar20 = lVar16 + 0x100000;
  lVar18 = (lVar18 - (uVar10 & 0xffffffffffe00000)) + ((long)uVar20 >> 0x15);
  uVar10 = lVar13 + 0x100000;
  lVar14 = (lVar14 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar10 >> 0x15);
  uVar5 = lVar32 + 0x100000;
  lVar60 = (lVar43 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar32 = lVar32 - (uVar5 & 0xffffffffffe00000);
  uVar3 = lVar44 + 0x100000;
  uVar5 = lVar36 + 0x100000;
  lVar16 = (lVar16 - (uVar20 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  lVar44 = lVar44 - (uVar3 & 0xffffffffffe00000);
  lVar27 = (lVar24 + lVar18 * -0xa6f7d + ((long)uVar5 >> 0x15)) - (uVar6 & 0xffffffffffe00000);
  uVar3 = lVar21 + 0x100000;
  lVar62 = ((lVar62 * 0xa2c13 + lVar54 * 0x72d18 + lVar41) - (uVar12 & 0xffffffffffe00000)) +
           ((long)uVar3 >> 0x15);
  uVar6 = lVar62 + 0x100000;
  lVar41 = (lVar18 * -0xf39ad + lVar16 * 0x215d1 + lVar44 * -0xa6f7d + lVar58 +
           ((long)uVar6 >> 0x15)) - (uVar2 & 0xffffffffffe00000);
  lVar24 = (lVar34 - (uVar1 & 0xfffffe00000)) + lVar14 * 0xa2c13;
  uVar1 = lVar24 + 0x100000;
  lVar15 = (lVar15 - (uVar8 & 0xffffffffffe00000)) + lVar14 * 0x72d18 + lVar32 * 0xa2c13 +
           ((long)uVar1 >> 0x15);
  lVar21 = ((lVar18 * 0x72d18 + lVar16 * 0x9fb67 + lVar44 * -0xf39ad + lVar21) -
           (uVar3 & 0xffffffffffe00000)) + lVar60 * 0x215d1 + lVar32 * -0xa6f7d;
  lVar54 = ((lVar38 + (uVar8 >> 0x15)) - (uVar4 & 0xffffffffffe00000)) + lVar14 * 0x9fb67 +
           lVar60 * 0xa2c13 + lVar32 * 0x72d18;
  lVar30 = ((lVar52 + ((long)uVar9 >> 0x15)) - (uVar7 & 0xffffffffffe00000)) + lVar16 * 0xa2c13 +
           lVar44 * 0x72d18 + lVar14 * 0x215d1 + lVar60 * 0x9fb67 + lVar32 * -0xf39ad;
  uVar2 = lVar21 + 0x100000;
  uVar3 = lVar54 + 0x100000;
  lVar38 = ((lVar18 * 0x9fb67 + lVar16 * -0xf39ad + lVar44 * 0x215d1 + lVar62) -
           (uVar6 & 0xffffffffffe00000)) + lVar60 * -0xa6f7d + ((long)uVar2 >> 0x15);
  uVar4 = lVar38 + 0x100000;
  uVar6 = lVar41 + 0x100000;
  lVar37 = (lVar18 * 0x215d1 + lVar16 * -0xa6f7d + lVar36 + ((long)uVar6 >> 0x15)) -
           (uVar5 & 0xffffffffffe00000);
  uVar5 = lVar15 + 0x100000;
  uVar7 = lVar27 + 0x100000;
  uVar8 = lVar37 + 0x100000;
  lVar52 = (lVar13 - (uVar10 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15);
  uVar10 = lVar52 + 0x100000;
  lVar62 = (long)uVar10 >> 0x15;
  lVar13 = (lVar17 - (uVar9 & 0xffffffffffe00000)) + lVar44 * 0xa2c13 + lVar14 * -0xf39ad +
           lVar60 * 0x72d18 + lVar32 * 0x9fb67 + ((long)uVar3 >> 0x15);
  uVar20 = (lVar24 - (uVar1 & 0xffffffffffe00000)) + lVar62 * 0xa2c13;
  uVar1 = lVar13 + 0x100000;
  uVar9 = lVar30 + 0x100000;
  uVar12 = ((lVar15 + lVar62 * 0x72d18) - (uVar5 & 0xffffffffffe00000)) + ((long)uVar20 >> 0x15);
  uVar5 = ((lVar54 + lVar62 * 0x9fb67) - (uVar3 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) +
          ((long)uVar12 >> 0x15);
  lVar14 = ((lVar19 + lVar18 * 0xa2c13 + lVar16 * 0x72d18 + lVar44 * 0x9fb67) -
           (uVar11 & 0xffffffffffe00000)) + lVar14 * -0xa6f7d + lVar60 * -0xf39ad + lVar32 * 0x215d1
           + ((long)uVar9 >> 0x15);
  uVar3 = lVar14 + 0x100000;
  uVar11 = ((lVar13 + lVar62 * -0xf39ad) - (uVar1 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  uVar1 = ((lVar30 + lVar62 * 0x215d1) - (uVar9 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15) +
          ((long)uVar11 >> 0x15);
  uVar9 = ((lVar14 + lVar62 * -0xa6f7d) - (uVar3 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  uVar2 = (lVar21 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15) + ((long)uVar9 >> 0x15);
  uVar3 = (lVar38 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar4 = (lVar41 - (uVar6 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15) + ((long)uVar3 >> 0x15);
  uVar6 = (lVar37 - (uVar8 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar7 = ((lVar27 + ((long)uVar8 >> 0x15)) - (uVar7 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15);
  uVar8 = (lVar52 - (uVar10 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15);
  lVar38 = (long)uVar8 >> 0x15;
  lVar52 = (uVar20 & 0x1fffff) + lVar38 * 0xa2c13;
  uVar10 = (uVar12 & 0x1fffff) + lVar38 * 0x72d18 + (lVar52 >> 0x15);
  *(char *)(param_1 + 0x21) = (char)((ulong)lVar52 >> 8);
  *(char *)(param_1 + 0x20) = (char)lVar52;
  *(byte *)(param_1 + 0x22) =
       (byte)((ulong)lVar52 >> 0x10) & 0x1f | (byte)(((uint)uVar10 & 0x1fffff) << 5);
  uVar5 = (uVar5 & 0x1fffff) + lVar38 * 0x9fb67 + ((long)uVar10 >> 0x15);
  *(char *)(param_1 + 0x23) = (char)(uVar10 >> 3);
  *(char *)(param_1 + 0x24) = (char)(uVar10 >> 0xb);
  *(byte *)(param_1 + 0x25) =
       (byte)((uint)uVar10 >> 0x13) & 3 | (byte)(((uint)uVar5 & 0x1fffff) << 2);
  *(char *)(param_1 + 0x26) = (char)(uVar5 >> 6);
  uVar10 = (uVar11 & 0x1fffff) + lVar38 * -0xf39ad + ((long)uVar5 >> 0x15);
  *(byte *)(param_1 + 0x27) =
       (byte)((uint)uVar5 >> 0xe) & 0x7f | (byte)(((uint)uVar10 & 0x1fffff) << 7);
  uVar1 = (uVar1 & 0x1fffff) + lVar38 * 0x215d1 + ((long)uVar10 >> 0x15);
  uVar5 = (uVar9 & 0x1fffff) + lVar38 * -0xa6f7d + ((long)uVar1 >> 0x15);
  *(char *)(param_1 + 0x28) = (char)(uVar10 >> 1);
  *(char *)(param_1 + 0x29) = (char)(uVar10 >> 9);
  *(char *)(param_1 + 0x2b) = (char)(uVar1 >> 4);
  *(char *)(param_1 + 0x2c) = (char)(uVar1 >> 0xc);
  *(byte *)(param_1 + 0x2d) =
       (byte)((uint)uVar1 >> 0x14) & 1 | (byte)(((uint)uVar5 & 0x1fffff) << 1);
  *(char *)(param_1 + 0x2e) = (char)(uVar5 >> 7);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar5 >> 0x15);
  *(byte *)(param_1 + 0x2f) =
       (byte)((uint)uVar5 >> 0xf) & 0x3f | (byte)(((uint)uVar2 & 0x1fffff) << 6);
  *(char *)(param_1 + 0x30) = (char)(uVar2 >> 2);
  *(char *)(param_1 + 0x31) = (char)(uVar2 >> 10);
  uVar3 = (uVar3 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)(param_1 + 0x32) = (byte)((uint)uVar2 >> 0x12) & 7 | (byte)((int)uVar3 << 3);
  *(char *)(param_1 + 0x33) = (char)(uVar3 >> 5);
  lVar38 = (uVar4 & 0x1fffff) + ((long)uVar3 >> 0x15);
  uVar2 = (uVar6 & 0x1fffff) + (lVar38 >> 0x15);
  *(char *)(param_1 + 0x35) = (char)lVar38;
  *(char *)(param_1 + 0x36) = (char)((ulong)lVar38 >> 8);
  *(byte *)(param_1 + 0x37) =
       (byte)((ulong)lVar38 >> 0x10) & 0x1f | (byte)(((uint)uVar2 & 0x1fffff) << 5);
  *(char *)(param_1 + 0x38) = (char)(uVar2 >> 3);
  uVar4 = (uVar7 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(char *)(param_1 + 0x39) = (char)(uVar2 >> 0xb);
  *(byte *)(param_1 + 0x3a) =
       (byte)((uint)uVar2 >> 0x13) & 3 | (byte)(((uint)uVar4 & 0x1fffff) << 2);
  *(char *)(param_1 + 0x3b) = (char)(uVar4 >> 6);
  uVar2 = (uVar8 & 0x1fffff) + ((long)uVar4 >> 0x15);
  *(byte *)(param_1 + 0x3c) = (byte)((uint)uVar4 >> 0xe) & 0x7f | (byte)((int)uVar2 << 7);
  *(char *)(param_1 + 0x3d) = (char)(uVar2 >> 1);
  *(char *)(param_1 + 0x3e) = (char)(uVar2 >> 9);
  *(byte *)(param_1 + 0x2a) =
       (byte)((uint)uVar10 >> 0x11) & 0xf | (byte)(((uint)uVar1 & 0x1fffff) << 4);
  *(char *)(param_1 + 0x34) = (char)(uVar3 >> 0xd);
  *(char *)(param_1 + 0x3f) = (char)(uVar2 >> 0x11);
  FUN_00453300(auStack_308,0xd8);
  FUN_00453300(&local_150,0x40);
  FUN_00453300(&local_110,0x40);
  return 1;
}


