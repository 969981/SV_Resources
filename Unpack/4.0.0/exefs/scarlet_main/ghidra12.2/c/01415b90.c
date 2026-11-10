/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01415b90; name: FUN_01415b90
 */


void FUN_01415b90(short *param_1,ulong param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  long *plVar4;
  undefined8 *puVar5;
  short sVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  
  lVar33 = *(long *)(param_1 + 8);
  nn::os::LockMutex((MutexType *)(lVar33 + 0x60));
  plVar13 = (long *)(lVar33 + 0xe8);
  plVar12 = (long *)FUN_00f618d8(*(undefined8 *)(param_1 + 4));
  uVar16 = *(ulong *)(lVar33 + 0xf0);
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar25 = plVar12[1];
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar19 = uVar16 - 1 & uVar25;
    }
    else if (uVar25 < uVar16) {
      uVar19 = uVar25;
    }
    else {
      uVar19 = 0;
      if (uVar16 != 0) {
        uVar19 = uVar25 / uVar16;
      }
      uVar19 = uVar25 - uVar19 * uVar16;
    }
    plVar21 = *(long **)(*plVar13 + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      plVar4 = (long *)PTR_DAT_047d8b70;
      if (*plVar12 != 0) {
        plVar4 = (long *)(*plVar12 + 0x30);
      }
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == uVar25) {
            plVar12 = (long *)PTR_DAT_047d8b70;
            if (plVar21[2] != 0) {
              plVar12 = (long *)(plVar21[2] + 0x30);
            }
            if (*plVar12 == *plVar4) goto LAB_01415c4c;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == uVar25) {
            plVar12 = (long *)PTR_DAT_047d8b70;
            if (plVar21[2] != 0) {
              plVar12 = (long *)(plVar21[2] + 0x30);
            }
            if (*plVar12 == *plVar4) goto LAB_01415c4c;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar24 = 0;
              if (uVar16 != 0) {
                uVar24 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar24 * uVar16;
            }
            if (uVar17 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  if ((param_3 == 0) && ((param_2 >> 0x20 & 0xff) != 0)) {
    uVar16 = *(ulong *)(lVar33 + 0x30);
    puVar22 = (undefined8 *)(lVar33 + 0x40);
    uVar31 = *(undefined8 *)(param_1 + 4);
    if (uVar16 < *(ulong *)(lVar33 + 0x38)) {
      FUN_01416e0c(puVar22,uVar16,uVar31);
      *(ulong *)(lVar33 + 0x30) = uVar16 + 0x40;
    }
    else {
      uVar17 = *(ulong *)(lVar33 + 0x48);
      lVar20 = (long)(uVar16 - *(long *)(lVar33 + 0x28)) >> 6;
      uVar16 = lVar20 + 1;
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (uVar17 < uVar16) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = *(ulong *)(lVar33 + 0x38) - *(long *)(lVar33 + 0x28);
      uVar25 = lVar14 >> 5;
      if (uVar16 <= uVar25) {
        uVar16 = uVar25;
      }
      if (uVar17 >> 1 <= (ulong)(lVar14 >> 6)) {
        uVar16 = uVar17;
      }
      if (uVar16 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = (**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,uVar16 << 6,8);
        if (lVar14 == 0) {
          (**(code **)(*(long *)*puVar22 + 0xe8))();
        }
      }
      lVar20 = lVar14 + lVar20 * 0x40;
      FUN_01416e0c(puVar22,lVar20,uVar31);
      lVar27 = *(long *)(lVar33 + 0x28);
      lVar32 = *(long *)(lVar33 + 0x30);
      lVar30 = lVar20;
      if (lVar32 == lVar27) {
        lVar32 = lVar27;
      }
      else {
        puVar1 = PTR_DAT_047d9c80 + 0x10;
        puVar2 = PTR_DAT_047d8e88 + 0x10;
        do {
          uVar31 = *puVar22;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar28 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar28 == 0) {
            *(undefined8 *)(lVar30 + -0x38) = 0;
            *(undefined8 *)(lVar30 + -0x30) = 0;
            *(undefined8 *)(lVar30 + -0x28) = 0;
            *(undefined8 *)(lVar30 + -0x20) = 0;
            *(undefined8 *)(lVar30 + -0x18) = 0;
            *(undefined **)(lVar30 + -0x40) = puVar1;
            *(undefined8 *)(lVar30 + -0x10) = 0;
            *(undefined8 *)(lVar30 + -8) = 0;
            FUN_01060890((undefined8 *)(lVar30 + -0x38),lVar32 + -0x38);
            plVar12 = *(long **)(lVar30 + -0x28);
            *(undefined8 *)(lVar30 + -0x28) = 0;
            if (plVar12 != (long *)0x0) {
              lVar28 = plVar12[6];
              psVar3 = (short *)(lVar28 + 0x1a);
              do {
                sVar6 = *psVar3;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar9) {
                  *psVar3 = sVar6 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (sVar6 == 1) {
                *(undefined8 *)(lVar28 + 0x10) = 0;
                (**(code **)(*plVar12 + 0x50))();
              }
              else if (sVar6 == 0) goto LAB_014164b4;
            }
            uVar31 = *(undefined8 *)(lVar32 + -0x28);
            *(undefined8 *)(lVar32 + -0x28) = 0;
            *(undefined8 *)(lVar30 + -0x28) = uVar31;
            FUN_00ecc978(lVar30 + -0x20,lVar32 + -0x20);
            FUN_00eccc4c(lVar30 + -0x10,lVar32 + -0x10);
            *(undefined **)(lVar30 + -0x40) = puVar2;
          }
          else {
            if (0xf < *(ulong *)(lVar28 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = uVar31;
            *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
            *(undefined8 *)(lVar30 + -0x38) = 0;
            *(undefined **)(lVar30 + -0x40) = PTR_DAT_047d9c80 + 0x10;
            *(undefined8 *)(lVar30 + -0x30) = 0;
            *(undefined8 *)(lVar30 + -0x28) = 0;
            *(undefined8 *)(lVar30 + -0x20) = 0;
            *(undefined8 *)(lVar30 + -0x18) = 0;
            *(undefined8 *)(lVar30 + -0x10) = 0;
            *(undefined8 *)(lVar30 + -8) = 0;
            FUN_01060890((undefined8 *)(lVar30 + -0x38),lVar32 + -0x38);
            plVar12 = *(long **)(lVar30 + -0x28);
            *(undefined8 *)(lVar30 + -0x28) = 0;
            if (plVar12 != (long *)0x0) {
              lVar15 = plVar12[6];
              psVar3 = (short *)(lVar15 + 0x1a);
              do {
                sVar6 = *psVar3;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar9) {
                  *psVar3 = sVar6 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (sVar6 == 1) {
                *(undefined8 *)(lVar15 + 0x10) = 0;
                (**(code **)(*plVar12 + 0x50))();
              }
              else if (sVar6 == 0) {
LAB_014164b4:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            uVar31 = *(undefined8 *)(lVar32 + -0x28);
            *(undefined8 *)(lVar32 + -0x28) = 0;
            *(undefined8 *)(lVar30 + -0x28) = uVar31;
            FUN_00ecc978(lVar30 + -0x20,lVar32 + -0x20);
            FUN_00eccc4c(lVar30 + -0x10,lVar32 + -0x10);
            *(undefined **)(lVar30 + -0x40) = PTR_DAT_047d8e88 + 0x10;
            *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
          }
          lVar32 = lVar32 + -0x40;
          lVar30 = lVar30 + -0x40;
        } while (lVar32 != lVar27);
        lVar32 = *(long *)(lVar33 + 0x28);
        lVar27 = *(long *)(lVar33 + 0x30);
      }
      lVar28 = *(long *)(lVar33 + 0x38);
      *(ulong *)(lVar33 + 0x38) = lVar14 + uVar16 * 0x40;
      *(long *)(lVar33 + 0x28) = lVar30;
      *(long *)(lVar33 + 0x30) = lVar20 + 0x40;
      if ((lVar27 != lVar32) && (FUN_00db239c(lVar27 + -0x40), lVar27 + -0x40 != lVar32)) {
        do {
          FUN_00db239c(lVar27 + -0x80);
          lVar27 = lVar27 + -0x40;
        } while (lVar32 + 0x40 != lVar27);
      }
      if (lVar32 != 0) {
        plVar12 = (long *)*puVar22;
        lVar28 = lVar28 - lVar32;
        uVar16 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar16 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar32,lVar28,8);
        }
        else {
          FUN_00c48fe8(plVar12,lVar32,lVar28,8);
        }
      }
    }
    sVar6 = *param_1;
    sVar7 = param_1[1];
    uVar31 = (**(code **)(**(long **)(*(long *)(param_1 + 4) + 8) + 0x70))();
    FUN_01416750((int)sVar6,(int)sVar7,uVar31,(char)param_1[2]);
  }
LAB_01415c4c:
  plVar12 = (long *)FUN_00f618d8(*(undefined8 *)(param_1 + 4));
  uVar16 = *(ulong *)(lVar33 + 0xf0);
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar25 = plVar12[1];
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar19 = uVar16 - 1 & uVar25;
    }
    else if (uVar25 < uVar16) {
      uVar19 = uVar25;
    }
    else {
      uVar19 = 0;
      if (uVar16 != 0) {
        uVar19 = uVar25 / uVar16;
      }
      uVar19 = uVar25 - uVar19 * uVar16;
    }
    plVar21 = *(long **)(*plVar13 + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      plVar4 = (long *)PTR_DAT_047d8b70;
      if (*plVar12 != 0) {
        plVar4 = (long *)(*plVar12 + 0x30);
      }
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == uVar25) {
            plVar12 = (long *)PTR_DAT_047d8b70;
            if (plVar21[2] != 0) {
              plVar12 = (long *)(plVar21[2] + 0x30);
            }
            if (*plVar12 == *plVar4) goto LAB_0141658c;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == uVar25) {
            plVar12 = (long *)PTR_DAT_047d8b70;
            if (plVar21[2] != 0) {
              plVar12 = (long *)(plVar21[2] + 0x30);
            }
            if (*plVar12 == *plVar4) goto LAB_0141658c;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar24 = 0;
              if (uVar16 != 0) {
                uVar24 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar24 * uVar16;
            }
            if (uVar17 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01415c5c:
  plVar13 = (long *)FUN_00f618d8(*(undefined8 *)(param_1 + 4));
  uVar16 = *(ulong *)(lVar33 + 0x88);
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar19 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar17 = plVar13[1];
    uVar25 = 0;
    if (uVar16 != 0) {
      uVar25 = uVar17 / uVar16;
    }
    if (uVar19 < 2) {
      uVar24 = uVar16 - 1 & uVar17;
    }
    else {
      uVar24 = uVar17;
      if (uVar16 <= uVar17) {
        uVar24 = uVar17 - uVar25 * uVar16;
      }
    }
    lVar20 = *(long *)(lVar33 + 0x80);
    puVar22 = *(undefined8 **)(lVar20 + uVar24 * 8);
    if ((puVar22 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar22, plVar12 != (long *)0x0)) {
      uVar23 = uVar16 - 1;
      plVar21 = (long *)PTR_DAT_047d8b70;
      if (*plVar13 != 0) {
        plVar21 = (long *)(*plVar13 + 0x30);
      }
      if (uVar19 < 2) {
        do {
          if (plVar12[1] == uVar17) {
            plVar13 = (long *)PTR_DAT_047d8b70;
            if (plVar12[2] != 0) {
              plVar13 = (long *)(plVar12[2] + 0x30);
            }
            if (*plVar13 == *plVar21) goto LAB_01415d1c;
          }
          else if ((plVar12[1] & uVar23) != uVar24) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar26 = plVar12[1];
          if (uVar26 == uVar17) {
            plVar13 = (long *)PTR_DAT_047d8b70;
            if (plVar12[2] != 0) {
              plVar13 = (long *)(plVar12[2] + 0x30);
            }
            if (*plVar13 == *plVar21) goto LAB_01415d1c;
          }
          else {
            if (uVar16 <= uVar26) {
              uVar10 = 0;
              if (uVar16 != 0) {
                uVar10 = uVar26 / uVar16;
              }
              uVar26 = uVar26 - uVar10 * uVar16;
            }
            if (uVar26 != uVar24) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01415e38:
  nn::os::UnlockMutex((MutexType *)(lVar33 + 0x60));
  lVar33 = *(long *)(param_1 + 0xc);
  if ((*(byte *)(lVar33 + 0x61) & 1) != 0) {
    return;
  }
  plVar13 = (long *)(lVar33 + 0x68);
  lVar20 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_01415e6c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar33 + 0x70));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar33 + 0x70));
        while (*plVar13 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar9) {
            *plVar13 = lVar20;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_01415e6c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_01415e6c:
  puVar22 = *(undefined8 **)(lVar33 + 0x80);
  puVar5 = *(undefined8 **)(lVar33 + 0x88);
  if (puVar22 != puVar5) {
    if ((*(byte *)(lVar33 + 0x61) & 1) == 0) {
      (*(code *)*puVar22)(puVar22 + 4);
    }
    if ((*(byte *)(lVar33 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar22[0x10])();
      *(int *)(lVar33 + 100) = *(int *)(lVar33 + 100) + 1;
    }
    while (puVar22 = puVar22 + 0x12, puVar22 != puVar5) {
      if ((*(byte *)(lVar33 + 0x61) & 1) == 0) {
        (*(code *)*puVar22)(puVar22 + 4);
      }
      if ((*(byte *)(lVar33 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar22[0x10])();
        *(int *)(lVar33 + 100) = *(int *)(lVar33 + 100) + 1;
      }
    }
    puVar22 = *(undefined8 **)(lVar33 + 0x80);
    puVar5 = *(undefined8 **)(lVar33 + 0x88);
    if (puVar5 != puVar22) {
      pcVar18 = (code *)puVar5[-0x11];
      puVar29 = puVar5 + -0x12;
      if (pcVar18 != (code *)0x0) {
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        *puVar29 = 0;
        puVar5[-0x11] = 0;
        (*pcVar18)(puVar5 + -0xe);
      }
      while (puVar5 = puVar29, puVar5 != puVar22) {
        pcVar18 = (code *)puVar5[-0x11];
        puVar29 = puVar5 + -0x12;
        if (pcVar18 != (code *)0x0) {
          puVar5[-0x10] = 0;
          puVar5[-0xf] = 0;
          puVar5[-0x12] = 0;
          puVar5[-0x11] = 0;
          (*pcVar18)(puVar5 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar33 + 0x88) = puVar22;
  *(undefined1 *)(lVar33 + 0x60) = 1;
  if ((*(byte *)(lVar33 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar33 + 0x40),lVar33);
    *(byte *)(lVar33 + 0x50) = 1;
  }
  *(undefined8 *)(lVar33 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar33 + 0x70));
  return;
LAB_0141658c:
  FUN_02005ac4(plVar13);
  goto LAB_01415c5c;
LAB_01415d1c:
  if (uVar19 < 2) {
    uVar17 = uVar23 & uVar17;
  }
  else if (uVar16 <= uVar17) {
    uVar17 = uVar17 - uVar25 * uVar16;
  }
  plVar13 = *(long **)(lVar20 + uVar17 * 8);
  for (plVar21 = (long *)*plVar13; plVar21 != plVar12; plVar21 = (long *)*plVar21) {
    plVar13 = plVar21;
  }
  if (plVar13 == (long *)(lVar33 + 0xb0)) {
LAB_01415d70:
    if (*plVar12 != 0) {
      uVar25 = *(ulong *)(*plVar12 + 8);
      if (uVar19 < 2) {
        uVar25 = uVar25 & uVar23;
      }
      else if (uVar16 <= uVar25) {
        uVar24 = 0;
        if (uVar16 != 0) {
          uVar24 = uVar25 / uVar16;
        }
        uVar25 = uVar25 - uVar24 * uVar16;
      }
      if (uVar25 == uVar17) goto LAB_01415da0;
    }
    *(undefined8 *)(lVar20 + uVar17 * 8) = 0;
  }
  else {
    uVar25 = plVar13[1];
    if (uVar19 < 2) {
      uVar25 = uVar25 & uVar23;
    }
    else if (uVar16 <= uVar25) {
      uVar24 = 0;
      if (uVar16 != 0) {
        uVar24 = uVar25 / uVar16;
      }
      uVar25 = uVar25 - uVar24 * uVar16;
    }
    if (uVar25 != uVar17) goto LAB_01415d70;
  }
LAB_01415da0:
  lVar20 = *plVar12;
  if (lVar20 != 0) {
    uVar25 = *(ulong *)(lVar20 + 8);
    if (uVar19 < 2) {
      uVar25 = uVar25 & uVar23;
    }
    else if (uVar16 <= uVar25) {
      uVar19 = 0;
      if (uVar16 != 0) {
        uVar19 = uVar25 / uVar16;
      }
      uVar25 = uVar25 - uVar19 * uVar16;
    }
    if (uVar25 != uVar17) {
      *(long **)(*(long *)(lVar33 + 0x80) + uVar25 * 8) = plVar13;
      lVar20 = *plVar12;
    }
  }
  *plVar13 = lVar20;
  *plVar12 = 0;
  *(long *)(lVar33 + 0xd8) = *(long *)(lVar33 + 0xd8) + -1;
  FUN_00db239c(plVar12 + 8);
  if ((long *)plVar12[6] != (long *)0x0) {
    (**(code **)(*(long *)plVar12[6] + 0x20))();
  }
  if ((long *)plVar12[2] != (long *)0x0) {
    (**(code **)(*(long *)plVar12[2] + 0x20))();
  }
  plVar13 = *(long **)(lVar33 + 0xb8);
  uVar16 = (**(code **)(*plVar13 + 0xf8))(plVar13);
  if (((uVar16 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
    (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x80,8);
  }
  else {
    FUN_00c48fe8(plVar13,plVar12,0x80,8);
  }
  goto LAB_01415e38;
}


