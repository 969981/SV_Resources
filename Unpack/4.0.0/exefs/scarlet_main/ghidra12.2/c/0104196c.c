/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104196c; name: FUN_0104196c
 */


void FUN_0104196c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  long *plVar14;
  long *plVar15;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x458) == 0) {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x458) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_010419a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x458) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x458) == 0) {
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_1 + 0x458) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010419a8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x458) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010419a8:
  plVar15 = *(long **)(param_1 + 0x30);
  plVar14 = *(long **)(param_1 + 0x38);
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    plVar12 = param_2 + 5;
    do {
      lVar10 = *plVar12;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *(int *)plVar12 = (int)lVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if ((plVar15 != plVar14) && ((long *)*plVar15 != param_2)) {
    do {
      plVar12 = plVar15 + 2;
      plVar15 = plVar14;
      if (plVar14 == plVar12) break;
      plVar15 = plVar12;
    } while ((long *)*plVar12 != param_2);
  }
  if (param_2 != (long *)0x0) {
    plVar14 = param_2 + 5;
    do {
      lVar10 = *plVar14;
      iVar7 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *(int *)plVar14 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*param_2 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01041b24;
  }
  plVar14 = *(long **)(param_1 + 0x38);
  if (plVar14 != plVar15) {
    plVar12 = plVar15 + 2;
    if (plVar12 == plVar14) goto LAB_01041b54;
    do {
      plVar11 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 5;
        do {
          lVar10 = *plVar2;
          iVar7 = (int)lVar10 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *(int *)plVar2 = iVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_01041b24;
      }
      lVar10 = *plVar12;
      *plVar12 = 0;
      *plVar15 = lVar10;
      plVar11 = plVar12 + 1;
      plVar12 = plVar12 + 2;
      *(int *)(plVar15 + 1) = (int)*plVar11;
      plVar15 = plVar15 + 2;
    } while (plVar12 != plVar14);
    plVar14 = *(long **)(param_1 + 0x38);
    while (plVar14 != plVar15) {
LAB_01041b54:
      plVar14 = plVar14 + -2;
      plVar12 = (long *)*plVar14;
      if (plVar12 != (long *)0x0) {
        plVar11 = plVar12 + 5;
        do {
          lVar10 = *plVar11;
          iVar7 = (int)lVar10 + -1;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar13) {
            *(int *)plVar11 = iVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar10 == 0) {
LAB_01041b24:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    plVar14 = *(long **)(param_1 + 0x30);
    *(long **)(param_1 + 0x38) = plVar15;
    if (plVar14 != plVar15) {
      *(undefined2 *)((long)plVar14 + 10) = 0;
      sVar8 = (**(code **)(*(long *)(*(long *)(*plVar14 + 0x30) + 0x30) + 0x10))();
      if (plVar14 + 2 != plVar15) {
        *(short *)((long)plVar14 + 0x1a) = sVar8;
        sVar9 = (**(code **)(*(long *)(*(long *)(plVar14[2] + 0x30) + 0x30) + 0x10))();
        if (plVar14 + 4 != plVar15) {
          sVar9 = sVar9 + sVar8;
          plVar14 = plVar14 + 4;
          do {
            *(short *)((long)plVar14 + 10) = sVar9;
            plVar12 = plVar14 + 2;
            sVar8 = (**(code **)(*(long *)(*(long *)(*plVar14 + 0x30) + 0x30) + 0x10))();
            sVar9 = sVar8 + sVar9;
            plVar14 = plVar12;
          } while (plVar15 != plVar12);
        }
      }
    }
  }
  do {
    lVar10 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x458);
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x458) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x458);
    if (lVar3 != lVar10 || lVar4 != lVar5) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_01041c14;
    }
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x454) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar13 = true;
LAB_01041c14:
  if (!bVar13) {
    do {
      lVar10 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x458);
      if (lVar10 != lVar3 || lVar5 != lVar4) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x01041c98;
      }
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x454) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar13 = true;
joined_r0x01041c98:
    if (!bVar13) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x458);
        if (lVar3 != lVar10 || lVar4 != lVar5) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar10 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x01041c98;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x454) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
      lVar10 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x01041c98;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return;
}


