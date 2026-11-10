/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007da5ac; name: FUN_007da5ac
 */


void FUN_007da5ac(long param_1)

{
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_0078cc00();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


