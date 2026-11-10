/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b980c; name: FUN_002b980c
 */


void FUN_002b980c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  void *pvVar19;
  byte *pbVar20;
  long *plVar21;
  byte *pbVar22;
  ulong *local_2d0;
  undefined8 local_2c8;
  long *plStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  long *local_280;
  long local_278;
  long local_270;
  long *local_268;
  long local_260;
  long local_258;
  ulong local_250;
  long lStack_248;
  long local_240;
  undefined8 local_238;
  ulong local_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulong local_210;
  long lStack_208;
  long local_200;
  undefined8 local_1f8;
  ulong local_1e8;
  size_t local_1e0;
  void *local_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 local_1c8;
  ulong local_1b8;
  size_t local_1b0;
  void *local_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 local_198;
  ulong local_188;
  size_t local_180;
  void *local_178;
  ulong local_170;
  size_t local_168;
  void *local_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *local_128;
  long local_120;
  long local_118;
  long *local_110;
  long local_108;
  long local_100;
  char local_f8 [8];
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  char local_d8 [8];
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 *local_98 [4];
  undefined1 auStack_78 [24];
  
  lVar16 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x30);
  if (((lVar16 == 0) || (*(long **)(lVar16 + 0x10) != param_1)) ||
     (plVar21 = param_1 + 0xd, *plVar21 == 0)) {
    plVar21 = param_1 + 1;
    do {
      lVar16 = *plVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar2) {
        *plVar21 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
    return;
  }
  FUN_0036a9d0(auStack_78);
  FUN_0036aad0(local_98,auStack_78);
  FUN_0036aa00(auStack_78);
  FUN_0036a810(param_1[0xd]);
  param_1[0xd] = 0;
  puVar5 = PTR_PTR_047cc6f8;
  local_d8[0] = '\0';
  uStack_c8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_f8[0] = '\0';
  local_e0 = 0;
  local_f0 = 0;
  lStack_e8 = 0;
  local_130 = 0;
  local_148 = 0;
  local_160 = (void *)0x0;
  local_108 = 0;
  local_100 = 0;
  local_118 = 0;
  local_120 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_170 = 0;
  local_168 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  lVar16 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
  pcVar18 = *(char **)PTR_PTR_047cc6f8;
  local_128 = &local_120;
  local_110 = &local_108;
  sVar12 = strlen(pcVar18);
  if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 002ba4c8 to 002ba4cf has its CatchHandler @ 002ba52c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_188 = CONCAT71(local_188._1_7_,(char)((int)sVar12 << 1));
    pvVar19 = (void *)((ulong)&local_188 | 1);
    if (sVar12 != 0) goto LAB_002b9988;
  }
  else {
    uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
    pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
    local_188 = uVar13 | 1;
    local_180 = sVar12;
    local_178 = pvVar19;
LAB_002b9988:
    memcpy(pvVar19,pcVar18,sVar12);
  }
  *(undefined1 *)((long)pvVar19 + sVar12) = 0;
                    /* try { // try from 002b999c to 002b99ab has its CatchHandler @ 002ba774 */
  FUN_002b5360(&local_2d0,param_1,&local_188);
  pcVar18 = *(char **)PTR_PTR_047cc700;
  sVar12 = strlen(pcVar18);
  if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 002ba4d0 to 002ba4d7 has its CatchHandler @ 002ba524 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_1b8 = CONCAT71(local_1b8._1_7_,(char)((int)sVar12 << 1));
    pvVar19 = (void *)((ulong)&local_1b8 | 1);
    if (sVar12 != 0) goto LAB_002b9a14;
  }
  else {
    uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
    pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
    local_1b8 = uVar13 | 1;
    local_1b0 = sVar12;
    local_1a8 = pvVar19;
LAB_002b9a14:
    memcpy(pvVar19,pcVar18,sVar12);
  }
  *(undefined1 *)((long)pvVar19 + sVar12) = 0;
                    /* try { // try from 002b9a28 to 002b9a37 has its CatchHandler @ 002ba748 */
  FUN_002b5360(auStack_1a0,param_1,&local_1b8);
  pcVar18 = *(char **)PTR_PTR_047cc710;
  sVar12 = strlen(pcVar18);
  if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 002ba4d8 to 002ba4df has its CatchHandler @ 002ba51c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_1e8 = CONCAT71(local_1e8._1_7_,(char)((int)sVar12 << 1));
    pvVar19 = (void *)((ulong)&local_1e8 | 1);
    if (sVar12 != 0) goto LAB_002b9aa0;
  }
  else {
    uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
    pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
    local_1e8 = uVar13 | 1;
    local_1e0 = sVar12;
    local_1d8 = pvVar19;
LAB_002b9aa0:
    memcpy(pvVar19,pcVar18,sVar12);
  }
  *(undefined1 *)((long)pvVar19 + sVar12) = 0;
                    /* try { // try from 002b9ab4 to 002b9ac3 has its CatchHandler @ 002ba71c */
  FUN_002b5360(auStack_1d0,param_1,&local_1e8);
                    /* try { // try from 002b9acc to 002b9b07 has its CatchHandler @ 002ba708 */
  uVar13 = FUN_002a6f08(lVar16 + 0x38,local_98,lVar16 + 0x80,&local_2d0,auStack_1a0,auStack_1d0,
                        local_d8,local_f8,&local_110,&local_128,&local_140,&local_158,&local_170);
  FUN_002c3d2c(auStack_1d0,local_1c8);
  if ((local_1e8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1d8);
  }
  FUN_002c3d2c(auStack_1a0,local_198);
  if ((local_1b8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1a8);
  }
  FUN_002c3d2c(&local_2d0,local_2c8);
  if ((local_188 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_178);
  }
  if ((local_98[0] != (undefined8 *)0x0) && (plVar17 = (long *)*local_98[0], plVar17 != (long *)0x0)
     ) {
    do {
      lVar16 = *plVar17;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar2) {
        *plVar17 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 + -1 == 0) {
                    /* try { // try from 002b9ba0 to 002b9ba3 has its CatchHandler @ 002ba704 */
      (*(code *)local_98[0][3])(local_98[0][4]);
    }
  }
  sVar12 = local_170 >> 1 & 0x7f;
  if ((local_170 & 1) != 0) {
    sVar12 = local_168;
  }
  if (sVar12 == 0) {
    if (4 < uVar13) {
                    /* try { // try from 002b9c48 to 002b9c4f has its CatchHandler @ 002ba704 */
      FUN_00350fd0(uVar13);
    }
    goto LAB_002ba1c0;
  }
  local_2d0 = &local_170;
                    /* try { // try from 002b9bc8 to 002b9c3b has its CatchHandler @ 002ba794 */
  lVar16 = FUN_002c3ab0(param_1 + 0x21,&local_170,&DAT_03cc9966,&local_2d0,&local_188);
  if ((*(byte *)(lVar16 + 0x50) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar16 + 0x60));
  }
  *(undefined8 *)(lVar16 + 0x60) = local_148;
  *(undefined8 *)(lVar16 + 0x58) = uStack_150;
  *(ulong *)(lVar16 + 0x50) = local_158;
  local_158 = local_158 & 0xffffffffffff0000;
  if (uVar13 != 0) {
    if (4 < *(ulong *)(lVar16 + 0x68)) {
      FUN_00350fd0();
    }
    *(ulong *)(lVar16 + 0x68) = uVar13;
    FUN_002b4f10(param_1,&local_170);
    goto LAB_002ba1c0;
  }
  *(undefined1 *)((long)param_1 + 0x19) = 1;
  pcVar18 = *(char **)PTR_PTR_047cc6f0;
  sVar12 = strlen(pcVar18);
  uVar13 = local_168;
  uVar7 = local_170;
  bVar6 = (byte)local_170;
  if ((local_170 & 1) == 0) {
    uVar13 = (ulong)((byte)local_170 >> 1);
    if (sVar12 == uVar13) {
      if (sVar12 == 0xffffffffffffffff) {
LAB_002ba4e8:
                    /* try { // try from 002ba4e8 to 002ba4ef has its CatchHandler @ 002ba514 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pvVar19 = (void *)((ulong)&local_170 | 1);
LAB_002b9cb4:
      if ((sVar12 != 0) && (iVar11 = memcmp(pvVar19,pcVar18,sVar12), iVar11 != 0)) {
        pcVar18 = *(char **)puVar5;
        uVar14 = strlen(pcVar18);
        if ((uVar7 & 1) != 0) {
          uVar13 = local_168;
          goto LAB_002b9e58;
        }
        uVar13 = (ulong)(bVar6 >> 1);
        goto LAB_002b9e18;
      }
      uVar10 = local_a0;
      lVar3 = lStack_a8;
      lVar4 = local_b0;
      uVar9 = local_c0;
      uVar8 = uStack_c8;
      uVar13 = local_d0;
      lStack_208 = 0;
      local_210 = 0;
      local_1f8 = 0;
      local_200 = 0;
      uStack_228 = 0;
      local_230 = 0;
      local_218 = 0;
      uStack_220 = 0;
      if (local_d8[0] != '\0') {
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        local_218 = uVar9;
        uStack_220 = uVar8;
        uStack_228 = uVar13;
        lStack_208 = 0;
        local_1f8 = 0;
        local_200 = 0;
        if ((char)uStack_b8 != '\0') {
          lStack_a8 = 0;
          local_b0 = 0;
          local_a0 = 0;
          local_200 = lVar3;
          lStack_208 = lVar4;
          local_1f8 = uVar10;
        }
        local_210 = (ulong)((char)uStack_b8 != '\0');
        local_230 = 1;
      }
                    /* try { // try from 002b9d48 to 002b9d53 has its CatchHandler @ 002ba618 */
      FUN_002b56e4(param_1,&local_230);
      lVar4 = lStack_208;
      puVar5 = PTR_LAB_047cba48;
      if ((char)local_230 != '\0') {
        if ((char)local_210 != '\0') {
          lVar3 = local_200;
          if (lStack_208 != 0) {
            while (lVar3 != lVar4) {
              pbVar20 = *(byte **)(lVar3 + -0x18);
              if (pbVar20 != (byte *)0x0) {
                if (*(byte **)(lVar3 + -0x10) == pbVar20) {
                  pbVar15 = pbVar20;
                }
                else {
                  pbVar15 = *(byte **)(lVar3 + -0x10);
                  do {
                    pbVar22 = pbVar15 + -0x20;
                    if ((*pbVar22 & 1) != 0) {
                      FUN_0049e790(puVar5,*(undefined8 *)(pbVar15 + -0x10));
                    }
                    pbVar15 = pbVar22;
                  } while (pbVar20 != pbVar22);
                  pbVar15 = *(byte **)(lVar3 + -0x18);
                }
                *(byte **)(lVar3 + -0x10) = pbVar20;
                FUN_0049e790(puVar5,pbVar15);
              }
              if ((*(byte *)(lVar3 + -0x30) & 1) != 0) {
                FUN_0049e790(puVar5,*(undefined8 *)(lVar3 + -0x20));
              }
              FUN_002c13ac(lVar3 + -0x78);
              lVar3 = lVar3 + -0x78;
            }
            local_200 = lVar4;
            FUN_0049e790(PTR_LAB_047cba48,lStack_208);
          }
          local_210 = local_210 & 0xffffffffffffff00;
        }
        if ((uStack_228 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_218);
        }
        local_230 = local_230 & 0xffffffffffffff00;
      }
    }
    else {
      pcVar18 = *(char **)puVar5;
      uVar14 = strlen(pcVar18);
LAB_002b9e18:
      if (uVar14 == uVar13) {
        pvVar19 = (void *)((ulong)&local_170 | 1);
        goto LAB_002b9e6c;
      }
      pcVar18 = *(char **)PTR_PTR_047cc700;
      uVar14 = strlen(pcVar18);
LAB_002b9e9c:
      if (uVar14 == uVar13) {
        pvVar19 = (void *)((ulong)&local_170 | 1);
        goto LAB_002b9fe8;
      }
      pcVar18 = *(char **)PTR_PTR_047cc710;
      uVar14 = strlen(pcVar18);
LAB_002ba018:
      if (uVar14 == uVar13) {
        pvVar19 = (void *)((ulong)&local_170 | 1);
        goto LAB_002ba0b0;
      }
    }
  }
  else {
    if (sVar12 == local_168) {
      if (sVar12 == 0xffffffffffffffff) goto LAB_002ba4e8;
      pvVar19 = local_160;
      goto LAB_002b9cb4;
    }
    pcVar18 = *(char **)puVar5;
    uVar14 = strlen(pcVar18);
LAB_002b9e58:
    if (uVar14 == uVar13) {
      if (uVar13 == 0xffffffffffffffff) {
                    /* try { // try from 002ba4f0 to 002ba4f7 has its CatchHandler @ 002ba510 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pvVar19 = local_160;
LAB_002b9e6c:
      if ((uVar13 == 0) || (iVar11 = memcmp(pvVar19,pcVar18,uVar13), iVar11 == 0)) {
        uVar8 = local_e0;
        lVar3 = lStack_e8;
        lVar4 = local_f0;
        lStack_248 = 0;
        local_238 = 0;
        local_240 = 0;
        if (local_f8[0] != '\0') {
          lStack_e8 = 0;
          local_f0 = 0;
          local_e0 = 0;
          local_240 = lVar3;
          lStack_248 = lVar4;
          local_238 = uVar8;
        }
                    /* try { // try from 002b9ee4 to 002b9eef has its CatchHandler @ 002ba558 */
        local_250 = (ulong)(local_f8[0] != '\0');
        FUN_002b7720(param_1,&local_250);
        lVar4 = lStack_248;
        puVar5 = PTR_LAB_047cba48;
        if ((char)local_250 != '\0') {
          lVar3 = local_240;
          if (lStack_248 != 0) {
            while (lVar3 != lVar4) {
              pbVar20 = *(byte **)(lVar3 + -0x18);
              if (pbVar20 != (byte *)0x0) {
                if (*(byte **)(lVar3 + -0x10) == pbVar20) {
                  pbVar15 = pbVar20;
                }
                else {
                  pbVar15 = *(byte **)(lVar3 + -0x10);
                  do {
                    pbVar22 = pbVar15 + -0x20;
                    if ((*pbVar22 & 1) != 0) {
                      FUN_0049e790(puVar5,*(undefined8 *)(pbVar15 + -0x10));
                    }
                    pbVar15 = pbVar22;
                  } while (pbVar20 != pbVar22);
                  pbVar15 = *(byte **)(lVar3 + -0x18);
                }
                *(byte **)(lVar3 + -0x10) = pbVar20;
                FUN_0049e790(puVar5,pbVar15);
              }
              if ((*(byte *)(lVar3 + -0x30) & 1) != 0) {
                FUN_0049e790(puVar5,*(undefined8 *)(lVar3 + -0x20));
              }
              FUN_002c13ac(lVar3 + -0x78);
              lVar3 = lVar3 + -0x78;
            }
            local_240 = lVar4;
            FUN_0049e790(PTR_LAB_047cba48,lStack_248);
          }
          local_250 = local_250 & 0xffffffffffffff00;
        }
        goto LAB_002ba168;
      }
      pcVar18 = *(char **)PTR_PTR_047cc700;
      uVar14 = strlen(pcVar18);
      if ((uVar7 & 1) == 0) {
        uVar13 = (ulong)(bVar6 >> 1);
        goto LAB_002b9e9c;
      }
      uVar13 = local_168;
    }
    else {
      pcVar18 = *(char **)PTR_PTR_047cc700;
      uVar14 = strlen(pcVar18);
    }
    if (uVar14 == uVar13) {
      if (uVar13 == 0xffffffffffffffff) {
                    /* try { // try from 002ba4f8 to 002ba4ff has its CatchHandler @ 002ba50c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pvVar19 = local_160;
LAB_002b9fe8:
      if ((uVar13 == 0) || (iVar11 = memcmp(pvVar19,pcVar18,uVar13), iVar11 == 0)) {
        local_268 = local_110;
        local_260 = local_108;
        local_258 = local_100;
        if (local_100 == 0) {
          local_268 = &local_260;
        }
        else {
          *(long **)(local_108 + 0x10) = &local_260;
          local_108 = 0;
          local_100 = 0;
          local_110 = &local_108;
        }
                    /* try { // try from 002ba074 to 002ba07f has its CatchHandler @ 002ba544 */
        FUN_002b7c88(param_1,&local_268);
        FUN_002c523c(&local_268,local_260);
        goto LAB_002ba168;
      }
      pcVar18 = *(char **)PTR_PTR_047cc710;
      uVar14 = strlen(pcVar18);
      if ((uVar7 & 1) == 0) {
        uVar13 = (ulong)(bVar6 >> 1);
        goto LAB_002ba018;
      }
      uVar13 = local_168;
    }
    else {
      pcVar18 = *(char **)PTR_PTR_047cc710;
      uVar14 = strlen(pcVar18);
    }
    if (uVar14 == uVar13) {
      if (uVar13 == 0xffffffffffffffff) {
                    /* try { // try from 002ba500 to 002ba507 has its CatchHandler @ 002ba508 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pvVar19 = local_160;
LAB_002ba0b0:
      if ((uVar13 == 0) || (iVar11 = memcmp(pvVar19,pcVar18,uVar13), iVar11 == 0)) {
        local_280 = local_128;
        local_278 = local_120;
        local_270 = local_118;
        if (local_118 == 0) {
          local_280 = &local_278;
        }
        else {
          *(long **)(local_120 + 0x10) = &local_278;
          local_120 = 0;
          local_118 = 0;
          local_128 = &local_120;
        }
                    /* try { // try from 002ba0fc to 002ba107 has its CatchHandler @ 002ba530 */
        FUN_002b8d9c(param_1,&local_280);
        FUN_002c52d4(&local_280,local_278);
      }
    }
  }
LAB_002ba168:
  if ((*(byte *)(lVar16 + 0x38) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar16 + 0x48));
  }
  *(undefined8 *)(lVar16 + 0x48) = local_130;
  *(undefined8 *)(lVar16 + 0x40) = uStack_138;
  *(ulong *)(lVar16 + 0x38) = local_140;
  local_140 = local_140 & 0xffffffffffff0000;
                    /* try { // try from 002ba198 to 002ba1a3 has its CatchHandler @ 002ba794 */
  FUN_002b4f10(param_1,&local_170);
  lVar16 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x38);
  if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
                    /* try { // try from 002ba1bc to 002ba1bf has its CatchHandler @ 002ba6fc */
    FUN_002ba9b8();
  }
LAB_002ba1c0:
  if (*(char *)(*(long *)(*(long *)(param_1[2] + 0x18) + 0x10) + 0x168) == '\0') {
    local_2c8 = 0;
    local_288 = 0;
    local_2d0 = DAT_03cb5678;
    uStack_290 = 0;
    local_298 = 0;
    uStack_2a0 = 0;
    local_2a8 = 0;
    uStack_2b0 = 0;
    local_2b8 = 0;
    plStack_2c0 = plVar21;
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002ba4e0 to 002ba4e3 has its CatchHandler @ 002ba518 */
      abort();
    }
                    /* try { // try from 002ba240 to 002ba24b has its CatchHandler @ 002ba700 */
    iVar11 = FUN_0036cee0(param_1[4],&local_2d0,1,param_1 + 0xe);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002ba4e4 to 002ba4e7 has its CatchHandler @ 002ba700 */
      abort();
    }
  }
  else {
    plVar21 = param_1 + 1;
    do {
      lVar16 = *plVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar2) {
        *plVar21 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
    }
  }
  if ((local_170 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_160);
  }
  if ((local_158 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_148);
  }
  if ((local_140 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_130);
  }
  FUN_002c52d4(&local_128,local_120);
  FUN_002c523c(&local_110,local_108);
  lVar16 = local_f0;
  puVar5 = PTR_LAB_047cba48;
  if (local_f8[0] != '\0') {
    lVar4 = lStack_e8;
    if (local_f0 != 0) {
      while (lVar4 != lVar16) {
        pbVar20 = *(byte **)(lVar4 + -0x18);
        if (pbVar20 != (byte *)0x0) {
          if (*(byte **)(lVar4 + -0x10) == pbVar20) {
            pbVar15 = pbVar20;
          }
          else {
            pbVar15 = *(byte **)(lVar4 + -0x10);
            do {
              pbVar22 = pbVar15 + -0x20;
              if ((*pbVar22 & 1) != 0) {
                FUN_0049e790(puVar5,*(undefined8 *)(pbVar15 + -0x10));
              }
              pbVar15 = pbVar22;
            } while (pbVar20 != pbVar22);
            pbVar15 = *(byte **)(lVar4 + -0x18);
          }
          *(byte **)(lVar4 + -0x10) = pbVar20;
          FUN_0049e790(puVar5,pbVar15);
        }
        if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
          FUN_0049e790(puVar5,*(undefined8 *)(lVar4 + -0x20));
        }
        FUN_002c13ac(lVar4 + -0x78);
        lVar4 = lVar4 + -0x78;
      }
      lStack_e8 = lVar16;
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
    local_f8[0] = '\0';
  }
  lVar16 = local_b0;
  puVar5 = PTR_LAB_047cba48;
  if (local_d8[0] != '\0') {
    if ((char)uStack_b8 != '\0') {
      lVar4 = lStack_a8;
      if (local_b0 != 0) {
        while (lVar4 != lVar16) {
          pbVar20 = *(byte **)(lVar4 + -0x18);
          if (pbVar20 != (byte *)0x0) {
            if (*(byte **)(lVar4 + -0x10) == pbVar20) {
              pbVar15 = pbVar20;
            }
            else {
              pbVar15 = *(byte **)(lVar4 + -0x10);
              do {
                pbVar22 = pbVar15 + -0x20;
                if ((*pbVar22 & 1) != 0) {
                  FUN_0049e790(puVar5,*(undefined8 *)(pbVar15 + -0x10));
                }
                pbVar15 = pbVar22;
              } while (pbVar20 != pbVar22);
              pbVar15 = *(byte **)(lVar4 + -0x18);
            }
            *(byte **)(lVar4 + -0x10) = pbVar20;
            FUN_0049e790(puVar5,pbVar15);
          }
          if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
            FUN_0049e790(puVar5,*(undefined8 *)(lVar4 + -0x20));
          }
          FUN_002c13ac(lVar4 + -0x78);
          lVar4 = lVar4 + -0x78;
        }
        lStack_a8 = lVar16;
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
      }
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    }
    if ((local_d0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
  }
  return;
}


