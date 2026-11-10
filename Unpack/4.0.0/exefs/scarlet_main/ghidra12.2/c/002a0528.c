/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a0528; name: FUN_002a0528
 */


void FUN_002a0528(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *local_48;
  long *local_40;
  undefined1 auStack_28 [8];
  
  if (4 < param_2) {
    FUN_00350fb0(param_2);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_40 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  *local_40 = (long)&PTR_LAB_0448e150;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[4] = param_1;
  local_40[5] = param_2;
  local_48 = local_40 + 3;
  *local_48 = (long)&PTR_LAB_0448e188;
                    /* try { // try from 002a05a8 to 002a05b7 has its CatchHandler @ 002a0638 */
  FUN_003627bc(uVar2,&local_48,auStack_28);
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


