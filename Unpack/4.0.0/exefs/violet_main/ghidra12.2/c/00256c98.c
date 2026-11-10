/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00256c98; name: FUN_00256c98
 */


void FUN_00256c98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = (long)(PTR_DAT_047cc228 + 0x10);
                    /* try { // try from 00256cb8 to 00256cbb has its CatchHandler @ 00256da4 */
  FUN_002741f8(param_1[0x2a]);
  plVar6 = (long *)param_1[0x2c];
  plVar2 = (long *)param_1[0x2d];
  if (plVar2 == (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
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
    (**(code **)(*plVar6 + 0x18))();
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
  plVar6 = (long *)param_1[0x2d];
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar7 = (undefined8 *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar6 = (long *)param_1[0x2b];
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,0x58,8);
  }
  FUN_027bf268(param_1 + 2);
  return;
}


