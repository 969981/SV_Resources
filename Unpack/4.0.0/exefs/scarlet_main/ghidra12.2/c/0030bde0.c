/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030bde0; name: FUN_0030bde0
 */


void FUN_0030bde0(long *param_1,ulong param_2)

{
  long lVar1;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    if (param_2 < 5) {
      do {
        if (param_1[3] == 0) {
          param_1[3] = param_2;
        }
        param_1 = (long *)*param_1;
      } while (param_1 != (long *)0x0);
    }
    else {
      do {
        if (param_1[3] == 0) {
          lVar1 = FUN_00350fb0(param_2);
          param_1[3] = lVar1;
        }
        param_1 = (long *)*param_1;
      } while (param_1 != (long *)0x0);
    }
  }
  if (param_2 < 5) {
    return;
  }
  FUN_00350fd0(param_2);
  return;
}


