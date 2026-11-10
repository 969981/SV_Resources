/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ff7b9c; name: FUN_01ff7b9c
 */


void FUN_01ff7b9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = (code *)param_1[1];
  if (pcVar7 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar7)(param_1 + 4);
  }
  uVar8 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar8;
  param_1[6] = param_2[2];
  uVar8 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[6];
  param_1[9] = param_2[5];
  param_1[10] = uVar2;
  param_1[7] = uVar8;
  param_1[8] = uVar1;
  uVar8 = param_2[7];
  param_1[0xd] = 0;
  param_1[0xb] = uVar8;
  param_1[0xc] = 0;
  FUN_00fd9730(param_1 + 0xc,param_2 + 8);
  puVar5 = PTR_LAB_047dc020;
  puVar4 = PTR_FUN_047dc018;
  puVar3 = PTR_thunk_FUN_01ff7c44_047dc010;
  uVar8 = param_2[0xb];
  param_1[0xe] = param_2[10];
  param_1[0xf] = uVar8;
  puVar6 = PTR_LAB_047dc028;
  *param_1 = puVar3;
  param_1[1] = puVar4;
  param_1[2] = puVar5;
  param_1[3] = puVar6;
  return;
}


