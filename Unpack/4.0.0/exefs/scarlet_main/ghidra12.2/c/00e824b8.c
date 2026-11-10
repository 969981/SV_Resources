/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e824b8; name: FUN_00e824b8
 */


void FUN_00e824b8(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  bool bVar21;
  long *plVar22;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  plVar20 = (long *)(param_1 + 0x2f0);
  lVar17 = *plVar20;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar17) {
    lVar9 = nn::os::GetCurrentThread();
    bVar21 = false;
LAB_00e82c4c:
    if (*plVar20 == 0) goto code_r0x00e82c54;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
    bVar21 = false;
    do {
      if (*plVar20 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
          while (*plVar20 == 0) {
            cVar4 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar21) {
              *plVar20 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            bVar21 = false;
            if (cVar4 == '\0') goto LAB_00e824f8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar15) {
        *plVar20 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00e824f8;
  }
  bVar21 = true;
LAB_00e824f8:
  puVar7 = PTR_DAT_047d8b70;
  uVar18 = *(ulong *)(param_1 + 0x290);
  uVar12 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar14 = *(ulong *)(param_2 + 0x48);
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar16 = uVar18 - 1 & uVar14;
  }
  else {
    uVar16 = uVar14;
    if (uVar18 <= uVar14) {
      uVar16 = 0;
      if (uVar18 != 0) {
        uVar16 = uVar14 / uVar18;
      }
      uVar16 = uVar14 - uVar16 * uVar18;
    }
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x288) + uVar16 * 8);
  plVar20 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar20 = (long *)*plVar19;
  }
  if (plVar20 != (long *)0x0) {
    bVar11 = 0;
    bVar15 = true;
    do {
      plVar19 = (long *)puVar7;
      if (plVar20[2] != 0) {
        plVar19 = (long *)(plVar20[2] + 0x30);
      }
      plVar22 = (long *)puVar7;
      if (*(long *)(param_2 + 0x40) != 0) {
        plVar22 = (long *)(*(long *)(param_2 + 0x40) + 0x30);
      }
      if (*plVar19 == *plVar22) {
        lVar9 = plVar20[8];
        lVar17 = *(long *)(param_2 + 0x168);
        if (lVar17 == 0) {
          lVar17 = *(long *)(param_2 + 8);
        }
        if (lVar9 == lVar17) {
          plVar19 = plVar20 + 9;
          if ((*plVar19 == 0) || (*(short *)(*plVar19 + 0x1a) == 0)) {
            local_68 = 0;
            local_90 = (undefined8 *)0x0;
            uStack_88 = 0;
            local_78 = (long *)0x0;
            local_70 = (undefined8 *)0x0;
            FUN_00c96b7c(&local_70,&local_90);
            plVar20[8] = 0;
            if ((local_70 != (undefined8 *)0x0) &&
               (plVar22 = (long *)local_70[1], plVar22 != (long *)0x0)) {
              plVar10 = (long *)FUN_01df5d9c();
              do {
                if (plVar22 == plVar10) {
                  FUN_00d1f904(plVar19,&local_70);
                  goto LAB_00e826d4;
                }
                plVar22 = (long *)*plVar22;
              } while (plVar22 != (long *)0x0);
            }
            puVar13 = (undefined8 *)*plVar19;
            *plVar19 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              psVar1 = (short *)(puVar13 + 3);
              do {
                sVar3 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar3 == 1) {
                piVar2 = (int *)((long)puVar13 + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_80 = *puVar13;
                  FUN_00c44438(lVar9 + 0x8040,&local_80);
                }
              }
              else if (sVar3 == 0) goto LAB_00e8278c;
            }
            plVar20[10] = 0;
LAB_00e826d4:
            puVar13 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_70 + 3);
              do {
                sVar3 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar3 == 1) {
                piVar2 = (int *)((long)local_70 + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_80 = *puVar13;
                  FUN_00c44438(lVar9 + 0x8040,&local_80);
                }
              }
              else if (sVar3 == 0) goto LAB_00e8278c;
            }
            puVar13 = local_90;
            if (local_90 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_90 + 3);
              do {
                sVar3 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar3 == 1) {
                piVar2 = (int *)((long)local_90 + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_80 = *puVar13;
                  FUN_00c44438(lVar9 + 0x8040,&local_80);
                }
              }
              else if (sVar3 == 0) {
LAB_00e8278c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            bVar11 = 1;
            goto LAB_00e826f4;
          }
          lVar9 = plVar20[8];
        }
        bVar15 = (bool)(bVar15 & lVar9 == 0);
      }
LAB_00e826f4:
      plVar20 = (long *)*plVar20;
      if (plVar20 != (long *)0x0) {
        uVar14 = plVar20[1];
        if (uVar12 < 2) {
          uVar14 = uVar14 & uVar18 - 1;
        }
        else if (uVar18 <= uVar14) {
          uVar6 = 0;
          if (uVar18 != 0) {
            uVar6 = uVar14 / uVar18;
          }
          uVar14 = uVar14 - uVar6 * uVar18;
        }
        if (uVar14 != uVar16) {
          plVar20 = (long *)0x0;
        }
      }
    } while ((bVar15 || (bool)(bVar11 ^ 1)) && (plVar20 != (long *)0x0));
    if (!bVar15) goto LAB_00e82afc;
    uVar14 = *(ulong *)(param_2 + 0x48);
    uVar18 = *(ulong *)(param_1 + 0x290);
  }
  if (uVar18 != 0) {
    uVar12 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar16 = uVar18 - 1 & uVar14;
    }
    else {
      uVar16 = uVar14;
      if (uVar18 <= uVar14) {
        uVar16 = 0;
        if (uVar18 != 0) {
          uVar16 = uVar14 / uVar18;
        }
        uVar16 = uVar14 - uVar16 * uVar18;
      }
    }
    puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x288) + uVar16 * 8);
    if ((puVar13 != (undefined8 *)0x0) && (plVar20 = (long *)*puVar13, plVar20 != (long *)0x0)) {
      plVar19 = (long *)puVar7;
      if (*(long *)(param_2 + 0x40) != 0) {
        plVar19 = (long *)(*(long *)(param_2 + 0x40) + 0x30);
      }
      if (uVar12 < 2) {
        do {
          if (plVar20[1] == uVar14) {
            plVar22 = (long *)puVar7;
            if (plVar20[2] != 0) {
              plVar22 = (long *)(plVar20[2] + 0x30);
            }
            if (*plVar22 == *plVar19) goto LAB_00e829b8;
          }
          else if ((plVar20[1] & uVar18 - 1) != uVar16) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar20[1];
          if (uVar12 == uVar14) {
            plVar22 = (long *)puVar7;
            if (plVar20[2] != 0) {
              plVar22 = (long *)(plVar20[2] + 0x30);
            }
            if (*plVar22 == *plVar19) goto LAB_00e829b8;
          }
          else {
            if (uVar18 <= uVar12) {
              uVar6 = 0;
              if (uVar18 != 0) {
                uVar6 = uVar12 / uVar18;
              }
              uVar12 = uVar12 - uVar6 * uVar18;
            }
            if (uVar12 != uVar16) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_00e82afc:
  if (!bVar21) {
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
  }
  return;
code_r0x00e82c54:
  cVar4 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar15) {
    *plVar20 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00e824f8;
  goto LAB_00e82c4c;
LAB_00e829b8:
  local_78 = plVar20;
  do {
    uVar12 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    plVar20 = (long *)*local_78;
    uVar14 = local_78[1];
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar14 = uVar14 & uVar18 - 1;
    }
    else if (uVar18 <= uVar14) {
      uVar16 = 0;
      if (uVar18 != 0) {
        uVar16 = uVar14 / uVar18;
      }
      uVar14 = uVar14 - uVar16 * uVar18;
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0x288) + uVar14 * 8);
    for (plVar22 = (long *)*plVar19; plVar22 != local_78; plVar22 = (long *)*plVar22) {
      plVar19 = plVar22;
    }
    if (plVar19 == (long *)(param_1 + 0x2b8)) {
LAB_00e82a4c:
      if (*local_78 != 0) {
        uVar16 = *(ulong *)(*local_78 + 8);
        if (uVar12 < 2) {
          uVar16 = uVar16 & uVar18 - 1;
        }
        else if (uVar18 <= uVar16) {
          uVar6 = 0;
          if (uVar18 != 0) {
            uVar6 = uVar16 / uVar18;
          }
          uVar16 = uVar16 - uVar6 * uVar18;
        }
        if (uVar16 == uVar14) goto LAB_00e82a74;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x288) + uVar14 * 8) = 0;
    }
    else {
      uVar16 = plVar19[1];
      if (uVar12 < 2) {
        uVar16 = uVar16 & uVar18 - 1;
      }
      else if (uVar18 <= uVar16) {
        uVar6 = 0;
        if (uVar18 != 0) {
          uVar6 = uVar16 / uVar18;
        }
        uVar16 = uVar16 - uVar6 * uVar18;
      }
      if (uVar16 != uVar14) goto LAB_00e82a4c;
    }
LAB_00e82a74:
    if (*local_78 != 0) {
      uVar16 = *(ulong *)(*local_78 + 8);
      if (uVar12 < 2) {
        uVar16 = uVar16 & uVar18 - 1;
      }
      else if (uVar18 <= uVar16) {
        uVar12 = 0;
        if (uVar18 != 0) {
          uVar12 = uVar16 / uVar18;
        }
        uVar16 = uVar16 - uVar12 * uVar18;
      }
      if (uVar16 != uVar14) {
        *(long **)(*(long *)(param_1 + 0x288) + uVar16 * 8) = plVar19;
      }
    }
    *plVar19 = *local_78;
    *local_78 = 0;
    *(long *)(param_1 + 0x2e0) = *(long *)(param_1 + 0x2e0) + -1;
    local_68 = CONCAT71(local_68._1_7_,1);
    local_70 = (undefined8 *)(param_1 + 0x2c0);
    FUN_00e82cc0(&local_78);
    if (plVar20 == (long *)0x0) goto LAB_00e82afc;
    plVar19 = (long *)puVar7;
    if (plVar20[2] != 0) {
      plVar19 = (long *)(plVar20[2] + 0x30);
    }
    plVar22 = (long *)puVar7;
    if (*(long *)(param_2 + 0x40) != 0) {
      plVar22 = (long *)(*(long *)(param_2 + 0x40) + 0x30);
    }
    if (*plVar19 != *plVar22) goto LAB_00e82afc;
    uVar18 = *(ulong *)(param_1 + 0x290);
    local_78 = plVar20;
  } while( true );
}


