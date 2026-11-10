/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b13cc; name: FUN_022b13cc
 */


void FUN_022b13cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  FUN_029fceec(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar5 != 0) {
    FUN_029fd040(param_1 + 0x110);
  }
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar5 != 0) {
    FUN_029fd3fc(param_1 + 0x28);
  }
  plVar4 = *(long **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar4 != (long *)0x0) {
    if (plVar4[1] != 0) {
      plVar1 = plVar4 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    plVar4 = *(long **)(param_1 + 0x170);
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x150));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x130));
  lVar5 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar5 != 0) {
    FUN_029fd040(param_1 + 0x110);
  }
  plVar4 = *(long **)(param_1 + 0x100);
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xf0));
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar5 != 0) {
    FUN_029fd3fc(param_1 + 0x28);
  }
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x022b14a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))();
      return;
    }
  }
  return;
}


