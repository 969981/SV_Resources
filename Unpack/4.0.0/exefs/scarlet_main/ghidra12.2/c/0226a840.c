/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226a840; name: FUN_0226a840
 */


void FUN_0226a840(long param_1,undefined4 *param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  byte local_44 [4];
  
  FUN_0226ad78(&local_50,*(undefined8 *)(param_1 + 0xb8),(undefined8 *)(param_1 + 0xb8));
  *(undefined4 *)(local_50 + 0x97) = *param_2;
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  local_58 = local_50;
  if (local_50 != (long *)0x0) {
    lVar10 = local_50[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0226aba8;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar8;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0226abc8;
  }
  FUN_01541670(uVar9,0,&local_58);
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0226ab80;
  }
  bVar5 = FUN_01540d28(local_50);
  plVar7 = (long *)FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
  uVar6 = (**(code **)(*plVar7 + 0xb8))();
  local_60 = *(long **)(param_1 + 0xb0);
  if (local_60 != (long *)0x0) {
    lVar10 = local_60[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0226aba8;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0226abc8;
  }
  FUN_01541698(param_3,&local_60,param_2,bVar5 & 1,uVar6 & 1);
  if (local_60 != (long *)0x0) {
    lVar10 = local_60[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0226ab80;
  }
  lVar10 = FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
  if (lVar10 != 0) {
    plVar7 = (long *)FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
    uVar6 = (**(code **)(*plVar7 + 0xb8))();
    local_68 = *(long **)(param_1 + 0xb0);
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[6];
      if (*(long *)(lVar10 + 0x10) == 0) {
LAB_0226aba8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar9;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_0226abc8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01541698(param_3,&local_68,param_2,bVar5 & 1,uVar6 & 1);
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0226ab80;
    }
  }
  FUN_01541c30(param_1,local_50);
  if (*(code **)(param_1 + 0x260) != (code *)0x0) {
    local_44[0] = bVar5 & 1;
    (**(code **)(param_1 + 0x260))(param_1 + 0x280,param_2,local_44);
  }
  if (local_50 != (long *)0x0) {
    lVar10 = local_50[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))(local_50);
    }
    else if (sVar2 == 0) {
LAB_0226ab80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


