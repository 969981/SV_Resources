/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298e350; name: FUN_0298e350
 */


ulong FUN_0298e350(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar1 = (param_1[2] - *param_1) * 2;
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  if (0x3ffffffffffffffe < (ulong)(param_1[2] - *param_1)) {
    param_2 = 0x7fffffffffffffff;
  }
  return param_2;
}


