/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f3d84; name: FUN_022f3d84
 */


undefined4 FUN_022f3d84(long param_1,long param_2)

{
  if ((ulong)((*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_2 + 4) * 0x30 + 0x28);
}


