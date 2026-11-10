/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01762df0; name: FUN_01762df0
 */


void FUN_01762df0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)*param_2;
  lVar2 = param_2[1];
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar1;
  param_1[4] = lVar2;
  param_1[5] = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,8,1);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xe8))((long *)param_1[3]);
  }
  *param_1 = lVar2;
  param_1[1] = 0;
  param_1[2] = 1;
  FUN_01762fa0(param_1);
  return;
}


