/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01260630; name: FUN_01260630
 */


void FUN_01260630(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined1 auStack_28 [8];
  
  if (*(int *)(param_1 + 0x128) == 0) {
    lVar9 = FUN_01167c8c(auStack_28,*(undefined8 *)(param_1 + 8));
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
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
    plVar10 = *(long **)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar8 = *plVar3;
        iVar4 = (int)lVar8 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
        pcVar13 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar14 = "DecrementReferenceInternal";
        pcVar15 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar16 = "Reference counter underflows.";
        goto LAB_01260848;
      }
    }
    *(long *)(param_1 + 0x138) = lVar9;
    uVar11 = FUN_01260850(lVar9 + 0x30,1,param_2,0,param_3);
    if (((uVar11 & 1) != 0) && (plVar10 = *(long **)(lVar9 + 0x50), plVar10 != (long *)0x0)) {
      lVar9 = plVar10[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar12;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) {
        pcVar13 = "count != 0";
        pcVar14 = "AddReference";
        pcVar15 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar16 = "Reference counter overflows.";
LAB_01260848:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar13,pcVar14,pcVar15,0x58,pcVar16);
      }
      lVar9 = plVar10[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(undefined4 *)(param_1 + 0x128) = 1;
  }
  return;
}


