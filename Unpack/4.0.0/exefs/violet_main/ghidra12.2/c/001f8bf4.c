/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8bf4; name: FUN_001f8bf4
 */


int FUN_001f8bf4(long param_1,long param_2)

{
  param_2 = *(long *)(param_1 + 0x48) + param_2;
  *(long *)(param_1 + 0x48) = param_2;
  if ((*(byte *)(param_1 + 0xe3) >> 6 & 1) == 0) {
    return -(uint)(*(long *)(param_1 + 0x40) != -1 && *(long *)(param_1 + 0x40) < param_2);
  }
  return -1;
}


