/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02198180; name: FUN_02198180
 */


ulong FUN_02198180(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = FUN_021980a0();
  if (*(float *)(param_4 + 1) < *(float *)(param_3 + 1)) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_4[1];
    *param_3 = *param_4;
    param_3[1] = uVar3;
    *param_4 = uVar1;
    param_4[1] = uVar2;
    iVar4 = (int)uVar5;
    if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1)) {
      uVar5 = (ulong)(iVar4 + 1);
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
        uVar5 = (ulong)(iVar4 + 2);
      }
      else {
        uVar1 = *param_1;
        uVar2 = param_1[1];
        uVar5 = (ulong)(iVar4 + 3);
        uVar3 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar3;
        *param_2 = uVar1;
        param_2[1] = uVar2;
      }
    }
  }
  return uVar5;
}


