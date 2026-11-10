/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd39c4; name: FUN_00cd39c4
 */


void FUN_00cd39c4(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1[4] < 4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x1e0,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xe8))();
  }
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0x1e0;
  return;
}


