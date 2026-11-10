/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3f234; name: FUN_01e3f234
 */


ulong FUN_01e3f234(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar2 = param_2 + 0x3fU & 0xffffffffffffffc0;
  uVar1 = *(long *)(param_1 + 0x10) << 7;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = 0x7fffffffffffffff;
  if ((ulong)(*(long *)(param_1 + 0x10) << 6) < 0x3fffffffffffffff) {
    uVar1 = uVar2;
  }
  return uVar1;
}


