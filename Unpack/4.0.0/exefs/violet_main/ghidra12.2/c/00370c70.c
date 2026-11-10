/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00370c70; name: FUN_00370c70
 */


uint FUN_00370c70(uint param_1)

{
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return 0xfU >> (ulong)(param_1 & 0x1f) & 1;
}


