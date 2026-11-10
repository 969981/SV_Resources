/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0029dbc8; name: FUN_0029dbc8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0029dbc8(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)param_1[0xc];
  *param_1 = &PTR_FUN_0448e078;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
      bVar2 = *(byte *)(param_1 + 9);
      goto joined_r0x0029dc04;
    }
  }
  bVar2 = *(byte *)(param_1 + 9);
joined_r0x0029dc04:
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 6);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xb]);
    bVar2 = *(byte *)(param_1 + 6);
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 3);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[8]);
    bVar2 = *(byte *)(param_1 + 3);
  }
  if ((bVar2 & 1) == 0) {
    puVar6 = (undefined8 *)param_1[2];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[5]);
    puVar6 = (undefined8 *)param_1[2];
  }
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
      return;
    }
  }
  return;
}


