/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f423f0; name: FUN_02f423f0
 */


void FUN_02f423f0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  
  *(undefined4 *)(param_1 + 0x818) = 8;
  lVar12 = tpidr_el0;
  lVar4 = *(long *)(lVar12 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar4;
  }
  plVar11 = *(long **)(lVar4 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("PostCollide",0xb,*(undefined8 *)(lVar12 + 0x28));
    }
    puVar8 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = "TtPostCollide";
      uVar3 = nn::os::GetSystemTick();
      puVar8[1] = uVar3;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar8 = (undefined8 *)plVar11[2];
      uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = &DAT_03c4e575;
        puVar8[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    lVar12 = *plVar11;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("DispatchCommands",0x10,*(undefined8 *)(lVar12 + 0x28));
    }
    puVar8 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = "TtDispatchCommands";
      uVar3 = nn::os::GetSystemTick();
      puVar8[1] = uVar3;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar8 = (undefined8 *)plVar11[2];
      uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = &DAT_03c4e575;
        puVar8[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
  }
  lVar12 = *(long *)(param_1 + 0x908);
  *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x4a8) + 0x10);
  *(undefined8 *)(lVar12 + 0x38) = param_2;
  FUN_02f235c0(*(undefined8 *)(param_1 + 0x920),param_2,*(undefined8 *)(param_1 + 0x908));
  lVar12 = *(long *)(param_1 + 0x908);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x38) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar8 = (undefined8 *)plVar11[2];
      uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = &DAT_03c4e575;
        puVar8[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar8 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = &DAT_03c2d363;
      uVar3 = nn::os::GetSystemTick();
      puVar8[1] = uVar3;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  plVar7 = *(long **)(param_1 + 0x920);
  if (0 < (int)plVar7[1]) {
    lVar12 = 0;
    do {
      lVar4 = *(long *)(*plVar7 + lVar12 * 8);
      lVar12 = lVar12 + 1;
      puVar9 = *(undefined4 **)(*(long *)(lVar4 + 0x540) + (long)*(int *)(lVar4 + 0x548) * 8 + -8);
      uVar1 = *puVar9;
      uVar2 = *puVar9;
      *(undefined4 **)(lVar4 + 0x740) = puVar9;
      *(short *)(lVar4 + 0x748) = (short)((uint)uVar1 >> 0x10);
      *(short *)(lVar4 + 0x74a) = (short)uVar2;
      *(int *)(lVar4 + 0x74c) = -*(int *)(lVar4 + 0x538);
      plVar7 = *(long **)(param_1 + 0x920);
    } while (lVar12 < (int)plVar7[1]);
  }
  if (*(ulong *)(param_1 + 2000) < 4) {
    if (plVar11 == (long *)0x0) {
      return;
    }
    goto LAB_02f427c8;
  }
  if (plVar11 == (long *)0x0) {
    FUN_02f32c7c(param_1 + 2000,param_1);
    return;
  }
  lVar12 = *plVar11;
  if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
    (**(code **)(lVar12 + 0x18))("PostCollideSignal",0x11,*(undefined8 *)(lVar12 + 0x28));
  }
  puVar8 = (undefined8 *)plVar11[2];
  uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
  if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
    *puVar8 = "TtPostCollideSignal";
    uVar3 = nn::os::GetSystemTick();
    puVar8[1] = uVar3;
  }
  if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
    puVar8 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = &DAT_03c4e575;
      puVar8[1] = *(undefined8 *)(plVar11[6] + 8);
    }
  }
  FUN_02f32c7c(param_1 + 2000,param_1);
  lVar12 = *plVar11;
  if (((*(byte *)(lVar12 + 0x38) & 1) == 0) || (plVar11[6] == 0)) {
LAB_02f42780:
    puVar10 = (undefined8 *)plVar11[2];
    puVar6 = (undefined8 *)plVar11[3];
  }
  else {
    puVar8 = (undefined8 *)plVar11[2];
    puVar6 = (undefined8 *)plVar11[3];
    puVar10 = (undefined8 *)((long)puVar8 + 0x17U & 0xfffffffffffffff8);
    if (puVar6 < puVar10) goto LAB_02f42780;
    plVar11[2] = (long)puVar10;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &DAT_03c4e575;
      puVar8[1] = *(undefined8 *)(plVar11[6] + 8);
      goto LAB_02f42780;
    }
  }
  puVar8 = (undefined8 *)((long)puVar10 + 0x17U & 0xfffffffffffffff8);
  if ((puVar8 <= puVar6) && (plVar11[2] = (long)puVar8, puVar10 != (undefined8 *)0x0)) {
    *puVar10 = &DAT_03c2d363;
    uVar3 = nn::os::GetSystemTick();
    puVar10[1] = uVar3;
  }
  if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
    (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
  }
LAB_02f427c8:
  lVar12 = *plVar11;
  if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
    puVar8 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = &DAT_03c4e575;
      puVar8[1] = *(undefined8 *)(plVar11[6] + 8);
    }
  }
  puVar8 = (undefined8 *)plVar11[2];
  uVar5 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
  if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar8 != (undefined8 *)0x0)) {
    *puVar8 = "EtPostCollide";
    uVar3 = nn::os::GetSystemTick();
    puVar8[1] = uVar3;
  }
  if (*(code **)(lVar12 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f4285c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
  return;
}


