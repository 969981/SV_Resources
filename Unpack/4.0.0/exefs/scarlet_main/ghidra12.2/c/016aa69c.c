/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016aa69c; name: FUN_016aa69c
 */


void FUN_016aa69c(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  bool bVar7;
  char cVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  short sVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  local_90 = *(undefined8 *)(param_2 + 0x110);
  uStack_88 = *(undefined8 *)(param_2 + 0x118);
  local_80 = *(undefined8 *)(param_2 + 0x120);
  plVar14 = *(long **)(param_2 + 0x128);
  local_78 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_70,param_2 + 0x30,&local_90);
    plVar14 = local_78;
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_70 != (undefined8 *)0x0) {
    if (*(short *)((long)local_70 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_70 + 0x1a);
      sVar19 = *(short *)((long)local_70 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar19) {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar18) {
            *psVar1 = sVar19 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_016aa784;
          bVar18 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_016aa784:
          bVar18 = false;
        }
        if (bVar18) {
          lVar16 = local_70[2];
          if (lVar16 == 0) goto LAB_016aabe0;
          plVar14 = (long *)(lVar16 + 0xe8);
          lVar23 = *plVar14;
          lVar13 = nn::os::GetCurrentThread();
          if (lVar13 == lVar23) {
            bVar18 = true;
            goto LAB_016aa7c4;
          }
          lVar13 = nn::os::GetCurrentThread();
          bVar18 = false;
          goto LAB_016aa8fc;
        }
        sVar19 = sVar6;
      } while (sVar6 != 0);
LAB_016aabdc:
      if (local_70 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_016aabe0:
    puVar11 = local_70;
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar19 = *psVar1;
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar19 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar8 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar18) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_b0 = *puVar11;
        FUN_00c44438(lVar16 + 0x8040,&local_b0);
      }
    }
    else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_016aa8fc:
  if (*plVar14 == 0) goto code_r0x016aa904;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xf0));
  bVar18 = false;
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xf0));
        while (*plVar14 == 0) {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar18) {
            *plVar14 = lVar13;
            cVar8 = ExclusiveMonitorsStatus();
          }
          bVar18 = false;
          if (cVar8 == '\0') goto LAB_016aa7c4;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *plVar14 = lVar13;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_016aa7c4:
  plVar14 = (long *)FUN_022380d0(*(undefined8 *)(lVar16 + 0x100),*(undefined8 *)(lVar16 + 0x108));
  if ((*(long **)(lVar16 + 0x108) == plVar14) || (*plVar14 == 0)) {
    plVar14 = (long *)FUN_022380d0(*(undefined8 *)(lVar16 + 0x138),*(undefined8 *)(lVar16 + 0x140));
    if (*(long **)(lVar16 + 0x140) == plVar14) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      if (*plVar14 != 0) {
        lVar13 = *plVar14 + -0x20;
      }
    }
  }
  else {
    lVar13 = *plVar14 + -0x20;
  }
  if (!bVar18) {
    *(undefined8 *)(lVar16 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0xf0));
  }
  if ((lVar13 != 0) && (uVar15 = *(ulong *)(param_2 + 0x160), uVar15 != 0)) {
    uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar21 = uVar15 - 1 & 0xbbc762343836fb01;
    }
    else {
      uVar21 = 0xbbc762343836fb01;
      if (uVar15 < 0xbbc762343836fb02) {
        uVar21 = 0;
        if (uVar15 != 0) {
          uVar21 = 0xbbc762343836fb01 / uVar15;
        }
        uVar21 = 0xbbc762343836fb01 - uVar21 * uVar15;
      }
    }
    lVar23 = *(long *)(param_2 + 0x158);
    plVar14 = *(long **)(lVar23 + uVar21 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      uVar20 = uVar15 - 1;
      if (uVar17 < 2) {
        do {
          if (plVar14[1] == 0xbbc762343836fb01) {
            if (plVar14[2] == -0x44389dcbc7c904ff) goto LAB_016aa994;
          }
          else if ((plVar14[1] & uVar20) != uVar21) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        while (uVar22 = plVar14[1], uVar22 != 0xbbc762343836fb01) {
          if (uVar15 <= uVar22) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar22 / uVar15;
            }
            uVar22 = uVar22 - uVar9 * uVar15;
          }
          if (uVar22 != uVar21) goto LAB_016aabc8;
LAB_016aa988:
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_016aabc8;
        }
        if (plVar14[2] != -0x44389dcbc7c904ff) goto LAB_016aa988;
LAB_016aa994:
        if (uVar17 < 2) {
          uVar21 = uVar20 & 0xbbc762343836fb01;
        }
        else {
          uVar21 = 0xbbc762343836fb01;
          if (uVar15 < 0xbbc762343836fb02) {
            uVar21 = 0;
            if (uVar15 != 0) {
              uVar21 = 0xbbc762343836fb01 / uVar15;
            }
            uVar21 = 0xbbc762343836fb01 - uVar21 * uVar15;
          }
        }
        plVar14 = *(long **)(lVar23 + uVar21 * 8);
        lStack_b8 = 0;
        local_c0 = 0;
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (1 < uVar17) {
LAB_016aaa18:
            uVar22 = plVar14[1];
            if (uVar22 == 0xbbc762343836fb01) {
              if (plVar14[2] != -0x44389dcbc7c904ff) goto LAB_016aaa44;
LAB_016aaa50:
              lStack_b8 = plVar14[7];
              local_c0 = plVar14[6];
            }
            else {
              if (uVar15 <= uVar22) {
                uVar9 = 0;
                if (uVar15 != 0) {
                  uVar9 = uVar22 / uVar15;
                }
                uVar22 = uVar22 - uVar9 * uVar15;
              }
              if (uVar22 == uVar21) goto LAB_016aaa44;
            }
            goto LAB_016aaa58;
          }
          do {
            if (plVar14[1] == 0xbbc762343836fb01) {
              if (plVar14[2] == -0x44389dcbc7c904ff) goto LAB_016aaa50;
            }
            else if ((plVar14[1] & uVar20) != uVar21) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
LAB_016aaa58:
        if (uVar17 < 2) {
          uVar21 = uVar20 & 0xb7af2717761907dd;
        }
        else {
          uVar21 = 0xb7af2717761907dd;
          if (uVar15 < 0xb7af2717761907de) {
            uVar21 = 0;
            if (uVar15 != 0) {
              uVar21 = 0xb7af2717761907dd / uVar15;
            }
            uVar21 = 0xb7af2717761907dd - uVar21 * uVar15;
          }
        }
        plVar14 = *(long **)(lVar23 + uVar21 * 8);
        lStack_c8 = 0;
        local_d0 = 0;
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (1 < uVar17) {
LAB_016aaaec:
            uVar17 = plVar14[1];
            if (uVar17 == 0xb7af2717761907dd) {
              if (plVar14[2] != -0x4850d8e889e6f823) goto LAB_016aab18;
LAB_016aab24:
              lStack_c8 = plVar14[7];
              local_d0 = plVar14[6];
            }
            else {
              if (uVar15 <= uVar17) {
                uVar20 = 0;
                if (uVar15 != 0) {
                  uVar20 = uVar17 / uVar15;
                }
                uVar17 = uVar17 - uVar20 * uVar15;
              }
              if (uVar17 == uVar21) goto LAB_016aab18;
            }
            goto LAB_016aab2c;
          }
          do {
            if (plVar14[1] == 0xb7af2717761907dd) {
              if (plVar14[2] == -0x4850d8e889e6f823) goto LAB_016aab24;
            }
            else if ((plVar14[1] & uVar20) != uVar21) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
LAB_016aab2c:
        local_b0 = 0xb68ecfd63e1bae28;
        pcStack_a8 = "Easing";
        local_a0 = 6;
        local_98 = (long *)0x0;
        uVar15 = FUN_01470908(param_2,&local_b0);
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        puVar10 = PTR_PTR_047d9248;
        uVar17 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar17 = uVar15 >> 0x20;
        }
        fVar24 = (float)(**(code **)(PTR_PTR_047d9248 + uVar17 * 8))(param_1);
        fVar25 = (float)(**(code **)(puVar10 + uVar17 * 8))(param_1);
        fVar26 = (float)(**(code **)(puVar10 + uVar17 * 8))(param_1);
        fVar27 = (float)(**(code **)(puVar10 + uVar17 * 8))(param_1);
        lVar23 = FUN_00c41638(lVar13);
        if (lVar23 == 0) goto LAB_016aabc8;
        *(long *)(*(long *)(lVar13 + 0x260) + 0x38) = lVar23;
        lVar13 = *(long *)(lVar13 + 0x260);
        if ((lVar13 != 0) && (uVar15 = FUN_011ef6ec(lVar13), (uVar15 & 1) != 0)) {
          fVar28 = (float)((ulong)local_c0 >> 0x20);
          fVar29 = (float)((ulong)lStack_b8 >> 0x20);
          plVar14 = (long *)(lVar13 + 0x40);
          lVar23 = nn::os::GetCurrentThread();
          while (*plVar14 == 0 && *(long *)(lVar13 + 0x48) == 0) {
            cVar8 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar18) {
              *plVar14 = lVar23;
              *(undefined8 *)(lVar13 + 0x48) = 0;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_016aaca8;
          }
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x50));
          do {
            if (*plVar14 != 0 || *(long *)(lVar13 + 0x48) != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x50));
                while (*plVar14 == 0 && *(long *)(lVar13 + 0x48) == 0) {
                  cVar8 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar18) {
                    *plVar14 = lVar23;
                    *(undefined8 *)(lVar13 + 0x48) = 0;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') goto LAB_016aaca8;
                }
              } while( true );
            }
            cVar8 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar18) {
              *plVar14 = lVar23;
              *(undefined8 *)(lVar13 + 0x48) = 0;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
LAB_016aaca8:
          lVar23 = *(long *)(lVar13 + 0x38);
          *(ulong *)(lVar23 + 0x108) =
               CONCAT44(fVar29 + fVar27 * ((float)((ulong)lStack_c8 >> 0x20) - fVar29),
                        (float)lStack_b8 + fVar26 * ((float)lStack_c8 - (float)lStack_b8));
          *(ulong *)(lVar23 + 0x100) =
               CONCAT44(fVar28 + fVar25 * ((float)((ulong)local_d0 >> 0x20) - fVar28),
                        (float)local_c0 + fVar24 * ((float)local_d0 - (float)local_c0));
          do {
            lVar23 = *plVar14;
            lVar5 = *(long *)(lVar13 + 0x48);
            cVar8 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar18) {
              *plVar14 = lVar23;
              *(long *)(lVar13 + 0x48) = lVar5;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          do {
            lVar3 = *plVar14;
            lVar4 = *(long *)(lVar13 + 0x48);
            if (lVar3 != lVar23 || lVar4 != lVar5) {
              bVar18 = false;
              ClearExclusiveLocal();
              goto LAB_016aad3c;
            }
            cVar8 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar18) {
              *plVar14 = 0;
              *(long *)(lVar13 + 0x44) = lVar5;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar18 = true;
LAB_016aad3c:
          if (!bVar18) {
            do {
              lVar23 = *plVar14;
              lVar5 = *(long *)(lVar13 + 0x48);
              if (lVar23 != lVar3 || lVar5 != lVar4) {
                bVar18 = false;
                ClearExclusiveLocal();
                goto joined_r0x016aae30;
              }
              cVar8 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar18) {
                *plVar14 = 0;
                *(long *)(lVar13 + 0x44) = lVar4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            bVar18 = true;
joined_r0x016aae30:
            if (!bVar18) {
              do {
                lVar3 = *plVar14;
                lVar4 = *(long *)(lVar13 + 0x48);
                if (lVar3 != lVar23 || lVar4 != lVar5) {
                  bVar18 = false;
                  ClearExclusiveLocal();
                  lVar23 = lVar3;
                  lVar5 = lVar4;
                  goto joined_r0x016aae30;
                }
                cVar8 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar18) {
                  *plVar14 = 0;
                  *(long *)(lVar13 + 0x44) = lVar5;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              bVar18 = true;
              lVar23 = lVar3;
              lVar5 = lVar4;
              goto joined_r0x016aae30;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x50));
        }
      }
    }
  }
LAB_016aabc8:
  (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))((long *)(lVar16 + -0x28));
  goto LAB_016aabdc;
code_r0x016aa904:
  cVar8 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar7) {
    *plVar14 = lVar13;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_016aa7c4;
  goto LAB_016aa8fc;
LAB_016aaa44:
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) goto LAB_016aaa58;
  goto LAB_016aaa18;
LAB_016aab18:
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) goto LAB_016aab2c;
  goto LAB_016aaaec;
}


