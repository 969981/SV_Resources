/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033ba0c; name: FUN_0033ba0c
 */


void FUN_0033ba0c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auStack_18 [8];
  
  puVar1 = (ulong *)(param_1 + 0x40);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0xffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar5 & 0xffffffffffff0000) == 0x10000) {
    FUN_0033ba98(param_1);
  }
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 - 1 == 0) {
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


