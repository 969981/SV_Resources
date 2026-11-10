/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cf334; name: FUN_030cf334
 */


void FUN_030cf334(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_48;
  
  plVar1 = param_1 + 4;
  do {
    if ((char)*plVar1 != '\0') goto LAB_030cf5f8;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(char *)plVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar6 = PTR_DAT_047d1a08;
  } while (cVar4 != '\0');
  local_48 = (long *)0x60;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
    (**(code **)(puVar6 + 0x10))(plVar7,"FindPathOutput");
  }
  *plVar7 = (long)(PTR_DAT_047e50e8 + 0x10);
  plVar7[1] = 0xffffffff;
  plVar7[8] = -0x100000000;
  plVar7[2] = 1;
  plVar7[3] = 0;
  plVar7[6] = -0x8000000000000000;
  plVar7[4] = -0x8000000000000000;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 9) = 0x7f7fffee;
  *(undefined2 *)((long)plVar7 + 0x4c) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = -0x8000000000000000;
  plVar8 = (long *)param_1[6];
  param_1[6] = (long)plVar7;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar7 = plVar8 + 2;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  (**(code **)(*param_1 + 0x20))(&local_48,param_1,param_2);
  plVar7 = local_48;
  local_48 = (long *)0x0;
  plVar8 = (long *)param_1[5];
  param_1[5] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar7 = plVar8 + 2;
      do {
        lVar11 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
      plVar7 = local_48 + 2;
      do {
        lVar11 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*local_48 + 0x18))();
      }
    }
  }
  iVar3 = *(int *)PTR_DAT_047e4f38;
  lVar11 = tpidr_el0;
  lVar9 = *(long *)(lVar11 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar11 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  lVar11 = param_1[5];
  if (lVar11 == 0) {
    lVar11 = param_1[6];
    *(undefined8 *)(lVar11 + 0x40) = 0xffffffff00000000;
    *(undefined1 *)(lVar11 + 0x4c) = 5;
  }
  else {
    FUN_030b9860(lVar11 + 200,param_4,lVar11 + 0xe0,0);
    FUN_030b9860(lVar11 + 0xd0,param_5,lVar11 + 0xf0,1);
    *(bool *)(param_1[5] + 0xb1) = param_6 != (undefined8 *)0x0;
    FUN_030b9958(param_2,param_1[5],param_1[6]);
    puVar6 = PTR_PTR_047d1a50;
    if (param_6 != (undefined8 *)0x0) {
      lVar11 = param_1[6];
      if ((undefined8 *)(lVar11 + 0x50) != param_6) {
        FUN_0309d15c(param_6,PTR_PTR_047d1a50);
        FUN_0309d15c((undefined8 *)(lVar11 + 0x50),puVar6);
        uVar10 = *param_6;
        *param_6 = *(undefined8 *)(lVar11 + 0x50);
        *(undefined8 *)(lVar11 + 0x50) = uVar10;
        uVar2 = *(undefined4 *)(param_6 + 1);
        *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar11 + 0x58);
        *(undefined4 *)(lVar11 + 0x58) = uVar2;
        uVar2 = *(undefined4 *)((long)param_6 + 0xc);
        *(undefined4 *)((long)param_6 + 0xc) = *(undefined4 *)(lVar11 + 0x5c);
        *(undefined4 *)(lVar11 + 0x5c) = uVar2;
      }
      uVar10 = *(undefined8 *)(param_1[5] + 0x90);
      *(undefined4 *)(param_7 + 1) = *(undefined4 *)(param_1[5] + 0x98);
      *param_7 = uVar10;
    }
  }
  while ((char)*plVar1 == '\x01') {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(char *)plVar1 = '\x02';
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
LAB_030cf5f8:
  ClearExclusiveLocal();
  return;
}


