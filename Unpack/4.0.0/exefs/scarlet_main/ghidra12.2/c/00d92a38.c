/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d92a38; name: FUN_00d92a38
 */


void FUN_00d92a38(long param_1,long param_2)

{
  if ((ulong)((*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_00d92a80(param_1,param_2,0);
  return;
}


