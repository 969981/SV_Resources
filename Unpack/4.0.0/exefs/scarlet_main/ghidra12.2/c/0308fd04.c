/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308fd04; name: FUN_0308fd04
 */


long * FUN_0308fd04(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_047d1a08;
  iVar6 = *(int *)(param_1 + 0x40);
  iVar11 = (int)((ulong)param_2 >> 0x20);
  if (iVar6 <= iVar11) {
    iVar12 = (int)((long)iVar11 + 1);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) <= iVar11) {
      FUN_03090b28((long *)(param_1 + 0x38),(long)iVar12);
      iVar6 = *(int *)(param_1 + 0x40);
    }
    if (iVar11 < iVar6) {
      if (iVar12 < iVar6) {
        lVar9 = *(long *)(param_1 + 0x38);
        plVar13 = (long *)(lVar9 + (long)iVar6 * 0x18);
        *(int *)(param_1 + 0x40) = iVar12;
        do {
          lVar10 = plVar13[-2];
          plVar13 = plVar13 + -3;
          if (lVar10 != 0) {
            nn::os::FinalizeMutex((MutexType *)(lVar10 + 8));
            (**(code **)(puVar3 + 8))(0,lVar10,0);
          }
          plVar4 = (long *)*plVar13;
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar8 = plVar4 + 2;
            do {
              lVar10 = *plVar8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar2) {
                *plVar8 = lVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
        } while (plVar13 != (long *)(lVar9 + ((long)iVar11 + 1) * 0x18));
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x38);
      puVar7 = (undefined8 *)(lVar9 + (long)iVar6 * 0x18);
      *(int *)(param_1 + 0x40) = iVar12;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined1 *)(puVar7 + 2) = 1;
        puVar7 = puVar7 + 3;
      } while (puVar7 != (undefined8 *)(lVar9 + (long)iVar12 * 0x18));
    }
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= iVar11) {
      FUN_02eb1f88(param_1 + 0x48,PTR_PTR_047d1a50,(long)iVar12);
    }
    if ((*(int *)(param_1 + 0x50) <= iVar11) || (iVar12 < *(int *)(param_1 + 0x50))) {
      *(int *)(param_1 + 0x50) = iVar12;
    }
  }
  local_68 = 0x78;
  plVar13 = (long *)(**(code **)puVar3)(0,&local_68,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar13,"hkaiNavMeshClearanceCache");
  }
  plVar13[1] = 0xffffffff;
  plVar4 = plVar13 + 2;
  *plVar4 = 1;
  puVar3 = PTR_DAT_047e4f40;
  *(undefined4 *)(plVar13 + 9) = 0;
  *(undefined4 *)(plVar13 + 0xe) = 0;
  *plVar13 = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar13 + 3) = 0x3f800000;
  plVar13[5] = 0;
  plVar13[6] = -0x8000000000000000;
  plVar13[7] = 0;
  plVar13[8] = -0x8000000000000000;
  plVar13[10] = 0;
  plVar13[0xb] = -0x8000000000000000;
  plVar13[0xc] = 0;
  plVar13[0xd] = -0x8000000000000000;
  if (1.0 <= *(float *)((long)plVar13 + 0x1c) + 0.001) {
    *(undefined4 *)((long)plVar13 + 0x24) = 0;
    fVar15 = 0.0;
  }
  else {
    fVar14 = 1.0 - *(float *)((long)plVar13 + 0x1c);
    fVar15 = fVar14 / 254.0;
    *(int *)((long)plVar13 + 0x24) = (int)(254.0 / fVar14) + 1;
  }
  *(float *)(plVar13 + 4) = fVar15;
  plVar8 = (long *)(*(long *)(param_1 + 0x38) + (param_2 >> 0x20) * 0x18);
  *(undefined1 *)(plVar8 + 2) = 1;
  if (plVar13[1] != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = (long *)*plVar8;
  *plVar8 = (long)plVar13;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar8 = plVar5 + 2;
    do {
      lVar9 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x48) + (param_2 >> 0x20) * 4) = param_3;
  if (plVar13[1] != 0) {
    do {
      lVar9 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  return plVar13;
}


