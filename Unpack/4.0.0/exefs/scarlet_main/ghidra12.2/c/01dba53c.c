/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dba53c; name: FUN_01dba53c
 */


void FUN_01dba53c(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  param_2[2] = 0;
  param_2[1] = 0;
  FUN_011a680c(param_2 + 1,param_1 + 1);
  return;
}


