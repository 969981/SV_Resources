/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7e7ac; name: FUN_01f7e7ac
 */


bool FUN_01f7e7ac(long param_1)

{
  if (*(char *)(param_1 + 0x13f) == '\0') {
    return *(float *)(param_1 + 0x144) < *(float *)(param_1 + 0x17c);
  }
  return false;
}


