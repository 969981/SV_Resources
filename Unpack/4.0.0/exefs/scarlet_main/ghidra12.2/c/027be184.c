/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027be184; name: FUN_027be184
 */


void FUN_027be184(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_40 [8];
  long *local_38;
  long *local_30;
  long *local_28;
  
  FUN_0024795c(&local_30,*param_1);
  uVar4 = (**(code **)(*local_30 + 0x20))();
  if (local_28 != (long *)0x0) {
    plVar6 = local_28 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((uVar4 & 1) == 0) && (FUN_027bd684(auStack_40,*param_1), local_38 != (long *)0x0)) {
    plVar6 = local_38 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_027bdab0(&local_30,*param_1);
  (**(code **)(*local_30 + 0x18))();
  if (local_28 != (long *)0x0) {
    plVar6 = local_28 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
      plVar6 = (long *)param_1[1];
      goto joined_r0x027be288;
    }
  }
  plVar6 = (long *)param_1[1];
joined_r0x027be288:
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (plVar6[1] < 1) break;
    local_30 = (long *)0xf4240;
                    /* try { // try from 027be2a4 to 027be2ab has its CatchHandler @ 027be328 */
    std::this_thread::sleep_for((duration *)&local_30);
    plVar6 = (long *)param_1[1];
  }
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
    return;
  }
  return;
}


