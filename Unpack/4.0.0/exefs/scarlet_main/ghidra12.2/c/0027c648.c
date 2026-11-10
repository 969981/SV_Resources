/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027c648; name: FUN_0027c648
 */


void FUN_0027c648(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_0448ccb0;
  if (param_1[6] != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0027c688 to 0027c68f has its CatchHandler @ 0027c690 */
    abort();
  }
  if (param_1[7] != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_0032d30c(param_1);
  return;
}


