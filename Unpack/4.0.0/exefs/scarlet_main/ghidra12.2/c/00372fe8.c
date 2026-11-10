/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00372fe8; name: FUN_00372fe8
 */


void FUN_00372fe8(long param_1)

{
  if (param_1 + 0x50 != *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00373010 to 00373017 has its CatchHandler @ 00373018 */
    abort();
  }
  if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


