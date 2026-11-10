/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4b2f8; name: FUN_00c4b2f8
 */


uint FUN_00c4b2f8(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_38;
  
  iVar2 = *(int *)(param_1 + 0x158);
  uVar7 = FUN_00c4bccc();
  if (((uVar7 & 1) != 0) || (iVar2 != 0)) {
    plVar10 = *(long **)(param_1 + 0x88);
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar10 != plVar1) {
      if (iVar2 == 0) {
        uVar6 = 0;
        do {
          lVar8 = *plVar10;
          if (*(long *)(param_1 + 0xc0) == 0) {
            local_38 = (long *)0x0;
          }
          else {
            local_38 = *(long **)(*(long *)(param_1 + 0xc0) + 0x398);
            if (local_38 != (long *)0x0) {
              plVar9 = local_38 + 5;
              do {
                lVar5 = *plVar9;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar4) {
                  *(int *)plVar9 = (int)lVar5 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((int)lVar5 == -1) {
LAB_00c4b4f8:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
            }
          }
          (**(code **)(*(long *)(lVar8 + 0x30) + 0x60))((long *)(lVar8 + 0x30),&local_38);
          if (local_38 != (long *)0x0) {
            plVar9 = local_38 + 5;
            do {
              lVar8 = *plVar9;
              iVar2 = (int)lVar8 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *(int *)plVar9 = iVar2;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 == 0) {
              (**(code **)(*local_38 + 0x10))();
            }
            else if ((int)lVar8 == 0) {
LAB_00c4b520:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          (**(code **)(*(long *)(*plVar10 + 0x30) + 0x68))
                    ((long *)(*plVar10 + 0x30),param_1 + 0x100,param_1 + 0x1d0,param_1 + 0x208);
          plVar9 = plVar10 + 1;
          uVar6 = (**(code **)(*(long *)(*plVar10 + 0x30) + 0x28))((long *)(*plVar10 + 0x30),uVar6);
          plVar10 = plVar9;
        } while (plVar9 != plVar1);
      }
      else {
        uVar6 = 0;
        do {
          lVar8 = *plVar10;
          if (*(long *)(param_1 + 0xc0) == 0) {
            local_38 = (long *)0x0;
          }
          else {
            local_38 = *(long **)(*(long *)(param_1 + 0xc0) + 0x398);
            if (local_38 != (long *)0x0) {
              plVar9 = local_38 + 5;
              do {
                lVar5 = *plVar9;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar4) {
                  *(int *)plVar9 = (int)lVar5 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((int)lVar5 == -1) goto LAB_00c4b4f8;
            }
          }
          (**(code **)(*(long *)(lVar8 + 0x30) + 0x60))((long *)(lVar8 + 0x30),&local_38);
          if (local_38 != (long *)0x0) {
            plVar9 = local_38 + 5;
            do {
              lVar8 = *plVar9;
              iVar2 = (int)lVar8 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *(int *)plVar9 = iVar2;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 == 0) {
              (**(code **)(*local_38 + 0x10))();
            }
            else if ((int)lVar8 == 0) goto LAB_00c4b520;
          }
          lVar8 = *plVar10;
          *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x20;
          (**(code **)(*(long *)(lVar8 + 0x30) + 0x68))
                    ((long *)(lVar8 + 0x30),param_1 + 0x100,param_1 + 0x1d0,param_1 + 0x208);
          plVar9 = plVar10 + 1;
          uVar6 = (**(code **)(*(long *)(*plVar10 + 0x30) + 0x28))((long *)(*plVar10 + 0x30),uVar6);
          plVar10 = plVar9;
        } while (plVar9 != plVar1);
      }
      return uVar6 & 0x7f;
    }
  }
  return 0;
}


