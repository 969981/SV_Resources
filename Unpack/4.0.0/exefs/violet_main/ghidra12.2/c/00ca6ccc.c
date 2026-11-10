/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ca6ccc; name: FUN_00ca6ccc
 */


void FUN_00ca6ccc(long param_1)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  
  plVar8 = DAT_0485a0a0;
  if ((*(byte *)(param_1 + 0x2c) >> 1 & 1) != 0) {
    if (DAT_0485a0a0 != (long *)0x0) {
      plVar1 = DAT_0485a0a0 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    lVar7 = param_1 + 0xf8;
    FUN_00ca7394(lVar7,0);
    uVar9 = FUN_00ca7a88(*(long *)(param_1 + 0x38) + 0x30,lVar7,1);
    pcVar2 = *(char **)(param_1 + 0x40);
    pcVar3 = *(char **)(param_1 + 0x48);
    if (pcVar2 != pcVar3) {
      lVar11 = *(long *)(param_1 + 0x38);
      bVar5 = *pcVar2 != '\0';
      if (bVar5) {
        uVar9 = FUN_00ca6f18(uVar9,lVar7,*(long *)(lVar11 + 0x70) + (long)*(int *)(pcVar2 + 4) * 8,0
                            );
      }
      uVar10 = (uint)bVar5;
      if (pcVar2 + 8 != pcVar3) {
        if (pcVar2[8] != '\0') {
          uVar9 = FUN_00ca6f18(uVar9,lVar7,
                               *(long *)(lVar11 + 0x70) + (long)*(int *)(pcVar2 + 0xc) * 8,uVar10);
          uVar10 = bVar5 + 1;
        }
        if (pcVar2 + 0x10 != pcVar3) {
          if (pcVar2[0x10] != '\0') {
            uVar9 = FUN_00ca6f18(uVar9,lVar7,
                                 *(long *)(lVar11 + 0x70) + (long)*(int *)(pcVar2 + 0x14) * 8,uVar10
                                );
            uVar10 = uVar10 + 1;
          }
          if (pcVar2 + 0x18 != pcVar3) {
            if (pcVar2[0x18] != '\0') {
              uVar9 = FUN_00ca6f18(uVar9,lVar7,
                                   *(long *)(lVar11 + 0x70) + (long)*(int *)(pcVar2 + 0x1c) * 8,
                                   uVar10);
              uVar10 = uVar10 + 1;
            }
            if (pcVar2 + 0x20 != pcVar3) {
              if (pcVar2[0x20] != '\0') {
                uVar9 = FUN_00ca6f18(uVar9,lVar7,
                                     *(long *)(lVar11 + 0x70) + (long)*(int *)(pcVar2 + 0x24) * 8,
                                     uVar10);
                uVar10 = uVar10 + 1;
              }
              for (pcVar2 = pcVar2 + 0x28; pcVar2 != pcVar3; pcVar2 = pcVar2 + 8) {
                if (*pcVar2 != '\0') {
                  uVar9 = FUN_00ca6f18(uVar9,lVar7,
                                       *(long *)(lVar11 + 0x70) + (long)*(int *)(pcVar2 + 4) * 8,
                                       uVar10);
                  uVar10 = uVar10 + 1;
                }
              }
            }
          }
        }
      }
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  FUN_00ca842c(param_1);
  return;
}


