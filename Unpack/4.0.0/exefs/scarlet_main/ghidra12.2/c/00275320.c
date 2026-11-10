/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00275320; name: FUN_00275320
 */


void FUN_00275320(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_0448c8d8;
  if (param_1[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00275368 to 0027536f has its CatchHandler @ 00275370 */
    abort();
  }
  if (param_1[0x1c] != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_00275228(param_1 + 6);
  FUN_0032d30c(param_1);
  return;
}


