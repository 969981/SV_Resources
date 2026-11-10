/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021675b8; name: FUN_021675b8
 */


uint FUN_021675b8(undefined8 param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  local_18 = *param_2 - *param_3 * 0.5;
  local_20 = *param_2 + *param_3 * 0.5;
  fStack_14 = param_2[1] + param_3[1] * 0.5;
  fStack_1c = param_2[1] - param_3[1] * 0.5;
  uVar1 = FUN_02167528(param_1,&local_18,&local_20);
  return uVar1 & 1;
}


