/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ff9f8; name: FUN_028ff9f8
 */


void FUN_028ff9f8(long param_1,uint param_2)

{
  if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_028fb808(*(undefined8 *)(*(long *)(param_1 + 0x138) + (ulong)param_2 * 8));
  return;
}


