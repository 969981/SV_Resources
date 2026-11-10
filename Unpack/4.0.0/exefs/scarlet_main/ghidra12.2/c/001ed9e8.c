/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed9e8; name: FUN_001ed9e8
 */


char * FUN_001ed9e8(uint param_1)

{
  if (param_1 < 0xe) {
    return (&PTR_s_NO_ERROR_04485078)[(int)param_1];
  }
  return "unknown";
}


