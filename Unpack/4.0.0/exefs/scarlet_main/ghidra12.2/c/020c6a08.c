/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020c6a08; name: FUN_020c6a08
 */


void FUN_020c6a08(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  byte local_a8;
  undefined7 uStack_a7;
  long local_98;
  ulong local_90;
  char *pcStack_88;
  long local_80;
  long *local_78;
  undefined1 auStack_70 [24];
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_28;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = &DAT_cbf29ce484222645;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_50 = *(undefined8 *)(lVar1 + 0x30);
  local_48 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  std::to_string(1);
  FUN_00d99618(&local_a8,"TriggerIdKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  lVar5 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6ad4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6ad4:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar6;
  }
  std::to_string(1);
  FUN_01566560(&local_28,"TriggerProbabilityKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar5 = local_98;
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6b38;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6b38:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(2);
  FUN_00d99618(&local_a8,"TriggerIdKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  lVar5 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6bac;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6bac:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100) + 8) = uVar6;
  }
  std::to_string(2);
  FUN_01566560(&local_28,"TriggerProbabilityKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar5 = local_98;
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6c14;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6c14:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60) + 8) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(3);
  FUN_00d99618(&local_a8,"TriggerIdKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar7,local_80,0,8);
        goto LAB_020c6c8c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,local_80,0,8);
  }
LAB_020c6c8c:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100) + 0x10) = uVar6;
  }
  std::to_string(3);
  FUN_01566560(&local_28,"TriggerProbabilityKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar5 = local_98;
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6cf4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6cf4:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60) + 0x10) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_90 = 0x65469f37e9cd5de;
  pcStack_88 = "SuccessActionIdKey";
  local_80 = 0x12;
  FUN_00d8fb98(auStack_70,&local_90);
  FUN_00c97fdc(&local_a8,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = uVar6;
  }
  local_90 = 0x29212085f1b5a484;
  pcStack_88 = "SuccessActionProbabilityKey";
  local_80 = 0x1b;
  FUN_00d8fb98(auStack_70,&local_90);
  FUN_00c97fdc(&local_a8,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = uVar6;
  }
  std::to_string(1);
  FUN_015665f0(&local_a8,"FailureActionIdKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  lVar5 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6e2c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6e2c:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = uVar6;
  }
  std::to_string(1);
  FUN_01566680(&local_28,"FailureActionProbabilityKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar5 = local_98;
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6e90;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6e90:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(2);
  FUN_015665f0(&local_a8,"FailureActionIdKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  lVar5 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6f04;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6f04:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c) + 8) = uVar6;
  }
  std::to_string(2);
  FUN_01566680(&local_28,"FailureActionProbabilityKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar5 = local_98;
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6f6c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6f6c:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68) + 8) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(3);
  FUN_015665f0(&local_a8,"FailureActionIdKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  lVar5 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c6fe4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c6fe4:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c) + 0x10) = uVar6;
  }
  std::to_string(3);
  FUN_01566680(&local_28,"FailureActionProbabilityKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar7,local_98,0,8);
        goto LAB_020c704c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,local_98,0,8);
  }
LAB_020c704c:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68) + 0x10) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(undefined8 *)(lVar1 + 0x30) = local_50;
  *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_48;
  return;
}


