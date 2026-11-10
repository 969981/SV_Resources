/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02994190; name: FUN_02994190
 */


undefined8 FUN_02994190(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if ((*(byte *)(param_1 + 0x9e) & 1) == 0) {
    plVar9 = *(long **)(param_1 + 0x138);
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_02994460:
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
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar6;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_02994374;
      plVar10 = *(long **)(param_1 + 0x138);
      if (plVar10 != (long *)0x0) {
        lVar8 = plVar10[6];
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_02994460;
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
          uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar6;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_02994374:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      uVar5 = (**(code **)(*plVar10 + 0x68))(plVar10);
      if (plVar10 != (long *)0x0) {
        lVar8 = plVar10[6];
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
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar2 == 0) goto LAB_029943c0;
      }
      lVar8 = plVar9[6];
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
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar2 == 0) {
LAB_029943c0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if ((uVar5 & 1) != 0) {
        *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 1;
        FUN_02993238(param_1);
      }
    }
LAB_029941b4:
    lVar8 = *(long *)(param_1 + 0xb8);
    if (lVar8 != 0) {
      pcVar7 = *(code **)(lVar8 + 0xd0);
      if ((*(ulong *)(lVar8 + 0xd8) & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *(long *)(lVar8 + ((long)*(ulong *)(lVar8 + 0xd8) >> 1)));
      }
      uVar5 = (*pcVar7)();
      if ((uVar5 & 1) != 0) goto LAB_029942a0;
    }
    lVar8 = *(long *)(param_1 + 0xc0);
    if (lVar8 != 0) {
      pcVar7 = *(code **)(lVar8 + 0xd0);
      if ((*(ulong *)(lVar8 + 0xd8) & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *(long *)(lVar8 + ((long)*(ulong *)(lVar8 + 0xd8) >> 1)));
      }
      uVar5 = (*pcVar7)();
      if ((uVar5 & 1) != 0) goto LAB_029942a0;
    }
    lVar8 = *(long *)(param_1 + 200);
    if (lVar8 != 0) {
      pcVar7 = *(code **)(lVar8 + 0xd0);
      if ((*(ulong *)(lVar8 + 0xd8) & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *(long *)(lVar8 + ((long)*(ulong *)(lVar8 + 0xd8) >> 1)));
      }
      uVar5 = (*pcVar7)();
      if ((uVar5 & 1) != 0) goto LAB_029942a0;
    }
    lVar8 = *(long *)(param_1 + 0xd0);
    if (lVar8 != 0) {
      pcVar7 = *(code **)(lVar8 + 0xd0);
      if ((*(ulong *)(lVar8 + 0xd8) & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *(long *)(lVar8 + ((long)*(ulong *)(lVar8 + 0xd8) >> 1)));
      }
      uVar5 = (*pcVar7)();
      if ((uVar5 & 1) != 0) goto LAB_029942a0;
    }
    lVar8 = *(long *)(param_1 + 0xd8);
    if (lVar8 != 0) {
      pcVar7 = *(code **)(lVar8 + 0xd0);
      if ((*(ulong *)(lVar8 + 0xd8) & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *(long *)(lVar8 + ((long)*(ulong *)(lVar8 + 0xd8) >> 1)));
      }
      uVar5 = (*pcVar7)();
      if ((uVar5 & 1) != 0) goto LAB_029942a0;
    }
    uVar6 = 0;
    if (*(long *)(param_1 + 0x140) != 0) {
      uVar5 = FUN_02994480();
      if ((uVar5 & 1) != 0) {
        *(undefined1 **)(param_1 + 0x68) = &LAB_02e383b8;
        *(undefined8 *)(param_1 + 0x70) = 0;
        FUN_0299450c(*(undefined8 *)(param_1 + (ulong)*(byte *)(param_1 + 0x95) * 8 + 0xb8));
      }
      uVar6 = 0;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x9e) >> 1 & 1) == 0) goto LAB_029941b4;
LAB_029942a0:
    uVar6 = 1;
  }
  return uVar6;
}


