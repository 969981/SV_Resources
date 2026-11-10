/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f3b60; name: FUN_014f3b60
 */


void FUN_014f3b60(long *param_1,long param_2,ulong *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  plVar13 = (long *)(param_2 + 0x28);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_014f3b9c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x30));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x30));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_014f3b9c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_014f3b9c:
  uVar10 = *(ulong *)(param_2 + 0xb8);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_3;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else {
      uVar12 = uVar9;
      if (uVar10 <= uVar9) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar9 / uVar10;
        }
        uVar12 = uVar9 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0xb0) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) {
LAB_014f3c80:
              *(ulong *)(param_2 + 0x90) = uVar9;
              *(ulong *)(param_2 + 0x98) = param_3[1];
              *(ulong *)(param_2 + 0xa0) = param_3[2];
              plVar13 = (long *)param_3[3];
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x18))(plVar13);
              }
              plVar7 = *(long **)(param_2 + 0xa8);
              *(long **)(param_2 + 0xa8) = plVar13;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))();
              }
              *(undefined4 *)(param_2 + 0x48) = 4;
              lVar6 = *(long *)(param_2 + 0x118);
              *param_1 = lVar6;
              if (lVar6 != 0) {
                lVar6 = *(long *)(lVar6 + 0x30);
                if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("m_object != nullptr","AddReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x3d);
                }
                psVar1 = (short *)(lVar6 + 0x1a);
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
                  uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
                  *(undefined8 *)(lVar6 + 8) = uVar8;
                  *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
                }
                else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != 0","AddReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x58,"Reference counter overflows.");
                }
              }
              goto LAB_014f3cec;
            }
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_014f3c80;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_014f3cec:
  *(undefined8 *)(param_2 + 0x28) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x30));
  return;
}


