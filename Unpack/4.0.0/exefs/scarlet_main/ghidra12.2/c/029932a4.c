/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029932a4; name: FUN_029932a4
 */


uint FUN_029932a4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  if ((*(byte *)(param_1 + 0x9e) & 1) == 0) {
    plVar11 = *(long **)(param_1 + 0x138);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      if (*(long *)(lVar10 + 0x10) == 0) {
LAB_0299356c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
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
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar8;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_02993480;
      plVar12 = *(long **)(param_1 + 0x138);
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[6];
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0299356c;
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
        else if (sVar2 == -1) {
LAB_02993480:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      uVar7 = (**(code **)(*plVar12 + 0x68))(plVar12);
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[6];
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
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar2 == 0) goto LAB_029934cc;
      }
      lVar10 = plVar11[6];
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
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar2 == 0) {
LAB_029934cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if ((uVar7 & 1) != 0) {
        *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 1;
        FUN_02993238(param_1);
      }
    }
  }
  else if ((*(byte *)(param_1 + 0x9e) >> 1 & 1) != 0) {
    uVar5 = 1;
    goto LAB_02993398;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    FUN_0299358c();
    FUN_029935e0(*(undefined8 *)(param_1 + 0x148));
  }
  lVar10 = *(long *)(param_1 + 0xb8);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    pcVar9 = *(code **)(lVar10 + 0xd0);
    if ((*(ulong *)(lVar10 + 0xd8) & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar10 + ((long)*(ulong *)(lVar10 + 0xd8) >> 1)));
    }
    uVar5 = (*pcVar9)();
  }
  lVar10 = *(long *)(param_1 + 0xc0);
  if (lVar10 != 0) {
    pcVar9 = *(code **)(lVar10 + 0xd0);
    if ((*(ulong *)(lVar10 + 0xd8) & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar10 + ((long)*(ulong *)(lVar10 + 0xd8) >> 1)));
    }
    uVar6 = (*pcVar9)();
    uVar5 = uVar5 | uVar6;
  }
  lVar10 = *(long *)(param_1 + 200);
  if (lVar10 != 0) {
    pcVar9 = *(code **)(lVar10 + 0xd0);
    if ((*(ulong *)(lVar10 + 0xd8) & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar10 + ((long)*(ulong *)(lVar10 + 0xd8) >> 1)));
    }
    uVar6 = (*pcVar9)();
    uVar5 = uVar5 | uVar6;
  }
  lVar10 = *(long *)(param_1 + 0xd0);
  if (lVar10 != 0) {
    pcVar9 = *(code **)(lVar10 + 0xd0);
    if ((*(ulong *)(lVar10 + 0xd8) & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar10 + ((long)*(ulong *)(lVar10 + 0xd8) >> 1)));
    }
    uVar6 = (*pcVar9)();
    uVar5 = uVar5 | uVar6;
  }
  lVar10 = *(long *)(param_1 + 0xd8);
  if (lVar10 != 0) {
    pcVar9 = *(code **)(lVar10 + 0xd0);
    if ((*(ulong *)(lVar10 + 0xd8) & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar10 + ((long)*(ulong *)(lVar10 + 0xd8) >> 1)));
    }
    uVar6 = (*pcVar9)();
    uVar5 = uVar5 | uVar6;
  }
  FUN_0299380c(param_1);
LAB_02993398:
  return uVar5 & 1;
}


