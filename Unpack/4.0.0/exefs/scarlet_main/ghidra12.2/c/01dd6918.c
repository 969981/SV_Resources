/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd6918; name: FUN_01dd6918
 */


void FUN_01dd6918(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8 [2];
  char local_a8 [8];
  long *local_a0;
  undefined1 auStack_98 [24];
  long *local_80;
  undefined1 auStack_78 [24];
  long *local_60;
  undefined1 auStack_58 [24];
  long *local_40;
  int local_34;
  
  uVar9 = (ulong)*(byte *)(param_1 + param_4 + 0xb38);
  if (param_3 == 1) {
    uVar8 = 0xa8;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    uVar8 = uVar9;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1 + uVar8 * 0x10 + 0x38;
  local_34 = param_2;
  if (param_2 == 0) {
    FUN_0135d26c(auStack_58,lVar1);
    FUN_01dcc3c4(uVar10,auStack_58,0);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (param_3 == 1) {
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      FUN_0135d26c(auStack_78,param_1 + 0xad0);
      FUN_01dcc3c4(uVar10,auStack_78,0);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
    }
  }
  else {
    FUN_0135d26c(auStack_98,lVar1);
    FUN_01dcc3c4(uVar10,auStack_98,1);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    FUN_01967b00(&local_c0);
    FUN_01a85608(local_b8,local_c0);
    FUN_01de9abc(local_a8,local_b8,&local_34);
    if (local_b8[0] != 0) {
      psVar2 = (short *)(local_b8[0] + 0x18);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        FUN_0116e168();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_c0 != (long *)0x0) {
      plVar7 = local_c0 + 5;
      do {
        lVar1 = *plVar7;
        iVar6 = (int)lVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      else if ((int)lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (param_3 == 1) {
      local_c8 = local_a0;
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
      FUN_01dc1b80(0xa9,&local_c8);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      local_d0 = local_a0;
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
      FUN_01dc1b80(0xa8,&local_d0);
      plVar7 = local_d0;
    }
    else {
      local_d8 = local_a0;
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
      FUN_01dc1b80(uVar9,&local_d8);
      plVar7 = local_d8;
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((local_a8[0] != '\0') && (local_a0 != (long *)0x0)) {
      (**(code **)(*local_a0 + 0x20))(local_a0);
    }
  }
  return;
}


