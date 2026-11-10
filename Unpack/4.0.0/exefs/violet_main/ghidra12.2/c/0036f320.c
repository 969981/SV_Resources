/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036f320; name: FUN_0036f320
 */


void FUN_0036f320(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (param_2 <= uVar4) {
    if (uVar4 == param_2) {
      return;
    }
    if (uVar4 == 0) {
      return;
    }
    uVar5 = uVar4 * 0xff + param_2 >> 8;
    param_2 = uVar4 - 1;
    if (uVar5 <= uVar4 - 1) {
      param_2 = uVar5;
    }
  }
  puVar1 = (ulong *)(param_1 + 0x18);
  do {
    if (*puVar1 != uVar4) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


