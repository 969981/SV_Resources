/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03078b9c; name: FUN_03078b9c
 */


void FUN_03078b9c(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_38;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (long)(PTR_DAT_047e4f68 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  plVar7 = param_1 + 4;
  *plVar7 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[0xb] = param_2;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  memset(param_1 + 0xc,0,0x90);
  puVar3 = PTR_DAT_047d1a08;
  local_38 = 0x20;
  plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar5,"hkcdDynamicAabbTree");
  }
  FUN_0086f2c4(plVar5);
  *(undefined1 *)(param_1 + 6) = 1;
  plVar6 = (long *)param_1[4];
  if (plVar6 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar6 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar6 = (long *)*plVar7;
    }
    *plVar7 = (long)plVar5;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar7 = plVar6 + 2;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  local_38 = 0x28;
  plVar7 = (long *)(**(code **)puVar3)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar7,"hkaiNavMeshCollectionQueryMediator");
  }
  puVar4 = PTR_DAT_047e4f70;
  plVar7[1] = 0xffffffff;
  plVar7[2] = 1;
  *(undefined4 *)(plVar7 + 3) = 0x3d4ccccd;
  *plVar7 = (long)(puVar4 + 0x10);
  plVar7[4] = (long)param_1;
  plVar5 = (long *)param_1[0x1c];
  param_1[0x1c] = (long)plVar7;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  local_38 = 0x20;
  plVar7 = (long *)(**(code **)puVar3)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar7,"hkaiNavVolumeCollectionQueryMediator");
  }
  puVar3 = PTR_DAT_047e4f78;
  plVar7[2] = 1;
  plVar7[3] = (long)param_1;
  *plVar7 = (long)(puVar3 + 0x10);
  plVar7[1] = 0xffffffff;
  plVar5 = (long *)param_1[0x1d];
  param_1[0x1d] = (long)plVar7;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  return;
}


