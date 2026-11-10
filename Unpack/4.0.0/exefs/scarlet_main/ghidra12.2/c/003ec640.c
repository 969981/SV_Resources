/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec640; name: FUN_003ec640
 */


uint FUN_003ec640(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) < 1) {
    return 0;
  }
  return *(uint *)*param_1 & 1;
}


