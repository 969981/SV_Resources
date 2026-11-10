/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dd080; name: FUN_002dd080
 */


void FUN_002dd080(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  
  *param_1 = (long)(PTR_DAT_047cc8d8 + 0x10);
                    /* try { // try from 002dd09c to 002dd09f has its CatchHandler @ 002dd1d8 */
  FUN_002dd208();
  puVar7 = (undefined8 *)param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  lVar2 = (long)puVar1 - (long)puVar7;
  if (lVar2 != 0) {
    uVar4 = param_1[5];
    lVar3 = puVar7[uVar4 / 0x55] + (uVar4 % 0x55) * 0x30;
    lVar5 = puVar7[(param_1[6] + uVar4) / 0x55] + ((param_1[6] + uVar4) % 0x55) * 0x30;
    if (lVar5 != lVar3) {
      plVar6 = puVar7 + uVar4 / 0x55;
      do {
        lVar3 = lVar3 + 0x30;
        if (lVar3 - *plVar6 == 0xff0) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
        }
      } while (lVar5 != lVar3);
    }
  }
  param_1[6] = 0;
  while (uVar4 = lVar2 >> 3, 2 < uVar4) {
    operator_delete((void *)*puVar7);
    puVar1 = (undefined8 *)param_1[3];
    puVar7 = (undefined8 *)(param_1[2] + 8);
    param_1[2] = (long)puVar7;
    lVar2 = (long)puVar1 - (long)puVar7;
  }
  if (uVar4 == 1) {
    lVar2 = 0x2a;
  }
  else {
    if (uVar4 != 2) goto LAB_002dd180;
    lVar2 = 0x55;
  }
  param_1[5] = lVar2;
LAB_002dd180:
  if (puVar7 != puVar1) {
    do {
      puVar8 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar8;
    } while (puVar1 != puVar8);
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


