/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036ad60; name: FUN_0036ad60
 */


long FUN_0036ad60(long param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar4 = *(ulong **)(param_1 + 8);
  do {
    uVar6 = *puVar4;
    uVar1 = uVar6 + ((ulong)(param_2 + 0xf) & 0xfffffff0);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[1] < uVar1) {
    lVar5 = FUN_0038e7c0();
    return lVar5;
  }
  return (long)puVar4 + uVar6 + 0x20;
}


