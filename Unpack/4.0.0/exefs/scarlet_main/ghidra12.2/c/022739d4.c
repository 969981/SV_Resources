/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022739d4; name: FUN_022739d4
 */


void FUN_022739d4(long param_1,int param_2)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  lVar1 = **(long **)(param_1 + 0x110);
  if ((ulong)((*(long **)(param_1 + 0x110))[1] - lVar1 >> 3) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_0180862c(*(long *)(lVar1 + (long)param_2 * 8) + 0x108,auStack_18);
  return;
}


