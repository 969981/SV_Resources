/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109558c; name: FUN_0109558c
 */


void FUN_0109558c(long param_1,uint *param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  byte local_44 [20];
  
  if (*param_2 == 0x20) {
    return;
  }
  uVar6 = nn::hid::GetNpadStyleSet(param_2);
  if (((uVar6 & 1) == 0) || ((*(byte *)(param_1 + 0xa0) & 1) == 0)) {
    if (((uVar6 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0xa0) >> 1 & 1) != 0)) {
      FUN_01540978(param_1,0,param_2,param_3);
      return;
    }
    if (((uVar6 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0xa0) >> 2 & 1) != 0)) {
      FUN_0226a0e0(param_1,param_2,param_3);
      return;
    }
    if (((uVar6 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0xa0) >> 3 & 1) != 0)) {
      FUN_0226a490(param_1,param_2,param_3);
      return;
    }
    if (((uVar6 >> 4 & 1) != 0) && ((*(byte *)(param_1 + 0xa0) >> 4 & 1) != 0)) {
      FUN_0226a840(param_1,param_2,param_3);
      return;
    }
    lVar11 = FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
    if (lVar11 == 0) {
      return;
    }
    plVar8 = (long *)FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
    uVar7 = (**(code **)(*plVar8 + 0xb8))();
    if ((uVar7 & 1) == 0) {
      return;
    }
    plVar8 = (long *)FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
    uVar6 = (**(code **)(*plVar8 + 0xf0))();
    if (uVar6 == *param_2) {
      FUN_01541284(param_1,param_2,param_3);
      return;
    }
    return;
  }
  FUN_01095ab4(&local_50,*(undefined8 *)(param_1 + 0xb8),(undefined8 *)(param_1 + 0xb8));
  *(uint *)(local_50 + 0x97) = *param_2;
  uVar10 = *(undefined8 *)(param_1 + 0xb0);
  local_58 = local_50;
  if (local_50 != (long *)0x0) {
    lVar11 = local_50[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01095a6c;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01095a8c;
  }
  FUN_01541670(uVar10,0,&local_58);
  if (local_58 != (long *)0x0) {
    lVar11 = local_58[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01095a44;
  }
  bVar5 = FUN_01540d28(local_50);
  plVar8 = (long *)FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
  uVar6 = (**(code **)(*plVar8 + 0xb8))();
  local_60 = *(long **)(param_1 + 0xb0);
  if (local_60 != (long *)0x0) {
    lVar11 = local_60[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01095a6c;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar10;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01095a8c;
  }
  FUN_01541698(param_3,&local_60,param_2,bVar5 & 1,uVar6 & 1);
  if (local_60 != (long *)0x0) {
    lVar11 = local_60[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01095a44;
  }
  lVar11 = FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
  if (lVar11 != 0) {
    plVar8 = (long *)FUN_0154164c(*(undefined8 *)(param_1 + 0xb0),0);
    uVar6 = (**(code **)(*plVar8 + 0xb8))();
    local_68 = *(long **)(param_1 + 0xb0);
    if (local_68 != (long *)0x0) {
      lVar11 = local_68[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
LAB_01095a6c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
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
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar10;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01095a8c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01541698(param_3,&local_68,param_2,bVar5 & 1,uVar6 & 1);
    if (local_68 != (long *)0x0) {
      lVar11 = local_68[6];
      psVar1 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01095a44;
    }
  }
  FUN_01541c30(param_1,local_50);
  if (*(code **)(param_1 + 0x260) != (code *)0x0) {
    local_44[0] = bVar5 & 1;
    (**(code **)(param_1 + 0x260))(param_1 + 0x280,param_2,local_44);
  }
  if (local_50 != (long *)0x0) {
    lVar11 = local_50[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))(local_50);
    }
    else if (sVar2 == 0) {
LAB_01095a44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


