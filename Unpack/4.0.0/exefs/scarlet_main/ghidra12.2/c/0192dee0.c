/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192dee0; name: FUN_0192dee0
 */


ulong FUN_0192dee0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar1 = param_1[2] - *param_1 >> 1;
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  if (0x1ffffffffffffffe < (ulong)(param_1[2] - *param_1 >> 2)) {
    param_2 = 0x3fffffffffffffff;
  }
  return param_2;
}


