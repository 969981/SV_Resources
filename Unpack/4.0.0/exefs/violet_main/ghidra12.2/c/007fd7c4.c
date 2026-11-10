/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fd7c4; name: FUN_007fd7c4
 */


bool FUN_007fd7c4(long param_1)

{
  if (*(int *)(param_1 + 0x13e0) == 2) {
    return *(int *)(param_1 + 0x13b0) - 2U < 3;
  }
  return false;
}


