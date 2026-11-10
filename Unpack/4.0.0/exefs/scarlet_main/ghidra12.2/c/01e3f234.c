/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


