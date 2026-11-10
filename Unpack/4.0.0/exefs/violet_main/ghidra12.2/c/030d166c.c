/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d166c; name: FUN_030d166c
 */


void FUN_030d166c(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  MutexType *pMVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_047d1a08;
  local_68 = 0x30;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar7,"hkaiPathRequestManager");
  }
  plVar7[2] = 1;
  *plVar7 = (long)(PTR_DAT_047e5128 + 0x10);
  plVar7[1] = 0xffffffff;
  plVar7[3] = 0;
  plVar7[4] = -0x8000000000000000;
  local_68 = 0x20;
  pMVar8 = (MutexType *)(**(code **)puVar5)(0,&local_68,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(pMVar8,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar8,true,0);
  plVar7[5] = (long)pMVar8;
  *param_1 = plVar7;
  iVar11 = *(int *)(param_2 + 0x20);
  if ((int)(*(uint *)((long)plVar7 + 0x24) & 0x7fffffff) < iVar11) {
    FUN_030d2684(plVar7 + 3,(long)iVar11);
    iVar11 = *(int *)(param_2 + 0x20);
  }
  if (0 < iVar11) {
    lVar13 = 0;
    puVar1 = PTR_DAT_047e5110 + 0x10;
    do {
      lVar12 = *(long *)(*(long *)(param_2 + 0x18) + lVar13 * 8);
      if (lVar12 == 0) {
        iVar11 = (int)plVar7[4];
        *(undefined8 *)(plVar7[3] + (long)iVar11 * 8) = 0;
LAB_030d188c:
        *(int *)(plVar7 + 4) = iVar11 + 1;
      }
      else if ((param_3 >> (ulong)((uint)lVar13 & 0x1f) & 1) == 0) {
        local_68 = 0x60;
        plVar10 = (long *)(**(code **)puVar5)(0,&local_68,0);
        if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
          (**(code **)(puVar5 + 0x10))(plVar10,"hkaiPathRequestQueue");
        }
        plVar9 = plVar10 + 2;
        *plVar9 = 1;
        *plVar10 = (long)puVar1;
        plVar10[1] = 0xffffffff;
        *(char *)(plVar10 + 3) = (char)lVar13;
        plVar10[4] = 0;
        plVar10[5] = -0x8000000000000000;
        plVar10[6] = 0;
        plVar10[7] = -0x8000000000000000;
        plVar10[8] = 0;
        plVar10[9] = -0x8000000000000000;
        plVar10[10] = 0;
        plVar10[0xb] = -0x8000000000000000;
        iVar11 = (int)plVar7[4];
        *(long **)(plVar7[3] + (long)iVar11 * 8) = plVar10;
        if (plVar10 == (long *)0x0) goto LAB_030d188c;
        if (plVar10[1] != 0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(int *)(plVar7 + 4) = iVar11 + 1;
        if (plVar10[1] != 0) {
          do {
            lVar12 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            lVar12 = *plVar10;
            goto LAB_030d1944;
          }
        }
      }
      else {
        lVar4 = plVar7[4];
        *(long *)(plVar7[3] + (long)(int)lVar4 * 8) = lVar12;
        if (*(long *)(lVar12 + 8) != 0) {
          plVar10 = (long *)(lVar12 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(int *)(plVar7 + 4) = (int)lVar4 + 1;
        local_68 = 0x60;
        plVar9 = (long *)(**(code **)puVar5)(0,&local_68,0);
        if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
          (**(code **)(puVar5 + 0x10))(plVar9,"hkaiPathRequestQueue");
        }
        plVar9[2] = 1;
        puVar6 = PTR_DAT_047e5110;
        *(char *)(plVar9 + 3) = (char)lVar13;
        plVar9[4] = 0;
        plVar9[5] = -0x8000000000000000;
        plVar9[6] = 0;
        plVar9[7] = -0x8000000000000000;
        plVar9[8] = 0;
        plVar9[9] = -0x8000000000000000;
        plVar9[10] = 0;
        plVar9[0xb] = -0x8000000000000000;
        *plVar9 = (long)(puVar6 + 0x10);
        plVar9[1] = 0xffffffff;
        plVar10 = *(long **)(*(long *)(param_2 + 0x18) + lVar13 * 8);
        *(long **)(*(long *)(param_2 + 0x18) + lVar13 * 8) = plVar9;
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar9 = plVar10 + 2;
          do {
            lVar12 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            lVar12 = *plVar10;
LAB_030d1944:
            (**(code **)(lVar12 + 0x18))(plVar10);
          }
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_2 + 0x20));
  }
  return;
}


