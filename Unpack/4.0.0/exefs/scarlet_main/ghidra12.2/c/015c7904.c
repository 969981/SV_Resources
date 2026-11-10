/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c7904; name: FUN_015c7904
 */


void FUN_015c7904(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ushort uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined **local_118;
  char local_110;
  ulong local_108;
  long local_100;
  ulong local_f8;
  void *local_f0;
  long local_e8;
  ulong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  
  FUN_0135d328(auStack_a8,*(undefined8 *)(param_2 + 8),0);
  puVar13 = operator_new__(0x80);
  lVar30 = 0;
  do {
    puVar14 = operator_new(8);
    puVar1 = (undefined4 *)(param_2 + 0xec + lVar30);
    uVar31 = puVar1[-0x1f];
    *(undefined4 *)puVar14 = puVar1[-0x20];
    *(undefined4 *)((long)puVar14 + 4) = uVar31;
    puVar15 = operator_new(8);
    uVar31 = puVar1[1];
    *(undefined4 *)puVar15 = *puVar1;
    *(undefined4 *)((long)puVar15 + 4) = uVar31;
    puVar16 = operator_new(0x10);
    uVar19 = *puVar14;
    *(undefined8 **)((long)puVar13 + lVar30) = puVar16;
    uVar24 = *puVar15;
    lVar30 = lVar30 + 8;
    *puVar16 = uVar19;
    puVar16[1] = uVar24;
  } while (lVar30 != 0x80);
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  local_118 = &local_b8;
  local_110 = '\0';
  local_b8 = PTR_DAT_047dab78 + 0x10;
  local_108 = 0x100;
  local_100 = 8;
  local_f8 = 0;
  local_f0 = (void *)0x0;
  uVar25 = *puVar13;
  uVar19 = puVar13[8];
  uVar7 = puVar13[9];
  uVar24 = puVar13[10];
  uVar8 = puVar13[0xb];
  local_e8 = 0;
  local_e0 = (ulong *)0x0;
  local_c8 = 0x100;
  uVar4 = puVar13[0xc];
  uVar9 = puVar13[0xd];
  local_c0 = 0;
  uStack_d0 = 1;
  iVar12 = *(int *)(param_2 + 0x68);
  uVar31 = *(undefined4 *)(param_2 + 0x50);
  uVar32 = *(undefined4 *)(param_2 + 0x54);
  uVar33 = *(undefined4 *)(param_2 + 0x58);
  uVar34 = *(undefined4 *)(param_2 + 0x5c);
  uVar20 = puVar13[1];
  local_d8 = 0x1000000000000;
  uVar26 = puVar13[2];
  uVar21 = puVar13[3];
  uVar27 = puVar13[4];
  uVar22 = puVar13[5];
  uVar5 = puVar13[6];
  uVar10 = puVar13[7];
  uVar6 = puVar13[0xe];
  uVar11 = puVar13[0xf];
  FUN_018df678(&local_118,0xc,*(undefined8 *)(param_2 + 0x60),0);
  FUN_015c7f20(&local_118,0x2e,uVar11);
  FUN_015c7f20(&local_118,0x2c,uVar6);
  FUN_015c7f20(&local_118,0x2a,uVar9);
  FUN_015c7f20(&local_118,0x28,uVar4);
  FUN_015c7f20(&local_118,0x26,uVar8);
  FUN_015c7f20(&local_118,0x24,uVar24);
  FUN_015c7f20(&local_118,0x22,uVar7);
  FUN_015c7f20(&local_118,0x20,uVar19);
  FUN_015c7f20(&local_118,0x1e,uVar10);
  FUN_015c7f20(&local_118,0x1c,uVar5);
  FUN_015c7f20(&local_118,0x1a,uVar22);
  FUN_015c7f20(&local_118,0x18,uVar27);
  FUN_015c7f20(&local_118,0x16,uVar21);
  FUN_015c7f20(&local_118,0x14,uVar26);
  FUN_015c7f20(&local_118,0x12,uVar20);
  FUN_015c7f20(&local_118,0x10,uVar25);
  if ((iVar12 != 0) || ((char)local_c8 != '\0')) {
    uVar17 = FUN_015713f8(&local_118);
    if ((ulong)(local_e8 - (long)local_e0) < 8) {
      uVar3 = local_108;
      if (local_f8 != 0) {
        uVar3 = local_f8 >> 1;
      }
      uVar2 = (local_f8 - local_e8) + (long)local_f0;
      uVar28 = (long)local_e0 - (long)local_f0;
      if (uVar3 < 9) {
        uVar3 = 8;
      }
      local_f8 = (local_f8 + local_100 + uVar3) - 1 & -local_100;
      if (local_f0 == (void *)0x0) {
        if (local_118 == (undefined **)0x0) {
          local_f0 = operator_new__(local_f8);
        }
        else {
          local_f0 = (void *)(**(code **)(*local_118 + 0x10))(local_118,local_f8);
        }
      }
      else {
        local_f0 = (void *)FUN_01572030();
      }
      local_e8 = (long)local_f0 + (local_f8 - (uVar2 & 0xffffffff));
      local_e0 = (ulong *)((long)local_f0 + (uVar28 & 0xffffffff));
    }
    *local_e0 = uVar17 & 0xffffffff | 0xe00000000;
    local_e0 = local_e0 + 1;
    iVar12 = (int)local_d8 + 1;
    uVar23 = local_d8._4_2_;
    if (local_d8._4_2_ < 0xf) {
      uVar23 = 0xe;
    }
    local_d8._0_6_ = CONCAT24(uVar23,iVar12);
  }
  FUN_015c8088(uVar34,0,&local_118,10);
  FUN_015c8088(uVar33,0,&local_118,8);
  FUN_015c8088(uVar32,0,&local_118,6);
  FUN_015c8088(uVar31,0,&local_118,4);
  uVar31 = FUN_01571a80(&local_118,0);
  FUN_01692868(&local_118,uVar31,0,0);
  FUN_01692b7c(param_1,param_2,local_e8,((int)local_f8 - (int)local_e8) + (int)local_f0,param_3,1);
  lVar30 = local_c0;
  if (local_c0 != 0) {
    FUN_01f2d540(local_c0,*(undefined8 *)(local_c0 + 8));
    lVar18 = tpidr_el0;
    plVar29 = *(long **)(lVar18 + 0x30);
    if (plVar29 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar29 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar17 = (**(code **)(*plVar29 + 0xf8))(plVar29);
    if ((uVar17 & 1) != 0) {
      lVar18 = FUN_00c4e600();
      if (0 < *(int *)(lVar18 + 0x12c8)) {
        FUN_00c48fe8(plVar29,lVar30,0,8);
        goto LAB_015c7c60;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar30,0,8);
  }
LAB_015c7c60:
  if (local_f0 != (void *)0x0) {
    if (local_118 == (undefined **)0x0) {
      operator_delete__(local_f0);
    }
    else {
      (**(code **)(*local_118 + 0x18))(local_118,local_f0,local_f8);
    }
  }
  local_f0 = (void *)0x0;
  if ((local_110 != '\0') && (local_118 != (undefined **)0x0)) {
    (**(code **)(*local_118 + 8))();
  }
  FUN_0135d2ec(auStack_a8);
  return;
}


