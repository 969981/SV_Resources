/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03078918; name: FUN_03078918
 */


void FUN_03078918(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_047e4f68 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0xffffffff;
  plVar7 = param_1 + 4;
  *plVar7 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  memset(param_1 + 0xb,0,0x98);
  puVar1 = PTR_DAT_047d1a08;
  local_28 = 0x20;
  plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar5,"hkcdDynamicAabbTree");
  }
  FUN_0086f2c4(plVar5);
  *(undefined1 *)(param_1 + 6) = 1;
  plVar6 = (long *)param_1[4];
  if (plVar6 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar6 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)*plVar7;
    }
    *plVar7 = (long)plVar5;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar7 = plVar6 + 2;
      do {
        lVar8 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  local_28 = 0x28;
  plVar5 = (long *)(**(code **)puVar1)(0,&local_28,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar5,"hkaiNavMeshCollectionQueryMediator");
  }
  puVar4 = PTR_DAT_047e4f70;
  plVar5[1] = 0xffffffff;
  plVar5[2] = 1;
  *(undefined4 *)(plVar5 + 3) = 0x3d4ccccd;
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[4] = (long)param_1;
  plVar7 = (long *)param_1[0x1c];
  param_1[0x1c] = (long)plVar5;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar5 = plVar7 + 2;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  local_28 = 0x20;
  plVar5 = (long *)(**(code **)puVar1)(0,&local_28,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar5,"hkaiNavVolumeCollectionQueryMediator");
  }
  puVar1 = PTR_DAT_047e4f78;
  plVar5[2] = 1;
  plVar5[3] = (long)param_1;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[1] = 0xffffffff;
  plVar7 = (long *)param_1[0x1d];
  param_1[0x1d] = (long)plVar5;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar5 = plVar7 + 2;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  return;
}


