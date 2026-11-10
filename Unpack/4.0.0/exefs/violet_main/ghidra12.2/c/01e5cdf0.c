/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5cdf0; name: FUN_01e5cdf0
 */


undefined8 FUN_01e5cdf0(long param_1,long param_2,long param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x34);
  if (fVar1 <= *(float *)(param_1 + 0x34)) {
    if (*(float *)(param_3 + 0x34) <= fVar1) {
      return 0;
    }
    FUN_01e5ccf0(param_2,param_3);
    if (*(float *)(param_1 + 0x34) < *(float *)(param_2 + 0x34)) {
LAB_01e5ce98:
      FUN_01e5ccf0(param_1,param_2);
      return 2;
    }
  }
  else if (*(float *)(param_3 + 0x34) <= fVar1) {
    FUN_01e5ccf0(param_1,param_2);
    if (*(float *)(param_2 + 0x34) < *(float *)(param_3 + 0x34)) {
      param_1 = param_2;
      param_2 = param_3;
      goto LAB_01e5ce98;
    }
  }
  else {
    FUN_01e5ccf0(param_1,param_3);
  }
  return 1;
}


