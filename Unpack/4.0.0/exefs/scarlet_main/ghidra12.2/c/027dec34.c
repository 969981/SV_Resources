/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dec34; name: FUN_027dec34
 */


void FUN_027dec34(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (0x1e1e1e1e1e1e1e1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x88,8);
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + param_2 * 0x88;
  return;
}


