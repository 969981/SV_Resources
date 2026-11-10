/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5d980; name: FUN_00c5d980
 */


ulong FUN_00c5d980(long param_1)

{
  return (*(long *)(param_1 + 0x10) - **(long **)(param_1 + 0x20)) - 0x10U >> 4;
}


