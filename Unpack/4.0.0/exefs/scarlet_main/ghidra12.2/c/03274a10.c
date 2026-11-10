/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03274a10; name: FUN_03274a10
 */


void FUN_03274a10(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_80 [16];
  ulong local_70;
  undefined1 auStack_58 [16];
  ulong local_48;
  
  FUN_03325b88(auStack_58,param_1,"flags");
  uVar5 = FUN_0327462c(auStack_58);
  FUN_03325b88(auStack_80,param_1,"flags");
  FUN_0331e864(auStack_80,(uint)(uVar5 >> 1) & 0x7fffff00 | (uint)uVar5 & 0xff);
  if ((local_70 & 1) != 0) {
    plVar6 = (long *)(local_70 & 0xfffffffffffffffe);
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
  if ((local_48 & 1) != 0) {
    plVar6 = (long *)(local_48 & 0xfffffffffffffffe);
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


