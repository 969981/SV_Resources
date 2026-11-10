/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03163ce4; name: FUN_03163ce4
 */


undefined8 FUN_03163ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = tpidr_el0;
  lVar4 = *(long *)(lVar7 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar4;
  }
  plVar6 = *(long **)(lVar4 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
      (**(code **)(lVar7 + 0x18))("addSilhouette",0xd,*(undefined8 *)(lVar7 + 0x28));
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtaddSilhouette";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar6[3]) && (plVar6[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x150);
  *(undefined8 *)(*(long *)(param_1 + 0x148) + (long)iVar2 * 8) = param_4;
  *(int *)(param_1 + 0x150) = iVar2 + 1;
  FUN_03167250(param_1,param_2,param_3);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
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
      *puVar1 = &DAT_03c2d363;
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
      (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return 1;
}


