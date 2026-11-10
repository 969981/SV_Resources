/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00308220; name: FUN_00308220
 */


void FUN_00308220(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  
  if ((*(long *)(param_1 + 0x40) == 0) && (uVar3 = FUN_003191f0(), (uVar3 & 1) != 0)) {
    plVar4 = *(long **)(param_2 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


