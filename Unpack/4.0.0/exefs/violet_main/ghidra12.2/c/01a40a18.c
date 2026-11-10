/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a40a18; name: FUN_01a40a18
 */


void FUN_01a40a18(float param_1,long param_2)

{
  if (1.0 < param_1) {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 0x50) = param_1;
  return;
}


