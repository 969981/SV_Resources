/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d82ac; name: FUN_002d82ac
 */


void FUN_002d82ac(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  lVar3 = (long)puVar1 - (long)puVar7;
  if (lVar3 != 0) {
    uVar5 = param_1[4];
    plVar4 = (long *)((long)puVar7 + (uVar5 >> 5 & 0x7fffffffffffff8));
    lVar6 = *plVar4 + (uVar5 & 0xff) * 0x10;
    while (*(long *)((long)puVar7 + (param_1[5] + uVar5 >> 5 & 0x7fffffffffffff8)) +
           (param_1[5] + uVar5 & 0xff) * 0x10 != lVar6) {
      lVar6 = lVar6 + 0x10;
      if (lVar6 - *plVar4 == 0x1000) {
        plVar4 = plVar4 + 1;
        lVar6 = *plVar4;
      }
    }
  }
  param_1[5] = 0;
  puVar2 = PTR_LAB_047cba48;
  while (uVar5 = lVar3 >> 3, 2 < uVar5) {
    FUN_0049e790(puVar2,*puVar7);
    puVar1 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar7;
    lVar3 = (long)puVar1 - (long)puVar7;
  }
  if (uVar5 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar5 != 2) goto LAB_002d8384;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_002d8384:
  puVar2 = PTR_LAB_047cba48;
  if (puVar7 != puVar1) {
    do {
      puVar8 = puVar7 + 1;
      FUN_0049e790(puVar2,*puVar7);
      puVar7 = puVar8;
    } while (puVar1 != puVar8);
    lVar3 = param_1[2] - param_1[1];
    if (lVar3 != 0) {
      param_1[2] = param_1[2] + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


