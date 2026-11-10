/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e8df4; name: FUN_004e8df4
 */


undefined1  [16] FUN_004e8df4(long param_1,ulong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *__src;
  bool bVar3;
  void *__dest;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined4 local_60 [2];
  undefined8 local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  undefined4 local_38;
  
  if ((*param_2 & 1) == 0) {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = (void *)param_2[2];
  }
  else {
    uVar2 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar2 < 0x17) {
      __dest = (void *)((ulong)&local_50 | 1);
      local_50 = CONCAT71(local_50._1_7_,(char)((int)uVar2 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar7 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_50 = uVar7 | 1;
      uStack_48 = uVar2;
      local_40 = __dest;
    }
    memcpy(__dest,__src,uVar2 + 1);
  }
  local_58 = 0;
  local_60[0] = 0;
                    /* try { // try from 004e8e90 to 004e8e97 has its CatchHandler @ 004e8efc */
  local_38 = param_3;
  lVar4 = FUN_004eae10(param_1 + 0x30,&local_50);
  bVar3 = param_1 + 0x38 != lVar4;
  puVar1 = &local_58;
  if (bVar3) {
    puVar1 = (undefined8 *)(lVar4 + 0x40);
  }
  uVar5 = *puVar1;
  puVar1 = (undefined8 *)local_60;
  if (bVar3) {
    puVar1 = (undefined8 *)(lVar4 + 0x48);
  }
  uVar6 = *puVar1;
  if ((local_50 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_40);
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5;
  return auVar8;
}


