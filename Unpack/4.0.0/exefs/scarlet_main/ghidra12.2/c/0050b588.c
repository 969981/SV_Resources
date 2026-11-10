/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050b588; name: FUN_0050b588
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050b588(long *param_1,long *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  void *__src;
  undefined8 *******pppppppuVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 ******ppppppuVar21;
  char *pcVar22;
  void *__dest;
  undefined8 extraout_x1;
  byte *pbVar23;
  ulong uVar24;
  undefined8 ******ppppppuVar25;
  byte *pbVar26;
  undefined8 ****ppppuVar27;
  byte *pbVar28;
  char *pcVar29;
  ulong uVar30;
  bool bVar31;
  undefined8 *****pppppuVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  undefined8 *******local_170;
  ulong uStack_168;
  void *local_160;
  byte local_150 [16];
  undefined8 local_140;
  undefined4 local_138 [4];
  char *local_128;
  undefined8 ******local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 ******local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 *******local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined8 *******local_c0;
  undefined8 ******ppppppuStack_b8;
  char *local_b0;
  undefined8 *******local_a0;
  undefined8 ******ppppppuStack_98;
  byte *local_90;
  long local_88;
  long local_80;
  undefined8 *******local_78;
  undefined8 ******ppppppuStack_70;
  byte *local_68;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  lVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  local_78 = (undefined8 *******)0x0;
  ppppppuStack_70 = (undefined8 ******)0x0;
  local_68 = (byte *)0x0;
  lVar20 = param_1[9];
                    /* try { // try from 0050b5e0 to 0050b5ef has its CatchHandler @ 0050d6d8 */
  uVar12 = FUN_0049f450(param_2,&local_80,&local_88);
  plVar17 = param_1 + 5;
  if ((uVar12 & 1) != 0) {
    local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x5b02);
    bVar4 = *(byte *)(param_1 + 6);
    uVar24 = (ulong)(bVar4 >> 1);
    uVar12 = uVar24;
    if ((bVar4 & 1) != 0) {
      uVar12 = param_1[7];
    }
    if (uVar12 == 1) {
      if ((bVar4 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x31) == '[') {
          pcVar22 = (char *)((long)param_1 + 0x32);
          pcVar29 = (char *)((ulong)&local_a0 | 2);
          do {
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) goto LAB_0050b670;
            cVar33 = *pcVar29;
            cVar34 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar29 = pcVar29 + 1;
          } while (cVar34 == cVar33);
        }
      }
      else if (*(char *)param_1[8] == '[') {
LAB_0050b670:
                    /* try { // try from 0050b670 to 0050b677 has its CatchHandler @ 0050d6a8 */
        FUN_004fcda0(plVar17);
        local_a0 = (undefined8 *******)0x0;
        ppppppuStack_98 = (undefined8 ******)0x0;
        local_90 = (byte *)0x0;
        local_b0 = (char *)0x0;
        local_c0 = (undefined8 *******)0x0;
        ppppppuStack_b8 = (undefined8 ******)0x0;
                    /* try { // try from 0050b688 to 0050b697 has its CatchHandler @ 0050d680 */
        uVar12 = FUN_0050d6fc(param_1,&local_a0,&local_c0);
        if ((uVar12 & 1) == 0) {
LAB_0050b8ac:
          uVar10 = 0;
        }
        else {
          local_e0 = (undefined8 *******)CONCAT53(local_e0._3_5_,0x5d02);
                    /* try { // try from 0050b6a8 to 0050b6b3 has its CatchHandler @ 0050d5e8 */
          uVar12 = FUN_0050d96c(param_1,&local_e0);
          if (((ulong)local_e0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_d0);
          }
          if ((uVar12 & 1) == 0) goto LAB_0050b8ac;
          local_e0 = (undefined8 *******)CONCAT53(local_e0._3_5_,0x3a02);
          bVar4 = *(byte *)(param_1 + 6);
          uVar24 = (ulong)(bVar4 >> 1);
          uVar12 = uVar24;
          if ((bVar4 & 1) != 0) {
            uVar12 = param_1[7];
          }
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)((long)param_1 + 0x31) == ':') {
                pcVar22 = (char *)((long)param_1 + 0x32);
                pcVar29 = (char *)((ulong)&local_e0 | 2);
                do {
                  uVar24 = uVar24 - 1;
                  if (uVar24 == 0) goto LAB_0050cad4;
                  cVar33 = *pcVar29;
                  cVar34 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  pcVar29 = pcVar29 + 1;
                } while (cVar34 == cVar33);
              }
            }
            else if (*(char *)param_1[8] == ':') {
LAB_0050cad4:
                    /* try { // try from 0050cad4 to 0050cadb has its CatchHandler @ 0050d2a0 */
              FUN_004fcda0(plVar17);
            }
          }
          local_e0 = (undefined8 *******)0x0;
          uStack_d8 = 0;
          local_d0 = (void *)0x0;
          plVar17 = (long *)param_1[1];
          if (plVar17 == (long *)0x0) {
            ppppppuVar21 = (undefined8 ******)strlen(PTR_s_type_googleapis_com__047cc210);
            ppppppuVar15 = ppppppuStack_b8;
            pppppppuVar8 = local_c0;
            bVar4 = (byte)local_c0;
            if (((ulong)local_c0 & 1) == 0) {
              ppppppuVar15 = (undefined8 ******)(ulong)((byte)local_c0 >> 1);
              if (ppppppuVar21 == ppppppuVar15) {
                if (ppppppuVar21 == (undefined8 ******)0xffffffffffffffff) goto LAB_0050d228;
                pcVar22 = (char *)((ulong)&local_c0 | 1);
                goto LAB_0050cbf0;
              }
              ppppppuVar21 = (undefined8 ******)strlen(PTR_s_type_googleprod_com__047cdb70);
LAB_0050ce7c:
              if (ppppppuVar21 == ppppppuVar15) {
                pcVar22 = (char *)((ulong)&local_c0 | 1);
LAB_0050cef8:
                if ((ppppppuVar15 == (undefined8 ******)0x0) ||
                   (iVar9 = memcmp(pcVar22,PTR_s_type_googleprod_com__047cdb70,(size_t)ppppppuVar15)
                   , iVar9 == 0)) goto LAB_0050cf10;
              }
            }
            else {
              if (ppppppuVar21 == ppppppuStack_b8) {
                if (ppppppuVar21 == (undefined8 ******)0xffffffffffffffff) {
LAB_0050d228:
                    /* try { // try from 0050d228 to 0050d22f has its CatchHandler @ 0050d244 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_out_of_range();
                }
                pcVar22 = local_b0;
LAB_0050cbf0:
                if ((ppppppuVar21 != (undefined8 ******)0x0) &&
                   (iVar9 = memcmp(pcVar22,PTR_s_type_googleapis_com__047cc210,(size_t)ppppppuVar21)
                   , iVar9 != 0)) {
                  ppppppuVar21 = (undefined8 ******)strlen(PTR_s_type_googleprod_com__047cdb70);
                  if (((ulong)pppppppuVar8 & 1) == 0) {
                    ppppppuVar15 = (undefined8 ******)(ulong)(bVar4 >> 1);
                    goto LAB_0050ce7c;
                  }
                  ppppppuVar15 = ppppppuStack_b8;
                  goto LAB_0050cee4;
                }
LAB_0050cf10:
                    /* try { // try from 0050cf18 to 0050cf8f has its CatchHandler @ 0050d5e4 */
                lVar20 = (**(code **)(*param_2 + 0x98))(param_2);
                lVar20 = FUN_004a49b8(*(undefined8 *)(*(long *)(lVar20 + 0x10) + 0x10),&local_a0);
                goto LAB_0050cf34;
              }
              ppppppuVar21 = (undefined8 ******)strlen(PTR_s_type_googleprod_com__047cdb70);
LAB_0050cee4:
              if (ppppppuVar21 == ppppppuVar15) {
                if (ppppppuVar15 == (undefined8 ******)0xffffffffffffffff) {
                    /* try { // try from 0050d230 to 0050d237 has its CatchHandler @ 0050d240 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_out_of_range();
                }
                pcVar22 = local_b0;
                goto LAB_0050cef8;
              }
            }
LAB_0050d004:
                    /* try { // try from 0050d004 to 0050d017 has its CatchHandler @ 0050d378 */
            FUN_004a8ec0(local_138,"Could not find type \"",&local_c0);
            ppppppuVar15 = (undefined8 ******)((ulong)local_a0 >> 1 & 0x7f);
            pbVar28 = (byte *)((ulong)&local_a0 | 1);
            if (((ulong)local_a0 & 1) != 0) {
              ppppppuVar15 = ppppppuStack_98;
              pbVar28 = local_90;
            }
                    /* try { // try from 0050d038 to 0050d03f has its CatchHandler @ 0050d358 */
            puVar16 = (undefined8 *)FUN_0021d540(local_138,pbVar28,ppppppuVar15);
            uStack_118 = puVar16[1];
            local_120 = (undefined8 ******)*puVar16;
            local_110 = puVar16[2];
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
                    /* try { // try from 0050d058 to 0050d06b has its CatchHandler @ 0050d330 */
            puVar16 = (undefined8 *)
                      FUN_0021d540(&local_120,"\" stored in google.protobuf.Any.",0x20);
            uStack_f8 = puVar16[1];
            local_100 = (undefined8 ******)*puVar16;
            local_f0 = (char *)puVar16[2];
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
            plVar17 = (long *)*param_1;
            *(undefined1 *)(param_1 + 0x1e) = 1;
            if (plVar17 != (long *)0x0) {
                    /* try { // try from 0050d0a0 to 0050d0a7 has its CatchHandler @ 0050d2e0 */
              (**(code **)(*plVar17 + 0x10))
                        (plVar17,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_100);
            }
            if (((ulong)local_100 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_f0);
            }
            if (((ulong)local_120 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_110);
            }
            if (((byte)local_138[0] & 1) != 0) {
LAB_0050d0f8:
              FUN_0049e790(PTR_LAB_047cba48,local_128);
            }
LAB_0050d104:
            uVar10 = 0;
          }
          else {
                    /* try { // try from 0050caf4 to 0050cb07 has its CatchHandler @ 0050d5e4 */
            lVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,param_2,&local_c0,&local_a0);
LAB_0050cf34:
            if (lVar20 == 0) goto LAB_0050d004;
            uVar12 = FUN_0050dc38(param_1,lVar20,&local_e0);
            if ((uVar12 & 1) == 0) goto LAB_0050d104;
            if (((int)param_1[0x1c] == 1) &&
               (((*(int *)(local_80 + 0x3c) != 3 &&
                 (uVar12 = FUN_004f4514(extraout_x1,param_2), (uVar12 & 1) != 0)) ||
                ((*(int *)(local_88 + 0x3c) != 3 &&
                 (uVar12 = FUN_004f4514(extraout_x1,param_2), (uVar12 & 1) != 0)))))) {
              local_f0 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
              uVar6 = s_Non_repeated_Any_specified_multi_03c33d81._16_8_;
              uVar5 = s_Non_repeated_Any_specified_multi_03c33d81._0_8_;
              uStack_f8 = _UNK_03cab5a8;
              local_100 = _DAT_03cab5a0;
              uVar19 = CONCAT62(s_Non_repeated_Any_specified_multi_03c33d81._26_6_,
                                s_Non_repeated_Any_specified_multi_03c33d81._24_2_);
              *(undefined8 *)(local_f0 + 8) = s_Non_repeated_Any_specified_multi_03c33d81._8_8_;
              *(undefined8 *)local_f0 = uVar5;
              *(undefined8 *)(local_f0 + 0x18) = uVar19;
              *(undefined8 *)(local_f0 + 0x10) = uVar6;
              uVar19 = CONCAT26(s_Non_repeated_Any_specified_multi_03c33d81._32_2_,
                                s_Non_repeated_Any_specified_multi_03c33d81._26_6_);
              *(undefined8 *)(local_f0 + 0x22) = s_Non_repeated_Any_specified_multi_03c33d81._34_8_;
              *(undefined8 *)(local_f0 + 0x1a) = uVar19;
              local_f0[0x2a] = '\0';
              plVar17 = (long *)*param_1;
              *(undefined1 *)(param_1 + 0x1e) = 1;
                    /* try { // try from 0050cfec to 0050cff3 has its CatchHandler @ 0050d250 */
              if ((plVar17 != (long *)0x0) &&
                 ((**(code **)(*plVar17 + 0x10))
                            (plVar17,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),
                             &local_100), ((ulong)local_100 & 1) == 0)) goto LAB_0050d104;
              local_128 = local_f0;
              goto LAB_0050d0f8;
            }
                    /* try { // try from 0050d128 to 0050d137 has its CatchHandler @ 0050d5e4 */
            FUN_004e94c0(local_150,&local_c0,&local_a0);
                    /* try { // try from 0050d138 to 0050d14b has its CatchHandler @ 0050d2b8 */
            FUN_004f3c00(extraout_x1,param_2,local_80,local_150);
            if ((local_150[0] & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_140);
            }
            __src = local_d0;
            uVar12 = uStack_d8;
            if (((ulong)local_e0 & 1) == 0) {
              local_160 = local_d0;
              uStack_168 = uStack_d8;
              local_170 = local_e0;
            }
            else {
              if (uStack_d8 < 0x17) {
                __dest = (void *)((ulong)&local_170 | 1);
                local_170 = (undefined8 *******)
                            CONCAT71(local_170._1_7_,(char)((int)uStack_d8 << 1));
              }
              else {
                if (0xffffffffffffffef < uStack_d8) {
                    /* try { // try from 0050d238 to 0050d23f has its CatchHandler @ 0050d5e4 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar24 = uStack_d8 + 0x10 & 0xfffffffffffffff0;
                __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar24);
                local_170 = (undefined8 *******)(uVar24 | 1);
                uStack_168 = uVar12;
                local_160 = __dest;
              }
              memcpy(__dest,__src,uVar12 + 1);
            }
                    /* try { // try from 0050d1dc to 0050d1ef has its CatchHandler @ 0050d2a4 */
            FUN_004f3c00(extraout_x1,param_2,local_88,&local_170);
            if (((ulong)local_170 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_160);
            }
            uVar10 = 1;
          }
          if (((ulong)local_e0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_d0);
          }
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_b0);
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_90);
        }
        goto LAB_0050ca84;
      }
    }
  }
  local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x5b02);
  bVar4 = *(byte *)(param_1 + 6);
  uVar24 = (ulong)(bVar4 >> 1);
  uVar12 = uVar24;
  if ((bVar4 & 1) != 0) {
    uVar12 = param_1[7];
  }
  if (uVar12 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x31) == '[') {
        pcVar22 = (char *)((long)param_1 + 0x32);
        pcVar29 = (char *)((ulong)&local_a0 | 2);
        do {
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_0050b7b0;
          cVar33 = *pcVar29;
          cVar34 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar29 = pcVar29 + 1;
        } while (cVar34 == cVar33);
      }
      goto LAB_0050b820;
    }
    if (*(char *)param_1[8] != '[') goto LAB_0050b820;
LAB_0050b7b0:
                    /* try { // try from 0050b7b0 to 0050b7b7 has its CatchHandler @ 0050d6d0 */
    FUN_004fcda0(plVar17);
                    /* try { // try from 0050b7b8 to 0050b7c3 has its CatchHandler @ 0050d6d8 */
    uVar12 = FUN_0050df60(param_1,&local_78);
    if ((uVar12 & 1) == 0) goto LAB_0050ca80;
    local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x5d02);
                    /* try { // try from 0050b7d4 to 0050b7df has its CatchHandler @ 0050d670 */
    uVar12 = FUN_0050d96c(param_1,&local_a0);
    if (((ulong)local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
    if ((uVar12 & 1) == 0) goto LAB_0050ca80;
    plVar14 = (long *)param_1[1];
    if (plVar14 == (long *)0x0) {
                    /* try { // try from 0050c078 to 0050c0c3 has its CatchHandler @ 0050d6d8 */
      lVar13 = (**(code **)(*param_2 + 0x98))(param_2);
      ppppppuVar15 = (undefined8 ******)
                     FUN_004a4f8c(*(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x10),lVar13,&local_78)
      ;
    }
    else {
                    /* try { // try from 0050b810 to 0050b82b has its CatchHandler @ 0050d6d8 */
      ppppppuVar15 = (undefined8 ******)(**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_78);
    }
    if (ppppppuVar15 != (undefined8 ******)0x0) goto LAB_0050c09c;
    if ((*(char *)((long)param_1 + 0xe5) == '\0') && (*(char *)((long)param_1 + 0xe6) == '\0')) {
                    /* try { // try from 0050cda0 to 0050cdb3 has its CatchHandler @ 0050d298 */
      FUN_004a8ec0(&local_100,"Extension \"",&local_78);
                    /* try { // try from 0050cdb4 to 0050cdc7 has its CatchHandler @ 0050d288 */
      puVar16 = (undefined8 *)
                FUN_0021d540(&local_100,"\" is not defined or is not an extension of \"",0x2c);
      uStack_d8 = puVar16[1];
      local_e0 = (undefined8 *******)*puVar16;
      local_d0 = (void *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      pbVar26 = *(byte **)(lVar11 + 8);
      uVar12 = *(ulong *)(pbVar26 + 8);
      pbVar28 = *(byte **)(pbVar26 + 0x10);
      if ((*pbVar26 & 1) == 0) {
        pbVar28 = pbVar26 + 1;
        uVar12 = (ulong)(*pbVar26 >> 1);
      }
                    /* try { // try from 0050cdfc to 0050ce03 has its CatchHandler @ 0050d278 */
      puVar16 = (undefined8 *)FUN_0021d540(&local_e0,pbVar28,uVar12);
      ppppppuStack_b8 = (undefined8 ******)puVar16[1];
      local_c0 = (undefined8 *******)*puVar16;
      local_b0 = (char *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
                    /* try { // try from 0050ce1c to 0050ce2f has its CatchHandler @ 0050d268 */
      puVar16 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03bfbda2,2);
      ppppppuStack_98 = (undefined8 ******)puVar16[1];
      local_a0 = (undefined8 *******)*puVar16;
      local_90 = (byte *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      plVar17 = (long *)*param_1;
      *(undefined1 *)(param_1 + 0x1e) = 1;
      if (plVar17 != (long *)0x0) {
                    /* try { // try from 0050ce64 to 0050ce6b has its CatchHandler @ 0050d264 */
        (**(code **)(*plVar17 + 0x10))
                  (plVar17,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_a0);
      }
      goto LAB_0050c04c;
    }
                    /* try { // try from 0050c6b0 to 0050c6c3 has its CatchHandler @ 0050d3b4 */
    FUN_004a8ec0(&local_100,"Ignoring extension \"",&local_78);
                    /* try { // try from 0050c6c4 to 0050c6d7 has its CatchHandler @ 0050d3a4 */
    puVar16 = (undefined8 *)
              FUN_0021d540(&local_100,"\" which is not defined or is not an extension of \"",0x32);
    uStack_d8 = puVar16[1];
    local_e0 = (undefined8 *******)*puVar16;
    local_d0 = (void *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    pbVar26 = *(byte **)(lVar11 + 8);
    uVar12 = *(ulong *)(pbVar26 + 8);
    pbVar28 = *(byte **)(pbVar26 + 0x10);
    if ((*pbVar26 & 1) == 0) {
      pbVar28 = pbVar26 + 1;
      uVar12 = (ulong)(*pbVar26 >> 1);
    }
                    /* try { // try from 0050c70c to 0050c713 has its CatchHandler @ 0050d394 */
    puVar16 = (undefined8 *)FUN_0021d540(&local_e0,pbVar28,uVar12);
    ppppppuStack_b8 = (undefined8 ******)puVar16[1];
    local_c0 = (undefined8 *******)*puVar16;
    local_b0 = (char *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
                    /* try { // try from 0050c72c to 0050c73f has its CatchHandler @ 0050d384 */
    puVar16 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03bfbda2,2);
    ppppppuStack_98 = (undefined8 ******)puVar16[1];
    local_a0 = (undefined8 *******)*puVar16;
    local_90 = (byte *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    plVar14 = (long *)*param_1;
    if (plVar14 != (long *)0x0) {
                    /* try { // try from 0050c76c to 0050c773 has its CatchHandler @ 0050d32c */
      (**(code **)(*plVar14 + 0x18))
                (plVar14,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_a0);
    }
LAB_0050c774:
    if (((ulong)local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
    if (((ulong)local_c0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_b0);
    }
    if (((ulong)local_e0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_d0);
    }
    if (((ulong)local_100 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
LAB_0050c7a4:
    local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x3a02);
    bVar4 = *(byte *)(param_1 + 6);
    uVar24 = (ulong)(bVar4 >> 1);
    uVar12 = uVar24;
    if ((bVar4 & 1) != 0) {
      uVar12 = param_1[7];
    }
    if (uVar12 == 1) {
      if ((bVar4 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x31) == ':') {
          pcVar22 = (char *)((long)param_1 + 0x32);
          pcVar29 = (char *)((ulong)&local_a0 | 2);
          do {
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) goto LAB_0050c81c;
            cVar33 = *pcVar29;
            cVar34 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar29 = pcVar29 + 1;
          } while (cVar34 == cVar33);
        }
      }
      else if (*(char *)param_1[8] == ':') {
LAB_0050c81c:
                    /* try { // try from 0050c81c to 0050c823 has its CatchHandler @ 0050d41c */
        FUN_004fcda0(plVar17);
        local_c0 = (undefined8 *******)CONCAT53(local_c0._3_5_,0x7b02);
        bVar4 = *(byte *)(param_1 + 6);
        uVar24 = (ulong)(bVar4 >> 1);
        uVar12 = uVar24;
        if ((bVar4 & 1) != 0) {
          uVar12 = param_1[7];
        }
        if (uVar12 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x31) == '{') {
              pcVar22 = (char *)((long)param_1 + 0x32);
              pcVar29 = (char *)((ulong)&local_c0 | 2);
              uVar30 = uVar24;
              do {
                uVar30 = uVar30 - 1;
                if (uVar30 == 0) goto LAB_0050cbbc;
                cVar33 = *pcVar29;
                cVar34 = *pcVar22;
                pcVar22 = pcVar22 + 1;
                pcVar29 = pcVar29 + 1;
              } while (cVar34 == cVar33);
            }
          }
          else if (*(char *)param_1[8] == '{') goto LAB_0050cbbc;
        }
        uVar30 = (ulong)local_e0 >> 0x10;
        local_e0 = (undefined8 *******)CONCAT62((uint6)uVar30 & 0xffffffffff00,0x3c02);
        if (uVar12 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x31) == '<') {
              pcVar22 = (char *)((long)param_1 + 0x32);
              pcVar29 = (char *)((ulong)&local_e0 | 2);
              do {
                uVar24 = uVar24 - 1;
                if (uVar24 == 0) goto LAB_0050cbbc;
                cVar33 = *pcVar29;
                cVar34 = *pcVar22;
                pcVar22 = pcVar22 + 1;
                pcVar29 = pcVar29 + 1;
              } while (cVar34 == cVar33);
            }
          }
          else if (*(char *)param_1[8] == '<') goto LAB_0050cbbc;
        }
        uVar10 = FUN_0050e3c0(param_1);
        goto LAB_0050ca84;
      }
    }
LAB_0050cbbc:
                    /* try { // try from 0050cbbc to 0050cbd3 has its CatchHandler @ 0050d6d8 */
    uVar10 = FUN_0050ec10(param_1);
    goto LAB_0050ca84;
  }
LAB_0050b820:
  uVar12 = FUN_0050e12c(param_1,&local_78);
  if ((uVar12 & 1) == 0) goto LAB_0050ca80;
                    /* try { // try from 0050b838 to 0050b933 has its CatchHandler @ 0050d6d4 */
  if (((char)param_1[0x1d] == '\0') ||
     (uVar12 = FUN_00533b00(&local_78,local_138), (uVar12 & 1) == 0)) {
    ppppppuVar15 = (undefined8 ******)FUN_004a5348(lVar11,&local_78);
    pbVar28 = local_68;
    ppppppuVar21 = ppppppuStack_70;
    if (ppppppuVar15 != (undefined8 ******)0x0) {
LAB_0050bb58:
      pppppuVar32 = ppppppuVar15[6];
      if (pppppuVar32 != (undefined8 *****)0x0) {
        local_e0 = (undefined8 *******)PTR_LAB_047cd728;
        local_100 = ppppppuVar15;
        if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
          local_a0 = &local_e0;
          ppppppuStack_98 = &local_100;
          local_c0 = &local_a0;
                    /* try { // try from 0050bb90 to 0050bbb3 has its CatchHandler @ 0050d6d4 */
          std::__call_once((ulong *)pppppuVar32,&local_c0,(_func_void_void_ptr *)&LAB_005114c0);
        }
      }
      if (*(int *)(ppppppuVar15 + 7) == 10) {
        puVar16 = (undefined8 *)FUN_004a5124(ppppppuVar15);
        pbVar28 = (byte *)*puVar16;
        bVar4 = *pbVar28;
        ppppppuVar25 = (undefined8 ******)(ulong)(bVar4 >> 1);
        ppppppuVar21 = ppppppuVar25;
        if ((bVar4 & 1) != 0) {
          ppppppuVar21 = *(undefined8 *******)(pbVar28 + 8);
        }
        ppppppuVar1 = (undefined8 ******)((ulong)local_78 >> 1 & 0x7f);
        if (((ulong)local_78 & 1) != 0) {
          ppppppuVar1 = ppppppuStack_70;
        }
        if (ppppppuVar21 != ppppppuVar1) goto LAB_0050bc70;
        pbVar26 = *(byte **)(pbVar28 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar26 = pbVar28 + 1;
        }
        pbVar23 = (byte *)((ulong)&local_78 | 1);
        if (((ulong)local_78 & 1) != 0) {
          pbVar23 = local_68;
        }
        if ((bVar4 & 1) == 0) {
          if (ppppppuVar21 != (undefined8 ******)0x0) {
            do {
              pbVar28 = pbVar28 + 1;
              if (*pbVar28 != *pbVar23) goto LAB_0050bc70;
              ppppppuVar25 = (undefined8 ******)((long)ppppppuVar25 + -1);
              pbVar23 = pbVar23 + 1;
            } while (ppppppuVar25 != (undefined8 ******)0x0);
            if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_0050bc70;
          }
        }
        else if ((ppppppuVar21 != (undefined8 ******)0x0) &&
                (iVar9 = memcmp(pbVar26,pbVar23,(size_t)ppppppuVar21), iVar9 != 0))
        goto LAB_0050bc70;
      }
      goto LAB_0050c09c;
    }
    if (((ulong)local_78 & 1) == 0) {
      local_90 = local_68;
      ppppppuStack_98 = ppppppuStack_70;
      local_a0 = local_78;
    }
    else {
      if (ppppppuStack_70 < (undefined8 ******)0x17) {
        pbVar26 = (byte *)((ulong)&local_a0 | 1);
        local_a0 = (undefined8 *******)CONCAT71(local_a0._1_7_,(char)((int)ppppppuStack_70 << 1));
      }
      else {
        if ((undefined8 ******)0xffffffffffffffef < ppppppuStack_70) {
                    /* try { // try from 0050d218 to 0050d21f has its CatchHandler @ 0050d24c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        ppppppuVar15 = ppppppuStack_70 + 2;
        pbVar26 = (byte *)FUN_0049e770(PTR_FUN_047cba38,(ulong)ppppppuVar15 & 0xfffffffffffffff0);
        local_a0 = (undefined8 *******)((ulong)ppppppuVar15 & 0xfffffffffffffff0 | 1);
        ppppppuStack_98 = ppppppuVar21;
        local_90 = pbVar26;
      }
      memcpy(pbVar26,pbVar28,(long)ppppppuVar21 + 1);
    }
    pbVar28 = (byte *)((ulong)&local_a0 | 1);
    pbVar26 = (byte *)((ulong)&local_a0 | 1) + ((ulong)local_a0 >> 1 & 0x7f);
    if (((ulong)local_a0 & 1) != 0) {
      pbVar28 = local_90;
      pbVar26 = local_90 + (long)ppppppuStack_98;
    }
    if (pbVar28 != pbVar26) {
      uVar12 = (long)pbVar26 - (long)pbVar28;
      pbVar23 = pbVar28;
      if (7 < uVar12) {
        uVar30 = uVar12 & 0xfffffffffffffff8;
        pbVar23 = pbVar28 + uVar30;
        pbVar28 = pbVar28 + 3;
        uVar24 = uVar30;
        do {
          uVar19 = *(undefined8 *)(pbVar28 + -3);
          cVar33 = (char)((ulong)uVar19 >> 8);
          cVar34 = (char)((ulong)uVar19 >> 0x10);
          cVar35 = (char)((ulong)uVar19 >> 0x18);
          cVar36 = (char)((ulong)uVar19 >> 0x20);
          cVar37 = (char)((ulong)uVar19 >> 0x28);
          cVar38 = (char)((ulong)uVar19 >> 0x30);
          cVar39 = (char)((ulong)uVar19 >> 0x38);
          if ((byte)((char)uVar19 + 0xbfU) < 0x1a) {
            pbVar28[-3] = (char)uVar19 + 0x20;
          }
          if ((byte)(cVar33 + 0xbfU) < 0x1a) {
            pbVar28[-2] = cVar33 + 0x20;
          }
          if ((byte)(cVar34 + 0xbfU) < 0x1a) {
            pbVar28[-1] = cVar34 + 0x20;
          }
          if ((byte)(cVar35 + 0xbfU) < 0x1a) {
            *pbVar28 = cVar35 + 0x20;
          }
          if ((byte)(cVar36 + 0xbfU) < 0x1a) {
            pbVar28[1] = cVar36 + 0x20;
          }
          if ((byte)(cVar37 + 0xbfU) < 0x1a) {
            pbVar28[2] = cVar37 + 0x20;
          }
          if ((byte)(cVar38 + 0xbfU) < 0x1a) {
            pbVar28[3] = cVar38 + 0x20;
          }
          if ((byte)(cVar39 + 0xbfU) < 0x1a) {
            pbVar28[4] = cVar39 + 0x20;
          }
          uVar24 = uVar24 - 8;
          pbVar28 = pbVar28 + 8;
        } while (uVar24 != 0);
        if (uVar12 == uVar30) goto LAB_0050bad4;
      }
      do {
        if (*pbVar23 - 0x41 < 0x1a) {
          *pbVar23 = *pbVar23 + 0x20;
        }
        pbVar23 = pbVar23 + 1;
      } while (pbVar26 != pbVar23);
    }
LAB_0050bad4:
                    /* try { // try from 0050bad4 to 0050bb2f has its CatchHandler @ 0050d6bc */
    ppppppuVar15 = (undefined8 ******)FUN_004a5348(lVar11,&local_a0);
    if (ppppppuVar15 != (undefined8 ******)0x0) {
      pppppuVar32 = ppppppuVar15[6];
      if (pppppuVar32 != (undefined8 *****)0x0) {
        local_100 = (undefined8 ******)PTR_LAB_047cd728;
        local_120 = ppppppuVar15;
        if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
          local_c0 = &local_100;
          ppppppuStack_b8 = &local_120;
          local_e0 = &local_c0;
          std::__call_once((ulong *)pppppuVar32,&local_e0,(_func_void_void_ptr *)&LAB_005114c0);
        }
      }
      if (*(int *)(ppppppuVar15 + 7) != 10) {
        ppppppuVar15 = (undefined8 ******)0x0;
      }
    }
    if (((ulong)local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
    if (ppppppuVar15 != (undefined8 ******)0x0) goto LAB_0050bb58;
LAB_0050bc70:
    pbVar28 = local_68;
    ppppppuVar15 = ppppppuStack_70;
    if (*(char *)((long)param_1 + 0xe4) != '\0') {
      if (((ulong)local_78 & 1) == 0) {
        local_90 = local_68;
        ppppppuStack_98 = ppppppuStack_70;
        local_a0 = local_78;
      }
      else {
        if (ppppppuStack_70 < (undefined8 ******)0x17) {
          pbVar26 = (byte *)((ulong)&local_a0 | 1);
          local_a0 = (undefined8 *******)CONCAT71(local_a0._1_7_,(char)((int)ppppppuStack_70 << 1));
        }
        else {
          if ((undefined8 ******)0xffffffffffffffef < ppppppuStack_70) {
                    /* try { // try from 0050d220 to 0050d227 has its CatchHandler @ 0050d248 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          ppppppuVar21 = ppppppuStack_70 + 2;
          pbVar26 = (byte *)FUN_0049e770(PTR_FUN_047cba38,(ulong)ppppppuVar21 & 0xfffffffffffffff0);
          local_a0 = (undefined8 *******)((ulong)ppppppuVar21 & 0xfffffffffffffff0 | 1);
          ppppppuStack_98 = ppppppuVar15;
          local_90 = pbVar26;
        }
        memcpy(pbVar26,pbVar28,(long)ppppppuVar15 + 1);
      }
      pbVar28 = (byte *)((ulong)&local_a0 | 1);
      pbVar26 = (byte *)((ulong)&local_a0 | 1) + ((ulong)local_a0 >> 1 & 0x7f);
      if (((ulong)local_a0 & 1) != 0) {
        pbVar28 = local_90;
        pbVar26 = local_90 + (long)ppppppuStack_98;
      }
      if (pbVar28 != pbVar26) {
        uVar12 = (long)pbVar26 - (long)pbVar28;
        pbVar23 = pbVar28;
        if (7 < uVar12) {
          uVar30 = uVar12 & 0xfffffffffffffff8;
          pbVar23 = pbVar28 + uVar30;
          pbVar28 = pbVar28 + 3;
          uVar24 = uVar30;
          do {
            uVar19 = *(undefined8 *)(pbVar28 + -3);
            cVar33 = (char)((ulong)uVar19 >> 8);
            cVar34 = (char)((ulong)uVar19 >> 0x10);
            cVar35 = (char)((ulong)uVar19 >> 0x18);
            cVar36 = (char)((ulong)uVar19 >> 0x20);
            cVar37 = (char)((ulong)uVar19 >> 0x28);
            cVar38 = (char)((ulong)uVar19 >> 0x30);
            cVar39 = (char)((ulong)uVar19 >> 0x38);
            if ((byte)((char)uVar19 + 0xbfU) < 0x1a) {
              pbVar28[-3] = (char)uVar19 + 0x20;
            }
            if ((byte)(cVar33 + 0xbfU) < 0x1a) {
              pbVar28[-2] = cVar33 + 0x20;
            }
            if ((byte)(cVar34 + 0xbfU) < 0x1a) {
              pbVar28[-1] = cVar34 + 0x20;
            }
            if ((byte)(cVar35 + 0xbfU) < 0x1a) {
              *pbVar28 = cVar35 + 0x20;
            }
            if ((byte)(cVar36 + 0xbfU) < 0x1a) {
              pbVar28[1] = cVar36 + 0x20;
            }
            if ((byte)(cVar37 + 0xbfU) < 0x1a) {
              pbVar28[2] = cVar37 + 0x20;
            }
            if ((byte)(cVar38 + 0xbfU) < 0x1a) {
              pbVar28[3] = cVar38 + 0x20;
            }
            if ((byte)(cVar39 + 0xbfU) < 0x1a) {
              pbVar28[4] = cVar39 + 0x20;
            }
            uVar24 = uVar24 - 8;
            pbVar28 = pbVar28 + 8;
          } while (uVar24 != 0);
          if (uVar12 == uVar30) goto LAB_0050be44;
        }
        do {
          if (*pbVar23 - 0x41 < 0x1a) {
            *pbVar23 = *pbVar23 + 0x20;
          }
          pbVar23 = pbVar23 + 1;
        } while (pbVar26 != pbVar23);
      }
LAB_0050be44:
                    /* try { // try from 0050be44 to 0050be4f has its CatchHandler @ 0050d650 */
      ppppppuVar15 = (undefined8 ******)FUN_004a52ac(lVar11,&local_a0);
      if (((ulong)local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_90);
      }
      if (ppppppuVar15 != (undefined8 ******)0x0) goto LAB_0050c09c;
    }
                    /* try { // try from 0050be70 to 0050be7b has its CatchHandler @ 0050d6d4 */
    uVar12 = FUN_0050e228(lVar11,&local_78);
    if ((uVar12 & 1) != 0) goto LAB_0050c7a4;
LAB_0050be80:
    if (*(char *)((long)param_1 + 0xe5) != '\0') {
                    /* try { // try from 0050be8c to 0050be9b has its CatchHandler @ 0050d5e0 */
      FUN_004a8ec0(&local_100,"Message type \"",*(undefined8 *)(lVar11 + 8));
                    /* try { // try from 0050be9c to 0050beaf has its CatchHandler @ 0050d5cc */
      puVar16 = (undefined8 *)FUN_0021d540(&local_100,"\" has no field named \"",0x16);
      uStack_d8 = puVar16[1];
      local_e0 = (undefined8 *******)*puVar16;
      local_d0 = (void *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      ppppppuVar15 = (undefined8 ******)((ulong)local_78 >> 1 & 0x7f);
      pbVar28 = (byte *)((ulong)&local_78 | 1);
      if (((ulong)local_78 & 1) != 0) {
        ppppppuVar15 = ppppppuStack_70;
        pbVar28 = local_68;
      }
                    /* try { // try from 0050bee8 to 0050beef has its CatchHandler @ 0050d5bc */
      puVar16 = (undefined8 *)FUN_0021d540(&local_e0,pbVar28,ppppppuVar15);
      ppppppuStack_b8 = (undefined8 ******)puVar16[1];
      local_c0 = (undefined8 *******)*puVar16;
      local_b0 = (char *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
                    /* try { // try from 0050bf08 to 0050bf1b has its CatchHandler @ 0050d57c */
      puVar16 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03bfbda2,2);
      ppppppuStack_98 = (undefined8 ******)puVar16[1];
      local_a0 = (undefined8 *******)*puVar16;
      local_90 = (byte *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      plVar14 = (long *)*param_1;
      if (plVar14 != (long *)0x0) {
                    /* try { // try from 0050bf48 to 0050bf4f has its CatchHandler @ 0050d454 */
        (**(code **)(*plVar14 + 0x18))
                  (plVar14,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_a0);
      }
      goto LAB_0050c774;
    }
                    /* try { // try from 0050bf80 to 0050bf8f has its CatchHandler @ 0050d450 */
    FUN_004a8ec0(&local_100,"Message type \"",*(undefined8 *)(lVar11 + 8));
                    /* try { // try from 0050bf90 to 0050bfa3 has its CatchHandler @ 0050d440 */
    puVar16 = (undefined8 *)FUN_0021d540(&local_100,"\" has no field named \"",0x16);
    uStack_d8 = puVar16[1];
    local_e0 = (undefined8 *******)*puVar16;
    local_d0 = (void *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    ppppppuVar15 = (undefined8 ******)((ulong)local_78 >> 1 & 0x7f);
    pbVar28 = (byte *)((ulong)&local_78 | 1);
    if (((ulong)local_78 & 1) != 0) {
      ppppppuVar15 = ppppppuStack_70;
      pbVar28 = local_68;
    }
                    /* try { // try from 0050bfdc to 0050bfe3 has its CatchHandler @ 0050d430 */
    puVar16 = (undefined8 *)FUN_0021d540(&local_e0,pbVar28,ppppppuVar15);
    ppppppuStack_b8 = (undefined8 ******)puVar16[1];
    local_c0 = (undefined8 *******)*puVar16;
    local_b0 = (char *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
                    /* try { // try from 0050bffc to 0050c00f has its CatchHandler @ 0050d420 */
    puVar16 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03bfbda2,2);
    ppppppuStack_98 = (undefined8 ******)puVar16[1];
    local_a0 = (undefined8 *******)*puVar16;
    local_90 = (byte *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    plVar17 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    if (plVar17 != (long *)0x0) {
                    /* try { // try from 0050c044 to 0050c04b has its CatchHandler @ 0050d3bc */
      (**(code **)(*plVar17 + 0x10))
                (plVar17,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_a0);
    }
LAB_0050c04c:
    if (((ulong)local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
    if (((ulong)local_c0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_b0);
    }
    if (((ulong)local_e0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_d0);
    }
    if (((ulong)local_100 & 1) == 0) goto LAB_0050ca80;
    local_128 = local_f0;
LAB_0050ca74:
    FUN_0049e790(PTR_LAB_047cba48,local_128);
  }
  else {
    lVar13 = FUN_004a5c48(lVar11,local_138[0]);
    if (lVar13 == 0) {
      lVar13 = FUN_004a5c94(lVar11,local_138[0]);
      if (lVar13 == 0) {
        ppppppuVar15 = (undefined8 ******)FUN_004a5180(lVar11,local_138[0]);
        goto LAB_0050b934;
      }
      goto LAB_0050c7a4;
    }
    plVar14 = (long *)param_1[1];
    if (plVar14 == (long *)0x0) {
      ppppppuVar15 = (undefined8 ******)
                     FUN_004a49dc(*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10),lVar11,
                                  local_138[0]);
    }
    else {
      ppppppuVar15 = (undefined8 ******)(**(code **)(*plVar14 + 0x18))(plVar14,lVar11);
    }
LAB_0050b934:
    if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_0050be80;
LAB_0050c09c:
    if ((int)param_1[0x1c] == 1) {
      if ((*(int *)((long)ppppppuVar15 + 0x3c) == 3) ||
         (uVar12 = FUN_004f4514(extraout_x1,param_2,ppppppuVar15), (uVar12 & 1) == 0)) {
        pppppuVar32 = ppppppuVar15[0xb];
                    /* try { // try from 0050c15c to 0050c16b has its CatchHandler @ 0050d64c */
        if ((pppppuVar32 == (undefined8 *****)0x0) ||
           (uVar12 = FUN_004f8ea4(extraout_x1,param_2,pppppuVar32), (uVar12 & 1) == 0))
        goto LAB_0050c2ec;
                    /* try { // try from 0050c170 to 0050c17f has its CatchHandler @ 0050d570 */
        puVar16 = (undefined8 *)FUN_004f872c(extraout_x1,param_2,pppppuVar32);
                    /* try { // try from 0050c184 to 0050c197 has its CatchHandler @ 0050d56c */
        FUN_004a8ec0(local_138,"Field \"",&local_78);
                    /* try { // try from 0050c198 to 0050c1ab has its CatchHandler @ 0050d558 */
        puVar18 = (undefined8 *)FUN_0021d540(local_138,"\" is specified along with field \"",0x21);
        uStack_118 = puVar18[1];
        local_120 = (undefined8 ******)*puVar18;
        local_110 = puVar18[2];
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        pbVar26 = (byte *)*puVar16;
        uVar12 = *(ulong *)(pbVar26 + 8);
        pbVar28 = *(byte **)(pbVar26 + 0x10);
        if ((*pbVar26 & 1) == 0) {
          pbVar28 = pbVar26 + 1;
          uVar12 = (ulong)(*pbVar26 >> 1);
        }
                    /* try { // try from 0050c1e0 to 0050c1e7 has its CatchHandler @ 0050d548 */
        puVar16 = (undefined8 *)FUN_0021d540(&local_120,pbVar28,uVar12);
        uStack_f8 = puVar16[1];
        local_100 = (undefined8 ******)*puVar16;
        local_f0 = (char *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
                    /* try { // try from 0050c200 to 0050c213 has its CatchHandler @ 0050d538 */
        puVar16 = (undefined8 *)FUN_0021d540(&local_100,"\", another member of oneof \"",0x1c);
        uStack_d8 = puVar16[1];
        local_e0 = (undefined8 *******)*puVar16;
        local_d0 = (void *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        ppppuVar27 = *pppppuVar32;
        pppuVar2 = ppppuVar27[1];
        pppuVar3 = ppppuVar27[2];
        if ((*(byte *)ppppuVar27 & 1) == 0) {
          pppuVar3 = (undefined8 ***)((long)ppppuVar27 + 1);
          pppuVar2 = (undefined8 ***)(ulong)(*(byte *)ppppuVar27 >> 1);
        }
                    /* try { // try from 0050c248 to 0050c24f has its CatchHandler @ 0050d4e0 */
        puVar16 = (undefined8 *)FUN_0021d540(&local_e0,pppuVar3,pppuVar2);
        ppppppuStack_b8 = (undefined8 ******)puVar16[1];
        local_c0 = (undefined8 *******)*puVar16;
        local_b0 = (char *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
                    /* try { // try from 0050c268 to 0050c27b has its CatchHandler @ 0050d4b8 */
        puVar16 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03bfbda2,2);
        ppppppuStack_98 = (undefined8 ******)puVar16[1];
        local_a0 = (undefined8 *******)*puVar16;
        local_90 = (byte *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        plVar17 = (long *)*param_1;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        if (plVar17 != (long *)0x0) {
                    /* try { // try from 0050c2b0 to 0050c2b7 has its CatchHandler @ 0050d3c4 */
          (**(code **)(*plVar17 + 0x10))
                    (plVar17,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_a0);
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_90);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_b0);
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_d0);
        }
        if (((ulong)local_100 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_f0);
        }
        if (((ulong)local_120 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_110);
        }
        if (((byte)local_138[0] & 1) != 0) goto LAB_0050ca74;
      }
      else {
                    /* try { // try from 0050c0c8 to 0050c0db has its CatchHandler @ 0050d578 */
        FUN_004a8ec0(&local_c0,"Non-repeated field \"",&local_78);
                    /* try { // try from 0050c0dc to 0050c0ef has its CatchHandler @ 0050d574 */
        puVar16 = (undefined8 *)FUN_0021d540(&local_c0,"\" is specified multiple times.",0x1e);
        ppppppuStack_98 = (undefined8 ******)puVar16[1];
        local_a0 = (undefined8 *******)*puVar16;
        local_90 = (byte *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        plVar17 = (long *)*param_1;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        if (plVar17 != (long *)0x0) {
                    /* try { // try from 0050c124 to 0050c12b has its CatchHandler @ 0050d418 */
          (**(code **)(*plVar17 + 0x10))
                    (plVar17,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_a0);
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_90);
        }
        if (((ulong)local_c0 & 1) != 0) {
          local_128 = local_b0;
          goto LAB_0050ca74;
        }
      }
    }
    else {
LAB_0050c2ec:
      pppppuVar32 = ppppppuVar15[6];
      if (pppppuVar32 != (undefined8 *****)0x0) {
        local_e0 = (undefined8 *******)PTR_LAB_047cd728;
        local_100 = ppppppuVar15;
        if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
          local_a0 = &local_e0;
          ppppppuStack_98 = &local_100;
          local_c0 = &local_a0;
                    /* try { // try from 0050c324 to 0050c333 has its CatchHandler @ 0050d6d8 */
          std::__call_once((ulong *)pppppuVar32,&local_c0,(_func_void_void_ptr *)&LAB_005114c0);
        }
      }
      puVar7 = PTR_DAT_047cd750;
      if (*(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(ppppppuVar15 + 7) * 4) == 10) {
        local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x3a02);
        bVar4 = *(byte *)(param_1 + 6);
        uVar24 = (ulong)(bVar4 >> 1);
        uVar12 = uVar24;
        if ((bVar4 & 1) != 0) {
          uVar12 = param_1[7];
        }
        if (uVar12 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x31) == ':') {
              pcVar22 = (char *)((long)param_1 + 0x32);
              pcVar29 = (char *)((ulong)&local_a0 | 2);
              do {
                uVar24 = uVar24 - 1;
                if (uVar24 == 0) goto LAB_0050c400;
                cVar33 = *pcVar29;
                cVar34 = *pcVar22;
                pcVar22 = pcVar22 + 1;
                pcVar29 = pcVar29 + 1;
              } while (cVar34 == cVar33);
            }
            goto LAB_0050c458;
          }
          if (*(char *)param_1[8] != ':') goto LAB_0050c458;
LAB_0050c400:
                    /* try { // try from 0050c400 to 0050c407 has its CatchHandler @ 0050d3c0 */
          FUN_004fcda0(plVar17);
          if ((*(char *)((long)ppppppuVar15[0xf] + 0x4f) == '\0') || ((int)param_1[5] != 5))
          goto LAB_0050c458;
          local_a0 = (undefined8 *******)0x0;
          ppppppuStack_98 = (undefined8 ******)0x0;
          local_90 = (byte *)0x0;
                    /* try { // try from 0050c428 to 0050c433 has its CatchHandler @ 0050d2cc */
          uVar12 = FUN_0050edb8(param_1,&local_a0);
          if ((uVar12 & 1) == 0) {
            bVar31 = false;
          }
          else {
            plVar14 = (long *)param_1[1];
            if (plVar14 == (long *)0x0) {
              uVar19 = 0;
            }
            else {
                    /* try { // try from 0050c448 to 0050c44f has its CatchHandler @ 0050d31c */
              uVar19 = (**(code **)(*plVar14 + 0x28))(plVar14,ppppppuVar15);
            }
                    /* try { // try from 0050cea4 to 0050cebb has its CatchHandler @ 0050d31c */
            uVar19 = FUN_004f7424(extraout_x1,param_2,ppppppuVar15,uVar19);
            FUN_0052d318(uVar19,&local_a0);
            bVar31 = true;
          }
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_90);
          }
          if (!bVar31) goto LAB_0050ca80;
        }
        else {
LAB_0050c458:
          if (*(int *)((long)ppppppuVar15 + 0x3c) == 3) {
            local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x5b02);
            bVar4 = *(byte *)(param_1 + 6);
            uVar24 = (ulong)(bVar4 >> 1);
            uVar12 = uVar24;
            if ((bVar4 & 1) != 0) {
              uVar12 = param_1[7];
            }
            if (uVar12 == 1) {
              if ((bVar4 & 1) == 0) {
                if (*(char *)((long)param_1 + 0x31) == '[') {
                  pcVar22 = (char *)((long)param_1 + 0x32);
                  pcVar29 = (char *)((ulong)&local_a0 | 2);
                  do {
                    uVar24 = uVar24 - 1;
                    if (uVar24 == 0) goto LAB_0050c4d8;
                    cVar33 = *pcVar29;
                    cVar34 = *pcVar22;
                    pcVar22 = pcVar22 + 1;
                    pcVar29 = pcVar29 + 1;
                  } while (cVar34 == cVar33);
                }
              }
              else if (*(char *)param_1[8] == '[') {
LAB_0050c4d8:
                    /* try { // try from 0050c4d8 to 0050c4df has its CatchHandler @ 0050d380 */
                FUN_004fcda0(plVar17);
                local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x5d02);
                bVar4 = *(byte *)(param_1 + 6);
                uVar24 = (ulong)(bVar4 >> 1);
                uVar12 = uVar24;
                if ((bVar4 & 1) != 0) {
                  uVar12 = param_1[7];
                }
                if (uVar12 == 1) {
                  if ((bVar4 & 1) == 0) {
                    if (*(char *)((long)param_1 + 0x31) == ']') {
                      pcVar22 = (char *)((long)param_1 + 0x32);
                      pcVar29 = (char *)((ulong)&local_a0 | 2);
                      do {
                        uVar24 = uVar24 - 1;
                        if (uVar24 == 0) goto LAB_0050cc30;
                        cVar33 = *pcVar29;
                        cVar34 = *pcVar22;
                        pcVar22 = pcVar22 + 1;
                        pcVar29 = pcVar29 + 1;
                      } while (cVar34 == cVar33);
                    }
                  }
                  else if (*(char *)param_1[8] == ']') {
LAB_0050cc30:
                    /* try { // try from 0050cc30 to 0050cc37 has its CatchHandler @ 0050d29c */
                    FUN_004fcda0(plVar17);
                    goto LAB_0050c5cc;
                  }
                }
                do {
                  pppppuVar32 = ppppppuVar15[6];
                  if (pppppuVar32 != (undefined8 *****)0x0) {
                    local_e0 = (undefined8 *******)PTR_LAB_047cd728;
                    local_100 = ppppppuVar15;
                    if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
                      local_a0 = &local_e0;
                      ppppppuStack_98 = &local_100;
                      local_c0 = &local_a0;
                    /* try { // try from 0050cc98 to 0050cce3 has its CatchHandler @ 0050d6cc */
                      std::__call_once((ulong *)pppppuVar32,&local_c0,
                                       (_func_void_void_ptr *)&LAB_005114c0);
                    }
                  }
                  if (*(int *)(puVar7 + (ulong)*(uint *)(ppppppuVar15 + 7) * 4) == 10) {
                    uVar12 = FUN_0050eecc(param_1,param_2,extraout_x1,ppppppuVar15);
                  }
                  else {
                    uVar12 = FUN_0050f210(param_1,param_2,extraout_x1,ppppppuVar15);
                  }
                  if ((uVar12 & 1) == 0) goto LAB_0050ca80;
                  local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x5d02);
                  bVar4 = *(byte *)(param_1 + 6);
                  uVar24 = (ulong)(bVar4 >> 1);
                  uVar12 = uVar24;
                  if ((bVar4 & 1) != 0) {
                    uVar12 = param_1[7];
                  }
                  if (uVar12 == 1) {
                    if ((bVar4 & 1) == 0) {
                      if (*(char *)((long)param_1 + 0x31) == ']') {
                        pcVar22 = (char *)((ulong)&local_a0 | 2);
                        pcVar29 = (char *)((long)param_1 + 0x32);
                        do {
                          uVar24 = uVar24 - 1;
                          if (uVar24 == 0) goto LAB_0050cd8c;
                          cVar33 = *pcVar22;
                          cVar34 = *pcVar29;
                          pcVar22 = pcVar22 + 1;
                          pcVar29 = pcVar29 + 1;
                        } while (cVar34 == cVar33);
                      }
                    }
                    else if (*(char *)param_1[8] == ']') {
LAB_0050cd8c:
                    /* try { // try from 0050cd8c to 0050cd93 has its CatchHandler @ 0050d2dc */
                      FUN_004fcda0(plVar17);
                      goto LAB_0050c5cc;
                    }
                  }
                  local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x2c02);
                    /* try { // try from 0050cd60 to 0050cd6b has its CatchHandler @ 0050d660 */
                  uVar12 = FUN_0050d96c(param_1,&local_a0);
                  if (((ulong)local_a0 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_90);
                  }
                  uVar10 = 0;
                } while ((uVar12 & 1) != 0);
                goto LAB_0050ca84;
              }
            }
          }
          pppppuVar32 = ppppppuVar15[6];
          if (pppppuVar32 != (undefined8 *****)0x0) {
            local_e0 = (undefined8 *******)PTR_LAB_047cd728;
            local_100 = ppppppuVar15;
            if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
              local_a0 = &local_e0;
              ppppppuStack_98 = &local_100;
              local_c0 = &local_a0;
                    /* try { // try from 0050c57c to 0050c5c7 has its CatchHandler @ 0050d6d8 */
              std::__call_once((ulong *)pppppuVar32,&local_c0,(_func_void_void_ptr *)&LAB_005114c0);
            }
          }
          if (*(int *)(puVar7 + (ulong)*(uint *)(ppppppuVar15 + 7) * 4) == 10) {
            uVar12 = FUN_0050eecc(param_1,param_2,extraout_x1,ppppppuVar15);
          }
          else {
            uVar12 = FUN_0050f210(param_1,param_2,extraout_x1,ppppppuVar15);
          }
          if ((uVar12 & 1) == 0) goto LAB_0050ca80;
        }
LAB_0050c5cc:
        local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x3b02);
        bVar4 = *(byte *)(param_1 + 6);
        uVar24 = (ulong)(bVar4 >> 1);
        uVar12 = uVar24;
        if ((bVar4 & 1) != 0) {
          uVar12 = param_1[7];
        }
        if (uVar12 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x31) == ';') {
              pcVar22 = (char *)((long)param_1 + 0x32);
              pcVar29 = (char *)((ulong)&local_a0 | 2);
              uVar30 = uVar24;
              do {
                uVar30 = uVar30 - 1;
                if (uVar30 == 0) goto LAB_0050c644;
                cVar33 = *pcVar29;
                cVar34 = *pcVar22;
                pcVar22 = pcVar22 + 1;
                pcVar29 = pcVar29 + 1;
              } while (cVar34 == cVar33);
            }
            goto LAB_0050c650;
          }
          if (*(char *)param_1[8] != ';') goto LAB_0050c650;
LAB_0050c644:
                    /* try { // try from 0050c644 to 0050c64b has its CatchHandler @ 0050d3b8 */
          FUN_004fcda0(plVar17);
        }
        else {
LAB_0050c650:
          uVar30 = (ulong)local_c0 >> 0x10;
          local_c0 = (undefined8 *******)CONCAT62((uint6)uVar30 & 0xffffffffff00,0x2c02);
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)((long)param_1 + 0x31) == ',') {
                pcVar22 = (char *)((long)param_1 + 0x32);
                pcVar29 = (char *)((ulong)&local_c0 | 2);
                do {
                  uVar24 = uVar24 - 1;
                  if (uVar24 == 0) goto LAB_0050c8e8;
                  cVar33 = *pcVar29;
                  cVar34 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  pcVar29 = pcVar29 + 1;
                } while (cVar34 == cVar33);
              }
            }
            else if (*(char *)param_1[8] == ',') {
LAB_0050c8e8:
                    /* try { // try from 0050c8e8 to 0050c8ef has its CatchHandler @ 0050d37c */
              FUN_004fcda0(plVar17);
            }
          }
        }
        if (*(char *)((long)ppppppuVar15[0xf] + 0x4e) != '\0') {
                    /* try { // try from 0050c8fc to 0050c90f has its CatchHandler @ 0050d648 */
          FUN_004a8ec0(&local_c0,"text format contains deprecated field \"",&local_78);
                    /* try { // try from 0050c910 to 0050c923 has its CatchHandler @ 0050d634 */
          puVar16 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03c246d6,1);
          ppppppuStack_98 = (undefined8 ******)puVar16[1];
          local_a0 = (undefined8 *******)*puVar16;
          local_90 = (byte *)puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          plVar17 = (long *)*param_1;
          if (plVar17 != (long *)0x0) {
                    /* try { // try from 0050c950 to 0050c957 has its CatchHandler @ 0050d498 */
            (**(code **)(*plVar17 + 0x18))
                      (plVar17,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_a0);
          }
          if (((ulong)local_a0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_90);
          }
          if (((ulong)local_c0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_b0);
          }
        }
        if (param_1[2] != 0) {
                    /* try { // try from 0050c994 to 0050c99f has its CatchHandler @ 0050d6d8 */
          FUN_005073d0(param_1[2],ppppppuVar15,lVar20);
        }
        uVar10 = 1;
        goto LAB_0050ca84;
      }
      local_a0 = (undefined8 *******)CONCAT53(local_a0._3_5_,0x3a02);
                    /* try { // try from 0050c3bc to 0050c3c7 has its CatchHandler @ 0050d6ac */
      uVar12 = FUN_0050d96c(param_1,&local_a0);
      if (((ulong)local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_90);
      }
      if ((uVar12 & 1) != 0) goto LAB_0050c458;
    }
  }
LAB_0050ca80:
  uVar10 = 0;
LAB_0050ca84:
  if (((ulong)local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return uVar10 & 1;
}


