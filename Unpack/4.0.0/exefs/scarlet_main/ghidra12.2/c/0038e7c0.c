/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


