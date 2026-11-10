/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0224e8f4; name: FUN_0224e8f4
 */


void FUN_0224e8f4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  undefined4 uVar11;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long local_50 [2];
  
  puVar5 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar5;
  uStack_68 = puVar5[1];
  local_60 = puVar5[2];
  local_58 = (long *)puVar5[3];
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
      sVar10 = *(short *)(local_50[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar10) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0224e9b4;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0224e9b4:
          bVar9 = false;
        }
        if (bVar9) {
          lVar8 = *(long *)(local_50[0] + 0x10);
          if (lVar8 == 0) goto LAB_0224eb70;
          lVar6 = FUN_0157776c(lVar8 + 0xe0,&local_90);
          if (lVar6 != 0) {
            uVar7 = FUN_017350a8(param_1);
            if ((uVar7 & 1) == 0) {
              local_90 = 0x75b12c5105283bbf;
              uVar11 = FUN_0224d1a8(lVar6);
              puVar5 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_90);
              *(undefined4 *)(puVar5 + 2) = uVar11;
              *puVar5 = PTR_LAB_047dcdf0;
              local_90 = 0x91cbd7d9ff507821;
              pcStack_88 = "ChangeBeginParameter";
              local_80 = 0x14;
              local_78 = (long *)0x0;
              uVar4 = FUN_0141f968(param_1,&local_90);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              if ((uVar4 & 0xff) != 0 && 0xff < uVar4) {
                local_90 = 0x86c63172bb6e923d;
                pcStack_88 = "BeginParamater";
                local_80 = 0xe;
                goto LAB_0224eb24;
              }
            }
            else {
              local_90 = 0xbf23381384443a95;
              pcStack_88 = "ChangeEndParameter";
              local_80 = 0x12;
              local_78 = (long *)0x0;
              uVar4 = FUN_0141f968(param_1,&local_90);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              if ((uVar4 & 0xff) != 0 && 0xff < uVar4) {
                local_90 = 0x622e610f516bf939;
                pcStack_88 = "EndParamater";
                local_80 = 0xc;
LAB_0224eb24:
                local_78 = (long *)0x0;
                uVar7 = FUN_01180d38(param_1,&local_90);
                uVar11 = 0;
                if ((uVar7 & 0xff) != 0) {
                  uVar11 = (int)(uVar7 >> 0x20);
                }
                FUN_0224ebf0(uVar11,lVar6);
                if (local_78 != (long *)0x0) {
                  (**(code **)(*local_78 + 0x20))();
                }
              }
            }
          }
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
          break;
        }
        sVar10 = sVar2;
      } while (sVar2 != 0);
      if (local_50[0] == 0) {
        return;
      }
    }
LAB_0224eb70:
    psVar1 = (short *)(local_50[0] + 0x18);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 1) {
      FUN_0116e168();
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


