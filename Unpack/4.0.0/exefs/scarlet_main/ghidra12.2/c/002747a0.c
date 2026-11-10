/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002747a0; name: FUN_002747a0
 */


void FUN_002747a0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_047ee794 == 0x80) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (&DAT_047ee7d0)[(long)DAT_047ee794 * 2] = param_1;
  *(undefined8 *)(&DAT_047ee7d8 + (long)DAT_047ee794 * 0x10) = param_2;
  DAT_047ee794 = DAT_047ee794 + 1;
  return;
}


