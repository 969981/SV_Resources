/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081a130; name: FUN_0081a130
 */


undefined8 FUN_0081a130(long param_1,byte *param_2)

{
  short sVar1;
  ulong uVar2;
  byte *pbVar3;
  ushort uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  size_t __n;
  undefined8 uVar10;
  void *__dest;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong local_98;
  size_t local_90;
  void *local_88;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined1 local_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined4 local_57;
  undefined1 local_53;
  long local_50;
  long *local_48;
  
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar2 = (ulong)(*param_2 >> 1);
  }
  local_68 = 0x28;
  local_5f = 0x30303030303030;
  uStack_58 = 0x30;
  local_67 = 0x30303030303030;
  uStack_60 = 0x30;
  local_57 = 0x30303030;
  local_53 = 0;
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  puVar5 = PTR_DAT_047d1928;
  if (plVar7 != (long *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 8;
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[2] = 0;
    puVar11 = (undefined8 *)((ulong)&local_68 | 1);
    puVar8 = (undefined8 *)FUN_0049e7b0(PTR_FUN_047cba38,0x14);
    uVar13 = puVar11[1];
    uVar10 = *puVar11;
    *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar11 + 2);
    puVar8[1] = uVar13;
    *puVar8 = uVar10;
    lVar12 = plVar7[2];
    if (lVar12 != 0) {
      FUN_0049e800(lVar12);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar12);
    }
    plVar7[2] = (long)puVar8;
    *(undefined2 *)((long)plVar7 + 10) = 0x14;
  }
  local_48 = plVar7;
                    /* try { // try from 0081a220 to 0081a263 has its CatchHandler @ 0081a47c */
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1);
  uVar4 = *(ushort *)((long)plVar7 + 10);
  sVar1 = 0;
  if ((uVar4 & 3) != 0) {
    sVar1 = 4 - (uVar4 & 3);
  }
  *(ushort *)(param_1 + 10) = uVar4 + *(short *)(param_1 + 10) + sVar1 + 4;
  FUN_00819ed4(param_1 + 0x28,&local_48);
  plVar6 = local_48;
  local_48 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)*plVar6)(plVar6);
    FUN_0049e790(PTR_LAB_047cba48,plVar6);
  }
                    /* try { // try from 0081a290 to 0081a297 has its CatchHandler @ 0081a478 */
  FUN_008196ac(&local_68);
                    /* try { // try from 0081a298 to 0081a2a3 has its CatchHandler @ 0081a44c */
  uVar9 = FUN_0081a4bc(param_1,&local_68);
  if ((uVar9 & 1) != 0) {
    uVar10 = CONCAT71(local_5f,uStack_60);
    uVar4 = *(ushort *)((long)plVar7 + 10);
    __n = strlen(PTR_s_sha_1_047d1930);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 0081a420 to 0081a427 has its CatchHandler @ 0081a428 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
      __dest = (void *)((ulong)&local_98 | 1);
      if (__n != 0) goto LAB_0081a31c;
    }
    else {
      uVar9 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
      local_98 = uVar9 | 1;
      local_90 = __n;
      local_88 = __dest;
LAB_0081a31c:
      memcpy(__dest,PTR_s_sha_1_047d1930,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0081a33c to 0081a353 has its CatchHandler @ 0081a42c */
    lVar12 = FUN_0081d300(&local_98,pbVar3,uVar2,local_50,
                          (long)(int)(((int)uVar10 - (uint)uVar4) + -4),&local_7c,0x14);
    if ((local_98 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
    if (lVar12 == 0x14) {
      puVar8 = (undefined8 *)FUN_0049e7b0(PTR_FUN_047cba38,0x14);
      *(undefined4 *)(puVar8 + 2) = local_6c;
      puVar8[1] = uStack_74;
      *puVar8 = local_7c;
      lVar12 = plVar7[2];
      if (lVar12 != 0) {
        FUN_0049e800(lVar12);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar12);
      }
      plVar7[2] = (long)puVar8;
      uVar10 = 1;
      *(undefined2 *)((long)plVar7 + 10) = 0x14;
      lVar12 = local_50;
      goto joined_r0x0081a3e8;
    }
  }
  uVar10 = 0;
  lVar12 = local_50;
joined_r0x0081a3e8:
  if (lVar12 != 0) {
    local_50 = 0;
    FUN_0049e800(lVar12);
    FUN_0049e7e0(PTR_LAB_047cba48,lVar12);
  }
  return uVar10;
}


