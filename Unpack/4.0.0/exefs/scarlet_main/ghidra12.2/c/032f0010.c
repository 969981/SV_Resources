/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032f0010; name: FUN_032f0010
 */


void FUN_032f0010(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined1 auStack_48 [16];
  ulong local_38;
  
  FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
  iVar6 = FUN_0327462c(auStack_48);
  if ((local_38 & 1) != 0) {
    plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  iVar2 = iVar6 + -2;
  if (iVar6 < 4) {
    iVar2 = iVar6;
  }
  FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
  FUN_0331e864(auStack_48,iVar2);
  if ((local_38 & 1) != 0) {
    plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  return;
}


