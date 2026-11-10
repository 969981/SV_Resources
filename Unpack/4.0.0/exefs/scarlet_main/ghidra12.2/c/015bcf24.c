/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bcf24; name: FUN_015bcf24
 */


ulong FUN_015bcf24(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = param_1[4];
  if (0x7ffffffffffffffe < uVar1) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1 >> 3;
  uVar3 = lVar2 * 0x47dc11f7047dc12;
  if (param_2 <= uVar3) {
    param_2 = uVar3;
  }
  if (uVar1 >> 1 <= (ulong)(lVar2 * -0x7dc11f7047dc11f7)) {
    param_2 = uVar1;
  }
  return param_2;
}


