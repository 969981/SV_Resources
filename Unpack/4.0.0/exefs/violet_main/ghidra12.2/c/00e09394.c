/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e09394; name: FUN_00e09394
 */


void FUN_00e09394(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0 [2];
  undefined1 local_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  long local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  
  local_c0[0] = 0x2008000010;
  FUN_00e08a00(param_1 + 0x28,param_1,local_c0);
  puVar2 = PTR_DAT_047e3318;
  local_d8 = PTR_DAT_047e3318 + 0x10;
  local_d0 = 0;
  local_c8 = -0x8000000000000000;
  lVar8 = tpidr_el0;
  lVar4 = *(long *)(lVar8 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar4;
  }
  plVar7 = *(long **)(lVar4 + 0x3e0);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
      (**(code **)(lVar4 + 0x18))("hkaiWorld::stepWorld",0x14,*(undefined8 *)(lVar4 + 0x28));
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))("silhouettes",0xb,*(undefined8 *)(lVar4 + 0x28));
      }
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar5 = (long)puVar1 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "LthkaiWorld::stepWorld";
      puVar1[2] = "Stsilhouettes";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (((*(byte *)(lVar4 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
  }
  FUN_03124f68(param_1,0);
  lVar4 = *(long *)(lVar8 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar4;
  }
  plVar6 = *(long **)(lVar4 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    if (((*(byte *)(lVar4 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "StPathSearch";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
      (**(code **)(lVar4 + 0x20))(*(undefined8 *)(lVar4 + 0x28));
    }
    if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
      (**(code **)(lVar4 + 0x18))("PathSearch",10,*(undefined8 *)(lVar4 + 0x28));
    }
  }
  FUN_03124af8(param_1);
  lVar4 = *(long *)(lVar8 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar4;
  }
  plVar6 = *(long **)(lVar4 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    if (((*(byte *)(lVar4 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "StNavigators";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
      (**(code **)(lVar4 + 0x20))(*(undefined8 *)(lVar4 + 0x28));
    }
    if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
      (**(code **)(lVar4 + 0x18))("Navigators",10,*(undefined8 *)(lVar4 + 0x28));
    }
  }
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  local_64 = 0x7fffffff7fffffff;
  local_b0[0] = 0;
  local_98 = 0;
  local_90 = 0x7fffffff;
  local_8c = 0;
  local_78 = &DAT_03d7702c;
  local_70 = 0;
  local_68 = 0;
  local_5c = 0xffffffff;
  local_58 = 1;
  FUN_0312373c(param_1,local_b0,&local_d8,1);
  if ((local_78 != (undefined *)0x0) && (*(int *)(local_78 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_78,0);
    local_78 = &DAT_03d7702c;
    local_70 = 0;
  }
  lVar4 = local_80;
  uVar5 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar5 << 4);
  }
  lVar4 = local_a0;
  local_80 = CONCAT44(0x80000000,(undefined4)local_80);
  uVar5 = (ulong)local_a0._4_4_;
  local_88 = 0;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_a8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar5 << 2);
  }
  lVar4 = *(long *)(lVar8 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar4;
  }
  plVar6 = *(long **)(lVar4 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "StpostStepCallbacks";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("postStepCallbacks",0x11,*(undefined8 *)(lVar8 + 0x28));
    }
  }
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  local_64 = 0x7fffffff7fffffff;
  local_98 = 0;
  local_90 = 0x7fffffff;
  local_8c = 0;
  local_78 = &DAT_03d7702c;
  local_70 = 0;
  local_5c = 0xffffffff;
  local_b0[0] = 1;
  local_68 = 1;
  local_58 = 1;
  FUN_0310a154(param_1 + 0xf0,param_1,local_b0);
  if ((local_78 != (undefined *)0x0) && (*(int *)(local_78 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_78,0);
    local_78 = &DAT_03d7702c;
    local_70 = 0;
  }
  lVar8 = local_80;
  uVar5 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar5 << 4);
  }
  lVar8 = local_a0;
  local_80 = CONCAT44(0x80000000,(undefined4)local_80);
  uVar5 = (ulong)local_a0._4_4_;
  local_88 = 0;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_a8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar5 << 2);
  }
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c3697b;
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
      if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
        (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
      }
    }
  }
  lVar8 = local_c8;
  local_d8 = puVar2 + 0x10;
  uVar5 = (ulong)local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_d0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_d0,uVar5 << 3);
  }
  return;
}


