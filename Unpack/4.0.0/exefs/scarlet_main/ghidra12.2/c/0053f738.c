/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053f738; name: FUN_0053f738
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0053f738(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x30);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),
               *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffe,1);
    bVar2 = *(byte *)(param_1 + 0x30);
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x10);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),
               *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffe,1);
    bVar2 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar2 & 1) == 0) {
    plVar6 = *(long **)(param_1 + 8);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (*(long **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
               *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe,1);
    plVar6 = *(long **)(param_1 + 8);
  }
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
      return;
    }
  }
  return;
}


