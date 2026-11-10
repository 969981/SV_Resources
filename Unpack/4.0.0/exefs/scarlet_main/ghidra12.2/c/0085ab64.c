/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085ab64; name: FUN_0085ab64
 */


byte FUN_0085ab64(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x1fc) == '\0') {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x18) + 0x1fd) ^ 1;
}


