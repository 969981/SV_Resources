/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00540564; name: FUN_00540564
 */


void FUN_00540564(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar4 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0xe0,0x10);
  lVar6 = *param_2;
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar9 = plVar4 + 2;
  *plVar9 = 0;
  puVar1 = PTR_DAT_047cdeb8;
  plVar4[4] = lVar6;
  plVar4[7] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar10 = plVar4 + 6;
  *plVar10 = 0;
  plVar7 = *(long **)(*param_4 + 0x238);
  lVar6 = *param_3;
  plVar5 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x68,8);
  puVar1 = PTR_DAT_047cde70 + 0x10;
  plVar5[2] = 0;
  plVar5[3] = (long)plVar7;
  *plVar5 = (long)puVar1;
  plVar5[1] = 0;
  FUN_0053fd84(plVar5 + 4,lVar6 + 0x10,param_4);
  plVar4[8] = (long)(plVar5 + 4);
  plVar4[9] = (long)plVar5;
  plVar4[10] = *param_3;
  lVar6 = param_3[1];
  plVar4[0xb] = lVar6;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  lVar6 = FUN_01cf7e20();
  plVar4[0x10] = 0;
  plVar4[0x11] = lVar6;
  plVar4[0x18] = 0;
  plVar4[0x1a] = 0;
  *(undefined1 *)(plVar4 + 0x1b) = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  FUN_0053f31c(plVar4[8],plVar4 + 8);
  *param_1 = plVar10;
  param_1[1] = plVar4;
  if (plVar4[7] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[6] = (long)plVar10;
    plVar4[7] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[7] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[6] = (long)plVar10;
    plVar4[7] = (long)plVar4;
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar6 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


