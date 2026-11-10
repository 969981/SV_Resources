/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ceb3c; name: FUN_025ceb3c
 */


void FUN_025ceb3c(float param_1,long param_2)

{
  if (param_1 <= 1.0) {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 0x54) = param_1;
  return;
}


