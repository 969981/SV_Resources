/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032a6618; name: FUN_032a6618
 */


bool FUN_032a6618(long *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long *plVar12;
  undefined8 local_70;
  byte *local_68;
  ulong local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  char local_38;
  
  if ((*param_1 == 0) || (uVar7 = FUN_031e198c(param_1[1],"deactivationSettings","",1), uVar7 < 2))
  {
    local_50 = 0;
    local_48 = 0;
    local_58 = 0;
  }
  else {
    FUN_031e32f0(&local_58,param_1,uVar7);
    if ((local_58 != 0) &&
       (uVar7 = FUN_031e198c(local_50,"numDeactivationFrequencyPasses","",1), 1 < uVar7)) {
      FUN_031e32f0(&local_70,&local_58,uVar7);
      pbVar10 = local_68;
      if (local_68 != (byte *)0x0) {
        pbVar11 = local_68;
        if ((*local_68 & 1) == 0) {
          do {
            pbVar11 = *(byte **)(pbVar11 + 8);
          } while ((*pbVar11 & 1) == 0);
        }
        if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 4) {
          uVar9 = local_70;
          uVar7 = local_60;
          if ((local_60 & 1) != 0) {
            piVar1 = (int *)((local_60 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          goto LAB_032a6728;
        }
        pbVar10 = (byte *)0x0;
      }
      uVar9 = 0;
      uVar7 = 0;
      goto LAB_032a6728;
    }
  }
  uVar9 = 0;
  pbVar10 = (byte *)0x0;
  local_70 = 0;
  uVar7 = 0;
  local_68 = (byte *)0x0;
  local_60 = 0;
LAB_032a6728:
  local_40 = 0;
  plVar12 = (long *)(uVar7 & 0xfffffffffffffffe);
  local_38 = '\0';
  (**(code **)(*plVar12 + 0x38))(plVar12,uVar9,pbVar10,&local_40);
  cVar3 = local_38;
  lVar6 = local_40;
  if ((uVar7 & 1) != 0) {
    plVar8 = plVar12 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if ((local_60 & 1) != 0) {
    plVar8 = (long *)(local_60 & 0xfffffffffffffffe);
    plVar12 = plVar8 + 1;
    do {
      lVar5 = *plVar12;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_48 & 1) != 0) {
    plVar8 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar12 = plVar8 + 1;
    do {
      lVar5 = *plVar12;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  return lVar6 == 0xff && cVar3 == '\0';
}


