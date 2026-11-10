/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a9308; name: FUN_019a9308
 */


void FUN_019a9308(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar9 = (long *)*param_2;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar8;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar7 = (long *)(**(code **)plVar9[5])();
    if (((*PTR_DAT_047e2f68 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047e2f68), iVar6 != 0)) {
      uVar8 = FUN_029024a0();
      *(undefined8 *)PTR_DAT_047e2f70 = uVar8;
      __cxa_guard_release(PTR_DAT_047e2f68);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_047e2f70) {
        plVar7 = (long *)(param_1 + 0x40);
        goto LAB_019a93b0;
      }
    }
    plVar7 = (long *)(param_1 + 0x78);
LAB_019a93b0:
    lVar11 = plVar9[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    plVar9 = (long *)*plVar7;
    plVar10 = (long *)plVar7[1];
    if (plVar9 != plVar10) {
      if (*plVar9 != *param_2) {
        do {
          plVar9 = plVar9 + 1;
          if (plVar10 == plVar9) {
            plVar9 = plVar10;
            goto LAB_019a940c;
          }
        } while (*plVar9 != *param_2);
      }
    }
LAB_019a940c:
    if (plVar10 != plVar9) {
      plVar12 = (long *)plVar7[1];
      plVar10 = plVar9;
      if (plVar9 + 1 != plVar12) {
        do {
          plVar9 = plVar10 + 1;
          FUN_019a9588(plVar10,plVar9);
          plVar2 = plVar10 + 2;
          plVar10 = plVar9;
        } while (plVar2 != plVar12);
      }
      FUN_019a9620(plVar7,plVar9);
      return;
    }
  }
  return;
}


