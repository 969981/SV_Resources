/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002df038; name: FUN_002df038
 */


void FUN_002df038(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  *param_1 = (long)(PTR_DAT_047cc8f8 + 0x10);
                    /* try { // try from 002df054 to 002df057 has its CatchHandler @ 002df174 */
  FUN_002e3424();
  puVar6 = (undefined8 *)param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  lVar2 = (long)puVar1 - (long)puVar6;
  if (lVar2 != 0) {
    uVar5 = param_1[5];
    plVar3 = (long *)((long)puVar6 + (uVar5 >> 4 & 0xffffffffffffff8));
    lVar4 = *plVar3 + (uVar5 & 0x7f) * 0x20;
    while (*(long *)((long)puVar6 + (param_1[6] + uVar5 >> 4 & 0xffffffffffffff8)) +
           (param_1[6] + uVar5 & 0x7f) * 0x20 != lVar4) {
      lVar4 = lVar4 + 0x20;
      if (lVar4 - *plVar3 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar4 = *plVar3;
      }
    }
  }
  param_1[6] = 0;
  while (uVar5 = lVar2 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar6);
    puVar1 = (undefined8 *)param_1[3];
    puVar6 = (undefined8 *)(param_1[2] + 8);
    param_1[2] = (long)puVar6;
    lVar2 = (long)puVar1 - (long)puVar6;
  }
  if (uVar5 == 1) {
    lVar2 = 0x40;
  }
  else {
    if (uVar5 != 2) goto LAB_002df11c;
    lVar2 = 0x80;
  }
  param_1[5] = lVar2;
LAB_002df11c:
  if (puVar6 != puVar1) {
    do {
      puVar7 = puVar6 + 1;
      operator_delete((void *)*puVar6);
      puVar6 = puVar7;
    } while (puVar1 != puVar7);
    lVar2 = param_1[3] - param_1[2];
    if (lVar2 != 0) {
      param_1[3] = param_1[3] + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if ((void *)param_1[1] == (void *)0x0) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


