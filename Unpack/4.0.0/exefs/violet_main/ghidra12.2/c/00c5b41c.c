/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5b41c; name: FUN_00c5b41c
 */


void FUN_00c5b41c(long param_1,undefined8 *param_2)

{
  short *psVar1;
  MutexType *pMVar2;
  short sVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  float fVar18;
  int local_b4;
  undefined8 local_a0;
  float local_98;
  long local_90;
  long local_88;
  float local_80;
  long local_78;
  
  lVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  lVar10 = *(long *)(param_1 + 0x70);
  lVar8 = *(long *)(lVar8 + 8);
  fVar18 = *(float *)(lVar10 + 0x11c);
  nn::os::LockMutex((MutexType *)(lVar10 + 0x120));
  FUN_00c5c2f8(lVar10);
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x120));
  iVar17 = *(int *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  iVar17 = (int)(*(float *)(param_1 + 0xd8) * (float)iVar17);
  plVar11 = *(long **)(param_1 + 0x98);
  local_b4 = *(int *)(param_1 + 0xd4);
  if (*(int *)(param_1 + 0xd4) <= iVar17) {
    local_b4 = iVar17;
  }
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00c5b6e0;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00c5b700;
  }
  nn::os::AcquireSemaphore((SemaphoreType *)(plVar11 + 0x87));
  plVar13 = *(long **)(param_1 + 0xa8);
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00c5b6e0;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00c5b700;
  }
  nn::os::AcquireSemaphore((SemaphoreType *)(plVar13 + 0x87));
  plVar15 = *(long **)(param_1 + 0xa0);
  if (plVar15 != (long *)0x0) {
    lVar10 = plVar15[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00c5b6e0;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00c5b700;
  }
  nn::os::AcquireSemaphore((SemaphoreType *)(plVar15 + 0x87));
  plVar16 = *(long **)(param_1 + 0xb0);
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00c5b6e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_00c5b700:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  fVar18 = fVar18 * (float)((double)lVar8 / 1000000000.0);
  nn::os::AcquireSemaphore((SemaphoreType *)(plVar16 + 0x87));
  *(undefined8 *)(*(long *)plVar11[0x80] + 0x3b8) = *(undefined8 *)(*(long *)plVar11[0x80] + 0x3b0);
  *(undefined8 *)(*(long *)plVar13[0x80] + 0x3b8) = *(undefined8 *)(*(long *)plVar13[0x80] + 0x3b0);
  *(undefined8 *)(*(long *)plVar15[0x80] + 0x3b8) = *(undefined8 *)(*(long *)plVar15[0x80] + 0x3b0);
  *(undefined8 *)(*(long *)plVar16[0x80] + 0x3b8) = *(undefined8 *)(*(long *)plVar16[0x80] + 0x3b0);
  pMVar2 = (MutexType *)(*(long *)(param_1 + 0x70) + 0x120);
  nn::os::LockMutex(pMVar2);
  local_88 = 0;
  lVar8 = *(long *)(param_1 + 0x70);
  local_78 = lVar8 + 0x120;
  plVar12 = (long *)**(long **)(lVar8 + 0x28);
  plVar4 = (long *)(*(long **)(lVar8 + 0x28))[1];
  local_80 = fVar18;
  if (plVar12 != plVar4) {
    do {
      local_88 = *plVar12;
      if (*(char *)(local_88 + 0xfe) == '\0' || *(int *)(local_88 + 0x74) != 2) {
        if ((*(int *)(local_88 + 0x74) == 1) && (*(int *)(local_88 + 0x100) == 4)) {
          if (local_b4 < 1) {
            *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
            goto LAB_00c5b750;
          }
          local_b4 = local_b4 + -1;
        }
        FUN_00c5bb48(*(long *)plVar11[0x80] + 0x3b0,&local_88);
        FUN_00c5bb48(*(long *)plVar13[0x80] + 0x3b0,&local_88);
      }
LAB_00c5b750:
      plVar12 = plVar12 + 1;
    } while (plVar4 != plVar12);
    lVar8 = *(long *)(param_1 + 0x70);
  }
  local_90 = lVar8 + 0x120;
  local_a0 = 0;
  puVar14 = (undefined8 *)**(long **)(lVar8 + 0x48);
  puVar5 = (undefined8 *)(*(long **)(lVar8 + 0x48))[1];
  local_98 = fVar18;
  if (puVar14 != puVar5) {
    local_a0 = *puVar14;
    FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
    FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
    if (puVar14 + 1 != puVar5) {
      local_a0 = puVar14[1];
      FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
      FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
      if (puVar14 + 2 != puVar5) {
        local_a0 = puVar14[2];
        FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
        FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
        if (puVar14 + 3 != puVar5) {
          local_a0 = puVar14[3];
          FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
          FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
          if (puVar14 + 4 != puVar5) {
            local_a0 = puVar14[4];
            FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
            FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
            if (puVar14 + 5 != puVar5) {
              local_a0 = puVar14[5];
              FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
              FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
              if (puVar14 + 6 != puVar5) {
                local_a0 = puVar14[6];
                FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
                FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
                for (puVar14 = puVar14 + 7; puVar14 != puVar5; puVar14 = puVar14 + 1) {
                  local_a0 = *puVar14;
                  FUN_00c5bf1c(*(long *)plVar15[0x80] + 0x3b0,&local_a0);
                  FUN_00c5bf1c(*(long *)plVar16[0x80] + 0x3b0,&local_a0);
                }
              }
            }
          }
        }
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
  nn::os::ReleaseSemaphore((SemaphoreType *)(plVar16 + 0x87));
  if (plVar16 != (long *)0x0) {
    lVar8 = plVar16[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar3 == 0) goto LAB_00c5bb20;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(plVar15 + 0x87));
  if (plVar15 != (long *)0x0) {
    lVar8 = plVar15[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar3 == 0) goto LAB_00c5bb20;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(plVar13 + 0x87));
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar3 == 0) goto LAB_00c5bb20;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(plVar11 + 0x87));
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c5bae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x50))(plVar11);
      return;
    }
    if (sVar3 == 0) {
LAB_00c5bb20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


