/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8bb14; name: FUN_00d8bb14
 */


undefined8 FUN_00d8bb14(undefined8 param_1,void *param_2)

{
  short *psVar1;
  void *__src;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  short sVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long *local_188;
  undefined8 local_180 [26];
  long *local_b0;
  long *local_a8;
  undefined8 *local_a0 [2];
  long *local_90;
  long *plStack_88;
  long *local_80;
  long *local_78;
  undefined8 *puStack_70;
  
  FUN_01f8c918(local_a0,param_1);
  if (local_a0[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_a0[0] + 0x1a) != 0) {
      if (local_a0[0] == (undefined8 *)0x0) {
        return 0;
      }
      if (*(short *)((long)local_a0[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_a0[0] + 0x1a);
        sVar14 = *(short *)((long)local_a0[0] + 0x1a);
LAB_00d8bb9c:
        sVar3 = *psVar1;
        if (sVar3 == sVar14) {
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00d8bbc0;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d8bbc0:
          bVar17 = false;
        }
        if (!bVar17) goto code_r0x00d8bbc8;
        lVar11 = local_a0[0][2];
        if (lVar11 == 0) goto LAB_00d8bc48;
        plVar15 = (long *)(lVar11 + -0x28);
        FUN_00c9e664(&local_b0,lVar11 + 0xc0);
        if ((local_b0 == (long *)0x0) || (uVar7 = FUN_02bc8ff0(plVar15), (uVar7 & 1) == 0)) {
          if (local_a8 != (long *)0x0) {
            plVar20 = local_a8 + 5;
            do {
              lVar11 = *plVar20;
              iVar6 = (int)lVar11 + -1;
              cVar5 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar17) {
                *(int *)plVar20 = iVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*local_a8 + 0x10))();
            }
            else if ((int)lVar11 == 0) goto LAB_00d8c2c0;
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x60))();
          }
          (**(code **)(*plVar15 + 0x60))(plVar15);
          goto LAB_00d8bc48;
        }
        __src = (void *)(lVar11 + 0x148);
        memcpy(local_180,__src,0xd0);
        lVar16 = *(long *)(lVar11 + 0x2e8);
        lVar9 = lVar11 + 0x2f0;
        plVar20 = (long *)(lVar16 + 0x30);
        local_188 = plVar15;
        lVar8 = nn::os::GetCurrentThread();
        do {
          if (*plVar20 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x38));
              while (*plVar20 == 0) {
                cVar5 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *plVar20 = lVar8;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00d8bcbc;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar17) {
            *plVar20 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00d8bcbc:
        lVar8 = *(long *)(lVar16 + 0x198);
        lVar25 = *(long *)(lVar16 + 0x1b8);
        lVar22 = *(long *)(lVar16 + 0x1d8);
        lVar21 = *(long *)(lVar16 + 0x1f8);
        if (lVar8 != 0) {
          if (((lVar25 == 0) && (lVar22 == 0)) && (lVar21 == 0)) {
            if (*(long *)(lVar8 + 0xb0) != 0) {
              uVar7 = 0;
              do {
                FUN_02bcb5e8(lVar8,uVar7,lVar9,&local_188);
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(ulong *)(lVar8 + 0xb0));
            }
          }
          else if (*(long *)(lVar8 + 0xb0) != 0) {
            uVar7 = 0;
            do {
              FUN_02bcb578(lVar8,uVar7,lVar9,&local_188);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ulong *)(lVar8 + 0xb0));
          }
        }
        if (lVar25 != 0) {
          lVar8 = *(long *)(lVar16 + 0x1b8);
          if ((lVar22 == 0) && (lVar21 == 0)) {
            if (*(long *)(lVar8 + 0xb0) != 0) {
              uVar7 = 0;
              do {
                FUN_02bcb71c(lVar8,uVar7,lVar9,&local_188);
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(ulong *)(lVar8 + 0xb0));
            }
          }
          else if (*(long *)(lVar8 + 0xb0) != 0) {
            uVar7 = 0;
            do {
              FUN_02bcb658(lVar8,uVar7,lVar9,&local_188);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ulong *)(lVar8 + 0xb0));
          }
        }
        plVar20 = local_188;
        if (lVar22 == 0) {
LAB_00d8bcd8:
          if (lVar21 != 0) {
LAB_00d8c2f8:
            FUN_0275f4c0(*(undefined8 *)(lVar16 + 0x1f8),lVar9,&local_188);
          }
        }
        else {
          lVar8 = *(long *)(lVar16 + 0x1d8);
          if (lVar21 != 0) {
            FUN_0275f3c8(lVar8,lVar9,&local_188);
            goto LAB_00d8c2f8;
          }
          uVar7 = *(ulong *)(lVar8 + 0x130);
          if (uVar7 != 0) {
            lVar22 = 0;
            uVar24 = 0;
            do {
              uVar13 = *(ulong *)(*(long *)(lVar8 + 0xf8) + lVar22);
              if ((uVar13 < *(ulong *)(lVar8 + 0xb0)) &&
                 ((*(ulong *)(lVar8 + 0x48) <= uVar13 ||
                  ((*(ulong *)(*(long *)(lVar8 + 0x40) + (uVar13 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar13 & 0x3f) & 1) == 0)))) {
                local_90 = plVar20;
                puVar19 = (undefined8 *)(*(long *)(lVar8 + 8) + uVar13 * 0x40);
                (*(code *)*puVar19)(puVar19 + 4,lVar9,&local_90);
                uVar7 = *(ulong *)(lVar8 + 0x130);
              }
              uVar24 = uVar24 + 1;
              lVar22 = lVar22 + 0x10;
            } while (uVar24 < uVar7);
            goto LAB_00d8bcd8;
          }
        }
        plVar20 = (long *)(lVar16 + 0x48);
        lVar8 = *plVar20;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 == lVar8) {
          plVar20 = (long *)0x0;
          bVar17 = true;
        }
        else {
          lVar9 = nn::os::GetCurrentThread();
          do {
            if (*plVar20 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x50));
                while (*plVar20 == 0) {
                  cVar5 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar17) {
                    *plVar20 = lVar9;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d8bd08;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar17) {
              *plVar20 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d8bd08:
          bVar17 = false;
        }
        plVar18 = (long *)(lVar16 + 0x60);
        puVar19 = (undefined8 *)*plVar18;
        puVar26 = *(undefined8 **)(lVar16 + 0x68);
        puVar23 = puVar19;
        if (puVar19 != puVar26) {
          do {
            (*(code *)*puVar19)(puVar19 + 4);
            puVar19 = puVar19 + 0x20;
          } while (puVar19 != puVar26);
          puVar23 = *(undefined8 **)(lVar16 + 0x60);
          puVar26 = *(undefined8 **)(lVar16 + 0x68);
          if (puVar26 == puVar23) {
            puVar19 = puVar26;
            puVar23 = puVar26;
          }
          else {
            puVar19 = puVar23;
            if (puVar23 != puVar26) {
              do {
                pcVar12 = (code *)puVar26[-0x1f];
                puVar19 = puVar26 + -0x20;
                if (pcVar12 != (code *)0x0) {
                  puVar26[-0x1e] = 0;
                  puVar26[-0x1d] = 0;
                  puVar26[-0x20] = 0;
                  puVar26[-0x1f] = 0;
                  (*pcVar12)(puVar26 + -0x1c);
                }
                puVar26 = puVar19;
              } while (puVar23 != puVar19);
              puVar19 = (undefined8 *)*plVar18;
            }
            *(undefined8 **)(lVar16 + 0x68) = puVar23;
          }
        }
        lVar9 = (long)puVar23 - (long)puVar19;
        if ((ulong)(lVar9 >> 8) < (ulong)(*(long *)(lVar16 + 0x70) - (long)puVar19 >> 8)) {
          puVar19 = (undefined8 *)(lVar16 + 0x78);
          local_78 = (long *)0x0;
          puStack_70 = puVar19;
          if (lVar9 == 0) {
            plVar10 = (long *)0x0;
          }
          else {
            plVar10 = (long *)(**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,lVar9,0x10);
            if (plVar10 == (long *)0x0) {
              (**(code **)(*(long *)*puVar19 + 0xe8))();
            }
          }
          plStack_88 = plVar10 + (lVar9 >> 8) * 0x20;
          local_90 = plVar10;
          local_80 = plStack_88;
          local_78 = plStack_88;
          FUN_0103b38c(plVar18,&local_90);
          FUN_0103bbd0(&local_90);
        }
        if (!bVar17) {
          *plVar20 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
        }
        plVar20 = (long *)(lVar16 + 0x98);
        lVar8 = *plVar20;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 == lVar8) {
          plVar20 = (long *)0x0;
          bVar17 = true;
        }
        else {
          lVar9 = nn::os::GetCurrentThread();
          do {
            if (*plVar20 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xa0));
                while (*plVar20 == 0) {
                  cVar5 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar17) {
                    *plVar20 = lVar9;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d8bd78;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar17) {
              *plVar20 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d8bd78:
          bVar17 = false;
        }
        lVar9 = *(long *)(lVar16 + 0xb8) - (long)*(undefined8 **)(lVar16 + 0xb0);
        if (lVar9 != 0) {
          lVar9 = lVar9 >> 3;
          puVar19 = *(undefined8 **)(lVar16 + 0xb0);
          do {
            FUN_01984a80(lVar16,*puVar19);
            lVar9 = lVar9 + -1;
            puVar19 = puVar19 + 1;
          } while (lVar9 != 0);
          if (*(long *)(lVar16 + 0xb8) != *(long *)(lVar16 + 0xb0)) {
            *(long *)(lVar16 + 0xb8) = *(long *)(lVar16 + 0xb0);
          }
        }
        if (!bVar17) {
          *plVar20 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
        }
        *(undefined8 *)(lVar16 + 0x30) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x38));
        FUN_00df0ef4(plVar15);
        plVar20 = (long *)(lVar11 + 0x2b8);
        lVar9 = nn::os::GetCurrentThread();
        do {
          lVar8 = *plVar20;
          lVar16 = *(long *)(lVar11 + 0x2c0);
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar17) {
            *plVar20 = lVar8;
            *(long *)(lVar11 + 0x2c0) = lVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00d8bdcc:
        while ((lVar8 != 0 && (lVar9 != lVar8))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2c8));
          do {
            lVar8 = *plVar20;
            lVar16 = *(long *)(lVar11 + 0x2c0);
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar17) {
              *plVar20 = lVar8;
              *(long *)(lVar11 + 0x2c0) = lVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        do {
          lVar21 = *plVar20;
          if (lVar21 != lVar8 || *(long *)(lVar11 + 0x2c0) != lVar16) {
            bVar17 = false;
            ClearExclusiveLocal();
            goto LAB_00d8be08;
          }
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar17) {
            *plVar20 = lVar8;
            *(long *)(lVar11 + 700) = lVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar17 = true;
LAB_00d8be08:
        if (!bVar17) {
          lVar8 = lVar21;
          lVar16 = *(long *)(lVar11 + 0x2c0);
          goto LAB_00d8bdcc;
        }
        memcpy(param_2,__src,0xd0);
        memcpy(__src,local_180,0xd0);
        do {
          lVar9 = *plVar20;
          lVar8 = *(long *)(lVar11 + 0x2c0);
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar17) {
            *plVar20 = lVar9;
            *(long *)(lVar11 + 0x2c0) = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          lVar16 = *plVar20;
          lVar21 = *(long *)(lVar11 + 0x2c0);
          if (lVar16 != lVar9 || lVar21 != lVar8) {
            bVar17 = false;
            ClearExclusiveLocal();
            goto joined_r0x00d8bebc;
          }
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar17) {
            *plVar20 = lVar9;
            *(long *)(lVar11 + 700) = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar17 = true;
joined_r0x00d8bebc:
        do {
          if (bVar17) {
            nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x2c8));
            if (local_a8 != (long *)0x0) {
              plVar20 = local_a8 + 5;
              do {
                lVar11 = *plVar20;
                iVar6 = (int)lVar11 + -1;
                cVar5 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *(int *)plVar20 = iVar6;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*local_a8 + 0x10))();
              }
              else if ((int)lVar11 == 0) {
LAB_00d8c2c0:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x60))();
            }
            (**(code **)(*plVar15 + 0x60))(plVar15);
            bVar17 = false;
            goto LAB_00d8bc4c;
          }
          do {
            lVar9 = *plVar20;
            lVar8 = *(long *)(lVar11 + 0x2c0);
            if (lVar9 != lVar16 || lVar8 != lVar21) {
              bVar17 = false;
              ClearExclusiveLocal();
              lVar16 = lVar9;
              lVar21 = lVar8;
              goto joined_r0x00d8bebc;
            }
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar17) {
              *plVar20 = lVar16;
              *(long *)(lVar11 + 700) = lVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar17 = true;
          lVar16 = lVar9;
          lVar21 = lVar8;
        } while( true );
      }
    }
LAB_00d8bc48:
    bVar17 = true;
LAB_00d8bc4c:
    if (local_a0[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0[0] + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_a0[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_180[0] = *local_a0[0];
          FUN_00c44438(lVar11 + 0x8040,local_180);
        }
      }
      else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (!bVar17) {
      return 1;
    }
  }
  return 0;
code_r0x00d8bbc8:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_00d8bc48;
  goto LAB_00d8bb9c;
}


