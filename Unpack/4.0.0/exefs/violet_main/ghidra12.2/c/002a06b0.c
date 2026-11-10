/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a06b0; name: FUN_002a06b0
 */


void FUN_002a06b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  FUN_00358280(*(undefined8 *)(param_1[6] + 0x20),*(undefined8 *)(param_1[2] + 0x20));
  puVar4 = (undefined8 *)param_1[6];
  param_1[6] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 002a06e4 to 002a06e7 has its CatchHandler @ 002a07a0 */
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[7];
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
      cVar2 = (char)param_1[0x13];
      param_1[7] = 0;
      goto joined_r0x002a0710;
    }
  }
  cVar2 = (char)param_1[0x13];
  param_1[7] = 0;
joined_r0x002a0710:
  if (cVar2 != '\0') {
    FUN_00360570(param_1 + 9);
  }
  *(undefined1 *)((long)param_1 + 0x99) = 1;
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


