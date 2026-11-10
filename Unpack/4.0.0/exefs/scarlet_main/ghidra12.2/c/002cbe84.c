/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cbe84; name: FUN_002cbe84
 */


void FUN_002cbe84(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)(param_2 + 0x50);
  do {
    uVar5 = *puVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *param_1 = uVar5;
  param_1[1] = uVar3;
  puVar8 = (undefined8 *)(param_2 + 0x60);
  do {
    uVar5 = *puVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[2] = uVar5;
  puVar8 = (undefined8 *)(param_2 + 0x68);
  do {
    uVar5 = *puVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar9 = param_1 + 5;
  *puVar9 = 0;
  puVar8 = param_1 + 4;
  *puVar8 = puVar9;
  param_1[3] = uVar5;
  param_1[6] = 0;
                    /* try { // try from 002cbef0 to 002cbef7 has its CatchHandler @ 002cbf50 */
  FUN_0038db40(param_2 + 0x70);
  FUN_002c1d5c(puVar8,param_1[5]);
  param_1[4] = *(undefined8 *)(param_2 + 0x90);
  plVar4 = (long *)(param_2 + 0x98);
  lVar6 = *plVar4;
  lVar7 = *(long *)(param_2 + 0xa0);
  param_1[5] = lVar6;
  param_1[6] = lVar7;
  if (lVar7 == 0) {
    *puVar8 = puVar9;
  }
  else {
    *(undefined8 **)(lVar6 + 0x10) = puVar9;
    *(long **)(param_2 + 0x90) = plVar4;
    *plVar4 = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
  }
                    /* try { // try from 002cbf34 to 002cbf3b has its CatchHandler @ 002cbf4c */
  FUN_0038db60(param_2 + 0x70);
  return;
}


