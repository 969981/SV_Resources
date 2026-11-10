/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0029d7ec; name: FUN_0029d7ec
 */


long * FUN_0029d7ec(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x70);
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*param_1 & 1) == 0) {
    uStack_58 = param_1[1];
    local_60 = *param_1;
    local_50 = (void *)param_1[2];
    bVar3 = (byte)*param_2;
  }
  else {
    uVar1 = param_1[1];
    pvVar2 = (void *)param_1[2];
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_60 = uVar6 | 1;
      uStack_58 = uVar1;
      local_50 = pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
    bVar3 = (byte)*param_2;
  }
  if ((bVar3 & 1) == 0) {
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = (void *)param_2[2];
    bVar3 = (byte)*param_3;
  }
  else {
    uVar1 = param_2[1];
    pvVar2 = (void *)param_2[2];
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((ulong)&local_80 | 1);
      uVar6 = local_80 >> 8;
      local_80 = CONCAT71((int7)uVar6,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0029da18 to 0029da1f has its CatchHandler @ 0029da60 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_80 = uVar6 | 1;
      uStack_78 = uVar1;
      local_70 = pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
    bVar3 = (byte)*param_3;
  }
  if ((bVar3 & 1) == 0) {
    uStack_98 = param_3[1];
    local_a0 = *param_3;
    local_90 = (void *)param_3[2];
  }
  else {
    uVar1 = param_3[1];
    pvVar2 = (void *)param_3[2];
    if (uVar1 < 0x17) {
      uVar6 = local_a0 >> 8;
      local_a0 = CONCAT71((int7)uVar6,(char)((int)uVar1 << 1));
      pvVar5 = (void *)((ulong)&local_a0 | 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0029da20 to 0029da27 has its CatchHandler @ 0029da28 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_a0 = uVar6 | 1;
      uStack_98 = uVar1;
      local_90 = pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  *plVar4 = (long)(PTR_DAT_047cc6a0 + 0x10);
  plVar4[1] = 1;
  plVar4[4] = (long)local_50;
  plVar4[3] = uStack_58;
  plVar4[2] = local_60;
  plVar4[7] = (long)local_70;
  plVar4[6] = uStack_78;
  plVar4[5] = local_80;
  plVar4[10] = (long)local_90;
  plVar4[9] = uStack_98;
  plVar4[8] = local_a0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  return plVar4;
}


