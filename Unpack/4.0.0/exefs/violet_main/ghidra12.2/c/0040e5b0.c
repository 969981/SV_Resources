/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040e5b0; name: FUN_0040e5b0
 */


void FUN_0040e5b0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x30);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


