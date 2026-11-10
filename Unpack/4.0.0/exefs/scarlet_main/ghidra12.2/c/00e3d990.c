/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e3d990; name: FUN_00e3d990
 */


uint FUN_00e3d990(undefined8 *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    uVar2 = 0;
    goto LAB_00e3dabc;
  }
  if (*(char *)(param_1 + 2) == '\0') {
    uVar9 = *param_1;
    lVar1 = tpidr_el0;
    if (*(long *)(lVar1 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar1 + 0x30) = DAT_04859430;
      lVar8 = param_1[3];
    }
    local_60 = 0;
    local_d8 = *(undefined **)(lVar1 + 0x30);
    local_d0 = *(undefined **)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x30) = uVar9;
    *(undefined2 *)(lVar1 + 0x38) = 1;
    local_70 = 0;
    uStack_68 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_80 = 0;
    local_78 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    sVar4 = strlen(param_2);
    uVar2 = FUN_00e3de1c(lVar8 + 0x30,param_2,param_2 + sVar4,&local_a0,0);
    lVar8 = local_a0;
    if (local_a0 != 0) {
      local_98 = local_a0;
      plVar10 = *(long **)(lVar1 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_00c4e600();
        if (0 < *(int *)(lVar6 + 0x12c8)) {
          FUN_00c48fe8(plVar10,lVar8,0,8);
          goto LAB_00e3dbc8;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
    }
LAB_00e3dbc8:
    puVar7 = (undefined8 *)(lVar1 + 0x30);
    *puVar7 = local_d8;
    local_e0._0_2_ = local_d0._0_2_;
  }
  else {
    local_a8 = param_1[1];
    local_b8 = auStack_f0 + -(local_a8 + 0xfU & 0xfffffffffffffff0);
    local_c8 = 0;
    local_c0 = 0;
    local_d8 = PTR_DAT_047d96b0 + 0x10;
    local_d0 = PTR_DAT_047d96b0 + 0x128;
    lVar1 = tpidr_el0;
    puStack_b0 = local_b8;
    if (*(long *)(lVar1 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar1 + 0x30) = DAT_04859430;
      lVar8 = param_1[3];
    }
    local_60 = 0;
    local_e8 = *(undefined8 *)(lVar1 + 0x30);
    local_e0 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x30) = &local_d8;
    *(undefined2 *)(lVar1 + 0x38) = 1;
    local_70 = 0;
    uStack_68 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_80 = 0;
    local_78 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    sVar4 = strlen(param_2);
    uVar2 = FUN_00e3de1c(lVar8 + 0x30,param_2,param_2 + sVar4,&local_a0,0);
    lVar8 = local_a0;
    if (local_a0 != 0) {
      local_98 = local_a0;
      plVar10 = *(long **)(lVar1 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_00c4e600();
        if (0 < *(int *)(lVar6 + 0x12c8)) {
          FUN_00c48fe8(plVar10,lVar8,0,8);
          goto LAB_00e3da98;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
    }
LAB_00e3da98:
    puVar7 = (undefined8 *)(lVar1 + 0x30);
    *puVar7 = local_e8;
  }
  *(undefined2 *)(puVar7 + 1) = (undefined2)local_e0;
LAB_00e3dabc:
  return uVar2 & 1;
}


