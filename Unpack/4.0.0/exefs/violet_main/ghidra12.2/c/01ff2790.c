/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ff2790; name: FUN_01ff2790
 */


void FUN_01ff2790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = (code *)param_1[1];
  if (pcVar6 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar6)(param_1 + 4);
  }
  uVar7 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar2;
  param_1[4] = uVar7;
  param_1[5] = uVar1;
  uVar7 = param_2[4];
  param_1[10] = 0;
  param_1[8] = uVar7;
  param_1[9] = 0;
  FUN_00f34110(param_1 + 9,param_2 + 5);
  puVar5 = PTR_LAB_047dbee0;
  puVar4 = PTR_LAB_047dbed8;
  puVar3 = PTR_LAB_047dbed0;
  *param_1 = PTR_LAB_047dbec8;
  param_1[1] = puVar3;
  param_1[2] = puVar4;
  param_1[3] = puVar5;
  return;
}


