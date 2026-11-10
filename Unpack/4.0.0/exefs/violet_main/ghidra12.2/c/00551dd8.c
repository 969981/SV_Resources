/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00551dd8; name: FUN_00551dd8
 */


void FUN_00551dd8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = (long *)FUN_0053f478(*param_2);
  uVar7 = *param_3;
  plVar4 = *(long **)(*plVar4 + 0x238);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x200,0x10);
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar9 = plVar5 + 2;
  *plVar9 = 0;
  puVar3 = PTR_DAT_047cdf98;
  plVar5[4] = (long)plVar4;
  plVar4 = plVar5 + 6;
  *plVar5 = (long)(puVar3 + 0x10);
  FUN_00558ce0(plVar4,param_2,uVar7,param_4,param_5);
  plVar5[6] = (long)(PTR_DAT_047cdfa0 + 0x10);
  if (plVar5[8] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5[7] = (long)plVar4;
    plVar5[8] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[8] + 8) != -1) {
      FUN_00551f9c(param_1,plVar4,param_3);
      if (plVar5 == (long *)0x0) {
        return;
      }
      goto LAB_00551f3c;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5[7] = (long)plVar4;
    plVar5[8] = (long)plVar5;
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
  }
  FUN_00551f9c(param_1,plVar4,param_3);
LAB_00551f3c:
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


