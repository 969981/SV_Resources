/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002eb5a0; name: FUN_002eb5a0
 */


void FUN_002eb5a0(ulong *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    plVar4 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    uVar5 = *param_1;
    uVar1 = uVar5 + 0x20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[1] < uVar1) {
                    /* try { // try from 002eb5e0 to 002eb5e7 has its CatchHandler @ 002eb608 */
    plVar4 = (long *)FUN_0038e7c0(param_1,0x20);
  }
  else {
    plVar4 = (long *)((long)param_1 + uVar5 + 0x20);
  }
  *plVar4 = param_2;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  return;
}


