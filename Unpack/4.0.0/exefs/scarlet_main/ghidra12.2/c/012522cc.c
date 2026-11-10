/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012522cc; name: FUN_012522cc
 */


void FUN_012522cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  short *psVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  undefined1 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined1 local_2e0 [4];
  undefined8 local_2dc;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined7 local_2b0;
  undefined4 uStack_2a9;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined8 local_28c;
  undefined8 local_284;
  undefined4 local_27c;
  undefined1 auStack_278 [88];
  undefined8 local_220;
  undefined8 local_20a;
  undefined4 uStack_1ed;
  undefined8 local_1e8;
  undefined6 uStack_1e0;
  undefined2 uStack_1da;
  undefined6 local_1d8;
  undefined1 uStack_1d2;
  undefined1 uStack_1d1;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined4 *local_1c8;
  undefined5 uStack_1c0;
  undefined3 local_1bb;
  undefined5 uStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  undefined5 uStack_1a0;
  undefined4 local_19b;
  undefined1 uStack_197;
  byte bStack_196;
  undefined1 uStack_195;
  undefined1 uStack_194;
  undefined1 uStack_193;
  undefined2 local_192;
  undefined1 local_190;
  undefined1 auStack_188 [88];
  undefined8 local_130;
  undefined8 local_11a;
  undefined4 uStack_fd;
  undefined8 local_f8;
  undefined6 local_f0;
  undefined2 uStack_ea;
  undefined6 local_e8;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined7 local_a8;
  undefined4 uStack_a1;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x40) + 0x90);
  if (((uint)uVar10 >> 2 & 1) == 0) {
    *(ulong *)(*(long *)(param_1 + 0x40) + 0x90) = uVar10 | 4;
    FUN_014dbea4(param_1);
  }
  puVar20 = (undefined4 *)*param_3;
  plVar7 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*puVar20);
  iVar4 = (**(code **)(*plVar7 + 0x4e8))();
  bVar3 = (**(code **)(*plVar7 + 0x220))(plVar7,0x1a);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0x10);
    iVar5 = (**(code **)(*plVar7 + 0x98))(plVar7);
    lVar17 = *(long *)(lVar17 + 0x310);
    if (((*(byte *)(*(long *)(*(long *)(lVar17 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (*(int *)(lVar17 + 0x18) == 0)) {
      uVar9 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x30),1);
      plVar8 = (long *)FUN_0124c614(uVar9,0);
      if (plVar8 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x98))();
        *(undefined4 *)(lVar17 + 0x18) = uVar6;
      }
    }
    if ((*(int *)(lVar17 + 0x18) == iVar5) && (*(char *)(puVar20 + 10) == '\t')) {
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc1,9,0);
    }
  }
  uStack_1b8 = 0;
  local_1c8 = (undefined4 *)0x0;
  uStack_1c0 = 0;
  local_1bb = 0;
  memset(auStack_278,0,0x8f);
  local_1d8 = 0;
  uStack_1d2 = 0;
  uStack_1d1 = 0;
  uStack_1d0 = 0;
  uStack_1cf = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_2c4 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1da = 0;
  local_2cc = 0;
  local_2d4 = 0;
  local_2dc = 0;
  local_2b0 = 0xa0a0a0a0a0a0a;
  uStack_2a9 = 0xa0a0a0a;
  local_2a4 = 0;
  local_29c = 0;
  local_294 = 0;
  local_28c = 0;
  local_284 = 0;
  local_27c = 0;
  uStack_197 = 0;
  bStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  local_1a8 = (long *)0x0;
  uStack_1a0 = 0;
  local_19b = 0;
  local_70 = puVar20;
  memset(auStack_188,0,0x8f);
  local_f8 = 0;
  local_f0 = 0;
  uStack_ea = 0;
  local_e8 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0xa0a0a0a0a0a0a;
  uStack_a1 = 0xa0a0a0a;
  local_94 = 0;
  local_8c = 0;
  local_9c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  FUN_02e32db0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1c40),&local_1b0,&local_70);
  local_1c8 = (undefined4 *)local_1a8;
  uStack_1c0 = uStack_1a0;
  uVar1 = local_1b0._5_1_;
  local_1bb = (undefined3)local_19b;
  uStack_1b8 = (undefined5)
               (CONCAT17(uStack_194,
                         CONCAT16(uStack_195,CONCAT15(bStack_196,CONCAT14(uStack_197,local_19b))))
               >> 0x18);
  iVar5 = (int)local_1b0;
  uVar16 = local_1b0._4_1_;
  memcpy(auStack_278,auStack_188,0x58);
  local_220 = local_130;
  local_20a = local_11a;
  uStack_1ed = uStack_fd;
  local_1d8 = local_e8;
  local_1e8 = local_f8;
  uStack_1e0 = local_f0;
  uStack_1da = uStack_ea;
  uStack_1d2 = uStack_e2;
  uStack_1d1 = uStack_e1;
  uStack_1d0 = uStack_e0;
  uStack_1cf = uStack_df;
  local_2e0[0] = local_d8;
  memcpy((void *)((ulong)local_2e0 | 4),&local_d4,0x2c);
  local_2b0 = local_a8;
  uStack_2a9 = uStack_a1;
  memcpy(&local_2a4,&local_9c,0x2c);
  if (iVar5 == 4) {
    FUN_02980f28(param_1,local_2e0,plVar7,(ulong)local_1c8 & 0xffff);
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (iVar5 == 1) {
      local_1a8 = (long *)(puVar20 + 0x15);
      uStack_1a0 = SUB85(&local_1c8,0);
      local_19b._0_3_ = (undefined3)((ulong)&local_1c8 >> 0x28);
      local_19b._3_1_ = SUB81(auStack_278,0);
      uStack_197 = (undefined1)((ulong)auStack_278 >> 8);
      bStack_196 = (byte)((ulong)auStack_278 >> 0x10);
      uStack_195 = (undefined1)((ulong)auStack_278 >> 0x18);
      uStack_194 = (undefined1)((ulong)auStack_278 >> 0x20);
      uStack_193 = (undefined1)((ulong)auStack_278 >> 0x28);
      local_192 = (undefined2)((ulong)auStack_278 >> 0x30);
      local_70._0_2_ = (ushort)(byte)local_70;
      local_1b0 = plVar7;
      FUN_016784b8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1a80),&local_70,&local_1b0);
      uVar11 = local_70._1_1_;
      uVar16 = (byte)local_70;
    }
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar10 = (ulong)*(byte *)(lVar18 + 0x938);
  lVar17 = lVar18 + uVar10 * 0xc4;
  psVar12 = (short *)(lVar17 + 10);
  if (*psVar12 != -1) {
    lVar19 = lVar18 + uVar10 * 0xc4;
    pcVar14 = (char *)(lVar17 + 8);
    uVar6 = (**(code **)(*plVar7 + 0x98))(plVar7);
    *(undefined4 *)(lVar19 + 0x10) = uVar6;
    *(short *)(lVar19 + 0xe) = (short)local_1c8;
    *(undefined1 *)(lVar19 + 0x14) = local_190;
    if ((short)local_1c8 == 0x90) {
      bVar2 = true;
    }
    else {
      lVar17 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      bVar2 = *(char *)(lVar17 + (ulong)*(byte *)(lVar17 + 0x938) * 0xc4 + 0x21) == '\0';
    }
    *(bool *)(lVar18 + uVar10 * 0xc4 + 0x15) = bVar2;
    if ((*pcVar14 == '\0') && (*psVar12 != -1)) {
      FUN_01a41fb4(*(undefined8 *)(param_1 + 0x28),pcVar14,lVar19 + 0x18);
    }
  }
  local_1b0 = (long *)(puVar20 + 0x15);
  local_192 = *(undefined2 *)(puVar20 + 4);
  uStack_195 = iVar4 != 0x20;
  uStack_1a0 = SUB85(&local_1c8,0);
  local_19b._0_3_ = (undefined3)((ulong)&local_1c8 >> 0x28);
  local_19b = CONCAT13(uVar1,(undefined3)local_19b);
  bStack_196 = bVar3 & 1;
  local_1a8 = plVar7;
  uStack_197 = uVar16;
  uStack_194 = uVar11;
  FUN_02e326e0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1c20),&local_70,&local_1b0);
  lVar18 = *(long *)(*(long *)(param_1 + 0x78) + 0x1360);
  lVar17 = *(long *)(*(long *)(lVar18 + 0x40) + 8);
  uVar10 = (ulong)*(byte *)(lVar17 + 0x938);
  if (*(char *)(lVar17 + uVar10 * 0xc4 + 0x60) != '\0') {
    uVar13 = (ulong)local_1c8 & 0xffff;
    uVar15 = 0;
    do {
      lVar17 = lVar17 + uVar10 * 0xc4;
      lVar19 = lVar17 + uVar15 * 4;
      FUN_02984b70(lVar18,*(undefined4 *)(lVar19 + 100),*(undefined4 *)(lVar19 + 0x9c),
                   *(undefined1 *)(lVar17 + uVar15 + 0x90),uVar13);
      uVar15 = uVar15 + 1;
      lVar17 = *(long *)(*(long *)(lVar18 + 0x40) + 8);
      uVar10 = (ulong)*(byte *)(lVar17 + 0x938);
    } while (uVar15 < *(byte *)(lVar17 + uVar10 * 0xc4 + 0x60));
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0x10);
    iVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
    lVar17 = *(long *)(lVar17 + 0x310);
    if (((*(byte *)(*(long *)(*(long *)(lVar17 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (*(int *)(lVar17 + 0x18) == 0)) {
      uVar9 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x30),1);
      plVar7 = (long *)FUN_0124c614(uVar9,0);
      if (plVar7 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar7 + 0x98))();
        *(undefined4 *)(lVar17 + 0x18) = uVar6;
      }
    }
    if ((*(int *)(lVar17 + 0x18) == iVar4) && (*(char *)(puVar20 + 10) == '\t')) {
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc1,9,1);
    }
  }
  return;
}


