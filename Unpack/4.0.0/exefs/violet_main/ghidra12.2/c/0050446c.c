/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050446c; name: FUN_0050446c
 */


void FUN_0050446c(long *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  
  if ((*param_3 & 1) == 0) {
    uStack_48 = param_3[1];
    local_50 = *param_3;
    local_40 = (void *)param_3[2];
  }
  else {
    uVar1 = param_3[1];
    __src = (void *)param_3[2];
    if (uVar1 < 0x17) {
      __dest = (void *)((ulong)&local_50 | 1);
      local_50 = CONCAT71(local_50._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      local_50 = uVar2 | 1;
      uStack_48 = uVar1;
      local_40 = __dest;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
                    /* try { // try from 00504500 to 0050450f has its CatchHandler @ 00504544 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_50);
  if ((local_50 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_40);
  }
  return;
}


