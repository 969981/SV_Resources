/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c5884; name: FUN_006c5884
 */


void FUN_006c5884(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_30 = *param_2;
  local_28 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_40 = *param_3;
  local_38 = (long *)param_3[1];
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_50 = *param_4;
  local_48 = (long *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  FUN_006c68c0(param_1 + 8,&local_30,&local_40,&local_50);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


