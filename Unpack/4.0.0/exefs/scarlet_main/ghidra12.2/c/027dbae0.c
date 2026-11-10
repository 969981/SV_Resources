/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dbae0; name: FUN_027dbae0
 */


void FUN_027dbae0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      return;
    }
  }
  return;
}


