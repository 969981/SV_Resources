/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e08308; name: FUN_01e08308
 */


ulong FUN_01e08308(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 0;
  }
  return (ulong)*(uint *)(*(long *)(param_1 + 0x78) + 0x110) << 0x20 | 1;
}


