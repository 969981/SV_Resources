/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0135c9fc; name: FUN_0135c9fc
 */


void FUN_0135c9fc(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  ulong local_80;
  char *pcStack_78;
  long local_70;
  undefined1 auStack_68 [24];
  long *local_50;
  long *local_48;
  undefined1 auStack_40 [16];
  
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = 0;
  *(undefined1 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf0)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf4)) = 0;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0xf8)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0xfc)) = &DAT_cbf29ce484222645;
  puVar1 = (undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x104));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x108)) = 0;
  FUN_0135d328(auStack_40,*(undefined8 *)(param_1 + 0xd8),0);
  local_80 = 0xd92d711bf83e20c0;
  pcStack_78 = "NotMoveDistance";
  local_70 = 0xf;
  FUN_00d8fb98(auStack_68,&local_80);
  FUN_0135d1bc(&local_48,param_1,auStack_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    uVar9 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = uVar9;
  }
  local_80 = 0x4445615b0c2c6517;
  pcStack_78 = "ForcedFinishSecond";
  local_70 = 0x12;
  FUN_00d8fb98(auStack_68,&local_80);
  FUN_0135d1bc(&local_48,param_1,auStack_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    uVar9 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = uVar9;
  }
  local_80 = 0xdd8e8af8d0a34b70;
  pcStack_78 = "IsForced";
  local_70 = 8;
  FUN_00d8fb98(auStack_68,&local_80);
  FUN_0135d1bc(&local_48,param_1,auStack_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    bVar3 = FUN_014c001c();
    *(byte *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf0)) = bVar3 & 1;
  }
  local_80 = 0x9a604cacbb677346;
  pcStack_78 = "ChainType";
  local_70 = 9;
  FUN_00d8fb98(auStack_68,&local_80);
  FUN_0135d1bc(&local_48,param_1,auStack_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    uVar9 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf4)) = uVar9;
  }
  local_80 = 0xb8e0f3db4ace59a6;
  pcStack_78 = "MoveSpeedKey";
  local_70 = 0xc;
  FUN_00d8fb98(auStack_68,&local_80);
  FUN_0135d1bc(&local_48,param_1,auStack_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    uVar5 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf8)) = uVar5;
  }
  local_80 = 0x1aee8cd83183fc61;
  pcStack_78 = "AnimationSpeedRateKey";
  local_70 = 0x15;
  FUN_00d8fb98(auStack_68,&local_80);
  FUN_0135d1bc(&local_48,param_1,auStack_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    uVar5 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xfc)) = uVar5;
  }
  std::to_string(1);
  FUN_01697f28(&local_48,"TargetPositionKey_",&local_80);
  FUN_0135d26c(auStack_68,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar2 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    lVar7 = tpidr_el0;
    plVar8 = *(long **)(lVar7 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar8,lVar2,0,8);
        goto LAB_0135cd1c;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar2,0,8);
  }
LAB_0135cd1c:
  FUN_0135d1bc(&local_80,param_1,auStack_68);
  if (local_80 != 0) {
    uVar5 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x100)) = uVar5;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  std::to_string(2);
  FUN_01697f28(&local_48,"TargetPositionKey_",&local_80);
  FUN_0135d26c(auStack_68,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar2 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    lVar7 = tpidr_el0;
    plVar8 = *(long **)(lVar7 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar8,lVar2,0,8);
        goto LAB_0135cd88;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar2,0,8);
  }
LAB_0135cd88:
  FUN_0135d1bc(&local_80,param_1,auStack_68);
  if (local_80 != 0) {
    uVar5 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x100) + 8) = uVar5;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  std::to_string(3);
  FUN_01697f28(&local_48,"TargetPositionKey_",&local_80);
  FUN_0135d26c(auStack_68,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar2 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    lVar7 = tpidr_el0;
    plVar8 = *(long **)(lVar7 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar8,lVar2,0,8);
        goto LAB_0135cdf8;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar2,0,8);
  }
LAB_0135cdf8:
  FUN_0135d1bc(&local_80,param_1,auStack_68);
  if (local_80 != 0) {
    uVar5 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x100) + 0x10) = uVar5;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_0135d2ec(auStack_40);
  return;
}


