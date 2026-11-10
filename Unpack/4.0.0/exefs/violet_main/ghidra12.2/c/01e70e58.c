/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70e58; name: FUN_01e70e58
 */


bool FUN_01e70e58(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x40) + 0x29b7) != '\0';
}


