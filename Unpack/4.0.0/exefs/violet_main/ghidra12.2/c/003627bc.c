/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003627bc; name: FUN_003627bc
 */


void FUN_003627bc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *param_1;
  plVar1 = (long *)(lVar8 + 8);
  uVar9 = param_2[2];
  puVar2 = (undefined8 *)*param_2;
  plVar7 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  do {
    lVar6 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 == 1) {
                    /* try { // try from 003627fc to 0036284f has its CatchHandler @ 003628b0 */
    (**(code **)*puVar2)(puVar2);
    FUN_00362580(lVar8);
  }
  else {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[2] = plVar7;
      puVar5[3] = uVar9;
      plVar7 = (long *)0x0;
      *puVar5 = 0;
      puVar5[1] = puVar2;
    }
    nn::os::LockMutex((MutexType *)(lVar8 + 0x60));
    FUN_0038f210(lVar8 + 0x10,puVar5);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar8 + 0x80));
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x60));
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


