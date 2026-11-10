/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00362580; name: FUN_00362580
 */


void FUN_00362580(long *param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_44 [4];
  
  puVar6 = PTR_LAB_047cba48;
  plVar1 = param_1 + 1;
  pMVar2 = (MutexType *)(param_1 + 0xc);
  while( true ) {
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 2) break;
    if (lVar7 == 1) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        FUN_0049e790(PTR_LAB_047cba48,param_1);
      }
      return;
    }
    nn::os::LockMutex(pMVar2);
    lVar7 = FUN_0038f2a4(param_1 + 2,auStack_44);
    if (lVar7 == 0) {
      do {
        nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x10),pMVar2);
        lVar7 = FUN_0038f2a4(param_1 + 2,auStack_44);
      } while (lVar7 == 0);
    }
    nn::os::UnlockMutex(pMVar2);
    (**(code **)**(undefined8 **)(lVar7 + 8))();
    plVar9 = *(long **)(lVar7 + 0x10);
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 1;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_0049e790(puVar6,lVar7);
  }
  return;
}


