/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344b40; name: FUN_00344b40
 */


long FUN_00344b40(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 long param_5,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar8 = param_1 + 5;
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == puVar8) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      puVar3 = (undefined8 *)*puVar3;
      lVar7 = lVar7 + 1;
    } while (puVar3 != puVar8);
  }
  puVar3 = (undefined8 *)FUN_0038c780(lVar7 << 3);
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != puVar8) {
    puVar5 = puVar3;
    do {
      *puVar5 = puVar4[2];
      puVar4 = (undefined8 *)*puVar4;
      puVar5 = puVar5 + 1;
    } while (puVar4 != puVar8);
  }
  lVar1 = FUN_00344280(puVar3,lVar7);
  lVar1 = FUN_0038c7b0(lVar1 + param_2);
  *param_6 = lVar1;
  param_2 = lVar1 + param_2;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  lVar7 = FUN_003443c0(param_3,param_4,lVar1,puVar3,lVar7,param_1[10],param_1[0xb],param_1[0xe],
                       param_2);
  if (lVar7 == 0) {
    puVar4 = (undefined8 *)*param_1;
    if (puVar4 != puVar8) {
      lVar1 = 0;
      do {
        pcVar6 = (code *)puVar4[3];
        if (pcVar6 != (code *)0x0) {
          uVar2 = FUN_00344390(param_2,lVar1);
          (*pcVar6)(param_2,uVar2,puVar4[4]);
        }
        puVar4 = (undefined8 *)*puVar4;
        lVar1 = lVar1 + 1;
      } while (puVar4 != puVar8);
    }
  }
  else {
    FUN_00344620(param_2);
    free((void *)*param_6);
    *param_6 = 0;
  }
  puVar4 = (undefined8 *)*param_1;
  while (puVar4 != puVar8) {
    puVar5 = (undefined8 *)*puVar4;
    free(puVar4);
    puVar4 = puVar5;
  }
  if (param_1[10] != 0) {
    FUN_00343d90();
  }
  free((void *)param_1[0xd]);
  free(param_1);
  free(puVar3);
  return lVar7;
}


