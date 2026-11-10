/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004bfd3c; name: FUN_004bfd3c
 */


undefined1  [16] FUN_004bfd3c(long param_1,ulong *param_2)

{
  void *__src;
  char *pcVar1;
  ulong uVar2;
  char *__dest;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong local_78;
  ulong uStack_70;
  char *local_68;
  undefined8 local_60;
  ulong uStack_58;
  char *local_50;
  
  if ((*param_2 & 1) == 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (char *)param_2[2];
    if ((local_60 & 1) == 0) goto LAB_004bfd74;
LAB_004bfdfc:
    if ((uStack_58 == 0) || (uVar3 = uStack_58, pcVar1 = local_50, *local_50 != '.'))
    goto LAB_004bfe70;
  }
  else {
    uVar3 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar3 < 0x17) {
      pcVar1 = (char *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar3 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pcVar1 = (char *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      local_60 = uVar2 | 1;
      uStack_58 = uVar3;
      local_50 = pcVar1;
    }
    memcpy(pcVar1,__src,uVar3 + 1);
    if ((local_60 & 1) != 0) goto LAB_004bfdfc;
LAB_004bfd74:
    if (((byte)local_60 < 2) || (local_60._1_1_ != '.')) goto LAB_004bfe70;
    if ((byte)local_60 >> 1 == 0) {
                    /* try { // try from 004bff18 to 004bff1f has its CatchHandler @ 004bff20 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar3 = (ulong)((byte)local_60 >> 1);
    pcVar1 = (char *)((ulong)&local_60 | 1);
  }
  uVar2 = uVar3 - 1;
  if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 004bff08 to 004bff0f has its CatchHandler @ 004bff20 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)uVar2 << 1));
    __dest = (char *)((ulong)&local_78 | 1);
    if (uVar2 != 0) goto LAB_004bfee8;
    *__dest = '\0';
  }
  else {
    uVar3 = uVar3 + 0xf & 0xfffffffffffffff0;
    __dest = (char *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_78 = uVar3 | 1;
    uStack_70 = uVar2;
    local_68 = __dest;
LAB_004bfee8:
    memcpy(__dest,pcVar1 + 1,uVar2);
    __dest[uVar2] = '\0';
  }
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  local_60 = local_78;
  local_78._0_2_ = (ushort)(byte)local_78;
  local_50 = local_68;
  uStack_58 = uStack_70;
LAB_004bfe70:
                    /* try { // try from 004bfe74 to 004bfe7f has its CatchHandler @ 004bff24 */
  auVar4 = FUN_004a2370(*(undefined8 *)(param_1 + 0x20),param_1,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return auVar4;
}


