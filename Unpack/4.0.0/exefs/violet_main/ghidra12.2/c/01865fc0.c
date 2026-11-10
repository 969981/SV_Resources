/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01865fc0; name: FUN_01865fc0
 */


void FUN_01865fc0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  long *plVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long local_40 [2];
  undefined8 local_18;
  
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar9 = *(long **)(param_1 + 0x128);
  local_48 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40[0] = 0;
    local_40[1] = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(local_40,param_1 + 0x30,&local_60);
    plVar9 = local_48;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_40[0] != 0) {
    if (*(short *)(local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_40[0] + 0x1a);
      sVar8 = *(short *)(local_40[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0186608c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0186608c:
          bVar7 = false;
        }
        if (bVar7) {
          lVar6 = *(long *)(local_40[0] + 0x10);
          if (lVar6 == 0) goto LAB_0186610c;
          lVar5 = FUN_00f0bb80(lVar6 + 0xe0,&local_18);
          if (lVar5 != 0) {
            local_18 = 0x1d7288a2dd6119c9;
            uVar4 = FUN_01a8906c(param_1,&local_18);
            FUN_011e465c(lVar5,uVar4);
          }
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))((long *)(lVar6 + -0x28));
          break;
        }
        sVar8 = sVar2;
      } while (sVar2 != 0);
      if (local_40[0] == 0) {
        return;
      }
    }
LAB_0186610c:
    psVar1 = (short *)(local_40[0] + 0x18);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      FUN_0116e168();
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


