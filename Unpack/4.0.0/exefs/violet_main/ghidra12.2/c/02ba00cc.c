/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ba00cc; name: FUN_02ba00cc
 */


bool FUN_02ba00cc(long param_1)

{
  if (*(char *)(param_1 + 0x430) == '\0') {
    return *(char *)(param_1 + 0x7c2) != '\0';
  }
  return false;
}


