/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e120; name: FUN_01f6e120
 */


bool FUN_01f6e120(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    return false;
  }
  return *(char *)(param_1 + 0x21) != '\0';
}


