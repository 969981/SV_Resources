/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bb5dc; name: FUN_027bb5dc
 */


void FUN_027bb5dc(long param_1)

{
  undefined7 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint local_190 [2];
  byte local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  long *plStack_170;
  char local_168;
  undefined1 auStack_160 [8];
  undefined8 local_158;
  byte local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  long *plStack_128;
  byte local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  long *plStack_108;
  undefined1 auStack_100 [32];
  undefined8 local_e0;
  long *local_d8;
  undefined1 auStack_d0 [8];
  long *local_c8;
  undefined1 auStack_c0 [8];
  long *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *plStack_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined7 *local_40;
  long *plStack_38;
  
  if (*(int *)(param_1 + 0x4c) == 1) {
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar5 = (**(code **)(*plVar4 + 0x20))();
    if ((uVar5 & 1) == 0) {
      return;
    }
    FUN_027bade0(local_190,(long *)(param_1 + 0x68));
    uVar5 = FUN_027bae4c(local_190);
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar5 = uVar5 & 0xffffffff | (ulong)local_190[0] << 0x20;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      uVar5 = uVar5 & 0xffffffff | (ulong)local_190[0] << 0x20;
    }
    *(ulong *)(param_1 + 0x44) = uVar5;
    if (local_190[0] == 0) {
      FUN_027bae98(param_1 + 0x78,&local_140);
    }
    *(undefined4 *)(param_1 + 0x4c) = 2;
    FUN_01cfa410(auStack_100);
  }
  else {
    if (*(int *)(param_1 + 0x4c) != 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar5 = (**(code **)(*plVar4 + 0x20))();
    if ((uVar5 & 1) == 0) {
      return;
    }
    FUN_027bb0f8(local_190,(long *)(param_1 + 0x58));
    if (local_190[0] == 0) {
      FUN_01cfa5b0(&local_70,&local_140);
      FUN_01cfa5b0(&local_50,&local_120);
      puVar1 = &uStack_4f;
      if ((local_50 & 1) != 0) {
        puVar1 = local_40;
      }
      FUN_027bb924(auStack_c0,*(undefined8 *)(param_1 + 0x50),puVar1);
      local_e0 = 0;
      local_d8 = (long *)0x0;
      FUN_027b8048(auStack_d0,auStack_c0,&local_e0);
      FUN_027bbaa4(param_1 + 0x68,auStack_d0);
      if (local_c8 != (long *)0x0) {
        plVar4 = local_c8 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_d8 != (long *)0x0) {
        plVar4 = local_d8 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined4 *)(param_1 + 0x4c) = 1;
      if ((local_90 & 1) != 0) {
        (**(code **)(*plStack_78 + 0x18))
                  (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
      }
      if ((local_b0 & 1) != 0) {
        (**(code **)(*plStack_98 + 0x18))
                  (plStack_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
      }
      if (local_b8 != (long *)0x0) {
        plVar4 = local_b8 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((local_50 & 1) != 0) {
        (**(code **)(*plStack_38 + 0x18))
                  (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
      }
      if ((local_70 & 1) != 0) {
        (**(code **)(*plStack_58 + 0x18))
                  (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
      }
    }
    else {
      uVar5 = FUN_027bb164(local_190);
      if (*(char *)(param_1 + 0x40) == '\0') {
        uVar5 = uVar5 & 0xffffffff | (ulong)local_190[0] << 0x20;
        *(undefined1 *)(param_1 + 0x40) = 1;
      }
      else {
        uVar5 = uVar5 & 0xffffffff | (ulong)local_190[0] << 0x20;
      }
      *(ulong *)(param_1 + 0x44) = uVar5;
      *(undefined4 *)(param_1 + 0x4c) = 2;
    }
  }
  if ((local_120 & 1) != 0) {
    (**(code **)(*plStack_108 + 0x18))
              (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1);
  }
  if ((local_140 & 1) != 0) {
    (**(code **)(*plStack_128 + 0x18))
              (plStack_128,local_130,CONCAT71(uStack_13f,local_140) & 0xfffffffffffffffe,1);
  }
  if (local_168 != '\0') {
    FUN_01cfa44c(auStack_160,local_158);
  }
  if ((local_188 & 1) != 0) {
    (**(code **)(*plStack_170 + 0x18))
              (plStack_170,local_178,CONCAT71(uStack_187,local_188) & 0xfffffffffffffffe,1);
  }
  return;
}


