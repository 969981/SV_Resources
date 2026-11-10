/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


