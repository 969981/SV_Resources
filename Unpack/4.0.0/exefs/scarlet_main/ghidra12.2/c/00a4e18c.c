/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4e18c; name: FUN_00a4e18c
 */


ulong FUN_00a4e18c(long param_1)

{
  if (*(int *)(param_1 + 0x64b8) == 0) {
    return (ulong)(*(long *)(param_1 + 0x61f8) - *(long *)(param_1 + 0x61f0)) >> 4;
  }
  return 1;
}


