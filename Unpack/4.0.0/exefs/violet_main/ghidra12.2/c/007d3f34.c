/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d3f34; name: FUN_007d3f34
 */


bool FUN_007d3f34(long param_1)

{
  if (*(int *)(param_1 + 0x98) == 2) {
    return *(int *)(param_1 + 0x68) - 2U < 3;
  }
  return false;
}


