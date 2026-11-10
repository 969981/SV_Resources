/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01197720; name: FUN_01197720
 */


void FUN_01197720(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  
  do {
    lVar15 = *param_2;
    if (lVar15 != 0) {
      piVar1 = (int *)(lVar15 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar9 = *(long **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 5;
      do {
        lVar8 = *plVar2;
        iVar4 = (int)lVar8 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
        pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar12 = "DecrementReferenceInternal";
        pcVar13 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar14 = "Reference counter underflows.";
        goto LAB_01197a7c;
      }
    }
    *(long *)(param_1 + 200) = lVar15;
    plVar9 = *(long **)(param_1 + 0x78);
    if (plVar9 != (long *)0x0) {
      lVar15 = plVar9[6];
      if (*(long *)(lVar15 + 0x10) == 0) goto LAB_01197a3c;
      psVar3 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        *(undefined8 *)(lVar15 + 8) = uVar10;
        *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_01197a5c;
      lVar15 = plVar9[6];
      psVar3 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar5 == 0) goto LAB_01197a84;
      plVar9 = *(long **)(param_1 + 0x78);
      if (plVar9 == (long *)0x0) {
        FUN_01197720(0,param_2);
      }
      else {
        lVar15 = plVar9[6];
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_01197a3c;
        psVar3 = (short *)(lVar15 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar10;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_01197a5c;
        FUN_01197720(plVar9,param_2);
        lVar15 = plVar9[6];
        psVar3 = (short *)(lVar15 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar5 == 0) goto LAB_01197a84;
      }
    }
    plVar9 = *(long **)(param_1 + 0x70);
    if (plVar9 == (long *)0x0) {
      return;
    }
    lVar15 = plVar9[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_01197a3c;
    psVar3 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar10;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_01197a5c;
    lVar15 = plVar9[6];
    psVar3 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar5 == 0) goto LAB_01197a84;
    plVar9 = *(long **)(param_1 + 0x70);
    param_1 = 0;
  } while (plVar9 == (long *)0x0);
  lVar15 = plVar9[6];
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_01197a3c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar3 = (short *)(lVar15 + 0x1a);
  do {
    sVar5 = *psVar3;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar7) {
      *psVar3 = sVar5 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar5 == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
    *(undefined8 *)(lVar15 + 8) = uVar10;
    *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
  }
  else if (sVar5 == -1) {
LAB_01197a5c:
    pcVar11 = "count != 0";
    pcVar12 = "AddReference";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar14 = "Reference counter overflows.";
LAB_01197a7c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
  }
  FUN_01197720(plVar9,param_2);
  lVar15 = plVar9[6];
  psVar3 = (short *)(lVar15 + 0x1a);
  do {
    sVar5 = *psVar3;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar7) {
      *psVar3 = sVar5 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01197a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x50))(plVar9);
    return;
  }
  if (sVar5 != 0) {
    return;
  }
LAB_01197a84:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


