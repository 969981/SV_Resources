/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03109280; name: FUN_03109280
 */


void FUN_03109280(undefined8 *param_1,long param_2)

{
  short *psVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined2 uVar8;
  short sVar9;
  short sVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_68;
  
  lVar17 = tpidr_el0;
  lVar15 = *(long *)(lVar17 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar15;
  }
  plVar19 = *(long **)(lVar15 + 0x3e0);
  if (plVar19 != (long *)0x0) {
    lVar17 = *plVar19;
    if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
      (**(code **)(lVar17 + 0x18))
                ("hkaiWorldProcessingTasks::makeFinalProcessingTaskGraph",0x36,
                 *(undefined8 *)(lVar17 + 0x28));
    }
    puVar4 = (undefined8 *)plVar19[2];
    uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar19[3]) && (plVar19[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiWorldProcessingTasks::makeFinalProcessingTaskGraph";
      uVar11 = nn::os::GetSystemTick();
      puVar4[1] = uVar11;
    }
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar4 = (undefined8 *)plVar19[2];
      uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar19[3]) && (plVar19[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  puVar7 = PTR_DAT_047d1a08;
  local_68 = 0x4c8;
  plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar12,"hkTaskGraph");
  }
  *plVar12 = (long)(PTR_DAT_047ddb80 + 0x10);
  plVar12[1] = 0xffffffff;
  plVar12[2] = 1;
  plVar12[3] = (long)(plVar12 + 5);
  plVar12[0x65] = (long)(plVar12 + 0x67);
  plVar12[4] = -0x7fffffe000000000;
  plVar12[0x66] = -0x7fffffe000000000;
  plVar12[0x77] = (long)(plVar12 + 0x79);
  plVar12[0x78] = -0x7fffffe000000000;
  *param_1 = plVar12;
  if (*(char *)(param_2 + 0x28) == '\0') {
    sVar9 = -1;
  }
  else {
    if (*(char *)(param_2 + 0xa8) == '\0') {
      uVar8 = 0xffff;
    }
    else {
      lVar17 = *(long *)(param_2 + 0x88);
      local_68 = 0x30;
      plVar13 = (long *)(**(code **)puVar7)(0,&local_68,0);
      if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
        (**(code **)(puVar7 + 0x10))(plVar13,"CommitUpdatesTask");
      }
      plVar13[1] = 0xffffffff;
      plVar18 = plVar13 + 2;
      *plVar18 = 1;
      puVar2 = PTR_DAT_047e5530 + 0x50;
      *plVar13 = (long)(PTR_DAT_047e5530 + 0x10);
      plVar13[4] = (long)puVar2;
      plVar13[5] = lVar17;
      if ((lVar17 != 0) && (*(long *)(lVar17 + 8) != 0)) {
        plVar3 = (long *)(lVar17 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = *plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar8 = FUN_0323f360(plVar12,plVar13,0x40);
      if (plVar13[1] != 0) {
        do {
          lVar17 = *plVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
    }
    sVar9 = FUN_03110c00(plVar12,*(undefined8 *)(param_2 + 0x88),uVar8);
  }
  if (*(char *)(param_2 + 0x4c) != '\0') {
    sVar9 = FUN_03119780(plVar12,*(undefined8 *)(param_2 + 0x90),sVar9);
  }
  if (*(char *)(param_2 + 0x70) != '\0') {
    sVar9 = FUN_0311d080(plVar12,*(undefined8 *)(param_2 + 0x98),sVar9);
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    sVar9 = FUN_03120390(plVar12,*(undefined8 *)(param_2 + 0xa0),sVar9);
  }
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (*(long *)(param_2 + 0x20) != *(long *)(*(long *)(param_2 + 0x18) + 0x250))) {
    local_68 = 0x30;
    plVar13 = (long *)(**(code **)puVar7)(0,&local_68,0);
    if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
      (**(code **)(puVar7 + 0x10))(plVar13,"JoinPathRequestManagerTask");
    }
    plVar18 = plVar13 + 2;
    *plVar18 = 1;
    *plVar13 = (long)&PTR_LAB_0464df00;
    plVar13[1] = 0xffffffff;
    plVar13[4] = (long)&PTR_LAB_0464df40;
    plVar13[5] = param_2;
    sVar10 = FUN_0323f360(plVar12,plVar13,0x40);
    iVar14 = (int)plVar12[0x66];
    lVar17 = (long)iVar14;
    if ((int)(*(uint *)((long)plVar12 + 0x334) & 0x7fffffff) <= iVar14) {
      FUN_02e7f7cc(plVar12 + 0x65,PTR_PTR_047d1a50,lVar17 + 1);
      iVar14 = (int)plVar12[0x66];
    }
    psVar1 = (short *)(plVar12[0x65] + (long)iVar14 * 4);
    *(int *)(plVar12 + 0x66) = (int)(lVar17 + 1);
    *psVar1 = sVar9;
    psVar1[1] = sVar10;
    sVar9 = sVar10;
    if (plVar13[1] != 0) {
      do {
        lVar17 = *plVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
  }
  local_68 = 0x30;
  plVar13 = (long *)(**(code **)puVar7)(0,&local_68,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar13,"FireProcessingRunCommittedTask");
  }
  plVar18 = plVar13 + 2;
  *plVar18 = 1;
  *plVar13 = (long)&PTR_LAB_0464dfa0;
  plVar13[1] = 0xffffffff;
  plVar13[4] = (long)&PTR_LAB_0464dfe0;
  plVar13[5] = param_2;
  sVar10 = FUN_0323f360(plVar12,plVar13,0x40);
  if ((sVar9 != -1) && (sVar10 != -1)) {
    iVar14 = (int)plVar12[0x66];
    lVar17 = (long)iVar14;
    if ((int)(*(uint *)((long)plVar12 + 0x334) & 0x7fffffff) <= iVar14) {
      FUN_02e7f7cc(plVar12 + 0x65,PTR_PTR_047d1a50,lVar17 + 1);
      iVar14 = (int)plVar12[0x66];
    }
    psVar1 = (short *)(plVar12[0x65] + (long)iVar14 * 4);
    *(int *)(plVar12 + 0x66) = (int)(lVar17 + 1);
    *psVar1 = sVar9;
    psVar1[1] = sVar10;
  }
  if (plVar13[1] != 0) {
    do {
      lVar17 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar17 = *plVar19;
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar4 = (undefined8 *)plVar19[2];
      uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar19[3]) && (plVar19[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar19[2];
    uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar19[3]) && (plVar19[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c2d363;
      uVar11 = nn::os::GetSystemTick();
      puVar4[1] = uVar11;
    }
    if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
    }
  }
  return;
}


