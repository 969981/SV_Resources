/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0310e480; name: FUN_0310e480
 */


short FUN_0310e480(long param_1,long param_2,short param_3)

{
  short *psVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  short sVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_48;
  
  lVar13 = tpidr_el0;
  lVar11 = *(long *)(lVar13 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar13 + 0x1000b8) = lVar11;
  }
  plVar14 = *(long **)(lVar11 + 0x3e0);
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))
                ("hkaiUpdateNavDataTasks::addPhase1Tasks",0x26,*(undefined8 *)(lVar13 + 0x28));
    }
    puVar3 = (undefined8 *)plVar14[2];
    uVar12 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= (ulong)plVar14[3]) && (plVar14[2] = uVar12, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TthkaiUpdateNavDataTasks::addPhase1Tasks";
      uVar8 = nn::os::GetSystemTick();
      puVar3[1] = uVar8;
    }
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar3 = (undefined8 *)plVar14[2];
      uVar12 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= (ulong)plVar14[3]) && (plVar14[2] = uVar12, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
  }
  puVar6 = PTR_DAT_047d1a08;
  if (*(long *)(param_2 + 0x30) != 0) {
    local_48 = 0x30;
    plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar9,"ApplyAsyncWorldUpdatesTask");
    }
    plVar15 = plVar9 + 2;
    *plVar15 = 1;
    *plVar9 = (long)&PTR_LAB_0464e040;
    plVar9[1] = 0xffffffff;
    plVar9[4] = (long)&PTR_LAB_0464e088;
    plVar9[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar2 = (long *)(param_2 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    sVar7 = FUN_0323f360(param_1,plVar9,0x40);
    if ((param_3 != -1) && (sVar7 != -1)) {
      iVar10 = *(int *)(param_1 + 0x330);
      lVar13 = (long)iVar10;
      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar10) {
        FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar13 + 1);
        iVar10 = *(int *)(param_1 + 0x330);
      }
      psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar10 * 4);
      *(int *)(param_1 + 0x330) = (int)(lVar13 + 1);
      *psVar1 = param_3;
      psVar1[1] = sVar7;
    }
    param_3 = sVar7;
    if (plVar9[1] != 0) {
      do {
        lVar13 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
  }
  local_48 = 0x30;
  plVar9 = (long *)(**(code **)puVar6)(0,&local_48,0);
  if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
    (**(code **)(puVar6 + 0x10))(plVar9,"UpdateOverlapManagerTask");
  }
  plVar15 = plVar9 + 2;
  *plVar15 = 1;
  *plVar9 = (long)&PTR_LAB_0464e0e8;
  plVar9[1] = 0xffffffff;
  plVar9[4] = (long)&PTR_LAB_0464e130;
  plVar9[5] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar2 = (long *)(param_2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  sVar7 = FUN_0323f360(param_1,plVar9,0x40);
  if ((param_3 != -1) && (sVar7 != -1)) {
    iVar10 = *(int *)(param_1 + 0x330);
    lVar13 = (long)iVar10;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar10) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar13 + 1);
      iVar10 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar10 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar13 + 1);
    *psVar1 = param_3;
    psVar1[1] = sVar7;
  }
  if (plVar9[1] != 0) {
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar3 = (undefined8 *)plVar14[2];
      uVar12 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= (ulong)plVar14[3]) && (plVar14[2] = uVar12, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar14[2];
    uVar12 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= (ulong)plVar14[3]) && (plVar14[2] = uVar12, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar3[1] = uVar8;
    }
    if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
      (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
    }
  }
  return sVar7;
}


