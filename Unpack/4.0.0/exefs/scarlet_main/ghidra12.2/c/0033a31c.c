/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033a31c; name: FUN_0033a31c
 */


long FUN_0033a31c(long *param_1)

{
  return (long)param_1 +
         ((ulong)(*(int *)(*(long *)(*param_1 + 0x10) + 0x58) + 0xf) & 0xfffffff0) + 0x50;
}


