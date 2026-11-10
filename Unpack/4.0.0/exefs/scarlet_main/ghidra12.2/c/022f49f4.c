/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f49f4; name: FUN_022f49f4
 */


undefined1 FUN_022f49f4(long param_1,long param_2)

{
  if ((ulong)((*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return *(undefined1 *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_2 + 4) * 0x30 + 0x28);
}


