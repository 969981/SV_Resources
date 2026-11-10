/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0ba4; name: FUN_001e0ba4
 */


char * FUN_001e0ba4(uint param_1)

{
  if (param_1 < 100) {
    return (&PTR_s_No_error_04484a68)[(int)param_1];
  }
  return "Unknown error";
}


