/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6f280; name: FUN_00c6f280
 */


ulong FUN_00c6f280(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *local_48;
  
  if (*(long *)(*(long *)(param_1 + 0x1c8) + 0xb0) == 0) {
    FUN_00c6f748(param_1);
  }
  if (*(float *)(param_1 + 0x1dc) <= 0.0) {
    uVar7 = 0;
    goto LAB_00c6f31c;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x120) + 200);
  if (lVar8 == 0) {
    plVar12 = (long *)0x0;
LAB_00c6f2c8:
    lVar8 = *(long *)(param_1 + 0x1c8);
    local_48 = (long *)0x0;
    bVar6 = true;
  }
  else {
    plVar12 = *(long **)(*(long *)(lVar8 + 0x78) + 0x78);
    if (plVar12 == (long *)0x0) goto LAB_00c6f2c8;
    plVar1 = plVar12 + 5;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar8 == -1) {
LAB_00c6f598:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar8 = *(long *)(param_1 + 0x1c8);
    bVar6 = *(int *)(lVar8 + 0xb8) == -1;
    if ((bool)*(char *)((long)plVar12 + 0x174) != bVar6) {
      plVar2 = plVar12 + 0x30;
      lVar8 = nn::os::GetCurrentThread();
      do {
        lVar10 = *plVar2;
        lVar11 = plVar12[0x31];
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar10;
          plVar12[0x31] = lVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        while ((lVar10 != 0 && (lVar8 != lVar10))) {
          nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x32));
          do {
            lVar10 = *plVar2;
            lVar11 = plVar12[0x31];
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar10;
              plVar12[0x31] = lVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        do {
          lVar3 = *plVar2;
          if (lVar3 != lVar10 || plVar12[0x31] != lVar11) {
            bVar9 = false;
            ClearExclusiveLocal();
            goto LAB_00c6f474;
          }
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar10;
            *(long *)((long)plVar12 + 0x184) = lVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar9 = true;
LAB_00c6f474:
        lVar10 = lVar3;
        lVar11 = plVar12[0x31];
      } while (!bVar9);
      *(bool *)((long)plVar12 + 0x174) = bVar6;
      *(undefined2 *)((long)plVar12 + 0x176) = 0x101;
      do {
        lVar8 = *plVar2;
        lVar10 = plVar12[0x31];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar8;
          plVar12[0x31] = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        lVar11 = *plVar2;
        lVar3 = plVar12[0x31];
        if (lVar11 != lVar8 || lVar3 != lVar10) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto LAB_00c6f4c0;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar8;
          *(long *)((long)plVar12 + 0x184) = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar6 = true;
LAB_00c6f4c0:
      if (!bVar6) {
        do {
          lVar8 = *plVar2;
          lVar10 = plVar12[0x31];
          if (lVar8 != lVar11 || lVar10 != lVar3) {
            bVar6 = false;
            ClearExclusiveLocal();
            goto joined_r0x00c6f550;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar11;
            *(long *)((long)plVar12 + 0x184) = lVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar6 = true;
joined_r0x00c6f550:
        if (!bVar6) {
          do {
            lVar11 = *plVar2;
            lVar3 = plVar12[0x31];
            if (lVar11 != lVar8 || lVar3 != lVar10) {
              bVar6 = false;
              ClearExclusiveLocal();
              lVar8 = lVar11;
              lVar10 = lVar3;
              goto joined_r0x00c6f550;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar8;
              *(long *)((long)plVar12 + 0x184) = lVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar6 = true;
          lVar8 = lVar11;
          lVar10 = lVar3;
          goto joined_r0x00c6f550;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x32));
      lVar8 = *(long *)(param_1 + 0x1c8);
    }
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_48 = plVar12;
    if ((int)lVar10 == -1) goto LAB_00c6f598;
    bVar6 = false;
  }
  param_2 = FUN_00c6f5d0(lVar8,param_1 + 0x1d0,param_2,&local_48);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00c6f3e0;
  }
  if (param_2 == 0xffffffff) {
    param_2 = 0xffffffff;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x1c8) + 0xb0);
    if (lVar8 != 0) {
      iVar4 = *(int *)(lVar8 + 0x158);
      if (iVar4 <= (int)param_2) {
        param_2 = iVar4 - 1;
      }
    }
  }
  if (!bVar6) {
    plVar1 = plVar12 + 5;
    do {
      iVar4 = (int)*plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 1) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if (iVar4 == 0) {
LAB_00c6f3e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar7 = 1;
LAB_00c6f31c:
  return uVar7 | (ulong)param_2 << 0x20;
}


