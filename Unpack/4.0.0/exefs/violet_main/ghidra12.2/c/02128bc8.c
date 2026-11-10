/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02128bc8; name: FUN_02128bc8
 */


void FUN_02128bc8(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  undefined1 auStack_28 [8];
  
  local_48 = 0x18d5c74fb28e60e2;
  pcStack_40 = "OverwriteType";
  local_38 = 0xd;
  local_30 = (long *)0x0;
  uVar4 = FUN_01470908(param_1,&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (((uVar4 & 0xff) != 0) && ((uVar4 & 0xffffffff00000000) == 0x300000000)) {
    puVar5 = (undefined8 *)FUN_0140f310(param_1);
    local_68 = *puVar5;
    uStack_60 = puVar5[1];
    local_58 = puVar5[2];
    local_50 = (long *)puVar5[3];
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
    FUN_0140f318(&local_48,param_1,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_48 != 0) {
      if (*(short *)(local_48 + 0x1a) != 0) {
        psVar1 = (short *)(local_48 + 0x1a);
        sVar9 = *(short *)(local_48 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar9) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_02128cdc;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02128cdc:
            bVar8 = false;
          }
          if (bVar8) {
            lVar7 = *(long *)(local_48 + 0x10);
            if (lVar7 == 0) goto LAB_02128d30;
            lVar6 = FUN_011aa97c(lVar7 + 0xe0,auStack_28);
            if (lVar6 != 0) {
              FUN_019fdb2c();
            }
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))((long *)(lVar7 + -0x28));
            break;
          }
          sVar9 = sVar2;
        } while (sVar2 != 0);
        if (local_48 == 0) {
          return;
        }
      }
LAB_02128d30:
      psVar1 = (short *)(local_48 + 0x18);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        FUN_0116e168();
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


