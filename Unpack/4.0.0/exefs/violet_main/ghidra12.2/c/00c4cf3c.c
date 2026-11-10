/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4cf3c; name: FUN_00c4cf3c
 */


void FUN_00c4cf3c(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  if ((DAT_045d2870 & (*(uint *)(param_1 + 0x108) ^ 0xffffffff) & 7) == 0) {
    if (*(char *)(param_1 + 0x148) == '\0') {
      lVar8 = *(long *)(param_1 + 0x58);
      lVar7 = *(long *)(param_1 + 0x60);
      lVar12 = lVar8;
    }
    else {
      lVar12 = *(long *)(param_1 + 0x58);
      lVar7 = *(long *)(param_1 + 0x60);
      if (lVar7 == lVar12) {
        lVar8 = lVar7;
      }
      else {
        uVar11 = 0;
        do {
          if (*(long *)(lVar12 + uVar11 * 8) == 0) {
            plVar6 = (long *)FUN_00c7f744(*(undefined8 *)
                                           (*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x50),
                                          *(long *)(param_1 + 0x110) + uVar11 * 0x20);
            lVar12 = *(long *)(param_1 + 0x58);
            lVar7 = *plVar6;
            if (lVar7 != 0) {
              piVar1 = (int *)(lVar7 + 0x28);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar3 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
            }
            plVar6 = *(long **)(lVar12 + uVar11 * 8);
            *(long *)(lVar12 + uVar11 * 8) = lVar7;
            if (plVar6 != (long *)0x0) {
              plVar2 = plVar6 + 5;
              do {
                lVar12 = *plVar2;
                iVar3 = (int)lVar12 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar3;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 == 0) {
                (**(code **)(*plVar6 + 0x10))();
              }
              else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          lVar7 = *(long *)(param_1 + 0x60);
          uVar11 = uVar11 + 1;
          lVar12 = *(long *)(param_1 + 0x58);
        } while (uVar11 < (ulong)(lVar7 - lVar12 >> 3));
        lVar8 = lVar12;
      }
      *(undefined1 *)(param_1 + 0x148) = 0;
    }
    if (lVar7 != lVar8) {
      uVar11 = 0;
      do {
        if (((*(ulong *)(param_1 + 0xd0) >> (uVar11 & 0x3f) & 1) != 0) &&
           (lVar12 = *(long *)(lVar12 + uVar11 * 8), lVar12 != 0)) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x90) + uVar11 * 8);
          *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(param_1 + 0xe8);
          *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(param_1 + 0xe0);
          *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(param_1 + 0xf0);
          if (*(char *)(lVar12 + 0x288) != '\0') {
            plVar6 = (long *)(lVar12 + 0x298);
            lVar8 = nn::os::GetCurrentThread();
LAB_00c4cfec:
            if (*plVar6 == 0) goto code_r0x00c4cff4;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x2a0));
            do {
              if (*plVar6 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x2a0));
                  while (*plVar6 == 0) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                    if (bVar5) {
                      *plVar6 = lVar8;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_00c4cffc;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar5) {
                *plVar6 = lVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_00c4cffc:
            lVar8 = *(long *)(lVar12 + 0x60);
            uVar10 = *(long *)(lVar12 + 0x68) - lVar8 >> 3;
            uVar9 = *(ulong *)(lVar12 + 0x98);
            if (uVar10 <= uVar9) {
              if (uVar10 < 0xffffffffffffffc0) {
                FUN_0127173c((long *)(lVar12 + 0x60),0x40);
                uVar9 = *(ulong *)(lVar12 + 0x98);
                lVar8 = *(long *)(lVar12 + 0x60);
              }
              else {
                *(ulong *)(lVar12 + 0x68) = lVar8 + uVar10 * 8 + 0x200;
              }
            }
            *(ulong *)(lVar12 + 0x98) = uVar9 + 1;
            *(long *)(lVar8 + uVar9 * 8) = lVar7 + 0x40;
            *(undefined8 *)(lVar12 + 0x298) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x2a0));
          }
          lVar7 = *(long *)(param_1 + 0x60);
          lVar8 = *(long *)(param_1 + 0x58);
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar8;
      } while (uVar11 < (ulong)(lVar7 - lVar8 >> 3));
    }
  }
  return;
code_r0x00c4cff4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar5) {
    *plVar6 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00c4cffc;
  goto LAB_00c4cfec;
}


