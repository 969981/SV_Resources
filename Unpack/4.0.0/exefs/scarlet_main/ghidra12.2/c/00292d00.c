/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00292d00; name: FUN_00292d00
 */


void FUN_00292d00(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  *param_1 = &PTR_LAB_0448d6f8;
                    /* try { // try from 00292d1c to 00292d27 has its CatchHandler @ 00292ec4 */
  free((void *)param_1[6]);
  FUN_00343d90(param_1[8]);
  puVar4 = (undefined8 *)param_1[0x40];
  param_1[0x40] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00292d3c to 00292d3f has its CatchHandler @ 00292ec0 */
    (**(code **)*puVar4)();
  }
  if ((param_1[0x22] & 1) == 0) {
    puVar4 = param_1 + 0x23;
LAB_00292d58:
    uVar7 = (ulong)param_1[0x22] >> 1;
    puVar4 = puVar4 + uVar7 * 0x12 + -1;
    lVar6 = uVar7 + 1;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      uVar5 = *puVar4;
      puVar4 = puVar4 + -0x12;
                    /* try { // try from 00292d7c to 00292d7f has its CatchHandler @ 00292f08 */
      FUN_00343d90(uVar5);
    }
    if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
      uVar5 = param_1[0x23];
      goto LAB_00292d9c;
    }
  }
  else {
    puVar4 = (undefined8 *)param_1[0x23];
    if (puVar4 != (undefined8 *)0x0) goto LAB_00292d58;
    uVar5 = 0;
LAB_00292d9c:
    FUN_0049e790(PTR_LAB_047cba48,uVar5);
  }
  puVar4 = (undefined8 *)param_1[0x20];
  if (puVar4 == (undefined8 *)0x0) {
LAB_00292dc8:
    puVar4 = (undefined8 *)param_1[0xd];
    param_1[0xd] = 0;
  }
  else {
    plVar1 = puVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_00292dc8;
    (**(code **)*puVar4)(puVar4);
    FUN_0049e790(PTR_LAB_047cba48,puVar4);
    puVar4 = (undefined8 *)param_1[0xd];
    param_1[0xd] = 0;
  }
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00292ddc to 00292ddf has its CatchHandler @ 00292ebc */
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[0xc];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      puVar4 = (undefined8 *)param_1[7];
      goto joined_r0x00292e04;
    }
  }
  puVar4 = (undefined8 *)param_1[7];
joined_r0x00292e04:
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      FUN_0032d30c(param_1);
      return;
    }
  }
  FUN_0032d30c(param_1);
  return;
}


