/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b1194; name: FUN_010b1194
 */


void FUN_010b1194(long param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  FUN_010a6134(&local_38,param_1,0xff,0xff);
  FUN_010a8610(&local_48,*(undefined8 *)(param_1 + 8),0xff,
               *(char *)(param_1 + 0x1c) != '\0' && *(char *)(param_1 + 0x2c) == '\0');
  FUN_010a58c8(local_38,&local_48);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  local_50 = local_40;
  if (local_40 == (long *)0x0) goto LAB_010b1238;
  lVar14 = local_40[6];
  if (*(long *)(lVar14 + 0x10) == 0) goto LAB_010b14fc;
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 != 0) {
    if (sVar3 != -1) goto LAB_010b1238;
LAB_010b151c:
    pcVar8 = "count != 0";
    pcVar10 = "AddReference";
    pcVar11 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar12 = "Reference counter overflows.";
    goto LAB_010b153c;
  }
  uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
  *(undefined8 *)(lVar14 + 8) = uVar9;
  *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
LAB_010b1238:
  FUN_010a5930(uVar13,&local_50);
  if (local_50 != (long *)0x0) {
    lVar14 = local_50[6];
    psVar1 = (short *)(lVar14 + 0x1a);
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
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_010b1378;
  }
  if (*(char *)(param_1 + 0x2e) != '\0') {
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    local_58 = local_48;
    if (local_48 != (long *)0x0) {
      lVar14 = local_48[6];
      if (*(long *)(lVar14 + 0x10) == 0) {
LAB_010b14fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar14 + 0x1a);
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
        uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar9;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) goto LAB_010b151c;
    }
    FUN_010a5930(uVar13,&local_58);
    if (local_58 != (long *)0x0) {
      lVar14 = local_58[6];
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_010b1378;
    }
  }
  if (local_38 != (long *)0x0) {
    plVar7 = local_38 + 5;
    do {
      lVar14 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_2 + 0x58);
  *(long **)(param_2 + 0x58) = local_38;
  if (plVar7 == (long *)0x0) {
LAB_010b1304:
    if (local_40 != (long *)0x0) {
      lVar14 = local_40[6];
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_010b1378;
    }
    if (local_48 != (long *)0x0) {
      lVar14 = local_48[6];
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_010b1378:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_38 == (long *)0x0) {
      return;
    }
    plVar7 = local_38 + 5;
    do {
      lVar14 = *plVar7;
      iVar6 = (int)lVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))();
      return;
    }
    if ((int)lVar14 != 0) {
      return;
    }
  }
  else {
    plVar2 = plVar7 + 5;
    do {
      lVar14 = *plVar2;
      iVar6 = (int)lVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      goto LAB_010b1304;
    }
    if ((int)lVar14 != 0) goto LAB_010b1304;
  }
  pcVar8 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar10 = "DecrementReferenceInternal";
  pcVar11 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar12 = "Reference counter underflows.";
LAB_010b153c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar8,pcVar10,pcVar11,0x58,pcVar12);
}


