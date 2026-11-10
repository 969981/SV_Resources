/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dcb5a4; name: FUN_00dcb5a4
 */


undefined8 FUN_00dcb5a4(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long **local_48 [2];
  long *local_38;
  
  local_48[0] = &local_38;
  local_38 = (long *)0x0;
  if ((char)param_2[0x10] != '\0') {
    local_38 = param_2;
  }
  plVar7 = (long *)param_2[0xf];
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00dcb7c4:
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
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar6;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00dcb7e4;
    lVar10 = plVar7[6];
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
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar2 == 0) goto LAB_00dcb80c;
    plVar7 = (long *)param_2[0xf];
    if (plVar7 == (long *)0x0) {
      FUN_00cf6940(0,local_48);
    }
    else {
      lVar10 = plVar7[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00dcb7c4;
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
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar6;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_00dcb7e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      FUN_00cf6940(plVar7,local_48);
      lVar10 = plVar7[6];
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
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar2 == 0) {
LAB_00dcb80c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  plVar7 = local_38;
  if (local_38 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar9 = 0;
    plVar8 = local_38;
    do {
      plVar8 = (long *)plVar8[0xd];
      if (plVar8 == (long *)0x0) {
        iVar9 = 0;
        break;
      }
      iVar9 = iVar9 + 1;
      uVar5 = (**(code **)(*plVar8 + 0x118))(plVar8);
    } while ((uVar5 & 1) != 0);
    uVar5 = 1;
    do {
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      if (iVar9 == 0) {
        uVar5 = (**(code **)(*plVar7 + 0x108))(plVar7,param_1 + 8);
      }
      else {
        iVar9 = iVar9 + -1;
        uVar5 = 1;
      }
      plVar7 = (long *)plVar7[0xd];
      uVar6 = 1;
    } while (plVar7 != (long *)0x0);
  }
  return uVar6;
}


