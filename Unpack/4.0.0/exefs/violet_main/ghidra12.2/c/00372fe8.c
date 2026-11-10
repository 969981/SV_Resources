/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


