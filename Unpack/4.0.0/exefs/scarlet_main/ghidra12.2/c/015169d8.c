/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015169d8; name: FUN_015169d8
 */


void FUN_015169d8(long param_1,undefined8 *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar6 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  if (((*PTR_DAT_047dd040 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047dd040), iVar5 != 0))
  {
    uVar7 = FUN_00ea2d24();
    *(undefined8 *)PTR_DAT_047dd048 = uVar7;
    __cxa_guard_release(PTR_DAT_047dd040);
  }
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if (plVar6 == (long *)PTR_DAT_047dd048) {
      if ((*(long *)(param_1 + 0x40) == param_2[1]) && (*(long *)*param_2 == 0)) {
        *(long *)*param_2 = param_1;
      }
      break;
    }
  }
  plVar6 = *(long **)(param_1 + 0x78);
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01516da4;
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
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01516dc4;
    lVar8 = plVar6[6];
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
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) goto LAB_01516c7c;
    plVar6 = *(long **)(param_1 + 0x78);
    if (plVar6 == (long *)0x0) {
      FUN_010827f4(0,param_2,1);
    }
    else {
      lVar8 = plVar6[6];
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01516da4;
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
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01516dc4;
      FUN_010827f4(plVar6,param_2,1);
      lVar8 = plVar6[6];
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
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      else if (sVar2 == 0) goto LAB_01516c7c;
    }
  }
  if (((param_3 & 1) == 0) || (plVar6 = *(long **)(param_1 + 0x70), plVar6 == (long *)0x0)) {
    return;
  }
  lVar8 = plVar6[6];
  if (*(long *)(lVar8 + 0x10) != 0) {
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
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01516dc4;
    lVar8 = plVar6[6];
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
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) goto LAB_01516c7c;
    plVar6 = *(long **)(param_1 + 0x70);
    if (plVar6 == (long *)0x0) {
      FUN_010827f4(0,param_2,1);
      return;
    }
    lVar8 = plVar6[6];
    if (*(long *)(lVar8 + 0x10) != 0) {
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
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01516dc4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      FUN_010827f4(plVar6,param_2,1);
      lVar8 = plVar6[6];
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
                    /* WARNING: Could not recover jumptable at 0x01516d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x50))(plVar6);
        return;
      }
      if (sVar2 != 0) {
        return;
      }
LAB_01516c7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01516da4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


