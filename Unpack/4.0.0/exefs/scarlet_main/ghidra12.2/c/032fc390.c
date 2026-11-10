/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032fc390; name: FUN_032fc390
 */


void FUN_032fc390(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined1 auStack_48 [16];
  ulong local_38;
  
  FUN_03325b88(auStack_48,param_1,"outputPathType");
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
  if (iVar5 == 2) {
    FUN_03325b88(auStack_48,param_1,"outputPathFlags");
    FUN_0331e864(auStack_48,3);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar5 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    FUN_03325b88(auStack_48,param_1,"outputPathFlags");
    FUN_0331e864(auStack_48,iVar5);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar5 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((plVar6 != (long *)0x0) && (iVar5 == 1)) {
    (**(code **)(*plVar6 + 8))();
  }
  return;
}


