/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006818f4; name: FUN_006818f4
 */


void FUN_006818f4(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_LAB_044d5118;
  FUN_006c40fc();
  (**(code **)(*(long *)param_1[0x3e] + 0x18))
            ((long *)param_1[0x3e],param_1[0x12],param_1[0x3f],0x10);
  if (*(char *)((long)param_1 + 0x211) == '\0') goto LAB_00681980;
  plVar6 = (long *)param_1[0x3a];
  if (plVar6 == (long *)0x0) {
LAB_00681950:
    FUN_01e7396c(param_1 + 0x26);
    bVar2 = *(byte *)(param_1 + 0x22);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_00681950;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    FUN_01e7396c(param_1 + 0x26);
    bVar2 = *(byte *)(param_1 + 0x22);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*(long *)param_1[0x25] + 0x18))
              ((long *)param_1[0x25],param_1[0x24],param_1[0x22] & 0xfffffffffffffffe,1);
  }
  *(undefined1 *)((long)param_1 + 0x211) = 0;
LAB_00681980:
  plVar6 = (long *)param_1[0x41];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = (long *)param_1[0x16];
  *param_1 = (long)(PTR_DAT_047cbaf8 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      FUN_006c53d4(param_1);
      return;
    }
  }
  FUN_006c53d4(param_1);
  return;
}


