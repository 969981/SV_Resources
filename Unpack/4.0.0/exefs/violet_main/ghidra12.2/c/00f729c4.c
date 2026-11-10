/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f729c4; name: FUN_00f729c4
 */


void FUN_00f729c4(undefined1 param_1 [16],float param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  
  param_3[1] = param_1._8_8_;
  *param_3 = param_1._0_8_;
  fVar2 = 1.0;
  if (0.0 <= param_2) {
    fVar2 = 0.0;
  }
  fVar1 = 1.0;
  if (0.0 > param_2) {
    fVar1 = 0.0;
  }
  *(float *)(param_3 + 2) = fVar1 * param_2 - fVar2 * param_2;
  return;
}


