/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b867c; name: FUN_028b867c
 */


void FUN_028b867c(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  pvVar1 = operator_new(param_2 << 2);
  *param_1 = pvVar1;
  param_1[1] = pvVar1;
  param_1[2] = (void *)((long)pvVar1 + param_2 * 4);
  return;
}


