/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b9d50; name: FUN_003b9d50
 */


bool FUN_003b9d50(long param_1)

{
  if (*(int *)(param_1 + 0x1b0) != 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x150) == 0) {
    return *(long *)(param_1 + 0x228) != 0;
  }
  return true;
}


