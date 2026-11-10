/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c6880; name: FUN_027c6880
 */


void FUN_027c6880(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar4 = (long *)FUN_01cf7e20();
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  puVar5[4] = plVar4;
  *puVar5 = &DAT_044cd460;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = param_2;
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  plVar4 = *(long **)(param_1 + 0xb8);
  *(undefined8 **)(param_1 + 0xb8) = puVar5;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


