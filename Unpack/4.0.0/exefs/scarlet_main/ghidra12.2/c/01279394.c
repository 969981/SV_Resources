/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01279394; name: FUN_01279394
 */


void FUN_01279394(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  short sVar12;
  undefined8 local_60 [3];
  long *local_48;
  undefined8 *local_40 [2];
  
  lVar10 = *param_2;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01279404;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01279404:
        bVar8 = false;
      }
      if (bVar8) {
        lVar10 = *(long *)(lVar10 + 0x10);
        plVar9 = (long *)(lVar10 + -0x28);
        if (lVar10 != 0) {
          lVar6 = FUN_0104cf4c(lVar10 + 0xe0,local_60);
          if (lVar6 == 0) goto LAB_01279490;
          FUN_0135d26c(local_60,param_3);
          FUN_00f307f0(local_40,lVar6,local_60);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          if (local_40[0] == (undefined8 *)0x0) goto LAB_01279490;
          if (*(short *)((long)local_40[0] + 0x1a) == 0) goto LAB_01279550;
          if (local_40[0] == (undefined8 *)0x0) goto LAB_01279490;
          if (*(short *)((long)local_40[0] + 0x1a) == 0) goto LAB_01279550;
          psVar1 = (short *)((long)local_40[0] + 0x1a);
          sVar12 = *(short *)((long)local_40[0] + 0x1a);
          goto LAB_0127951c;
        }
        break;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
LAB_012793b0:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_0127951c:
  sVar3 = *psVar1;
  if (sVar3 == sVar12) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01279540;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01279540:
    bVar8 = false;
  }
  if (bVar8) {
    lVar6 = local_40[0][2];
    plVar11 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      uVar7 = FUN_02162f70(lVar6);
      if ((uVar7 & 1) != 0) {
        FUN_01424fbc(param_1,plVar11);
        lVar6 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar12 == 0) goto LAB_012794b8;
        if (local_40[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_40[0] + 3);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)local_40[0] + 0x1c);
            do {
              iVar5 = *piVar2;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar5 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar6 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar6;
              local_60[0] = *local_40[0];
              FUN_00c44438(lVar6 + 0x8040,local_60);
            }
          }
          else if (sVar12 == 0) goto LAB_01279680;
        }
        lVar10 = *(long *)(lVar10 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return;
        }
        if (sVar12 != 0) {
          return;
        }
LAB_012794b8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar6 = *(long *)(lVar6 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar12 == 0) goto LAB_012794b8;
    }
    goto LAB_01279550;
  }
  sVar12 = sVar3;
  if (sVar3 == 0) {
LAB_01279550:
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_40[0] + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar6 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar6;
          local_60[0] = *local_40[0];
          FUN_00c44438(lVar6 + 0x8040,local_60);
        }
      }
      else if (sVar12 == 0) {
LAB_01279680:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_01279490:
    lVar10 = *(long *)(lVar10 + 8);
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar12 == 0) goto LAB_012794b8;
    goto LAB_012793b0;
  }
  goto LAB_0127951c;
}


