/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270bd90; name: FUN_0270bd90
 */


undefined8 * FUN_0270bd90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar3 = (long)param_2 - (long)param_1 >> 3;
  lVar1 = param_3 - (long)param_2 >> 3;
  if (lVar3 == lVar1) {
    if (param_1 != param_2) {
      puVar4 = param_2;
      do {
        uVar5 = *param_1;
        puVar2 = param_1 + 1;
        *param_1 = *puVar4;
        *puVar4 = uVar5;
        param_1 = puVar2;
        puVar4 = puVar4 + 1;
      } while (param_2 != puVar2);
      param_1 = param_2;
    }
    return param_1;
  }
  lVar6 = lVar3;
  lVar8 = lVar1;
  do {
    lVar7 = lVar8;
    lVar8 = 0;
    if (lVar7 != 0) {
      lVar8 = lVar6 / lVar7;
    }
    lVar8 = lVar6 - lVar8 * lVar7;
    lVar6 = lVar7;
  } while (lVar8 != 0);
  if (lVar7 != 0) {
    puVar4 = param_1 + lVar7;
    do {
      puVar4 = puVar4 + -1;
      uVar5 = *puVar4;
      puVar2 = puVar4 + lVar3;
      puVar10 = puVar4;
      do {
        puVar9 = puVar2;
        *puVar10 = *puVar9;
        lVar6 = param_3 - (long)puVar9 >> 3;
        puVar2 = puVar9 + lVar3;
        if (lVar6 <= lVar3) {
          puVar2 = param_1 + (lVar3 - lVar6);
        }
        puVar10 = puVar9;
      } while (puVar2 != puVar4);
      *puVar9 = uVar5;
    } while (puVar4 != param_1);
  }
  return param_1 + lVar1;
}


