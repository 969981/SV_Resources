/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbdf9c; name: FUN_01dbdf9c
 */


void FUN_01dbdf9c(long *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long *local_48;
  undefined1 local_28;
  undefined7 uStack_27;
  
  if (*param_1 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    return;
  }
  lVar8 = FUN_0104b474(*param_1 + 0x108,&local_28);
  if (lVar8 == 0) {
    return;
  }
  FUN_019832f8(&local_28);
  plVar14 = DAT_04835bb0;
  DAT_04835bb0 = (long *)0x0;
  if (plVar14 == (long *)0x0) {
LAB_01dbe014:
    DAT_04835bb0 = (long *)CONCAT71(uStack_27,local_28);
    plVar14 = *(long **)(lVar8 + 0x170);
    if (plVar14 != (long *)0x0) {
      lVar8 = plVar14[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar8 + 0x1a);
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
        uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar9;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
        pcVar10 = "count != 0";
        pcVar11 = "AddReference";
        pcVar12 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
        ;
        pcVar13 = "Reference counter overflows.";
        goto LAB_01dbe1a0;
      }
    }
    local_48 = DAT_04835bb0;
    if (DAT_04835bb0 != (long *)0x0) {
      plVar1 = DAT_04835bb0 + 5;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_28 = 0;
    FUN_0113c2d0(plVar14,param_2,param_3,&local_48,&local_28);
    if (local_48 == (long *)0x0) {
LAB_01dbe0bc:
      if (plVar14 != (long *)0x0) {
        lVar8 = plVar14[6];
        psVar2 = (short *)(lVar8 + 0x1a);
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
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      return;
    }
    plVar1 = local_48 + 5;
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))();
      goto LAB_01dbe0bc;
    }
    if ((int)lVar8 != 0) goto LAB_01dbe0bc;
  }
  else {
    plVar1 = plVar14 + 5;
    do {
      lVar7 = *plVar1;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      goto LAB_01dbe014;
    }
    if ((int)lVar7 != 0) goto LAB_01dbe014;
  }
  pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar11 = "DecrementReferenceInternal";
  pcVar12 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar13 = "Reference counter underflows.";
LAB_01dbe1a0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar10,pcVar11,pcVar12,0x58,pcVar13);
}


