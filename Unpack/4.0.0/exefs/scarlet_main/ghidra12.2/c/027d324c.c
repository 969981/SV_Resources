/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d324c; name: FUN_027d324c
 */


void FUN_027d324c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_027d3bd4(param_1 + 4,param_2 + 4);
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  param_1[9] = param_2[9];
  uVar1 = param_2[0xb];
  plVar4 = param_1 + 10;
  *plVar4 = param_2[10];
  param_1[0xb] = uVar1;
  lVar5 = param_2[0xc];
  param_1[0xc] = lVar5;
  if (lVar5 == 0) {
    param_1[9] = plVar4;
  }
  else {
    *(long **)(*plVar4 + 0x10) = plVar4;
    param_2[10] = 0;
    param_2[9] = param_2 + 10;
    param_2[0xc] = 0;
  }
  return;
}


