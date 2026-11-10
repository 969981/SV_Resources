/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e4cf4; name: FUN_022e4cf4
 */


float FUN_022e4cf4(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x19) != '\0') {
    fVar1 = (float)(int)*(float *)(param_1 + 0xc);
  }
  return fVar1;
}


