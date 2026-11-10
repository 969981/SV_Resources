/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0066af14; name: FUN_0066af14
 */


bool FUN_0066af14(long param_1)

{
  if (*(long *)(param_1 + 8) == 0) {
    return true;
  }
  return *(int *)(*(long *)(param_1 + 8) + 0x18) == 0;
}


