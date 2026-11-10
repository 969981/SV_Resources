/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bb950; name: FUN_005bb950
 */


void FUN_005bb950(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  lVar6 = *param_2;
  plVar7 = *(long **)(*param_3 + 0x238);
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x38,8);
  *plVar4 = (long)(PTR_DAT_047ce680 + 0x10);
  plVar4[1] = 0;
  puVar1 = PTR_DAT_047ce688;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar7;
  plVar4[4] = (long)(puVar1 + 0x10);
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar8 = *(long **)(*param_3 + 0x238);
  plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  puVar1 = PTR_DAT_047ce690 + 0x10;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar8;
  *plVar7 = (long)puVar1;
  plVar7[1] = 0;
  FUN_005dc72c(plVar7 + 4,lVar6 + 0x10,param_3);
  plVar8 = (long *)plVar4[6];
  plVar4[5] = (long)(plVar7 + 4);
  plVar4[6] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4[4] = (long)(PTR_DAT_047ce698 + 0x10);
  *param_1 = plVar4 + 4;
  param_1[1] = plVar4;
  plVar7 = *(long **)(*param_3 + 0x238);
  lVar6 = *param_2;
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x38,8);
  *plVar4 = (long)(PTR_DAT_047ce6a0 + 0x10);
  plVar4[1] = 0;
  puVar1 = PTR_DAT_047ce6a8;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar7;
  plVar4[4] = (long)(puVar1 + 0x10);
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar8 = *(long **)(*param_3 + 0x238);
  plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  puVar1 = PTR_DAT_047ce6b0 + 0x10;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar8;
  *plVar7 = (long)puVar1;
  plVar7[1] = 0;
  FUN_005dce30(plVar7 + 4,lVar6 + 0x10,param_3);
  plVar8 = (long *)plVar4[6];
  plVar4[5] = (long)(plVar7 + 4);
  plVar4[6] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4[4] = (long)(PTR_DAT_047ce6b8 + 0x10);
  param_1[2] = plVar4 + 4;
  param_1[3] = plVar4;
  puVar5 = (undefined8 *)FUN_001fc5fc(*param_2);
  param_1[4] = *puVar5;
  lVar6 = puVar5[1];
  param_1[5] = lVar6;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(puVar5 + 2);
  return;
}


