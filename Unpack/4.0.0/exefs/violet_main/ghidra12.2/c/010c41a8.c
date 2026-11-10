/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010c41a8; name: FUN_010c41a8
 */


void FUN_010c41a8(long *param_1,long *param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *local_38;
  long *local_30;
  long *local_28;
  
  local_30 = (long *)*param_2;
  if (local_30 != (long *)0x0) {
    lVar9 = local_30[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_010c4404;
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar6;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_010c4424;
  }
  (**(code **)(*param_1 + 0x68))(&local_28,param_1,&local_30);
  if (local_30 != (long *)0x0) {
    lVar9 = local_30[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_30 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_010c4338;
  }
  local_38 = local_28;
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_010c4404:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar6;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_010c4424:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  lVar9 = param_1[0xc];
  lVar7 = param_1[0xd];
  uVar2 = 0;
  if (lVar7 - lVar9 != 0) {
    uVar2 = (lVar7 - lVar9) * 0x40 - 1;
  }
  uVar8 = param_1[0x14] + param_1[0x13];
  if (uVar2 == uVar8) {
    FUN_010c444c(param_1 + 0xb);
    uVar8 = param_1[0x13] + param_1[0x14];
    lVar9 = param_1[0xc];
    lVar7 = param_1[0xd];
  }
  if (lVar7 == lVar9) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8;
  }
  FUN_010c3de0(param_1 + 0x15,lVar9,&local_38);
  param_1[0x14] = param_1[0x14] + 1;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_010c4338;
  }
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_010c4338:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


