/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e93e0; name: FUN_008e93e0
 */


int FUN_008e93e0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = FUN_008e91a0();
  fVar3 = *param_5;
  fVar4 = *param_4;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1;
  }
  uVar2 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = *(undefined8 *)param_5;
  *(undefined8 *)param_5 = uVar2;
  fVar3 = *param_4;
  fVar4 = *param_3;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1 + 1;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1 + 1;
  }
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar2;
  fVar3 = *param_3;
  fVar4 = *param_2;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1 + 2;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1 + 2;
  }
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar2;
  fVar3 = *param_2;
  fVar4 = *param_1;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1 + 3;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1 + 3;
  }
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar2;
  return iVar1 + 4;
}


