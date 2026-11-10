/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350474; name: FUN_00350474
 */


void FUN_00350474(long *param_1)

{
  if (param_1 + 9 != (long *)*param_1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0035049c to 003504a3 has its CatchHandler @ 003504a4 */
    abort();
  }
  if ((long *)param_1[8] != (long *)*param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


