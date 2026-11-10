/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c363c; name: FUN_010c363c
 */


uint FUN_010c363c(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_38;
  long *local_30;
  long *local_28;
  
  if (((param_2 & 1) == 0) || (*(long *)(*(long *)(param_1 + 0xb8) + 0xa0) != 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x68))();
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x68))(&local_28);
    if (local_28 == (long *)0x0) goto LAB_010c3664;
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    local_30 = local_28;
    lVar8 = local_28[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_010c3894:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))(*(undefined8 **)(lVar8 + 0x10));
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_010c38b4;
    FUN_010c3f58(uVar6,&local_30);
    if (local_30 != (long *)0x0) {
      lVar8 = local_30[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010c37c8;
    }
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    local_38 = local_28;
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[6];
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_010c3894;
      psVar1 = (short *)(lVar8 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))(*(undefined8 **)(lVar8 + 0x10));
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_010c38b4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_010c41a8(uVar6,&local_38);
    if (local_38 != (long *)0x0) {
      lVar8 = local_38[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010c37c8;
    }
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_010c37c8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar5 = 1;
  }
LAB_010c3664:
  FUN_010c38dc(*(undefined8 *)(param_1 + 0xb8));
  return uVar5 & 1;
}


