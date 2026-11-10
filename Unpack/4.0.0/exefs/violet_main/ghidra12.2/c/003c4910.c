/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c4910; name: FUN_003c4910
 */


bool FUN_003c4910(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x3d0) == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x5c) != 0x24;
}


