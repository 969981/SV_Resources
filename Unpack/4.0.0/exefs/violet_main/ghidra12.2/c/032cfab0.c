/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032cfab0; name: FUN_032cfab0
 */


void FUN_032cfab0(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 local_48;
  byte *local_40;
  ulong local_38;
  
  FUN_03325b88(&local_48,param_1,"timeFactor");
  if (local_40 != (byte *)0x0) {
    pbVar6 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        pbVar6 = *(byte **)(pbVar6 + 8);
      } while ((*pbVar6 & 1) == 0);
    }
    if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) == 5) {
      uVar8 = local_38;
      if ((local_38 & 1) != 0) {
        piVar1 = (int *)((local_38 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_032cfb3c;
    }
    local_40 = (byte *)0x0;
  }
  uVar8 = 0;
  local_48 = 0;
LAB_032cfb3c:
  plVar7 = (long *)(uVar8 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x30))(0x3ff0000000000000,plVar7,local_48,local_40);
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
  if ((local_38 & 1) != 0) {
    plVar5 = (long *)(local_38 & 0xfffffffffffffffe);
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


