/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00454ef0; name: FUN_00454ef0
 */


size_t FUN_00454ef0(byte *param_1,void *param_2,size_t param_3)

{
  if (((ulong)(*param_1 >> 2) & 0xe) + 2 == param_3) {
    memcpy(param_2,param_1 + 0x10,param_3);
    return param_3;
  }
  return 0;
}


