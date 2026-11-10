/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f634c8; name: FUN_00f634c8
 */


void FUN_00f634c8(long *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar9 = *(ulong *)(param_2 + 0x138);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar12 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar10 = param_3 & 0xff;
    if (uVar12 < 2) {
      uVar13 = (int)uVar9 - 1 & uVar10;
    }
    else {
      uVar13 = uVar10;
      if (uVar9 <= uVar10) {
        uVar13 = 0;
        if (uVar9 != 0) {
          uVar13 = uVar10 / uVar9;
        }
        uVar13 = uVar10 - uVar13 * uVar9;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x130) + uVar13 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      uVar2 = (uint)param_3 & 0xff;
      if (uVar12 < 2) {
        do {
          if (plVar11[1] == uVar10) {
            if (*(uint *)(plVar11 + 2) == uVar2) goto LAB_00f6355c;
          }
          else if ((plVar11[1] & uVar9 - 1) != uVar13) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar11[1];
          if (uVar14 == uVar10) {
            if (*(uint *)(plVar11 + 2) == uVar2) goto LAB_00f6355c;
          }
          else {
            if (uVar9 <= uVar14) {
              uVar6 = 0;
              if (uVar9 != 0) {
                uVar6 = uVar14 / uVar9;
              }
              uVar14 = uVar14 - uVar6 * uVar9;
            }
            if (uVar14 != uVar13) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
LAB_00f6355c:
  if (uVar12 < 2) {
    uVar13 = (int)uVar9 - 1 & uVar10;
  }
  else {
    uVar13 = uVar10;
    if (uVar9 <= uVar10) {
      uVar13 = 0;
      if (uVar9 != 0) {
        uVar13 = uVar10 / uVar9;
      }
      uVar13 = uVar10 - uVar13 * uVar9;
    }
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x130) + uVar13 * 8);
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if (uVar12 < 2) {
      do {
        if (plVar11[1] == uVar10) {
          if (*(uint *)(plVar11 + 2) == uVar2) {
LAB_00f6359c:
            lVar8 = plVar11[3];
            *param_1 = lVar8;
            if (lVar8 == 0) {
              return;
            }
            lVar8 = *(long *)(lVar8 + 0x30);
            if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar8 + 0x1a);
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
              uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
              *(undefined8 *)(lVar8 + 8) = uVar7;
              *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
              return;
            }
            if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            return;
          }
        }
        else if ((plVar11[1] & uVar9 - 1) != uVar13) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        uVar12 = plVar11[1];
        if (uVar12 == uVar10) {
          if (*(uint *)(plVar11 + 2) == uVar2) goto LAB_00f6359c;
        }
        else {
          if (uVar9 <= uVar12) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar12 / uVar9;
            }
            uVar12 = uVar12 - uVar14 * uVar9;
          }
          if (uVar12 != uVar13) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02997af0();
}


