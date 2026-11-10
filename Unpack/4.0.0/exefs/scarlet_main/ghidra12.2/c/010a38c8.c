/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a38c8; name: FUN_010a38c8
 */


uint FUN_010a38c8(int param_1,int param_2)

{
  if ((param_1 == 2) && ((param_2 - 1U & 0xff) < 6)) {
    return 0x37U >> (ulong)(param_2 - 1U & 0x1f) & 1;
  }
  return 0;
}


