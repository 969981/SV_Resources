/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bd9578; name: FUN_02bd9578
 */


undefined8 FUN_02bd9578(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_70 [16];
  long *local_60;
  char local_58 [32];
  long *local_38;
  long *local_18;
  
  if (*(char *)(param_2 + 0x50) == '\0') {
    return 1;
  }
  FUN_00c5ecb4(&local_18,*(undefined8 *)*param_1);
  if (local_18 == (long *)0x0) {
    return 1;
  }
  lVar8 = *(long *)param_1[4];
  plVar4 = (long *)FUN_00dafa58(*(undefined8 *)param_1[1],param_1[2],*(undefined4 *)param_1[3]);
  if (*plVar4 == 0) {
LAB_02bd9760:
    local_58[0] = '\0';
  }
  else {
    FUN_00db3d00(local_58,*plVar4,DAT_0485a0d8 + 0x38,lVar8 + 0x30,param_2 + 8);
    if (local_58[0] != '\0') {
      FUN_00c5ecb4(&local_60,*(undefined8 *)*param_1,local_58);
      if (local_60 != (long *)0x0) {
        iVar3 = (**(code **)(*(long *)(*(long *)(local_18[0x15] + 0xf8) + 0x30) + 0x38))();
        if (iVar3 != 0) {
          iVar7 = 0;
          do {
            plVar4 = (long *)(*(long *)(local_18[0x15] + 0xf8) + 0x30);
            uVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar7);
            uVar6 = (**(code **)(*(long *)(local_18[7] + 0x30) + 0x48))
                              ((long *)(local_18[7] + 0x30),auStack_70,uVar5);
            if ((uVar6 & 1) != 0) {
              (**(code **)(*(long *)(local_60[7] + 0x30) + 0x20))
                        ((long *)(local_60[7] + 0x30),uVar5,auStack_70);
            }
            iVar7 = iVar7 + 1;
          } while (iVar3 != iVar7);
        }
        iVar3 = (**(code **)(*(long *)(*(long *)(local_18[0x15] + 0xf8) + 0x30) + 0x48))();
        if (iVar3 != 0) {
          iVar7 = 0;
          do {
            plVar4 = (long *)(*(long *)(local_18[0x15] + 0xf8) + 0x30);
            uVar5 = (**(code **)(*plVar4 + 0x70))(plVar4,iVar7);
            uVar6 = (**(code **)(*(long *)(local_18[7] + 0x30) + 0x58))
                              ((long *)(local_18[7] + 0x30),auStack_70,uVar5);
            if ((uVar6 & 1) != 0) {
              (**(code **)(*(long *)(local_60[7] + 0x30) + 0x30))
                        ((long *)(local_60[7] + 0x30),uVar5,auStack_70);
            }
            iVar7 = iVar7 + 1;
          } while (iVar3 != iVar7);
        }
        if (local_60 != (long *)0x0) {
          plVar4 = local_60 + 5;
          do {
            lVar8 = *plVar4;
            iVar3 = (int)lVar8 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *(int *)plVar4 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
          else if ((int)lVar8 == 0) goto LAB_02bd97d0;
        }
      }
      if (local_58[0] != '\0') {
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
        goto LAB_02bd9760;
      }
    }
  }
  if (local_18 != (long *)0x0) {
    plVar4 = local_18 + 5;
    do {
      lVar8 = *plVar4;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_02bd97d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 1;
}


