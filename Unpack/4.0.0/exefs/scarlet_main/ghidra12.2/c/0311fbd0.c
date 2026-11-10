/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0311fbd0; name: FUN_0311fbd0
 */


ulong FUN_0311fbd0(long param_1,long param_2,short param_3)

{
  short *psVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  short sVar9;
  short sVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 local_68;
  
  lVar18 = tpidr_el0;
  lVar15 = *(long *)(lVar18 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar15;
  }
  plVar21 = *(long **)(lVar15 + 0x3e0);
  if (plVar21 != (long *)0x0) {
    lVar18 = *plVar21;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))
                ("hkaiNavigatorUpdateTasks::addTasks",0x22,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar17 = (undefined8 *)plVar21[2];
    uVar16 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar21[3]) && (plVar21[2] = uVar16, puVar17 != (undefined8 *)0x0)) {
      *puVar17 = "TthkaiNavigatorUpdateTasks::addTasks";
      uVar11 = nn::os::GetSystemTick();
      puVar17[1] = uVar11;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar17 = (undefined8 *)plVar21[2];
      uVar16 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar21[3]) && (plVar21[2] = uVar16, puVar17 != (undefined8 *)0x0)) {
        *puVar17 = &DAT_03c4e575;
        puVar17[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x20);
  lVar18 = (long)iVar3 + 1;
  iVar14 = iVar3;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar3) {
    FUN_0323ff70(param_1 + 0x18,PTR_PTR_047d1a50,lVar18);
    iVar14 = *(int *)(param_1 + 0x20);
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar14 * 0x18);
  *(int *)(param_1 + 0x20) = (int)lVar18;
  *(undefined2 *)(puVar17 + 1) = 1;
  *puVar17 = 0;
  *(undefined1 *)((long)puVar17 + 10) = 0x40;
  puVar17[2] = 0;
  puVar8 = PTR_DAT_047d1a08;
  puVar17 = (undefined8 *)PTR_DAT_047d1a08;
  if (*(int *)(param_2 + 0x28) != 0) {
    local_68 = 0x920;
    plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
      (**(code **)(puVar8 + 0x10))(plVar12,"UpdateNavigatorsTask");
    }
    uVar4 = *(undefined4 *)(param_2 + 0x90);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    plVar19 = plVar12 + 2;
    *plVar19 = 1;
    *(undefined4 *)(plVar12 + 0xf) = 0;
    *(undefined4 *)((long)plVar12 + 0x7c) = 0x80000011;
    *plVar12 = (long)&PTR_LAB_0464f698;
    plVar12[1] = 0xffffffff;
    plVar12[4] = (long)&PTR_LAB_0464f6d8;
    plVar12[0xe] = (long)(plVar12 + 0x10);
    plVar12[0x98] = (long)(plVar12 + 0x9a);
    *(undefined4 *)(plVar12 + 0x99) = 0;
    *(undefined4 *)((long)plVar12 + 0x4cc) = 0x80000011;
    *(undefined4 *)(plVar12 + 0x122) = uVar4;
    FUN_03232938(plVar12 + 6,uVar4,uVar5,1);
    *plVar12 = (long)&PTR_LAB_0464f5c0;
    plVar12[4] = (long)&PTR_LAB_0464f608;
    plVar12[0x123] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar13 = (long *)(param_2 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    sVar9 = FUN_0323f458(param_1,plVar12,*(undefined4 *)(param_2 + 0x90),1,0x40);
    if ((param_3 != -1) && (sVar9 != -1)) {
      iVar14 = *(int *)(param_1 + 0x330);
      lVar18 = (long)iVar14;
      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar14) {
        FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
        iVar14 = *(int *)(param_1 + 0x330);
      }
      psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar14 * 4);
      *(int *)(param_1 + 0x330) = (int)(lVar18 + 1);
      *psVar1 = param_3;
      psVar1[1] = sVar9;
    }
    local_68 = 0x30;
    plVar13 = (long *)(**(code **)puVar8)(0,&local_68,0);
    if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
      (**(code **)(puVar8 + 0x10))(plVar13,"AddStalenessMeshPathRequestsToManagerTask");
    }
    plVar20 = plVar13 + 2;
    *plVar20 = 1;
    *plVar13 = (long)&PTR_LAB_0464f720;
    plVar13[1] = 0xffffffff;
    plVar13[4] = (long)&PTR_LAB_0464f760;
    plVar13[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar2 = (long *)(param_2 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    sVar10 = FUN_0323f360(param_1,plVar13,0x40);
    iVar14 = *(int *)(param_1 + 0x330);
    lVar18 = (long)iVar14;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar14) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
      iVar14 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar14 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar18 + 1);
    *psVar1 = sVar9;
    psVar1[1] = sVar10;
    iVar14 = *(int *)(param_1 + 0x330);
    lVar18 = (long)iVar14;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar14) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
      iVar14 = *(int *)(param_1 + 0x330);
    }
    *(int *)(param_1 + 0x330) = (int)(lVar18 + 1);
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar14 * 4);
    *psVar1 = sVar10;
    psVar1[1] = (short)iVar3;
    puVar17 = (undefined8 *)PTR_DAT_047d1a08;
    if (plVar13[1] != 0) {
      do {
        lVar18 = *plVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = lVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    if (plVar12[1] != 0) {
      do {
        lVar18 = *plVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    local_68 = 0x920;
    plVar12 = (long *)(*(code *)*puVar17)(0,&local_68,0);
    if ((code *)puVar17[2] != (code *)0x0) {
      (*(code *)puVar17[2])(plVar12,"UpdateVolumeNavigatorsTask");
    }
    uVar4 = *(undefined4 *)(param_2 + 0x90);
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    plVar19 = plVar12 + 2;
    *plVar19 = 1;
    *(undefined4 *)(plVar12 + 0xf) = 0;
    *(undefined4 *)((long)plVar12 + 0x7c) = 0x80000011;
    *plVar12 = (long)&PTR_LAB_0464f898;
    plVar12[1] = 0xffffffff;
    plVar12[4] = (long)&PTR_LAB_0464f8d8;
    plVar12[0xe] = (long)(plVar12 + 0x10);
    plVar12[0x98] = (long)(plVar12 + 0x9a);
    *(undefined4 *)(plVar12 + 0x99) = 0;
    *(undefined4 *)((long)plVar12 + 0x4cc) = 0x80000011;
    *(undefined4 *)(plVar12 + 0x122) = uVar4;
    FUN_03232938(plVar12 + 6,uVar4,uVar5,1);
    *plVar12 = (long)&PTR_LAB_0464f7c0;
    plVar12[4] = (long)&PTR_LAB_0464f808;
    plVar12[0x123] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar13 = (long *)(param_2 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    sVar9 = FUN_0323f458(param_1,plVar12,*(undefined4 *)(param_2 + 0x90),1,0x40);
    if ((param_3 != -1) && (sVar9 != -1)) {
      iVar14 = *(int *)(param_1 + 0x330);
      lVar18 = (long)iVar14;
      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar14) {
        FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
        iVar14 = *(int *)(param_1 + 0x330);
      }
      psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar14 * 4);
      *(int *)(param_1 + 0x330) = (int)(lVar18 + 1);
      *psVar1 = param_3;
      psVar1[1] = sVar9;
    }
    local_68 = 0x30;
    plVar13 = (long *)(*(code *)*puVar17)(0,&local_68,0);
    if ((code *)puVar17[2] != (code *)0x0) {
      (*(code *)puVar17[2])(plVar13,"AddStalenessVolumePathRequestsToManagerTask");
    }
    plVar20 = plVar13 + 2;
    *plVar20 = 1;
    *plVar13 = (long)&PTR_LAB_0464f920;
    plVar13[1] = 0xffffffff;
    plVar13[4] = (long)&PTR_LAB_0464f960;
    plVar13[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar2 = (long *)(param_2 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    sVar10 = FUN_0323f360(param_1,plVar13,0x40);
    iVar14 = *(int *)(param_1 + 0x330);
    lVar18 = (long)iVar14;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar14) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
      iVar14 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar14 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar18 + 1);
    *psVar1 = sVar9;
    psVar1[1] = sVar10;
    iVar14 = *(int *)(param_1 + 0x330);
    lVar18 = (long)iVar14;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar14) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
      iVar14 = *(int *)(param_1 + 0x330);
    }
    *(int *)(param_1 + 0x330) = (int)(lVar18 + 1);
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar14 * 4);
    *psVar1 = sVar10;
    psVar1[1] = (short)iVar3;
    if (plVar13[1] != 0) {
      do {
        lVar18 = *plVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = lVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    if (plVar12[1] != 0) {
      do {
        lVar18 = *plVar19;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar18 = *plVar21;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar17 = (undefined8 *)plVar21[2];
      uVar16 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar21[3]) && (plVar21[2] = uVar16, puVar17 != (undefined8 *)0x0)) {
        *puVar17 = &DAT_03c4e575;
        puVar17[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
    puVar17 = (undefined8 *)plVar21[2];
    uVar16 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar21[3]) && (plVar21[2] = uVar16, puVar17 != (undefined8 *)0x0)) {
      *puVar17 = &DAT_03c2d363;
      uVar11 = nn::os::GetSystemTick();
      puVar17[1] = uVar11;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  return (long)iVar3 & 0xffff;
}


