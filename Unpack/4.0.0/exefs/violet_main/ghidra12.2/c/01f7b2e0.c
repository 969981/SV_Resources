/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7b2e0; name: FUN_01f7b2e0
 */


ulong FUN_01f7b2e0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (0x88888888888888 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = param_1[2] - *param_1 >> 5;
  uVar2 = lVar1 * -0x2222222222222222;
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  if (0x44444444444443 < (ulong)(lVar1 * -0x1111111111111111)) {
    param_2 = 0x88888888888888;
  }
  return param_2;
}


