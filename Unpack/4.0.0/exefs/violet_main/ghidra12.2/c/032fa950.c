/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032fa950; name: FUN_032fa950
 */


void FUN_032fa950(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [16];
  ulong local_38;
  
  FUN_03325b88(auStack_48,param_1,"avoidanceEnabled");
  iVar5 = FUN_0327462c(auStack_48);
  if ((local_38 & 1) != 0) {
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  uVar7 = 0;
  if (iVar5 != 0) {
    uVar7 = 7;
  }
  FUN_03325b88(auStack_48,param_1,"avoidanceEnabledMask");
  FUN_0331e864(auStack_48,uVar7);
  if ((local_38 & 1) != 0) {
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


