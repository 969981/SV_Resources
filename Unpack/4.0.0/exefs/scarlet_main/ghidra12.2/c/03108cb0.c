/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03108cb0; name: FUN_03108cb0
 */


void FUN_03108cb0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_38;
  
  lVar9 = tpidr_el0;
  lVar7 = *(long *)(lVar9 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar7;
  }
  plVar10 = *(long **)(lVar7 + 0x3e0);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
      (**(code **)(lVar7 + 0x18))
                ("hkaiWorldProcessingTasks::makeMainPhaseTaskGraph",0x30,
                 *(undefined8 *)(lVar7 + 0x28));
    }
    puVar1 = (undefined8 *)plVar10[2];
    uVar8 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar10[3]) && (plVar10[2] = uVar8, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TthkaiWorldProcessingTasks::makeMainPhaseTaskGraph";
      uVar5 = nn::os::GetSystemTick();
      puVar1[1] = uVar5;
    }
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
      puVar1 = (undefined8 *)plVar10[2];
      uVar8 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar10[3]) && (plVar10[2] = uVar8, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar10[6] + 8);
      }
    }
  }
  puVar3 = PTR_DAT_047d1a08;
  local_38 = 0x4c8;
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar6,"hkTaskGraph");
  }
  *plVar6 = (long)(PTR_DAT_047ddb80 + 0x10);
  plVar6[1] = 0xffffffff;
  plVar6[2] = 1;
  plVar6[3] = (long)(plVar6 + 5);
  plVar6[0x65] = (long)(plVar6 + 0x67);
  plVar6[4] = -0x7fffffe000000000;
  plVar6[0x66] = -0x7fffffe000000000;
  plVar6[0x77] = (long)(plVar6 + 0x79);
  plVar6[0x78] = -0x7fffffe000000000;
  *param_1 = plVar6;
  puVar3 = PTR_DAT_047e4f38;
  if (*(char *)(param_2 + 0x28) == '\0') {
    uVar4 = 0xffff;
  }
  else {
    iVar2 = *(int *)PTR_DAT_047e4f38;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar4 = FUN_0310f720(plVar6,*(undefined8 *)(param_2 + 0x88),0xffff);
    iVar2 = *(int *)puVar3;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (*(char *)(param_2 + 0xa8) == '\0') {
      iVar2 = *(int *)puVar3;
      lVar7 = *(long *)(lVar9 + 0x1000b8);
      if (lVar7 == 0) {
        lVar7 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar7;
      }
      if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      uVar4 = FUN_03110aa0(plVar6,*(undefined8 *)(param_2 + 0x88),uVar4);
      iVar2 = *(int *)puVar3;
      lVar7 = *(long *)(lVar9 + 0x1000b8);
      if (lVar7 == 0) {
        lVar7 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar7;
      }
      if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
    }
  }
  if (*(char *)(param_2 + 0x4c) != '\0') {
    iVar2 = *(int *)puVar3;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar4 = FUN_03119370(plVar6,*(undefined8 *)(param_2 + 0x90),uVar4);
    iVar2 = *(int *)puVar3;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  if (*(char *)(param_2 + 0x70) != '\0') {
    iVar2 = *(int *)puVar3;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar4 = FUN_0311ca30(plVar6,*(undefined8 *)(param_2 + 0x98),uVar4);
    iVar2 = *(int *)puVar3;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    iVar2 = *(int *)puVar3;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    FUN_0311fbd0(plVar6,*(undefined8 *)(param_2 + 0xa0),uVar4);
    iVar2 = *(int *)puVar3;
    lVar7 = *(long *)(lVar9 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar7;
    }
    if (*(long *)(lVar7 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  if (plVar10 != (long *)0x0) {
    lVar9 = *plVar10;
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
      puVar1 = (undefined8 *)plVar10[2];
      uVar8 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar10[3]) && (plVar10[2] = uVar8, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar10[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar10[2];
    uVar8 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar10[3]) && (plVar10[2] = uVar8, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar1[1] = uVar5;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  return;
}


