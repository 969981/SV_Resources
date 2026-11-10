/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02961a30; name: FUN_02961a30
 */


uint FUN_02961a30(uint param_1)

{
  if ((param_1 & 0xffff) < 0x12) {
    return 0x241cfU >> (ulong)(param_1 & 0x1f) & 1;
  }
  return 0;
}


