/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02961a60; name: FUN_02961a60
 */


uint FUN_02961a60(int param_1)

{
  if ((param_1 - 6U & 0xffff) < 9) {
    return 0x107U >> (ulong)(param_1 - 6U & 0x1f) & 1;
  }
  return 0;
}


