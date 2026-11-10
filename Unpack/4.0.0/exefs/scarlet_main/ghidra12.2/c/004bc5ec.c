/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004bc5ec; name: FUN_004bc5ec
 */


/* WARNING: Removing unreachable block (ram,0x004bc998) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004bc5ec(long *param_1,long *param_2,int **param_3,long *param_4)

{
  bool bVar1;
  int **ppiVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong *puVar21;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  size_t sVar27;
  int *__dest;
  ulong *puVar28;
  int *piVar29;
  void *pvVar30;
  long *plVar31;
  undefined8 *puVar32;
  int *piVar33;
  undefined1 auVar34 [16];
  ulong local_1b0;
  int **local_1a0;
  int **ppiStack_198;
  char *local_190;
  undefined8 local_160;
  undefined8 local_150;
  ulong local_148;
  void *local_140;
  byte local_138 [16];
  ulong local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  int *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  int *local_e0;
  ulong uStack_d8;
  ulong local_d0;
  int ***local_c0;
  ulong uStack_b8;
  ulong local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  ushort local_90 [4];
  ulong local_88;
  ulong local_80;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  if (*(int *)(param_1[2] + 0x20) == 0) {
    local_190 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar3 = s_Option_must_have_a_name__03c9e377._8_8_;
    uVar19 = s_Option_must_have_a_name__03c9e377._0_8_;
    ppiStack_198 = (int **)_UNK_03caaa18;
    local_1a0 = _DAT_03caaa10;
    *(undefined8 *)(local_190 + 0x10) = s_Option_must_have_a_name__03c9e377._16_8_;
    *(undefined8 *)(local_190 + 8) = uVar3;
    *(undefined8 *)local_190 = uVar19;
    local_190[0x18] = '\0';
    lVar14 = *param_1;
    plVar20 = *(long **)(lVar14 + 0x10);
    if (plVar20 == (long *)0x0) {
LAB_004bce64:
      *(undefined1 *)(lVar14 + 0x30) = 1;
      goto LAB_004bce6c;
    }
                    /* try { // try from 004bc6a8 to 004bc6b3 has its CatchHandler @ 004bda10 */
    (**(code **)(*plVar20 + 0x10))(plVar20,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_1a0);
LAB_004bce50:
    *(undefined1 *)(lVar14 + 0x30) = 1;
    if (((ulong)local_1a0 & 1) == 0) {
      return 0;
    }
LAB_004bce6c:
    FUN_0049e790(PTR_LAB_047cba48,local_190);
    return 0;
  }
  pbVar22 = *(byte **)(*(long *)(*(long *)(param_1[2] + 0x28) + 8) + 0x18);
  if ((*pbVar22 & 1) == 0) {
    if ((*pbVar22 & 0xfe) == 0x28) {
      pbVar22 = pbVar22 + 1;
      goto LAB_004bc6c8;
    }
  }
  else if (*(long *)(pbVar22 + 8) == 0x14) {
    pbVar22 = *(byte **)(pbVar22 + 0x10);
LAB_004bc6c8:
    if ((*(long *)pbVar22 == 0x707265746e696e75 && *(long *)(pbVar22 + 8) == 0x706f5f6465746572) &&
        *(int *)(pbVar22 + 0x10) == 0x6e6f6974) {
      local_190 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x40);
      uVar9 = s_Option_must_not_use_reserved_nam_03c41a65._32_8_;
      uVar8 = s_Option_must_not_use_reserved_nam_03c41a65._24_8_;
      uVar7 = s_Option_must_not_use_reserved_nam_03c41a65._16_8_;
      uVar6 = s_Option_must_not_use_reserved_nam_03c41a65._8_8_;
      uVar5 = s_Option_must_not_use_reserved_nam_03c41a65._0_8_;
      uVar19 = CONCAT71(s_Option_must_not_use_reserved_nam_03c41a65._41_7_,
                        s_Option_must_not_use_reserved_nam_03c41a65[0x28]);
      uVar3 = CONCAT17(s_Option_must_not_use_reserved_nam_03c41a65[0x30],
                       s_Option_must_not_use_reserved_nam_03c41a65._41_7_);
      ppiStack_198 = (int **)_UNK_03caac68;
      local_1a0 = _DAT_03caac60;
      *(undefined8 *)(local_190 + 0x31) = s_Option_must_not_use_reserved_nam_03c41a65._49_8_;
      *(undefined8 *)(local_190 + 0x29) = uVar3;
      *(undefined8 *)(local_190 + 0x18) = uVar8;
      *(undefined8 *)(local_190 + 0x10) = uVar7;
      *(undefined8 *)(local_190 + 0x28) = uVar19;
      *(undefined8 *)(local_190 + 0x20) = uVar9;
      local_190[0x39] = '\0';
      *(undefined8 *)(local_190 + 8) = uVar6;
      *(undefined8 *)local_190 = uVar5;
      lVar14 = *param_1;
      plVar20 = *(long **)(lVar14 + 0x10);
      if (plVar20 == (long *)0x0) goto LAB_004bce64;
                    /* try { // try from 004bce44 to 004bce4f has its CatchHandler @ 004bda04 */
      (**(code **)(*plVar20 + 0x10))
                (plVar20,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_1a0);
      goto LAB_004bce50;
    }
  }
  lVar25 = *param_1;
  lVar14 = (**(code **)(*param_2 + 0x98))(param_2);
  iVar13 = FUN_004ab410(lVar25,*(undefined8 *)(lVar14 + 8),1);
  if (iVar13 == 1) {
    puVar32 = extraout_x1;
  }
  else {
    puVar32 = (undefined8 *)(**(code **)(*param_2 + 0x98))(param_2);
  }
  local_78 = (ulong *)0x0;
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_90[0] = 0;
  local_98 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_a0 = (int *)0x0;
  if (param_4[1] - *param_4 != 0) {
    uVar26 = param_4[1] - *param_4 >> 2;
    if (uVar26 >> 0x3e != 0) {
                    /* try { // try from 004bd750 to 004bd757 has its CatchHandler @ 004bd780 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    piVar15 = (int *)FUN_0049e770(PTR_FUN_047cba38);
    local_98 = piVar15 + uVar26;
    sVar27 = param_4[1] - *param_4;
    local_a8 = piVar15;
    if (0 < (long)sVar27) {
      local_a0 = piVar15;
      memcpy(piVar15,(void *)*param_4,sVar27);
      piVar15 = (int *)((long)piVar15 + sVar27);
    }
    local_a0 = piVar15;
  }
  puVar10 = PTR_LAB_047cba48;
  if (*(int *)(param_1[2] + 0x20) < 1) {
    piVar15 = (int *)0x0;
  }
  else {
    local_1b0 = (ulong)local_90 | 1;
    piVar33 = (int *)0x0;
    lVar14 = 1;
    do {
      lVar25 = *param_1;
      if ((*(byte *)(lVar25 + 0xb0) & 1) == 0) {
        *(undefined2 *)(lVar25 + 0xb0) = 0;
      }
      else {
        **(undefined1 **)(lVar25 + 0xc0) = 0;
        *(undefined8 *)(lVar25 + 0xb8) = 0;
      }
      lVar25 = *(long *)(*(long *)(param_1[2] + 0x28) + lVar14 * 8);
      uVar26 = (ulong)((byte)local_90[0] >> 1);
      if ((local_90[0] & 1) != 0) {
        uVar26 = local_88;
      }
      pbVar22 = *(byte **)(lVar25 + 0x18);
      if (uVar26 != 0) {
                    /* try { // try from 004bc868 to 004bc877 has its CatchHandler @ 004bdb34 */
        FUN_0021d540(local_90,&DAT_03bdface,1);
        lVar25 = *(long *)(*(long *)(param_1[2] + 0x28) + lVar14 * 8);
      }
      if (*(char *)(lVar25 + 0x20) == '\0') {
        uVar26 = *(ulong *)(pbVar22 + 8);
        pbVar23 = *(byte **)(pbVar22 + 0x10);
        if ((*pbVar22 & 1) == 0) {
          pbVar23 = pbVar22 + 1;
          uVar26 = (ulong)(*pbVar22 >> 1);
        }
                    /* try { // try from 004bc964 to 004bc97f has its CatchHandler @ 004bdb34 */
        FUN_0021d540(local_90,pbVar23,uVar26);
        auVar34 = FUN_004c0784(*(undefined8 *)(puVar32[2] + 0x90),puVar32,pbVar22);
        piVar15 = auVar34._8_8_;
        uVar19 = auVar34._0_8_;
        if (auVar34._0_4_ == 2) {
          if (*(char *)((long)piVar15 + 0x43) != '\0') {
            piVar15 = (int *)0x0;
          }
        }
        else {
          piVar15 = (int *)0x0;
        }
      }
      else {
                    /* try { // try from 004bc88c to 004bc89f has its CatchHandler @ 004bdaec */
        FUN_004a8ec0(&local_c0,&DAT_03c75324,pbVar22);
                    /* try { // try from 004bc8a0 to 004bc8b3 has its CatchHandler @ 004bdb10 */
        puVar16 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03c8f4f1,1);
        ppiStack_198 = (int **)puVar16[1];
        local_1a0 = (int **)*puVar16;
        local_190 = (char *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        ppiVar2 = (int **)((ulong)local_1a0 >> 1 & 0x7f);
        uVar26 = (ulong)&local_1a0 | 1;
        if (((ulong)local_1a0 & 1) != 0) {
          ppiVar2 = ppiStack_198;
          uVar26 = (ulong)local_190;
        }
                    /* try { // try from 004bc8e4 to 004bc8eb has its CatchHandler @ 004bdaf0 */
        FUN_0021d540(local_90,uVar26,ppiVar2);
        if (((ulong)local_1a0 & 1) != 0) {
          FUN_0049e790(puVar10,local_190);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_0049e790(puVar10,local_b0);
        }
        plVar20 = (long *)*param_1;
                    /* try { // try from 004bc918 to 004bc947 has its CatchHandler @ 004bdb30 */
        auVar34 = FUN_004ab754(plVar20,pbVar22,param_1[1],0,1);
        if (auVar34._0_4_ == 0) {
          lVar25 = *plVar20;
          if (*(char *)(lVar25 + 0x2a) == '\0') {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = auVar34._8_8_;
            auVar34 = auVar4 << 0x40;
          }
          else {
            auVar34 = FUN_004abe80(lVar25,pbVar22,0);
          }
        }
        uVar19 = auVar34._0_8_;
        piVar15 = auVar34._8_8_;
        if (auVar34._0_4_ != 2) {
          piVar15 = piVar33;
        }
      }
      if (piVar15 == (int *)0x0) {
        plVar20 = (long *)*param_1;
        if (*(char *)(*plVar20 + 0x2a) != '\0') {
                    /* try { // try from 004bce98 to 004bceb7 has its CatchHandler @ 004bda0c */
          FUN_004bdb9c(uVar19,param_1[2],param_2);
LAB_004bceb8:
          uVar19 = 1;
          goto LAB_004bd6d4;
        }
        if ((*(byte *)(plVar20 + 0x16) & 1) == 0) {
          uVar26 = (ulong)(*(byte *)(plVar20 + 0x16) >> 1);
        }
        else {
          uVar26 = plVar20[0x17];
        }
        if (uVar26 == 0) {
                    /* try { // try from 004bd320 to 004bd333 has its CatchHandler @ 004bd800 */
          FUN_004a8ec0(&local_e0,"Option \"",local_90);
                    /* try { // try from 004bd334 to 004bd347 has its CatchHandler @ 004bd7ec */
          puVar17 = (ulong *)FUN_0021d540(&local_e0,"\" unknown. Ensure that your proto",0x21);
          uStack_b8 = puVar17[1];
          local_c0 = (int ***)*puVar17;
          local_b0 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 004bd360 to 004bd373 has its CatchHandler @ 004bd7c4 */
          puVar32 = (undefined8 *)
                    FUN_0021d540(&local_c0,
                                 " definition file imports the proto which defines the option.",0x3c
                                );
          ppiStack_198 = (int **)puVar32[1];
          local_1a0 = (int **)*puVar32;
          local_190 = (char *)puVar32[2];
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
          lVar14 = *param_1;
          plVar20 = *(long **)(lVar14 + 0x10);
          if (plVar20 != (long *)0x0) {
                    /* try { // try from 004bd3ac to 004bd3b7 has its CatchHandler @ 004bd788 */
            (**(code **)(*plVar20 + 0x10))
                      (plVar20,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_1a0);
          }
          *(undefined1 *)(lVar14 + 0x30) = 1;
          if (((ulong)local_1a0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_190);
          }
          local_128 = local_d0;
          if (((ulong)local_c0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_b0);
            local_128 = local_d0;
          }
          local_d0 = local_128;
          if (((ulong)local_e0 & 1) != 0) goto LAB_004bd5fc;
        }
        else {
                    /* try { // try from 004bd1bc to 004bd1cf has its CatchHandler @ 004bd97c */
          FUN_004a8ec0(local_138,"Option \"",local_90);
                    /* try { // try from 004bd1d0 to 004bd1e3 has its CatchHandler @ 004bd968 */
          puVar17 = (ulong *)FUN_0021d540(local_138,"\" is resolved to \"(",0x13);
          uStack_118 = puVar17[1];
          local_120 = *puVar17;
          local_110 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
          lVar25 = *param_1;
          uVar26 = (ulong)(*(byte *)(lVar25 + 0xb0) >> 1);
          lVar14 = lVar25 + 0xb1;
          if ((*(byte *)(lVar25 + 0xb0) & 1) != 0) {
            uVar26 = *(ulong *)(lVar25 + 0xb8);
            lVar14 = *(long *)(lVar25 + 0xc0);
          }
                    /* try { // try from 004bd21c to 004bd223 has its CatchHandler @ 004bd958 */
          puVar32 = (undefined8 *)FUN_0021d540(&local_120,lVar14,uVar26);
          uStack_f8 = puVar32[1];
          local_100 = (int *)*puVar32;
          local_f0 = puVar32[2];
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
                    /* try { // try from 004bd23c to 004bd24f has its CatchHandler @ 004bd948 */
          puVar32 = (undefined8 *)
                    FUN_0021d540(&local_100,
                                 ")\", which is not defined. The innermost scope is searched first in name resolution. Consider using a leading \'.\'(i.e., \"(."
                                 ,0x7a);
          uStack_d8 = puVar32[1];
          local_e0 = (int *)*puVar32;
          local_d0 = puVar32[2];
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
          if ((local_90[0] & 1) == 0) {
            local_88 = (ulong)((byte)local_90[0] >> 1);
            if ((byte)local_90[0] >> 1 == 0) goto LAB_004bd758;
          }
          else {
            if (local_88 == 0) {
LAB_004bd758:
                    /* try { // try from 004bd758 to 004bd767 has its CatchHandler @ 004bd770 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_out_of_range();
            }
            local_1b0 = local_80;
          }
          uVar26 = local_88 - 1;
          if (0xffffffffffffffef < uVar26) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar26 < 0x17) {
            local_150 = CONCAT71(local_150._1_7_,(char)((int)uVar26 << 1));
            pvVar30 = (void *)((ulong)&local_150 | 1);
            if (uVar26 != 0) goto LAB_004bd444;
          }
          else {
            uVar24 = local_88 + 0xf & 0xfffffffffffffff0;
            pvVar30 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar24);
            local_150 = uVar24 | 1;
            local_148 = uVar26;
            local_140 = pvVar30;
LAB_004bd444:
            memcpy(pvVar30,(void *)(local_1b0 + 1),uVar26);
          }
          *(undefined1 *)((long)pvVar30 + uVar26) = 0;
          if ((local_150 & 1) == 0) {
            uVar26 = local_150 >> 1 & 0x7f;
            pvVar30 = (void *)((long)&local_150 + 1);
          }
          else {
            uVar26 = local_148;
            pvVar30 = local_140;
          }
                    /* try { // try from 004bd474 to 004bd47b has its CatchHandler @ 004bd8d8 */
          puVar32 = (undefined8 *)FUN_0021d540(&local_e0,pvVar30,uVar26);
          uStack_b8 = puVar32[1];
          local_c0 = (int ***)*puVar32;
          local_b0 = puVar32[2];
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
                    /* try { // try from 004bd494 to 004bd4a7 has its CatchHandler @ 004bd8b0 */
          puVar32 = (undefined8 *)
                    FUN_0021d540(&local_c0,"\") to start from the outermost scope.",0x25);
          ppiStack_198 = (int **)puVar32[1];
          local_1a0 = (int **)*puVar32;
          local_190 = (char *)puVar32[2];
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
          lVar14 = *param_1;
          plVar20 = *(long **)(lVar14 + 0x10);
          if (plVar20 != (long *)0x0) {
                    /* try { // try from 004bd4e0 to 004bd4eb has its CatchHandler @ 004bd804 */
            (**(code **)(*plVar20 + 0x10))
                      (plVar20,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_1a0);
          }
          *(undefined1 *)(lVar14 + 0x30) = 1;
          if (((ulong)local_1a0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_190);
          }
          if (((ulong)local_c0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_b0);
          }
          if ((local_150 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_140);
          }
          if (((ulong)local_e0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_d0);
          }
          if (((ulong)local_100 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_f0);
          }
          if ((local_120 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_110);
          }
          if ((local_138[0] & 1) != 0) {
LAB_004bd5fc:
            FUN_0049e790(PTR_LAB_047cba48,local_128);
          }
        }
        goto LAB_004bd608;
      }
      if (*(undefined8 **)(piVar15 + 0x14) != puVar32) {
        if (*(char *)((long)*(undefined8 **)(piVar15 + 0x14) + 0x8c) != '\0') {
          FUN_004bdb9c(uVar19,param_1[2],param_2);
          goto LAB_004bceb8;
        }
                    /* try { // try from 004bd0b4 to 004bd0c7 has its CatchHandler @ 004bd9ec */
        FUN_004a8ec0(&local_100,"Option field \"",local_90);
                    /* try { // try from 004bd0c8 to 004bd0db has its CatchHandler @ 004bd9d8 */
        puVar17 = (ulong *)FUN_0021d540(&local_100,"\" is not a field or extension of message \"",
                                        0x2a);
        uStack_d8 = puVar17[1];
        local_e0 = (int *)*puVar17;
        local_d0 = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        pbVar23 = (byte *)*puVar32;
        uVar26 = *(ulong *)(pbVar23 + 8);
        pbVar22 = *(byte **)(pbVar23 + 0x10);
        if ((*pbVar23 & 1) == 0) {
          pbVar22 = pbVar23 + 1;
          uVar26 = (ulong)(*pbVar23 >> 1);
        }
                    /* try { // try from 004bd110 to 004bd117 has its CatchHandler @ 004bd9b0 */
        puVar32 = (undefined8 *)FUN_0021d540(&local_e0,pbVar22,uVar26);
        uStack_b8 = puVar32[1];
        local_c0 = (int ***)*puVar32;
        local_b0 = puVar32[2];
        puVar32[1] = 0;
        puVar32[2] = 0;
        *puVar32 = 0;
                    /* try { // try from 004bd130 to 004bd143 has its CatchHandler @ 004bd988 */
        puVar32 = (undefined8 *)FUN_0021d540(&local_c0,&DAT_03bfbda2,2);
        ppiStack_198 = (int **)puVar32[1];
        local_1a0 = (int **)*puVar32;
        local_190 = (char *)puVar32[2];
        puVar32[1] = 0;
        puVar32[2] = 0;
        *puVar32 = 0;
        lVar14 = *param_1;
        plVar20 = *(long **)(lVar14 + 0x10);
        if (plVar20 != (long *)0x0) {
                    /* try { // try from 004bd17c to 004bd187 has its CatchHandler @ 004bd86c */
          (**(code **)(*plVar20 + 0x10))
                    (plVar20,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_1a0);
        }
        *(undefined1 *)(lVar14 + 0x30) = 1;
        if (((ulong)local_1a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_190);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_b0);
        }
        local_128 = local_f0;
        if (((ulong)local_e0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_d0);
          local_128 = local_f0;
        }
        local_f0 = local_128;
        if (((ulong)local_100 & 1) != 0) {
          goto LAB_004bd5fc;
        }
        goto LAB_004bd608;
      }
      iVar13 = piVar15[0x11];
      if (local_a0 < local_98) {
        *local_a0 = iVar13;
        local_a0 = local_a0 + 1;
      }
      else {
        lVar25 = (long)local_a0 - (long)local_a8 >> 2;
        uVar26 = lVar25 + 1;
        if (uVar26 >> 0x3e != 0) {
                    /* try { // try from 004bd740 to 004bd747 has its CatchHandler @ 004bd784 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar24 = (long)local_98 - (long)local_a8 >> 1;
        if (uVar26 <= uVar24) {
          uVar26 = uVar24;
        }
        if (0x1ffffffffffffffe < (ulong)((long)local_98 - (long)local_a8 >> 2)) {
          uVar26 = 0x3fffffffffffffff;
        }
        if (uVar26 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = FUN_0049e770(PTR_FUN_047cba38,uVar26 << 2);
        }
        piVar33 = (int *)(lVar18 + lVar25 * 4);
        sVar27 = (long)local_a0 - (long)local_a8;
        piVar29 = (int *)(lVar18 + uVar26 * 4);
        *piVar33 = iVar13;
        __dest = (int *)((long)piVar33 - sVar27);
        if (0 < (long)sVar27) {
          memcpy(__dest,local_a8,sVar27);
        }
        bVar1 = local_a8 != (int *)0x0;
        local_a8 = __dest;
        local_a0 = piVar33 + 1;
        local_98 = piVar29;
        if (bVar1) {
          FUN_0049e790(puVar10);
        }
      }
      iVar13 = *(int *)(param_1[2] + 0x20);
      if (lVar14 + -1 < (long)iVar13 + -1) {
        puVar17 = *(ulong **)(piVar15 + 0xc);
        if (puVar17 != (ulong *)0x0) {
          local_e0 = (int *)PTR_LAB_047cd728;
          local_100 = piVar15;
          if (*puVar17 != 0xffffffffffffffff) {
            local_1a0 = &local_e0;
            ppiStack_198 = &local_100;
            local_c0 = &local_1a0;
                    /* try { // try from 004bcad0 to 004bcadf has its CatchHandler @ 004bdb34 */
            std::__call_once(puVar17,&local_c0,(_func_void_void_ptr *)&LAB_004c0750);
          }
        }
        if ((piVar15[0xe] & 0xfffffffeU) == 10) {
          if (piVar15[0xf] != 3) {
            if (local_70 == local_68) {
              lVar25 = (long)local_70 - (long)local_78 >> 3;
              uVar26 = lVar25 + 1;
              if (uVar26 >> 0x3d != 0) {
                    /* try { // try from 004bd748 to 004bd74f has its CatchHandler @ 004bda0c */
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar24 = (long)local_68 - (long)local_78 >> 2;
              if (uVar26 <= uVar24) {
                uVar26 = uVar24;
              }
              if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
                uVar26 = 0x1fffffffffffffff;
              }
              if (uVar26 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = FUN_0049e770(PTR_FUN_047cba38,uVar26 << 3);
              }
              puVar17 = (ulong *)(lVar18 + lVar25 * 8);
              puVar21 = (ulong *)(lVar18 + uVar26 * 8);
              *puVar17 = (ulong)piVar15;
              sVar27 = (long)local_70 - (long)local_78;
              puVar28 = (ulong *)((long)puVar17 - sVar27);
              if (0 < (long)sVar27) {
                memcpy(puVar28,local_78,sVar27);
              }
              bVar1 = local_78 != (ulong *)0x0;
              local_78 = puVar28;
              local_70 = puVar17 + 1;
              local_68 = puVar21;
              if (bVar1) {
                FUN_0049e790(puVar10);
              }
            }
            else {
              *local_70 = (ulong)piVar15;
              local_70 = local_70 + 1;
            }
            puVar17 = *(ulong **)(piVar15 + 0xc);
            if ((puVar17 != (ulong *)0x0) && (local_e0 = piVar15, *puVar17 != 0xffffffffffffffff)) {
              ppiStack_198 = &local_e0;
              local_1a0 = (int **)PTR_LAB_047cd728;
              local_c0 = &local_1a0;
                    /* try { // try from 004bcbdc to 004bcbeb has its CatchHandler @ 004bdb34 */
              std::__call_once(puVar17,&local_c0,(_func_void_void_ptr *)&LAB_004c9500);
            }
            puVar32 = *(undefined8 **)(piVar15 + 0x1a);
            iVar13 = *(int *)(param_1[2] + 0x20);
            goto LAB_004bc814;
          }
                    /* try { // try from 004bcf30 to 004bcf43 has its CatchHandler @ 004bd9f8 */
          FUN_004a8ec0(&local_c0,"Option field \"",local_90);
                    /* try { // try from 004bcf44 to 004bcf57 has its CatchHandler @ 004bd9f4 */
          puVar32 = (undefined8 *)
                    FUN_0021d540(&local_c0,
                                 "\" is a repeated message. Repeated message options must be initialized using an aggregate value."
                                 ,0x5f);
          ppiStack_198 = (int **)puVar32[1];
          local_1a0 = (int **)*puVar32;
          local_190 = (char *)puVar32[2];
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
          lVar14 = *param_1;
          plVar20 = *(long **)(lVar14 + 0x10);
          if (plVar20 != (long *)0x0) {
                    /* try { // try from 004bcf90 to 004bcf9b has its CatchHandler @ 004bd980 */
            (**(code **)(*plVar20 + 0x10))
                      (plVar20,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_1a0);
          }
        }
        else {
                    /* try { // try from 004bcec0 to 004bced3 has its CatchHandler @ 004bda00 */
          FUN_004a8ec0(&local_c0,"Option \"",local_90);
                    /* try { // try from 004bced4 to 004bcee7 has its CatchHandler @ 004bd9fc */
          puVar32 = (undefined8 *)
                    FUN_0021d540(&local_c0,"\" is an atomic type, not a message.",0x23);
          ppiStack_198 = (int **)puVar32[1];
          local_1a0 = (int **)*puVar32;
          local_190 = (char *)puVar32[2];
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
          lVar14 = *param_1;
          plVar20 = *(long **)(lVar14 + 0x10);
          if (plVar20 != (long *)0x0) {
                    /* try { // try from 004bcf20 to 004bcf2b has its CatchHandler @ 004bd984 */
            (**(code **)(*plVar20 + 0x10))
                      (plVar20,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_1a0);
          }
        }
        *(undefined1 *)(lVar14 + 0x30) = 1;
        if (((ulong)local_1a0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_190);
        }
        if (((ulong)local_c0 & 1) != 0) {
          local_128 = local_b0;
          goto LAB_004bd5fc;
        }
        goto LAB_004bd608;
      }
LAB_004bc814:
      bVar1 = lVar14 < iVar13;
      piVar33 = piVar15;
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  puVar21 = local_70;
  puVar17 = local_78;
  if (piVar15[0xf] != 3) {
                    /* try { // try from 004bcc0c to 004bcc3b has its CatchHandler @ 004bda38 */
    (**(code **)(*param_2 + 0x98))(param_2);
    uVar19 = FUN_004efc18(extraout_x1_00,param_2);
    uVar26 = FUN_004bdcac(param_1,puVar17,puVar21,piVar15,local_90,uVar19);
    if ((uVar26 & 1) == 0) {
LAB_004bd608:
      uVar19 = 0;
      goto LAB_004bd6d4;
    }
  }
  plVar20 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (plVar20 != (long *)0x0) {
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[2] = 0;
  }
                    /* try { // try from 004bcc60 to 004bcc6f has its CatchHandler @ 004bda40 */
  uVar26 = FUN_004be004(param_1,piVar15,plVar20);
  puVar12 = PTR_LAB_047cd728;
  puVar11 = PTR_LAB_047cba48;
  puVar10 = PTR_FUN_047cba38;
  plVar31 = plVar20;
  if ((uVar26 & 1) == 0) {
LAB_004bd018:
    uVar19 = 0;
    plVar20 = plVar31;
  }
  else {
    puVar17 = local_70;
    if (local_70 != local_78) {
      do {
        plVar20 = (long *)FUN_0049e770(puVar10,0x18);
        if (plVar20 != (long *)0x0) {
          *plVar20 = 0;
          plVar20[1] = 0;
          plVar20[2] = 0;
        }
        puVar28 = puVar17 + -1;
        piVar33 = (int *)*puVar28;
        puVar21 = *(ulong **)(piVar33 + 0xc);
        if (puVar21 != (ulong *)0x0) {
          local_e0 = (int *)puVar12;
          local_100 = piVar33;
          if (*puVar21 != 0xffffffffffffffff) {
            local_1a0 = &local_e0;
            ppiStack_198 = &local_100;
            local_c0 = &local_1a0;
                    /* try { // try from 004bcd18 to 004bcd27 has its CatchHandler @ 004bda5c */
            std::__call_once(puVar21,&local_c0,(_func_void_void_ptr *)&LAB_004c0750);
          }
        }
        if (piVar33[0xe] == 10) {
                    /* try { // try from 004bcda0 to 004bcdaf has its CatchHandler @ 004bda5c */
          uVar19 = FUN_00515210(plVar20,*(undefined4 *)(puVar17[-1] + 0x44));
          FUN_0051496c(uVar19,plVar31);
        }
        else {
          if (piVar33[0xe] != 0xb) {
            if (plVar20 == (long *)0x0) goto LAB_004bd018;
            lVar14 = *plVar20;
            if (lVar14 != plVar20[1]) {
                    /* try { // try from 004bcfdc to 004bcfe3 has its CatchHandler @ 004bd860 */
              FUN_00514600(plVar20);
              lVar14 = *plVar20;
            }
            if (lVar14 != 0) {
              plVar20[1] = lVar14;
              FUN_0049e790(PTR_LAB_047cba48);
            }
            FUN_0049e790(PTR_LAB_047cba48,plVar20);
            uVar19 = 0;
            plVar20 = plVar31;
            goto joined_r0x004bd010;
          }
                    /* try { // try from 004bcd44 to 004bcd57 has its CatchHandler @ 004bda48 */
          uVar19 = FUN_005150f8(plVar20,*(undefined4 *)(puVar17[-1] + 0x44));
          FUN_0052d028(&local_c0,uVar19);
                    /* try { // try from 004bcd58 to 004bcd67 has its CatchHandler @ 004bda3c */
          FUN_0052cde4(&local_1a0,&local_c0,1);
                    /* try { // try from 004bcd6c to 004bcd87 has its CatchHandler @ 004bda4c */
          local_160 = FUN_005161f8(plVar31,local_160,&local_1a0);
          local_160 = FUN_0052c570(&local_1a0);
          FUN_0052cea4(&local_1a0);
        }
        if (plVar31 != (long *)0x0) {
          lVar14 = *plVar31;
          if (lVar14 != plVar31[1]) {
                    /* try { // try from 004bcdc0 to 004bcdc7 has its CatchHandler @ 004bda24 */
            FUN_00514600(plVar31);
            lVar14 = *plVar31;
          }
          if (lVar14 != 0) {
            plVar31[1] = lVar14;
            FUN_0049e790(puVar11);
          }
          FUN_0049e790(puVar11,plVar31);
        }
        plVar31 = plVar20;
        puVar17 = puVar28;
      } while (puVar28 != local_78);
    }
                    /* try { // try from 004bd044 to 004bd05f has its CatchHandler @ 004bda40 */
    (**(code **)(*param_2 + 0x98))(param_2);
    uVar19 = FUN_004efc34(extraout_x1_01,param_2);
    FUN_0051496c(uVar19,plVar20);
    if (piVar15[0xf] == 3) {
      local_1a0 = &local_a8;
                    /* try { // try from 004bd078 to 004bd08f has its CatchHandler @ 004bd9f0 */
      lVar14 = FUN_004c9000(param_1 + 6,&local_a8,&DAT_03d0681c,&local_1a0,&local_c0);
      iVar13 = *(int *)(lVar14 + 0x38);
      *(int *)(lVar14 + 0x38) = iVar13 + 1;
      if (local_a0 == local_98) {
        lVar14 = (long)local_a0 - (long)local_a8 >> 2;
        uVar26 = lVar14 + 1;
        if (uVar26 >> 0x3e != 0) {
                    /* try { // try from 004bd768 to 004bd76f has its CatchHandler @ 004bd9f0 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar24 = (long)local_98 - (long)local_a8 >> 1;
        if (uVar26 <= uVar24) {
          uVar26 = uVar24;
        }
        if (0x1ffffffffffffffe < (ulong)((long)local_98 - (long)local_a8 >> 2)) {
          uVar26 = 0x3fffffffffffffff;
        }
        if (uVar26 == 0) {
          lVar25 = 0;
        }
        else {
          lVar25 = FUN_0049e770(PTR_FUN_047cba38,uVar26 << 2);
        }
        piVar15 = (int *)(lVar25 + lVar14 * 4);
        sVar27 = (long)local_a0 - (long)local_a8;
        piVar33 = (int *)(lVar25 + uVar26 * 4);
        *piVar15 = iVar13;
        piVar29 = (int *)((long)piVar15 - sVar27);
        if (0 < (long)sVar27) {
          memcpy(piVar29,local_a8,sVar27);
        }
        bVar1 = local_a8 != (int *)0x0;
        local_a8 = piVar29;
        local_a0 = piVar15 + 1;
        local_98 = piVar33;
        if (bVar1) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      else {
        *local_a0 = iVar13;
        local_a0 = local_a0 + 1;
      }
    }
                    /* try { // try from 004bd660 to 004bd68f has its CatchHandler @ 004bda40 */
    local_1a0 = param_3;
    lVar14 = FUN_004c9274(param_1 + 3,param_3,&DAT_03d0681c,&local_1a0,&local_c0);
    if ((int **)(lVar14 + 0x38) != &local_a8) {
      FUN_002ce838((int **)(lVar14 + 0x38),local_a8,local_a0);
    }
    uVar19 = 1;
  }
joined_r0x004bd010:
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    if (lVar14 != plVar20[1]) {
                    /* try { // try from 004bd6a4 to 004bd6ab has its CatchHandler @ 004bda08 */
      FUN_00514600(plVar20);
      lVar14 = *plVar20;
    }
    if (lVar14 != 0) {
      plVar20[1] = lVar14;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar20);
  }
LAB_004bd6d4:
  if (local_a8 != (int *)0x0) {
    local_a0 = local_a8;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if ((local_90[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  if (local_78 != (ulong *)0x0) {
    local_70 = local_78;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar19;
}


