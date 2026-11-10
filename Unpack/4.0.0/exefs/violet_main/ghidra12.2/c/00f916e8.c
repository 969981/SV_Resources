/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f916e8; name: FUN_00f916e8
 */


void FUN_00f916e8(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  undefined8 uVar8;
  long *local_38;
  long local_30 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = *(undefined8 *)(param_2 + 8);
  FUN_00f932f8(local_30,uVar8);
  if ((local_30[0] != 0) && (*(short *)(local_30[0] + 0x1a) != 0)) {
    psVar1 = (short *)(local_30[0] + 0x1a);
    sVar7 = *(short *)(local_30[0] + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00f9176c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f9176c:
        bVar6 = false;
      }
      if (bVar6) {
        local_38 = (long *)(*(long *)(local_30[0] + 0x10) + -0x28);
        plVar4 = (long *)0x0;
        if (*(long *)(local_30[0] + 0x10) != 0) {
          FUN_00f91650(param_1,&local_38);
          param_1[1] = uVar8;
          plVar4 = local_38;
          if (local_38 != (long *)0x0) {
            lVar5 = local_38[6];
            psVar1 = (short *)(lVar5 + 0x1a);
            do {
              sVar7 = *psVar1;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar7 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*local_38 + 0x50))();
              plVar4 = local_38;
            }
            else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        goto LAB_00f91720;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  local_38 = (long *)0x0;
  plVar4 = local_38;
LAB_00f91720:
  local_38 = plVar4;
  FUN_00f91540(local_30);
  return;
}


