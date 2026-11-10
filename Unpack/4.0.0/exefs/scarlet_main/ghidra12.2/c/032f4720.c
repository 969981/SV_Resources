/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032f4720; name: FUN_032f4720
 */


void FUN_032f4720(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  ulong local_98;
  undefined1 auStack_80 [16];
  ulong local_70;
  undefined1 auStack_58 [16];
  ulong local_48;
  undefined1 *local_18;
  
  lVar1 = *(long *)(param_1 + 0x18) + 0x2a0;
  auVar6 = FUN_033269a8(lVar1,"hkaiDefaultLocalSteering");
  FUN_03326384(auStack_58,lVar1,auVar6._0_8_,auVar6._8_8_);
  FUN_03325b88(auStack_80,param_1,"pathFollowingProperties");
  FUN_03325b88(auStack_a8,auStack_58,"pathFollowingProperties");
  local_18 = auStack_a8;
  FUN_0331deb8(&local_18,local_a0,auStack_80);
  if ((local_98 & 1) != 0) {
    plVar5 = (long *)(local_98 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar1 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_70 & 1) != 0) {
    plVar5 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar1 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_03325b88(auStack_80,param_1,"avoidanceProperties");
  FUN_03325b88(auStack_a8,auStack_58,"avoidanceProperties");
  local_18 = auStack_a8;
  FUN_0331deb8(&local_18,local_a0,auStack_80);
  if ((local_98 & 1) != 0) {
    plVar5 = (long *)(local_98 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar1 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_70 & 1) != 0) {
    plVar5 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar1 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_03325b88(auStack_80,param_1,"localSteering");
  FUN_03322aa8(auStack_80,auStack_58);
  if ((local_70 & 1) != 0) {
    plVar5 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar1 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_48 & 1) != 0) {
    plVar5 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar2 = plVar5 + 1;
    do {
      lVar1 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar1 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return;
}


