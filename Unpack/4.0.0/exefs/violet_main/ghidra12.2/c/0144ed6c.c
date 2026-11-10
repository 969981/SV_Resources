/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144ed6c; name: FUN_0144ed6c
 */


int FUN_0144ed6c(long param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0xff) {
    return 0xff;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
}


