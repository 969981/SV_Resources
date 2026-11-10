/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0141b10c; name: FUN_0141b10c
 */


void FUN_0141b10c(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *local_18;
  
  lVar14 = *(long *)(param_1 + 0x48);
  local_18 = (long *)*param_2;
  if (local_18 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = local_18 + 5;
    do {
      lVar15 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)lVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar15 == -1) {
LAB_0141b340:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar13 = local_18;
    if (local_18 != (long *)0x0) {
      plVar7 = local_18 + 5;
      do {
        lVar15 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)lVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar15 == -1) goto LAB_0141b340;
    }
  }
  plVar7 = *(long **)(lVar14 + 200);
  *(undefined8 *)(lVar14 + 200) = 0;
  if (plVar7 == (long *)0x0) {
LAB_0141b194:
    *(long **)(lVar14 + 200) = plVar13;
    plVar13 = *(long **)(lVar14 + 0x78);
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[6];
      if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0141b390;
      psVar2 = (short *)(lVar15 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 0) {
        if (sVar3 != -1) goto LAB_0141b1d0;
LAB_0141b3b0:
        pcVar9 = "count != 0";
        pcVar10 = "AddReference";
        pcVar11 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar12 = "Reference counter overflows.";
        goto LAB_0141b388;
      }
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar8;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
LAB_0141b1d0:
      lVar15 = plVar13[6];
      psVar2 = (short *)(lVar15 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar3 == 0) goto LAB_0141b3d4;
      plVar13 = *(long **)(lVar14 + 0x78);
      if (plVar13 == (long *)0x0) {
        FUN_01197720(0,&local_18);
      }
      else {
        lVar14 = plVar13[6];
        if (*(long *)(lVar14 + 0x10) == 0) {
LAB_0141b390:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar14 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar8;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) goto LAB_0141b3b0;
        FUN_01197720(plVar13,&local_18);
        lVar14 = plVar13[6];
        psVar2 = (short *)(lVar14 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar3 == 0) {
LAB_0141b3d4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    if (local_18 == (long *)0x0) {
      return;
    }
    plVar13 = local_18 + 5;
    do {
      lVar14 = *plVar13;
      iVar6 = (int)lVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_18 + 0x10))();
      return;
    }
    if ((int)lVar14 != 0) {
      return;
    }
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar15 = *plVar1;
      iVar6 = (int)lVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      goto LAB_0141b194;
    }
    if ((int)lVar15 != 0) goto LAB_0141b194;
  }
  pcVar9 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar10 = "DecrementReferenceInternal";
  pcVar11 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar12 = "Reference counter underflows.";
LAB_0141b388:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar9,pcVar10,pcVar11,0x58,pcVar12);
}


