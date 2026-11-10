/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033bbcc; name: FUN_0033bbcc
 */


void FUN_0033bbcc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_18 [8];
  
  plVar1 = (long *)(param_1 + 0x40);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    puVar4 = (undefined8 *)FUN_0038c780(0x30);
    *puVar4 = &LAB_0033bc60;
    puVar4[1] = param_1;
    puVar4[3] = PTR_FUN_047cc978;
    puVar4[4] = puVar4;
    puVar4[5] = 0;
    FUN_0035351c(auStack_18,puVar4 + 2,0);
  }
  return;
}


