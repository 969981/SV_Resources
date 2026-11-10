/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011ca544; name: FUN_011ca544
 */


void FUN_011ca544(undefined8 *param_1,ulong param_2,int param_3)

{
  MutexType *pMVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  char *pcVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  code *pcVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  char *pcVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  ulong local_2d0;
  long *local_2b8;
  long *local_2b0 [4];
  long *local_290;
  ulong local_280;
  long local_278;
  long local_270;
  long *local_268;
  long *local_80;
  undefined8 *puStack_78;
  undefined1 local_70;
  
  puVar9 = PTR_DAT_047d8b70;
  lVar28 = param_1[1];
  if ((param_3 == 0) && ((param_2 >> 0x20 & 0xff) != 0)) {
    plVar12 = (long *)FUN_011cb180(*param_1);
    plVar14 = (long *)PTR_PTR_047d4508;
    puVar2 = (ulong *)PTR_PTR_047d4508;
    if (*plVar12 != 0) {
      puVar2 = (ulong *)(*plVar12 + 0x38);
    }
    local_280 = *puVar2;
    FUN_0110eb84(local_2b0,&local_280,&DAT_03c886bc,(int)plVar12[5]);
    plVar12 = plVar14;
    if (local_2b0[0] != (long *)0x0) {
      plVar12 = local_2b0[0] + 7;
    }
    pcVar13 = strrchr((char *)*plVar12,0x2f);
    if (pcVar13 == (char *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      pcVar26 = *(char **)(PTR_DAT_047d3e30 + 8);
      plVar12 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      pcVar26 = pcVar13 + 1;
      if (*pcVar26 == '\0') {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = (long *)0x0;
        pcVar13 = pcVar13 + 2;
        do {
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 != '\0');
      }
    }
    bVar4 = *(byte *)(lVar28 + 0x170);
    memset(&local_280,0,0x200);
    snprintf((char *)&local_280,0x200,"%s%d",pcVar26,(ulong)bVar4);
    FUN_00f12608(&local_2b8,&local_280);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    plVar12 = local_2b8;
    puVar2 = (ulong *)puVar9;
    if (local_2b8 != (long *)0x0) {
      plVar14 = local_2b8 + 7;
      puVar2 = (ulong *)(local_2b8 + 6);
    }
    local_280 = *puVar2;
    local_278 = *plVar14;
    if (local_2b8 == (long *)0x0) {
      local_270 = 0;
    }
    else {
      local_270 = local_2b8[8];
    }
    local_268 = (long *)0x0;
    if (local_2b8 != (long *)0x0) {
      (**(code **)(*local_2b8 + 0x18))(local_2b8);
    }
    local_268 = plVar12;
    plVar14 = (long *)FUN_011cb27c(&local_80,*(undefined8 *)(lVar28 + 8),*param_1);
    if (plVar14 != (long *)0x0) {
      plVar12 = plVar14 + 5;
      do {
        lVar16 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = (int)lVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar16 == -1) goto LAB_011cb10c;
    }
    pMVar1 = (MutexType *)(lVar28 + 0x28);
    uVar15 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
    bVar6 = (uVar15 & 1) == 0;
    if (bVar6) {
      nn::os::LockMutex(pMVar1);
    }
    uVar15 = local_280;
    plVar12 = (long *)(lVar28 + 0x50);
    uVar29 = *(ulong *)(lVar28 + 0x58);
    if (uVar29 != 0) {
      uVar17 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar29 - 1 & local_280;
      }
      else {
        uVar18 = local_280;
        if (uVar29 <= local_280) {
          uVar18 = 0;
          if (uVar29 != 0) {
            uVar18 = local_280 / uVar29;
          }
          uVar18 = local_280 - uVar18 * uVar29;
        }
      }
      plVar20 = *(long **)(*plVar12 + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == local_280) {
              if (plVar20[2] == local_280) goto LAB_011ca778;
            }
            else if ((plVar20[1] & uVar29 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == local_280) {
              if (plVar20[2] == local_280) goto LAB_011ca778;
            }
            else {
              if (uVar29 <= uVar17) {
                uVar24 = 0;
                if (uVar29 != 0) {
                  uVar24 = uVar17 / uVar29;
                }
                uVar17 = uVar17 - uVar24 * uVar29;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar20 = plVar14 + 5;
      do {
        lVar16 = *plVar20;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *(int *)plVar20 = (int)lVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar16 == -1) {
LAB_011cb10c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      uVar29 = *(ulong *)(lVar28 + 0x58);
    }
    if (uVar29 != 0) {
      uVar17 = uVar29 - 1;
      if ((uVar29 & uVar17) == 0) {
        local_2d0 = uVar17 & local_280;
        plVar20 = *(long **)(*plVar12 + local_2d0 * 8);
        if (plVar20 != (long *)0x0) {
          do {
            plVar20 = (long *)*plVar20;
            if ((plVar20 == (long *)0x0) ||
               (plVar20[1] != local_280 && (plVar20[1] & uVar17) != local_2d0)) goto LAB_011cadfc;
          } while (plVar20[2] != local_280);
          goto LAB_011cab70;
        }
      }
      else {
        local_2d0 = local_280;
        if (uVar29 <= local_280) {
          uVar17 = 0;
          if (uVar29 != 0) {
            uVar17 = local_280 / uVar29;
          }
          local_2d0 = local_280 - uVar17 * uVar29;
        }
        plVar20 = *(long **)(*plVar12 + local_2d0 * 8);
        if (plVar20 != (long *)0x0) {
          do {
            plVar20 = (long *)*plVar20;
            if (plVar20 == (long *)0x0) goto LAB_011cadfc;
            uVar17 = plVar20[1];
            if (uVar17 != local_280) {
              if (uVar29 <= uVar17) {
                uVar18 = 0;
                if (uVar29 != 0) {
                  uVar18 = uVar17 / uVar29;
                }
                uVar17 = uVar17 - uVar18 * uVar29;
              }
              if (uVar17 != local_2d0) goto LAB_011cadfc;
            }
          } while (plVar20[2] != local_280);
LAB_011cab70:
          if (plVar14 != (long *)0x0) {
            plVar12 = plVar14 + 5;
            do {
              lVar16 = *plVar12;
              iVar11 = (int)lVar16 + -1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *(int *)plVar12 = iVar11;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
            else if ((int)lVar16 == 0) goto LAB_011cab90;
          }
          goto LAB_011ca790;
        }
      }
    }
LAB_011cadfc:
    puVar22 = (undefined8 *)(lVar28 + 0x88);
    plVar20 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,0x40,8);
    if (plVar20 == (long *)0x0) {
      (**(code **)(*(long *)*puVar22 + 0xe8))();
    }
    local_70 = 0;
    uVar19 = *puVar22;
    local_80 = plVar20;
    puStack_78 = puVar22;
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 != 0) {
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar19;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    }
    plVar20[2] = local_280;
    plVar20[3] = local_278;
    plVar20[4] = local_270;
    plVar20[5] = (long)local_268;
    if (local_268 != (long *)0x0) {
      (**(code **)(*local_268 + 0x18))();
    }
    plVar10 = local_80;
    plVar20[6] = (long)plVar14;
    *(undefined4 *)(plVar20 + 7) = 1;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    local_70 = 1;
    *local_80 = 0;
    local_80[1] = uVar15;
    fVar30 = (float)(*(long *)(lVar28 + 0xa8) + 1);
    if ((uVar29 == 0) || (*(float *)(lVar28 + 0xb0) * (float)uVar29 < fVar30)) {
      uVar29 = (ulong)(uVar29 < 3 || (uVar29 & uVar29 - 1) != 0) | uVar29 << 1;
      uVar17 = (ulong)(fVar30 / *(float *)(lVar28 + 0xb0));
      if (uVar17 <= uVar29) {
        uVar17 = uVar29;
      }
      FUN_011cc8a8(plVar12,uVar17);
      uVar29 = *(ulong *)(lVar28 + 0x58);
      if ((uVar29 & uVar29 - 1) == 0) {
        local_2d0 = uVar29 - 1 & uVar15;
      }
      else if (uVar15 < uVar29) {
        local_2d0 = uVar15;
      }
      else {
        uVar17 = 0;
        if (uVar29 != 0) {
          uVar17 = uVar15 / uVar29;
        }
        local_2d0 = uVar15 - uVar17 * uVar29;
      }
    }
    plVar20 = *(long **)(*plVar12 + local_2d0 * 8);
    if (plVar20 == (long *)0x0) {
      plVar20 = (long *)(lVar28 + 0x80);
      *plVar10 = *plVar20;
      *plVar20 = (long)plVar10;
      *(long **)(*(long *)(lVar28 + 0x50) + local_2d0 * 8) = plVar20;
      if (*plVar10 != 0) {
        uVar15 = *(ulong *)(*plVar10 + 8);
        if ((uVar29 & uVar29 - 1) == 0) {
          uVar15 = uVar15 & uVar29 - 1;
        }
        else if (uVar29 <= uVar15) {
          uVar17 = 0;
          if (uVar29 != 0) {
            uVar17 = uVar15 / uVar29;
          }
          uVar15 = uVar15 - uVar17 * uVar29;
        }
        *(long **)(*plVar12 + uVar15 * 8) = plVar10;
      }
    }
    else {
      *plVar10 = *plVar20;
      *plVar20 = (long)plVar10;
    }
    local_80 = (long *)0x0;
    *(long *)(lVar28 + 0xa8) = *(long *)(lVar28 + 0xa8) + 1;
    FUN_01430c10(&local_80);
    goto LAB_011ca790;
  }
LAB_011ca7dc:
  nn::os::LockMutex((MutexType *)(lVar28 + 0x28));
  plVar14 = (long *)FUN_011cb180(*param_1);
  uVar15 = *(ulong *)(lVar28 + 0x180);
  if (uVar15 != 0) {
    uVar29 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar18 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar29 = plVar14[1];
    uVar17 = 0;
    if (uVar15 != 0) {
      uVar17 = uVar29 / uVar15;
    }
    if (uVar18 < 2) {
      uVar24 = uVar15 - 1 & uVar29;
    }
    else {
      uVar24 = uVar29;
      if (uVar15 <= uVar29) {
        uVar24 = uVar29 - uVar17 * uVar15;
      }
    }
    lVar16 = *(long *)(lVar28 + 0x178);
    puVar22 = *(undefined8 **)(lVar16 + uVar24 * 8);
    if ((puVar22 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar22, plVar12 != (long *)0x0)) {
      uVar23 = uVar15 - 1;
      plVar20 = (long *)puVar9;
      if (*plVar14 != 0) {
        plVar20 = (long *)(*plVar14 + 0x30);
      }
      if (uVar18 < 2) {
        do {
          if (plVar12[1] == uVar29) {
            plVar14 = (long *)puVar9;
            if (plVar12[2] != 0) {
              plVar14 = (long *)(plVar12[2] + 0x30);
            }
            if (*plVar14 == *plVar20) goto LAB_011ca8a0;
          }
          else if ((plVar12[1] & uVar23) != uVar24) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar12[1];
          if (uVar25 == uVar29) {
            plVar14 = (long *)puVar9;
            if (plVar12[2] != 0) {
              plVar14 = (long *)(plVar12[2] + 0x30);
            }
            if (*plVar14 == *plVar20) goto LAB_011ca8a0;
          }
          else {
            if (uVar15 <= uVar25) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar25 / uVar15;
              }
              uVar25 = uVar25 - uVar8 * uVar15;
            }
            if (uVar25 != uVar24) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_011ca944:
  nn::os::UnlockMutex((MutexType *)(lVar28 + 0x28));
  lVar28 = param_1[2];
  if ((*(byte *)(lVar28 + 0x61) & 1) != 0) {
    return;
  }
  plVar14 = (long *)(lVar28 + 0x68);
  lVar16 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011ca978;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x70));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x70));
        while (*plVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011ca978;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011ca978:
  puVar22 = *(undefined8 **)(lVar28 + 0x80);
  puVar3 = *(undefined8 **)(lVar28 + 0x88);
  if (puVar22 != puVar3) {
    if ((*(byte *)(lVar28 + 0x61) & 1) == 0) {
      (*(code *)*puVar22)(puVar22 + 4);
    }
    if ((*(byte *)(lVar28 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar22[0x10])();
      *(int *)(lVar28 + 100) = *(int *)(lVar28 + 100) + 1;
    }
    while (puVar22 = puVar22 + 0x12, puVar22 != puVar3) {
      if ((*(byte *)(lVar28 + 0x61) & 1) == 0) {
        (*(code *)*puVar22)(puVar22 + 4);
      }
      if ((*(byte *)(lVar28 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar22[0x10])();
        *(int *)(lVar28 + 100) = *(int *)(lVar28 + 100) + 1;
      }
    }
    puVar22 = *(undefined8 **)(lVar28 + 0x80);
    puVar3 = *(undefined8 **)(lVar28 + 0x88);
    if (puVar3 != puVar22) {
      pcVar21 = (code *)puVar3[-0x11];
      puVar27 = puVar3 + -0x12;
      if (pcVar21 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar27 = 0;
        puVar3[-0x11] = 0;
        (*pcVar21)(puVar3 + -0xe);
      }
      while (puVar3 = puVar27, puVar3 != puVar22) {
        pcVar21 = (code *)puVar3[-0x11];
        puVar27 = puVar3 + -0x12;
        if (pcVar21 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar21)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar28 + 0x88) = puVar22;
  *(undefined1 *)(lVar28 + 0x60) = 1;
  if ((*(byte *)(lVar28 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar28 + 0x40),lVar28);
    *(byte *)(lVar28 + 0x50) = 1;
  }
  *(undefined8 *)(lVar28 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar28 + 0x70));
  return;
LAB_011ca778:
  lVar16 = FUN_011cb3ac(plVar12,&local_280);
  *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
LAB_011ca790:
  if (bVar6) {
    nn::os::UnlockMutex(pMVar1);
  }
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 5;
    do {
      lVar16 = *plVar12;
      iVar11 = (int)lVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar16 == 0) {
LAB_011cab90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_268 != (long *)0x0) {
    (**(code **)(*local_268 + 0x20))();
  }
  if (local_2b8 != (long *)0x0) {
    (**(code **)(*local_2b8 + 0x20))();
  }
  if (local_290 != (long *)0x0) {
    (**(code **)(*local_290 + 0x20))();
  }
  if (local_2b0[0] != (long *)0x0) {
    (**(code **)(*local_2b0[0] + 0x20))();
  }
  goto LAB_011ca7dc;
LAB_011ca8a0:
  if (uVar18 < 2) {
    uVar29 = uVar23 & uVar29;
  }
  else if (uVar15 <= uVar29) {
    uVar29 = uVar29 - uVar17 * uVar15;
  }
  plVar14 = *(long **)(lVar16 + uVar29 * 8);
  for (plVar20 = (long *)*plVar14; plVar20 != plVar12; plVar20 = (long *)*plVar20) {
    plVar14 = plVar20;
  }
  if (plVar14 == (long *)(lVar28 + 0x1a8)) {
LAB_011ca8d0:
    if (*plVar12 != 0) {
      uVar17 = *(ulong *)(*plVar12 + 8);
      if (uVar18 < 2) {
        uVar17 = uVar17 & uVar23;
      }
      else if (uVar15 <= uVar17) {
        uVar24 = 0;
        if (uVar15 != 0) {
          uVar24 = uVar17 / uVar15;
        }
        uVar17 = uVar17 - uVar24 * uVar15;
      }
      if (uVar17 == uVar29) goto LAB_011ca8dc;
    }
    *(undefined8 *)(lVar16 + uVar29 * 8) = 0;
  }
  else {
    uVar17 = plVar14[1];
    if (uVar18 < 2) {
      uVar17 = uVar17 & uVar23;
    }
    else if (uVar15 <= uVar17) {
      uVar24 = 0;
      if (uVar15 != 0) {
        uVar24 = uVar17 / uVar15;
      }
      uVar17 = uVar17 - uVar24 * uVar15;
    }
    if (uVar17 != uVar29) goto LAB_011ca8d0;
  }
LAB_011ca8dc:
  lVar16 = *plVar12;
  if (lVar16 != 0) {
    uVar17 = *(ulong *)(lVar16 + 8);
    if (uVar18 < 2) {
      uVar17 = uVar17 & uVar23;
    }
    else if (uVar15 <= uVar17) {
      uVar18 = 0;
      if (uVar15 != 0) {
        uVar18 = uVar17 / uVar15;
      }
      uVar17 = uVar17 - uVar18 * uVar15;
    }
    if (uVar17 != uVar29) {
      *(long **)(*(long *)(lVar28 + 0x178) + uVar17 * 8) = plVar14;
      lVar16 = *plVar12;
    }
  }
  *plVar14 = lVar16;
  *plVar12 = 0;
  *(long *)(lVar28 + 0x1d0) = *(long *)(lVar28 + 0x1d0) + -1;
  FUN_011fcdfc(plVar12 + 8);
  if ((long *)plVar12[6] != (long *)0x0) {
    (**(code **)(*(long *)plVar12[6] + 0x20))();
  }
  if ((long *)plVar12[2] != (long *)0x0) {
    (**(code **)(*(long *)plVar12[2] + 0x20))();
  }
  plVar14 = *(long **)(lVar28 + 0x1b0);
  uVar15 = (**(code **)(*plVar14 + 0xf8))(plVar14);
  if (((uVar15 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
    (**(code **)(*plVar14 + 0x18))(plVar14,plVar12,0x80,8);
  }
  else {
    FUN_00c48fe8(plVar14,plVar12,0x80,8);
  }
  goto LAB_011ca944;
}


