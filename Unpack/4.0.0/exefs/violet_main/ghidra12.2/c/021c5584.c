/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021c5584; name: FUN_021c5584
 */


void FUN_021c5584(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar5 = (code *)param_1[1];
  if (pcVar5 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar5)(param_1 + 4);
  }
  uVar6 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar6;
  param_1[6] = param_2[2];
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_021c5634(param_1 + 7,param_2 + 3);
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  param_1[10] = param_2[6];
  param_1[0xb] = uVar7;
  param_1[9] = uVar6;
  param_1[0xc] = param_2[8];
  puVar3 = PTR_FUN_047dd798;
  puVar2 = PTR_thunk_FUN_021c5958_047dd790;
  uVar6 = param_2[9];
  param_2[9] = 0;
  puVar1 = PTR_FUN_047dd788;
  param_1[0xd] = uVar6;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 10);
  puVar4 = PTR_FUN_047dd7a0;
  *param_1 = puVar2;
  param_1[1] = puVar3;
  param_1[2] = puVar1;
  param_1[3] = puVar4;
  return;
}


