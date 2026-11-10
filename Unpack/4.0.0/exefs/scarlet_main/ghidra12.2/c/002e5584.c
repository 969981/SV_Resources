/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e5584; name: FUN_002e5584
 */


void FUN_002e5584(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = param_1[1];
  uVar2 = *param_1;
  uVar8 = param_1[3];
  uVar6 = param_1[2];
  uVar1 = param_1[4];
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar9 = param_2[3];
  uVar7 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar5;
  *param_1 = uVar3;
  param_1[3] = uVar9;
  param_1[2] = uVar7;
  param_2[4] = uVar1;
  param_2[1] = uVar4;
  *param_2 = uVar2;
  param_2[3] = uVar8;
  param_2[2] = uVar6;
  return;
}


