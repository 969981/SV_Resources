/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034190c; name: FUN_0034190c
 */


void FUN_0034190c(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 2;
                    /* try { // try from 00341928 to 0034192b has its CatchHandler @ 00341934 */
    FUN_00360570(param_1 + 0x18);
  }
  return;
}


