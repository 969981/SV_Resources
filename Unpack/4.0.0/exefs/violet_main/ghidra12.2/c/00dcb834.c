/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dcb834; name: FUN_00dcb834
 */


undefined8 FUN_00dcb834(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long **local_48;
  long lStack_40;
  long *local_38;
  
  local_48 = &local_38;
  local_38 = (long *)0x0;
  lStack_40 = param_1;
  uVar5 = (**(code **)(*param_2 + 0x110))(param_2,param_1 + 8);
  if (((uVar5 & 1) != 0) &&
     (((*(char *)((long)param_2 + 0x82) != '\0' || (*(char *)((long)param_2 + 0x83) != '\0')) &&
      ((~*(uint *)(param_2 + 0x1a) & 0xf) == 0)))) {
    plVar8 = (long *)param_2[0x19];
    if (plVar8 == (long *)0x0) {
      pplVar7 = &local_38;
    }
    else {
      uVar5 = (**(code **)(*plVar8 + 0x80))(plVar8,param_2 + 0x11);
      if ((uVar5 & 1) == 0) goto LAB_00dcb874;
      pplVar7 = local_48;
    }
    if (*pplVar7 == (long *)0x0) {
      *pplVar7 = param_2;
    }
  }
LAB_00dcb874:
  plVar8 = (long *)param_2[0xf];
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00dcbab4:
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
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar6;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00dcbad4;
    lVar11 = plVar8[6];
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
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) goto LAB_00dcbafc;
    plVar8 = (long *)param_2[0xf];
    if (plVar8 == (long *)0x0) {
      FUN_00cf7184(0,&local_48);
    }
    else {
      lVar11 = plVar8[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00dcbab4;
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
        uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar6;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_00dcbad4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      FUN_00cf7184(plVar8,&local_48);
      lVar11 = plVar8[6];
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
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
LAB_00dcbafc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  plVar8 = local_38;
  if (local_38 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar10 = 0;
    plVar9 = local_38;
    do {
      plVar9 = (long *)plVar9[0xd];
      if (plVar9 == (long *)0x0) {
        iVar10 = 0;
        break;
      }
      iVar10 = iVar10 + 1;
      uVar5 = (**(code **)(*plVar9 + 0x118))(plVar9);
    } while ((uVar5 & 1) != 0);
    uVar5 = 1;
    do {
      if ((uVar5 & 1) == 0) {
        return 1;
      }
      if (iVar10 == 0) {
        uVar5 = (**(code **)(*plVar8 + 0x108))(plVar8,param_1 + 8);
      }
      else {
        iVar10 = iVar10 + -1;
        uVar5 = 1;
      }
      plVar8 = (long *)plVar8[0xd];
      uVar6 = 1;
    } while (plVar8 != (long *)0x0);
  }
  return uVar6;
}


