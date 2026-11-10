/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03316490; name: FUN_03316490
 */


void FUN_03316490(long *param_1)

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
  undefined8 local_68;
  byte *local_60;
  ulong local_58;
  long local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  local_48 = 0;
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],&DAT_03c12387,&DAT_03c12389,1), uVar5 < 2)
     ) {
    uVar5 = 0;
    pbVar8 = (byte *)0x0;
    local_68 = 0;
    uVar7 = 0;
    local_60 = (byte *)0x0;
    local_58 = 0;
  }
  else {
    FUN_031e32f0(&local_68,param_1,uVar5);
    pbVar8 = local_60;
    if (local_60 != (byte *)0x0) {
      pbVar9 = local_60;
      if ((*local_60 & 1) == 0) {
        do {
          pbVar9 = *(byte **)(pbVar9 + 8);
        } while ((*pbVar9 & 1) == 0);
      }
      if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) == 4) {
        uVar7 = local_68;
        uVar5 = local_58;
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
        goto LAB_03316574;
      }
      pbVar8 = (byte *)0x0;
    }
    uVar5 = 0;
    uVar7 = 0;
  }
LAB_03316574:
  plVar10 = (long *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x38))(plVar10,uVar7,pbVar8,&local_50);
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
  if ((local_58 & 1) != 0) {
    plVar6 = (long *)(local_58 & 0xfffffffffffffffe);
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
  lVar4 = local_50;
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"seedingDataIdentifier","",1), uVar5 < 2))
  {
    uVar7 = 0;
    pbVar8 = (byte *)0x0;
    local_68 = 0;
    uVar5 = 0;
    local_60 = (byte *)0x0;
    local_58 = 0;
  }
  else {
    FUN_031e32f0(&local_68,param_1,uVar5);
    pbVar8 = local_60;
    if (local_60 != (byte *)0x0) {
      pbVar9 = local_60;
      if ((*local_60 & 1) == 0) {
        do {
          pbVar9 = *(byte **)(pbVar9 + 8);
        } while ((*pbVar9 & 1) == 0);
      }
      if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) == 4) {
        uVar7 = local_68;
        uVar5 = local_58;
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
        goto LAB_033166c0;
      }
      pbVar8 = (byte *)0x0;
    }
    uVar7 = 0;
    uVar5 = 0;
  }
LAB_033166c0:
  local_40 = 0;
  if (lVar4 != 0) {
    local_40 = 0xffffffff;
  }
  uStack_38 = 0;
  plVar10 = (long *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(plVar10,uVar7,pbVar8,&local_40);
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
  if ((local_58 & 1) != 0) {
    plVar6 = (long *)(local_58 & 0xfffffffffffffffe);
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


