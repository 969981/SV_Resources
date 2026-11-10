/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b9918; name: FUN_027b9918
 */


void FUN_027b9918(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [160];
  
  FUN_0067a500(auStack_e0,param_2);
  FUN_0067aee8(auStack_e0,param_2,param_3,param_4,param_5);
  local_f0 = *param_2;
  plVar2 = (long *)param_2[1];
  plStack_e8 = plVar2;
  if (plVar2 == (long *)0x0) {
    FUN_0066af70(param_1,&local_f0,auStack_e0,param_6);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0066af70(param_1,&local_f0,auStack_e0,param_6);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0067a580(auStack_e0);
  return;
}


