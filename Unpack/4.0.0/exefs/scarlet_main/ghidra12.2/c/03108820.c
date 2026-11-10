/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03108820; name: FUN_03108820
 */


void FUN_03108820(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_38;
  
  lVar8 = tpidr_el0;
  lVar6 = *(long *)(lVar8 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar6;
  }
  plVar9 = *(long **)(lVar6 + 0x3e0);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))
                ("hkaiWorldProcessingTasks::makeNextTaskGraph",0x2b,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar1 = (undefined8 *)plVar9[2];
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar9[3]) && (plVar9[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TthkaiWorldProcessingTasks::makeNextTaskGraph";
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
      puVar1 = (undefined8 *)plVar9[2];
      uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar9[3]) && (plVar9[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar9[6] + 8);
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0xac);
  *(int *)(param_2 + 0xac) = iVar2 + 1;
  if (iVar2 == 1) {
    if (*(char *)(param_2 + 0x28) == '\0') goto LAB_03108b78;
  }
  else {
    if (iVar2 != 0) {
LAB_03108b78:
      *param_1 = 0;
      goto LAB_03108b7c;
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      lVar6 = *(long *)(lVar8 + 0x1000b8);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar8 + 0x1000b8) = lVar6;
      }
      plVar10 = *(long **)(lVar6 + 0x3e0);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
          (**(code **)(lVar6 + 0x18))
                    ("hkaiWorldProcessingTasks::makePreCuttingTaskGraph",0x31,
                     *(undefined8 *)(lVar6 + 0x28));
        }
        puVar1 = (undefined8 *)plVar10[2];
        uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar7 <= (ulong)plVar10[3]) && (plVar10[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = "TthkaiWorldProcessingTasks::makePreCuttingTaskGraph";
          uVar4 = nn::os::GetSystemTick();
          puVar1[1] = uVar4;
        }
        if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
          puVar1 = (undefined8 *)plVar10[2];
          uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
          if ((uVar7 <= (ulong)plVar10[3]) && (plVar10[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
            *puVar1 = &DAT_03c4e575;
            puVar1[1] = *(undefined8 *)(plVar10[6] + 8);
          }
        }
      }
      puVar3 = PTR_DAT_047d1a08;
      local_38 = 0x4c8;
      plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
      if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
        (**(code **)(puVar3 + 0x10))(plVar5,"hkTaskGraph");
      }
      *plVar5 = (long)(PTR_DAT_047ddb80 + 0x10);
      plVar5[1] = 0xffffffff;
      plVar5[2] = 1;
      plVar5[3] = (long)(plVar5 + 5);
      plVar5[0x65] = (long)(plVar5 + 0x67);
      plVar5[4] = -0x7fffffe000000000;
      plVar5[0x66] = -0x7fffffe000000000;
      plVar5[0x77] = (long)(plVar5 + 0x79);
      puVar3 = PTR_DAT_047e4f38;
      plVar5[0x78] = -0x7fffffe000000000;
      iVar2 = *(int *)puVar3;
      *param_1 = plVar5;
      lVar6 = *(long *)(lVar8 + 0x1000b8);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar8 + 0x1000b8) = lVar6;
      }
      if (*(long *)(lVar6 + (long)iVar2 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      FUN_0310e480(plVar5,*(undefined8 *)(param_2 + 0x88),0xffff);
      iVar2 = *(int *)puVar3;
      lVar6 = *(long *)(lVar8 + 0x1000b8);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar8 + 0x1000b8) = lVar6;
      }
      if (*(long *)(lVar6 + (long)iVar2 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      if (plVar10 != (long *)0x0) {
        lVar8 = *plVar10;
        if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
          puVar1 = (undefined8 *)plVar10[2];
          uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
          if ((uVar7 <= (ulong)plVar10[3]) && (plVar10[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
            *puVar1 = &DAT_03c4e575;
            puVar1[1] = *(undefined8 *)(plVar10[6] + 8);
          }
        }
        puVar1 = (undefined8 *)plVar10[2];
        uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar7 <= (ulong)plVar10[3]) && (plVar10[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = &DAT_03c2d363;
          uVar4 = nn::os::GetSystemTick();
          puVar1[1] = uVar4;
        }
        if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
          (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
        }
      }
      goto LAB_03108b7c;
    }
  }
  FUN_03108cb0(param_1,param_2);
LAB_03108b7c:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
      puVar1 = (undefined8 *)plVar9[2];
      uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar9[3]) && (plVar9[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar9[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar9[2];
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar9[3]) && (plVar9[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  return;
}


