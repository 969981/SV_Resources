/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03108680; name: FUN_03108680
 */


void FUN_03108680(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = tpidr_el0;
  lVar2 = *(long *)(lVar7 + 0x1000b8);
  if (lVar2 == 0) {
    lVar2 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar2;
  }
  plVar6 = *(long **)(lVar2 + 0x3e0);
  if (plVar6 == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  lVar7 = *plVar6;
  if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
    (**(code **)(lVar7 + 0x18))
              ("hkaiWorldProcessingTasks::makeInitialProcessingTaskGraph",0x38,
               *(undefined8 *)(lVar7 + 0x28));
  }
  puVar5 = (undefined8 *)plVar6[2];
  uVar3 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)plVar6[3]) && (plVar6[2] = uVar3, puVar5 != (undefined8 *)0x0)) {
    *puVar5 = "TthkaiWorldProcessingTasks::makeInitialProcessingTaskGraph";
    uVar1 = nn::os::GetSystemTick();
    puVar5[1] = uVar1;
  }
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
    puVar5 = (undefined8 *)plVar6[2];
    uVar3 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)plVar6[3]) && (plVar6[2] = uVar3, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(plVar6[6] + 8);
    }
  }
  *param_1 = 0;
  lVar7 = *plVar6;
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
    puVar5 = (undefined8 *)plVar6[2];
    puVar4 = (undefined8 *)plVar6[3];
    puVar8 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff8);
    if (puVar8 <= puVar4) {
      plVar6[2] = (long)puVar8;
      if (puVar5 == (undefined8 *)0x0) goto LAB_031087a4;
      *puVar5 = &DAT_03c4e575;
      puVar5[1] = *(undefined8 *)(plVar6[6] + 8);
    }
  }
  puVar8 = (undefined8 *)plVar6[2];
  puVar4 = (undefined8 *)plVar6[3];
LAB_031087a4:
  puVar5 = (undefined8 *)((long)puVar8 + 0x17U & 0xfffffffffffffff8);
  if ((puVar5 <= puVar4) && (plVar6[2] = (long)puVar5, puVar8 != (undefined8 *)0x0)) {
    *puVar8 = &DAT_03c2d363;
    uVar1 = nn::os::GetSystemTick();
    puVar8[1] = uVar1;
  }
  if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
    (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
  }
  return;
}


