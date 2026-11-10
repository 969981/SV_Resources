/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182bde0; name: FUN_0182bde0
 */


void FUN_0182bde0(long *param_1,long param_2,undefined4 param_3,long *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  undefined1 local_50 [8];
  long *local_48;
  undefined1 auStack_28 [8];
  
  if ((*param_1 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    lVar7 = FUN_0104b474(*param_1 + 0x108,auStack_28);
    if (lVar7 == 0) {
      return;
    }
    if (*param_4 == 0) {
      return;
    }
    plVar13 = *(long **)(lVar7 + 0x170);
    if (plVar13 != (long *)0x0) {
      lVar7 = plVar13[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar8;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
        pcVar9 = "count != 0";
        pcVar10 = "AddReference";
        pcVar11 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
        ;
        pcVar12 = "Reference counter overflows.";
        goto LAB_0182bfc0;
      }
    }
    local_48 = (long *)*param_4;
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 5;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_50[0] = 0;
    FUN_0113c2d0(plVar13,param_2,param_3,&local_48,local_50);
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 5;
      do {
        lVar7 = *plVar2;
        iVar6 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
        pcVar9 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar10 = "DecrementReferenceInternal";
        pcVar11 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        pcVar12 = "Reference counter underflows.";
LAB_0182bfc0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar9,pcVar10,pcVar11,0x58,pcVar12);
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar7 = plVar13[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


