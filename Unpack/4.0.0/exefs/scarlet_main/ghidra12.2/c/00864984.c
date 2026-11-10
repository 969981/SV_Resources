/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00864984; name: FUN_00864984
 */


char * FUN_00864984(byte param_1)

{
  if (param_1 < 6) {
    return (&PTR_s_Physics_044e97b8)[(char)param_1];
  }
  return "Invalid";
}


