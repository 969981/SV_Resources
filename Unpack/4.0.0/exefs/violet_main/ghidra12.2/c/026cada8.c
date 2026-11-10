/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026cada8; name: FUN_026cada8
 */


void FUN_026cada8(undefined8 *param_1,long *param_2,undefined8 param_3)

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
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  short sVar13;
  undefined8 local_60 [3];
  long *local_48;
  undefined8 *local_40 [2];
  
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar13 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_026cae18;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026cae18:
        bVar8 = false;
      }
      if (bVar8) {
        lVar11 = *(long *)(lVar11 + 0x10);
        plVar9 = (long *)(lVar11 + -0x28);
        if (lVar11 != 0) {
          lVar6 = FUN_0104cf4c(lVar11 + 0xe0,local_60);
          if (lVar6 == 0) goto LAB_026caea0;
          FUN_0135d26c(local_60,param_3);
          FUN_00f307f0(local_40,lVar6,local_60);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          if (local_40[0] == (undefined8 *)0x0) goto LAB_026caea0;
          if (*(short *)((long)local_40[0] + 0x1a) == 0) goto LAB_026caf60;
          if (local_40[0] == (undefined8 *)0x0) goto LAB_026caea0;
          if (*(short *)((long)local_40[0] + 0x1a) == 0) goto LAB_026caf60;
          psVar1 = (short *)((long)local_40[0] + 0x1a);
          sVar13 = *(short *)((long)local_40[0] + 0x1a);
          goto LAB_026caf2c;
        }
        break;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
LAB_026cadc4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_026caf2c:
  sVar3 = *psVar1;
  if (sVar3 == sVar13) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_026caf50;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_026caf50:
    bVar8 = false;
  }
  if (bVar8) {
    puVar10 = (undefined8 *)local_40[0][2];
    plVar12 = puVar10 + -5;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10);
      uVar7 = FUN_018c987c();
      if ((uVar7 & 1) != 0) {
        FUN_018c9700(param_1,plVar12);
        lVar6 = puVar10[1];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar13 == 0) goto LAB_026caec8;
        if (local_40[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_40[0] + 3);
          do {
            sVar13 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
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
          else if (sVar13 == 0) goto LAB_026caf88;
        }
        lVar11 = *(long *)(lVar11 + 8);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return;
        }
        if (sVar13 != 0) {
          return;
        }
LAB_026caec8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar6 = puVar10[1];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar13 == 0) goto LAB_026caec8;
    }
    goto LAB_026caf60;
  }
  sVar13 = sVar3;
  if (sVar3 == 0) {
LAB_026caf60:
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
      do {
        sVar13 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
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
      else if (sVar13 == 0) {
LAB_026caf88:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_026caea0:
    lVar11 = *(long *)(lVar11 + 8);
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar13 == 0) goto LAB_026caec8;
    goto LAB_026cadc4;
  }
  goto LAB_026caf2c;
}


