/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f6eac; name: FUN_018f6eac
 */


void FUN_018f6eac(long param_1,uint param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long local_38;
  undefined1 auStack_30 [12];
  uint local_24;
  
  uVar10 = *(ulong *)(param_1 + 0x148);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar13 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    plVar1 = (long *)(param_1 + 0x140);
    uVar11 = (ulong)param_2;
    if (uVar13 < 2) {
      uVar12 = (ulong)((int)uVar10 - 1U & param_2);
    }
    else {
      uVar12 = uVar11;
      if (uVar10 <= uVar11) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar11 / uVar10;
        }
        uVar12 = uVar11 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*plVar1 + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar14[1] == uVar11) {
            if (*(uint *)(plVar14 + 2) == param_2) goto LAB_018f6f48;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) {
            return;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == uVar11) {
            if (*(uint *)(plVar14 + 2) == param_2) {
LAB_018f6f48:
              local_24 = param_2;
              plVar7 = (long *)FUN_010a1b68(plVar1,&local_24);
              plVar8 = (long *)*plVar7;
              *plVar7 = 0;
              if (plVar8 != (long *)0x0) {
                lVar9 = plVar8[6];
                psVar2 = (short *)(lVar9 + 0x1a);
                do {
                  sVar3 = *psVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar5) {
                    *psVar2 = sVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar3 == 1) {
                  *(undefined8 *)(lVar9 + 0x10) = 0;
                  (**(code **)(*plVar8 + 0x50))();
                }
                else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              FUN_018f70a4(&local_38,plVar1,plVar14);
              lVar9 = local_38;
              local_38 = 0;
              if (lVar9 != 0) {
                FUN_02979d98(auStack_30);
              }
              return;
            }
          }
          else {
            if (uVar10 <= uVar13) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar6 * uVar10;
            }
            if (uVar13 != uVar12) {
              return;
            }
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  return;
}


