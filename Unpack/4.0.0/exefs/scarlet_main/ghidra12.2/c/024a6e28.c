/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a6e28; name: FUN_024a6e28
 */


void FUN_024a6e28(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_2 < 0xb) {
    puVar5 = param_1;
  }
  else {
    puVar5 = (undefined8 *)FUN_024a6ea8(param_2);
  }
  if (param_1[0x16] != 0) {
    puVar6 = (undefined8 *)param_1[0x15];
    puVar2 = puVar6 + param_1[0x16] * 2;
    do {
      *puVar5 = *puVar6;
      lVar7 = puVar6[1];
      puVar5[1] = lVar7;
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar6 != puVar2);
  }
  return;
}


