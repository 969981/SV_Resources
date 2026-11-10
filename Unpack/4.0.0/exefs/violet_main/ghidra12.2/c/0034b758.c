/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034b758; name: FUN_0034b758
 */


void FUN_0034b758(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  *param_1 = (long)(PTR_DAT_047ccd98 + 0x10);
  puVar4 = PTR_LAB_047cba48;
  puVar8 = (ulong *)(param_1 + 7);
  uVar6 = *puVar8;
  uVar5 = uVar6 & 1;
  if ((uVar6 & 1) == 0) {
    plVar10 = param_1 + 8;
  }
  else {
    plVar10 = (long *)param_1[8];
  }
  if ((uVar6 >> 1 != 0) && (uVar6 = uVar6 >> 1, plVar10 != (long *)0x0)) {
    do {
      uVar6 = uVar6 - 1;
      puVar9 = (undefined8 *)plVar10[uVar6];
      if (puVar9 != (undefined8 *)0x0) {
        plVar1 = puVar9 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)*puVar9)(puVar9);
          FUN_0049e790(puVar4,puVar9);
        }
      }
    } while (uVar6 != 0);
    uVar5 = *puVar8 & 1;
  }
  if (uVar5 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[8]);
  }
  param_1[7] = 0;
                    /* try { // try from 0034b824 to 0034b827 has its CatchHandler @ 0034b8e8 */
  FUN_0038db20(param_1 + 2);
  puVar4 = PTR_LAB_047cba48;
  uVar6 = *puVar8;
  uVar5 = uVar6 & 1;
  if ((uVar6 & 1) == 0) {
    plVar10 = param_1 + 8;
  }
  else {
    plVar10 = (long *)param_1[8];
  }
  if ((uVar6 >> 1 != 0) && (uVar6 = uVar6 >> 1, plVar10 != (long *)0x0)) {
    do {
      uVar6 = uVar6 - 1;
      puVar9 = (undefined8 *)plVar10[uVar6];
      if (puVar9 != (undefined8 *)0x0) {
        plVar1 = puVar9 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)*puVar9)(puVar9);
          FUN_0049e790(puVar4,puVar9);
        }
      }
    } while (uVar6 != 0);
    uVar5 = *puVar8 & 1;
  }
  if (uVar5 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[8]);
  return;
}


