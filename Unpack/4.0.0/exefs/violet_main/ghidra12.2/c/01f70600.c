/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f70600; name: FUN_01f70600
 */


uint FUN_01f70600(byte *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  uint uVar1;
  ulong uVar2;
  
  if ((*param_1 & 1) == 0) {
    if (param_3 == 0xffffffffffffffff) {
LAB_01f70664:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar2 = (ulong)(*param_1 >> 1);
    param_1 = param_1 + 1;
  }
  else {
    if (param_3 == 0xffffffffffffffff) goto LAB_01f70664;
    uVar2 = *(ulong *)(param_1 + 8);
    param_1 = *(byte **)(param_1 + 0x10);
  }
  __n = param_3;
  if (uVar2 <= param_3) {
    __n = uVar2;
  }
  if (((__n == 0) || (uVar1 = memcmp(param_1,param_2,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(param_3 < uVar2), uVar2 < param_3)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


