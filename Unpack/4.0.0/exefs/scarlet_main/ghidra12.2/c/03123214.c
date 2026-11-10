/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03123214; name: FUN_03123214
 */


void FUN_03123214(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_58 [2];
  undefined8 local_50 [3];
  long *local_38;
  
  lVar6 = tpidr_el0;
  lVar4 = *(long *)(lVar6 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar4;
  }
  plVar7 = *(long **)(lVar4 + 0x3e0);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))
                ("completeAsyncProcessingRunImmediately",0x25,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar2 = (undefined8 *)plVar7[2];
    uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtcompleteAsyncProcessingRunImmediately";
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar2 = (undefined8 *)plVar7[2];
      uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
  }
  local_50[0] = 0x1d08000010;
  local_38 = plVar7;
  FUN_00e08a00(param_1 + 0x28,param_1,local_50);
  lVar6 = *(long *)(*(long *)(param_1 + 0x4e8) + 0x68);
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x18);
  }
  uVar5 = (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(param_1 + 0x4f8));
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x4e8);
    uVar3 = *(undefined8 *)(param_1 + 0x4f8);
    FUN_03231d70(lVar6,0xffffffffffffffff);
    (**(code **)(**(long **)(lVar6 + 0x68) + 0x98))(*(long **)(lVar6 + 0x68),uVar3);
    *(undefined8 *)(lVar6 + 0x40) = 0;
  }
  local_58[0] = 0xbf800000;
  FUN_03124208(param_1 + 0xe0,param_1,local_58);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar2 = (undefined8 *)plVar7[2];
      uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar7[2];
    uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar7[3]) && (plVar7[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
    }
  }
  return;
}


