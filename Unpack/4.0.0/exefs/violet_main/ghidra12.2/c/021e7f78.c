/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e7f78; name: FUN_021e7f78
 */


void FUN_021e7f78(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined2 local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  uVar13 = *param_1;
  uVar4 = param_1[2];
  local_38 = (long *)param_1[3];
  if (local_38 != (long *)0x0) {
    lVar14 = local_38[6];
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar8;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar9 = "count != 0";
      pcVar10 = "AddReference";
      pcVar11 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar12 = "Reference counter overflows.";
      goto LAB_021e8174;
    }
  }
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  local_60 = (long *)param_2[3];
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  local_58 = param_2[4];
  local_50 = *(undefined2 *)(param_2 + 5);
  local_48 = (long *)param_2[6];
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 5;
    do {
      lVar14 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_40 = (long *)param_2[7];
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x18))();
  }
  FUN_021e7824(uVar13,uVar4,&local_38,&local_78);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 5;
    do {
      lVar14 = *plVar2;
      iVar7 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
      pcVar9 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar10 = "DecrementReferenceInternal";
      pcVar11 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar12 = "Reference counter underflows.";
LAB_021e8174:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar9,pcVar10,pcVar11,0x58,pcVar12);
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar14 = local_38[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


