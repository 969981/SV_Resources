/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8bc4; name: FUN_001f8bc4
 */


undefined8 FUN_001f8bc4(long param_1)

{
  if (((*(byte *)(param_1 + 0xe3) >> 6 & 1) == 0) &&
     ((*(long *)(param_1 + 0x40) == -1 || (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))))
     ) {
    return 0;
  }
  return 0xffffffff;
}


