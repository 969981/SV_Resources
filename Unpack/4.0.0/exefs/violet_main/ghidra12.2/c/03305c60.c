/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03305c60; name: FUN_03305c60
 */


void FUN_03305c60(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 local_58;
  byte *local_50;
  ulong local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_03325b88(&local_58,param_1,"currentNavVolumeCell");
  if (local_50 != (byte *)0x0) {
    pbVar6 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        pbVar6 = *(byte **)(pbVar6 + 8);
      } while ((*pbVar6 & 1) == 0);
    }
    if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) == 4) {
      uVar8 = local_48;
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
      goto LAB_03305cf4;
    }
    local_50 = (byte *)0x0;
  }
  uVar8 = 0;
  local_58 = 0;
LAB_03305cf4:
  local_30 = 1;
  uStack_28 = 1;
  plVar7 = (long *)(uVar8 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_58,local_50,&local_30);
  if ((uVar8 & 1) != 0) {
    plVar5 = plVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if ((local_48 & 1) != 0) {
    plVar5 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar7 = plVar5 + 1;
    do {
      lVar4 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return;
}


