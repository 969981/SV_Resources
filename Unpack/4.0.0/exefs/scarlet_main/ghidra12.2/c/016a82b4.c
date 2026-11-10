/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a82b4; name: FUN_016a82b4
 */


void FUN_016a82b4(long param_1,uint param_2,undefined8 param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  short sVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  long local_90;
  long *local_88;
  undefined8 local_80;
  long lStack_78;
  long *local_70;
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  uVar14 = *(ulong *)(param_1 + 0xe8);
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar20 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar15 = (ulong)param_2;
    if (uVar20 < 2) {
      uVar16 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar16 = uVar15;
      if (uVar14 <= uVar15) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar15 / uVar14;
        }
        uVar16 = uVar15 - uVar16 * uVar14;
      }
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0xe0) + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar19[1] == uVar15) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_016a8378;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar19[1];
          if (uVar20 == uVar15) {
            if (*(uint *)(plVar19 + 2) == param_2) goto LAB_016a8378;
          }
          else {
            if (uVar14 <= uVar20) {
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar20 / uVar14;
              }
              uVar20 = uVar20 - uVar6 * uVar14;
            }
            if (uVar20 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  goto LAB_016a838c;
code_r0x016a8420:
  sVar18 = sVar4;
  if (sVar4 == 0) goto LAB_016a8428;
  goto LAB_016a83f4;
code_r0x016a85a8:
  cVar5 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar17) {
    *plVar22 = lVar21;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_016a85b0;
  goto LAB_016a85a0;
LAB_016a8378:
  FUN_00f53cf4(&local_a8,plVar19[3]);
  if (local_a8 != (undefined8 *)0x0) {
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar18 = *(short *)((long)local_a8 + 0x1a);
LAB_016a83f4:
      sVar4 = *psVar1;
      if (sVar4 == sVar18) {
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_016a8418;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_016a8418:
        bVar17 = false;
      }
      if (!bVar17) goto code_r0x016a8420;
      lVar13 = local_a8[2];
      if (lVar13 == 0) goto LAB_016a8428;
      if (*(long *)(lVar13 + 0x28) == 0) {
        uVar14 = FUN_00dc5c18(lVar13 + 0x20,1,param_3,0,0);
        if ((uVar14 & 1) == 0) {
          plVar19 = (long *)0x0;
          goto LAB_016a84f8;
        }
        plVar19 = *(long **)(lVar13 + 0x40);
        if (plVar19 == (long *)0x0) goto LAB_016a84f8;
        lVar21 = plVar19[6];
        if (*(long *)(lVar21 + 0x10) == 0) goto LAB_016a8c40;
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
          *(undefined8 *)(lVar21 + 8) = uVar9;
          *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) goto LAB_016a8914;
LAB_016a84f8:
        if (((*PTR_DAT_047d8c58 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c58);
        }
        uVar9 = *(undefined8 *)PTR_DAT_047d8c60;
        *(undefined8 *)PTR_DAT_047d8c68 = uVar9;
        FUN_00cbf5d4(&local_b0,uVar9,plVar19[1]);
        local_88 = local_b0;
        local_98 = param_2;
        local_90 = param_1;
        if (local_b0 != (long *)0x0) {
          lVar21 = local_b0[6];
          if (*(long *)(lVar21 + 0x10) == 0) goto LAB_016a8c40;
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar18 == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
            *(undefined8 *)(lVar21 + 8) = uVar9;
            *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
          }
          else if (sVar18 == -1) goto LAB_016a8914;
        }
        plVar24 = (long *)0x0;
        if (local_b0 != (long *)0x0) {
          plVar24 = local_b0 + 0xb;
        }
        if ((*(byte *)((long)plVar19 + 0x6d) & 1) == 0) {
          if ((*(byte *)((long)plVar19 + 0x6c) & 1) == 0) {
            plVar22 = plVar19 + 0xf;
            lVar21 = nn::os::GetCurrentThread();
LAB_016a85a0:
            if (*plVar22 == 0) goto code_r0x016a85a8;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar19 + 0x10));
            do {
              if (*plVar22 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(plVar19 + 0x10));
                  while (*plVar22 == 0) {
                    cVar5 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar17) {
                      *plVar22 = lVar21;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_016a85b0;
                  }
                } while( true );
              }
              cVar5 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar17) {
                *plVar22 = lVar21;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_016a85b0:
            if ((*(byte *)((long)plVar19 + 0x6c) & 1) == 0) {
              local_80 = CONCAT44(uStack_94,local_98);
              lStack_78 = local_90;
              local_70 = local_88;
              if (local_88 != (long *)0x0) {
                lVar21 = local_88[6];
                if (*(long *)(lVar21 + 0x10) == 0) {
LAB_016a8c40:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("m_object != nullptr","AddReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x3d);
                }
                psVar1 = (short *)(lVar21 + 0x1a);
                do {
                  sVar18 = *psVar1;
                  cVar5 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar17) {
                    *psVar1 = sVar18 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar18 == 0) {
                  uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                  *(undefined8 *)(lVar21 + 8) = uVar9;
                  *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
                }
                else if (sVar18 == -1) {
LAB_016a8914:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != 0","AddReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x58,"Reference counter overflows.");
                }
              }
              local_68 = plVar24;
              if ((ulong)plVar19[0x1a] < (ulong)plVar19[0x1b]) {
                FUN_0221de80(plVar19 + 0x19,&local_80);
                if (local_70 != (long *)0x0) {
                  lVar21 = local_70[6];
                  psVar1 = (short *)(lVar21 + 0x1a);
                  do {
                    sVar18 = *psVar1;
                    cVar5 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar17) {
                      *psVar1 = sVar18 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (sVar18 == 1) {
                    *(undefined8 *)(lVar21 + 0x10) = 0;
                    (**(code **)(*local_70 + 0x50))();
                  }
                  else if (sVar18 == 0) goto LAB_016a8870;
                }
              }
              else {
                uVar14 = plVar19[0x1d];
                lVar21 = plVar19[0x1a] - plVar19[0x19] >> 4;
                if (0x7ffffffffffffffe < uVar14) {
                  uVar14 = 0x7fffffffffffffff;
                }
                uVar15 = lVar21 * -0x71c71c71c71c71c7 + 1;
                if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar11 = plVar19[0x1b] - plVar19[0x19] >> 4;
                uVar20 = lVar11 * 0x1c71c71c71c71c72;
                if (uVar15 <= uVar20) {
                  uVar15 = uVar20;
                }
                plVar22 = plVar19 + 0x1c;
                if (uVar14 >> 1 <= (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
                  uVar15 = uVar14;
                }
                if (uVar15 == 0) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = (**(code **)(*(long *)*plVar22 + 0x10))
                                     ((long *)*plVar22,uVar15 * 0x90,0x10);
                  if (lVar11 == 0) {
                    (**(code **)(*(long *)*plVar22 + 0xe8))();
                  }
                }
                lVar25 = *plVar22;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                plVar7 = local_70;
                if (lVar10 != 0) {
                  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar25;
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                  plVar24 = local_68;
                }
                lVar25 = lVar11 + lVar21 * 0x10;
                *(undefined8 *)(lVar25 + 0x10) = 0;
                *(undefined8 *)(lVar25 + 0x18) = 0;
                *(undefined8 *)(lVar25 + 0x20) = local_80;
                *(long *)(lVar25 + 0x28) = lStack_78;
                puVar23 = (undefined8 *)(lVar11 + lVar21 * 0x10);
                local_70 = (long *)0x0;
                *(long **)(lVar25 + 0x30) = plVar7;
                *puVar23 = &LAB_01553d98;
                *(undefined1 **)(lVar25 + 8) = &LAB_02b78b34;
                *(undefined1 **)(lVar25 + 0x10) = &LAB_02b78bac;
                *(undefined1 **)(lVar25 + 0x18) = &LAB_02b78c74;
                *(long **)(lVar25 + 0x80) = plVar24;
                if (lVar10 != 0) {
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                }
                lVar21 = plVar19[0x19];
                lVar25 = plVar19[0x1a];
                puVar2 = puVar23 + 0x12;
                if (lVar25 == lVar21) {
                  lVar25 = lVar21;
                }
                else {
                  do {
                    puVar23 = puVar23 + -0x12;
                    lVar25 = lVar25 + -0x90;
                    FUN_00cbf394(plVar22,puVar23,lVar25);
                  } while (lVar21 != lVar25);
                  lVar21 = plVar19[0x19];
                  lVar25 = plVar19[0x1a];
                }
                plVar19[0x19] = (long)puVar23;
                plVar19[0x1a] = (long)puVar2;
                lVar10 = plVar19[0x1b];
                plVar19[0x1b] = lVar11 + uVar15 * 0x90;
                while (lVar11 = lVar25, lVar11 != lVar21) {
                  pcVar12 = *(code **)(lVar11 + -0x88);
                  lVar25 = lVar11 + -0x90;
                  if (pcVar12 != (code *)0x0) {
                    *(undefined8 *)(lVar11 + -0x80) = 0;
                    *(undefined8 *)(lVar11 + -0x78) = 0;
                    *(undefined8 *)(lVar11 + -0x90) = 0;
                    *(undefined8 *)(lVar11 + -0x88) = 0;
                    (*pcVar12)(lVar11 + -0x70);
                  }
                }
                if (lVar21 != 0) {
                  plVar22 = (long *)*plVar22;
                  uVar14 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar14 & 1) == 0) ||
                     (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))(plVar22,lVar21,lVar10 - lVar21,0x10);
                  }
                  else {
                    FUN_00c48fe8(plVar22,lVar21,lVar10 - lVar21,0x10);
                  }
                }
              }
            }
            else {
              FUN_01553da8(&local_98,plVar19[0xc],(int)plVar19[0xd]);
            }
            plVar19[0xf] = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar19 + 0x10));
            goto LAB_016a87d0;
          }
          FUN_01553da8(&local_98,plVar19[0xc],(int)plVar19[0xd]);
        }
LAB_016a87d0:
        if (local_88 != (long *)0x0) {
          lVar21 = local_88[6];
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*local_88 + 0x50))();
          }
          else if (sVar18 == 0) goto LAB_016a8870;
        }
        if (local_b0 != (long *)0x0) {
          lVar21 = local_b0[6];
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*local_b0 + 0x50))();
          }
          else if (sVar18 == 0) goto LAB_016a8870;
        }
        lVar21 = plVar19[6];
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar21 + 0x10) = 0;
          (**(code **)(*plVar19 + 0x50))(plVar19);
        }
        else if (sVar18 == 0) goto LAB_016a8870;
        lVar21 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      else {
        lVar21 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (sVar18 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
      }
      else if (sVar18 == 0) {
LAB_016a8870:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
LAB_016a8428:
    puVar23 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a8 + 3);
      do {
        sVar18 = *psVar1;
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        piVar3 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar17) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_80 = *puVar23;
          FUN_00c44438(lVar13 + 0x8040,&local_80);
        }
      }
      else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_016a838c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
}


