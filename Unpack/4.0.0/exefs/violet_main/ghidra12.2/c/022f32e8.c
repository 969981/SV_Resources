/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f32e8; name: FUN_022f32e8
 */


undefined4 FUN_022f32e8(long param_1,long param_2)

{
  if ((ulong)((*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_2 + 4) * 0x30 + 0x28);
}


