/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027debd8; name: FUN_027debd8
 */


ulong FUN_027debd8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (0x1e1e1e1e1e1e1e1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = param_1[2] - *param_1 >> 3;
  uVar2 = lVar1 * -0x1e1e1e1e1e1e1e1e;
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  if (0xf0f0f0f0f0f0ef < (ulong)(lVar1 * -0xf0f0f0f0f0f0f0f)) {
    param_2 = 0x1e1e1e1e1e1e1e1;
  }
  return param_2;
}


