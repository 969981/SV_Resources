/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03275870; name: FUN_03275870
 */


void FUN_03275870(long param_1)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  bool bVar7;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  int *local_198;
  byte *pbStack_190;
  ulong local_188;
  undefined8 local_180;
  undefined4 local_178;
  long local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 local_158;
  undefined4 local_150;
  int *local_148;
  byte *pbStack_140;
  ulong local_138;
  undefined8 local_130;
  undefined4 local_128;
  long local_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 auStack_f8 [16];
  ulong local_e8;
  undefined1 auStack_d0 [16];
  ulong local_c0;
  undefined1 auStack_a8 [16];
  ulong local_98;
  int *local_80;
  byte *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar1 = *(long *)(param_1 + 0x18) + 0x2a0;
  auVar11 = FUN_033269a8(lVar1,"hknpCompressedMeshShapeData");
  FUN_03326384(&local_58,lVar1,auVar11._0_8_,auVar11._8_8_);
  FUN_03325b88(&local_80,param_1,&DAT_03c68983);
  FUN_03322aa8(&local_80,&local_58);
  if ((local_70 & 1) != 0) {
    plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_48 & 1) != 0) {
    plVar8 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  FUN_03325b88(&local_80,param_1,"data_old");
  FUN_033234d0(&local_58,&local_80);
  if ((local_70 & 1) != 0) {
    plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  FUN_03325b88(auStack_f8,param_1,&DAT_03c68983);
  FUN_033234d0(auStack_d0,auStack_f8);
  FUN_03325b88(auStack_a8,auStack_d0,"meshTree");
  FUN_033234d0(&local_80,auStack_a8);
  if ((local_98 & 1) != 0) {
    plVar8 = (long *)(local_98 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_c0 & 1) != 0) {
    plVar8 = (long *)(local_c0 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_e8 & 1) != 0) {
    plVar8 = (long *)(local_e8 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  uVar6 = local_70;
  local_120 = local_58;
  uStack_118 = uStack_50;
  local_110 = local_48;
  if ((local_48 & 1) != 0) {
    piVar3 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_108 = local_40;
  local_100 = local_38;
  local_148 = local_80;
  pbStack_140 = local_78;
  local_138 = local_70;
  if ((local_70 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    piVar3 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar10 = local_70 & 1;
  }
  local_130 = local_68;
  local_128 = local_60;
  FUN_03276f90(&local_120,&local_148);
  if (uVar10 != 0) {
    plVar8 = (long *)(uVar6 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_110 & 1) != 0) {
    plVar8 = (long *)(local_110 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_70 & 1) != 0) {
    plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_48 & 1) != 0) {
    plVar8 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  FUN_03325b88(&local_58,param_1,"extendedData_old");
  if (local_58 == 0) {
    bVar7 = false;
    goto LAB_03275d00;
  }
  FUN_03325b88(auStack_a8,param_1,"extendedData_old");
  FUN_033234d0(&local_80,auStack_a8);
  if (local_80 == (int *)0x0) {
LAB_03275c8c:
    bVar7 = false;
  }
  else {
    pbVar9 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        pbVar9 = *(byte **)(pbVar9 + 8);
      } while ((*pbVar9 & 1) == 0);
    }
    if (((local_78 != (byte *)0x0) && ((*(ulong *)(pbVar9 + 0x10) & 0x1f) == 6)) && (*local_80 == 0)
       ) goto LAB_03275c8c;
    bVar7 = true;
  }
  if ((local_70 & 1) != 0) {
    plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_98 & 1) != 0) {
    plVar8 = (long *)(local_98 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
LAB_03275d00:
  if ((local_48 & 1) != 0) {
    plVar8 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar2 = plVar8 + 1;
    do {
      lVar1 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if (bVar7) {
    FUN_03325b88(&local_80,param_1,"extendedData_old");
    FUN_033234d0(&local_58,&local_80);
    if ((local_70 & 1) != 0) {
      plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    FUN_03325b88(auStack_f8,param_1,&DAT_03c68983);
    FUN_033234d0(auStack_d0,auStack_f8);
    FUN_03325b88(auStack_a8,auStack_d0,"simdTree");
    FUN_033234d0(&local_80,auStack_a8);
    if ((local_98 & 1) != 0) {
      plVar8 = (long *)(local_98 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    if ((local_c0 & 1) != 0) {
      plVar8 = (long *)(local_c0 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    if ((local_e8 & 1) != 0) {
      plVar8 = (long *)(local_e8 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    uVar6 = local_70;
    local_170 = local_58;
    uStack_168 = uStack_50;
    local_160 = local_48;
    if ((local_48 & 1) != 0) {
      piVar3 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_158 = local_40;
    local_150 = local_38;
    local_198 = local_80;
    pbStack_190 = local_78;
    local_188 = local_70;
    if ((local_70 & 1) == 0) {
      bVar7 = true;
    }
    else {
      piVar3 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = (local_70 & 1) == 0;
    }
    local_180 = local_68;
    local_178 = local_60;
    FUN_03276f90(&local_170,&local_198);
    if (!bVar7) {
      plVar8 = (long *)(uVar6 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    if ((local_160 & 1) != 0) {
      plVar8 = (long *)(local_160 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    if ((local_70 & 1) != 0) {
      plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    if ((local_48 & 1) != 0) {
      plVar8 = (long *)(local_48 & 0xfffffffffffffffe);
      plVar2 = plVar8 + 1;
      do {
        lVar1 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar1 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  return;
}


