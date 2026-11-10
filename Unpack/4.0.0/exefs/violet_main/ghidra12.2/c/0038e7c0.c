/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038e7c0; name: FUN_0038e7c0
 */


undefined8 * FUN_0038e7c0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_0038c830(param_2 + 0x10,0x10);
  plVar1 = (long *)(param_1 + 0x10);
  *puVar4 = 0;
  do {
    while (*plVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *puVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return puVar4 + 2;
}


