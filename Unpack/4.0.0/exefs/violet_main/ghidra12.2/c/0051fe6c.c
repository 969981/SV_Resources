/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051fe6c; name: FUN_0051fe6c
 */


bool FUN_0051fe6c(undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  byte *__src;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong local_70;
  ulong local_68;
  void *local_60;
  ulong local_58;
  ulong local_50;
  undefined1 *local_48;
  
  pbVar5 = *(byte **)*param_1;
  __src = *(byte **)(pbVar5 + 0x10);
  bVar3 = (*pbVar5 & 1) == 0;
  if (bVar3) {
    __src = pbVar5 + 1;
  }
  uVar8 = (ulong)(*pbVar5 >> 1);
  if (!bVar3) {
    uVar8 = *(ulong *)(pbVar5 + 8);
  }
  if (((long)uVar8 <= (long)param_3) || (__src[uVar8 + ~param_3] != 0x2f)) {
    return false;
  }
  if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar8 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)uVar8 << 1));
    puVar9 = (undefined1 *)((ulong)&local_58 | 1);
    if (uVar8 != 0) goto LAB_0051ff60;
    *puVar9 = 0;
    if (param_2 == (void *)0x0) goto LAB_0051ff78;
LAB_0051fef0:
    if (0xffffffffffffffef < param_3) {
                    /* try { // try from 005200bc to 005200c3 has its CatchHandler @ 005200c4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_3 < 0x17) {
      local_70 = CONCAT71(local_70._1_7_,(char)((int)param_3 << 1));
      pvVar7 = (void *)((ulong)&local_70 | 1);
      if (param_3 != 0) goto LAB_0051ffb0;
    }
    else {
      uVar8 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
      local_70 = uVar8 | 1;
      local_68 = param_3;
      local_60 = pvVar7;
LAB_0051ffb0:
      memcpy(pvVar7,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar7 + param_3) = 0;
    param_2 = (void *)(local_70 & 0xff);
  }
  else {
    uVar10 = uVar8 + 0x10 & 0xfffffffffffffff0;
    puVar9 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
    local_58 = uVar10 | 1;
    local_50 = uVar8;
    local_48 = puVar9;
LAB_0051ff60:
    memcpy(puVar9,__src,uVar8);
    puVar9[uVar8] = 0;
    if (param_2 != (void *)0x0) goto LAB_0051fef0;
LAB_0051ff78:
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar10 = local_58;
  uVar6 = local_58 >> 1 & 0x7f;
  uVar8 = uVar6;
  if ((local_58 & 1) != 0) {
    uVar8 = local_50;
  }
  uVar1 = (ulong)param_2 >> 1 & 0x7fffffff;
  if (((ulong)param_2 & 1) != 0) {
    uVar1 = local_68;
  }
  uVar2 = uVar8 - uVar1;
  if (uVar8 < uVar1) {
    bVar3 = false;
  }
  else {
    pvVar7 = (void *)((ulong)&local_70 | 1);
    if (((ulong)param_2 & 1) != 0) {
      pvVar7 = local_60;
    }
    if ((local_58 & 1) == 0) {
      if ((uVar1 == 0xffffffffffffffff) || (uVar6 < uVar2)) {
LAB_005200b4:
                    /* try { // try from 005200b4 to 005200bb has its CatchHandler @ 005200e8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar8 = uVar6 - uVar2;
      if (uVar1 <= uVar6 - uVar2) {
        uVar8 = uVar1;
      }
      puVar9 = (undefined1 *)((ulong)&local_58 | 1);
    }
    else {
      if ((uVar1 == 0xffffffffffffffff) || (local_50 < uVar2)) goto LAB_005200b4;
      uVar8 = local_50 - uVar2;
      puVar9 = local_48;
      if (uVar1 <= local_50 - uVar2) {
        uVar8 = uVar1;
      }
    }
    if ((uVar8 == 0) || (iVar4 = memcmp(puVar9 + uVar2,pvVar7,uVar8), iVar4 == 0)) {
      iVar4 = -(uint)(uVar8 < uVar1);
    }
    bVar3 = iVar4 == 0;
  }
  if (((ulong)param_2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  if ((uVar10 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return bVar3;
}


