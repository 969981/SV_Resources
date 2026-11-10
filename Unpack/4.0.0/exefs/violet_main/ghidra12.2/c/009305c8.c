/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009305c8; name: FUN_009305c8
 */


uint FUN_009305c8(long param_1,uint param_2)

{
  if (0x1f < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3e3a0();
  }
  return (uint)(*(ulong *)(param_1 + 8) >> ((ulong)param_2 & 0x3f)) & 1;
}


