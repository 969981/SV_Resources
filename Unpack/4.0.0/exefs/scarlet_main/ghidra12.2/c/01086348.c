/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01086348; name: FUN_01086348
 */


void FUN_01086348(long param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  
  if (*(char *)(param_1 + 0x99) != '\0') {
    puVar11 = (undefined8 *)(param_1 + 0x30);
    plVar14 = *(long **)(param_1 + 0x38);
    for (plVar13 = (long *)*puVar11; plVar13 != plVar14; plVar13 = plVar13 + 2) {
      lVar7 = *plVar13;
      if ((int)((ulong)(*(long *)(lVar7 + 0x58) - *(long *)(lVar7 + 0x50)) >> 3) != 0) {
        uVar15 = 0;
        do {
          lVar16 = *(long *)(*(long *)(lVar7 + 0x50) + uVar15 * 8);
          plVar1 = (long *)(lVar16 + 0x70);
          lVar7 = nn::os::GetCurrentThread();
          do {
            lVar8 = *plVar1;
            lVar9 = *(long *)(lVar16 + 0x78);
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar8;
              *(long *)(lVar16 + 0x78) = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_010863c0:
          while ((lVar8 != 0 && (lVar7 != lVar8))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x80));
            do {
              lVar8 = *plVar1;
              lVar9 = *(long *)(lVar16 + 0x78);
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *plVar1 = lVar8;
                *(long *)(lVar16 + 0x78) = lVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          do {
            lVar3 = *plVar1;
            if (lVar3 != lVar8 || *(long *)(lVar16 + 0x78) != lVar9) {
              bVar10 = false;
              ClearExclusiveLocal();
              goto LAB_010863f0;
            }
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar8;
              *(long *)(lVar16 + 0x74) = lVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar10 = true;
LAB_010863f0:
          if (!bVar10) {
            lVar8 = lVar3;
            lVar9 = *(long *)(lVar16 + 0x78);
            goto LAB_010863c0;
          }
          if ((int)((ulong)(*(long *)(lVar16 + 0x38) - (long)*(long **)(lVar16 + 0x30)) >> 3) != 0)
          {
            plVar6 = (long *)(*(long *)(param_1 + 0x70) + 0x30);
            (**(code **)(*plVar6 + 0x10))(plVar6,**(long **)(lVar16 + 0x30) + 200,1);
            if ((*(long *)(lVar16 + 0x38) - *(long *)(lVar16 + 0x30) & 0x7fffffff0U) != 0) {
              plVar6 = (long *)(*(long *)(param_1 + 0x70) + 0x30);
              (**(code **)(*plVar6 + 0x10))(plVar6,*(long *)(*(long *)(lVar16 + 0x30) + 8) + 200,1);
              lVar7 = *(long *)(lVar16 + 0x30);
              if (0x10 < (*(long *)(lVar16 + 0x38) - lVar7 & 0x7fffffff8U)) {
                uVar12 = 2;
                do {
                  plVar6 = (long *)(*(long *)(param_1 + 0x70) + 0x30);
                  (**(code **)(*plVar6 + 0x10))(plVar6,*(long *)(lVar7 + uVar12 * 8) + 200,1);
                  lVar7 = *(long *)(lVar16 + 0x30);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < ((ulong)(*(long *)(lVar16 + 0x38) - lVar7) >> 3 & 0xffffffff));
              }
            }
          }
          do {
            lVar7 = *plVar1;
            lVar8 = *(long *)(lVar16 + 0x78);
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar7;
              *(long *)(lVar16 + 0x78) = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar9 = *plVar1;
            lVar3 = *(long *)(lVar16 + 0x78);
            if (lVar9 != lVar7 || lVar3 != lVar8) {
              bVar10 = false;
              ClearExclusiveLocal();
              goto joined_r0x010864b8;
            }
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar7;
              *(long *)(lVar16 + 0x74) = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar10 = true;
joined_r0x010864b8:
          if (!bVar10) {
            do {
              lVar7 = *plVar1;
              lVar8 = *(long *)(lVar16 + 0x78);
              if (lVar7 != lVar9 || lVar8 != lVar3) {
                bVar10 = false;
                ClearExclusiveLocal();
                lVar9 = lVar7;
                lVar3 = lVar8;
                goto joined_r0x010864b8;
              }
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *plVar1 = lVar9;
                *(long *)(lVar16 + 0x74) = lVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar10 = true;
            lVar9 = lVar7;
            lVar3 = lVar8;
            goto joined_r0x010864b8;
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x80));
          lVar7 = *plVar13;
          uVar15 = uVar15 + 1;
        } while (uVar15 < ((ulong)(*(long *)(lVar7 + 0x58) - *(long *)(lVar7 + 0x50)) >> 3 &
                          0xffffffff));
      }
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      if (*(long *)(param_1 + 0x78) == 0) {
        plVar13 = *(long **)(param_1 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar13;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,0x1a0,0x10);
        if (lVar16 == 0) {
          (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                     ,0x40);
        }
        FUN_010870c4(lVar16,param_1 + 0x88,param_1 + 0x68,param_1 + 0x70,puVar11);
        *(undefined4 *)(lVar16 + 0x18) = 0x1001a0;
        *(long **)(lVar16 + 8) = plVar13;
        *(long *)(lVar16 + 0x10) = lVar16;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        piVar2 = (int *)(lVar16 + 0x28);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar5 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        plVar13 = *(long **)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x78) = 0;
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 5;
          do {
            lVar7 = *plVar14;
            iVar5 = (int)lVar7 + -1;
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar10) {
              *(int *)plVar14 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
          else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        *(long *)(param_1 + 0x78) = lVar16;
      }
      else {
        FUN_01086778(*(long *)(param_1 + 0x78),puVar11);
      }
    }
    *(undefined1 *)(param_1 + 0x99) = 0;
  }
  return;
}


