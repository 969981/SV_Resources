/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eda30; name: FUN_001eda30
 */


bool FUN_001eda30(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] == 0x10)) {
    return (char)param_1[2] == '\0';
  }
  return false;
}


