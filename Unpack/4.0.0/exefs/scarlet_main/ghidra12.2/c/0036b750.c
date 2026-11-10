/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036b750; name: FUN_0036b750
 */


void FUN_0036b750(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 0x8b8);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      if (param_2 < 5) {
        return;
      }
      FUN_00350fd0(param_2);
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4 = (long *)(param_1 + 0x910);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar3 = param_2;
  if (4 < param_2) {
    uVar3 = FUN_00350fb0(param_2,param_2);
  }
  FUN_003505cc(param_1 + 0x10,uVar3);
  plVar4 = (long *)FUN_0038c780(0x48);
  *plVar4 = param_1;
  plVar4[6] = (long)&LAB_0036d000;
  plVar4[7] = (long)plVar4;
  plVar4[8] = 0;
  lVar5 = FUN_0037b8b0(plVar4 + 5);
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) | 0x40;
  *(ulong *)(*(long *)(lVar5 + 8) + 0x88) = param_2;
  *(long *)(lVar5 + 0x18) = param_1;
  plVar4[4] = 0;
  plVar4[2] = (long)&LAB_0036d060;
  plVar4[3] = lVar5;
  FUN_003504a8(param_1 + 0x10,plVar4 + 1,0,"executing batch");
  return;
}


