/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e9820; name: FUN_004e9820
 */


uint FUN_004e9820(undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *__src;
  void *__dest;
  uint extraout_w1;
  ulong uVar2;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((*param_2 & 1) == 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (void *)param_2[2];
  }
  else {
    uVar1 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar1 < 0x17) {
      __dest = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      local_60 = uVar2 | 1;
      uStack_58 = uVar1;
      local_50 = __dest;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  uStack_40 = param_3[1];
  local_48 = *param_3;
                    /* try { // try from 004e98b4 to 004e98c3 has its CatchHandler @ 004e9900 */
  FUN_004e9fa4(param_1,&local_60,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return extraout_w1 & 1;
}


