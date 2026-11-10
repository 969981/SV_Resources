/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025d140; name: FUN_0025d140
 */


undefined8 FUN_0025d140(undefined4 *param_1,long param_2)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  puVar5 = (ulong *)(param_1 + 8);
  if ((*puVar5 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 10);
    local_60 = *puVar5;
    local_50 = *(void **)(param_1 + 0xc);
    uVar2 = (uint)local_60;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 10);
    pvVar1 = *(void **)(param_1 + 0xc);
    if (uVar3 < 0x17) {
      pvVar4 = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar3 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0025d3a0 to 0025d3a7 has its CatchHandler @ 0025d3c0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_60 = uVar7 | 1;
      uStack_58 = uVar3;
      local_50 = pvVar4;
    }
    memcpy(pvVar4,pvVar1,uVar3 + 1);
    uVar2 = (uint)local_60;
    uVar3 = uStack_58;
  }
  uStack_58 = uVar3;
  if ((local_60 & 1) == 0) {
    if ((uVar2 & 0xff) < 2) {
      return 0;
    }
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
    if (uVar3 == 0) {
      return 0;
    }
  }
  if ((*puVar5 & 1) == 0) {
    uStack_58 = *(ulong *)(param_1 + 10);
    local_60 = *puVar5;
    local_50 = *(void **)(param_1 + 0xc);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 10);
    pvVar1 = *(void **)(param_1 + 0xc);
    if (uVar3 < 0x17) {
      pvVar4 = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar3 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0025d3a8 to 0025d3af has its CatchHandler @ 0025d3bc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_60 = uVar7 | 1;
      uStack_58 = uVar3;
      local_50 = pvVar4;
    }
    memcpy(pvVar4,pvVar1,uVar3 + 1);
  }
                    /* try { // try from 0025d274 to 0025d27f has its CatchHandler @ 0025d3cc */
  uVar3 = FUN_0052d318(param_2,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x30) = *param_1;
  if ((*(ulong *)(param_1 + 2) & 1) == 0) {
    uStack_58 = *(ulong *)(param_1 + 4);
    local_60 = *(ulong *)(param_1 + 2);
    local_50 = *(void **)(param_1 + 6);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 4);
    pvVar1 = *(void **)(param_1 + 6);
    if (uVar3 < 0x17) {
      pvVar4 = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar3 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0025d3b0 to 0025d3b7 has its CatchHandler @ 0025d3b8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_60 = uVar7 | 1;
      uStack_58 = uVar3;
      local_50 = pvVar4;
    }
    memcpy(pvVar4,pvVar1,uVar3 + 1);
  }
  puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  puVar6 = *(undefined **)(param_2 + 0x28);
  if (puVar6 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0x28),puVar5,&local_60);
  }
  else {
                    /* try { // try from 0025d34c to 0025d363 has its CatchHandler @ 0025d3c8 */
    FUN_001fcec0(puVar6,&local_60);
  }
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return 1;
}


