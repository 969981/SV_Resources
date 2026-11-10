/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b5ef0; name: FUN_002b5ef0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_002b5ef0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  void *__src;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined7 uVar15;
  bool bVar16;
  void *__dest;
  undefined8 *puVar17;
  ulong *puVar18;
  byte *pbVar19;
  size_t sVar20;
  byte *pbVar21;
  undefined4 uVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  byte *pbVar32;
  ulong *puVar33;
  int *piVar34;
  byte bVar35;
  undefined *puVar36;
  ulong *puVar37;
  ulong uVar38;
  byte local_1c0 [16];
  undefined8 local_1b0;
  byte local_1a8 [16];
  undefined8 local_198;
  ulong local_190;
  ulong uStack_188;
  void *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  byte *local_160;
  byte *local_158;
  undefined8 local_150;
  byte *local_148;
  byte *local_140;
  undefined8 local_138;
  ulong *local_130;
  undefined *local_128;
  ushort local_120 [8];
  undefined8 local_110;
  byte local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  ulong *puStack_e8;
  ulong *local_e0;
  ulong *local_d8;
  ulong *local_d0;
  ulong *local_c8;
  byte local_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined4 local_b0;
  uint uStack_ac;
  ulong *local_a0;
  ulong *puStack_98;
  ulong *local_90;
  undefined *local_88;
  ulong *local_80;
  undefined *puStack_78;
  byte *local_70;
  undefined *puStack_68;
  
  FUN_002c01c0();
  puVar14 = PTR_FUN_047cc5f8;
  puVar13 = PTR_LAB_047cba48;
  puVar12 = _UNK_03caa6f8;
  puVar6 = _DAT_03caa6f0;
  local_138 = 0;
  local_148 = (byte *)0x0;
  local_140 = (byte *)0x0;
  local_150 = 0;
  local_160 = (byte *)0x0;
  local_158 = (byte *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  piVar34 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  local_178 = &local_170;
  if (piVar34 != piVar2) {
    pcVar23 = (char *)((ulong)&local_a0 | 1);
    puVar36 = PTR_FUN_047cc7b0;
    do {
      if (*(long *)(piVar34 + 0x18) == *(long *)(piVar34 + 0x1a)) {
        if ((*(ulong *)(piVar34 + 0x12) & 1) == 0) {
          uStack_188 = *(ulong *)(piVar34 + 0x14);
          local_190 = *(ulong *)(piVar34 + 0x12);
          local_180 = *(void **)(piVar34 + 0x16);
        }
        else {
          uVar38 = *(ulong *)(piVar34 + 0x14);
          __src = *(void **)(piVar34 + 0x16);
          if (uVar38 < 0x17) {
            local_190 = CONCAT71(local_190._1_7_,(char)((int)uVar38 << 1));
            __dest = (void *)((ulong)&local_190 | 1);
          }
          else {
            if (0xffffffffffffffef < uVar38) {
                    /* try { // try from 002b7128 to 002b712f has its CatchHandler @ 002b7130 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar28 = uVar38 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar28);
            local_190 = uVar28 | 1;
            uStack_188 = uVar38;
            local_180 = __dest;
          }
          memcpy(__dest,__src,uVar38 + 1);
        }
      }
      else {
                    /* try { // try from 002b5fd0 to 002b5fdb has its CatchHandler @ 002b7308 */
        FUN_002bfd94(&local_190,param_1);
      }
                    /* try { // try from 002b6054 to 002b605f has its CatchHandler @ 002b73dc */
      puVar17 = (undefined8 *)FUN_002a4f14(&local_178,&local_190);
      if (&local_170 == puVar17) {
                    /* try { // try from 002b606c to 002b607b has its CatchHandler @ 002b72a0 */
        FUN_002a4bec(&local_178,&local_190,&local_190);
        if (*(long *)(piVar34 + 0x18) == *(long *)(piVar34 + 0x1a)) {
          local_a0 = &local_190;
          puStack_98 = (ulong *)puVar14;
          local_88 = puVar14;
                    /* try { // try from 002b6164 to 002b617f has its CatchHandler @ 002b7224 */
          local_90 = local_a0;
          FUN_00391b20(local_108,
                       "      \"cds:%s\":{\n        \"childPolicy\":[ {\n          \"cds_experimental\":{\n            \"cluster\": \"%s\"\n          }\n        } ]\n       }"
                       ,0x86,&local_a0,2);
        }
        else {
          local_130 = &local_190;
          local_c0 = 0;
          uStack_bf = 0;
          bStack_b8 = 0;
          uStack_b7 = 0;
          local_b0 = 0;
          uStack_ac = 0;
          local_128 = puVar14;
                    /* try { // try from 002b6098 to 002b60b3 has its CatchHandler @ 002b7268 */
          FUN_00391b20(&local_a0,
                       "      \"weighted:%s\":{\n        \"childPolicy\":[ {\n          \"weighted_target_experimental\":{\n            \"targets\":{\n"
                       ,0x73,&local_130,1);
                    /* try { // try from 002b60b4 to 002b60bf has its CatchHandler @ 002b7254 */
          FUN_002c07b8(&local_c0,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(puVar13,local_90);
          }
          local_d8 = (ulong *)0x0;
          local_d0 = (ulong *)0x0;
          local_c8 = (ulong *)0x0;
          if (*(long *)(piVar34 + 0x1a) - *(long *)(piVar34 + 0x18) != 0) {
            lVar24 = *(long *)(piVar34 + 0x1a) - *(long *)(piVar34 + 0x18) >> 5;
            puVar18 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,lVar24 * 0x18);
            puVar31 = local_d8;
            local_c8 = puVar18 + lVar24 * 3;
            puVar27 = puVar18;
            puVar29 = local_d0;
            if (local_d0 == local_d8) {
              local_d8 = puVar18;
            }
            else {
              do {
                uVar28 = puVar29[-2];
                uVar38 = puVar29[-3];
                puVar27[-1] = puVar29[-1];
                puVar27[-2] = uVar28;
                puVar27[-3] = uVar38;
                puVar29[-3] = 0;
                puVar29[-2] = 0;
                puVar29[-1] = 0;
                puVar29 = puVar29 + -3;
                puVar27 = puVar27 + -3;
              } while (local_d8 != puVar29);
              bVar16 = local_d0 != local_d8;
              local_d8 = puVar27;
              if (bVar16) {
                puVar27 = local_d0;
                local_d0 = puVar18;
                do {
                  puVar29 = puVar27 + -3;
                  if ((*puVar29 & 1) != 0) {
                    FUN_0049e790(puVar13,puVar27[-1]);
                  }
                  puVar27 = puVar29;
                  puVar18 = local_d0;
                } while (puVar31 != puVar29);
              }
            }
            local_d0 = puVar18;
            if (puVar31 != (ulong *)0x0) {
              FUN_0049e790(puVar13,puVar31);
            }
          }
          puVar27 = *(ulong **)(piVar34 + 0x1a);
          for (puVar31 = *(ulong **)(piVar34 + 0x18); puVar31 != puVar27; puVar31 = puVar31 + 4) {
            puStack_98 = (ulong *)puVar14;
            local_90 = (ulong *)(ulong)(uint)puVar31[3];
            puStack_78 = puVar14;
                    /* try { // try from 002b61f8 to 002b620f has its CatchHandler @ 002b7414 */
            local_a0 = puVar31;
            local_88 = puVar36;
            local_80 = puVar31;
            FUN_00391b20(&local_f0,
                         "              \"%s\":{\n                \"weight\":%d,\n                \"childPolicy\":[ {\n                  \"cds_experimental\":{\n                    \"cluster\": \"%s\"\n                  }\n                } ]\n               }"
                         ,0xd7,&local_a0,3);
                    /* try { // try from 002b6210 to 002b621b has its CatchHandler @ 002b741c */
            FUN_002c07b8(&local_d8,&local_f0);
            if (((ulong)local_f0 & 1) != 0) {
              FUN_0049e790(puVar13,local_e0);
            }
          }
                    /* try { // try from 002b6238 to 002b624b has its CatchHandler @ 002b724c */
          FUN_002b3540(&local_a0,local_d8,local_d0,&DAT_03c47105,2);
                    /* try { // try from 002b624c to 002b6257 has its CatchHandler @ 002b7238 */
          FUN_002c07b8(&local_c0,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(puVar13,local_90);
          }
          local_90 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x30);
          uVar9 = s_______03c0f49f._8_8_;
          uVar8 = _DAT_03c0f491;
          uVar7 = _UNK_03c0f489;
          uVar28 = _DAT_03c0f481;
          puStack_98 = (ulong *)puVar12;
          local_a0 = puVar6;
          uVar38 = CONCAT26(s_______03c0f49f._0_2_,_UNK_03c0f499);
          uVar5 = CONCAT62(s_______03c0f49f._2_6_,s_______03c0f49f._0_2_);
          *(undefined1 *)((long)local_90 + 0x2e) = 0;
          local_90[1] = uVar7;
          *local_90 = uVar28;
          local_90[3] = uVar38;
          local_90[2] = uVar8;
          *(undefined8 *)((long)local_90 + 0x26) = uVar9;
          *(undefined8 *)((long)local_90 + 0x1e) = uVar5;
                    /* try { // try from 002b62a4 to 002b62af has its CatchHandler @ 002b7234 */
          FUN_002c07b8(&local_c0,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(puVar13,local_90);
          }
                    /* try { // try from 002b62c8 to 002b62db has its CatchHandler @ 002b722c */
          FUN_002b3540(local_108,CONCAT71(uStack_bf,local_c0),CONCAT71(uStack_b7,bStack_b8),
                       &DAT_03c886bc,0);
          puVar31 = local_d8;
          if (local_d8 != (ulong *)0x0) {
            if (local_d0 != local_d8) {
              puVar27 = local_d0;
              do {
                puVar29 = puVar27 + -3;
                if ((*puVar29 & 1) != 0) {
                  FUN_0049e790(puVar13,puVar27[-1]);
                }
                puVar27 = puVar29;
              } while (puVar31 != puVar29);
            }
            local_d0 = puVar31;
            FUN_0049e790(puVar13,local_d8);
          }
          uVar15 = uStack_bf;
          bVar35 = local_c0;
          pbVar19 = (byte *)CONCAT71(uStack_bf,local_c0);
          if (pbVar19 != (byte *)0x0) {
            if ((byte *)CONCAT71(uStack_b7,bStack_b8) != pbVar19) {
              pbVar21 = (byte *)CONCAT71(uStack_b7,bStack_b8);
              do {
                pbVar32 = pbVar21 + -0x18;
                if ((*pbVar32 & 1) != 0) {
                  FUN_0049e790(puVar13,*(undefined8 *)(pbVar21 + -8));
                }
                pbVar21 = pbVar32;
              } while (pbVar19 != pbVar32);
              pbVar19 = (byte *)CONCAT71(uStack_bf,local_c0);
            }
            bStack_b8 = bVar35;
            uStack_b7 = uVar15;
            FUN_0049e790(puVar13,pbVar19);
          }
        }
                    /* try { // try from 002b638c to 002b6397 has its CatchHandler @ 002b72a8 */
        FUN_002c07b8(&local_148,local_108);
        if ((local_108[0] & 1) != 0) {
          FUN_0049e790(puVar13,local_f8);
        }
      }
      local_a0 = (ulong *)&DAT_03bd926f;
      if (*(long *)(piVar34 + 0x18) != *(long *)(piVar34 + 0x1a)) {
        local_a0 = (ulong *)0x3c9cfad;
      }
      local_90 = &local_190;
      puStack_98 = (ulong *)PTR_LAB_047cc7b8;
      local_88 = puVar14;
                    /* try { // try from 002b63e0 to 002b63fb has its CatchHandler @ 002b73d4 */
      FUN_00391b20(local_1c0,"%s:%s",5,&local_a0,2);
      local_c0 = 0;
      uStack_bf = 0;
      bStack_b8 = 0;
      uStack_b7 = 0;
      local_b0 = 0;
      uStack_ac = 0;
      puVar31 = *(ulong **)(piVar34 + 10);
      puVar27 = *(ulong **)(piVar34 + 0xc);
      if (puVar31 == puVar27) {
        local_d8 = (ulong *)0x0;
        local_d0 = (ulong *)0x0;
        local_c8 = (ulong *)0x0;
        puVar36 = PTR_FUN_047cc7b0;
      }
      else {
        do {
          local_f0 = (ulong *)((ulong)local_f0 & 0xff00000000000000);
          switch((int)puVar31[3]) {
          case 0:
            local_130 = puVar31 + 6;
            local_128 = puVar14;
                    /* try { // try from 002b6488 to 002b64a3 has its CatchHandler @ 002b73e4 */
            FUN_00391b20(&local_a0,"             \"exact_match\": \"%s\"",0x20,&local_130,1);
            break;
          case 1:
            local_130 = (ulong *)puVar31[9];
            local_128 = puVar14;
                    /* try { // try from 002b6574 to 002b658f has its CatchHandler @ 002b73ec */
            FUN_00391b20(&local_a0,"             \"regex_match\": \"%s\"",0x20,&local_130,1);
            break;
          case 2:
            local_a0 = (ulong *)puVar31[4];
            local_90 = (ulong *)puVar31[5];
            local_88 = PTR_FUN_047cc7c0;
            puStack_98 = (ulong *)PTR_FUN_047cc7c0;
                    /* try { // try from 002b64ec to 002b6507 has its CatchHandler @ 002b73f4 */
            FUN_00391b20(&local_d8,
                         "             \"range_match\":{\n              \"start\":%d,\n              \"end\":%d\n             }"
                         ,0x5c,&local_a0,2);
            uVar22 = *(undefined4 *)((long)((ulong)&local_d8 | 1) + 3);
            uVar26 = *(undefined4 *)((ulong)&local_d8 | 1);
            puStack_98 = local_d0;
            local_90 = local_c8;
            local_a0._0_1_ = (byte)local_d8;
            goto LAB_002b65cc;
          case 3:
            local_130 = (ulong *)0x3c00ba2;
            if ((char)puVar31[10] != '\0') {
              local_130 = (ulong *)&DAT_03c38de7;
            }
            local_128 = PTR_LAB_047cc7b8;
                    /* try { // try from 002b654c to 002b6567 has its CatchHandler @ 002b73fc */
            FUN_00391b20(&local_a0,"             \"present_match\": %s",0x20,&local_130,1);
            break;
          case 4:
            local_130 = puVar31 + 6;
            local_128 = puVar14;
                    /* try { // try from 002b64b0 to 002b64cb has its CatchHandler @ 002b7404 */
            FUN_00391b20(&local_a0,"             \"prefix_match\": \"%s\"",0x21,&local_130,1);
            break;
          case 5:
            local_130 = puVar31 + 6;
            local_128 = puVar14;
                    /* try { // try from 002b659c to 002b65b7 has its CatchHandler @ 002b740c */
            FUN_00391b20(&local_a0,"             \"suffix_match\": \"%s\"",0x21,&local_130,1);
            break;
          default:
            puVar29 = (ulong *)0x0;
            puVar18 = (ulong *)0x0;
            bVar35 = 0;
            goto LAB_002b65d4;
          }
          uVar22 = *(undefined4 *)(pcVar23 + 3);
          uVar26 = *(undefined4 *)pcVar23;
LAB_002b65cc:
          local_f0._0_7_ = CONCAT43(uVar22,(int3)uVar26);
          puVar29 = puStack_98;
          puVar18 = local_90;
          bVar35 = (byte)local_a0;
LAB_002b65d4:
          local_a0 = (ulong *)0x0;
          puStack_98 = (ulong *)0x0;
          local_90 = (ulong *)0x0;
          local_128 = puVar14;
                    /* try { // try from 002b65e0 to 002b65fb has its CatchHandler @ 002b74f8 */
          local_130 = puVar31;
          FUN_00391b20(&local_d8,"           { \n             \"name\": \"%s\",\n",0x29,&local_130,1
                      );
                    /* try { // try from 002b65fc to 002b6607 has its CatchHandler @ 002b74f4 */
          FUN_002c07b8(&local_a0,&local_d8);
          if (((ulong)local_d8 & 1) != 0) {
            FUN_0049e790(puVar13,local_c8);
          }
          puVar37 = puStack_98;
          if (puStack_98 == local_90) {
            lVar24 = (long)puStack_98 - (long)local_a0 >> 3;
            uVar38 = lVar24 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar38) {
                    /* try { // try from 002b7108 to 002b7113 has its CatchHandler @ 002b7178 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar25 = (long)local_90 - (long)local_a0 >> 3;
            uVar28 = lVar25 * 0x5555555555555556;
            if (uVar38 <= uVar28) {
              uVar38 = uVar28;
            }
            if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
              uVar38 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar38 == 0) {
              lVar25 = 0;
              puVar37 = (ulong *)(lVar24 * 8);
              if ((bVar35 & 1) == 0) goto LAB_002b66c8;
LAB_002b6768:
              if (puVar29 < (ulong *)0x17) {
                pbVar19 = (byte *)((long)puVar37 + 1);
                *(byte *)puVar37 = (byte)((int)puVar29 << 1);
              }
              else {
                if ((ulong *)0xffffffffffffffef < puVar29) {
                    /* try { // try from 002b7120 to 002b7127 has its CatchHandler @ 002b7138 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                pbVar19 = (byte *)FUN_0049e770(PTR_FUN_047cba38,
                                               (ulong)(puVar29 + 2) & 0xfffffffffffffff0);
                lVar24 = lVar25 + lVar24 * 8;
                *(ulong **)(lVar24 + 8) = puVar29;
                *(byte **)(lVar24 + 0x10) = pbVar19;
                *puVar37 = (ulong)(puVar29 + 2) & 0xfffffffffffffff0 | 1;
              }
              memcpy(pbVar19,puVar18,(size_t)((long)puVar29 + 1));
            }
            else {
              lVar25 = FUN_0049e770(PTR_FUN_047cba38,uVar38 * 0x18);
              puVar37 = (ulong *)(lVar25 + lVar24 * 8);
              if ((bVar35 & 1) != 0) goto LAB_002b6768;
LAB_002b66c8:
              *(byte *)puVar37 = bVar35;
              uVar26 = (undefined4)local_f0;
              *(undefined4 *)((long)puVar37 + 4) = local_f0._3_4_;
              *(undefined4 *)((long)puVar37 + 1) = uVar26;
              lVar24 = lVar25 + lVar24 * 8;
              *(ulong **)(lVar24 + 8) = puVar29;
              *(ulong **)(lVar24 + 0x10) = puVar18;
            }
            puVar33 = local_a0;
            local_90 = (ulong *)(lVar25 + uVar38 * 0x18);
            puVar29 = puVar37 + 3;
            puVar30 = puStack_98;
            if (puStack_98 == local_a0) {
              puStack_98 = local_a0;
            }
            else {
              do {
                uVar28 = puVar30[-2];
                uVar38 = puVar30[-3];
                puVar37[-1] = puVar30[-1];
                puVar37[-2] = uVar28;
                puVar37[-3] = uVar38;
                puVar30[-3] = 0;
                puVar30[-2] = 0;
                puVar30[-1] = 0;
                puVar30 = puVar30 + -3;
                puVar37 = puVar37 + -3;
              } while (local_a0 != puVar30);
            }
            bVar16 = puStack_98 != local_a0;
            local_a0 = puVar37;
            if (bVar16) {
              puVar37 = puStack_98;
              puStack_98 = puVar29;
              do {
                puVar30 = puVar37 + -3;
                if ((*puVar30 & 1) != 0) {
                  FUN_0049e790(puVar13,puVar37[-1]);
                }
                puVar37 = puVar30;
                puVar29 = puStack_98;
              } while (puVar33 != puVar30);
            }
            puStack_98 = puVar29;
            if (puVar33 != (ulong *)0x0) {
              FUN_0049e790(puVar13,puVar33);
            }
          }
          else {
            if ((bVar35 & 1) == 0) {
              *(byte *)puStack_98 = bVar35;
              uVar26 = (undefined4)local_f0;
              *(undefined4 *)((long)puStack_98 + 4) = local_f0._3_4_;
              *(undefined4 *)((long)puStack_98 + 1) = uVar26;
              puStack_98[1] = (ulong)puVar29;
              puStack_98[2] = (ulong)puVar18;
            }
            else {
              if (puVar29 < (ulong *)0x17) {
                pbVar19 = (byte *)((long)puStack_98 + 1);
                *(byte *)puStack_98 = (byte)((int)puVar29 << 1);
              }
              else {
                if ((ulong *)0xffffffffffffffef < puVar29) {
                    /* try { // try from 002b7114 to 002b711f has its CatchHandler @ 002b7160 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                pbVar19 = (byte *)FUN_0049e770(PTR_FUN_047cba38,
                                               (ulong)(puVar29 + 2) & 0xfffffffffffffff0);
                puVar37[1] = (ulong)puVar29;
                puVar37[2] = (ulong)pbVar19;
                *puVar37 = (ulong)(puVar29 + 2) & 0xfffffffffffffff0 | 1;
              }
              memcpy(pbVar19,puVar18,(size_t)((long)puVar29 + 1));
            }
            puStack_98 = puVar37 + 3;
          }
          if (*(char *)((long)puVar31 + 0x51) != '\0') {
                    /* try { // try from 002b687c to 002b6897 has its CatchHandler @ 002b74e0 */
            FUN_00391b20(&local_d8,",\n             \"invert_match\": true",0x23,0,0);
                    /* try { // try from 002b6898 to 002b68a3 has its CatchHandler @ 002b74f0 */
            FUN_002c07b8(&local_a0,&local_d8);
            if (((ulong)local_d8 & 1) != 0) {
              FUN_0049e790(puVar13,local_c8);
            }
          }
                    /* try { // try from 002b68b8 to 002b68d3 has its CatchHandler @ 002b7710 */
          FUN_00391b20(&local_d8,"\n           }",0xd,0,0);
                    /* try { // try from 002b68d4 to 002b68df has its CatchHandler @ 002b751c */
          FUN_002c07b8(&local_a0,&local_d8);
          if (((ulong)local_d8 & 1) != 0) {
            FUN_0049e790(puVar13,local_c8);
          }
                    /* try { // try from 002b68f8 to 002b6907 has its CatchHandler @ 002b750c */
          FUN_002b3540(&local_d8,local_a0,puStack_98,&DAT_03c886bc,0);
                    /* try { // try from 002b6908 to 002b6913 has its CatchHandler @ 002b7508 */
          FUN_002c07b8(&local_c0,&local_d8);
          if (((ulong)local_d8 & 1) != 0) {
            FUN_0049e790(puVar13,local_c8);
          }
          puVar29 = local_a0;
          if (local_a0 != (ulong *)0x0) {
            if (puStack_98 != local_a0) {
              puVar37 = puStack_98;
              do {
                puVar33 = puVar37 + -3;
                if ((*puVar33 & 1) != 0) {
                  FUN_0049e790(puVar13,puVar37[-1]);
                }
                puVar37 = puVar33;
              } while (puVar29 != puVar33);
            }
            puStack_98 = puVar29;
            FUN_0049e790(puVar13,local_a0);
          }
          if ((bVar35 & 1) != 0) {
            FUN_0049e790(puVar13,puVar18);
          }
          puVar36 = PTR_FUN_047cc7b0;
          puVar31 = puVar31 + 0xb;
        } while (puVar31 != puVar27);
        local_c8 = (ulong *)0x0;
        local_d8 = (ulong *)0x0;
        local_d0 = (ulong *)0x0;
        if (CONCAT71(uStack_bf,local_c0) != CONCAT71(uStack_b7,bStack_b8)) {
          local_a0 = (ulong *)CONCAT71(local_a0._1_7_,0x18);
          *(undefined8 *)pcVar23 = s__headers____03c24c50._0_8_;
          pcVar23[8] = '\"';
          pcVar23[9] = ':';
          pcVar23[10] = '[';
          pcVar23[0xb] = '\n';
          puStack_98._0_6_ = (uint6)(uint5)puStack_98;
                    /* try { // try from 002b69ec to 002b69f7 has its CatchHandler @ 002b72c8 */
          FUN_002c07b8(&local_d8,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(puVar13,local_90);
          }
                    /* try { // try from 002b6a10 to 002b6a23 has its CatchHandler @ 002b72c0 */
          FUN_002b3540(&local_a0,CONCAT71(uStack_bf,local_c0),CONCAT71(uStack_b7,bStack_b8),
                       &DAT_03c16438,1);
                    /* try { // try from 002b6a24 to 002b6a2f has its CatchHandler @ 002b72bc */
          FUN_002c07b8(&local_d8,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(puVar13,local_90);
          }
          local_a0 = (ulong *)CONCAT71(local_a0._1_7_,0x1c);
          *(undefined8 *)(pcVar23 + 6) = s____03c4026c._0_8_;
          pcVar23[0] = ' ';
          pcVar23[1] = ' ';
          pcVar23[2] = ' ';
          pcVar23[3] = ' ';
          pcVar23[4] = ' ';
          pcVar23[5] = ' ';
          pcVar23[6] = ' ';
          pcVar23[7] = ' ';
          puStack_98 = (ulong *)((ulong)puStack_98 & 0xffffffffffffff);
                    /* try { // try from 002b6a6c to 002b6a77 has its CatchHandler @ 002b72cc */
          FUN_002c07b8(&local_d8,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(puVar13,local_90);
          }
        }
      }
      local_f0 = (ulong *)0x0;
      puStack_e8 = (ulong *)0x0;
      local_e0 = (ulong *)0x0;
      iVar3 = *piVar34;
      if (iVar3 == 0) {
        local_130 = (ulong *)(piVar34 + 2);
        local_128 = puVar14;
                    /* try { // try from 002b6b04 to 002b6b1f has its CatchHandler @ 002b7270 */
        FUN_00391b20(&local_a0,"\"path\": \"%s\",\n",0xe,&local_130,1);
LAB_002b6b20:
        if (((ulong)local_f0 & 1) != 0) {
          FUN_0049e790(puVar13,local_e0);
        }
        local_e0 = local_90;
        puStack_e8 = puStack_98;
        local_f0 = local_a0;
      }
      else {
        if (iVar3 == 2) {
          local_130 = *(ulong **)(piVar34 + 8);
          local_128 = puVar14;
                    /* try { // try from 002b6adc to 002b6af7 has its CatchHandler @ 002b7280 */
          FUN_00391b20(&local_a0,"\"regex\": \"%s\",\n",0xf,&local_130,1);
          goto LAB_002b6b20;
        }
        if (iVar3 == 1) {
          local_130 = (ulong *)(piVar34 + 2);
          local_128 = puVar14;
                    /* try { // try from 002b6ab4 to 002b6acf has its CatchHandler @ 002b7290 */
          FUN_00391b20(&local_a0,"\"prefix\": \"%s\",\n",0x10,&local_130,1);
          goto LAB_002b6b20;
        }
      }
                    /* try { // try from 002b6b48 to 002b6b5b has its CatchHandler @ 002b7360 */
      FUN_002b3540(local_108,local_d8,local_d0,&DAT_03c886bc,0);
      if ((char)piVar34[0x10] == '\0') {
        local_120[0] = 0;
      }
      else {
        local_130 = (ulong *)(ulong)(uint)piVar34[0x11];
                    /* try { // try from 002b6b6c to 002b6b87 has its CatchHandler @ 002b72e0 */
        local_128 = puVar36;
        FUN_00391b20(local_120,"\"match_fraction\":%d,\n",0x15,&local_130,1);
      }
      local_90 = (ulong *)local_108;
      local_88 = puVar14;
      local_80 = (ulong *)local_120;
      puStack_78 = puVar14;
      local_70 = local_1c0;
      puStack_98 = (ulong *)puVar14;
      puStack_68 = puVar14;
                    /* try { // try from 002b6bac to 002b6bc7 has its CatchHandler @ 002b7310 */
      local_a0 = &local_f0;
      FUN_00391b20(local_1a8,
                   "      { \n           %s           %s           %s           \"action\": \"%s\"\n      }"
                   ,0x51,&local_a0,4);
      if ((local_120[0] & 1) == 0) {
        if ((local_108[0] & 1) != 0) goto LAB_002b6c34;
LAB_002b6bd8:
        if (((ulong)local_f0 & 1) != 0) goto LAB_002b6c48;
LAB_002b6be0:
        if (local_d8 == (ulong *)0x0) goto LAB_002b6c5c;
LAB_002b6be8:
        puVar31 = local_d8;
        if (local_d0 != local_d8) {
          puVar27 = local_d0;
          do {
            puVar29 = puVar27 + -3;
            if ((*puVar29 & 1) != 0) {
              FUN_0049e790(puVar13,puVar27[-1]);
            }
            puVar27 = puVar29;
          } while (puVar31 != puVar29);
        }
        local_d0 = puVar31;
        FUN_0049e790(puVar13,local_d8);
        pbVar19 = (byte *)CONCAT71(uStack_bf,local_c0);
      }
      else {
        FUN_0049e790(puVar13,local_110);
        if ((local_108[0] & 1) == 0) goto LAB_002b6bd8;
LAB_002b6c34:
        FUN_0049e790(puVar13,local_f8);
        if (((ulong)local_f0 & 1) == 0) goto LAB_002b6be0;
LAB_002b6c48:
        FUN_0049e790(puVar13,local_e0);
        if (local_d8 != (ulong *)0x0) goto LAB_002b6be8;
LAB_002b6c5c:
        pbVar19 = (byte *)CONCAT71(uStack_bf,local_c0);
      }
      if (pbVar19 != (byte *)0x0) {
        if ((byte *)CONCAT71(uStack_b7,bStack_b8) == pbVar19) {
          pbVar21 = pbVar19;
        }
        else {
          pbVar21 = (byte *)CONCAT71(uStack_b7,bStack_b8);
          do {
            pbVar32 = pbVar21 + -0x18;
            if ((*pbVar32 & 1) != 0) {
              FUN_0049e790(puVar13,*(undefined8 *)(pbVar21 + -8));
            }
            pbVar21 = pbVar32;
          } while (pbVar19 != pbVar32);
          pbVar21 = (byte *)CONCAT71(uStack_bf,local_c0);
        }
        bStack_b8 = (byte)pbVar19;
        uStack_b7 = (undefined7)((ulong)pbVar19 >> 8);
        FUN_0049e790(puVar13,pbVar21);
      }
                    /* try { // try from 002b6cd8 to 002b6ce3 has its CatchHandler @ 002b734c */
      FUN_002c07b8(&local_160,local_1a8);
      if ((local_1a8[0] & 1) != 0) {
        FUN_0049e790(puVar13,local_198);
      }
      if ((local_1c0[0] & 1) != 0) {
        FUN_0049e790(puVar13,local_1b0);
      }
      if ((local_190 & 1) != 0) {
        FUN_0049e790(puVar13,local_180);
      }
      piVar34 = piVar34 + 0x1e;
    } while (piVar34 != piVar2);
  }
  local_a0 = (ulong *)0x0;
  puStack_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
  pcVar23 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x60);
  uVar9 = s____loadBalancingConfig_______xds_03c3274a._72_8_;
  uVar5 = s____loadBalancingConfig_______xds_03c3274a._64_8_;
  local_b0 = SUB84(pcVar23,0);
  uStack_ac = (uint)((ulong)pcVar23 >> 0x20);
  bStack_b8 = (byte)_UNK_03cabca8;
  uStack_b7 = (undefined7)((ulong)_UNK_03cabca8 >> 8);
  local_c0 = (byte)_DAT_03cabca0;
  uStack_bf = (undefined7)((ulong)_DAT_03cabca0 >> 8);
  pcVar23[0x51] = '\0';
  *(undefined8 *)(pcVar23 + 0x48) = uVar9;
  *(undefined8 *)(pcVar23 + 0x40) = uVar5;
  uVar10 = s____loadBalancingConfig_______xds_03c3274a._56_8_;
  uVar9 = s____loadBalancingConfig_______xds_03c3274a._48_8_;
  uVar5 = s____loadBalancingConfig_______xds_03c3274a._32_8_;
  *(undefined8 *)(pcVar23 + 0x28) = s____loadBalancingConfig_______xds_03c3274a._40_8_;
  *(undefined8 *)(pcVar23 + 0x20) = uVar5;
  *(undefined8 *)(pcVar23 + 0x38) = uVar10;
  *(undefined8 *)(pcVar23 + 0x30) = uVar9;
  uVar11 = s____loadBalancingConfig_______xds_03c3274a._24_8_;
  uVar10 = s____loadBalancingConfig_______xds_03c3274a._16_8_;
  uVar9 = s____loadBalancingConfig_______xds_03c3274a._8_8_;
  uVar5 = s____loadBalancingConfig_______xds_03c3274a._0_8_;
  pcVar23[0x50] = '\n';
  *(undefined8 *)(pcVar23 + 8) = uVar9;
  *(undefined8 *)pcVar23 = uVar5;
  *(undefined8 *)(pcVar23 + 0x18) = uVar11;
  *(undefined8 *)(pcVar23 + 0x10) = uVar10;
                    /* try { // try from 002b6d8c to 002b6d97 has its CatchHandler @ 002b71b8 */
  FUN_002c07b8(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_ac,local_b0));
  }
                    /* try { // try from 002b6db4 to 002b6dc7 has its CatchHandler @ 002b71b0 */
  FUN_002b3540(&local_c0,local_148,local_140,&DAT_03c47105,2);
                    /* try { // try from 002b6dc8 to 002b6dd3 has its CatchHandler @ 002b71ac */
  FUN_002c07b8(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_ac,local_b0));
  }
  puVar17 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar9 = s_utes____03c16747._0_8_;
  uVar5 = _DAT_03c16737;
  local_b0 = SUB84(puVar17,0);
  uStack_ac = (uint)((ulong)puVar17 >> 0x20);
  bStack_b8 = (byte)_UNK_03caaa18;
  uStack_b7 = (undefined7)((ulong)_UNK_03caaa18 >> 8);
  local_c0 = (byte)_DAT_03caaa10;
  uStack_bf = (undefined7)((ulong)_DAT_03caaa10 >> 8);
  puVar17[1] = _UNK_03c1673f;
  *puVar17 = uVar5;
  puVar17[2] = uVar9;
  *(undefined1 *)(puVar17 + 3) = 0;
                    /* try { // try from 002b6e2c to 002b6e37 has its CatchHandler @ 002b71a8 */
  FUN_002c07b8(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_ac,local_b0));
  }
                    /* try { // try from 002b6e54 to 002b6e67 has its CatchHandler @ 002b71a0 */
  FUN_002b3540(&local_c0,local_160,local_158,&DAT_03c47105,2);
                    /* try { // try from 002b6e68 to 002b6e73 has its CatchHandler @ 002b719c */
  FUN_002c07b8(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_ac,local_b0));
  }
  local_c0 = 0x26;
  uStack_b7 = s___________03c24bf0._8_7_;
  local_b0 = CONCAT31(0x7d0a5d,s___________03c24bf0[0xf]);
  uStack_bf = s___________03c24bf0._0_7_;
  bStack_b8 = s___________03c24bf0[7];
  uStack_ac = uStack_ac & 0xffffff00;
                    /* try { // try from 002b6eb4 to 002b6ebf has its CatchHandler @ 002b7198 */
  FUN_002c07b8(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_ac,local_b0));
  }
                    /* try { // try from 002b6edc to 002b6eef has its CatchHandler @ 002b7190 */
  FUN_002b3540(&local_c0,local_a0,puStack_98,&DAT_03c886bc,0);
  local_d8 = (ulong *)0x0;
  if ((local_c0 & 1) == 0) {
    pcVar23 = (char *)((ulong)&local_c0 | 1);
LAB_002b6f10:
    sVar20 = strlen(pcVar23);
  }
  else {
    pcVar23 = (char *)CONCAT44(uStack_ac,local_b0);
    if (pcVar23 != (char *)0x0) goto LAB_002b6f10;
    sVar20 = 0;
  }
                    /* try { // try from 002b6f1c to 002b6f2b has its CatchHandler @ 002b718c */
  FUN_0033621c(&local_f0,pcVar23,sVar20,&local_d8);
  puVar6 = local_f0;
  puVar17 = (undefined8 *)*param_3;
  if (puVar17 != (undefined8 *)0x0) {
    plVar1 = puVar17 + 1;
    do {
      lVar24 = *plVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 + -1 == 0) {
      (**(code **)*puVar17)(puVar17);
      FUN_0049e790(PTR_LAB_047cba48,puVar17);
      *param_3 = puVar6;
      puVar6 = local_d8;
      goto joined_r0x002b6f5c;
    }
  }
  *param_3 = local_f0;
  puVar6 = local_d8;
joined_r0x002b6f5c:
  local_d8 = puVar6;
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_ac,local_b0));
  }
  puVar31 = local_a0;
  puVar12 = PTR_LAB_047cba48;
  if (local_a0 != (ulong *)0x0) {
    if (puStack_98 != local_a0) {
      puVar27 = puStack_98;
      do {
        puVar29 = puVar27 + -3;
        if ((*puVar29 & 1) != 0) {
          FUN_0049e790(puVar12,puVar27[-1]);
        }
        puVar27 = puVar29;
      } while (puVar31 != puVar29);
    }
    puStack_98 = puVar31;
    FUN_0049e790(PTR_LAB_047cba48,local_a0);
  }
  FUN_002a515c(&local_178,local_170);
  pbVar19 = local_160;
  puVar12 = PTR_LAB_047cba48;
  if (local_160 != (byte *)0x0) {
    if (local_158 != local_160) {
      pbVar21 = local_158;
      do {
        pbVar32 = pbVar21 + -0x18;
        if ((*pbVar32 & 1) != 0) {
          FUN_0049e790(puVar12,*(undefined8 *)(pbVar21 + -8));
        }
        pbVar21 = pbVar32;
      } while (pbVar19 != pbVar32);
    }
    local_158 = pbVar19;
    FUN_0049e790(PTR_LAB_047cba48,local_160);
  }
  pbVar19 = local_148;
  puVar12 = PTR_LAB_047cba48;
  if (local_148 != (byte *)0x0) {
    if (local_140 != local_148) {
      pbVar21 = local_140;
      do {
        pbVar32 = pbVar21 + -0x18;
        if ((*pbVar32 & 1) != 0) {
          FUN_0049e790(puVar12,*(undefined8 *)(pbVar21 + -8));
        }
        pbVar21 = pbVar32;
      } while (pbVar19 != pbVar32);
    }
    local_140 = pbVar19;
    FUN_0049e790(PTR_LAB_047cba48,local_148);
  }
  return puVar6;
}


