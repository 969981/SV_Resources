/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024799c; name: FUN_0024799c
 */


undefined8 FUN_0024799c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long local_30;
  long *plStack_28;
  
  FUN_0024e1b0(&local_30,param_1 + 0x250);
  uVar5 = *(undefined8 *)(*(long *)(local_30 + 8) + 0x88);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar5;
}


