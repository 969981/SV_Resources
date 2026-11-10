/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e08c14; name: FUN_00e08c14
 */


void FUN_00e08c14(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined *local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined1 *local_500;
  ulong local_4f8;
  undefined1 auStack_4f0 [768];
  undefined1 *local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [128];
  undefined1 *local_160;
  undefined8 local_158;
  undefined1 auStack_150 [256];
  
  lVar6 = tpidr_el0;
  lVar3 = *(long *)(lVar6 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar3;
  }
  plVar5 = *(long **)(lVar3 + 0x3e0);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))
                ("hkaiCollisionAvoidance::System::step",0x24,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar1 = (undefined8 *)plVar5[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TthkaiCollisionAvoidance::System::step";
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
  local_500 = auStack_4f0;
  local_508 = 1;
  local_1f0 = auStack_1e0;
  local_4f8 = 0x8000002000000000;
  local_1e8 = 0x8000002000000000;
  local_518 = PTR_DAT_047ddb80 + 0x10;
  uStack_510 = 0xffffffff;
  local_160 = auStack_150;
  local_158 = 0x8000002000000000;
  FUN_031825d0(&local_518,param_1,param_3,0xffff);
  uVar2 = FUN_0323f858(&local_518,param_2,0);
  (**(code **)(*param_2 + 0x60))(param_2,uVar2);
  if (((int)local_4f8 != 0) &&
     ((**(code **)(*param_2 + 0x20))(param_2,local_500 + 0x10,local_4f8 & 0xffffffff,0x18),
     0 < (int)local_4f8)) {
    lVar6 = 0;
    lVar3 = 0x10;
    do {
      *(undefined8 *)(local_500 + lVar3) = 0;
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar6 < (int)local_4f8);
  }
  (**(code **)(local_518 + 0x20))(&local_518);
  FUN_00dbaf98(&local_518);
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
  return;
}


