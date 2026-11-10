/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d21de0; name: FUN_00d21de0
 */


void FUN_00d21de0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined *local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined1 *puStack_528;
  undefined8 local_520;
  undefined1 auStack_518 [768];
  undefined1 *local_218;
  undefined8 local_210;
  undefined1 auStack_208 [128];
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 auStack_178 [256];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  long *local_58;
  
  lVar6 = tpidr_el0;
  lVar3 = *(long *)(lVar6 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar3;
  }
  plVar7 = *(long **)(lVar3 + 0x3e0);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      (**(code **)(lVar3 + 0x18))("Physics",7,*(undefined8 *)(lVar3 + 0x28));
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtPhysics";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar3 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
  }
  puStack_528 = auStack_518;
  local_530 = 1;
  local_218 = auStack_208;
  local_188 = auStack_178;
  local_540 = &DAT_0460f740;
  uStack_538 = 0xffffffff;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  local_60 = 0xffff;
  local_520 = 0x8000002000000000;
  local_210 = 0x8000002000000000;
  local_180 = 0x8000002000000000;
  local_58 = plVar7;
  FUN_02f41190(param_1,param_2,&local_540);
  if ((int)local_520 != 0 || (int)local_210 != 0) {
    lVar3 = *(long *)(lVar6 + 0x1000b8);
    if (lVar3 == 0) {
      lVar3 = FUN_00e5d3b4();
      *(long *)(lVar6 + 0x1000b8) = lVar3;
    }
    plVar5 = *(long **)(lVar3 + 0x3e0);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
        (**(code **)(lVar6 + 0x18))("Collide",7,*(undefined8 *)(lVar6 + 0x28));
      }
      puVar1 = (undefined8 *)plVar5[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "TtCollide";
        uVar2 = nn::os::GetSystemTick();
        puVar1[1] = uVar2;
      }
      if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
        puVar1 = (undefined8 *)plVar5[2];
        uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c4e575;
          puVar1[1] = *(undefined8 *)(plVar5[6] + 8);
        }
      }
    }
    (**(code **)(*param_3 + 0xb0))(param_3,&local_540,0);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
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
      if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
        (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
      }
    }
  }
  FUN_00dbaf98(&local_540);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar7[3]) && (plVar7[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
    }
  }
  return;
}


