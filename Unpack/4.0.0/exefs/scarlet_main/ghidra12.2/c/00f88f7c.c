/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f88f7c; name: FUN_00f88f7c
 */


void FUN_00f88f7c(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
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
  
  uVar12 = *param_1;
  uVar3 = param_1[2];
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
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar7;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
      pcVar8 = "count != 0";
      pcVar9 = "AddReference";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar11 = "Reference counter overflows.";
      goto LAB_00f89198;
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
    plVar13 = local_48 + 5;
    do {
      lVar14 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)lVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar13 = (long *)param_2[7];
  local_40 = plVar13;
  if (plVar13 == (long *)0x0) {
    FUN_021e5918(uVar12,uVar3,&local_38,&local_78);
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    FUN_021e5918(uVar12,uVar3,&local_38,&local_78);
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (local_48 != (long *)0x0) {
    plVar13 = local_48 + 5;
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
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
      pcVar8 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar9 = "DecrementReferenceInternal";
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar11 = "Reference counter underflows.";
LAB_00f89198:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar8,pcVar9,pcVar10,0x58,pcVar11);
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar14 = local_38[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f89154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*local_38 + 0x50))();
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


