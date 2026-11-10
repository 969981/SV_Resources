/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003548f0; name: thunk_FUN_00354f70
 */


bool thunk_FUN_00354f70(void)

{
  if (DAT_047ef690 == 0) {
    return false;
  }
  return *(char *)(DAT_047ef690 + 9) != '\0';
}


