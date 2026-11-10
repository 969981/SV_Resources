/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00533b00; name: FUN_00533b00
 */


uint FUN_00533b00(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *__src;
  uint uVar2;
  void *__dest;
  ulong uVar3;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  
  if ((*param_1 & 1) == 0) {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = (void *)param_1[2];
  }
  else {
    uVar1 = param_1[1];
    __src = (void *)param_1[2];
    if (uVar1 < 0x17) {
      __dest = (void *)((ulong)&local_50 | 1);
      local_50 = CONCAT71(local_50._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      local_50 = uVar3 | 1;
      uStack_48 = uVar1;
      local_40 = __dest;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
                    /* try { // try from 00533b88 to 00533b93 has its CatchHandler @ 00533bd0 */
  uVar2 = FUN_00533c00(&local_50,param_2);
  if ((local_50 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_40);
  }
  return uVar2 & 1;
}


