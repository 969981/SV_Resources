/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02127938; name: FUN_02127938
 */


void FUN_02127938(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  short sVar6;
  long *plVar7;
  long *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long local_48 [3];
  long ***ppplStack_30;
  long **local_28;
  
  local_68 = *(undefined8 *)(param_1 + 0x110);
  uStack_60 = *(undefined8 *)(param_1 + 0x118);
  local_58 = *(undefined8 *)(param_1 + 0x120);
  plVar7 = *(long **)(param_1 + 0x128);
  local_50 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_48[0] = 0;
    local_48[1] = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(local_48,param_1 + 0x30,&local_68);
    plVar7 = local_50;
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (local_48[0] != 0) {
    if (*(short *)(local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_48[0] + 0x1a);
      sVar6 = *(short *)(local_48[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar6) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_021279fc;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_021279fc:
          bVar5 = false;
        }
        if (bVar5) {
          lVar4 = *(long *)(local_48[0] + 0x10);
          if (lVar4 == 0) goto LAB_02127a88;
          local_48[2] = -0x268fe8ca75e210a0;
          local_70 = FUN_02127ad8(param_1,local_48 + 2);
          if (local_70 != 0) {
            local_78 = &local_70;
            local_28 = &local_78;
            local_48[2] = lVar4 + 0xe0;
            ppplStack_30 = &local_28;
            FUN_02127bec(local_48[2],local_48 + 2);
          }
          (**(code **)(*(long *)(lVar4 + -0x28) + 0x60))((long *)(lVar4 + -0x28));
          break;
        }
        sVar6 = sVar2;
      } while (sVar2 != 0);
      if (local_48[0] == 0) {
        return;
      }
    }
LAB_02127a88:
    psVar1 = (short *)(local_48[0] + 0x18);
    do {
      sVar6 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar6 == 1) {
      FUN_0116e168();
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


