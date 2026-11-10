/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03279fe0; name: FUN_03279fe0
 */


void FUN_03279fe0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_48 [16];
  ulong local_38;
  
  FUN_03325b88(auStack_48,param_1,"spuFlags");
  uVar6 = FUN_0327462c(auStack_48);
  if ((local_38 & 1) != 0) {
    plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((uVar6 & 1) != 0) {
    FUN_03325b88(auStack_48,param_1,"flags");
    uVar5 = FUN_0327462c(auStack_48);
    if ((local_38 & 1) != 0) {
      plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"flags");
    FUN_0331e864(auStack_48,uVar5 | 0x10000000);
    if ((local_38 & 1) != 0) {
      plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  return;
}


