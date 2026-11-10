/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081c790; name: FUN_0081c790
 */


undefined8 FUN_0081c790(ulong *param_1,byte *param_2,byte *param_3,ulong *param_4)

{
  byte *pbVar1;
  void *__dest;
  size_t __n;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong local_b8;
  size_t sStack_b0;
  void *local_a8;
  undefined1 auStack_a0 [64];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  if ((*param_1 & 1) == 0) {
    uStack_58 = param_1[1];
    local_60 = *param_1;
    local_50 = (void *)param_1[2];
  }
  else {
    uVar2 = param_1[1];
    pvVar4 = (void *)param_1[2];
    if (uVar2 < 0x17) {
      __dest = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar2 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      local_60 = uVar5 | 1;
      uStack_58 = uVar2;
      local_50 = __dest;
    }
    memcpy(__dest,pvVar4,uVar2 + 1);
  }
                    /* try { // try from 0081c824 to 0081c87b has its CatchHandler @ 0081ca6c */
  FUN_002cdcec(&local_60,0x3a);
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar2 = (ulong)(*param_2 >> 1);
  }
  FUN_0021d540(&local_60,pbVar1,uVar2);
  FUN_002cdcec(&local_60,0x3a);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
  FUN_0021d540(&local_60,pbVar1,uVar2);
  __n = strlen(PTR_DAT_047d1968);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0081ca14 to 0081ca1b has its CatchHandler @ 0081ca30 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)__n << 1));
    pvVar4 = (void *)((ulong)&local_b8 | 1);
    if (__n == 0) goto LAB_0081c8f0;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
    local_b8 = uVar2 | 1;
    sStack_b0 = __n;
    local_a8 = pvVar4;
  }
  memcpy(pvVar4,PTR_DAT_047d1968,__n);
LAB_0081c8f0:
  *(undefined1 *)((long)pvVar4 + __n) = 0;
  uVar2 = local_60 >> 1 & 0x7f;
  pvVar4 = (void *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    uVar2 = uStack_58;
    pvVar4 = local_50;
  }
                    /* try { // try from 0081c914 to 0081c923 has its CatchHandler @ 0081ca34 */
  uVar2 = FUN_0081cde0(&local_b8,pvVar4,uVar2,auStack_a0,0x40);
  if ((local_b8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a8);
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 0081ca1c to 0081ca23 has its CatchHandler @ 0081ca2c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar2 < 0x17) {
      local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar2 << 1));
      pvVar4 = (void *)((ulong)&local_b8 | 1);
    }
    else {
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      local_b8 = uVar5 | 1;
      sStack_b0 = uVar2;
      local_a8 = pvVar4;
    }
    memcpy(pvVar4,auStack_a0,uVar2);
    *(undefined1 *)((long)pvVar4 + uVar2) = 0;
    if ((*param_4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_4[2]);
    }
    param_4[2] = (ulong)local_a8;
    param_4[1] = sStack_b0;
    *param_4 = local_b8;
    uVar3 = 1;
  }
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return uVar3;
}


