/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5e7a0; name: FUN_00e5e7a0
 */


uint FUN_00e5e7a0(long param_1)

{
  if (*(byte *)(param_1 + 0x5a) < 5) {
    return 6U >> (ulong)(*(byte *)(param_1 + 0x5a) & 0x1f) & 1;
  }
  return 0;
}


