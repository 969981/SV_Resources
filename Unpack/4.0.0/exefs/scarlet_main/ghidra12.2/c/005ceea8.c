/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ceea8; name: FUN_005ceea8
 */


void FUN_005ceea8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long *local_38;
  undefined1 auStack_30 [32];
  
  FUN_005fae1c(auStack_30,0);
                    /* try { // try from 005ceec4 to 005ceecb has its CatchHandler @ 005cef6c */
  FUN_005d2574(auStack_30,param_1[2]);
  local_50 = 0;
  local_48 = (long *)0x0;
  FUN_005d2694(auStack_40,*(undefined8 *)(*param_1 + 8),auStack_30,&local_50);
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
  FUN_005fae70(auStack_30);
  return;
}


