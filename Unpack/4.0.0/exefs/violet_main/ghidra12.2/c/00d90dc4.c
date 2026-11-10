/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d90dc4; name: FUN_00d90dc4
 */


undefined8 FUN_00d90dc4(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  
  plVar8 = *(long **)(param_2 + 0x78);
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00d90fb0:
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
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00d90fd0;
    lVar10 = plVar8[6];
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
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) goto LAB_00d90ff8;
    plVar8 = *(long **)(param_2 + 0x78);
    if (plVar8 == (long *)0x0) {
      plVar5 = (long *)FUN_00cbcfa8(0);
    }
    else {
      lVar10 = plVar8[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00d90fb0;
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
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar7;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_00d90fd0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar5 = (long *)FUN_00cbcfa8(plVar8);
      lVar10 = plVar8[6];
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
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
LAB_00d90ff8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (plVar5 != (long *)0x0) {
      iVar9 = 0;
      plVar8 = plVar5;
      do {
        plVar8 = (long *)plVar8[0xd];
        if (plVar8 == (long *)0x0) {
          iVar9 = 0;
          break;
        }
        iVar9 = iVar9 + 1;
        uVar6 = (**(code **)(*plVar8 + 0x118))(plVar8);
      } while ((uVar6 & 1) != 0);
      uVar6 = 1;
      do {
        if ((uVar6 & 1) == 0) {
          return 1;
        }
        if (iVar9 == 0) {
          uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,param_1 + 8);
        }
        else {
          iVar9 = iVar9 + -1;
          uVar6 = 1;
        }
        plVar5 = (long *)plVar5[0xd];
      } while (plVar5 != (long *)0x0);
      return 1;
    }
  }
  return 0;
}


