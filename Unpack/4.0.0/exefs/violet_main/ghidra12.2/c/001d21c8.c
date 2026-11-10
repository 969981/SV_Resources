/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d21c8; name: FUN_001d21c8
 */


bool FUN_001d21c8(long param_1)

{
  if (*(long *)(param_1 + 0x658) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x658) + 0x4020) != 2;
}


