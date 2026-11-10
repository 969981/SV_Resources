/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00106020; name: FUN_00106020
 */


void FUN_00106020(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar9 = param_3 >> 4 & 3;
  for (param_3 = param_3 >> 6; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = *param_2;
    uVar5 = param_2[1];
    uVar2 = param_2[2];
    uVar6 = param_2[3];
    uVar3 = param_2[4];
    uVar7 = param_2[5];
    uVar4 = param_2[6];
    uVar8 = param_2[7];
    param_2 = param_2 + 8;
    *param_1 = uVar1;
    param_1[1] = uVar5;
    param_1[2] = uVar2;
    param_1[3] = uVar6;
    param_1[4] = uVar3;
    param_1[5] = uVar7;
    param_1[6] = uVar4;
    param_1[7] = uVar8;
    param_1 = param_1 + 8;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return;
}


