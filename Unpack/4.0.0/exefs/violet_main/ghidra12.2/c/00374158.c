/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00374158; name: FUN_00374158
 */


void FUN_00374158(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
                    /* try { // try from 0037416c to 0037416f has its CatchHandler @ 00374360 */
  FUN_00343d90(*param_1);
  lVar5 = param_1[2];
  if (param_1[3] != lVar5) {
    uVar7 = 0;
    do {
                    /* try { // try from 00374184 to 00374187 has its CatchHandler @ 00374368 */
      FUN_003714b0(*(undefined8 *)(lVar5 + uVar7 * 8));
      lVar5 = param_1[2];
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(param_1[3] - lVar5 >> 3));
  }
  puVar8 = (undefined8 *)param_1[0x25];
  if (puVar8 != (undefined8 *)0x0) {
    plVar9 = puVar8 + 1;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar8)(puVar8);
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
      lVar5 = param_1[0x20];
      goto joined_r0x00374250;
    }
  }
  lVar5 = param_1[0x20];
joined_r0x00374250:
  if (lVar5 != 0) {
    lVar5 = param_1[0x1e];
    plVar9 = (long *)param_1[0x1f];
    lVar6 = *plVar9;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar6;
    param_1[0x20] = 0;
    puVar4 = PTR_LAB_047cba48;
    while (plVar9 != param_1 + 0x1e) {
      plVar1 = (long *)plVar9[1];
      puVar8 = (undefined8 *)plVar9[2];
      plVar9[2] = 0;
      if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 00374224 to 00374227 has its CatchHandler @ 00374364 */
        (**(code **)*puVar8)();
      }
      FUN_0049e790(puVar4,plVar9);
      plVar9 = plVar1;
    }
  }
  if (param_1[0x1d] != 0) {
    lVar5 = param_1[0x1b];
    plVar9 = (long *)param_1[0x1c];
    lVar6 = *plVar9;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar6;
    param_1[0x1d] = 0;
    puVar4 = PTR_LAB_047cba48;
    while (plVar9 != param_1 + 0x1b) {
      plVar9 = (long *)plVar9[1];
      FUN_0049e790(puVar4);
    }
  }
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar8 = (undefined8 *)param_1[0x16];
  param_1[0x16] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    FUN_0049e790(PTR_LAB_047cba48,puVar8);
  }
  FUN_0037456c(param_1 + 0x13);
                    /* try { // try from 003742f4 to 003742f7 has its CatchHandler @ 0037435c */
  FUN_0038dbc0((long)param_1 + 0x8c);
                    /* try { // try from 003742fc to 003742ff has its CatchHandler @ 00374358 */
  FUN_0038db20(param_1 + 0xd);
                    /* try { // try from 00374304 to 00374307 has its CatchHandler @ 00374354 */
  FUN_0038db20(param_1 + 9);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar4 = PTR_LAB_047cba48;
  if (param_1[2] == 0) {
    return;
  }
  param_1[3] = param_1[2];
  FUN_0049e790(puVar4);
  return;
}


