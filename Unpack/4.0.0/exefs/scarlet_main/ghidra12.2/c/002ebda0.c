/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ebda0; name: FUN_002ebda0
 */


void FUN_002ebda0(undefined8 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


