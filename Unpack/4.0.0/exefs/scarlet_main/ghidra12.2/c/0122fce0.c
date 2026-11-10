/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0122fce0; name: FUN_0122fce0
 */


/* WARNING: Removing unreachable block (ram,0x012301d0) */
/* WARNING: Removing unreachable block (ram,0x012301d4) */
/* WARNING: Removing unreachable block (ram,0x012301dc) */
/* WARNING: Removing unreachable block (ram,0x012301e4) */
/* WARNING: Removing unreachable block (ram,0x012308f0) */
/* WARNING: Removing unreachable block (ram,0x012308f8) */
/* WARNING: Removing unreachable block (ram,0x012308fc) */
/* WARNING: Removing unreachable block (ram,0x01230904) */
/* WARNING: Removing unreachable block (ram,0x0123090c) */
/* WARNING: Removing unreachable block (ram,0x01230f98) */
/* WARNING: Removing unreachable block (ram,0x01230fa8) */
/* WARNING: Removing unreachable block (ram,0x01230914) */
/* WARNING: Removing unreachable block (ram,0x012301ec) */
/* WARNING: Removing unreachable block (ram,0x012301f0) */

undefined8 FUN_0122fce0(long param_1)

{
  ulong uVar1;
  short *psVar2;
  MutexType *pMVar3;
  code *pcVar4;
  undefined8 *puVar5;
  code *pcVar6;
  code *pcVar7;
  short sVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  undefined4 uVar23;
  int *piVar24;
  ulong uVar25;
  undefined4 *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  undefined8 local_118;
  code *local_110;
  uint local_108;
  code *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  long *local_78;
  long local_70 [2];
  
  iVar16 = *(int *)(param_1 + 0x128);
  if (iVar16 == 3) {
    if (*(ulong *)(param_1 + 0x238) != 0) {
      uVar27 = *(ulong *)(param_1 + 0x238) & 0x1f;
      piVar24 = *(int **)(param_1 + 0x200);
      lVar30 = *(long *)(param_1 + 0x208) - (long)piVar24;
      uVar29 = lVar30 >> 2;
      if (uVar27 == 0) {
        if (lVar30 != 0) {
          if (uVar29 < 2) {
            uVar29 = 1;
          }
          do {
            if (*piVar24 != -1) {
              return 0;
            }
            uVar29 = uVar29 - 1;
            piVar24 = piVar24 + 1;
          } while (uVar29 != 0);
        }
      }
      else {
        while (uVar29 = uVar29 - 1, uVar29 != 0) {
          if (*piVar24 != -1) {
            return 0;
          }
          piVar24 = piVar24 + 1;
        }
        if (*(uint *)(*(long *)(param_1 + 0x208) + -4) != ~(-1 << uVar27)) {
          return 0;
        }
      }
    }
    plVar31 = *(long **)(param_1 + 0x1a8);
    do {
      if (plVar31 == *(long **)(param_1 + 0x1b0)) {
        plVar31 = *(long **)(*(long *)(*(long *)(param_1 + 0xe8) + 0x48) + 0x460);
        if (plVar31 == (long *)0x0) goto LAB_0122fdb4;
        lVar30 = plVar31[6];
        if (*(long *)(lVar30 + 0x10) == 0) goto LAB_01231054;
        psVar2 = (short *)(lVar30 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar8 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar8 == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
          *(undefined8 *)(lVar30 + 8) = uVar18;
          *(undefined4 *)(lVar30 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) {
          pcVar19 = "count != 0";
          pcVar20 = "AddReference";
          pcVar21 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar22 = "Reference counter overflows.";
          goto LAB_0123107c;
        }
LAB_0122fdb4:
        puVar13 = PTR_DAT_047d88d0;
        if (((*PTR_DAT_047d88d0 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d88d0);
        }
        puVar15 = PTR_DAT_047d88e0;
        puVar14 = PTR_DAT_047d88d8;
        lVar30 = *(long *)PTR_DAT_047d88d8;
        *(long *)PTR_DAT_047d88e0 = lVar30;
        plVar32 = *(long **)(lVar30 + 0xe8);
        if (plVar32 != (long *)0x0) {
          lVar30 = plVar32[6];
          if (*(long *)(lVar30 + 0x10) == 0) goto LAB_01231054;
          psVar2 = (short *)(lVar30 + 0x1a);
          do {
            sVar8 = *psVar2;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar8 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar8 == 0) {
            uVar18 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
            *(undefined8 *)(lVar30 + 8) = uVar18;
            *(undefined4 *)(lVar30 + 0x1c) = 0xfffffffe;
LAB_0122fe14:
            FUN_00e21f0c(plVar32);
            lVar30 = plVar32[6];
            psVar2 = (short *)(lVar30 + 0x1a);
            do {
              sVar8 = *psVar2;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar11) {
                *psVar2 = sVar8 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar8 == 1) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              (**(code **)(*plVar32 + 0x50))(plVar32);
            }
            else if (sVar8 == 0) goto LAB_01231010;
            goto LAB_0122fe40;
          }
          if (sVar8 != -1) goto LAB_0122fe14;
LAB_0123105c:
          pcVar19 = "count != 0";
          pcVar20 = "AddReference";
          pcVar21 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar22 = "Reference counter overflows.";
          goto LAB_0123107c;
        }
        FUN_00e21f0c(0);
LAB_0122fe40:
        if (((*puVar13 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar16 != 0))
        {
          FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d88d0);
        }
        lVar30 = *(long *)puVar14;
        *(long *)puVar15 = lVar30;
        plVar32 = *(long **)(lVar30 + 0xd0);
        if (plVar32 == (long *)0x0) {
          FUN_00e21f0c(0);
        }
        else {
          lVar30 = plVar32[6];
          if (*(long *)(lVar30 + 0x10) == 0) {
LAB_01231054:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar2 = (short *)(lVar30 + 0x1a);
          do {
            sVar8 = *psVar2;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar8 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar8 == 0) {
            uVar18 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
            *(undefined8 *)(lVar30 + 8) = uVar18;
            *(undefined4 *)(lVar30 + 0x1c) = 0xfffffffe;
          }
          else if (sVar8 == -1) goto LAB_0123105c;
          FUN_00e21f0c(plVar32);
          lVar30 = plVar32[6];
          psVar2 = (short *)(lVar30 + 0x1a);
          do {
            sVar8 = *psVar2;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar8 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar30 + 0x10) = 0;
            (**(code **)(*plVar32 + 0x50))(plVar32);
          }
          else if (sVar8 == 0) goto LAB_01231010;
        }
        if (plVar31 != (long *)0x0) {
          lVar30 = plVar31[6];
          psVar2 = (short *)(lVar30 + 0x1a);
          do {
            sVar8 = *psVar2;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar11) {
              *psVar2 = sVar8 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar30 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar8 == 0) {
LAB_01231010:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        *(undefined4 *)(param_1 + 0x128) = 4;
        return 1;
      }
      lVar30 = *plVar31;
      plVar31 = plVar31 + 1;
    } while (*(int *)(lVar30 + 0x128) == 4);
  }
  else {
    if (iVar16 == 2) {
      uVar9 = *(uint *)(param_1 + 0x360);
      if (uVar9 < *(uint *)(param_1 + 0x364)) {
        *(uint *)(param_1 + 0x360) = uVar9 + 1;
        local_100 = (code *)0x0;
        local_f8 = (code *)0x0;
        FUN_00c43ef0(&local_100,param_1 + 0x98);
        puVar13 = PTR_DAT_047d3908;
        local_118 = (long *)0x0;
        local_110 = (code *)0x0;
        if (*(long *)(local_100 + 0x10) == param_1 + 0x28) {
          do {
            pcVar4 = local_f8;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(&local_f8,0x10);
            if (bVar11) {
              local_f8 = (code *)0x0;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          puVar15 = PTR_DAT_047d3918;
          puVar14 = PTR_DAT_047d3910;
          uVar18 = *(undefined8 *)PTR_DAT_047d3910;
          *(undefined8 *)PTR_DAT_047d3918 = uVar18;
          FUN_00c44204(&local_78,uVar18,pcVar4);
          pcVar6 = local_100;
          local_100 = (code *)0x0;
          if (pcVar6 != (code *)0x0) {
            pcVar7 = pcVar6 + 0x18;
            do {
              sVar8 = *(short *)pcVar7;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
              if (bVar11) {
                *(short *)pcVar7 = sVar8 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar8 == 1) {
              pcVar7 = pcVar6 + 0x1c;
              do {
                iVar16 = *(int *)pcVar7;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
                if (bVar11) {
                  *(int *)pcVar7 = -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar16 != -1) {
                if (((*puVar13 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar30 = *(long *)puVar14;
                *(long *)puVar15 = lVar30;
                local_70[0] = *(long *)pcVar6;
                FUN_00c44438(lVar30 + 0x8040,local_70);
              }
            }
            else if (sVar8 == 0) goto LAB_01230214;
          }
          plVar31 = local_118;
          if (local_78 == (long *)0x0) {
            FUN_01231308(&local_118);
          }
          else {
            local_118 = (long *)0x0;
            if (plVar31 != (long *)0x0) {
              plVar32 = plVar31 + 3;
              do {
                sVar8 = (short)*plVar32;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar11) {
                  *(short *)plVar32 = sVar8 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (sVar8 == 1) {
                piVar24 = (int *)((long)plVar31 + 0x1c);
                do {
                  iVar16 = *piVar24;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar11) {
                    *piVar24 = -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar16 != -1) {
                  if (((*puVar13 & 1) == 0) &&
                     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar30 = *(long *)puVar14;
                  *(long *)puVar15 = lVar30;
                  local_70[0] = *plVar31;
                  FUN_00c44438(lVar30 + 0x8040,local_70);
                }
              }
              else if (sVar8 == 0) goto LAB_01230214;
            }
            local_118 = local_78;
            local_78 = (long *)0x0;
            local_110 = pcVar4;
          }
        }
        pcVar4 = local_100;
        if (local_100 != (code *)0x0) {
          pcVar6 = local_100 + 0x18;
          do {
            sVar8 = *(short *)pcVar6;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
            if (bVar11) {
              *(short *)pcVar6 = sVar8 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar8 == 1) {
            pcVar6 = local_100 + 0x1c;
            do {
              iVar16 = *(int *)pcVar6;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
              if (bVar11) {
                *(int *)pcVar6 = -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar16 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar30 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar30;
              local_70[0] = *(long *)pcVar4;
              FUN_00c44438(lVar30 + 0x8040,local_70);
            }
          }
          else if (sVar8 == 0) goto LAB_01230214;
        }
        puVar13 = PTR_DAT_047dd4c0;
        local_108 = uVar9;
        if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047dd4c0);
        }
        puVar15 = PTR_DAT_047dd4d0;
        puVar14 = PTR_DAT_047dd4c8;
        *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
        if (((*puVar13 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar16 != 0))
        {
          FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047dd4c0);
        }
        lVar30 = *(long *)puVar14;
        *(long *)puVar15 = lVar30;
        lVar30 = *(long *)(lVar30 + 0x28);
        nn::os::LockMutex((MutexType *)(lVar30 + 0x3d0));
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = (code *)0x0;
        puStack_e8 = (undefined1 *)0x0;
        local_100 = (code *)0x0;
        local_f8 = (code *)0x0;
        FUN_00ff1900(&local_e0,&local_118);
        local_d0 = local_108;
        local_100 = FUN_02189a7c;
        local_f8 = FUN_0218a440;
        local_f0 = FUN_00ff18c8;
        puStack_e8 = &LAB_0218a550;
        FUN_00dd17e4(lVar30 + 0x360,&local_100);
        pcVar4 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (code *)0x0;
          puStack_e8 = (undefined1 *)0x0;
          local_100 = (code *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar4)(&local_e0);
        }
        *(undefined8 *)(lVar30 + 0x3f8) = *(undefined8 *)(lVar30 + 0x3a8);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar30 + 0x3f0));
        nn::os::UnlockMutex((MutexType *)(lVar30 + 0x3d0));
        plVar31 = *(long **)(lVar30 + 0x400);
        plVar32 = *(long **)(lVar30 + 0x408);
        if (plVar31 != plVar32) {
          lVar30 = *plVar31;
          pMVar3 = (MutexType *)(lVar30 + 0x3f0);
          nn::os::LockMutex(pMVar3);
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar30 + 0x410));
          nn::os::UnlockMutex(pMVar3);
          if (plVar31 + 1 != plVar32) {
            lVar30 = plVar31[1];
            pMVar3 = (MutexType *)(lVar30 + 0x3f0);
            nn::os::LockMutex(pMVar3);
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar30 + 0x410));
            nn::os::UnlockMutex(pMVar3);
            for (plVar31 = plVar31 + 2; plVar31 != plVar32; plVar31 = plVar31 + 1) {
              lVar30 = *plVar31;
              pMVar3 = (MutexType *)(lVar30 + 0x3f0);
              nn::os::LockMutex(pMVar3);
              nn::os::SignalConditionVariable((ConditionVariableType *)(lVar30 + 0x410));
              nn::os::UnlockMutex(pMVar3);
            }
          }
        }
        plVar31 = local_118;
        if (local_118 == (long *)0x0) {
          return 0;
        }
        plVar32 = local_118 + 3;
        do {
          sVar8 = (short)*plVar32;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar11) {
            *(short *)plVar32 = sVar8 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar8 == 1) {
          piVar24 = (int *)((long)local_118 + 0x1c);
          do {
            iVar16 = *piVar24;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar11) {
              *piVar24 = -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar16 == -1) {
            return 0;
          }
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar30 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar30;
          local_100 = (code *)*plVar31;
          FUN_00c44438(lVar30 + 0x8040,&local_100);
          return 0;
        }
        if (sVar8 != 0) {
          return 0;
        }
LAB_01230214:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      uVar23 = 3;
    }
    else {
      if (iVar16 != 1) {
        if (iVar16 == 4) {
          return 1;
        }
        return 0;
      }
      FUN_00c9e664(&local_118,param_1 + 0xe8);
      lVar30 = 0;
      if (local_110 != (code *)0x0) {
        lVar30 = *(long *)(local_110 + 0x48);
      }
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      FUN_00d0a71c(&local_100,lVar30 + 0x388);
      if (local_110 != (code *)0x0) {
        pcVar4 = local_110 + 0x28;
        do {
          iVar16 = *(int *)pcVar4;
          iVar12 = iVar16 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar11) {
            *(int *)pcVar4 = iVar12;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*(long *)local_110 + 0x10))();
        }
        else if (iVar16 == 0) {
          pcVar19 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar20 = "DecrementReferenceInternal";
          pcVar21 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar22 = "Reference counter underflows.";
LAB_0123107c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar19,pcVar20,pcVar21,0x58,pcVar22);
        }
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x60))();
      }
      if (local_100 != (code *)0x0) {
        if (*(short *)(local_100 + 0x1a) != 0) {
          lVar30 = *(long *)(param_1 + 0x138);
          plVar31 = *(long **)(param_1 + 0x140);
          uVar29 = *(long *)(*(long *)(param_1 + 0x130) + 0x38) -
                   *(long *)(*(long *)(param_1 + 0x130) + 0x30);
          uVar37 = (long)uVar29 >> 3;
          uVar27 = (long)plVar31 - lVar30 >> 3;
          lVar35 = uVar37 * 8;
          if (uVar27 < uVar37) {
            if ((ulong)(*(long *)(param_1 + 0x148) - (long)plVar31 >> 3) < uVar37 - uVar27) {
              uVar28 = *(ulong *)(param_1 + 0x158);
              if (0x7ffffffffffffffe < uVar28) {
                uVar28 = 0x7fffffffffffffff;
              }
              if (uVar28 < uVar37) goto LAB_01231118;
              lVar30 = *(long *)(param_1 + 0x148) - lVar30;
              uVar25 = lVar30 >> 2;
              uVar1 = uVar37;
              if (uVar37 <= uVar25) {
                uVar1 = uVar25;
              }
              puVar5 = (undefined8 *)(param_1 + 0x150);
              if (uVar28 >> 1 <= (ulong)(lVar30 >> 3)) {
                uVar1 = uVar28;
              }
              if (uVar1 == 0) {
                lVar30 = 0;
              }
              else {
                lVar30 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,uVar1 << 3,8);
                if (lVar30 == 0) {
                  (**(code **)(*(long *)*puVar5 + 0xe8))();
                }
              }
              puVar34 = (undefined8 *)(lVar30 + uVar27 * 8);
              lVar36 = lVar35 + uVar27 * -8;
              puVar33 = puVar34;
              do {
                uVar18 = *puVar5;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar17 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar17 == 0) {
                  *puVar33 = 0;
                }
                else {
                  if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_01231038;
                  *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar18;
                  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
                  *puVar33 = 0;
                  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
                }
                puVar33 = puVar33 + 1;
                lVar36 = lVar36 + -8;
              } while (lVar36 != 0);
              plVar31 = *(long **)(param_1 + 0x138);
              plVar32 = *(long **)(param_1 + 0x140);
              if (plVar32 == plVar31) {
                plVar32 = plVar31;
              }
              else {
                do {
                  puVar34 = puVar34 + -1;
                  plVar32 = plVar32 + -1;
                  FUN_01231224(puVar5,puVar34,plVar32);
                } while (plVar31 != plVar32);
                plVar31 = *(long **)(param_1 + 0x140);
                plVar32 = *(long **)(param_1 + 0x138);
              }
              *(undefined8 **)(param_1 + 0x138) = puVar34;
              *(ulong *)(param_1 + 0x140) = lVar30 + uVar37 * 8;
              lVar36 = *(long *)(param_1 + 0x148);
              *(ulong *)(param_1 + 0x148) = lVar30 + uVar1 * 8;
              while (plVar31 != plVar32) {
                plVar31 = plVar31 + -1;
                if ((long *)*plVar31 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar31 + 0x60))();
                }
              }
              if (plVar32 != (long *)0x0) {
                plVar31 = (long *)*puVar5;
                lVar36 = lVar36 - (long)plVar32;
                uVar27 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar27 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,plVar32,lVar36,8);
                }
                else {
                  FUN_00c48fe8(plVar31,plVar32,lVar36,8);
                }
              }
            }
            else {
              FUN_0123150c(param_1 + 0x138);
            }
          }
          else if (uVar37 < uVar27) {
            plVar32 = (long *)(lVar30 + uVar37 * 8);
            while (plVar32 != plVar31) {
              plVar31 = plVar31 + -1;
              if ((long *)*plVar31 != (long *)0x0) {
                (**(code **)(*(long *)*plVar31 + 0x60))();
              }
            }
            *(long **)(param_1 + 0x140) = plVar32;
          }
          lVar30 = *(long *)(param_1 + 0x170);
          uVar27 = *(long *)(param_1 + 0x178) - lVar30 >> 3;
          if (uVar27 < uVar37) {
            if ((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3) <
                uVar37 - uVar27) {
              uVar28 = *(ulong *)(param_1 + 400);
              if (0x7ffffffffffffffe < uVar28) {
                uVar28 = 0x7fffffffffffffff;
              }
              if (uVar28 < uVar37) {
LAB_01231118:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar30 = *(long *)(param_1 + 0x180) - lVar30;
              uVar25 = lVar30 >> 2;
              uVar1 = uVar37;
              if (uVar37 <= uVar25) {
                uVar1 = uVar25;
              }
              puVar5 = (undefined8 *)(param_1 + 0x188);
              if (uVar28 >> 1 <= (ulong)(lVar30 >> 3)) {
                uVar1 = uVar28;
              }
              if (uVar1 == 0) {
                lVar30 = 0;
              }
              else {
                lVar30 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,uVar1 << 3,8);
                if (lVar30 == 0) {
                  (**(code **)(*(long *)*puVar5 + 0xe8))();
                }
              }
              puVar34 = (undefined8 *)(lVar30 + uVar27 * 8);
              lVar36 = lVar35 + uVar27 * -8;
              puVar33 = puVar34;
              do {
                uVar18 = *puVar5;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar17 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar17 == 0) {
                  *puVar33 = 0;
                }
                else {
                  if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_01231038;
                  *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar18;
                  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
                  *puVar33 = 0;
                  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
                }
                puVar33 = puVar33 + 1;
                lVar36 = lVar36 + -8;
              } while (lVar36 != 0);
              lVar36 = *(long *)(param_1 + 0x170);
              lVar17 = *(long *)(param_1 + 0x178);
              if (lVar17 != lVar36) {
                do {
                  puVar34 = puVar34 + -1;
                  lVar17 = lVar17 + -8;
                  FUN_01231148(puVar5,puVar34,lVar17);
                } while (lVar36 != lVar17);
                lVar36 = *(long *)(param_1 + 0x170);
              }
              lVar17 = *(long *)(param_1 + 0x180);
              *(undefined8 **)(param_1 + 0x170) = puVar34;
              *(ulong *)(param_1 + 0x178) = lVar30 + uVar37 * 8;
              *(ulong *)(param_1 + 0x180) = lVar30 + uVar1 * 8;
              if (lVar36 != 0) {
                plVar31 = (long *)*puVar5;
                lVar17 = lVar17 - lVar36;
                uVar27 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar27 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,lVar36,lVar17,8);
                }
                else {
                  FUN_00c48fe8(plVar31,lVar36,lVar17,8);
                }
              }
            }
            else {
              FUN_0123161c();
            }
          }
          else if (uVar37 < uVar27) {
            *(ulong *)(param_1 + 0x178) = lVar30 + uVar37 * 8;
          }
          lVar30 = *(long *)(param_1 + 0x1a8);
          uVar27 = *(long *)(param_1 + 0x1b0) - lVar30 >> 3;
          if (uVar27 < uVar37) {
            if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3) <
                uVar37 - uVar27) {
              uVar28 = *(ulong *)(param_1 + 0x1c8);
              if (0x7ffffffffffffffe < uVar28) {
                uVar28 = 0x7fffffffffffffff;
              }
              if (uVar28 < uVar37) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar30 = *(long *)(param_1 + 0x1b8) - lVar30;
              uVar25 = lVar30 >> 2;
              uVar1 = uVar37;
              if (uVar37 <= uVar25) {
                uVar1 = uVar25;
              }
              puVar5 = (undefined8 *)(param_1 + 0x1c0);
              if (uVar28 >> 1 <= (ulong)(lVar30 >> 3)) {
                uVar1 = uVar28;
              }
              if (uVar1 == 0) {
                lVar30 = 0;
              }
              else {
                lVar30 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,uVar1 << 3,8);
                if (lVar30 == 0) {
                  (**(code **)(*(long *)*puVar5 + 0xe8))();
                }
              }
              puVar34 = (undefined8 *)(lVar30 + uVar27 * 8);
              lVar35 = lVar35 + uVar27 * -8;
              puVar33 = puVar34;
              do {
                uVar18 = *puVar5;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar36 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar36 == 0) {
                  *puVar33 = 0;
                }
                else {
                  if (0xf < *(ulong *)(lVar36 + 0x80)) {
LAB_01231038:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = uVar18;
                  *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
                  *puVar33 = 0;
                  *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
                }
                puVar33 = puVar33 + 1;
                lVar35 = lVar35 + -8;
              } while (lVar35 != 0);
              lVar35 = *(long *)(param_1 + 0x1a8);
              lVar36 = *(long *)(param_1 + 0x1b0);
              if (lVar36 != lVar35) {
                do {
                  puVar34 = puVar34 + -1;
                  lVar36 = lVar36 + -8;
                  FUN_01231430(puVar5,puVar34,lVar36);
                } while (lVar35 != lVar36);
                lVar35 = *(long *)(param_1 + 0x1a8);
              }
              *(undefined8 **)(param_1 + 0x1a8) = puVar34;
              *(ulong *)(param_1 + 0x1b0) = lVar30 + uVar37 * 8;
              lVar36 = *(long *)(param_1 + 0x1b8);
              *(ulong *)(param_1 + 0x1b8) = lVar30 + uVar1 * 8;
              if (lVar35 != 0) {
                plVar31 = (long *)*puVar5;
                lVar36 = lVar36 - lVar35;
                uVar27 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar27 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,lVar35,lVar36,8);
                }
                else {
                  FUN_00c48fe8(plVar31,lVar35,lVar36,8);
                }
              }
            }
            else {
              FUN_0123172c((long *)(param_1 + 0x1a8));
            }
          }
          else if (uVar37 < uVar27) {
            *(ulong *)(param_1 + 0x1b0) = lVar30 + uVar37 * 8;
          }
          local_118 = (long *)((ulong)local_118._4_4_ << 0x20);
          uVar28 = uVar37 >> 5;
          uVar27 = uVar29 >> 3 & 0x1f;
          if (uVar27 != 0) {
            uVar28 = uVar28 + 1;
          }
          uVar1 = *(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 2;
          if (uVar28 != uVar1) {
            if (uVar28 < uVar1 || uVar28 - uVar1 == 0) {
              if (uVar28 < uVar1) {
                *(ulong *)(param_1 + 0x208) = *(long *)(param_1 + 0x200) + uVar28 * 4;
              }
            }
            else {
              FUN_00eda21c(param_1 + 0x200,uVar28 - uVar1,&local_118);
            }
          }
          *(ulong *)(param_1 + 0x238) = uVar37;
          if (uVar27 != 0) {
            *(uint *)(*(long *)(param_1 + 0x208) + -4) =
                 *(uint *)(*(long *)(param_1 + 0x208) + -4) & (-1 << uVar27 ^ 0xffffffffU);
          }
          uVar27 = *(long *)(param_1 + 0x208) - (long)*(undefined4 **)(param_1 + 0x200);
          if (0 < (long)uVar27) {
            lVar30 = (uVar27 >> 2) + 1;
            puVar26 = *(undefined4 **)(param_1 + 0x200);
            do {
              lVar30 = lVar30 + -1;
              *puVar26 = 0;
              puVar26 = puVar26 + 1;
            } while (1 < lVar30);
          }
          *(int *)(param_1 + 0x364) = (int)(uVar29 >> 3);
          *(undefined4 *)(param_1 + 0x360) = 0;
        }
        pcVar4 = local_100;
        if (local_100 != (code *)0x0) {
          pcVar6 = local_100 + 0x18;
          do {
            sVar8 = *(short *)pcVar6;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
            if (bVar11) {
              *(short *)pcVar6 = sVar8 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar8 == 1) {
            pcVar6 = local_100 + 0x1c;
            do {
              iVar16 = *(int *)pcVar6;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
              if (bVar11) {
                *(int *)pcVar6 = -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar16 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar30 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar30;
              local_118 = *(long **)pcVar4;
              FUN_00c44438(lVar30 + 0x8040,&local_118);
            }
          }
          else if (sVar8 == 0) goto LAB_01230214;
        }
      }
      uVar23 = 2;
    }
    *(undefined4 *)(param_1 + 0x128) = uVar23;
  }
  return 0;
}


