/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002add50; name: FUN_002add50
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe70 */
/* WARNING: Removing unreachable block (ram,0x002adf0c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte *** FUN_002add50(char param_1,long param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [8];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  char *pcVar17;
  byte *******pppppppbVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  byte *******pppppppbVar22;
  byte ******ppppppbVar23;
  byte *******pppppppbVar24;
  byte *pbVar25;
  void *__dest;
  byte ***pppbVar26;
  char *pcVar27;
  uint uVar28;
  ulong *puVar29;
  byte ****ppppbVar30;
  byte ***pppbVar31;
  long lVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  byte *******pppppppbVar36;
  int *piVar37;
  long lVar38;
  undefined4 *puVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  ushort uVar46;
  ushort uVar45;
  void *pvVar47;
  undefined8 *puVar48;
  uint uVar49;
  ulong uVar50;
  long lVar51;
  byte *pbVar52;
  ulong uVar53;
  ulong uVar54;
  byte *pbVar55;
  ulong uVar56;
  byte *pbVar57;
  byte bVar58;
  byte ***pppbVar59;
  byte ***unaff_x24;
  byte *pbVar60;
  uint uVar61;
  byte *******pppppppbVar62;
  byte ***pppbVar63;
  ulong uVar64;
  byte *******pppppppbVar65;
  char *pcVar66;
  byte *unaff_x28;
  undefined8 uVar67;
  byte ******ppppppbVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  byte ***local_290;
  byte *****local_238;
  byte *******local_228;
  byte ******local_220;
  byte ******local_210;
  byte *******local_208;
  byte ******local_1e8;
  char *local_1d8;
  byte *******local_1d0;
  byte *******pppppppbStack_1c8;
  byte *******local_1c0;
  long lStack_1b8;
  byte *******local_1b0;
  byte *******pppppppbStack_1a8;
  byte *******pppppppbStack_1a0;
  ulong uStack_198;
  byte *******local_190;
  byte *******pppppppbStack_188;
  byte *******local_180;
  byte *pbStack_178;
  byte *local_170;
  byte *local_168;
  undefined1 local_160 [8];
  byte *******pppppppbStack_158;
  byte ******local_150;
  undefined1 local_140 [8];
  byte *******pppppppbStack_138;
  byte *******local_130;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  byte local_110;
  undefined6 uStack_10f;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined8 local_100;
  char *pcStack_f8;
  byte *local_f0;
  undefined8 local_e0;
  ulong local_d8;
  void *local_d0;
  char *pcStack_c8;
  byte *local_c0;
  undefined8 local_b0;
  byte *******pppppppbStack_a8;
  byte *******local_a0;
  byte *******local_98;
  byte *******local_90;
  byte local_78;
  undefined6 uStack_77;
  undefined1 uStack_71;
  undefined7 local_70;
  undefined1 uStack_69;
  byte *local_68;
  
  if ((param_1 != '\0') && (iVar21 = FUN_0038c970(0), iVar21 != 0)) {
    local_128 = (byte *)0x0;
    local_120 = (byte *)0x0;
    local_118 = (byte *)0x0;
    if (*(ulong *)(param_2 + 0x10) != 0) {
      local_e0 = *(char **)(param_2 + 8);
      local_b0 = (byte *******)&DAT_03c751d8;
      pppppppbStack_a8 = (byte *******)0x3;
      local_1d8 = "name";
      local_1d0 = (byte *******)0x4;
      local_110 = 0xd6;
      uStack_10f = 0x3c246;
      uStack_109 = 0;
      uStack_108 = 1;
      uStack_101 = 0;
                    /* try { // try from 002afac8 to 002afadf has its CatchHandler @ 002b0958 */
      local_d8 = *(ulong *)(param_2 + 0x10);
      FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002afae0 to 002afaeb has its CatchHandler @ 002b0954 */
      FUN_002acaf4(&local_128,&local_78);
      if ((local_78 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_68);
      }
    }
    puVar16 = PTR_LAB_047cba48;
    uVar14 = _UNK_03cab268;
    uVar13 = _DAT_03cab260;
    uVar12 = _UNK_03cab088;
    uVar11 = _DAT_03cab080;
    uVar69 = _UNK_03caa7a8;
    uVar44 = _DAT_03caa7a0;
    puVar29 = *(ulong **)(param_2 + 0x28);
    if ((puVar29 != (ulong *)0x0) && (uVar35 = puVar29[1], uVar35 != 0)) {
      uVar50 = *puVar29;
      pcVar66 = (char *)((ulong)&local_1d8 | 1);
      uVar6 = CONCAT17(s_virtual_hosts___03c24b33[7],s_virtual_hosts___03c24b33._0_7_);
      uVar7 = CONCAT71(s_virtual_hosts___03c24b33._8_7_,s_virtual_hosts___03c24b33[7]);
      uVar56 = 0;
      do {
        lVar51 = *(long *)((uVar50 & 0xfffffffffffffff8) + uVar56 * 8);
        local_1d8 = (char *)CONCAT71(local_1d8._1_7_,0x1e);
        *(undefined8 *)(pcVar66 + 7) = uVar7;
        *(undefined8 *)pcVar66 = uVar6;
        pppppppbStack_1c8 = (byte *******)((ulong)pppppppbStack_1c8 & 0xffffffffffffff00);
                    /* try { // try from 002afbc8 to 002afbd3 has its CatchHandler @ 002b0978 */
        FUN_002a61a4(&local_128,&local_1d8);
        if (((ulong)local_1d8 & 1) != 0) {
          FUN_0049e790(puVar16,pppppppbStack_1c8);
        }
        if (*(ulong *)(lVar51 + 0x18) != 0) {
          local_e0 = *(char **)(lVar51 + 0x10);
          local_1d8 = "  name";
          local_1d0 = (byte *******)0x6;
          local_b0 = (byte *******)&DAT_03c751d8;
          pppppppbStack_a8 = (byte *******)0x3;
          local_110 = 0xd6;
          uStack_10f = 0x3c246;
          uStack_109 = 0;
          uStack_108 = 1;
          uStack_101 = 0;
                    /* try { // try from 002afc20 to 002afc37 has its CatchHandler @ 002b096c */
          local_d8 = *(ulong *)(lVar51 + 0x18);
          FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002afc38 to 002afc43 has its CatchHandler @ 002b0970 */
          FUN_002acaf4(&local_128,&local_78);
          if ((local_78 & 1) != 0) {
            FUN_0049e790(puVar16,local_68);
          }
        }
        puVar29 = *(ulong **)(lVar51 + 0x48);
        if ((puVar29 != (ulong *)0x0) && (uVar53 = puVar29[1], uVar53 != 0)) {
          puVar29 = (ulong *)((*puVar29 & 0xfffffffffffffff8) + 8);
          do {
            if (*puVar29 != 0) {
              local_1d8 = "  domains";
              local_1d0 = (byte *******)&DAT_00000009;
              local_b0 = (byte *******)&DAT_03c751d8;
              pppppppbStack_a8 = (byte *******)0x3;
              local_e0 = (char *)puVar29[-1];
              local_110 = 0xd6;
              uStack_10f = 0x3c246;
              uStack_109 = 0;
              uStack_108 = 1;
              uStack_101 = 0;
                    /* try { // try from 002afcb8 to 002afccf has its CatchHandler @ 002b09f8 */
              local_d8 = *puVar29;
              FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002afcd0 to 002afcdb has its CatchHandler @ 002b09fc */
              FUN_002acaf4(&local_128,&local_78);
              if ((local_78 & 1) != 0) {
                FUN_0049e790(puVar16,local_68);
              }
            }
            uVar53 = uVar53 - 1;
            puVar29 = puVar29 + 2;
          } while (uVar53 != 0);
        }
        puVar29 = *(ulong **)(lVar51 + 0x50);
        if ((puVar29 != (ulong *)0x0) && (uVar53 = puVar29[1], uVar53 != 0)) {
          uVar34 = *puVar29;
          uVar64 = 0;
          do {
            puVar29 = *(ulong **)((uVar34 & 0xfffffffffffffff8) + uVar64 * 8);
            local_1d8 = (char *)CONCAT71(local_1d8._1_7_,0x12);
            *(undefined8 *)pcVar66 = s_route___03c2b9e5._0_8_;
            pcVar66[8] = '{';
            local_1d0._0_3_ = (uint3)(ushort)local_1d0;
                    /* try { // try from 002afd58 to 002afd63 has its CatchHandler @ 002b0a10 */
            FUN_002a61a4(&local_128,&local_1d8);
            if (((ulong)local_1d8 & 1) != 0) {
              FUN_0049e790(puVar16,pppppppbStack_1c8);
            }
            if (puVar29[1] != 0) {
              local_e0 = (char *)*puVar29;
              local_1d8 = "    name";
              local_1d0 = (byte *******)&DAT_00000008;
              local_b0 = (byte *******)&DAT_03c751d8;
              pppppppbStack_a8 = (byte *******)0x3;
              local_110 = 0xd6;
              uStack_10f = 0x3c246;
              uStack_109 = 0;
              uStack_108 = 1;
              uStack_101 = 0;
                    /* try { // try from 002afdb0 to 002afdc7 has its CatchHandler @ 002b09ec */
              local_d8 = puVar29[1];
              FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002afdc8 to 002afdd3 has its CatchHandler @ 002b09f0 */
              FUN_002acaf4(&local_128,&local_78);
              if ((local_78 & 1) != 0) {
                FUN_0049e790(puVar16,local_68);
              }
            }
            uVar54 = puVar29[2];
            if (uVar54 != 0) {
                    /* try { // try from 002afdf0 to 002afdff has its CatchHandler @ 002b0a34 */
              FUN_002ad0e8(&local_128,"    match {");
              pbVar25 = local_120;
              puVar15 = PTR_FUN_047cba38;
              switch(*(undefined4 *)(uVar54 + 0x40)) {
              case 1:
                local_e0 = *(char **)(uVar54 + 0x30);
                local_d8 = *(ulong *)(uVar54 + 0x38);
                local_1d8 = "      prefix";
                local_1d0 = (byte *******)&DAT_0000000c;
                local_b0 = (byte *******)&DAT_03c751d8;
                pppppppbStack_a8 = (byte *******)0x3;
                local_110 = 0xd6;
                uStack_10f = 0x3c246;
                uStack_109 = 0;
                uStack_108 = 1;
                uStack_101 = 0;
                    /* try { // try from 002afe58 to 002afe6f has its CatchHandler @ 002b0984 */
                FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002afe70 to 002afe7b has its CatchHandler @ 002b0980 */
                FUN_002acaf4(&local_128,&local_78);
                break;
              case 2:
                local_e0 = *(char **)(uVar54 + 0x30);
                local_d8 = *(ulong *)(uVar54 + 0x38);
                local_1d8 = "      path";
                local_1d0 = (byte *******)&DAT_0000000a;
                local_b0 = (byte *******)&DAT_03c751d8;
                pppppppbStack_a8 = (byte *******)0x3;
                local_110 = 0xd6;
                uStack_10f = 0x3c246;
                uStack_109 = 0;
                uStack_108 = 1;
                uStack_101 = 0;
                    /* try { // try from 002aff08 to 002aff1f has its CatchHandler @ 002b0990 */
                FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002aff20 to 002aff2b has its CatchHandler @ 002b0994 */
                FUN_002acaf4(&local_128,&local_78);
                break;
              case 3:
                local_e0 = *(char **)(uVar54 + 0x30);
                local_d8 = *(ulong *)(uVar54 + 0x38);
                local_1d8 = "      regex";
                local_1d0 = (byte *******)0xb;
                local_b0 = (byte *******)&DAT_03c751d8;
                pppppppbStack_a8 = (byte *******)0x3;
                local_110 = 0xd6;
                uStack_10f = 0x3c246;
                uStack_109 = 0;
                uStack_108 = 1;
                uStack_101 = 0;
                    /* try { // try from 002afeb0 to 002afec7 has its CatchHandler @ 002b0988 */
                FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002afec8 to 002afed3 has its CatchHandler @ 002b098c */
                FUN_002acaf4(&local_128,&local_78);
                break;
              default:
                    /* try { // try from 002aff9c to 002affab has its CatchHandler @ 002b0a34 */
                FUN_002b0cb4(&local_128,"      <unknown path matching type>");
                goto LAB_002affac;
              case 10:
                if (local_120 < local_118) {
                  pcVar27 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
                  *(undefined8 *)(pbVar25 + 8) = uVar12;
                  *(undefined8 *)pbVar25 = uVar11;
                  uVar10 = s_safe_regex__<not_printed>_03c40162._23_8_;
                  uVar9 = s_safe_regex__<not_printed>_03c40162._0_8_;
                  uVar67 = CONCAT17(s_safe_regex__<not_printed>_03c40162[0xf],
                                    s_safe_regex__<not_printed>_03c40162._8_7_);
                  uVar70 = CONCAT71(s_safe_regex__<not_printed>_03c40162._16_7_,
                                    s_safe_regex__<not_printed>_03c40162[0xf]);
                  local_120 = pbVar25 + 0x18;
                  *(char **)(pbVar25 + 0x10) = pcVar27;
                  *(undefined8 *)(pcVar27 + 0x17) = uVar10;
                  *(undefined8 *)(pcVar27 + 0xf) = uVar70;
                  *(undefined8 *)(pcVar27 + 8) = uVar67;
                  *(undefined8 *)pcVar27 = uVar9;
                  pcVar27[0x1f] = '\0';
                  goto LAB_002affac;
                }
                lVar51 = (long)local_120 - (long)local_128 >> 3;
                uVar40 = lVar51 * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar40) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar38 = (long)local_118 - (long)local_128 >> 3;
                uVar41 = lVar38 * 0x5555555555555556;
                if (uVar40 <= uVar41) {
                  uVar40 = uVar41;
                }
                if (0x555555555555554 < (ulong)(lVar38 * -0x5555555555555555)) {
                  uVar40 = 0xaaaaaaaaaaaaaaa;
                }
                if (uVar40 == 0) {
                  lVar38 = 0;
                }
                else {
                  lVar38 = FUN_0049e770(PTR_FUN_047cba38,uVar40 * 0x18);
                }
                unaff_x28 = (byte *)(lVar38 + lVar51 * 8);
                pbVar60 = (byte *)(lVar38 + uVar40 * 0x18);
                pcVar27 = (char *)FUN_0049e770(puVar15,0x20);
                pbVar52 = local_128;
                *(undefined8 *)(unaff_x28 + 8) = uVar12;
                *(undefined8 *)unaff_x28 = uVar11;
                uVar10 = s_safe_regex__<not_printed>_03c40162._23_8_;
                uVar9 = s_safe_regex__<not_printed>_03c40162._0_8_;
                uVar67 = CONCAT17(s_safe_regex__<not_printed>_03c40162[0xf],
                                  s_safe_regex__<not_printed>_03c40162._8_7_);
                uVar70 = CONCAT71(s_safe_regex__<not_printed>_03c40162._16_7_,
                                  s_safe_regex__<not_printed>_03c40162[0xf]);
                *(char **)(unaff_x28 + 0x10) = pcVar27;
                *(undefined8 *)(pcVar27 + 0x17) = uVar10;
                *(undefined8 *)(pcVar27 + 0xf) = uVar70;
                pcVar27[0x1f] = '\0';
                *(undefined8 *)(pcVar27 + 8) = uVar67;
                *(undefined8 *)pcVar27 = uVar9;
                pbVar25 = unaff_x28 + 0x18;
                pbVar57 = local_120;
                if (local_120 == local_128) {
                  local_120 = local_128;
                }
                else {
                  do {
                    uVar70 = *(undefined8 *)(pbVar57 + -0x10);
                    uVar67 = *(undefined8 *)(pbVar57 + -0x18);
                    *(undefined8 *)(unaff_x28 + -8) = *(undefined8 *)(pbVar57 + -8);
                    *(undefined8 *)(unaff_x28 + -0x10) = uVar70;
                    *(undefined8 *)(unaff_x28 + -0x18) = uVar67;
                    pbVar57[-0x18] = 0;
                    pbVar57[-0x17] = 0;
                    pbVar57[-0x16] = 0;
                    pbVar57[-0x15] = 0;
                    pbVar57[-0x14] = 0;
                    pbVar57[-0x13] = 0;
                    pbVar57[-0x12] = 0;
                    pbVar57[-0x11] = 0;
                    pbVar57[-0x10] = 0;
                    pbVar57[-0xf] = 0;
                    pbVar57[-0xe] = 0;
                    pbVar57[-0xd] = 0;
                    pbVar57[-0xc] = 0;
                    pbVar57[-0xb] = 0;
                    pbVar57[-10] = 0;
                    pbVar57[-9] = 0;
                    pbVar57[-8] = 0;
                    pbVar57[-7] = 0;
                    pbVar57[-6] = 0;
                    pbVar57[-5] = 0;
                    pbVar57[-4] = 0;
                    pbVar57[-3] = 0;
                    pbVar57[-2] = 0;
                    pbVar57[-1] = 0;
                    pbVar57 = pbVar57 + -0x18;
                    unaff_x28 = unaff_x28 + -0x18;
                  } while (local_128 != pbVar57);
                }
                bVar19 = local_120 != local_128;
                local_128 = unaff_x28;
                local_118 = pbVar60;
                if (bVar19) {
                  pbVar57 = local_120;
                  local_120 = pbVar25;
                  do {
                    pbVar60 = pbVar57 + -0x18;
                    if ((*pbVar60 & 1) != 0) {
                      FUN_0049e790(puVar16,*(undefined8 *)(pbVar57 + -8));
                    }
                    pbVar57 = pbVar60;
                    pbVar25 = local_120;
                  } while (pbVar52 != pbVar60);
                }
                local_120 = pbVar25;
                if (pbVar52 == (byte *)0x0) goto LAB_002affac;
                goto LAB_002aff3c;
              }
              if ((local_78 & 1) != 0) {
                pbVar52 = local_68;
LAB_002aff3c:
                FUN_0049e790(puVar16,pbVar52);
              }
LAB_002affac:
              if ((*(long *)(uVar54 + 0x20) != 0) &&
                 (lVar51 = *(long *)(*(long *)(uVar54 + 0x20) + 8), lVar51 != 0)) {
                local_1d8 = "      headers: <";
                local_1d0 = (byte *******)&DAT_00000010;
                    /* try { // try from 002affcc to 002affd3 has its CatchHandler @ 002b09ac */
                lVar51 = FUN_00394c40(lVar51,&local_a0);
                pppppppbStack_a8 = (byte *******)(lVar51 - (long)&local_a0);
                local_e0 = " element(s)>";
                local_d8 = 0xc;
                    /* try { // try from 002affec to 002affff has its CatchHandler @ 002b09b0 */
                local_b0 = (byte *******)&local_a0;
                FUN_00395a70(&local_110,&local_1d8,&local_b0,&local_e0);
                    /* try { // try from 002b0000 to 002b000b has its CatchHandler @ 002b0998 */
                FUN_002acaf4(&local_128,&local_110);
                if ((local_110 & 1) != 0) {
                  FUN_0049e790(puVar16,local_100);
                }
              }
                    /* try { // try from 002b0020 to 002b0027 has its CatchHandler @ 002b09f4 */
              FUN_002ad3ac(&local_128);
            }
            pbVar25 = local_120;
            puVar15 = PTR_FUN_047cba38;
            switch((int)puVar29[0xe]) {
            case 2:
              uVar54 = puVar29[0xd];
                    /* try { // try from 002b0054 to 002b0063 has its CatchHandler @ 002b09c0 */
              FUN_002ad0e8(&local_128,"    route {");
              pbVar25 = local_120;
              puVar15 = PTR_FUN_047cba38;
              iVar21 = *(int *)(uVar54 + 0xc0);
              if (iVar21 == 3) {
                lVar51 = *(long *)(uVar54 + 0xb0);
                if (local_120 < local_118) {
                  pcVar27 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
                  *(undefined8 *)(pbVar25 + 8) = uVar69;
                  *(undefined8 *)pbVar25 = uVar44;
                  uVar10 = s_weighted_clusters___03c7b776._17_8_;
                  uVar9 = s_weighted_clusters___03c7b776._0_8_;
                  uVar67 = CONCAT71(s_weighted_clusters___03c7b776._9_7_,
                                    s_weighted_clusters___03c7b776[8]);
                  uVar70 = CONCAT17(s_weighted_clusters___03c7b776[0x10],
                                    s_weighted_clusters___03c7b776._9_7_);
                  local_120 = pbVar25 + 0x18;
                  *(char **)(pbVar25 + 0x10) = pcVar27;
                  *(undefined8 *)(pcVar27 + 0x11) = uVar10;
                  *(undefined8 *)(pcVar27 + 9) = uVar70;
                  *(undefined8 *)(pcVar27 + 8) = uVar67;
                  *(undefined8 *)pcVar27 = uVar9;
                  pcVar27[0x19] = '\0';
                }
                else {
                  lVar38 = (long)local_120 - (long)local_128 >> 3;
                  unaff_x28 = (byte *)(lVar38 * -0x5555555555555555 + 1);
                  if ((byte *)0xaaaaaaaaaaaaaaa < unaff_x28) {
                    /* try { // try from 002b0894 to 002b089b has its CatchHandler @ 002b089c */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar32 = (long)local_118 - (long)local_128 >> 3;
                  pbVar25 = (byte *)(lVar32 * 0x5555555555555556);
                  if (unaff_x28 <= pbVar25) {
                    unaff_x28 = pbVar25;
                  }
                  if (0x555555555555554 < (ulong)(lVar32 * -0x5555555555555555)) {
                    unaff_x28 = (byte *)0xaaaaaaaaaaaaaaa;
                  }
                  if (unaff_x28 == (byte *)0x0) {
                    lVar32 = 0;
                  }
                  else {
                    lVar32 = FUN_0049e770(PTR_FUN_047cba38,(long)unaff_x28 * 0x18);
                  }
                  pbVar55 = (byte *)(lVar32 + lVar38 * 8);
                  pbVar60 = (byte *)(lVar32 + (long)unaff_x28 * 0x18);
                  pcVar27 = (char *)FUN_0049e770(puVar15,0x20);
                  pbVar52 = local_128;
                  *(undefined8 *)(pbVar55 + 8) = uVar69;
                  *(undefined8 *)pbVar55 = uVar44;
                  uVar10 = s_weighted_clusters___03c7b776._17_8_;
                  uVar9 = s_weighted_clusters___03c7b776._0_8_;
                  uVar67 = CONCAT71(s_weighted_clusters___03c7b776._9_7_,
                                    s_weighted_clusters___03c7b776[8]);
                  uVar70 = CONCAT17(s_weighted_clusters___03c7b776[0x10],
                                    s_weighted_clusters___03c7b776._9_7_);
                  *(char **)(pbVar55 + 0x10) = pcVar27;
                  *(undefined8 *)(pcVar27 + 0x11) = uVar10;
                  *(undefined8 *)(pcVar27 + 9) = uVar70;
                  pcVar27[0x19] = '\0';
                  *(undefined8 *)(pcVar27 + 8) = uVar67;
                  *(undefined8 *)pcVar27 = uVar9;
                  pbVar25 = pbVar55 + 0x18;
                  pbVar57 = local_120;
                  if (local_120 == local_128) {
                    local_120 = local_128;
                  }
                  else {
                    do {
                      uVar70 = *(undefined8 *)(pbVar57 + -0x10);
                      uVar67 = *(undefined8 *)(pbVar57 + -0x18);
                      *(undefined8 *)(pbVar55 + -8) = *(undefined8 *)(pbVar57 + -8);
                      *(undefined8 *)(pbVar55 + -0x10) = uVar70;
                      *(undefined8 *)(pbVar55 + -0x18) = uVar67;
                      pbVar57[-0x18] = 0;
                      pbVar57[-0x17] = 0;
                      pbVar57[-0x16] = 0;
                      pbVar57[-0x15] = 0;
                      pbVar57[-0x14] = 0;
                      pbVar57[-0x13] = 0;
                      pbVar57[-0x12] = 0;
                      pbVar57[-0x11] = 0;
                      pbVar57[-0x10] = 0;
                      pbVar57[-0xf] = 0;
                      pbVar57[-0xe] = 0;
                      pbVar57[-0xd] = 0;
                      pbVar57[-0xc] = 0;
                      pbVar57[-0xb] = 0;
                      pbVar57[-10] = 0;
                      pbVar57[-9] = 0;
                      pbVar57[-8] = 0;
                      pbVar57[-7] = 0;
                      pbVar57[-6] = 0;
                      pbVar57[-5] = 0;
                      pbVar57[-4] = 0;
                      pbVar57[-3] = 0;
                      pbVar57[-2] = 0;
                      pbVar57[-1] = 0;
                      pbVar57 = pbVar57 + -0x18;
                      pbVar55 = pbVar55 + -0x18;
                    } while (local_128 != pbVar57);
                  }
                  bVar19 = local_120 != local_128;
                  local_128 = pbVar55;
                  local_118 = pbVar60;
                  if (bVar19) {
                    pbVar57 = local_120;
                    local_120 = pbVar25;
                    do {
                      pbVar60 = pbVar57 + -0x18;
                      if ((*pbVar60 & 1) != 0) {
                        FUN_0049e790(puVar16,*(undefined8 *)(pbVar57 + -8));
                      }
                      pbVar57 = pbVar60;
                      pbVar25 = local_120;
                    } while (pbVar52 != pbVar60);
                  }
                  local_120 = pbVar25;
                  if (pbVar52 != (byte *)0x0) {
                    FUN_0049e790(puVar16,pbVar52);
                  }
                }
                puVar29 = *(ulong **)(lVar51 + 0x18);
                if ((puVar29 != (ulong *)0x0) && (uVar54 = puVar29[1], uVar54 != 0)) {
                  puVar48 = (undefined8 *)(*puVar29 & 0xfffffffffffffff8);
                  do {
                    puVar29 = (ulong *)*puVar48;
                    /* try { // try from 002b063c to 002b064b has its CatchHandler @ 002b0aa0 */
                    FUN_002b0f78(&local_128,"        clusters {");
                    if (puVar29[1] != 0) {
                      local_e0 = (char *)*puVar29;
                      local_1d8 = "          name";
                      local_1d0 = (byte *******)0xe;
                      local_b0 = (byte *******)&DAT_03c751d8;
                      pppppppbStack_a8 = (byte *******)0x3;
                      local_110 = 0xd6;
                      uStack_10f = 0x3c246;
                      uStack_109 = 0;
                      uStack_108 = 1;
                      uStack_101 = 0;
                    /* try { // try from 002b068c to 002b06a3 has its CatchHandler @ 002b09bc */
                      local_d8 = puVar29[1];
                      FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002b06a4 to 002b06af has its CatchHandler @ 002b09b8 */
                      FUN_002acaf4(&local_128,&local_78);
                      if ((local_78 & 1) != 0) {
                        FUN_0049e790(puVar16,local_68);
                      }
                    }
                    /* try { // try from 002b06c8 to 002b06df has its CatchHandler @ 002b0aa0 */
                    FUN_002b1240("          weight",puVar29[2],&local_128);
                    FUN_002b1314(&local_128);
                    uVar54 = uVar54 - 1;
                    puVar48 = puVar48 + 1;
                  } while (uVar54 != 0);
                }
                    /* try { // try from 002b06f0 to 002b070f has its CatchHandler @ 002b097c */
                FUN_002b1240("        total_weight",*(undefined8 *)(lVar51 + 0x10),&local_128);
                FUN_002b14b0(&local_128);
              }
              else if (iVar21 == 2) {
                if (*(ulong *)(uVar54 + 0xb8) != 0) {
                  local_e0 = *(char **)(uVar54 + 0xb0);
                  local_1d8 = "      cluster_header";
                  local_1d0 = (byte *******)&DAT_00000014;
                  local_b0 = (byte *******)&DAT_03c751d8;
                  pppppppbStack_a8 = (byte *******)0x3;
                  local_110 = 0xd6;
                  uStack_10f = 0x3c246;
                  uStack_109 = 0;
                  uStack_108 = 1;
                  uStack_101 = 0;
                    /* try { // try from 002b0274 to 002b028b has its CatchHandler @ 002b0968 */
                  local_d8 = *(ulong *)(uVar54 + 0xb8);
                  FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002b028c to 002b0297 has its CatchHandler @ 002b0964 */
                  FUN_002acaf4(&local_128,&local_78);
                  goto LAB_002b0298;
                }
              }
              else if ((iVar21 == 1) && (*(ulong *)(uVar54 + 0xb8) != 0)) {
                local_e0 = *(char **)(uVar54 + 0xb0);
                local_1d8 = "      cluster";
                local_1d0 = (byte *******)0xd;
                local_b0 = (byte *******)&DAT_03c751d8;
                pppppppbStack_a8 = (byte *******)0x3;
                local_110 = 0xd6;
                uStack_10f = 0x3c246;
                uStack_109 = 0;
                uStack_108 = 1;
                uStack_101 = 0;
                    /* try { // try from 002b00b8 to 002b00cf has its CatchHandler @ 002b0960 */
                local_d8 = *(ulong *)(uVar54 + 0xb8);
                FUN_00395b50(&local_78,&local_1d8,&local_b0,&local_e0,&local_110);
                    /* try { // try from 002b00d0 to 002b00db has its CatchHandler @ 002b095c */
                FUN_002acaf4(&local_128,&local_78);
LAB_002b0298:
                if ((local_78 & 1) != 0) {
                  FUN_0049e790(puVar16,local_68);
                }
              }
                    /* try { // try from 002b0710 to 002b0717 has its CatchHandler @ 002b09c0 */
              FUN_002ad3ac(&local_128);
              break;
            case 3:
              FUN_002b165c(&local_128,"    redirect: <not printed>");
              break;
            case 7:
                    /* try { // try from 002b00e0 to 002b0103 has its CatchHandler @ 002b0a34 */
              FUN_002b0cb4(&local_128,"    direct_response: <not printed>");
              break;
            case 0x11:
              if (local_120 < local_118) {
                pcVar27 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
                *(undefined8 *)(pbVar25 + 8) = uVar14;
                *(undefined8 *)pbVar25 = uVar13;
                uVar10 = s_filter_action__<not_printed>_03c1dc60._24_8_;
                uVar9 = s_filter_action__<not_printed>_03c1dc60._16_8_;
                uVar70 = s_filter_action__<not_printed>_03c1dc60._8_8_;
                uVar67 = s_filter_action__<not_printed>_03c1dc60._0_8_;
                local_120 = pbVar25 + 0x18;
                *(char **)(pbVar25 + 0x10) = pcVar27;
                pcVar27[0x20] = '\0';
                *(undefined8 *)(pcVar27 + 8) = uVar70;
                *(undefined8 *)pcVar27 = uVar67;
                *(undefined8 *)(pcVar27 + 0x18) = uVar10;
                *(undefined8 *)(pcVar27 + 0x10) = uVar9;
              }
              else {
                lVar51 = (long)local_120 - (long)local_128 >> 3;
                uVar54 = lVar51 * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar54) {
                    /* try { // try from 002b0884 to 002b0893 has its CatchHandler @ 002b08a0 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar38 = (long)local_118 - (long)local_128 >> 3;
                uVar40 = lVar38 * 0x5555555555555556;
                if (uVar54 <= uVar40) {
                  uVar54 = uVar40;
                }
                if (0x555555555555554 < (ulong)(lVar38 * -0x5555555555555555)) {
                  uVar54 = 0xaaaaaaaaaaaaaaa;
                }
                if (uVar54 == 0) {
                  lVar38 = 0;
                }
                else {
                  lVar38 = FUN_0049e770(PTR_FUN_047cba38,uVar54 * 0x18);
                }
                pbVar55 = (byte *)(lVar38 + lVar51 * 8);
                pbVar60 = (byte *)(lVar38 + uVar54 * 0x18);
                pcVar27 = (char *)FUN_0049e770(puVar15,0x30);
                pbVar52 = local_128;
                *(undefined8 *)(pbVar55 + 8) = uVar14;
                *(undefined8 *)pbVar55 = uVar13;
                uVar10 = s_filter_action__<not_printed>_03c1dc60._24_8_;
                uVar9 = s_filter_action__<not_printed>_03c1dc60._16_8_;
                uVar70 = s_filter_action__<not_printed>_03c1dc60._8_8_;
                uVar67 = s_filter_action__<not_printed>_03c1dc60._0_8_;
                *(char **)(pbVar55 + 0x10) = pcVar27;
                pcVar27[0x20] = '\0';
                pbVar25 = pbVar55 + 0x18;
                *(undefined8 *)(pcVar27 + 8) = uVar70;
                *(undefined8 *)pcVar27 = uVar67;
                *(undefined8 *)(pcVar27 + 0x18) = uVar10;
                *(undefined8 *)(pcVar27 + 0x10) = uVar9;
                pbVar57 = local_120;
                if (local_120 == local_128) {
                  local_120 = local_128;
                }
                else {
                  do {
                    uVar70 = *(undefined8 *)(pbVar57 + -0x10);
                    uVar67 = *(undefined8 *)(pbVar57 + -0x18);
                    *(undefined8 *)(pbVar55 + -8) = *(undefined8 *)(pbVar57 + -8);
                    *(undefined8 *)(pbVar55 + -0x10) = uVar70;
                    *(undefined8 *)(pbVar55 + -0x18) = uVar67;
                    pbVar57[-0x18] = 0;
                    pbVar57[-0x17] = 0;
                    pbVar57[-0x16] = 0;
                    pbVar57[-0x15] = 0;
                    pbVar57[-0x14] = 0;
                    pbVar57[-0x13] = 0;
                    pbVar57[-0x12] = 0;
                    pbVar57[-0x11] = 0;
                    pbVar57[-0x10] = 0;
                    pbVar57[-0xf] = 0;
                    pbVar57[-0xe] = 0;
                    pbVar57[-0xd] = 0;
                    pbVar57[-0xc] = 0;
                    pbVar57[-0xb] = 0;
                    pbVar57[-10] = 0;
                    pbVar57[-9] = 0;
                    pbVar57[-8] = 0;
                    pbVar57[-7] = 0;
                    pbVar57[-6] = 0;
                    pbVar57[-5] = 0;
                    pbVar57[-4] = 0;
                    pbVar57[-3] = 0;
                    pbVar57[-2] = 0;
                    pbVar57[-1] = 0;
                    pbVar57 = pbVar57 + -0x18;
                    pbVar55 = pbVar55 + -0x18;
                  } while (local_128 != pbVar57);
                }
                bVar19 = local_120 != local_128;
                local_128 = pbVar55;
                local_118 = pbVar60;
                if (bVar19) {
                  pbVar57 = local_120;
                  local_120 = pbVar25;
                  do {
                    pbVar60 = pbVar57 + -0x18;
                    if ((*pbVar60 & 1) != 0) {
                      FUN_0049e790(puVar16,*(undefined8 *)(pbVar57 + -8));
                    }
                    pbVar57 = pbVar60;
                    pbVar25 = local_120;
                  } while (pbVar52 != pbVar60);
                }
                local_120 = pbVar25;
                if (pbVar52 != (byte *)0x0) {
                  FUN_0049e790(puVar16,pbVar52);
                }
              }
            }
            pcVar27 = local_1d8;
            local_1d8 = (char *)CONCAT71(local_1d8._1_7_,6);
            pcVar17 = local_1d8;
            pcVar66[2] = '}';
            pcVar66[0] = ' ';
            pcVar66[1] = ' ';
            local_1d8._5_3_ = SUB83(pcVar27,5);
            local_1d8._0_4_ = (uint)pcVar17;
            local_1d8._0_5_ = (uint5)(uint)local_1d8;
                    /* try { // try from 002b0734 to 002b073f has its CatchHandler @ 002b0a14 */
            FUN_002a61a4(&local_128,&local_1d8);
            if (((ulong)local_1d8 & 1) != 0) {
              FUN_0049e790(puVar16,pppppppbStack_1c8);
            }
            uVar64 = uVar64 + 1;
          } while (uVar64 != uVar53);
        }
        local_1d8 = (char *)CONCAT53(local_1d8._3_5_,0x7d02);
                    /* try { // try from 002b0764 to 002b076f has its CatchHandler @ 002b0974 */
        FUN_002a61a4(&local_128,&local_1d8);
        if (((ulong)local_1d8 & 1) != 0) {
          FUN_0049e790(puVar16,pppppppbStack_1c8);
        }
        uVar56 = uVar56 + 1;
      } while (uVar56 != uVar35);
    }
    pbVar25 = local_128;
    puVar16 = PTR_LAB_047cba48;
    unaff_x24 = (byte ***)&DAT_03c751d8;
    if (local_128 != (byte *)0x0) {
      if (local_120 != local_128) {
        pbVar52 = local_120;
        do {
          pbVar57 = pbVar52 + -0x18;
          if ((*pbVar57 & 1) != 0) {
            FUN_0049e790(puVar16,*(undefined8 *)(pbVar52 + -8));
          }
          pbVar52 = pbVar57;
        } while (pbVar25 != pbVar57);
      }
      local_120 = pbVar25;
      FUN_0049e790(PTR_LAB_047cba48,local_128);
    }
  }
  puVar29 = *(ulong **)(param_2 + 0x28);
  if ((puVar29 != (ulong *)0x0) && (uVar35 = puVar29[1], uVar35 != 0)) {
    pppppppbVar36 = (byte *******)((ulong)&local_b0 | 1);
    local_208 = (byte *******)((ulong)local_140 | 1);
    local_220 = (byte ******)(*puVar29 & 0xfffffffffffffff8);
    uVar56 = 0;
    local_228 = (byte *******)0x0;
    local_210 = (byte ******)((ulong)local_160 | 1);
    local_238 = (byte *****)0x0;
    uVar61 = 4;
    do {
      ppppbVar30 = local_220[uVar56][9];
      if ((ppppbVar30 != (byte ****)0x0) && (pppbVar63 = ppppbVar30[1], pppbVar63 != (byte ***)0x0))
      {
        pppbVar31 = *ppppbVar30;
        pppbVar59 = (byte ***)0x0;
        do {
          puVar48 = (undefined8 *)(((ulong)pppbVar31 & 0xfffffffffffffff8) + (long)pppbVar59 * 0x10)
          ;
          pppppppbVar65 = (byte *******)puVar48[1];
          if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar47 = (void *)*puVar48;
          if (pppppppbVar65 < (byte *******)0x17) {
            local_b0 = (byte *******)CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
            pppppppbVar62 = pppppppbVar36;
            if (pppppppbVar65 != (byte *******)0x0) goto LAB_002ade80;
            *(byte *)pppppppbVar36 = 0;
            uVar50 = 0;
LAB_002ade44:
            if ((uint)uVar50 < 2) goto LAB_002adfb8;
            pppppppbVar65 = (byte *******)(uVar50 >> 1);
            pppppppbVar62 = pppppppbVar36;
LAB_002adea8:
            pvVar47 = memchr(pppppppbVar62,0x2a,(size_t)pppppppbVar65);
            pppppppbVar24 = local_a0;
            pppppppbVar65 = pppppppbStack_a8;
            uVar28 = 0;
            if (pvVar47 == (void *)0x0) {
              iVar21 = 5;
              bVar19 = uVar61 == 0;
LAB_002adf3c:
              if (bVar19) {
                pppppppbVar62 = (byte *******)(uVar50 >> 1);
                if ((uVar50 & 1) != 0) {
                  pppppppbVar62 = pppppppbStack_a8;
                }
                if (pppppppbVar62 <= local_228) goto LAB_002ae218;
              }
              if ((uVar50 & 1) == 0) {
                pppppppbStack_138 = pppppppbStack_a8;
                local_140 = (undefined1  [8])local_b0;
                local_130 = local_a0;
                if ((*param_3 & 1) != 0) goto LAB_002ae04c;
LAB_002adf7c:
                pppppppbStack_158 = (byte *******)param_3[1];
                local_160 = (undefined1  [8])*param_3;
                local_150 = (byte ******)param_3[2];
              }
              else {
                if (pppppppbStack_a8 < (byte *******)0x17) {
                  local_140[0] = (char)((int)pppppppbStack_a8 << 1);
                  pppppppbVar22 = local_208;
                }
                else {
                  if ((byte *******)0xffffffffffffffef < pppppppbStack_a8) {
                    /* try { // try from 002b080c to 002b0813 has its CatchHandler @ 002b094c */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  pppppppbVar62 = pppppppbStack_a8 + 2;
                  pppppppbVar22 =
                       (byte *******)
                       FUN_0049e770(PTR_FUN_047cba38,(ulong)pppppppbVar62 & 0xfffffffffffffff0);
                  local_140 = (undefined1  [8])((ulong)pppppppbVar62 & 0xfffffffffffffff0 | 1);
                  pppppppbStack_138 = pppppppbVar65;
                  local_130 = pppppppbVar22;
                }
                memcpy(pppppppbVar22,pppppppbVar24,(size_t)((long)pppppppbVar65 + 1));
                if ((*param_3 & 1) == 0) goto LAB_002adf7c;
LAB_002ae04c:
                pppppppbVar65 = (byte *******)param_3[1];
                pvVar47 = (void *)param_3[2];
                if (pppppppbVar65 < (byte *******)0x17) {
                  local_160[0] = (char)((int)pppppppbVar65 << 1);
                  ppppppbVar23 = local_210;
                }
                else {
                  if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b0814 to 002b081b has its CatchHandler @ 002b092c */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  ppppppbVar23 = (byte ******)
                                 FUN_0049e770(PTR_FUN_047cba38,
                                              (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                  local_160 = (undefined1  [8])((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1)
                  ;
                  pppppppbStack_158 = pppppppbVar65;
                  local_150 = ppppppbVar23;
                }
                memcpy(ppppppbVar23,pvVar47,(size_t)((long)pppppppbVar65 + 1));
              }
              pppppppbVar65 = (byte *******)((long)local_130 + (long)pppppppbStack_138);
              if (((ulong)(byte)local_140[0] & 1) == 0) {
                pppppppbVar65 = (byte *******)(local_140 + ((ulong)local_140 >> 1 & 0x7f) + 1);
                pppppppbVar62 = local_208;
              }
              else {
                pppppppbVar62 = local_130;
              }
              for (; pppppppbVar62 != pppppppbVar65;
                  pppppppbVar62 = (byte *******)((long)pppppppbVar62 + 1)) {
                iVar20 = tolower((uint)*(byte *)pppppppbVar62);
                *(byte *)pppppppbVar62 = (byte)iVar20;
              }
              ppppppbVar23 = (byte ******)((long)local_150 + (long)pppppppbStack_158);
              auVar8 = local_160;
              pppppppbVar65 = pppppppbStack_158;
              if (((ulong)local_160 & 1) == 0) {
                ppppppbVar23 = (byte ******)(local_160 + ((ulong)local_160 >> 1 & 0x7f) + 1);
                ppppppbVar68 = local_210;
              }
              else {
                ppppppbVar68 = local_150;
              }
              while( true ) {
                local_160 = auVar8;
                pppppppbStack_158 = pppppppbVar65;
                if (ppppppbVar68 == ppppppbVar23) break;
                iVar20 = tolower((uint)*(byte *)ppppppbVar68);
                *(byte *)ppppppbVar68 = (byte)iVar20;
                ppppppbVar68 = (byte ******)((long)ppppppbVar68 + 1);
                auVar8 = local_160;
                pppppppbVar65 = pppppppbStack_158;
              }
              local_160[0] = SUB81(auVar8,0);
              ppppppbVar23 = local_210;
              switch(uVar28) {
              case 0:
                pppppppbVar62 = (byte *******)(ulong)(local_140[0] >> 1);
                pppppppbVar22 = pppppppbVar62;
                if (((ulong)local_140 & 1) != 0) {
                  pppppppbVar22 = pppppppbStack_138;
                }
                uVar49 = local_160[0] & 1;
                pppppppbVar24 = (byte *******)(ulong)(local_160[0] >> 1);
                if (((ulong)auVar8 & 1) != 0) {
                  pppppppbVar24 = pppppppbVar65;
                }
                if (pppppppbVar22 == pppppppbVar24) {
                  pppppppbVar24 = local_208;
                  if (((ulong)local_140 & 1) != 0) {
                    pppppppbVar24 = local_130;
                  }
                  if (((ulong)auVar8 & 1) != 0) {
                    ppppppbVar23 = local_150;
                  }
                  if (((ulong)local_140 & 1) == 0) {
                    pppppppbVar65 = local_208;
                    if (pppppppbVar22 != (byte *******)0x0) {
                      do {
                        if (*(byte *)pppppppbVar65 != *(byte *)ppppppbVar23) goto LAB_002ae3ac;
                        pppppppbVar62 = (byte *******)((long)pppppppbVar62 + -1);
                        pppppppbVar65 = (byte *******)((long)pppppppbVar65 + 1);
                        ppppppbVar23 = (byte ******)((long)ppppppbVar23 + 1);
                        bVar19 = true;
                      } while (pppppppbVar62 != (byte *******)0x0);
                      goto joined_r0x002ae304;
                    }
                  }
                  else if (pppppppbVar22 != (byte *******)0x0) goto LAB_002ae384;
LAB_002ae310:
                  bVar19 = true;
                }
                else {
LAB_002ae3ac:
                  bVar19 = false;
                }
                break;
              case 1:
                uVar49 = local_160[0] & 1;
                bVar5 = local_160[0] >> 1;
                pppppppbVar62 = (byte *******)(ulong)bVar5;
                if (((ulong)auVar8 & 1) != 0) {
                  pppppppbVar62 = pppppppbVar65;
                }
                if (((ulong)local_140 & 1) == 0) {
                  pppppppbVar24 = local_208;
                  if ((byte *******)(ulong)(local_140[0] >> 1) <= pppppppbVar62) goto LAB_002ae324;
                }
                else if (pppppppbStack_138 <= pppppppbVar62) {
                  pppppppbVar24 = local_130;
LAB_002ae324:
                  pppppppbVar24 = (byte *******)((long)pppppppbVar24 + 1);
                  unaff_x28 = (byte *)(ulong)uVar49;
                  pppppppbVar22 = (byte *******)strlen((char *)pppppppbVar24);
                  if (((ulong)auVar8 & 1) == 0) {
                    ppppppbVar23 = (byte ******)
                                   (&stack0x00000000 + (long)(ulong)bVar5 +
                                   (-0x15f - (long)pppppppbVar22));
LAB_002ae360:
                    pppppppbVar65 = (byte *******)strlen((char *)ppppppbVar23);
                    if (pppppppbVar22 != pppppppbVar65) goto LAB_002ae3ac;
                  }
                  else {
                    ppppppbVar23 = (byte ******)
                                   ((byte *)((long)local_150 + (long)pppppppbVar65) +
                                   -(long)pppppppbVar22);
                    if (local_150 != (byte ******)0x0) goto LAB_002ae360;
                    if (pppppppbVar22 != (byte *******)0x0) goto LAB_002ae3ac;
                  }
                  if (pppppppbVar22 == (byte *******)0x0) goto joined_r0x002ae28c;
                  goto LAB_002ae384;
                }
                bVar19 = false;
joined_r0x002ae304:
                if (((ulong)auVar8 & 1) == 0) goto LAB_002ae1cc;
                goto LAB_002ae1bc;
              case 2:
                uVar49 = local_160[0] & 1;
                pppppppbVar62 = (byte *******)(ulong)(local_160[0] >> 1);
                if (((ulong)auVar8 & 1) != 0) {
                  pppppppbVar62 = pppppppbVar65;
                }
                pppppppbVar22 = pppppppbStack_138;
                pppppppbVar24 = local_130;
                if (((ulong)local_140 & 1) == 0) {
                  pppppppbVar22 = (byte *******)(ulong)(local_140[0] >> 1);
                  pppppppbVar24 = local_208;
                }
                if (pppppppbVar62 < pppppppbVar22) goto LAB_002ae3ac;
                pppppppbVar22 = (byte *******)((long)pppppppbVar22 + -1);
                if (pppppppbVar22 == (byte *******)0x0) goto LAB_002ae310;
                if (((ulong)auVar8 & 1) != 0) {
                  ppppppbVar23 = local_150;
                }
LAB_002ae384:
                iVar20 = memcmp(pppppppbVar24,ppppppbVar23,(size_t)pppppppbVar22);
                bVar19 = iVar20 == 0;
                break;
              case 3:
joined_r0x002ae28c:
                bVar19 = true;
                if (((ulong)auVar8 & 1) != 0) goto LAB_002ae1bc;
                goto LAB_002ae1cc;
              }
              if (uVar49 != 0) {
LAB_002ae1bc:
                FUN_0049e790(PTR_LAB_047cba48,local_150);
              }
LAB_002ae1cc:
              if (((ulong)(byte)local_140[0] & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_130);
              }
              if (bVar19) {
                local_238 = local_220[uVar56];
                local_228 = (byte *******)((ulong)local_b0 >> 1 & 0x7f);
                if (((ulong)local_b0 & 1) != 0) {
                  local_228 = pppppppbStack_a8;
                }
                uVar61 = uVar28;
                goto LAB_002ae21c;
              }
            }
            else {
              iVar21 = 5;
              if ((long)pvVar47 - (long)pppppppbVar62 == -1) {
LAB_002adf30:
                bVar19 = uVar28 == uVar61;
                if (uVar28 <= uVar61) goto LAB_002adf3c;
              }
              else {
                if ((uVar50 & 1) == 0) {
                  uVar28 = 3;
                  if (local_b0._1_1_ != '*' || ((uint)uVar50 & 0xfe) != 2) {
                    uVar28 = 1;
                  }
                  if (local_b0._1_1_ == '*') goto LAB_002adf2c;
                  pppppppbVar62 = (byte *******)(uVar50 >> 1);
                  pppppppbVar22 = pppppppbVar36;
                }
                else {
                  uVar28 = 3;
                  if (pppppppbStack_a8 != (byte *******)0x1) {
                    uVar28 = 1;
                  }
                  pppppppbVar62 = pppppppbStack_a8;
                  pppppppbVar22 = local_a0;
                  if (*(byte *)local_a0 == 0x2a) {
LAB_002adf2c:
                    iVar21 = 0;
                    goto LAB_002adf30;
                  }
                }
                if (((byte *)((long)pppppppbVar62 + (long)pppppppbVar22))[-1] != 0x2a)
                goto LAB_002adfb8;
                iVar21 = 0;
                uVar28 = 2;
                bVar19 = uVar61 == 2;
                if (1 < uVar61) goto LAB_002adf3c;
              }
            }
LAB_002ae218:
            iVar21 = 7;
          }
          else {
            pppppppbVar62 =
                 (byte *******)
                 FUN_0049e770(PTR_FUN_047cba38,(ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
            local_b0 = (byte *******)((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1);
            pppppppbStack_a8 = pppppppbVar65;
            local_a0 = pppppppbVar62;
LAB_002ade80:
            memcpy(pppppppbVar62,pvVar47,(size_t)pppppppbVar65);
            *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
            uVar50 = (ulong)local_b0 & 0xff;
            if (((ulong)local_b0 & 1) == 0) goto LAB_002ade44;
            if (pppppppbStack_a8 != (byte *******)0x0) {
              pppppppbVar65 = pppppppbStack_a8;
              pppppppbVar62 = local_a0;
              goto LAB_002adea8;
            }
LAB_002adfb8:
                    /* try { // try from 002adfb8 to 002adfe3 has its CatchHandler @ 002b0ba4 */
            FUN_003673f0(&local_1d8,"Invalid domain pattern.");
            unaff_x24 = (byte ***)
                        FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                     ,0x50a,&local_1d8,0,0);
            iVar21 = 1;
          }
LAB_002ae21c:
          if (((ulong)local_b0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_a0);
          }
          if ((iVar21 != 7) && (iVar21 != 0)) {
            if (iVar21 != 5) goto LAB_002ae3dc;
            break;
          }
          pppbVar59 = (byte ***)((long)pppbVar59 + 1);
        } while (pppbVar59 != pppbVar63);
      }
      iVar21 = (uint)(uVar61 == 0) << 1;
LAB_002ae3dc:
      if (iVar21 != 0) {
        if (iVar21 != 2) {
          return unaff_x24;
        }
        break;
      }
      uVar56 = uVar56 + 1;
    } while (uVar56 != uVar35);
    if (local_238 != (byte *****)0x0) {
      ppppbVar30 = local_238[10];
      if ((ppppbVar30 == (byte ****)0x0) || (pppbVar63 = ppppbVar30[1], pppbVar63 == (byte ***)0x0))
      {
        FUN_003673f0(&local_1d8,"No route found in the virtual host.");
        uVar44 = 0x526;
      }
      else {
        pppbVar31 = *ppppbVar30;
        pppppppbVar36 = (byte *******)((ulong)&local_b0 | 1);
        pppbVar59 = (byte ***)0x0;
        do {
          lVar51 = *(long *)(((ulong)pppbVar31 & 0xfffffffffffffff8) + (long)pppbVar59 * 8);
          puVar48 = *(undefined8 **)(lVar51 + 0x10);
          if ((puVar48[5] == 0) || (*(long *)(puVar48[5] + 8) == 0)) {
            uStack_198 = uStack_198 & 0xffffffffffffff00;
            pppppppbStack_1a0 = (byte *******)((ulong)pppppppbStack_1a0 & 0xffffffffffffff00);
            lStack_1b8 = 0;
            local_1c0 = (byte *******)0x0;
            pppppppbStack_1a8 = (byte *******)0x0;
            local_1b0 = (byte *******)0x0;
            pppppppbStack_1c8 = (byte *******)0x0;
            local_1d0 = (byte *******)0x0;
            pppppppbStack_188 = (byte *******)0x0;
            local_190 = (byte *******)0x0;
            pbStack_178 = (byte *)0x0;
            local_180 = (byte *******)0x0;
            local_168 = (byte *)0x0;
            local_170 = (byte *)0x0;
            iVar21 = *(int *)(puVar48 + 8);
            if (iVar21 == 10) {
              puVar33 = (undefined8 *)puVar48[6];
              if (puVar33 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002b0850 to 002b085b has its CatchHandler @ 002b08ec */
                abort();
              }
              uVar35 = puVar33[1];
              if (0xffffffffffffffef < uVar35) {
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              pvVar47 = (void *)*puVar33;
              if (uVar35 < 0x17) {
                local_78 = (byte)((int)uVar35 << 1);
                pbVar25 = (byte *)((ulong)&local_78 | 1);
                if (uVar35 != 0) goto LAB_002ae850;
              }
              else {
                uVar56 = uVar35 + 0x10 & 0xfffffffffffffff0;
                pbVar25 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar56);
                local_78 = (byte)uVar56 | 1;
                uStack_77 = (undefined6)(uVar56 >> 8);
                uStack_71 = (undefined1)(uVar56 >> 0x38);
                local_70 = (undefined7)uVar35;
                uStack_69 = (undefined1)(uVar35 >> 0x38);
                local_68 = pbVar25;
LAB_002ae850:
                memcpy(pbVar25,pvVar47,uVar35);
              }
              pbVar25[uVar35] = 0;
              lVar38 = FUN_0049e770(PTR_FUN_047cba38,200);
              if (lVar38 != 0) {
                    /* try { // try from 002ae87c to 002ae887 has its CatchHandler @ 002b0af4 */
                FUN_002cc5e0(lVar38,&local_78);
              }
              lVar32 = lStack_1b8;
              if (*(int *)(lVar38 + 0x40) == 0) {
                local_1d8 = (char *)CONCAT44(local_1d8._4_4_,2);
                pppbVar26 = pppbVar63;
                if (lStack_1b8 != 0) {
                  lStack_1b8 = lVar38;
                  FUN_002ccc4c(lVar32);
                  bVar19 = true;
                  goto LAB_002ae910;
                }
                bVar19 = true;
                lStack_1b8 = lVar38;
              }
              else {
                    /* try { // try from 002ae898 to 002ae8c3 has its CatchHandler @ 002b0b04 */
                FUN_003673f0(&local_b0,"Invalid regex string specified in path matcher.");
                pppbVar26 = (byte ***)
                            FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x430,&local_b0,0,0);
                FUN_002ccc4c(lVar38);
                bVar19 = false;
                lVar32 = lVar38;
LAB_002ae910:
                FUN_0049e790(PTR_LAB_047cba48,lVar32);
              }
              if ((local_78 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_68);
              }
              if (!bVar19) {
LAB_002ae940:
                if (pppbVar26 != (byte ***)0x0) goto LAB_002afa64;
              }
LAB_002ae9e8:
              puVar29 = (ulong *)puVar48[4];
              if (puVar29 != (ulong *)0x0) {
                uVar35 = puVar29[1];
                if (uVar35 != 0) {
                  uVar50 = *puVar29;
                  uVar56 = 0;
                  pbVar25 = unaff_x28;
LAB_002aea90:
                  do {
                    pbVar52 = *(byte **)((uVar50 & 0xfffffffffffffff8) + uVar56 * 8);
                    local_110 = 0;
                    uStack_10f = 0;
                    uStack_109 = 0;
                    uStack_108 = 0;
                    local_78 = 0;
                    uStack_77 = 0;
                    uStack_71 = 0;
                    local_70 = 0;
                    pppppppbVar65 = *(byte ********)(pbVar52 + 0x10);
                    if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b0804 to 002b080b has its CatchHandler @ 002b0950 */
                    /* WARNING: Subroutine does not return */
                      std::__basic_string_common<true>::__throw_length_error();
                    }
                    pvVar47 = *(void **)(pbVar52 + 8);
                    if (pppppppbVar65 < (byte *******)0x17) {
                      local_b0 = (byte *******)
                                 CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
                      pppppppbVar62 = pppppppbVar36;
                      if (pppppppbVar65 != (byte *******)0x0) goto LAB_002aeb00;
                    }
                    else {
                      pppppppbVar62 =
                           (byte *******)
                           FUN_0049e770(PTR_FUN_047cba38,
                                        (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                      local_b0 = (byte *******)((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1)
                      ;
                      pppppppbStack_a8 = pppppppbVar65;
                      local_a0 = pppppppbVar62;
LAB_002aeb00:
                      memcpy(pppppppbVar62,pvVar47,(size_t)pppppppbVar65);
                    }
                    pppppppbVar22 = local_a0;
                    pppppppbVar24 = local_b0;
                    *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
                    bVar5 = (byte)local_b0;
                    local_110 = (byte)*pppppppbVar36;
                    uStack_10f = (undefined6)((ulong)*pppppppbVar36 >> 8);
                    uStack_109 = (undefined1)*(undefined8 *)((long)pppppppbVar36 + 7);
                    uStack_108 = (undefined7)((ulong)*(undefined8 *)((long)pppppppbVar36 + 7) >> 8);
                    switch(*(undefined4 *)(pbVar52 + 0x28)) {
                    case 4:
                      pppppppbVar65 = *(byte ********)(pbVar52 + 0x20);
                      if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b0840 to 002b0847 has its CatchHandler @ 002b08c4 */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      pvVar47 = *(void **)(pbVar52 + 0x18);
                      if (pppppppbVar65 < (byte *******)0x17) {
                        local_b0 = (byte *******)
                                   CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
                        pppppppbVar62 = pppppppbVar36;
                        if (pppppppbVar65 != (byte *******)0x0) goto LAB_002aed9c;
                      }
                      else {
                        pppppppbVar62 =
                             (byte *******)
                             FUN_0049e770(PTR_FUN_047cba38,
                                          (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                        local_b0 = (byte *******)
                                   ((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1);
                        pppppppbStack_a8 = pppppppbVar65;
                        local_a0 = pppppppbVar62;
LAB_002aed9c:
                        memcpy(pppppppbVar62,pvVar47,(size_t)pppppppbVar65);
                      }
                      *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
                      unaff_x28 = (byte *)0x0;
                      bVar58 = (byte)local_b0;
                      break;
                    default:
                    /* try { // try from 002af0c0 to 002af0eb has its CatchHandler @ 002b0afc */
                      FUN_003673f0(&local_b0,"Invalid route header matcher specified.");
                      pppbVar26 = (byte ***)
                                  FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                               ,0x476,&local_b0,0,0);
joined_r0x002af8b0:
                      if (((ulong)pppppppbVar24 & 1) != 0) {
                        FUN_0049e790(PTR_LAB_047cba48,pppppppbVar22);
                      }
                      unaff_x28 = pbVar25;
                      if (pppbVar26 != (byte ***)0x0) goto LAB_002afa64;
                      goto LAB_002af118;
                    case 6:
                      local_220 = (byte ******)**(long **)(pbVar52 + 0x18);
                      local_210 = (byte ******)(*(long **)(pbVar52 + 0x18))[1];
                      if ((long)local_210 < (long)local_220) {
                    /* try { // try from 002af85c to 002af887 has its CatchHandler @ 002b09e4 */
                        FUN_003673f0(&local_b0,
                                     "Invalid range header matcher specifier specified: end cannot be smaller than start."
                                    );
                        pppbVar26 = (byte ***)
                                    FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                 ,0x463,&local_b0,0,0);
                        goto joined_r0x002af8b0;
                      }
                      local_1e8 = (byte ******)0x0;
                      pppppppbVar65 = (byte *******)0x0;
                      bVar58 = 0;
                      unaff_x28 = (byte *)0x2;
                      uVar61 = 2;
                      uVar46 = (ushort)*pbVar52;
                      uVar45 = (ushort)*pbVar52;
                      if (pppppppbStack_1a0 <= pppppppbStack_1a8) goto LAB_002aee88;
                      goto LAB_002aea0c;
                    case 7:
                      pppppppbVar65 = (byte *******)0x0;
                      bVar58 = 0;
                      unaff_x28 = (byte *)0x3;
                      uVar61 = 3;
                      local_1e8 = (byte ******)0x0;
                      local_208 = (byte *******)(ulong)pbVar52[0x18];
                      uVar46 = (ushort)*pbVar52;
                      uVar45 = (ushort)*pbVar52;
                      if (pppppppbStack_1a8 < pppppppbStack_1a0) goto LAB_002aea0c;
                      goto LAB_002aee88;
                    case 9:
                      pppppppbVar65 = *(byte ********)(pbVar52 + 0x20);
                      if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b0830 to 002b0837 has its CatchHandler @ 002b08d4 */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      pvVar47 = *(void **)(pbVar52 + 0x18);
                      if (pppppppbVar65 < (byte *******)0x17) {
                        local_b0 = (byte *******)
                                   CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
                        pppppppbVar62 = pppppppbVar36;
                        if (pppppppbVar65 != (byte *******)0x0) goto LAB_002aedec;
                      }
                      else {
                        pppppppbVar62 =
                             (byte *******)
                             FUN_0049e770(PTR_FUN_047cba38,
                                          (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                        local_b0 = (byte *******)
                                   ((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1);
                        pppppppbStack_a8 = pppppppbVar65;
                        local_a0 = pppppppbVar62;
LAB_002aedec:
                        memcpy(pppppppbVar62,pvVar47,(size_t)pppppppbVar65);
                      }
                      *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
                      unaff_x28 = (byte *)0x4;
                      bVar58 = (byte)local_b0;
                      break;
                    case 10:
                      pppppppbVar65 = *(byte ********)(pbVar52 + 0x20);
                      if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b0838 to 002b083f has its CatchHandler @ 002b08cc */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      pvVar47 = *(void **)(pbVar52 + 0x18);
                      if (pppppppbVar65 < (byte *******)0x17) {
                        local_b0 = (byte *******)
                                   CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
                        pppppppbVar62 = pppppppbVar36;
                        if (pppppppbVar65 != (byte *******)0x0) goto LAB_002aee3c;
                      }
                      else {
                        pppppppbVar62 =
                             (byte *******)
                             FUN_0049e770(PTR_FUN_047cba38,
                                          (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                        local_b0 = (byte *******)
                                   ((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1);
                        pppppppbStack_a8 = pppppppbVar65;
                        local_a0 = pppppppbVar62;
LAB_002aee3c:
                        memcpy(pppppppbVar62,pvVar47,(size_t)pppppppbVar65);
                      }
                      *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
                      unaff_x28 = &DAT_00000005;
                      bVar58 = (byte)local_b0;
                      break;
                    case 0xb:
                      puVar33 = *(undefined8 **)(pbVar52 + 0x18);
                      if (puVar33 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002b0824 to 002b0827 has its CatchHandler @ 002b08e4 */
                        abort();
                      }
                      uVar53 = puVar33[1];
                      if (0xffffffffffffffef < uVar53) {
                    /* try { // try from 002b0828 to 002b082f has its CatchHandler @ 002b08dc */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      pvVar47 = (void *)*puVar33;
                      if (uVar53 < 0x17) {
                        local_e0 = (char *)CONCAT71(local_e0._1_7_,(char)((int)uVar53 << 1));
                        __dest = (void *)((ulong)&local_e0 | 1);
                        if (uVar53 != 0) goto LAB_002aeca4;
                      }
                      else {
                        uVar64 = uVar53 + 0x10 & 0xfffffffffffffff0;
                        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar64);
                        local_e0 = (char *)(uVar64 | 1);
                        local_d8 = uVar53;
                        local_d0 = __dest;
LAB_002aeca4:
                        memcpy(__dest,pvVar47,uVar53);
                      }
                      *(undefined1 *)((long)__dest + uVar53) = 0;
                      local_1e8 = (byte ******)FUN_0049e770(PTR_FUN_047cba38,200);
                      if (local_1e8 != (byte ******)0x0) {
                    /* try { // try from 002aecd0 to 002aecdb has its CatchHandler @ 002b0b3c */
                        FUN_002cc5e0(local_1e8,&local_e0);
                      }
                      iVar21 = *(int *)(local_1e8 + 8);
                      if (iVar21 == 0) {
                        unaff_x28 = (byte *)0x1;
                      }
                      else {
                        unaff_x28 = (byte *)((ulong)pbVar25 & 0xffffffff);
                    /* try { // try from 002aece8 to 002aed17 has its CatchHandler @ 002b0b44 */
                        FUN_003673f0(&local_b0,"Invalid regex string specified in header matcher.");
                        local_290 = (byte ***)
                                    FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                 ,0x454,&local_b0,0,0);
                        FUN_002ccc4c(local_1e8);
                        FUN_0049e790(PTR_LAB_047cba48,local_1e8);
                        local_1e8 = (byte ******)0x0;
                      }
                      if (((ulong)local_e0 & 1) != 0) {
                        FUN_0049e790(PTR_LAB_047cba48,local_d0);
                      }
                      uVar61 = (uint)unaff_x28;
                      if (iVar21 != 0) {
                        pppbVar26 = local_290;
                        if (local_1e8 != (byte ******)0x0) {
                          FUN_002ccc4c(local_1e8);
                          FUN_0049e790(PTR_LAB_047cba48,local_1e8);
                        }
                        goto joined_r0x002af8b0;
                      }
                      pppppppbVar65 = (byte *******)0x0;
                      bVar58 = 0;
                      uVar46 = (ushort)*pbVar52;
                      uVar45 = (ushort)*pbVar52;
                      if (pppppppbStack_1a8 < pppppppbStack_1a0) goto LAB_002aea0c;
                      goto LAB_002aee88;
                    }
                    local_1e8 = (byte ******)0x0;
                    uVar61 = (uint)unaff_x28;
                    local_78 = (byte)*pppppppbVar36;
                    uStack_77 = (undefined6)((ulong)*pppppppbVar36 >> 8);
                    uStack_71 = (undefined1)*(undefined8 *)((long)pppppppbVar36 + 7);
                    local_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppbVar36 + 7) >> 8);
                    uVar46 = (ushort)*pbVar52;
                    uVar45 = (ushort)*pbVar52;
                    pppppppbVar65 = local_a0;
                    if (pppppppbStack_1a8 < pppppppbStack_1a0) {
LAB_002aea0c:
                      *(byte *)pppppppbStack_1a8 = bVar5;
                      pppppppbStack_1a8[1] = (byte ******)CONCAT71(uStack_108,uStack_109);
                      pppppppbStack_1a8[2] = (byte ******)pppppppbVar22;
                      *(ulong *)((long)pppppppbStack_1a8 + 1) =
                           CONCAT17(uStack_109,CONCAT61(uStack_10f,local_110));
                      uStack_108 = 0;
                      local_110 = 0;
                      uStack_10f = 0;
                      uStack_109 = 0;
                      *(uint *)(pppppppbStack_1a8 + 3) = uVar61;
                      pbVar25 = (byte *)(ulong)uVar61;
                      *(byte *)(pppppppbStack_1a8 + 6) = bVar58;
                      pppppppbStack_1a8[4] = local_220;
                      pppppppbStack_1a8[5] = local_210;
                      pppppppbStack_1a8[7] = (byte ******)CONCAT71(local_70,uStack_71);
                      pppppppbStack_1a8[8] = (byte ******)pppppppbVar65;
                      *(ulong *)((long)pppppppbStack_1a8 + 0x31) =
                           CONCAT17(uStack_71,CONCAT61(uStack_77,local_78));
                      local_70 = 0;
                      local_78 = 0;
                      uStack_77 = 0;
                      uStack_71 = 0;
                      pppppppbStack_1a8[9] = local_1e8;
                      *(ushort *)(pppppppbStack_1a8 + 10) = (ushort)local_208 & 0xff | uVar45 << 8;
                      pppppppbStack_1a8 = pppppppbStack_1a8 + 0xb;
                      uVar56 = uVar56 + 1;
                      unaff_x28 = pbVar25;
                      if (uVar56 == uVar35) break;
                      goto LAB_002aea90;
                    }
LAB_002aee88:
                    lVar38 = (long)pppppppbStack_1a8 - (long)local_1b0 >> 3;
                    uVar53 = lVar38 * 0x2e8ba2e8ba2e8ba3 + 1;
                    if (0x2e8ba2e8ba2e8ba < uVar53) {
                    /* try { // try from 002b081c to 002b0823 has its CatchHandler @ 002b08f0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar32 = (long)pppppppbStack_1a0 - (long)local_1b0 >> 3;
                    uVar64 = lVar32 * 0x5d1745d1745d1746;
                    if (uVar53 <= uVar64) {
                      uVar53 = uVar64;
                    }
                    if (0x1745d1745d1745c < (ulong)(lVar32 * 0x2e8ba2e8ba2e8ba3)) {
                      uVar53 = 0x2e8ba2e8ba2e8ba;
                    }
                    local_98 = (byte *******)0x0;
                    local_90 = (byte *******)&pppppppbStack_1a0;
                    if (uVar53 == 0) {
                      lVar32 = 0;
                    }
                    else {
                      lVar32 = FUN_0049e770(PTR_FUN_047cba38,uVar53 * 0x58);
                    }
                    pppppppbStack_a8 = (byte *******)(lVar32 + lVar38 * 8);
                    *(byte *)pppppppbStack_a8 = bVar5;
                    pppppppbStack_a8[1] = (byte ******)CONCAT71(uStack_108,uStack_109);
                    pppppppbStack_a8[2] = (byte ******)pppppppbVar22;
                    *(ulong *)((long)pppppppbStack_a8 + 1) =
                         CONCAT17(uStack_109,CONCAT61(uStack_10f,local_110));
                    uStack_108 = 0;
                    local_110 = 0;
                    uStack_10f = 0;
                    uStack_109 = 0;
                    *(int *)(pppppppbStack_a8 + 3) = (int)unaff_x28;
                    *(byte *)(pppppppbStack_a8 + 6) = bVar58;
                    pppppppbStack_a8[4] = local_220;
                    pppppppbStack_a8[5] = local_210;
                    pppppppbStack_a8[7] = (byte ******)CONCAT71(local_70,uStack_71);
                    pppppppbStack_a8[8] = (byte ******)pppppppbVar65;
                    *(ulong *)((long)pppppppbStack_a8 + 0x31) =
                         CONCAT17(uStack_71,CONCAT61(uStack_77,local_78));
                    local_70 = 0;
                    local_78 = 0;
                    uStack_77 = 0;
                    uStack_71 = 0;
                    *(ushort *)(pppppppbStack_a8 + 10) = (ushort)local_208 & 0xff | uVar46 << 8;
                    pppppppbStack_a8[9] = local_1e8;
                    pppppppbVar65 = pppppppbStack_a8 + 0xb;
                    if (pppppppbStack_1a8 == local_1b0) {
                      pppppppbStack_1a8 = local_1b0;
                    }
                    else {
                      pppppppbVar62 = pppppppbStack_1a8;
                      do {
                        ppppppbVar68 = pppppppbVar62[-10];
                        ppppppbVar23 = pppppppbVar62[-0xb];
                        pppppppbStack_a8[-9] = pppppppbVar62[-9];
                        pppppppbStack_a8[-10] = ppppppbVar68;
                        pppppppbStack_a8[-0xb] = ppppppbVar23;
                        ppppppbVar68 = pppppppbVar62[-7];
                        ppppppbVar23 = pppppppbVar62[-8];
                        pppppppbVar62[-10] = (byte ******)0x0;
                        pppppppbVar62[-9] = (byte ******)0x0;
                        pppppppbVar62[-0xb] = (byte ******)0x0;
                        pppppppbStack_a8[-6] = pppppppbVar62[-6];
                        pppppppbStack_a8[-7] = ppppppbVar68;
                        pppppppbStack_a8[-8] = ppppppbVar23;
                        ppppppbVar68 = pppppppbVar62[-4];
                        ppppppbVar23 = pppppppbVar62[-5];
                        pppppppbStack_a8[-3] = pppppppbVar62[-3];
                        pppppppbStack_a8[-4] = ppppppbVar68;
                        pppppppbStack_a8[-5] = ppppppbVar23;
                        ppppppbVar23 = pppppppbVar62[-2];
                        pppppppbVar62[-4] = (byte ******)0x0;
                        pppppppbVar62[-3] = (byte ******)0x0;
                        pppppppbVar62[-5] = (byte ******)0x0;
                        pppppppbVar62[-2] = (byte ******)0x0;
                        pppppppbStack_a8[-2] = ppppppbVar23;
                        *(undefined2 *)(pppppppbStack_a8 + -1) = *(undefined2 *)(pppppppbVar62 + -1)
                        ;
                        pppppppbVar62 = pppppppbVar62 + -0xb;
                        pppppppbStack_a8 = pppppppbStack_a8 + -0xb;
                      } while (local_1b0 != pppppppbVar62);
                    }
                    pppppppbVar62 = pppppppbStack_a8;
                    pppppppbStack_a8 = local_1b0;
                    local_b0 = local_1b0;
                    local_98 = pppppppbStack_1a0;
                    local_1b0 = pppppppbVar62;
                    local_a0 = pppppppbStack_1a8;
                    pppppppbStack_1a8 = pppppppbVar65;
                    pppppppbStack_1a0 = (byte *******)(lVar32 + uVar53 * 0x58);
                    FUN_002a4e44(&local_b0);
                    uVar56 = uVar56 + 1;
                    pbVar25 = unaff_x28;
                  } while (uVar56 != uVar35);
                }
              }
LAB_002af118:
              if ((puVar48[2] != 0) &&
                 (piVar37 = *(int **)(puVar48[2] + 0x10), piVar37 != (int *)0x0)) {
                uVar61 = piVar37[2];
                iVar21 = *piVar37;
                if (iVar21 != 2) {
                  if (iVar21 == 1) {
                    iVar21 = 100;
                  }
                  else {
                    if (iVar21 != 0) {
                    /* try { // try from 002af164 to 002af21f has its CatchHandler @ 002b0b90 */
                      FUN_003673f0(&local_b0,"Unknown denominator type");
                      pppbVar26 = (byte ***)
                                  FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                               ,0x499,&local_b0,0,0);
                      if (pppbVar26 != (byte ***)0x0) goto LAB_002afa64;
                      goto LAB_002af198;
                    }
                    iVar21 = 10000;
                  }
                  uVar61 = uVar61 * iVar21;
                }
                uStack_198 = (ulong)uVar61 << 0x20 | 1;
              }
LAB_002af198:
              if (*(int *)(lVar51 + 0x70) == 2) {
                lVar51 = *(long *)(lVar51 + 0x68);
                if (*(int *)(lVar51 + 0xc0) == 3) {
                  lVar51 = *(long *)(lVar51 + 0xb0);
                  if (*(int **)(lVar51 + 0x10) == (int *)0x0) {
                    iVar21 = 100;
                    puVar29 = *(ulong **)(lVar51 + 0x18);
                    if (puVar29 != (ulong *)0x0) goto LAB_002af2d4;
LAB_002af73c:
                    iVar20 = 0;
LAB_002af740:
                    if (iVar21 != iVar20) {
LAB_002af818:
                    /* try { // try from 002af818 to 002af857 has its CatchHandler @ 002b0b90 */
                      FUN_003673f0(&local_b0,
                                   "RouteAction weighted_cluster has incorrect total weight");
                      pppbVar26 = (byte ***)
                                  FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                               ,0x4db,&local_b0,0,0);
                      goto LAB_002af224;
                    }
                  }
                  else {
                    iVar21 = **(int **)(lVar51 + 0x10);
                    puVar29 = *(ulong **)(lVar51 + 0x18);
                    if (puVar29 == (ulong *)0x0) goto LAB_002af73c;
LAB_002af2d4:
                    uVar35 = puVar29[1];
                    if (uVar35 != 0) {
                      uVar50 = *puVar29;
                      uVar56 = 0;
                      iVar20 = 0;
                      do {
                        unaff_x28 = *(byte **)((uVar50 & 0xfffffffffffffff8) + uVar56 * 8);
                        local_e0 = (char *)((ulong)local_e0 & 0xff00000000000000);
                        pppppppbVar65 = *(byte ********)(unaff_x28 + 8);
                        if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b0848 to 002b084f has its CatchHandler @ 002b08c0 */
                    /* WARNING: Subroutine does not return */
                          std::__basic_string_common<true>::__throw_length_error();
                        }
                        pvVar47 = *(void **)unaff_x28;
                        if (pppppppbVar65 < (byte *******)0x17) {
                          local_b0 = (byte *******)
                                     CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
                          pppppppbVar62 = pppppppbVar36;
                          if (pppppppbVar65 != (byte *******)0x0) goto LAB_002af394;
                        }
                        else {
                          pppppppbVar62 =
                               (byte *******)
                               FUN_0049e770(PTR_FUN_047cba38,
                                            (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                          local_b0 = (byte *******)
                                     ((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1);
                          pppppppbStack_a8 = pppppppbVar65;
                          local_a0 = pppppppbVar62;
LAB_002af394:
                          memcpy(pppppppbVar62,pvVar47,(size_t)pppppppbVar65);
                        }
                        pppppppbVar18 = local_a0;
                        pppppppbVar22 = pppppppbStack_a8;
                        pppppppbVar24 = local_b0;
                        *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
                        bVar5 = (byte)local_b0;
                        uVar4 = *(undefined4 *)((long)pppppppbVar36 + 3);
                        local_e0._0_7_ = CONCAT43(uVar4,(int3)*(undefined4 *)pppppppbVar36);
                        pppppppbVar65 = (byte *******)(ulong)((byte)local_b0 >> 1);
                        if (((ulong)local_b0 & 1) != 0) {
                          pppppppbVar65 = pppppppbStack_a8;
                        }
                        if (pppppppbVar65 == (byte *******)0x0) {
                    /* try { // try from 002af8b8 to 002af8e3 has its CatchHandler @ 002b09c8 */
                          FUN_003673f0(&local_b0,
                                       "RouteAction weighted_cluster cluster contains empty cluster name."
                                      );
                          pppbVar26 = (byte ***)
                                      FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x4cc,&local_b0,0,0);
LAB_002af914:
                          if (((ulong)pppppppbVar24 & 1) != 0) {
                            FUN_0049e790(PTR_LAB_047cba48,pppppppbVar18);
                          }
                          goto LAB_002af224;
                        }
                        if (*(int **)(unaff_x28 + 0x10) == (int *)0x0) {
                    /* try { // try from 002af8e8 to 002af913 has its CatchHandler @ 002b09c4 */
                          FUN_003673f0(&local_b0,
                                       "RouteAction weighted_cluster cluster missing weight");
                          pppbVar26 = (byte ***)
                                      FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x4d3,&local_b0,0,0);
                          goto LAB_002af914;
                        }
                        iVar3 = **(int **)(unaff_x28 + 0x10);
                        if (local_170 < local_168) {
                          *local_170 = (byte)local_b0;
                          *(byte ********)(local_170 + 8) = pppppppbStack_a8;
                          *(byte ********)(local_170 + 0x10) = local_a0;
                          *(undefined4 *)(local_170 + 4) = uVar4;
                          *(undefined4 *)(local_170 + 1) = (undefined4)local_e0;
                          local_e0 = (char *)((ulong)local_e0._7_1_ << 0x38);
                          *(int *)(local_170 + 0x18) = iVar3;
                          local_170 = local_170 + 0x20;
                        }
                        else {
                          unaff_x28 = (byte *)((long)local_170 - (long)pbStack_178 >> 5);
                          pbVar25 = unaff_x28 + 1;
                          if ((ulong)pbVar25 >> 0x3b != 0) {
                    /* try { // try from 002b0864 to 002b086b has its CatchHandler @ 002b08b8 */
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          pbVar52 = (byte *)((long)local_168 - (long)pbStack_178 >> 4);
                          if (pbVar25 <= pbVar52) {
                            pbVar25 = pbVar52;
                          }
                          if (0x3fffffffffffffe < (ulong)((long)local_168 - (long)pbStack_178 >> 5))
                          {
                            pbVar25 = (byte *)0x7ffffffffffffff;
                          }
                          if (pbVar25 == (byte *)0x0) {
                            lVar51 = 0;
                          }
                          else {
                            lVar51 = FUN_0049e770(PTR_FUN_047cba38,(long)pbVar25 << 5);
                          }
                          pbVar57 = pbStack_178;
                          pbVar52 = (byte *)(lVar51 + (long)unaff_x28 * 0x20);
                          *pbVar52 = bVar5;
                          uVar4 = local_e0._3_4_;
                          *(undefined4 *)(pbVar52 + 4) = uVar4;
                          *(undefined4 *)(pbVar52 + 1) = (undefined4)local_e0;
                          *(byte ********)(pbVar52 + 8) = pppppppbVar22;
                          *(byte ********)(pbVar52 + 0x10) = pppppppbVar18;
                          local_e0 = (char *)((ulong)local_e0 & 0xff00000000000000);
                          *(int *)(pbVar52 + 0x18) = iVar3;
                          local_168 = (byte *)(lVar51 + (long)pbVar25 * 0x20);
                          pbVar25 = pbVar52 + 0x20;
                          if (local_170 == pbStack_178) {
                            pbStack_178 = pbVar52;
                          }
                          else {
                            lVar51 = 0;
                            do {
                              uVar69 = *(undefined8 *)(local_170 + lVar51 + -0x18);
                              uVar44 = *(undefined8 *)(local_170 + lVar51 + -0x20);
                              lVar38 = lVar51 + -0x20;
                              *(undefined8 *)(pbVar52 + lVar51 + -0x10) =
                                   *(undefined8 *)(local_170 + lVar51 + -0x10);
                              *(undefined8 *)(pbVar52 + lVar51 + -0x18) = uVar69;
                              *(undefined8 *)(pbVar52 + lVar51 + -0x20) = uVar44;
                              pbVar60 = local_170 + lVar51 + -0x20;
                              pbVar60[0] = 0;
                              pbVar60[1] = 0;
                              pbVar60[2] = 0;
                              pbVar60[3] = 0;
                              pbVar60[4] = 0;
                              pbVar60[5] = 0;
                              pbVar60[6] = 0;
                              pbVar60[7] = 0;
                              pbVar60 = local_170 + lVar51 + -0x18;
                              pbVar60[0] = 0;
                              pbVar60[1] = 0;
                              pbVar60[2] = 0;
                              pbVar60[3] = 0;
                              pbVar60[4] = 0;
                              pbVar60[5] = 0;
                              pbVar60[6] = 0;
                              pbVar60[7] = 0;
                              pbVar60 = local_170 + lVar51 + -0x10;
                              pbVar60[0] = 0;
                              pbVar60[1] = 0;
                              pbVar60[2] = 0;
                              pbVar60[3] = 0;
                              pbVar60[4] = 0;
                              pbVar60[5] = 0;
                              pbVar60[6] = 0;
                              pbVar60[7] = 0;
                              *(undefined4 *)(pbVar52 + lVar51 + -8) =
                                   *(undefined4 *)(local_170 + lVar51 + -8);
                              lVar51 = lVar38;
                            } while ((long)pbStack_178 - (long)local_170 != lVar38);
                            bVar19 = local_170 != pbStack_178;
                            pbStack_178 = pbVar52 + lVar38;
                            if (bVar19) {
                              pbVar60 = local_170;
                              local_170 = pbVar25;
                              do {
                                pbVar52 = pbVar60 + -0x20;
                                if ((*pbVar52 & 1) != 0) {
                                  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar60 + -0x10));
                                }
                                pbVar60 = pbVar52;
                                pbVar25 = local_170;
                              } while (pbVar57 != pbVar52);
                            }
                          }
                          local_170 = pbVar25;
                          if (pbVar57 != (byte *)0x0) {
                            FUN_0049e790(PTR_LAB_047cba48,pbVar57);
                          }
                        }
                        uVar56 = uVar56 + 1;
                        iVar20 = iVar3 + iVar20;
                      } while (uVar56 != uVar35);
                      goto LAB_002af740;
                    }
                    if (iVar21 != 0) goto LAB_002af818;
                  }
                  if (pbStack_178 == local_170) {
                    FUN_003673f0(&local_b0,
                                 "RouteAction weighted_cluster has no valid clusters specified.");
                    pppbVar26 = (byte ***)
                                FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                             ,0x4df,&local_b0,0,0);
                    goto LAB_002af224;
                  }
                }
                else {
                  if (*(int *)(lVar51 + 0xc0) != 1) goto LAB_002ae594;
                  pppppppbVar65 = *(byte ********)(lVar51 + 0xb8);
                  if (pppppppbVar65 == (byte *******)0x0) {
                    /* try { // try from 002af700 to 002af793 has its CatchHandler @ 002b0b90 */
                    FUN_003673f0(&local_b0,"RouteAction cluster contains empty cluster name.");
                    pppbVar26 = (byte ***)
                                FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                             ,0x4b0,&local_b0,0,0);
                    goto LAB_002af224;
                  }
                  if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b087c to 002b0883 has its CatchHandler @ 002b08ec */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  pvVar47 = *(void **)(lVar51 + 0xb0);
                  if (pppppppbVar65 < (byte *******)0x17) {
                    local_b0 = (byte *******)
                               CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
                    pppppppbVar62 = pppppppbVar36;
                  }
                  else {
                    pppppppbVar62 =
                         (byte *******)
                         FUN_0049e770(PTR_FUN_047cba38,
                                      (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                    local_b0 = (byte *******)((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1);
                    pppppppbStack_a8 = pppppppbVar65;
                    local_a0 = pppppppbVar62;
                  }
                  memcpy(pppppppbVar62,pvVar47,(size_t)pppppppbVar65);
                  *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
                  if (((ulong)local_190 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_180);
                  }
                  local_180 = local_a0;
                  pppppppbStack_188 = pppppppbStack_a8;
                  local_190 = local_b0;
                }
              }
              else {
                FUN_003673f0(&local_b0,"No RouteAction found in route.");
                pppbVar26 = (byte ***)
                            FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x4a6,&local_b0,0,0);
LAB_002af224:
                if (pppbVar26 != (byte ***)0x0) goto LAB_002afa64;
              }
              lVar51 = lStack_1b8;
              if (((char *)*puVar48 != (char *)0x0) && (*(char *)*puVar48 == '\0')) {
                    /* try { // try from 002afa34 to 002afa5f has its CatchHandler @ 002b09b4 */
                FUN_003673f0(&local_b0,"case_sensitive if set must be set to true.");
                pppbVar26 = (byte ***)
                            FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x544,&local_b0,0,0);
LAB_002afa64:
                FUN_002b0bc8(&local_1d8);
                return pppbVar26;
              }
              puVar2 = (undefined4 *)param_4[1];
              if (puVar2 < (undefined4 *)param_4[2]) {
                *puVar2 = (uint)local_1d8;
                *(byte ********)(puVar2 + 6) = local_1c0;
                *(byte ********)(puVar2 + 4) = pppppppbStack_1c8;
                *(byte ********)(puVar2 + 2) = local_1d0;
                local_1d0 = (byte *******)0x0;
                pppppppbStack_1c8 = (byte *******)0x0;
                lStack_1b8 = 0;
                *(undefined8 *)(puVar2 + 0xc) = 0;
                *(undefined8 *)(puVar2 + 0xe) = 0;
                *(long *)(puVar2 + 8) = lVar51;
                *(undefined8 *)(puVar2 + 10) = 0;
                *(byte ********)(puVar2 + 0xc) = pppppppbStack_1a8;
                *(byte ********)(puVar2 + 10) = local_1b0;
                *(byte ********)(puVar2 + 0xe) = pppppppbStack_1a0;
                pppppppbStack_1a0 = (byte *******)0x0;
                local_1b0 = (byte *******)0x0;
                pppppppbStack_1a8 = (byte *******)0x0;
                *(ulong *)(puVar2 + 0x10) = uStack_198;
                *(byte ********)(puVar2 + 0x16) = local_180;
                *(undefined8 *)(puVar2 + 0x18) = 0;
                *(byte ********)(puVar2 + 0x14) = pppppppbStack_188;
                *(byte ********)(puVar2 + 0x12) = local_190;
                pppppppbStack_188 = (byte *******)0x0;
                local_190 = (byte *******)0x0;
                *(undefined8 *)(puVar2 + 0x1a) = 0;
                *(undefined8 *)(puVar2 + 0x1c) = 0;
                *(byte **)(puVar2 + 0x1a) = local_170;
                *(byte **)(puVar2 + 0x18) = pbStack_178;
                *(byte **)(puVar2 + 0x1c) = local_168;
                pbStack_178 = (byte *)0x0;
                local_170 = (byte *)0x0;
                local_168 = (byte *)0x0;
                param_4[1] = (long)(puVar2 + 0x1e);
              }
              else {
                lVar51 = (long)puVar2 - *param_4 >> 3;
                uVar35 = lVar51 * -0x1111111111111111 + 1;
                if (0x222222222222222 < uVar35) {
                    /* try { // try from 002b085c to 002b0863 has its CatchHandler @ 002b08bc */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar38 = param_4[2] - *param_4 >> 3;
                uVar56 = lVar38 * -0x2222222222222222;
                if (uVar35 <= uVar56) {
                  uVar35 = uVar56;
                }
                if (0x111111111111110 < (ulong)(lVar38 * -0x1111111111111111)) {
                  uVar35 = 0x222222222222222;
                }
                if (uVar35 == 0) {
                  lVar32 = 0;
                }
                else {
                  lVar32 = FUN_0049e770(PTR_FUN_047cba38,uVar35 * 0x78);
                }
                lVar38 = lStack_1b8;
                puVar39 = (undefined4 *)(lVar32 + lVar51 * 8);
                *puVar39 = (uint)local_1d8;
                *(byte ********)(puVar39 + 6) = local_1c0;
                *(byte ********)(puVar39 + 4) = pppppppbStack_1c8;
                *(byte ********)(puVar39 + 2) = local_1d0;
                pppppppbStack_1c8._0_1_ = 0;
                pppppppbStack_1c8._1_7_ = 0;
                local_1d0 = (byte *******)0x0;
                lStack_1b8 = 0;
                *(long *)(puVar39 + 8) = lVar38;
                *(undefined8 *)(puVar39 + 10) = 0;
                *(undefined8 *)(puVar39 + 0xc) = 0;
                *(undefined8 *)(puVar39 + 0xe) = 0;
                *(byte ********)(puVar39 + 0xc) = pppppppbStack_1a8;
                *(byte ********)(puVar39 + 10) = local_1b0;
                *(byte ********)(puVar39 + 0xe) = pppppppbStack_1a0;
                pppppppbStack_1a0 = (byte *******)0x0;
                local_1b0 = (byte *******)0x0;
                pppppppbStack_1a8 = (byte *******)0x0;
                *(ulong *)(puVar39 + 0x10) = uStack_198;
                *(byte ********)(puVar39 + 0x16) = local_180;
                *(byte ********)(puVar39 + 0x14) = pppppppbStack_188;
                *(byte ********)(puVar39 + 0x12) = local_190;
                local_190._0_1_ = 0;
                local_190 = (byte *******)0x0;
                pppppppbStack_188 = (byte *******)0x0;
                *(undefined8 *)(puVar39 + 0x1c) = 0;
                *(undefined8 *)(puVar39 + 0x18) = 0;
                *(undefined8 *)(puVar39 + 0x1a) = 0;
                *(byte **)(puVar39 + 0x1a) = local_170;
                *(byte **)(puVar39 + 0x18) = pbStack_178;
                *(byte **)(puVar39 + 0x1c) = local_168;
                pbStack_178 = (byte *)0x0;
                local_170 = (byte *)0x0;
                local_168 = (byte *)0x0;
                lVar38 = *param_4;
                lVar51 = param_4[1];
                puVar2 = puVar39 + 0x1e;
                if (lVar51 == lVar38) {
                  lVar51 = lVar38;
                }
                else {
                  lVar42 = 0;
                  do {
                    lVar1 = lVar51 + lVar42;
                    lVar43 = lVar42 + -0x78;
                    *(undefined4 *)((long)puVar39 + lVar42 + -0x78) = *(undefined4 *)(lVar1 + -0x78)
                    ;
                    uVar69 = *(undefined8 *)(lVar1 + -0x68);
                    uVar44 = *(undefined8 *)(lVar1 + -0x70);
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x60) = *(undefined8 *)(lVar1 + -0x60)
                    ;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x68) = uVar69;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x70) = uVar44;
                    uVar44 = *(undefined8 *)(lVar1 + -0x58);
                    *(undefined8 *)(lVar1 + -0x68) = 0;
                    *(undefined8 *)(lVar1 + -0x60) = 0;
                    *(undefined8 *)(lVar1 + -0x70) = 0;
                    *(undefined8 *)(lVar1 + -0x58) = 0;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x58) = uVar44;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x50) = 0;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x48) = 0;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x40) = 0;
                    uVar44 = *(undefined8 *)(lVar1 + -0x50);
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x48) = *(undefined8 *)(lVar1 + -0x48)
                    ;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x50) = uVar44;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x40) = *(undefined8 *)(lVar1 + -0x40)
                    ;
                    *(undefined8 *)(lVar1 + -0x40) = 0;
                    *(undefined8 *)(lVar1 + -0x50) = 0;
                    *(undefined8 *)(lVar1 + -0x48) = 0;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x38) = *(undefined8 *)(lVar1 + -0x38)
                    ;
                    uVar69 = *(undefined8 *)(lVar1 + -0x28);
                    uVar44 = *(undefined8 *)(lVar1 + -0x30);
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x20) = *(undefined8 *)(lVar1 + -0x20)
                    ;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x28) = uVar69;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x30) = uVar44;
                    *(undefined8 *)(lVar1 + -0x30) = 0;
                    *(undefined8 *)(lVar1 + -0x28) = 0;
                    *(undefined8 *)(lVar1 + -0x20) = 0;
                    *(undefined8 *)((long)puVar39 + lVar42 + -8) = 0;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x18) = 0;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x10) = 0;
                    uVar44 = *(undefined8 *)(lVar1 + -0x18);
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x10) = *(undefined8 *)(lVar1 + -0x10)
                    ;
                    *(undefined8 *)((long)puVar39 + lVar42 + -0x18) = uVar44;
                    *(undefined8 *)((long)puVar39 + lVar42 + -8) = *(undefined8 *)(lVar1 + -8);
                    *(undefined8 *)(lVar1 + -0x18) = 0;
                    *(undefined8 *)(lVar1 + -0x10) = 0;
                    *(undefined8 *)(lVar1 + -8) = 0;
                    lVar42 = lVar43;
                  } while (lVar38 - lVar51 != lVar43);
                  puVar39 = (undefined4 *)((long)puVar39 + lVar43);
                  lVar38 = *param_4;
                  lVar51 = param_4[1];
                }
                param_4[2] = lVar32 + uVar35 * 0x78;
                *param_4 = (long)puVar39;
                param_4[1] = (long)puVar2;
                while (lVar51 != lVar38) {
                  lVar51 = lVar51 + -0x78;
                  FUN_002b0bc8(lVar51);
                }
                if (lVar38 != 0) {
LAB_002af6f8:
                  FUN_0049e790(PTR_LAB_047cba48,lVar38);
                }
              }
            }
            else {
              if (iVar21 != 2) {
                if (iVar21 != 1) {
                    /* try { // try from 002ae7e8 to 002ae81b has its CatchHandler @ 002b0b90 */
                  FUN_003673f0(&local_b0,"Invalid route path specifier specified.");
                  pppbVar26 = (byte ***)
                              FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                           ,0x437,&local_b0,0,0);
                  goto LAB_002ae940;
                }
                pppppppbVar62 = (byte *******)puVar48[7];
                pppppppbVar65 = pppppppbVar36;
                if (pppppppbVar62 == (byte *******)0x0) {
                  local_1d8 = (char *)CONCAT44(local_1d8._4_4_,1);
                  local_b0 = (byte *******)((ulong)local_b0 & 0xffffffffffffff00);
                }
                else {
                  pcVar66 = (char *)puVar48[6];
                  if (*pcVar66 != '/') goto LAB_002ae594;
                  local_c0 = (byte *)((long)pppppppbVar62 + -1);
                  pcStack_c8 = pcVar66 + 1;
                  local_e0 = (char *)0x0;
                  local_d8 = 0;
                  local_d0 = (void *)0x0;
                    /* try { // try from 002ae62c to 002ae643 has its CatchHandler @ 002b0a8c */
                  FUN_002b1920(&local_b0,&local_e0,0x20000002f,0);
                    /* try { // try from 002ae644 to 002ae653 has its CatchHandler @ 002b0a6c */
                  FUN_002b1a3c(&local_78,&local_128,&local_b0);
                  if (((ulong)local_b0 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_a0);
                  }
                  if (((ulong)local_e0 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_d0);
                  }
                  lVar38 = CONCAT17(uStack_71,CONCAT61(uStack_77,local_78));
                  lVar32 = CONCAT17(uStack_69,local_70) - lVar38;
                  if ((2 < (ulong)(lVar32 >> 4)) ||
                     ((lVar32 == 0x20 && (*(long *)(lVar38 + 8) == 0)))) goto LAB_002ae94c;
                  if (lVar38 != 0) {
                    uStack_69 = uStack_71;
                    local_70 = CONCAT61(uStack_77,local_78);
                    FUN_0049e790(PTR_LAB_047cba48);
                  }
                  local_1d8 = (char *)CONCAT44(local_1d8._4_4_,1);
                  if ((byte *******)0xffffffffffffffef < pppppppbVar62) {
                    /* try { // try from 002b086c to 002b0873 has its CatchHandler @ 002b08ec */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  if (pppppppbVar62 < (byte *******)0x17) {
                    local_b0 = (byte *******)
                               CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar62 << 1));
                  }
                  else {
                    pppppppbVar65 =
                         (byte *******)
                         FUN_0049e770(PTR_FUN_047cba38,
                                      (ulong)(pppppppbVar62 + 2) & 0xfffffffffffffff0);
                    local_b0 = (byte *******)((ulong)(pppppppbVar62 + 2) & 0xfffffffffffffff0 | 1);
                    pppppppbStack_a8 = pppppppbVar62;
                    local_a0 = pppppppbVar65;
                  }
                  memcpy(pppppppbVar65,pcVar66,(size_t)pppppppbVar62);
                }
                *(byte *)((long)pppppppbVar65 + (long)pppppppbVar62) = 0;
                if (((ulong)local_1d0 & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_1c0);
                }
                local_1c0 = local_a0;
                pppppppbStack_1c8 = pppppppbStack_a8;
                local_1d0 = local_b0;
                goto LAB_002ae9e8;
              }
              pppppppbVar65 = (byte *******)puVar48[7];
              if ((pppppppbVar65 != (byte *******)0x0) &&
                 (pcVar66 = (char *)puVar48[6], *pcVar66 == '/')) {
                local_f0 = (byte *)((long)pppppppbVar65 + -1);
                pcStack_f8 = pcVar66 + 1;
                local_110 = 0;
                uStack_10f = 0;
                uStack_109 = 0;
                uStack_108 = 0;
                uStack_101 = 0;
                local_100 = 0;
                    /* try { // try from 002ae714 to 002ae72b has its CatchHandler @ 002b0a58 */
                FUN_002b1920(&local_b0,&local_110,0x20000002f,0);
                    /* try { // try from 002ae72c to 002ae73b has its CatchHandler @ 002b0a38 */
                FUN_002b1a3c(&local_78,&local_128,&local_b0);
                if (((ulong)local_b0 & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_a0);
                }
                if ((local_110 & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_100);
                }
                lVar38 = CONCAT17(uStack_71,CONCAT61(uStack_77,local_78));
                if (CONCAT17(uStack_69,local_70) - lVar38 == 0x20) {
                  if ((*(long *)(lVar38 + 8) != 0) && (*(long *)(lVar38 + 0x18) != 0)) {
                    local_1d8 = (char *)((ulong)local_1d8 & 0xffffffff00000000);
                    if ((byte *******)0xffffffffffffffef < pppppppbVar65) {
                    /* try { // try from 002b0874 to 002b087b has its CatchHandler @ 002b08a4 */
                    /* WARNING: Subroutine does not return */
                      std::__basic_string_common<true>::__throw_length_error();
                    }
                    if (pppppppbVar65 < (byte *******)0x17) {
                      local_b0 = (byte *******)
                                 CONCAT71(local_b0._1_7_,(char)((int)pppppppbVar65 << 1));
                      pppppppbVar62 = pppppppbVar36;
                    }
                    else {
                      pppppppbVar62 =
                           (byte *******)
                           FUN_0049e770(PTR_FUN_047cba38,
                                        (ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0);
                      local_b0 = (byte *******)((ulong)(pppppppbVar65 + 2) & 0xfffffffffffffff0 | 1)
                      ;
                      pppppppbStack_a8 = pppppppbVar65;
                      local_a0 = pppppppbVar62;
                    }
                    memcpy(pppppppbVar62,pcVar66,(size_t)pppppppbVar65);
                    *(byte *)((long)pppppppbVar62 + (long)pppppppbVar65) = 0;
                    if (((ulong)local_1d0 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_1c0);
                    }
                    local_1c0 = local_a0;
                    pppppppbStack_1c8 = pppppppbStack_a8;
                    local_1d0 = local_b0;
                    if (CONCAT17(uStack_71,CONCAT61(uStack_77,local_78)) != 0) {
                      uStack_69 = uStack_71;
                      local_70 = CONCAT61(uStack_77,local_78);
                      FUN_0049e790(PTR_LAB_047cba48);
                    }
                    goto LAB_002ae9e8;
                  }
                }
                else {
LAB_002ae94c:
                  if (lVar38 == 0) goto LAB_002ae594;
                }
                local_70 = (undefined7)lVar38;
                uStack_69 = (undefined1)((ulong)lVar38 >> 0x38);
                goto LAB_002af6f8;
              }
            }
LAB_002ae594:
            FUN_002b0bc8(&local_1d8);
          }
          pppbVar59 = (byte ***)((long)pppbVar59 + 1);
        } while (pppbVar59 != pppbVar63);
        if (*param_4 != param_4[1]) {
          return (byte ***)0x0;
        }
        FUN_003673f0(&local_1d8,"No valid routes specified.");
        uVar44 = 0x549;
      }
      goto LAB_002ae4bc;
    }
  }
  FUN_003673f0(&local_1d8,"No matched virtual host found in the route config.");
  uVar44 = 0x51f;
LAB_002ae4bc:
  pppbVar63 = (byte ***)
              FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                           ,uVar44,&local_1d8,0,0);
  return pppbVar63;
}


