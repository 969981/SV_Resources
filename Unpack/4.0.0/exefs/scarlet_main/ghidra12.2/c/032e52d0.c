/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032e52d0; name: FUN_032e52d0
 */


void FUN_032e52d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_a8 [4];
  ulong local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [56];
  
  FUN_03325b88(&local_80);
  local_a8[0] = local_60;
  FUN_03323c3c(auStack_58,local_80,uStack_78,local_68,local_a8,0);
  if ((local_70 & 1) != 0) {
    plVar5 = (long *)(local_70 & 0xfffffffffffffffe);
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
  FUN_03325b88(local_a8,param_1,param_3);
  FUN_033234d0(&local_80,local_a8);
  if ((local_98 & 1) != 0) {
    plVar5 = (long *)(local_98 & 0xfffffffffffffffe);
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
  FUN_032e53f0(&local_80,auStack_58);
  if ((local_70 & 1) != 0) {
    plVar5 = (long *)(local_70 & 0xfffffffffffffffe);
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


