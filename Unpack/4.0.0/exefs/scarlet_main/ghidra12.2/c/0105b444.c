/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105b444; name: FUN_0105b444
 */


void FUN_0105b444(long *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  
  if ((*(long *)(param_2 + 0x60) == 0) ||
     (plVar8 = *(long **)(*(long *)(param_2 + 0x60) + 0x48), plVar8 == (long *)0x0)) {
    *param_1 = 0;
  }
  else {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_0105b778:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar7 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar5;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar7 == -1) {
LAB_0105b7a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    *param_1 = 0;
    lVar9 = plVar8[0x11];
    uVar11 = (uint)lVar9;
    if (uVar11 != 0) {
      uVar12 = 0;
      while( true ) {
        if (uVar12 < (uint)lVar9) {
          plVar10 = *(long **)(*(long *)(plVar8[9] +
                                        ((ulong)(plVar8[0x10] + (long)(int)uVar12) >> 6 &
                                        0x3fffffffffffff8)) +
                              (plVar8[0x10] + (long)(int)uVar12 & 0x1ffU) * 8);
          if (plVar10 != (long *)0x0) {
            lVar9 = plVar10[6];
            if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0105b778;
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar7 = *psVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar3) {
                *psVar1 = sVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (sVar7 == 0) {
              uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar5;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar7 == -1) goto LAB_0105b7a0;
          }
        }
        else {
          plVar10 = (long *)0x0;
        }
        piVar6 = (int *)plVar10[8];
        if ((((0xf < *piVar6 - 0x11U) &&
             (uVar4 = *piVar6 - 0x23,
             0x2b < uVar4 || (1L << ((ulong)uVar4 & 0x3f) & 0xc000000000fU) == 0)) &&
            (*(ulong *)(piVar6 + 4) <= *(ulong *)(param_2 + 0xe8))) &&
           ((*param_1 == 0 || (*(ulong *)(piVar6 + 2) < *(ulong *)(*(long *)(*param_1 + 0x40) + 8)))
           )) {
          FUN_0105b304(param_1,plVar10);
        }
        if (plVar10 != (long *)0x0) {
          lVar9 = plVar10[6];
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar7 == 0) goto LAB_0105b738;
        }
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar11) break;
        lVar9 = plVar8[0x11];
      }
    }
    if ((param_3 & 1) == 0) {
      if (*param_1 == 0) {
        lVar9 = plVar8[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        FUN_0105bd98(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x48),
                     *(undefined8 *)(*(long *)(*param_1 + 0x40) + 8));
        lVar9 = plVar8[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      lVar9 = plVar8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar7 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (sVar7 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0105b67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x50))(plVar8);
      return;
    }
    if (sVar7 == 0) {
LAB_0105b738:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


