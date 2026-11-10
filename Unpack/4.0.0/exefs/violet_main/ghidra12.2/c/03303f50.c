/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03303f50; name: FUN_03303f50
 */


void FUN_03303f50(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  ulong local_48;
  
  FUN_03325b88(auStack_58,param_1,"maxOpenSetSizeBytes");
  FUN_0331e864(auStack_58,param_2);
  if ((local_48 & 1) != 0) {
    plVar5 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_03325b88(auStack_58,param_1,"maxSearchStateSizeBytes");
  FUN_0331e864(auStack_58,param_3);
  if ((local_48 & 1) != 0) {
    plVar5 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return;
}


