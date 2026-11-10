/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c3a68; name: FUN_006c3a68
 */


void FUN_006c3a68(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  plVar8 = *(long **)(*param_2 + 0x238);
  plVar5 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xa8,8);
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar6 = plVar5 + 2;
  *plVar6 = 0;
  puVar4 = PTR_DAT_047cfa60;
  plVar5[3] = (long)plVar8;
  plVar5[5] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  plVar8 = plVar5 + 4;
  *plVar8 = 0;
  plVar5[6] = 0xffffffff;
  plVar5[8] = *param_2;
  lVar7 = param_2[1];
  plVar5[9] = lVar7;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = plVar5[5];
  }
  lVar11 = param_3[1];
  lVar10 = *param_3;
  lVar13 = param_3[3];
  lVar12 = param_3[2];
  lVar14 = param_3[4];
  lVar16 = param_3[7];
  lVar15 = param_3[6];
  plVar5[0xf] = param_3[5];
  plVar5[0xe] = lVar14;
  plVar5[0x11] = lVar16;
  plVar5[0x10] = lVar15;
  *(undefined1 *)(plVar5 + 0x12) = 0;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0xb] = lVar11;
  plVar5[10] = lVar10;
  plVar5[0xd] = lVar13;
  plVar5[0xc] = lVar12;
  if (lVar7 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar8;
    plVar5[5] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_006c3bb8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar8;
    plVar5[5] = (long)plVar5;
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar7 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
  }
LAB_006c3bb8:
  *param_1 = plVar8;
  param_1[1] = plVar5;
  return;
}


