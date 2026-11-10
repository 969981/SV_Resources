/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02128e08; name: FUN_02128e08
 */


void FUN_02128e08(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long local_50 [2];
  
  puVar4 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar4;
  uStack_68 = puVar4[1];
  local_60 = puVar4[2];
  local_58 = (long *)puVar4[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_50,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != 0) {
    if (*(short *)(local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_50[0] + 0x1a);
      sVar12 = *(short *)(local_50[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar12) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_02128ed0;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02128ed0:
          bVar11 = false;
        }
        if (bVar11) {
          lVar10 = *(long *)(local_50[0] + 0x10);
          if (lVar10 == 0) goto LAB_02129010;
          lVar5 = FUN_011aa97c(lVar10 + 0xe0,&local_90);
          if (lVar5 != 0) {
            local_90 = 0x1d2b568e64793f5c;
            pcStack_88 = "Probability";
            local_80 = 0xb;
            local_78 = (long *)0x0;
            uVar6 = FUN_01470908(param_1,&local_90);
            uVar8 = 0;
            if ((uVar6 & 0xff) != 0) {
              uVar8 = (undefined4)(uVar6 >> 0x20);
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            local_90 = 0x18d5c74fb28e60e2;
            pcStack_88 = "OverwriteType";
            local_80 = 0xd;
            local_78 = (long *)0x0;
            uVar6 = FUN_01470908(param_1,&local_90);
            iVar9 = 0;
            if ((uVar6 & 0xff) != 0) {
              iVar9 = (int)(uVar6 >> 0x20);
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            if (iVar9 != 0) {
              local_90 = 0x41b0f6d5f5fb32fc;
              pcStack_88 = "RemainTime";
              local_80 = 10;
              local_78 = (long *)0x0;
              uVar7 = FUN_01180d38(param_1,&local_90);
              uVar6 = 0;
              if ((uVar7 & 0xff) != 0) {
                uVar6 = uVar7 >> 0x20;
              }
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              FUN_02129090(uVar6,lVar5,uVar8,iVar9);
            }
          }
          (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
          break;
        }
        sVar12 = sVar2;
      } while (sVar2 != 0);
      if (local_50[0] == 0) {
        return;
      }
    }
LAB_02129010:
    psVar1 = (short *)(local_50[0] + 0x18);
    do {
      sVar12 = *psVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar12 == 1) {
      FUN_0116e168();
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


