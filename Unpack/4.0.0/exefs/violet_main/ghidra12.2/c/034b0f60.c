/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b0f60; name: FUN_034b0f60
 */


void FUN_034b0f60(long *param_1,undefined8 param_2,float *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float local_24;
  
  if ((ulong *)param_1[8] == (ulong *)0x0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)param_1[8];
    uVar1 = uVar2 >> 0x14 & 1;
    uVar4 = (uint)(uVar2 >> 0x15) & 1;
    uVar3 = (uint)(uVar2 >> 0x16) & 1;
  }
  local_24 = 0.0;
  if (((uVar4 == 0) && (uVar1 == 0)) && (uVar3 == 0)) {
    return;
  }
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  if ((int)uVar1 != 0) {
    fVar5 = (float)FUN_034a9a38(param_1,0x14,param_2);
    *param_3 = fVar5;
    uVar1 = (**(code **)(*param_1 + 0x108))(param_1,&local_24);
    if ((uVar1 & 1) != 0) {
      *param_3 = local_24 * 0.01 * *param_3;
    }
  }
  if (uVar4 != 0) {
    fVar5 = (float)FUN_034a9a38(param_1,0x15,param_2);
    param_3[2] = fVar5;
    if (local_24 == 0.0) {
      uVar1 = (**(code **)(*param_1 + 0x108))(param_1,&local_24);
      if ((uVar1 & 1) == 0) goto LAB_034b1068;
      fVar5 = param_3[2];
    }
    param_3[2] = fVar5 * local_24 * 0.01;
  }
LAB_034b1068:
  if (uVar3 != 0) {
    fVar5 = (float)FUN_034a9a38(param_1,0x16,param_2);
    param_3[1] = fVar5;
    if (local_24 == 0.0) {
      uVar1 = (**(code **)(*param_1 + 0x108))(param_1,&local_24);
      if ((uVar1 & 1) == 0) {
        return;
      }
      fVar5 = param_3[1];
    }
    param_3[1] = fVar5 * local_24 * 0.01;
  }
  return;
}


