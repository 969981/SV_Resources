/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089280c; name: FUN_0089280c
 */


void FUN_0089280c(undefined2 *param_1)

{
  if (*(long *)(param_1 + 4) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  return;
}


