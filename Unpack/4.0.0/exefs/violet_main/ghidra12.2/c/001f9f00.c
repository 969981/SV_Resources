/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9f00; name: FUN_001f9f00
 */


bool FUN_001f9f00(long param_1)

{
  if (((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 0x78) == 0)) &&
     (*(long *)(param_1 + 0x80) == 0)) {
    return *(long *)(param_1 + 0x88) != 0;
  }
  return true;
}


