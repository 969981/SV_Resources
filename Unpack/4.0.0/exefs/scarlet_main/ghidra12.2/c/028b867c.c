/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


