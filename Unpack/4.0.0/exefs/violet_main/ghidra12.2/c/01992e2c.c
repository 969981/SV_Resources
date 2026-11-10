/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01992e2c; name: FUN_01992e2c
 */


bool FUN_01992e2c(long *param_1)

{
  if (*(char *)((long)param_1 + 0x31) == '\0') {
    return *(float *)(*param_1 + 0x3c) != 0.0;
  }
  return true;
}


