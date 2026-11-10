/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01692e50; name: FUN_01692e50
 */


int FUN_01692e50(uint param_1)

{
  if (param_1 < 0x7e000001) {
    return (uint)((ulong)param_1 * 0x8080808081 >> 0x27) + 0x10;
  }
  return 0;
}


