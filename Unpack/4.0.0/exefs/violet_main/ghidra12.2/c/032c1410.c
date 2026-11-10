/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032c1410; name: FUN_032c1410
 */


void FUN_032c1410(long *param_1,char *param_2,long *param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  byte *local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  
  if (*param_3 == 0) {
LAB_032c151c:
    local_78 = 0;
    local_70 = 0;
    local_80 = 0;
LAB_032c1524:
    uVar6 = 0;
    pbVar10 = (byte *)0x0;
    local_68 = 0;
    uVar11 = 0;
    local_60 = (byte *)0x0;
    local_58 = 0;
  }
  else {
    lVar14 = param_3[1];
    if (param_4 == (char *)0x0) {
      pcVar8 = (char *)0x0;
    }
    else {
      sVar5 = strlen(param_4);
      pcVar8 = param_4 + sVar5;
    }
    uVar6 = FUN_031e198c(lVar14,param_4,pcVar8,1);
    if (uVar6 < 2) goto LAB_032c151c;
    FUN_031e32f0(&local_80,param_3,uVar6);
    if ((local_80 == 0) || (uVar6 = FUN_031e198c(local_78,"serialAndIndex","",1), uVar6 < 2))
    goto LAB_032c1524;
    FUN_031e32f0(&local_68,&local_80,uVar6);
    pbVar10 = local_60;
    if (local_60 == (byte *)0x0) {
LAB_032c1804:
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      pbVar9 = local_60;
      if ((*local_60 & 1) == 0) {
        do {
          pbVar9 = *(byte **)(pbVar9 + 8);
        } while ((*pbVar9 & 1) == 0);
      }
      if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) != 4) {
        pbVar10 = (byte *)0x0;
        goto LAB_032c1804;
      }
      uVar11 = local_68;
      uVar6 = local_58;
      if ((local_58 & 1) != 0) {
        piVar1 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  local_50 = 0;
  plVar12 = (long *)(uVar6 & 0xfffffffffffffffe);
  local_48 = local_48 & 0xffffffffffffff00;
  (**(code **)(*plVar12 + 0x38))(plVar12,uVar11,pbVar10,&local_50);
  uVar4 = (uint)local_50;
  uVar13 = local_50 & 0xffffffff;
  if ((uVar6 & 1) != 0) {
    plVar7 = plVar12 + 1;
    do {
      lVar14 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if ((local_58 & 1) != 0) {
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar12 = plVar7 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar12 = plVar7 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if (*param_1 == 0) {
LAB_032c16e4:
    local_78 = 0;
    local_70 = 0;
    local_80 = 0;
  }
  else {
    lVar14 = param_1[1];
    if (param_2 == (char *)0x0) {
      pcVar8 = (char *)0x0;
    }
    else {
      sVar5 = strlen(param_2);
      pcVar8 = param_2 + sVar5;
    }
    uVar6 = FUN_031e198c(lVar14,param_2,pcVar8,1);
    if (uVar6 < 2) goto LAB_032c16e4;
    FUN_031e32f0(&local_80,param_1,uVar6);
    if ((local_80 != 0) && (uVar6 = FUN_031e198c(local_78,"value","",1), 1 < uVar6)) {
      FUN_031e32f0(&local_68,&local_80,uVar6);
      pbVar10 = local_60;
      if (local_60 != (byte *)0x0) {
        pbVar9 = local_60;
        if ((*local_60 & 1) == 0) {
          do {
            pbVar9 = *(byte **)(pbVar9 + 8);
          } while ((*pbVar9 & 1) == 0);
        }
        if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) == 4) {
          uVar11 = local_68;
          uVar6 = local_58;
          if ((local_58 & 1) != 0) {
            piVar1 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          goto LAB_032c1700;
        }
        pbVar10 = (byte *)0x0;
      }
      uVar11 = 0;
      uVar6 = 0;
      goto LAB_032c1700;
    }
  }
  uVar11 = 0;
  pbVar10 = (byte *)0x0;
  local_68 = 0;
  uVar6 = 0;
  local_60 = (byte *)0x0;
  local_58 = 0;
LAB_032c1700:
  if ((local_58 & 1) != 0) {
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar12 = plVar7 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar12 = plVar7 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((~uVar4 & 0xffffff) == 0) {
    uVar13 = 0xffffffffffffffff;
  }
  local_48 = 0;
  plVar12 = (long *)(uVar6 & 0xfffffffffffffffe);
  local_50 = uVar13;
  (**(code **)(*plVar12 + 0x30))(plVar12,uVar11,pbVar10,&local_50);
  if ((uVar6 & 1) != 0) {
    plVar7 = plVar12 + 1;
    do {
      lVar14 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  return;
}


