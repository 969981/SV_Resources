/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b8270; name: FUN_027b8270
 */


void FUN_027b8270(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 auStack_c0 [160];
  
  FUN_0067a500(auStack_c0,param_2);
  FUN_0067b474(auStack_c0,param_2,param_3);
  local_d0 = *param_2;
  local_c8 = (long *)param_2[1];
  if (local_c8 != (long *)0x0) {
    plVar1 = local_c8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_e0 = 0;
  local_d8 = (long *)0x0;
  FUN_0066b210(param_1,&local_d0,auStack_c0,&local_e0);
  if (local_d8 != (long *)0x0) {
    plVar1 = local_d8 + 1;
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
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8 != (long *)0x0) {
    plVar1 = local_c8 + 1;
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
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0067a580(auStack_c0);
  return;
}


