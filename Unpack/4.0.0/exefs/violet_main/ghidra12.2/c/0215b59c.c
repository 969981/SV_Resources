/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215b59c; name: FUN_0215b59c
 */


void FUN_0215b59c(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x130))();
  if ((int)param_3[0xea] == 0) {
    fVar2 = *(float *)(param_3 + 0xf8) * -(float)*(int *)(param_3[0x126] + 0x10);
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)((long)param_3 + 0x7bc) * (float)*(int *)(param_3[0x126] + 0x10);
    fVar2 = 0.0;
  }
  param_5[1] = 0;
  *param_5 = CONCAT44(param_2 - fVar2,fVar1 - fVar3);
  return;
}


