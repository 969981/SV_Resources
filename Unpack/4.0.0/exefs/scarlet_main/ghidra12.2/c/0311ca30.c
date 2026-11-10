/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0311ca30; name: FUN_0311ca30
 */


short FUN_0311ca30(long param_1,long param_2,short param_3)

{
  short *psVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 local_68;
  
  lVar18 = tpidr_el0;
  lVar16 = *(long *)(lVar18 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar16;
  }
  plVar21 = *(long **)(lVar16 + 0x3e0);
  if (plVar21 != (long *)0x0) {
    lVar18 = *plVar21;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))
                ("hkaiPathRequestsTasks::addPathRequestTasks",0x2a,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar3 = (undefined8 *)plVar21[2];
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar21[3]) && (plVar21[2] = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TthkaiPathRequestsTasks::addPathRequestTasks";
      uVar10 = nn::os::GetSystemTick();
      puVar3[1] = uVar10;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar3 = (undefined8 *)plVar21[2];
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar21[3]) && (plVar21[2] = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
  }
  puVar7 = PTR_DAT_047d1a08;
  local_68 = 0x40;
  plVar11 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar11,"PrePathRequestsTask");
  }
  plVar19 = plVar11 + 2;
  *plVar19 = 1;
  plVar11[6] = param_2;
  *plVar11 = (long)&PTR_LAB_0464f150;
  plVar11[1] = 0xffffffff;
  plVar11[4] = (long)&PTR_LAB_0464f190;
  plVar11[5] = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar12 = (long *)(param_2 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  sVar8 = FUN_0323f360(param_1,plVar11,0x40);
  if ((param_3 != -1) && (sVar8 != -1)) {
    iVar15 = *(int *)(param_1 + 0x330);
    lVar18 = (long)iVar15;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar15) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
      iVar15 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar15 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar18 + 1);
    *psVar1 = param_3;
    psVar1[1] = sVar8;
  }
  local_68 = 0x940;
  plVar12 = (long *)(**(code **)puVar7)(0,&local_68,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar12,"ProcessPathRequestsTask");
  }
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  plVar20 = plVar12 + 2;
  *plVar20 = 1;
  plVar12[0xe] = (long)(plVar12 + 0x10);
  plVar12[0xf] = -0x7fffffef00000000;
  *(undefined4 *)(plVar12 + 0x122) = uVar4;
  *plVar12 = (long)&PTR_LAB_0464f418;
  plVar12[1] = 0xffffffff;
  plVar12[0x98] = (long)(plVar12 + 0x9a);
  plVar12[0x99] = -0x7fffffef00000000;
  plVar12[4] = (long)&PTR_LAB_0464f460;
  plVar12[0x123] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar13 = (long *)(param_2 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  nn::os::InitializeMutex((MutexType *)(plVar12 + 0x124),true,0);
  sVar9 = FUN_0323f458(param_1,plVar12,*(undefined4 *)(param_2 + 0x18),1,0x40);
  lVar18 = param_1 + 0x328;
  iVar15 = *(int *)(param_1 + 0x330);
  lVar16 = (long)iVar15;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar15) {
    FUN_02e7f7cc(lVar18,PTR_PTR_047d1a50,lVar16 + 1);
    iVar15 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar15 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar16 + 1);
  *psVar1 = sVar8;
  psVar1[1] = sVar9;
  plVar11[5] = (long)plVar12;
  local_68 = 0x30;
  plVar13 = (long *)(**(code **)puVar7)(0,&local_68,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar13,"IncrementRequestPrioritiesTask");
  }
  plVar22 = plVar13 + 2;
  *plVar22 = 1;
  *plVar13 = (long)&PTR_LAB_0464f1f0;
  plVar13[1] = 0xffffffff;
  plVar13[4] = (long)&PTR_LAB_0464f230;
  plVar13[5] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar14 = (long *)(param_2 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  sVar8 = FUN_0323f360(param_1,plVar13,0x40);
  iVar15 = *(int *)(param_1 + 0x330);
  lVar16 = (long)iVar15;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar15) {
    FUN_02e7f7cc(lVar18,PTR_PTR_047d1a50,lVar16 + 1);
    iVar15 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar15 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar16 + 1);
  *psVar1 = sVar9;
  psVar1[1] = sVar8;
  puVar7 = PTR_DAT_047d1a08;
  sVar9 = sVar8;
  if (*(char *)(param_2 + 0x70) == '\0') {
    local_68 = 0x30;
    plVar14 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
      (**(code **)(puVar7 + 0x10))(plVar14,"NotifyFinishedPathRequestsTask");
    }
    plVar23 = plVar14 + 2;
    *plVar23 = 1;
    *plVar14 = (long)&PTR_LAB_0464f290;
    plVar14[1] = 0xffffffff;
    plVar14[4] = (long)&PTR_LAB_0464f2d0;
    plVar14[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar2 = (long *)(param_2 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    sVar9 = FUN_0323f360(param_1,plVar14,0x40);
    iVar15 = *(int *)(param_1 + 0x330);
    lVar16 = (long)iVar15;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar15) {
      FUN_02e7f7cc(lVar18,PTR_PTR_047d1a50,lVar16 + 1);
      iVar15 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar15 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar16 + 1);
    psVar1[1] = sVar9;
    *psVar1 = sVar8;
    if (plVar14[1] != 0) {
      do {
        lVar18 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
  }
  if (plVar13[1] != 0) {
    do {
      lVar18 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if (plVar12[1] != 0) {
    do {
      lVar18 = *plVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (plVar11[1] != 0) {
    do {
      lVar18 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar18 = *plVar21;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar3 = (undefined8 *)plVar21[2];
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar21[3]) && (plVar21[2] = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar21[2];
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar21[3]) && (plVar21[2] = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar10 = nn::os::GetSystemTick();
      puVar3[1] = uVar10;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  return sVar9;
}


