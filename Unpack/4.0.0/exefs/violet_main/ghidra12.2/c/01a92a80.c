/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a92a80; name: FUN_01a92a80
 */


void FUN_01a92a80(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long *plVar15;
  long lVar16;
  long *local_38;
  undefined8 local_18;
  
  plVar15 = (long *)*param_2;
  local_18 = param_1;
  if (plVar15 == (long *)0x0) {
    FUN_01a92d6c(&local_38,param_1,&local_18);
    plVar15 = DAT_04842730;
    DAT_04842730 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      lVar16 = plVar15[6];
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar6 == 0) goto LAB_01a92d44;
    }
    DAT_04842730 = local_38;
    param_1 = local_18;
    plVar15 = DAT_04842730;
  }
  else {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar11;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) {
      pcVar10 = "count != 0";
      pcVar12 = "AddReference";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar14 = "Reference counter overflows.";
      goto LAB_01a92d3c;
    }
    plVar2 = DAT_04842730;
    if (DAT_04842730 != (long *)0x0) {
      lVar16 = DAT_04842730[6];
      psVar1 = (short *)(lVar16 + 0x1a);
      DAT_04842730 = plVar15;
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar2 + 0x50))();
        plVar15 = DAT_04842730;
      }
      else {
        plVar15 = DAT_04842730;
        if (sVar6 == 0) {
LAB_01a92d44:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  DAT_04842730 = plVar15;
  plVar15 = (long *)FUN_00f124d8(&local_38,param_1,PTR_DAT_047dadc0);
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 5;
    do {
      lVar16 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = (int)lVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar16 == -1) goto LAB_01a92cd4;
  }
  plVar2 = DAT_04842738;
  DAT_04842738 = (long *)0x0;
  if (plVar2 == (long *)0x0) {
LAB_01a92b50:
    DAT_04842738 = plVar15;
    lVar16 = FUN_00f124d8(&local_38,local_18,PTR_DAT_047dadc0);
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = iVar5 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar5 == -1) {
LAB_01a92cd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar15 = DAT_04842740;
    DAT_04842740 = (long *)0x0;
    if (plVar15 == (long *)0x0) {
      DAT_04842740 = (long *)lVar16;
      return;
    }
    plVar2 = plVar15 + 5;
    do {
      lVar9 = *plVar2;
      iVar5 = (int)lVar9 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = iVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar15 + 0x10))();
      DAT_04842740 = (long *)lVar16;
      return;
    }
    if ((int)lVar9 != 0) {
      DAT_04842740 = (long *)lVar16;
      return;
    }
  }
  else {
    plVar4 = plVar2 + 5;
    do {
      lVar16 = *plVar4;
      iVar5 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *(int *)plVar4 = iVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      goto LAB_01a92b50;
    }
    if ((int)lVar16 != 0) goto LAB_01a92b50;
  }
  pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar12 = "DecrementReferenceInternal";
  pcVar13 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar14 = "Reference counter underflows.";
LAB_01a92d3c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar10,pcVar12,pcVar13,0x58,pcVar14);
}


