/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080a7f4; name: FUN_0080a7f4
 */


void FUN_0080a7f4(long param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x4a) = 0;
  plVar6 = *(long **)(param_1 + 8);
  if (*param_2 == 0) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,1);
    }
  }
  else if (plVar6 != (long *)0x0) {
    uVar4 = FUN_00796458(param_2);
    (**(code **)(*plVar6 + 0x38))(plVar6,uVar4);
    plVar6 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


