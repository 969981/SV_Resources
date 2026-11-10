/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0028bf80; name: FUN_0028bf80
 */


void FUN_0028bf80(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if ((param_1[2] & 1U) == 0) {
    plVar5 = param_1 + 3;
LAB_0028bfa4:
    uVar6 = (ulong)param_1[2] >> 1;
    plVar5 = plVar5 + uVar6 * 0x12 + -1;
    lVar4 = uVar6 + 1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      lVar3 = *plVar5;
      plVar5 = plVar5 + -0x12;
                    /* try { // try from 0028bfc8 to 0028bfcb has its CatchHandler @ 0028c094 */
      FUN_00343d90(lVar3);
    }
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      lVar4 = param_1[3];
      goto LAB_0028bfe8;
    }
  }
  else {
    plVar5 = (long *)param_1[3];
    if (plVar5 != (long *)0x0) goto LAB_0028bfa4;
    lVar4 = 0;
LAB_0028bfe8:
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
  }
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)0x0) {
    plVar5 = puVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
      puVar7 = (undefined8 *)*param_1;
      goto joined_r0x0028c018;
    }
  }
  puVar7 = (undefined8 *)*param_1;
joined_r0x0028c018:
  if (puVar7 != (undefined8 *)0x0) {
    plVar5 = puVar7 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
      return;
    }
  }
  return;
}


