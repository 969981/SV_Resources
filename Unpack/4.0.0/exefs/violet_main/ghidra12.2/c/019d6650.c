/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d6650; name: FUN_019d6650
 */


undefined8 FUN_019d6650(long param_1,long param_2,long param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 4);
  if (*(float *)(param_1 + 4) < fVar1) {
    if (*(float *)(param_3 + 4) <= fVar1) {
      FUN_019d6070(param_1,param_2);
      if (*(float *)(param_2 + 4) < *(float *)(param_3 + 4)) {
        param_1 = param_2;
        goto LAB_019d66dc;
      }
    }
    else {
      FUN_019d6070(param_1,param_3);
    }
  }
  else {
    if (*(float *)(param_3 + 4) <= fVar1) {
      return 0;
    }
    FUN_019d6070(param_2,param_3);
    if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
      param_3 = param_2;
LAB_019d66dc:
      FUN_019d6070(param_1,param_3);
      return 2;
    }
  }
  return 1;
}


