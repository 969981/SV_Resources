/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00764c40; name: FUN_00764c40
 */


void FUN_00764c40(long *param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined **local_230;
  ulong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  long local_1e0;
  undefined1 local_1d0;
  long local_1c8;
  undefined2 local_1c0;
  long local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  long *local_1a8;
  long *local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined **local_188;
  undefined **ppuStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined *local_140;
  undefined5 uStack_138;
  undefined3 local_133;
  undefined5 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *plStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_64 [4];
  
  param_1[2] = param_4;
  puVar1 = PTR_DAT_047d0630 + 0x50;
  *param_1 = (long)(PTR_DAT_047d0630 + 0x10);
  param_1[1] = (long)puVar1;
  local_1f8 = DAT_03cb54d0;
  local_1f0 = 0;
  local_1e8 = 0;
  param_1[3] = (long)(PTR_DAT_047cbe78 + 0x10);
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) goto LAB_00765118;
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  puVar1 = PTR_DAT_047cbe80;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = (long)(puVar1 + 0x10);
  puVar5 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x70))(*(long **)PTR_DAT_047cbb08,param_1 + 7);
  param_1[0xb] = (long)(param_1 + 0xb);
  param_1[0xc] = (long)(param_1 + 0xb);
  param_1[0xd] = 0;
  plVar14 = *(long **)puVar5;
  uVar10 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_1f8);
  lVar11 = (**(code **)(*plVar14 + 0x20))(plVar14,uVar10,&local_1f8,0);
  param_1[5] = lVar11;
  plVar14 = param_1 + 0xe;
  param_1[6] = 1;
  (**(code **)(*param_2 + 0x18))(plVar14,param_2,param_3,param_4,param_1 + 3);
  puVar7 = PTR_DAT_047ce3d8;
  puVar6 = PTR_DAT_047cbe90;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1a8 = (long *)0x0;
  local_1a0 = (long *)0x0;
  local_198 = 0;
  local_190 = 0;
  local_1f8 = PTR_DAT_047ce3d8 + 0x10;
  local_178 = 0;
  local_160 = 0xffffffff;
  local_170 = 0;
  uStack_168 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_140 = PTR_DAT_047cbe90 + 0x10;
  local_148 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_130 = 0;
  local_c8 = 0;
  uStack_138 = 0;
  local_133 = 0;
  local_1e0 = param_4 + 0x98;
  plStack_d0 = (long *)0x0;
  local_d8 = 0;
  uStack_110 = 0;
  local_118 = 0;
  local_100 = (long *)0x0;
  uStack_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  local_78 = 0;
  local_1ec = (uint)*(byte *)(param_4 + 1) << 5 | (uint)*(byte *)(param_4 + 3) << 4 |
              (uint)*(byte *)(param_4 + 4) << 6 | (uint)*(byte *)(param_4 + 2) << 7 |
              (uint)*(byte *)(param_4 + 0x130) << 8;
  local_1d0 = 0;
  local_1f0 = CONCAT22((short)((uint)local_1f0 >> 0x10),0x100);
  local_1b0 = 0;
  local_1ac = 0;
  local_1c8 = param_5;
  local_188 = &local_1f8;
  ppuStack_180 = &local_1f8;
  plVar12 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  plVar9 = local_1a0;
  puVar1 = PTR_DAT_047d0638 + 0x10;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)puVar1;
  puVar1 = PTR_DAT_047d0640;
  plVar12[4] = (long)&local_1c8;
  local_1a8 = plVar12 + 3;
  *local_1a8 = (long)(puVar1 + 0x10);
  if (local_1a0 == (long *)0x0) {
LAB_00764ea8:
    local_1a0 = plVar12;
    if (local_1c8 != 0) goto LAB_00764eb0;
LAB_007650c0:
    (**(code **)*local_1a8)(&local_230,local_1a8,param_5);
    plVar9 = local_1a0;
    local_1a8 = (long *)0x0;
    local_1a0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 1;
      do {
        lVar11 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    plVar2 = local_1a0 + 1;
    do {
      lVar11 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) goto LAB_00764ea8;
    lVar11 = *local_1a0;
    local_1a0 = plVar12;
    (**(code **)(lVar11 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
    if (local_1c8 == 0) goto LAB_007650c0;
LAB_00764eb0:
    uStack_220 = 0;
    local_228 = 0;
    uStack_210 = 0;
    local_218 = 0;
    local_230 = (undefined **)((ulong)local_230 & 0xffffffff00000000);
    uStack_200 = 0;
    local_208 = 0;
  }
  iVar8 = (int)local_230;
  if ((uStack_210 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_200);
  }
  if ((local_228 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_218);
  }
  if (iVar8 == 0) {
    local_190 = CONCAT11(1,(undefined1)local_190);
    (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,&local_1f8,plVar14);
    auVar15 = (**(code **)(**(long **)puVar5 + 0x1b0))(*(long **)puVar5,1);
    do {
      uVar13 = (**(code **)(**(long **)puVar5 + 0x48))
                         (*(long **)puVar5,param_1[5],&local_1f8,auVar15._0_8_,auVar15._8_8_,0);
      local_64[0] = uVar13 >> 0x20 != 0;
      local_230 = &local_1f8;
      uVar13 = (**(code **)(local_1f8 + 0x10))(&local_1f8,&local_230,local_64);
    } while ((uVar13 & 1) == 0);
    if (local_230 == &local_1f8) {
      local_1f8 = puVar7 + 0x10;
      local_140 = puVar6 + 0x10;
      if (plStack_d0 != (long *)0x0) {
        plVar14 = plStack_d0 + 1;
        do {
          lVar11 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_100 != (long *)0x0) {
        plVar14 = local_100 + 1;
        do {
          lVar11 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1a0 != (long *)0x0) {
        plVar14 = local_1a0 + 1;
        do {
          lVar11 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_1a0 + 0x10))(local_1a0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1b8 != 0) {
        (**(code **)(**(long **)puVar5 + 0xc0))();
      }
      return;
    }
  }
LAB_00765118:
                    /* WARNING: Subroutine does not return */
  abort();
}


