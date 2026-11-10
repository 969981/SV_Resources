/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027deee4; name: FUN_027deee4
 */


ulong FUN_027deee4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (0x1c71c71c71c71c7 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = param_1[2] - *param_1 >> 4;
  uVar2 = lVar1 * 0x1c71c71c71c71c72;
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  if (0xe38e38e38e38e2 < (ulong)(lVar1 * -0x71c71c71c71c71c7)) {
    param_2 = 0x1c71c71c71c71c7;
  }
  return param_2;
}


