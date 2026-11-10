/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bea80; name: FUN_027bea80
 */


void FUN_027bea80(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_20;
  long local_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    local_18 = *(long *)(param_1 + 8);
    if (local_18 != 0) {
      plVar1 = (long *)(local_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (local_18 != 0) {
        plVar1 = (long *)(local_18 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    lVar4 = param_2[1];
    *param_2 = param_3;
    param_2[1] = local_18;
    local_20 = param_3;
    if (lVar4 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    FUN_027be3c4(&local_20);
  }
  return;
}


