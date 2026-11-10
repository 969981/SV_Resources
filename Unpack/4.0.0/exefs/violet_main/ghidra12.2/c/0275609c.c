/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275609c; name: FUN_0275609c
 */


void FUN_0275609c(float param_1,long param_2)

{
  *(float *)(param_2 + 0x14) = param_1;
  if (param_1 < *(float *)(param_2 + 0x10)) {
    *(float *)(param_2 + 0x10) = param_1;
  }
  if (param_1 < *(float *)(param_2 + 0xc)) {
    *(float *)(param_2 + 0xc) = param_1;
  }
  return;
}


