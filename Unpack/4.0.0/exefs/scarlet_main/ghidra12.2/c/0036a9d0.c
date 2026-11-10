/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036a9d0; name: FUN_0036a9d0
 */


undefined8 FUN_0036a9d0(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 1;
}


