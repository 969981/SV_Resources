/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01817c10; name: FUN_01817c10
 */


undefined8 FUN_01817c10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_2 + 1);
  if (fVar6 < *(float *)(param_1 + 1)) {
    if (fVar6 <= *(float *)(param_3 + 1)) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar5 = param_1[2];
      uVar3 = param_2[2];
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = uVar3;
      *param_1 = uVar4;
      param_2[1] = uVar2;
      param_2[2] = uVar5;
      *param_2 = uVar1;
      if (*(float *)(param_3 + 1) < *(float *)(param_2 + 1)) {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar5 = param_2[2];
        uVar3 = param_3[2];
        uVar4 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = uVar3;
        *param_2 = uVar4;
        param_3[1] = uVar2;
        param_3[2] = uVar5;
        *param_3 = uVar1;
        return 2;
      }
    }
    else {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar5 = param_1[2];
      uVar3 = param_3[2];
      uVar4 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = uVar3;
      *param_1 = uVar4;
      param_3[1] = uVar2;
      param_3[2] = uVar5;
      *param_3 = uVar1;
    }
  }
  else {
    if (fVar6 <= *(float *)(param_3 + 1)) {
      return 0;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar5 = param_2[2];
    uVar3 = param_3[2];
    uVar4 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = uVar3;
    *param_2 = uVar4;
    param_3[1] = uVar2;
    param_3[2] = uVar5;
    *param_3 = uVar1;
    if (*(float *)(param_2 + 1) < *(float *)(param_1 + 1)) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar5 = param_1[2];
      uVar3 = param_2[2];
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = uVar3;
      *param_1 = uVar4;
      param_2[1] = uVar2;
      param_2[2] = uVar5;
      *param_2 = uVar1;
      return 2;
    }
  }
  return 1;
}


