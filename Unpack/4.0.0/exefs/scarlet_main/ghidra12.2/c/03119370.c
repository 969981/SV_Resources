/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03119370; name: FUN_03119370
 */


short FUN_03119370(long param_1,long param_2,short param_3)

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
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_68;
  
  lVar16 = tpidr_el0;
  lVar14 = *(long *)(lVar16 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar14;
  }
  plVar17 = *(long **)(lVar14 + 0x3e0);
  if (plVar17 != (long *)0x0) {
    lVar16 = *plVar17;
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))
                ("hkaiNavMeshClearanceCacheFillingTasks::addTasks",0x2f,
                 *(undefined8 *)(lVar16 + 0x28));
    }
    puVar3 = (undefined8 *)plVar17[2];
    uVar15 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar17[3]) && (plVar17[2] = uVar15, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TthkaiNavMeshClearanceCacheFillingTasks::addTasks";
      uVar10 = nn::os::GetSystemTick();
      puVar3[1] = uVar10;
    }
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
      puVar3 = (undefined8 *)plVar17[2];
      uVar15 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar17[3]) && (plVar17[2] = uVar15, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar17[6] + 8);
      }
    }
  }
  puVar7 = PTR_DAT_047d1a08;
  local_68 = 0x30;
  plVar11 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar11,"GetUncalculatedClearanceFacesTask");
  }
  plVar18 = plVar11 + 2;
  *plVar18 = 1;
  *plVar11 = (long)&PTR_LAB_0464ee58;
  plVar11[1] = 0xffffffff;
  plVar11[4] = (long)&PTR_LAB_0464eea0;
  plVar11[5] = param_2;
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
    iVar13 = *(int *)(param_1 + 0x330);
    lVar16 = (long)iVar13;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar13) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar16 + 1);
      iVar13 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar13 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar16 + 1);
    *psVar1 = param_3;
    psVar1[1] = sVar8;
  }
  local_68 = 0x920;
  plVar12 = (long *)(**(code **)puVar7)(0,&local_68,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar12,"CalculateClearanceTask");
  }
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  plVar19 = plVar12 + 2;
  *plVar19 = 1;
  plVar12[0xe] = (long)(plVar12 + 0x10);
  plVar12[0xf] = -0x7fffffef00000000;
  *(undefined4 *)(plVar12 + 0x122) = uVar4;
  *plVar12 = (long)&PTR_LAB_0464eee8;
  plVar12[1] = 0xffffffff;
  plVar12[0x98] = (long)(plVar12 + 0x9a);
  plVar12[0x99] = -0x7fffffef00000000;
  plVar12[4] = (long)&PTR_LAB_0464ef30;
  plVar12[0x123] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
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
  sVar9 = FUN_0323f458(param_1,plVar12,*(undefined4 *)(param_2 + 0x18),1,0x40);
  iVar13 = *(int *)(param_1 + 0x330);
  lVar16 = (long)iVar13;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar13) {
    FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar16 + 1);
    iVar13 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar13 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar16 + 1);
  *psVar1 = sVar8;
  psVar1[1] = sVar9;
  *(long **)(param_2 + 0x78) = plVar12;
  if (plVar12[1] != 0) {
    do {
      lVar16 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (plVar11[1] != 0) {
    do {
      lVar16 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar16 = *plVar17;
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
      puVar3 = (undefined8 *)plVar17[2];
      uVar15 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar17[3]) && (plVar17[2] = uVar15, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar17[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar17[2];
    uVar15 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar17[3]) && (plVar17[2] = uVar15, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar10 = nn::os::GetSystemTick();
      puVar3[1] = uVar10;
    }
    if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
    }
  }
  return sVar9;
}


