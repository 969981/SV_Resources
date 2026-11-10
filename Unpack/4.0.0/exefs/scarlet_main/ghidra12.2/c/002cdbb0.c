/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cdbb0; name: FUN_002cdbb0
 */


void FUN_002cdbb0(ulong *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  void *__dest;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *__src;
  ulong uVar9;
  
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  bVar3 = (byte)*param_1;
  uVar6 = (ulong)bVar3;
  if ((bVar3 & 1) == 0) {
    uVar9 = (ulong)(bVar3 >> 1);
    lVar7 = 0x16;
  }
  else {
    uVar6 = *param_1;
    uVar9 = param_1[1];
    lVar7 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  uVar5 = (uint)uVar6;
  uVar2 = uVar9;
  if (uVar9 <= param_2) {
    uVar2 = param_2;
  }
  lVar8 = (uVar2 + 0x10 & 0xfffffffffffffff0) - 1;
  if (uVar2 < 0x17) {
    lVar8 = 0x16;
  }
  if (lVar8 == lVar7) {
    return;
  }
  if (lVar8 == 0x16) {
    __src = (void *)param_1[2];
    bVar4 = false;
    __dest = (void *)((long)param_1 + 1);
    bVar1 = true;
    if ((uVar6 & 1) == 0) {
LAB_002cdc80:
      uVar6 = (ulong)(uVar5 >> 1 & 0x7f);
      goto joined_r0x002cdc88;
    }
  }
  else {
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,lVar8 + 1);
    bVar3 = (byte)*param_1;
    uVar5 = (uint)bVar3;
    bVar1 = (bVar3 & 1) != 0;
    if (bVar1) {
      __src = (void *)param_1[2];
    }
    else {
      __src = (void *)((long)param_1 + 1);
    }
    bVar4 = true;
    if ((bVar3 & 1) == 0) goto LAB_002cdc80;
  }
  uVar6 = param_1[1];
joined_r0x002cdc88:
  if (uVar6 != 0xffffffffffffffff) {
    memcpy(__dest,__src,uVar6 + 1);
  }
  if (bVar1) {
    FUN_0049e790(PTR_LAB_047cba48,__src);
  }
  if (bVar4) {
    param_1[2] = (ulong)__dest;
    *param_1 = lVar8 + 1U | 1;
    param_1[1] = uVar9;
  }
  else {
    *(char *)param_1 = (char)((int)uVar9 << 1);
  }
  return;
}


