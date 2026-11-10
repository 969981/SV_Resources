/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029598a0; name: FUN_029598a0
 */


uint FUN_029598a0(int param_1)

{
  if ((param_1 - 7U & 0xffff) < 0x11) {
    return 0x10171U >> (ulong)(param_1 - 7U & 0x1f) & 1;
  }
  return 0;
}


