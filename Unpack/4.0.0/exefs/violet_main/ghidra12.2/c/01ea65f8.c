/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea65f8; name: FUN_01ea65f8
 */


void FUN_01ea65f8(long param_1,undefined8 param_2,long param_3)

{
  if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 5) <=
      (ulong)*(uint *)(param_3 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
                    /* WARNING: Could not recover jumptable at 0x01ea662c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_3 + 4) * 0x20) + 0x98)
  )();
  return;
}


