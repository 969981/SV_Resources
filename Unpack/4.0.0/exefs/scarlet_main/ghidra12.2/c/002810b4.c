/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002810b4; name: FUN_002810b4
 */


void FUN_002810b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  FUN_00358280(*(undefined8 *)(param_1[7] + 0x20),*(undefined8 *)(param_1[2] + 0x20));
  puVar4 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 002810e8 to 002810eb has its CatchHandler @ 002811a8 */
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[8];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      cVar2 = (char)param_1[0x14];
      param_1[8] = 0;
      goto joined_r0x00281114;
    }
  }
  cVar2 = (char)param_1[0x14];
  param_1[8] = 0;
joined_r0x00281114:
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    FUN_00360570(param_1 + 10);
  }
  *(undefined1 *)((long)param_1 + 0xa1) = 1;
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 8))(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
    return;
  }
  return;
}


