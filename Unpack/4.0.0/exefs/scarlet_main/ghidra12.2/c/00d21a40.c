/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d21a40; name: FUN_00d21a40
 */


void FUN_00d21a40(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined1 *puStack_520;
  undefined8 local_518;
  undefined1 auStack_510 [768];
  undefined1 *local_210;
  undefined8 local_208;
  undefined1 auStack_200 [128];
  undefined1 *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [256];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  
  lVar7 = tpidr_el0;
  lVar3 = *(long *)(lVar7 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar3;
  }
  plVar6 = *(long **)(lVar3 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      (**(code **)(lVar3 + 0x18))("Physics",7,*(undefined8 *)(lVar3 + 0x28));
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtPhysics";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar3 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
  }
  puStack_520 = auStack_510;
  local_528 = 1;
  local_210 = auStack_200;
  local_180 = auStack_170;
  local_538 = &DAT_0460f740;
  uStack_530 = 0xffffffff;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  local_60 = 0xffffffffffffffff;
  local_58 = 0xffff;
  local_518 = 0x8000002000000000;
  local_208 = 0x8000002000000000;
  local_178 = 0x8000002000000000;
  FUN_02f42f80(param_1,&local_538);
  if ((int)local_518 != 0 || (int)local_208 != 0) {
    lVar3 = *(long *)(lVar7 + 0x1000b8);
    if (lVar3 == 0) {
      lVar3 = FUN_00e5d3b4();
      *(long *)(lVar7 + 0x1000b8) = lVar3;
    }
    plVar5 = *(long **)(lVar3 + 0x3e0);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
        (**(code **)(lVar7 + 0x18))("Solve",5,*(undefined8 *)(lVar7 + 0x28));
      }
      puVar1 = (undefined8 *)plVar5[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "TtSolve";
        uVar2 = nn::os::GetSystemTick();
        puVar1[1] = uVar2;
      }
      if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
        puVar1 = (undefined8 *)plVar5[2];
        uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(plVar5[6] + 8);
        }
      }
    }
    (**(code **)(*param_2 + 0xb0))(param_2,&local_538,0);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
        puVar1 = (undefined8 *)plVar5[2];
        uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(plVar5[6] + 8);
        }
      }
      puVar1 = (undefined8 *)plVar5[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c2d363;
        uVar2 = nn::os::GetSystemTick();
        puVar1[1] = uVar2;
      }
      if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
        (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
      }
    }
  }
  FUN_00dbaf98(&local_538);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
      (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return;
}


