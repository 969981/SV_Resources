/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030cf638; name: FUN_030cf638
 */


void FUN_030cf638(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *local_58;
  
  puVar6 = PTR_DAT_047e4f38;
  iVar2 = *(int *)PTR_DAT_047e4f38;
  lVar10 = tpidr_el0;
  lVar9 = *(long *)(lVar10 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  plVar1 = param_1 + 4;
  do {
    if ((char)*plVar1 != '\0') goto LAB_030cf880;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(char *)plVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR_DAT_047d1a08;
  } while (cVar3 != '\0');
  local_58 = (long *)0x60;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar7,"FindPathOutput");
  }
  *plVar7 = (long)(PTR_DAT_047e5108 + 0x10);
  plVar7[1] = 0xffffffff;
  plVar7[2] = 1;
  plVar7[3] = 0;
  plVar7[4] = -0x8000000000000000;
  plVar7[5] = 0;
  plVar7[6] = -0x8000000000000000;
  plVar7[7] = 0;
  plVar7[8] = -0x8000000000000000;
  plVar7[10] = -0x100000000;
  *(undefined4 *)(plVar7 + 0xb) = 0x7f7fffee;
  *(undefined2 *)((long)plVar7 + 0x5c) = 0;
  plVar8 = (long *)param_1[6];
  param_1[6] = (long)plVar7;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar7 = plVar8 + 2;
    do {
      lVar9 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  (**(code **)(*param_1 + 0x20))(&local_58,param_1,param_2);
  plVar7 = local_58;
  local_58 = (long *)0x0;
  plVar8 = (long *)param_1[5];
  param_1[5] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar7 = plVar8 + 2;
      do {
        lVar9 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    if ((local_58 != (long *)0x0) && (local_58[1] != 0)) {
      plVar7 = local_58 + 2;
      do {
        lVar9 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))();
      }
    }
    plVar7 = (long *)param_1[5];
  }
  if (plVar7 == (long *)0x0) {
    lVar10 = param_1[6];
    *(undefined8 *)(lVar10 + 0x50) = 0xffffffff00000000;
    *(undefined1 *)(lVar10 + 0x5c) = 5;
  }
  else {
    FUN_030b9860((long)plVar7 + 0x9c,param_4,plVar7 + 0x16,0);
    iVar2 = *(int *)puVar6;
    lVar9 = *(long *)(lVar10 + 0x1000b8);
    if (lVar9 == 0) {
      lVar9 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar9;
    }
    if (*(long *)(lVar9 + (long)iVar2 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    FUN_030c9e04(param_2,param_1[5],param_1[6]);
  }
  while ((char)*plVar1 == '\x01') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(char *)plVar1 = '\x02';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      return;
    }
  }
LAB_030cf880:
  ClearExclusiveLocal();
  return;
}


