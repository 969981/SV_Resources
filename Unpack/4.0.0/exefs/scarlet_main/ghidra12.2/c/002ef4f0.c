/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ef4f0; name: FUN_002ef4f0
 */


void FUN_002ef4f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = "invalid";
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
      param_1[2] = 0;
    }
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
      param_1[1] = 0;
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
      param_1[3] = 0;
    }
    if (param_1[4] != 0) {
      FUN_0046a210();
      param_1[4] = 0;
    }
  }
  return;
}


