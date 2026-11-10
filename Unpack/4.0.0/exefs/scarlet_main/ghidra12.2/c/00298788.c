/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00298788; name: FUN_00298788
 */


void FUN_00298788(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *param_2 = uVar5;
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *param_3 = uVar5;
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *param_4 = uVar5;
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_5 = uVar5;
  FUN_0038db40(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar8 = (ulong *)*param_6;
  *param_6 = uVar5;
  if (puVar8 != (ulong *)0x0) {
    uVar7 = *puVar8;
    uVar4 = uVar7 & 1;
    if ((uVar7 & 1) == 0) {
      puVar6 = puVar8 + 1;
    }
    else {
      puVar6 = (ulong *)puVar8[1];
    }
    if ((uVar7 >> 1 != 0) && (uVar7 = uVar7 >> 1, puVar6 != (ulong *)0x0)) {
      puVar6 = puVar6 + uVar7 * 2;
      do {
        puVar6 = puVar6 + -2;
        __ptr = (void *)*puVar6;
        *puVar6 = 0;
        if (__ptr != (void *)0x0) {
                    /* try { // try from 0029885c to 0029885f has its CatchHandler @ 002988ac */
          free(__ptr);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar4 = *puVar8 & 1;
    }
    if (uVar4 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar8[1]);
    }
    FUN_0049e790(PTR_LAB_047cba48,puVar8);
  }
                    /* try { // try from 00298890 to 00298897 has its CatchHandler @ 002988a8 */
  FUN_0038db60(param_1 + 0x30);
  return;
}


