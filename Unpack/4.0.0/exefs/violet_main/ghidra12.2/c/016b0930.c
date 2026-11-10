/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b0930; name: FUN_016b0930
 */


ulong FUN_016b0930(long *param_1,ulong param_2)

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
  lVar2 = param_1[2] - *param_1 >> 4;
  uVar3 = lVar2 * -0x590b21642c8590b2;
  if (param_2 <= uVar3) {
    param_2 = uVar3;
  }
  if (uVar1 >> 1 <= (ulong)(lVar2 * -0x2c8590b21642c859)) {
    param_2 = uVar1;
  }
  return param_2;
}


