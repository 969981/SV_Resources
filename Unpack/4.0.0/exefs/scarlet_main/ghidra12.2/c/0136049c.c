/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0136049c; name: FUN_0136049c
 */


void FUN_0136049c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  FUN_00f11e84(&local_28,param_3,param_4);
  local_30 = (long *)*param_1;
  if (local_30 != (long *)0x0) {
    lVar13 = local_30[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar9;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
      pcVar8 = "count != 0";
      pcVar10 = "AddReference";
      pcVar11 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar12 = "Reference counter overflows.";
      goto LAB_01360720;
    }
  }
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_40 = param_2[2];
  local_38 = (long *)param_2[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  plVar3 = local_28;
  local_58 = local_28;
  if (local_28 == (long *)0x0) {
    FUN_01360728(&local_30,&local_50,&local_58);
LAB_01360564:
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_30 != (long *)0x0) {
      lVar13 = local_30[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_28 == (long *)0x0) {
      return;
    }
    plVar3 = local_28 + 5;
    do {
      lVar13 = *plVar3;
      iVar7 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_28 + 0x10))();
      return;
    }
    if ((int)lVar13 != 0) {
      return;
    }
  }
  else {
    plVar2 = local_28 + 5;
    do {
      lVar13 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_01360728(&local_30,&local_50,&local_58);
    if (plVar3 == (long *)0x0) goto LAB_01360564;
    plVar2 = plVar3 + 5;
    do {
      lVar13 = *plVar2;
      iVar7 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      goto LAB_01360564;
    }
    if ((int)lVar13 != 0) goto LAB_01360564;
  }
  pcVar8 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar10 = "DecrementReferenceInternal";
  pcVar11 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar12 = "Reference counter underflows.";
LAB_01360720:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar8,pcVar10,pcVar11,0x58,pcVar12);
}


