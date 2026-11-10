/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df7cc8; name: FUN_01df7cc8
 */


bool FUN_01df7cc8(long param_1)

{
  if (*(long *)(param_1 + 0x120) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x120) + 0x210) != '\0';
}


