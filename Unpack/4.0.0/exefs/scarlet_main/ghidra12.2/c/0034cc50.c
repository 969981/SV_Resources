/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034cc50; name: FUN_0034cc50
 */


undefined8 FUN_0034cc50(int *param_1,int param_2,int param_3)

{
  if ((param_2 == 0) || (param_3 == 0)) {
    if (param_2 - 1U < 2) {
      *param_1 = param_2;
      return 1;
    }
    if (param_2 == 0) {
      if (param_3 == 0) {
        *param_1 = 0;
        return 1;
      }
      if (param_3 == 1) {
        *param_1 = 3;
        return 1;
      }
    }
  }
  *param_1 = 0;
  return 0;
}


