/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216eb6c; name: FUN_0216eb6c
 */


void FUN_0216eb6c(long param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  long *local_68;
  
  uVar14 = 3;
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar14 = 1;
  }
  *(undefined4 *)(param_1 + 0x90) = uVar14;
  plVar1 = (long *)(param_1 + 0x3e0);
  if (*(long *)(param_1 + 0x438) != 0) {
    FUN_014c426c(plVar1,*(undefined8 *)(param_1 + 0x410));
    uVar15 = *(ulong *)(param_1 + 1000);
    *(undefined8 *)(param_1 + 0x410) = 0;
    if (uVar15 != 0) {
      uVar16 = uVar15 & 3;
      if (uVar15 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar18 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar18 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar18 * 8 + 0x10) = 0;
          lVar17 = uVar18 * 8;
          uVar18 = uVar18 + 4;
          *(undefined8 *)(*plVar1 + lVar17 + 0x18) = 0;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar16 != 0) {
        lVar17 = uVar18 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar17) = 0;
          uVar16 = uVar16 - 1;
          lVar17 = lVar17 + 8;
        } while (uVar16 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x438) = 0;
  }
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  lVar17 = *(long *)(param_1 + 0x50);
  lVar5 = *(long *)(param_1 + 0x58);
  do {
    if (lVar17 == lVar5) {
      return;
    }
    FUN_00dc9d64(local_78,param_1,lVar17);
    if (local_78[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_78[0] + 0x1a) != 0) {
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_00d0a71c(&local_88,local_78);
        uVar15 = 0;
        if (local_88 != (undefined8 *)0x0) {
          uVar15 = (ulong)(*(short *)((long)local_88 + 0x1a) != 0);
        }
        uVar16 = *(ulong *)(param_1 + 1000);
        if (uVar16 != 0) {
          uVar18 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            uVar19 = (int)uVar16 + 1 & uVar15;
          }
          else {
            uVar19 = uVar15;
            if (uVar16 <= uVar15) {
              uVar19 = 0;
              if (uVar16 != 0) {
                uVar19 = uVar15 / uVar16;
              }
              uVar19 = uVar15 - uVar19 * uVar16;
            }
          }
          plVar20 = *(long **)(*plVar1 + uVar19 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            if (uVar18 < 2) {
              do {
                if (plVar20[1] == uVar15) {
                  if ((undefined8 *)plVar20[2] == local_88) goto LAB_0216ed38;
                }
                else if ((plVar20[1] & uVar16 - 1) != uVar19) break;
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
            else {
              do {
                uVar18 = plVar20[1];
                if (uVar18 == uVar15) {
                  if ((undefined8 *)plVar20[2] == local_88) goto LAB_0216ed38;
                }
                else {
                  if (uVar16 <= uVar18) {
                    uVar8 = 0;
                    if (uVar16 != 0) {
                      uVar8 = uVar18 / uVar16;
                    }
                    uVar18 = uVar18 - uVar8 * uVar16;
                  }
                  if (uVar18 != uVar19) break;
                }
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
          }
        }
        local_68 = (long *)FUN_011416a4(*(undefined8 *)(param_1 + 8),&local_88);
        if (local_68 != (long *)0x0) {
          lVar21 = local_68[6];
          if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar2 = (short *)(lVar21 + 0x1a);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
            *(undefined8 *)(lVar21 + 8) = uVar13;
            *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
          }
          else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        FUN_011418dc(plVar1,&local_88,&local_68);
        if (local_68 != (long *)0x0) {
          lVar21 = local_68[6];
          psVar2 = (short *)(lVar21 + 0x1a);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
LAB_0216ed38:
        puVar11 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_88 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_88 + 0x1c);
            do {
              iVar12 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)puVar9;
              *(long *)puVar10 = lVar21;
              local_68 = (long *)*puVar11;
              FUN_00c44438(lVar21 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) goto LAB_0216f004;
        }
      }
      puVar11 = local_78[0];
      if (local_78[0] != (undefined8 *)0x0) {
        psVar2 = (short *)(local_78[0] + 3);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_78[0] + 0x1c);
          do {
            iVar12 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)puVar9;
            *(long *)puVar10 = lVar21;
            local_68 = (long *)*puVar11;
            FUN_00c44438(lVar21 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) {
LAB_0216f004:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    lVar17 = lVar17 + 0x20;
  } while( true );
}


