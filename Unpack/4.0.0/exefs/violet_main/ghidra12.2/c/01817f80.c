/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01817f80; name: FUN_01817f80
 */


ulong FUN_01817f80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = FUN_01817e70();
  if (*(float *)(param_5 + 1) < *(float *)(param_4 + 1)) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar7 = param_4[2];
    uVar3 = param_5[2];
    uVar6 = *param_5;
    param_4[1] = param_5[1];
    param_4[2] = uVar3;
    *param_4 = uVar6;
    param_5[1] = uVar2;
    param_5[2] = uVar7;
    *param_5 = uVar1;
    iVar4 = (int)uVar5;
    if (*(float *)(param_3 + 1) <= *(float *)(param_4 + 1)) {
      uVar5 = (ulong)(iVar4 + 1);
    }
    else {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar7 = param_3[2];
      uVar3 = param_4[2];
      uVar6 = *param_4;
      param_3[1] = param_4[1];
      param_3[2] = uVar3;
      *param_3 = uVar6;
      param_4[1] = uVar2;
      param_4[2] = uVar7;
      *param_4 = uVar1;
      if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1)) {
        uVar5 = (ulong)(iVar4 + 2);
      }
      else {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar7 = param_2[2];
        uVar3 = param_3[2];
        uVar6 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = uVar3;
        *param_2 = uVar6;
        param_3[1] = uVar2;
        param_3[2] = uVar7;
        *param_3 = uVar1;
        if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1)) {
          uVar5 = (ulong)(iVar4 + 3);
        }
        else {
          uVar1 = *param_1;
          uVar2 = param_1[1];
          uVar5 = (ulong)(iVar4 + 4);
          uVar7 = param_1[2];
          uVar3 = param_2[2];
          uVar6 = *param_2;
          param_1[1] = param_2[1];
          param_1[2] = uVar3;
          *param_1 = uVar6;
          param_2[1] = uVar2;
          param_2[2] = uVar7;
          *param_2 = uVar1;
        }
      }
    }
  }
  return uVar5;
}


