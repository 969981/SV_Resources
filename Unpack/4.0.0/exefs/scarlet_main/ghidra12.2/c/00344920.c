/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344920; name: FUN_00344920
 */


void FUN_00344920(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}


