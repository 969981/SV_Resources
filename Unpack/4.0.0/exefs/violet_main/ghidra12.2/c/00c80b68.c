/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c80b68; name: FUN_00c80b68
 */


void FUN_00c80b68(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long *local_40;
  long local_38;
  undefined1 auStack_18 [8];
  
  lVar10 = *(long *)(*(long *)(param_1[2] + 0x1f8) + 0x58);
  if (lVar10 == 0) {
    puVar9 = &DAT_03c886bc;
  }
  else {
    puVar9 = (undefined1 *)
             (*(long *)(*(long *)(*(long *)(lVar10 + 0x28) + (long)(int)param_1[0x13] * 8) + 0x60) +
             2);
  }
  lVar10 = FUN_00ec0c08(param_1[2],puVar9);
  if (lVar10 != 0) {
    local_38 = *param_1;
    local_40 = (long *)FUN_00cf3764(auStack_18,*(undefined8 *)(local_38 + 8),&local_38);
    if (local_40 != (long *)0x0) {
      plVar7 = local_40 + 5;
      do {
        lVar6 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) goto LAB_00c80cd4;
    }
    FUN_00ec0d30(local_40,lVar10,1);
    lVar10 = FUN_011f1130(&local_38,param_2,&local_40);
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
LAB_00c80cd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar7 = (long *)param_1[9];
    param_1[9] = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_00c80d18;
    }
    param_1[9] = lVar10;
    param_1[0xb] = -1;
    local_38 = -1;
    pcVar8 = (char *)FUN_00ccbbb0(*(undefined8 *)
                                   (*(long *)(*(long *)(lVar10 + 0x30) + 0x70) + 0x110),
                                  *(long *)(lVar10 + 0x30) + 0x30);
    lVar10 = -1;
    if (*pcVar8 != '\0' && *(long *)(pcVar8 + 8) != 0) {
      FUN_00f1d9f4(*(long *)(*(long *)(*param_1 + 0x30) + 0x6140) + 0x110,&local_38,
                   *(undefined4 *)(*(long *)(pcVar8 + 8) + 0x88));
      lVar10 = local_38;
    }
    param_1[0xb] = lVar10;
    if (local_40 != (long *)0x0) {
      plVar7 = local_40 + 5;
      do {
        lVar10 = *plVar7;
        iVar5 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
LAB_00c80d18:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


