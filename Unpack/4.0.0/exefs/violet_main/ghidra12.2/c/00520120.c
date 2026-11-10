/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00520120; name: FUN_00520120
 */


undefined8 FUN_00520120(byte *param_1,ulong *param_2,ulong *param_3)

{
  ulong __n;
  byte *__src;
  byte bVar1;
  ulong uVar2;
  void *pvVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  
  bVar1 = *param_1;
  uVar2 = *(ulong *)(param_1 + 8);
  __src = *(byte **)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    __src = param_1 + 1;
    uVar2 = (ulong)(bVar1 >> 1);
  }
  pbVar4 = param_1 + 1;
  uVar6 = uVar2;
  do {
    uVar5 = uVar6;
    if (uVar5 == 0) {
      return 0;
    }
    uVar6 = uVar5 - 1;
  } while (__src[uVar5 - 1] != 0x2f);
  if ((uVar5 == 0) || (uVar5 == uVar2)) {
    return 0;
  }
  if (param_2 != (ulong *)0x0) {
    __n = uVar5;
    if (uVar2 <= uVar6) {
      __n = uVar2;
    }
    if (0xffffffffffffffef < __n) goto LAB_00520310;
    if (__n < 0x17) {
      local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
      pvVar3 = (void *)((ulong)&local_78 | 1);
      if (__n != 0) goto LAB_00520214;
    }
    else {
      uVar2 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      local_78 = uVar2 | 1;
      uStack_70 = __n;
      local_68 = pvVar3;
LAB_00520214:
      memcpy(pvVar3,__src,__n);
    }
    *(undefined1 *)((long)pvVar3 + __n) = 0;
    if ((*param_2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_2[2]);
    }
    param_2[2] = (ulong)local_68;
    param_2[1] = uStack_70;
    *param_2 = local_78;
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    uVar2 = (ulong)(bVar1 >> 1);
    if (uVar2 <= uVar6) goto LAB_00520318;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 <= uVar6) {
LAB_00520318:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  uVar2 = uVar2 - uVar5;
  if (0xffffffffffffffef < uVar2) {
LAB_00520310:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)uVar2 << 1));
    pvVar3 = (void *)((ulong)&local_78 | 1);
    if (uVar2 == 0) goto LAB_005202dc;
  }
  else {
    uVar6 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_78 = uVar6 | 1;
    uStack_70 = uVar2;
    local_68 = pvVar3;
  }
  memcpy(pvVar3,pbVar4 + uVar5,uVar2);
LAB_005202dc:
  *(undefined1 *)((long)pvVar3 + uVar2) = 0;
  if ((*param_3 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_3[2]);
  }
  param_3[2] = (ulong)local_68;
  param_3[1] = uStack_70;
  *param_3 = local_78;
  return 1;
}


