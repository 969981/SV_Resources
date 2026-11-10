/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f3863c; name: FUN_01f3863c
 */


ulong FUN_01f3863c(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[4];
  if (0x7ffffffffffffffe < uVar1) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar2 = param_1[2] - *param_1 >> 2;
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  if (uVar1 >> 1 <= (ulong)(param_1[2] - *param_1 >> 3)) {
    param_2 = uVar1;
  }
  return param_2;
}


