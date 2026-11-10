/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811a60; name: FUN_00811a60
 */


undefined8 FUN_00811a60(long param_1)

{
  if (((*(int *)(param_1 + 1000) == 0) || (*(int *)(param_1 + 0x408) == 0)) ||
     (*(int *)(param_1 + 0x428) == 0)) {
    return 0;
  }
  return 1;
}


