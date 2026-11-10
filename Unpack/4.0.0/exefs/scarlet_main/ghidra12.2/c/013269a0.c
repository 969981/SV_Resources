/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013269a0; name: FUN_013269a0
 */


void FUN_013269a0(long *param_1,long *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  plVar6 = (long *)(**(code **)param_1[5])(param_1 + 5);
  if (((*PTR_DAT_047dd040 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047dd040), iVar5 != 0))
  {
    uVar8 = FUN_00ea2d24();
    *(undefined8 *)PTR_DAT_047dd048 = uVar8;
    __cxa_guard_release(PTR_DAT_047dd040);
  }
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    if (plVar6 == (long *)PTR_DAT_047dd048) {
      uVar7 = (**(code **)(*param_1 + 0x130))(param_1);
      if (((uVar7 & 1) != 0) && (*(long *)(*param_2 + 0x40) != param_1[8])) {
        uVar7 = param_1[0x1a];
        if ((~(uint)uVar7 & 0xf) == 0) {
          (**(code **)(*param_1 + 0xe0))(param_1,0);
          uVar7 = param_1[0x1a];
        }
        param_1[0x1a] = uVar7 & 0xfffffffffffffffb;
      }
      break;
    }
  }
  plVar6 = (long *)param_1[0xf];
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_01326da8;
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01326dc8;
    lVar9 = plVar6[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) goto LAB_01326c98;
    plVar6 = (long *)param_1[0xf];
    if (plVar6 == (long *)0x0) {
      FUN_00f09134(0,param_2,1);
    }
    else {
      lVar9 = plVar6[6];
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_01326da8;
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01326dc8;
      FUN_00f09134(plVar6,param_2,1);
      lVar9 = plVar6[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      else if (sVar2 == 0) goto LAB_01326c98;
    }
  }
  if (((param_3 & 1) == 0) || (plVar6 = (long *)param_1[0xe], plVar6 == (long *)0x0)) {
    return;
  }
  lVar9 = plVar6[6];
  if (*(long *)(lVar9 + 0x10) != 0) {
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01326dc8;
    lVar9 = plVar6[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) goto LAB_01326c98;
    plVar6 = (long *)param_1[0xe];
    if (plVar6 == (long *)0x0) {
      FUN_00f09134(0,param_2,1);
      return;
    }
    lVar9 = plVar6[6];
    if (*(long *)(lVar9 + 0x10) != 0) {
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01326dc8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      FUN_00f09134(plVar6,param_2,1);
      lVar9 = plVar6[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01326da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x50))(plVar6);
        return;
      }
      if (sVar2 != 0) {
        return;
      }
LAB_01326c98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01326da8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


