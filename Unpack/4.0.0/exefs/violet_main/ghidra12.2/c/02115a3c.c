/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02115a3c; name: FUN_02115a3c
 */


bool FUN_02115a3c(long param_1,uint param_2)

{
  if ((param_2 & 0xff) < 5) {
    return *(char *)(param_1 + (ulong)(param_2 & 0xff) + 0x174) != '\0';
  }
  return false;
}


