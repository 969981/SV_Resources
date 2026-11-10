/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03316f10; name: FUN_03316f10
 */


void FUN_03316f10(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 local_58;
  byte *local_50;
  ulong local_48;
  ulong local_40 [2];
  byte local_18 [8];
  
  local_18[0] = 0;
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"hasPosition","",1), uVar5 < 2)) {
    uVar5 = 0;
    pbVar8 = (byte *)0x0;
    local_58 = 0;
    uVar7 = 0;
    local_50 = (byte *)0x0;
    local_48 = 0;
  }
  else {
    FUN_031e32f0(&local_58,param_1,uVar5);
    pbVar8 = local_50;
    if (local_50 != (byte *)0x0) {
      pbVar9 = local_50;
      if ((*local_50 & 1) == 0) {
        do {
          pbVar9 = *(byte **)(pbVar9 + 8);
        } while ((*pbVar9 & 1) == 0);
      }
      if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) == 2) {
        uVar7 = local_58;
        uVar5 = local_48;
        if ((local_48 & 1) != 0) {
          piVar1 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_03316ff0;
      }
      pbVar8 = (byte *)0x0;
    }
    uVar5 = 0;
    uVar7 = 0;
  }
LAB_03316ff0:
  plVar10 = (long *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x38))(plVar10,uVar7,pbVar8,local_18);
  if ((uVar5 & 1) != 0) {
    plVar6 = plVar10 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if ((local_48 & 1) != 0) {
    plVar6 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar10 = plVar6 + 1;
    do {
      lVar4 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"positionStatus","",1), uVar5 < 2)) {
    uVar7 = 0;
    pbVar8 = (byte *)0x0;
    local_58 = 0;
    uVar5 = 0;
    local_50 = (byte *)0x0;
    local_48 = 0;
  }
  else {
    FUN_031e32f0(&local_58,param_1,uVar5);
    pbVar8 = local_50;
    if (local_50 != (byte *)0x0) {
      pbVar9 = local_50;
      if ((*local_50 & 1) == 0) {
        do {
          pbVar9 = *(byte **)(pbVar9 + 8);
        } while ((*pbVar9 & 1) == 0);
      }
      if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) == 4) {
        uVar7 = local_58;
        uVar5 = local_48;
        if ((local_48 & 1) != 0) {
          piVar1 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_03317138;
      }
      pbVar8 = (byte *)0x0;
    }
    uVar7 = 0;
    uVar5 = 0;
  }
LAB_03317138:
  local_40[0] = (ulong)local_18[0];
  local_40[1] = 0;
  plVar10 = (long *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(plVar10,uVar7,pbVar8,local_40);
  if ((uVar5 & 1) != 0) {
    plVar6 = plVar10 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if ((local_48 & 1) != 0) {
    plVar6 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar10 = plVar6 + 1;
    do {
      lVar4 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


