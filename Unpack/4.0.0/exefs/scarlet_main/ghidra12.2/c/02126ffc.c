/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02126ffc; name: FUN_02126ffc
 */


void FUN_02126ffc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
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
  
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar8 = *(long **)(param_1 + 0x128);
  local_48 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40[0] = 0;
    local_40[1] = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(local_40,param_1 + 0x30,&local_60);
    plVar8 = local_48;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
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
          if (cVar3 != '\0') goto LAB_021270c8;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_021270c8:
          bVar9 = false;
        }
        if (bVar9) {
          lVar7 = *(long *)(local_40[0] + 0x10);
          plVar8 = (long *)(lVar7 + -0x28);
          if (lVar7 == 0) goto LAB_02127284;
          local_64 = 0;
          local_6c = 0;
          local_90 = (undefined4 *)0x1fcbadfcda875d5;
          pcStack_88 = "RealizingDistance";
          local_80 = 0x11;
          local_78 = (long *)0x0;
          uVar4 = FUN_01180d38(param_1,&local_90);
          local_70 = 0;
          if ((uVar4 & 0xff) != 0) {
            local_70 = (undefined4)(uVar4 >> 0x20);
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (undefined4 *)0xda4843afddb96cf0;
          pcStack_88 = "UnrealizingDistance";
          local_80 = 0x13;
          local_78 = (long *)0x0;
          uVar4 = FUN_01180d38(param_1,&local_90);
          uVar6 = 0;
          if ((uVar4 & 0xff) != 0) {
            uVar6 = (undefined4)(uVar4 >> 0x20);
          }
          local_6c = CONCAT44(local_6c._4_4_,uVar6);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (undefined4 *)0x7fb0150a29fe5d70;
          pcStack_88 = "LoadingDistance";
          local_80 = 0xf;
          local_78 = (long *)0x0;
          uVar4 = FUN_01180d38(param_1,&local_90);
          uVar6 = 0;
          if ((uVar4 & 0xff) != 0) {
            uVar6 = (undefined4)(uVar4 >> 0x20);
          }
          local_6c = CONCAT44(uVar6,(undefined4)local_6c);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = (undefined4 *)0x8a99589567308dd5;
          pcStack_88 = "UnloadingDistance";
          local_80 = 0x11;
          local_78 = (long *)0x0;
          uVar4 = FUN_01180d38(param_1,&local_90);
          local_64 = 0;
          if ((uVar4 & 0xff) != 0) {
            local_64 = (undefined4)(uVar4 >> 0x20);
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          local_90 = &local_70;
          lVar7 = FUN_02127314(plVar8,*(undefined8 *)(lVar7 + -0x20),&local_90);
          if (lVar7 != 0) {
            FUN_0212750c();
            local_90 = (undefined4 *)0xd97017358a1def60;
            puVar5 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_90);
            puVar5[2] = lVar7;
            *puVar5 = PTR_LAB_047dce48;
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
LAB_02127284:
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
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


