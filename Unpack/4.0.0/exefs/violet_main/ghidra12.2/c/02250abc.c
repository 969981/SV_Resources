/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02250abc; name: FUN_02250abc
 */


void FUN_02250abc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  undefined4 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long local_40 [2];
  
  puVar4 = (undefined8 *)FUN_0140f310();
  local_60 = *puVar4;
  uStack_58 = puVar4[1];
  local_50 = puVar4[2];
  local_48 = (long *)puVar4[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_0140f318(local_40,param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40[0] != 0) {
    if (*(short *)(local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_40[0] + 0x1a);
      sVar10 = *(short *)(local_40[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar10) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_02250b74;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02250b74:
          bVar9 = false;
        }
        if (bVar9) {
          lVar7 = *(long *)(local_40[0] + 0x10);
          plVar8 = (long *)(lVar7 + -0x28);
          if (lVar7 == 0) goto LAB_02250d30;
          local_64 = 0;
          local_6c = 0;
          local_90 = (undefined4 *)0x1fcbadfcda875d5;
          pcStack_88 = "RealizingDistance";
          local_80 = 0x11;
          local_78 = (long *)0x0;
          uVar5 = FUN_01180d38(param_1,&local_90);
          local_70 = 0;
          if ((uVar5 & 0xff) != 0) {
            local_70 = (undefined4)(uVar5 >> 0x20);
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (undefined4 *)0xda4843afddb96cf0;
          pcStack_88 = "UnrealizingDistance";
          local_80 = 0x13;
          local_78 = (long *)0x0;
          uVar5 = FUN_01180d38(param_1,&local_90);
          uVar6 = 0;
          if ((uVar5 & 0xff) != 0) {
            uVar6 = (undefined4)(uVar5 >> 0x20);
          }
          local_6c = CONCAT44(local_6c._4_4_,uVar6);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (undefined4 *)0x7fb0150a29fe5d70;
          pcStack_88 = "LoadingDistance";
          local_80 = 0xf;
          local_78 = (long *)0x0;
          uVar5 = FUN_01180d38(param_1,&local_90);
          uVar6 = 0;
          if ((uVar5 & 0xff) != 0) {
            uVar6 = (undefined4)(uVar5 >> 0x20);
          }
          local_6c = CONCAT44(uVar6,(undefined4)local_6c);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (undefined4 *)0x8a99589567308dd5;
          pcStack_88 = "UnloadingDistance";
          local_80 = 0x11;
          local_78 = (long *)0x0;
          uVar5 = FUN_01180d38(param_1,&local_90);
          local_64 = 0;
          if ((uVar5 & 0xff) != 0) {
            local_64 = (undefined4)(uVar5 >> 0x20);
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = &local_70;
          lVar7 = FUN_02127314(plVar8,*(undefined8 *)(lVar7 + -0x20),&local_90);
          if (lVar7 != 0) {
            FUN_0212750c();
            local_90 = (undefined4 *)0xd97017358a1def60;
            puVar4 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_90);
            puVar4[2] = lVar7;
            *puVar4 = PTR_LAB_047dce48;
          }
          (**(code **)(*plVar8 + 0x60))(plVar8);
          break;
        }
        sVar10 = sVar2;
      } while (sVar2 != 0);
      if (local_40[0] == 0) {
        return;
      }
    }
LAB_02250d30:
    psVar1 = (short *)(local_40[0] + 0x18);
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


