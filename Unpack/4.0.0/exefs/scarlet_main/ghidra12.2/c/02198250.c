/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02198250; name: FUN_02198250
 */


ulong FUN_02198250(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = FUN_02198180();
  if (*(float *)(param_5 + 1) < *(float *)(param_4 + 1)) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_5[1];
    *param_4 = *param_5;
    param_4[1] = uVar3;
    *param_5 = uVar1;
    param_5[1] = uVar2;
    iVar4 = (int)uVar5;
    if (*(float *)(param_3 + 1) <= *(float *)(param_4 + 1)) {
      uVar5 = (ulong)(iVar4 + 1);
    }
    else {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = param_4[1];
      *param_3 = *param_4;
      param_3[1] = uVar3;
      *param_4 = uVar1;
      param_4[1] = uVar2;
      if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1)) {
        uVar5 = (ulong)(iVar4 + 2);
      }
      else {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = uVar3;
        *param_3 = uVar1;
        param_3[1] = uVar2;
        if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1)) {
          uVar5 = (ulong)(iVar4 + 3);
        }
        else {
          uVar1 = *param_1;
          uVar2 = param_1[1];
          uVar5 = (ulong)(iVar4 + 4);
          uVar3 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = uVar3;
          *param_2 = uVar1;
          param_2[1] = uVar2;
        }
      }
    }
  }
  return uVar5;
}


