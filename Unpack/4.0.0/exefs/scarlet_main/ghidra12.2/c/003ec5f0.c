/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec5f0; name: FUN_003ec5f0
 */


bool FUN_003ec5f0(undefined8 *param_1,int param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(int *)*param_1 == param_2)) {
    if (param_2 == 0) {
      return true;
    }
    return *(int *)(param_1 + 2) == 0;
  }
  if (param_2 == 0) {
    return *(int *)(param_1 + 1) == 0;
  }
  return false;
}


