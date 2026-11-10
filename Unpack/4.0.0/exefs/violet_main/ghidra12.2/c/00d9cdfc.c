/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9cdfc; name: FUN_00d9cdfc
 */


void FUN_00d9cdfc(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  long *local_60 [4];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x460));
  if (*(int *)(param_2 + 0x38) < 1) {
    plVar7 = *(long **)(param_2 + 0x118);
LAB_00d9ce38:
    if (plVar7 != (long *)0x0) {
      local_60[0] = (long *)plVar7[3];
      if (local_60[0] == (long *)0x0) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = local_60[0] + 5;
        do {
          lVar5 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        plVar9 = local_60[0];
      }
      if (((((char)plVar9[0xb] == '\0') && (*(char *)((long)plVar9 + 0x59) == '\0')) &&
          (*(char *)((long)plVar9 + 0x61) == '\0')) && ((char)plVar9[0xc] == '\0')) {
        FUN_00d9d0d0(param_1,plVar9);
        if ((char)plVar9[0xb] == '\0') {
          plVar7 = (long *)*plVar7;
        }
        else {
          plVar7 = (long *)FUN_00d9da84(param_2 + 0xe8,plVar7);
        }
      }
      else {
        if (*(ulong *)(param_2 + 0x158) < *(ulong *)(param_2 + 0x160)) {
          FUN_00d9d954();
        }
        else {
          FUN_00d9de78(param_2 + 0x150,local_60);
        }
        plVar7 = (long *)FUN_00d9da84(param_2 + 0xe8,plVar7);
        if (plVar9 == (long *)0x0) goto LAB_00d9ce38;
      }
      plVar1 = plVar9 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      goto LAB_00d9ce38;
    }
    plVar7 = *(long **)(param_2 + 0x150);
    if (plVar7 != *(long **)(param_2 + 0x158)) {
      do {
        FUN_00d9d0d0(param_1,*plVar7);
        if (*(char *)(*plVar7 + 0x58) == '\0') {
          plVar7 = plVar7 + 1;
        }
        else {
          plVar7 = (long *)FUN_00d9d6fc(param_2 + 0x150,plVar7);
        }
      } while (plVar7 != *(long **)(param_2 + 0x158));
    }
    plVar9 = *(long **)(param_2 + 0xb8);
    for (plVar7 = *(long **)(param_2 + 0xb0); plVar7 != plVar9; plVar7 = plVar7 + 1) {
      lVar5 = *plVar7;
      if (((*(char *)(lVar5 + 0x25) != '\0') && (*(int *)(lVar5 + 0x28) == 2)) &&
         (fVar10 = *(float *)(lVar5 + 0x2c) - (float)param_1, *(float *)(lVar5 + 0x2c) = fVar10,
         fVar10 <= 0.0)) {
        *(undefined4 *)(lVar5 + 0x2c) = 0;
        FUN_0159c22c(lVar5,lVar5 + 0x30,0);
      }
    }
    if (((*(char *)(param_2 + 0x3c) == '\0') && (lVar5 = *(long *)(param_2 + 0x30), lVar5 != 0)) &&
       (*(char *)(lVar5 + 0x25) == '\0')) {
      for (plVar7 = *(long **)(param_2 + 0xb0);
          (plVar7 != *(long **)(param_2 + 0xb8) && (lVar8 = *plVar7, *(int *)(lVar8 + 0x20) < 1));
          plVar7 = plVar7 + 1) {
        if ((*(char *)(lVar8 + 0x24) != '\0') && (*(char *)(lVar8 + 0x25) == '\0')) {
          FUN_0159bf78(local_60,param_2 + 0x188,lVar5,lVar8,0,0);
          uVar6 = FUN_015eb3a0(lVar8,local_60);
          if ((uVar6 & 1) == 0) {
            lVar8 = 0;
          }
          *(long *)(param_2 + 0x30) = lVar8;
          goto LAB_00d9cf64;
        }
      }
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
  }
LAB_00d9cf64:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x460));
  return;
}


