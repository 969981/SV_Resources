/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02901570; name: FUN_02901570
 */


ulong FUN_02901570(long *param_1,ulong param_2)

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


