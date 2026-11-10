/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f797f0; name: FUN_01f797f0
 */


void FUN_01f797f0(undefined8 param_1,long param_2,int param_3)

{
  if ((ulong)((*(long *)(param_2 + 0x78) - *(long *)(param_2 + 0x70) >> 5) * -0x1111111111111111) <=
      (ulong)(long)param_3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_01f78394(param_1,*(long *)(param_2 + 0x70) + (long)param_3 * 0x1e0);
  return;
}


