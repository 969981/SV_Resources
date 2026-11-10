/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293f790; name: FUN_0293f790
 */


uint FUN_0293f790(int param_1)

{
  if ((param_1 - 9U & 0xffff) < 8) {
    return 0xc3U >> (ulong)(param_1 - 9U & 0x1f) & 1;
  }
  return 0;
}


