/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fdafb8; name: FUN_02fdafb8
 */


void FUN_02fdafb8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_78 = 0;
  local_70 = 0x8000000000000000;
  lVar8 = tpidr_el0;
  lVar5 = *(long *)(lVar8 + 0x1000b8);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar5;
  }
  local_68 = *(long *)(*(long *)(lVar5 + 0x3d0) + 0x10);
  if (*(long *)(local_68 + 8) == 0) {
    local_58 = 0x800;
    local_48 = 0x800;
    if (local_68 == 0) goto LAB_02fdb084;
    local_a0 = 0x800;
    if (*(ulong *)(local_68 + 0x28) < 0x800) {
LAB_02fdb040:
      local_60 = FUN_031cf3b4(local_68,&local_a0);
    }
    else {
      local_60 = *(long *)(local_68 + 0x38);
      if (*(ulong *)(local_68 + 0x40) < local_60 + 0x800U) goto LAB_02fdb040;
      *(ulong *)(local_68 + 0x38) = local_60 + 0x800U;
    }
  }
  else {
    local_68 = 0;
LAB_02fdb084:
    local_48 = 0x800;
    local_58 = 0x800;
    local_60 = (**(code **)PTR_DAT_047d1a08)(1,&local_48,0x40);
  }
  local_70 = CONCAT44(0x80000100,(int)local_70);
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  lVar5 = *(long *)(lVar8 + 0x1000b8);
  local_78 = local_60;
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar5;
  }
  local_90 = *(long *)(*(long *)(lVar5 + 0x3d0) + 0x10);
  if (*(long *)(local_90 + 8) == 0) {
    local_80 = 0x800;
    local_50 = 0x800;
    if (local_90 == 0) goto LAB_02fdb164;
    local_48 = 0x800;
    if (*(ulong *)(local_90 + 0x28) < 0x800) {
LAB_02fdb120:
      local_88 = FUN_031cf3b4(local_90,&local_48);
    }
    else {
      local_88 = *(long *)(local_90 + 0x38);
      if (*(ulong *)(local_90 + 0x40) < local_88 + 0x800U) goto LAB_02fdb120;
      *(ulong *)(local_90 + 0x38) = local_88 + 0x800U;
    }
  }
  else {
    local_90 = 0;
LAB_02fdb164:
    local_50 = 0x800;
    local_80 = 0x800;
    local_88 = (**(code **)PTR_DAT_047d1a08)(1,&local_50,0x40);
  }
  puVar2 = PTR_PTR_047d1a50;
  local_98._4_4_ = 0x80000100;
  local_a0 = local_88;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    lVar8 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x28) + lVar5;
      if (*(int *)(lVar1 + 0x20) < 1) {
        lVar6 = (long)(int)local_70;
        if ((int)(local_70._4_4_ & 0x7fffffff) <= (int)local_70) {
          FUN_02f0aac8(&local_78,puVar2,lVar6 + 1);
        }
        *(undefined8 *)(local_78 + (long)(int)local_70 * 8) = *(undefined8 *)(lVar1 + 0x10);
        local_70 = CONCAT44(local_70._4_4_,(int)(lVar6 + 1));
      }
      else {
        lVar6 = (long)(int)local_98;
        if ((int)(local_98._4_4_ & 0x7fffffff) <= (int)local_98) {
          FUN_02f0aac8(&local_a0,puVar2,lVar6 + 1);
        }
        *(undefined8 *)(local_a0 + (long)(int)local_98 * 8) = *(undefined8 *)(lVar1 + 0x10);
        local_98._0_4_ = (int)(lVar6 + 1);
      }
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar8 < *(int *)(param_1 + 0x30));
  }
  if ((int)local_98 != 0) {
    FUN_02f3e808(*(long *)(param_1 + 0x20) + 0x748,*(long *)(param_1 + 0x20),local_a0);
  }
  if ((int)local_70 != 0) {
    FUN_02f3e808(*(long *)(param_1 + 0x20) + 0x750,*(long *)(param_1 + 0x20),local_78);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (local_88 == local_a0) {
    local_98._0_4_ = 0;
  }
  if (local_90 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar4 = local_80 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_90 + 0x28) < uVar4) || (*(long *)(local_90 + 0x38) != uVar4 + local_88)) {
      if (local_88 != 0) {
        if (*(ulong *)(local_90 + 0x28) < uVar4 + 0x40) {
          *(int *)(*(long *)(local_90 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_90 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_90 + 0x10) + 0x18))
                    (*(long **)(local_90 + 0x10),local_88 - *(int *)(local_88 + -4),uVar4 + 0x44);
        }
        else {
          if (*(long *)(local_90 + 0x38) == uVar4 + local_88) {
            *(long *)(local_90 + 0x38) = local_88;
            goto LAB_02fdb34c;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_90 + 0x38) = local_88;
      if (*(long *)(local_90 + 0x48) == local_88) {
LAB_02fdb34c:
        FUN_031cf578();
      }
    }
  }
  uVar3 = local_98._4_4_;
  uVar4 = (ulong)local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (local_a0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a0,uVar4 << 3);
  }
  if (local_60 == local_78) {
    local_70 = local_70 & 0xffffffff00000000;
  }
  if (local_68 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02fdb448;
  }
  uVar4 = local_58 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_68 + 0x28) < uVar4) || (*(long *)(local_68 + 0x38) != uVar4 + local_60)) {
    if (local_60 == 0) goto LAB_02fdb448;
    if (*(ulong *)(local_68 + 0x28) < uVar4 + 0x40) {
      *(int *)(*(long *)(local_68 + 0x30) + 0x20) = *(int *)(*(long *)(local_68 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_68 + 0x10) + 0x18))
                (*(long **)(local_68 + 0x10),local_60 - *(int *)(local_60 + -4),uVar4 + 0x44);
      goto LAB_02fdb448;
    }
    if (*(long *)(local_68 + 0x38) != uVar4 + local_60) {
      FUN_031cf778();
      goto LAB_02fdb448;
    }
    *(long *)(local_68 + 0x38) = local_60;
  }
  else {
    *(long *)(local_68 + 0x38) = local_60;
    if (*(long *)(local_68 + 0x48) != local_60) goto LAB_02fdb448;
  }
  FUN_031cf578();
LAB_02fdb448:
  uVar4 = local_70;
  uVar7 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (long)uVar4) && (local_78 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar7 << 3);
  }
  return;
}


