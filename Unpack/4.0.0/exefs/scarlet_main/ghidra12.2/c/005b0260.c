/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005b0260; name: FUN_005b0260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b0260(int *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,long param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  ulong *puVar15;
  long *plVar16;
  ulong *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined **local_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 *local_318;
  ulong uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined *local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  undefined8 local_2e8;
  undefined1 *local_2e0;
  undefined1 local_2d0;
  long local_2c8;
  undefined2 local_2c0;
  long local_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac;
  long *local_2a8;
  long *local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined1 *local_288;
  char local_280;
  undefined8 local_278;
  long local_270;
  undefined4 local_268;
  undefined1 local_264;
  undefined1 local_260;
  undefined1 *local_258;
  undefined1 *puStack_250;
  int *local_248;
  undefined8 uStack_240;
  undefined **local_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined **local_210;
  undefined **ppuStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined *local_1c8;
  undefined5 uStack_1c0;
  undefined3 local_1bb;
  undefined5 uStack_1b8;
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long *plStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long *plStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long *local_f0 [6];
  undefined *local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [32];
  long ****local_80;
  long ****local_78;
  long local_70;
  undefined1 local_64 [4];
  
  *param_1 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar17 = (ulong *)(param_1 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  *puVar17 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_2f8 = DAT_03cb54d0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_c0 = PTR_DAT_047cbe78 + 0x10;
  local_b8 = '\0';
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) goto LAB_005b0a2c;
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  puVar5 = PTR_DAT_047cbb08;
  local_b8 = '\x01';
  local_c0 = PTR_DAT_047cbe80 + 0x10;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x70))();
  plVar16 = *(long **)puVar5;
  local_80 = (long ****)&local_80;
  local_70 = 0;
  local_78 = local_80;
  uVar8 = (**(code **)(*plVar16 + 0x18))(plVar16,&local_2f8);
  local_b0 = (**(code **)(*plVar16 + 0x20))(plVar16,uVar8,&local_2f8,0);
  local_a8 = 1;
  (**(code **)(*param_2 + 0x18))(local_f0,param_2,param_3,param_4,&local_c0);
  puVar7 = PTR_DAT_047cc088;
  puVar6 = PTR_DAT_047cbe90;
  local_2f0 = local_2f0 & 0xffff0000;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = (undefined1 *)0x0;
  local_280 = '\0';
  local_268 = 0;
  local_264 = 0;
  local_260 = 0;
  local_2a8 = (long *)0x0;
  local_2a0 = (long *)0x0;
  local_278 = 0;
  local_270 = 0;
  local_2f8 = PTR_DAT_047cc088 + 0x10;
  local_200 = 0;
  local_1e8 = 0xffffffff;
  local_248 = (int *)0x0;
  uStack_240 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1c8 = PTR_DAT_047cbe90 + 0x10;
  local_1d0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1b8 = 0;
  local_150 = 0;
  uStack_1c0 = 0;
  local_1bb = 0;
  plStack_188 = (long *)0x0;
  local_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  plStack_158 = (long *)0x0;
  local_160 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_2b0 = 0;
  local_2ac = 0;
  local_2c8 = param_5;
  local_210 = &local_2f8;
  ppuStack_208 = &local_2f8;
  plVar9 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  plVar16 = local_2a0;
  puVar1 = PTR_DAT_047ce5e0 + 0x10;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)puVar1;
  puVar1 = PTR_DAT_047ce5e8;
  plVar9[4] = (long)&local_2c8;
  local_2a8 = plVar9 + 3;
  *local_2a8 = (long)(puVar1 + 0x10);
  if (local_2a0 == (long *)0x0) {
LAB_005b04e8:
    local_2a0 = plVar9;
    if (local_2c8 != 0) goto LAB_005b04f0;
LAB_005b07bc:
    (**(code **)*local_2a8)(&local_330,local_2a8,param_5);
    plVar16 = local_2a0;
    local_2a8 = (long *)0x0;
    local_2a0 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      plVar9 = plVar16 + 1;
      do {
        lVar12 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    plVar2 = local_2a0 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 != 0) goto LAB_005b04e8;
    lVar12 = *local_2a0;
    local_2a0 = plVar9;
    (**(code **)(lVar12 + 0x10))(plVar16);
    std::__shared_weak_count::__release_weak();
    if (local_2c8 == 0) goto LAB_005b07bc;
LAB_005b04f0:
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_310 = 0;
    local_318 = (undefined8 *)0x0;
    local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
    uStack_300 = 0;
    local_308 = 0;
  }
  *param_1 = (int)local_330;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 6));
  }
  uVar11 = 0;
  *(undefined8 **)(param_1 + 6) = local_318;
  *(undefined8 *)(param_1 + 4) = uStack_320;
  *puVar17 = uStack_328;
  uStack_328 = uStack_328 & 0xffffffffffff0000;
  puVar15 = (ulong *)(param_1 + 8);
  if ((*puVar15 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0xc));
    uVar11 = uStack_328 & 0xff;
  }
  *(undefined8 *)(param_1 + 0xc) = uStack_300;
  *(undefined8 *)(param_1 + 10) = local_308;
  *puVar15 = uStack_310;
  uStack_310 = uStack_310 & 0xffffffffffff0000;
  if ((uVar11 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_318);
  }
  if (*param_1 == 0) {
    local_2e0 = param_4 + 0x98;
    local_288 = param_4 + 0xb0;
    local_2ec = (uint)(byte)param_4[1] << 5 | (uint)(byte)param_4[3] << 4 |
                (uint)(byte)param_4[4] << 6 | (uint)(byte)param_4[2] << 7 |
                (uint)(byte)param_4[0x130] << 8;
    local_2d0 = 0;
    local_2f0._0_2_ = CONCAT11(1,(undefined1)local_2f0);
    *param_4 = 1;
    puStack_250 = param_4 + 0xe8;
    local_268 = CONCAT31(local_268._1_3_,1);
    local_264 = 1;
    local_278 = param_6;
    local_258 = param_4;
    local_248 = param_1;
    (**(code **)(**(long **)puVar5 + 0x138))(&local_330);
    uStack_228 = uStack_328;
    local_230 = local_330;
    puStack_218 = local_318;
    uStack_220 = uStack_320;
    (**(code **)(*local_f0[0] + 0x10))(local_f0[0],&local_2f8,local_f0);
    auVar21 = (**(code **)(**(long **)puVar5 + 0x1b0))(*(long **)puVar5,1);
    do {
      uVar11 = (**(code **)(**(long **)puVar5 + 0x48))
                         (*(long **)puVar5,local_b0,&local_2f8,auVar21._0_8_,auVar21._8_8_,0);
      local_64[0] = uVar11 >> 0x20 != 0;
      local_330 = &local_2f8;
      uVar11 = (**(code **)(local_2f8 + 0x10))(&local_2f8,&local_330,local_64);
      puVar1 = PTR_FUN_047cba38;
    } while ((uVar11 & 1) == 0);
    if (local_330 != &local_2f8) goto LAB_005b0a2c;
    if ((local_280 == '\0') && (*param_1 == 0)) {
      pcVar10 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
      pcVar10[0x25] = '\0';
      uVar20 = s_No_message_returned_for_unary_re_03c2b6c5._16_8_;
      uVar19 = s_No_message_returned_for_unary_re_03c2b6c5._0_8_;
      uVar8 = CONCAT35(s_No_message_returned_for_unary_re_03c2b6c5._29_3_,
                       s_No_message_returned_for_unary_re_03c2b6c5._24_5_);
      uVar18 = CONCAT53(s_No_message_returned_for_unary_re_03c2b6c5._32_5_,
                        s_No_message_returned_for_unary_re_03c2b6c5._29_3_);
      *(undefined8 *)(pcVar10 + 8) = s_No_message_returned_for_unary_re_03c2b6c5._8_8_;
      *(undefined8 *)pcVar10 = uVar19;
      *(undefined8 *)(pcVar10 + 0x18) = uVar8;
      *(undefined8 *)(pcVar10 + 0x10) = uVar20;
      *(undefined8 *)(pcVar10 + 0x1d) = uVar18;
      local_330 = (undefined **)CONCAT44(local_330._4_4_,0xc);
      local_318 = (undefined8 *)FUN_0049e770(puVar1,0x30);
      uStack_320 = _UNK_03caaf28;
      uStack_328 = _DAT_03caaf20;
      uVar18 = *(undefined8 *)(pcVar10 + 8);
      uVar8 = *(undefined8 *)pcVar10;
      uVar20 = *(undefined8 *)(pcVar10 + 0x18);
      uVar19 = *(undefined8 *)(pcVar10 + 0x10);
      *(undefined8 *)((long)local_318 + 0x1e) = *(undefined8 *)(pcVar10 + 0x1e);
      local_318[1] = uVar18;
      *local_318 = uVar8;
      local_318[3] = uVar20;
      local_318[2] = uVar19;
      local_308 = 0;
      uStack_300 = 0;
      uStack_310 = 0;
      *param_1 = (int)local_330;
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 6));
      }
      *(undefined8 **)(param_1 + 6) = local_318;
      *(undefined8 *)(param_1 + 4) = uStack_320;
      *puVar17 = uStack_328;
      uStack_328 = uStack_328 & 0xffffffffffff0000;
      if ((*puVar15 & 1) == 0) {
        *(undefined8 *)(param_1 + 0xc) = uStack_300;
        *(undefined8 *)(param_1 + 10) = local_308;
        *puVar15 = uStack_310;
        uStack_310 = uStack_310 & 0xffffffffffff0000;
      }
      else {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = uStack_300;
        *(undefined8 *)(param_1 + 10) = local_308;
        *puVar15 = uStack_310;
        uStack_310 = uStack_310 & 0xffffffffffff0000;
        if ((uStack_328 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_318);
        }
      }
      FUN_0049e790(PTR_LAB_047cba48,pcVar10);
    }
  }
  local_2f8 = puVar7 + 0x10;
  local_1c8 = puVar6 + 0x10;
  if (plStack_158 != (long *)0x0) {
    plVar16 = plStack_158 + 1;
    do {
      lVar12 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_188 != (long *)0x0) {
    plVar16 = plStack_188 + 1;
    do {
      lVar12 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_270 != 0) {
    (**(code **)(**(long **)puVar5 + 0xc0))();
  }
  if (local_2a0 != (long *)0x0) {
    plVar16 = local_2a0 + 1;
    do {
      lVar12 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_2a0 + 0x10))(local_2a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_2b8 != 0) {
    (**(code **)(**(long **)puVar5 + 0xc0))();
  }
  local_c0 = PTR_DAT_047cbe80 + 0x10;
  (**(code **)(**(long **)puVar5 + 0x40))(*(long **)puVar5,local_b0);
  if (local_70 != 0) {
    ppplVar13 = *local_78;
    ppplVar13[1] = (long **)local_80[1];
    *local_80[1] = (long **)ppplVar13;
    puVar1 = PTR_LAB_047cba48;
    local_70 = 0;
    pppplVar14 = local_78;
    while ((long *****)pppplVar14 != &local_80) {
      pppplVar14 = (long ****)pppplVar14[1];
      FUN_0049e790(puVar1);
    }
  }
  (**(code **)(**(long **)puVar5 + 0x78))(*(long **)puVar5,auStack_a0);
  local_c0 = PTR_DAT_047cbe78 + 0x10;
  if (local_b8 != '\0') {
    if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
LAB_005b0a2c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  }
  return;
}


