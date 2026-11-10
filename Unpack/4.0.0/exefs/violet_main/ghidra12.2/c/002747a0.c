/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


