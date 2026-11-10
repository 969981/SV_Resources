/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ff75d8; name: FUN_02ff75d8
 */


void FUN_02ff75d8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined **local_1be0;
  undefined8 uStack_1bd8;
  undefined8 local_1bd0;
  undefined **local_1bc0;
  long lStack_1bb8;
  undefined8 local_1bb0;
  ulong uStack_1ba8;
  undefined **local_1ba0;
  undefined8 uStack_1b98;
  undefined8 local_1b90;
  undefined **local_1b80;
  long local_1b78;
  undefined8 local_1b70;
  ulong uStack_1b68;
  undefined **local_1b60;
  undefined8 uStack_1b58;
  undefined8 local_1b50;
  undefined **local_1b40;
  undefined1 auStack_1b30 [64];
  undefined1 *local_1af0;
  undefined8 uStack_1ae8;
  undefined1 auStack_1ae0 [1088];
  undefined1 *local_16a0;
  undefined8 local_1698;
  undefined1 auStack_1690 [1088];
  undefined1 auStack_1250 [64];
  undefined1 *local_1210;
  undefined8 local_1208;
  undefined1 auStack_1200 [1088];
  undefined1 *local_dc0;
  undefined8 local_db8;
  undefined1 auStack_db0 [1088];
  undefined1 auStack_970 [64];
  undefined1 *local_930;
  undefined8 local_928;
  undefined1 auStack_920 [1088];
  undefined1 *local_4e0;
  undefined8 local_4d8;
  undefined1 auStack_4d0 [1088];
  long local_90;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar7 = tpidr_el0;
  lVar3 = *(long *)(lVar7 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar3;
  }
  plVar9 = *(long **)(lVar3 + 0x3e0);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      (**(code **)(lVar3 + 0x18))("ShiftWorld",10,*(undefined8 *)(lVar3 + 0x28));
    }
    puVar6 = (undefined8 *)plVar9[2];
    uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtShiftWorld";
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (((*(byte *)(lVar3 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
      puVar6 = (undefined8 *)plVar9[2];
      uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar9[6] + 8);
      }
    }
    lVar3 = *(long *)(lVar7 + 0x1000b8);
  }
  uVar2 = *param_2;
  local_68 = (long *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uVar4 = param_2[1] & 0xffffffff;
  local_70 = 0;
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar3;
  }
  local_68 = *(long **)(lVar3 + 0x3e0);
  local_1b60 = &PTR_LAB_04612838;
  uStack_1b58 = 0xffffffff;
  local_1b40 = &PTR_LAB_04612878;
  local_1af0 = auStack_1ae0;
  local_1b50 = 1;
  uStack_1ae8 = 0x8000001100000000;
  local_16a0 = auStack_1690;
  local_1210 = auStack_1200;
  local_dc0 = auStack_db0;
  local_930 = auStack_920;
  local_4e0 = auStack_4d0;
  local_1698 = 0x8000001100000000;
  local_1208 = 0x8000001100000000;
  local_db8 = 0x8000001100000000;
  local_928 = 0x8000001100000000;
  local_4d8 = 0x8000001100000000;
  local_90 = param_1;
  local_80 = uVar2;
  uStack_78 = uVar4;
  FUN_03232938(auStack_1b30,1,*(int *)(param_1 + 0x174) + 1,1);
  FUN_03232938(auStack_1250,1,*(int *)(local_90 + 0x5c) + 1,1);
  FUN_03232938(auStack_970,1,*(int *)(local_90 + 0x5c) + 1,1);
  local_1ba0 = &PTR_LAB_046128d8;
  uStack_1b98 = 0xffffffff;
  local_1b80 = &PTR_LAB_04612918;
  local_1be0 = &PTR_LAB_04612978;
  uStack_1bd8 = 0xffffffff;
  local_1b90 = 1;
  local_1bd0 = 1;
  local_1bc0 = &PTR_LAB_046129b8;
  lStack_1bb8 = param_1;
  local_1bb0 = uVar2;
  uStack_1ba8 = uVar4;
  local_1b78 = param_1;
  local_1b70 = uVar2;
  uStack_1b68 = uVar4;
  FUN_02ff7a8c(&local_1b60,&local_70);
  plVar1 = local_68;
  if (local_68 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x28))(*(long **)(param_1 + 0x4c0),&local_1b70);
    goto LAB_02ff7984;
  }
  lVar7 = *local_68;
  if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
    (**(code **)(lVar7 + 0x18))("ShiftBroadphaseSubTask",0x16,*(undefined8 *)(lVar7 + 0x28));
  }
  puVar6 = (undefined8 *)plVar1[2];
  uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
  if ((uVar4 <= (ulong)plVar1[3]) && (plVar1[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
    *puVar6 = "TtShiftBroadphaseSubTask";
    uVar2 = nn::os::GetSystemTick();
    puVar6[1] = uVar2;
  }
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar1[6] != 0)) {
    puVar6 = (undefined8 *)plVar1[2];
    uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar1[3]) && (plVar1[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c4e575;
      puVar6[1] = *(undefined8 *)(plVar1[6] + 8);
    }
  }
  (**(code **)(**(long **)(local_1b78 + 0x4c0) + 0x28))(*(long **)(local_1b78 + 0x4c0),&local_1b70);
  lVar7 = *plVar1;
  if (((*(byte *)(lVar7 + 0x38) & 1) == 0) || (plVar1[6] == 0)) {
LAB_02ff7928:
    puVar8 = (undefined8 *)plVar1[2];
    puVar5 = (undefined8 *)plVar1[3];
  }
  else {
    puVar6 = (undefined8 *)plVar1[2];
    puVar5 = (undefined8 *)plVar1[3];
    puVar8 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff8);
    if (puVar5 < puVar8) goto LAB_02ff7928;
    plVar1[2] = (long)puVar8;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &DAT_03c4e575;
      puVar6[1] = *(undefined8 *)(plVar1[6] + 8);
      goto LAB_02ff7928;
    }
  }
  puVar6 = (undefined8 *)((long)puVar8 + 0x17U & 0xfffffffffffffff8);
  if ((puVar6 <= puVar5) && (plVar1[2] = (long)puVar6, puVar8 != (undefined8 *)0x0)) {
    *puVar8 = &DAT_03c2d363;
    uVar2 = nn::os::GetSystemTick();
    puVar8[1] = uVar2;
  }
  if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
    (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
  }
LAB_02ff7984:
  FUN_02ff81e0(&local_1be0,&local_70);
  FUN_02ff86ec(&local_1b60);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
      puVar6 = (undefined8 *)plVar9[2];
      uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar9[6] + 8);
      }
    }
    puVar6 = (undefined8 *)plVar9[2];
    uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar9[3]) && (plVar9[2] = uVar4, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
      (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return;
}


