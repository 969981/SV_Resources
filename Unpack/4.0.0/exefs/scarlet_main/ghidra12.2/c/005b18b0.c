/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005b18b0; name: FUN_005b18b0
 */


void FUN_005b18b0(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  long local_1a0;
  undefined1 local_190;
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
  undefined8 local_108;
  long *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *plStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_68;
  undefined1 local_54 [4];
  
  puVar1 = PTR_DAT_047ce5f0 + 0x10;
  puVar2 = PTR_DAT_047ce5f0 + 0x60;
  param_1[2] = (long)(PTR_DAT_047ce5f0 + 0x88);
  param_1[3] = param_4;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  local_1b0 = 0;
  local_1b8 = DAT_03cb54d0;
  local_1a8 = 0;
  param_1[4] = (long)(PTR_DAT_047cbe78 + 0x10);
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
LAB_005b1bf8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  puVar1 = PTR_DAT_047cbe80;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[4] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x70))(*(long **)PTR_DAT_047cbb08,param_1 + 8);
  param_1[0xc] = (long)(param_1 + 0xc);
  param_1[0xd] = (long)(param_1 + 0xc);
  param_1[0xe] = 0;
  plVar9 = *(long **)puVar1;
  uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,&local_1b8);
  lVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,uVar6,&local_1b8,0);
  param_1[6] = lVar7;
  plVar9 = param_1 + 0xf;
  param_1[7] = 1;
  (**(code **)(*param_2 + 0x18))(plVar9,param_2,param_3,param_4,param_1 + 4);
  puVar5 = PTR_DAT_047ce5f8;
  puVar2 = PTR_DAT_047cbe90;
  if (*(char *)(param_1[3] + 0x130) == '\0') {
    local_1b8 = PTR_DAT_047ce5f8 + 0x10;
    local_170 = 0;
    uStack_168 = 0;
    local_178 = 0;
    local_160 = 0xffffffff;
    local_148 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_140 = PTR_DAT_047cbe90 + 0x10;
    uStack_138 = 0;
    local_128 = 0;
    local_120 = 0;
    local_78 = 0;
    uStack_110 = 0;
    local_118 = 0;
    plStack_100 = (long *)0x0;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    plStack_d0 = (long *)0x0;
    local_d8 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = 0;
    local_1a0 = param_4 + 0x98;
    local_133 = 0;
    uStack_130 = 0;
    local_c8 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    local_1ac = (uint)*(byte *)(param_4 + 1) << 5 | (uint)*(byte *)(param_4 + 3) << 4 |
                (uint)*(byte *)(param_4 + 4) << 6 | (uint)*(byte *)(param_4 + 2) << 7 |
                (uint)*(byte *)(param_4 + 0x130) << 8;
    local_190 = 0;
    local_1b0 = CONCAT22((short)((uint)local_1b0 >> 0x10),0x100);
    local_188 = &local_1b8;
    ppuStack_180 = &local_1b8;
    (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,&local_1b8,plVar9);
    auVar10 = (**(code **)(**(long **)puVar1 + 0x1b0))(*(long **)puVar1,1);
    do {
      uVar8 = (**(code **)(**(long **)puVar1 + 0x48))
                        (*(long **)puVar1,param_1[6],&local_1b8,auVar10._0_8_,auVar10._8_8_,0);
      local_54[0] = uVar8 >> 0x20 != 0;
      local_68 = &local_1b8;
      uVar8 = (**(code **)(local_1b8 + 0x10))(&local_1b8,&local_68,local_54);
    } while ((uVar8 & 1) == 0);
    if (local_68 != &local_1b8) goto LAB_005b1bf8;
    local_1b8 = puVar5 + 0x10;
    local_140 = puVar2 + 0x10;
    if (plStack_d0 != (long *)0x0) {
      plVar9 = plStack_d0 + 1;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_100 != (long *)0x0) {
      plVar9 = plStack_100 + 1;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


