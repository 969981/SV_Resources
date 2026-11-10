/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01251988; name: FUN_01251988
 */


bool FUN_01251988(long param_1,int param_2)

{
  if (param_2 < 6) {
    return *(char *)(param_1 + param_2 + 0x86) == '\0';
  }
  return false;
}


