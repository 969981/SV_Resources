/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02250e48; name: FUN_02250e48
 */


void FUN_02250e48(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  long *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long local_48 [2];
  long local_38;
  undefined8 ***pppuStack_30;
  long **local_28;
  
  puVar4 = (undefined8 *)FUN_0140f310();
  local_68 = *puVar4;
  uStack_60 = puVar4[1];
  local_58 = puVar4[2];
  local_50 = (long *)puVar4[3];
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x18))();
  }
  FUN_0140f318(local_48,param_1,&local_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48[0] != 0) {
    if (*(short *)(local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_48[0] + 0x1a);
      sVar7 = *(short *)(local_48[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_02250ef8;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02250ef8:
          bVar6 = false;
        }
        if (bVar6) {
          lVar5 = *(long *)(local_48[0] + 0x10);
          if (lVar5 == 0) goto LAB_02250f84;
          local_38 = -0x268fe8ca75e210a0;
          local_70 = FUN_02127ad8(param_1,&local_38);
          if (local_70 != 0) {
            local_78 = &local_70;
            local_28 = &local_78;
            local_38 = lVar5 + 0xe0;
            pppuStack_30 = &local_28;
            FUN_02250fd4(local_38,&local_38);
          }
          (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))((long *)(lVar5 + -0x28));
          break;
        }
        sVar7 = sVar2;
      } while (sVar2 != 0);
      if (local_48[0] == 0) {
        return;
      }
    }
LAB_02250f84:
    psVar1 = (short *)(local_48[0] + 0x18);
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
      FUN_0116e168();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


