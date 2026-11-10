/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010c6e0; name: FUN_0010c6e0
 */


bool FUN_0010c6e0(int param_1)

{
  if ((param_1 + 0x99b4b6beU >> 0x18 | (param_1 + 0x99b4b6beU) * 0x100) < 4) {
    return true;
  }
  return param_1 == 0x6b4b4942;
}


