/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3b1d4; name: FUN_00d3b1d4
 */


/* WARNING: Removing unreachable block (ram,0x00d3c028) */
/* WARNING: Removing unreachable block (ram,0x00d3b694) */
/* WARNING: Removing unreachable block (ram,0x00d3bf64) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00d3b1d4(ulong *param_1,long param_2,ulong *param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  LightEventType *pLVar18;
  long local_50;
  ulong local_48;
  
  if (param_4 == 0) {
    uVar11 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar11;
    plVar9 = (long *)param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = (ulong)plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00d3b3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))();
    return;
  }
  local_48 = *param_3;
  if (param_4 == 1) {
    plVar9 = (long *)(param_2 + 0x70);
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar12 = *plVar9;
      lVar13 = *(long *)(param_2 + 0x78);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar12;
        *(long *)(param_2 + 0x78) = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pLVar18 = (LightEventType *)(param_2 + 0x80);
LAB_00d3b258:
    while ((lVar12 != 0 && (lVar6 != lVar12))) {
      nn::os::WaitLightEvent(pLVar18);
      do {
        lVar12 = *plVar9;
        lVar13 = *(long *)(param_2 + 0x78);
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar12;
          *(long *)(param_2 + 0x78) = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar3 = *plVar9;
      if (lVar3 != lVar12 || *(long *)(param_2 + 0x78) != lVar13) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3b288;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar12;
        *(long *)(param_2 + 0x74) = lVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3b288:
    if (!bVar10) {
      lVar12 = lVar3;
      lVar13 = *(long *)(param_2 + 0x78);
      goto LAB_00d3b258;
    }
    uVar11 = *(ulong *)(param_2 + 0xd8);
    plVar17 = (long *)(param_2 + 0xd0);
    if (uVar11 != 0) {
      uVar14 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar11 - 1 & local_48;
      }
      else if (local_48 < uVar11) {
        uVar15 = local_48;
      }
      else {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = local_48 / uVar11;
        }
        uVar15 = local_48 - uVar15 * uVar11;
      }
      plVar16 = *(long **)(*plVar17 + uVar15 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if (plVar16[1] == local_48) {
              if (plVar16[2] == local_48) goto LAB_00d3b328;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar15) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar16[1];
            if (uVar14 == local_48) {
              if (plVar16[2] == local_48) goto LAB_00d3b328;
            }
            else {
              if (uVar11 <= uVar14) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar14 / uVar11;
                }
                uVar14 = uVar14 - uVar5 * uVar11;
              }
              if (uVar14 != uVar15) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0x78);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0x78) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar9;
      lVar3 = *(long *)(param_2 + 0x78);
      if (lVar13 != lVar6 || lVar3 != lVar12) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3b480;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0x74) = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3b480:
    if (!bVar10) {
      do {
        lVar6 = *plVar9;
        lVar12 = *(long *)(param_2 + 0x78);
        if (lVar6 != lVar13 || lVar12 != lVar3) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d3b6e4;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar13;
          *(long *)(param_2 + 0x74) = lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
joined_r0x00d3b6e4:
      if (!bVar10) {
        do {
          lVar13 = *plVar9;
          lVar3 = *(long *)(param_2 + 0x78);
          if (lVar13 != lVar6 || lVar3 != lVar12) {
            bVar10 = false;
            ClearExclusiveLocal();
            lVar6 = lVar13;
            lVar12 = lVar3;
            goto joined_r0x00d3b6e4;
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = lVar6;
            *(long *)(param_2 + 0x74) = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar10 = true;
        lVar6 = lVar13;
        lVar12 = lVar3;
        goto joined_r0x00d3b6e4;
      }
    }
    nn::os::SignalLightEvent(pLVar18);
    lVar6 = nn::os::GetCurrentThread();
    while (*plVar9 == 0 && *(long *)(param_2 + 0x78) == 0) {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(undefined8 *)(param_2 + 0x78) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00d3b4a8;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar18);
    do {
      if (*plVar9 != 0 || *(long *)(param_2 + 0x78) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar18);
          while (*plVar9 == 0 && *(long *)(param_2 + 0x78) == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar10) {
              *plVar9 = lVar6;
              *(undefined8 *)(param_2 + 0x78) = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d3b4a8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(undefined8 *)(param_2 + 0x78) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d3b4a8:
    FUN_00d3c214(&local_50,param_3,"--SubView1");
    plVar16 = (long *)FUN_00d3c290(plVar17,&local_48);
    plVar7 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *plVar16 = local_50;
    local_50 = 0;
    puVar8 = (undefined8 *)FUN_00d3c290(plVar17,&local_48);
    plVar17 = (long *)*puVar8;
    puVar1 = (ulong *)PTR_DAT_047d8b70;
    if (plVar17 != (long *)0x0) {
      puVar1 = (ulong *)(plVar17 + 6);
    }
    puVar2 = (ulong *)PTR_PTR_047d4508;
    if (plVar17 != (long *)0x0) {
      puVar2 = (ulong *)(plVar17 + 7);
    }
    uVar11 = *puVar2;
    if (plVar17 == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = plVar17[8];
    }
    *param_1 = *puVar1;
    param_1[1] = uVar11;
    param_1[2] = uVar14;
    param_1[3] = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    param_1[3] = (ulong)plVar17;
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0x78);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0x78) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar9;
      lVar3 = *(long *)(param_2 + 0x78);
      if (lVar13 != lVar6 || lVar3 != lVar12) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3b5c4;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = 0;
        *(long *)(param_2 + 0x74) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3b5c4:
    if (!bVar10) {
      do {
        lVar6 = *plVar9;
        lVar12 = *(long *)(param_2 + 0x78);
        if (lVar6 != lVar13 || lVar12 != lVar3) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d3b79c;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = 0;
          *(long *)(param_2 + 0x74) = lVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
joined_r0x00d3b79c:
      do {
        if (bVar10) break;
        do {
          lVar13 = *plVar9;
          lVar3 = *(long *)(param_2 + 0x78);
          if (lVar13 != lVar6 || lVar3 != lVar12) {
            bVar10 = false;
            ClearExclusiveLocal();
            lVar6 = lVar13;
            lVar12 = lVar3;
            goto joined_r0x00d3b79c;
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = 0;
            *(long *)(param_2 + 0x74) = lVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar10 = true;
        lVar6 = lVar13;
        lVar12 = lVar3;
      } while( true );
    }
  }
  else if (param_4 == 2) {
    plVar9 = (long *)(param_2 + 0x90);
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar12 = *plVar9;
      lVar13 = *(long *)(param_2 + 0x98);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar12;
        *(long *)(param_2 + 0x98) = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pLVar18 = (LightEventType *)(param_2 + 0xa0);
LAB_00d3b7f8:
    while ((lVar12 != 0 && (lVar6 != lVar12))) {
      nn::os::WaitLightEvent(pLVar18);
      do {
        lVar12 = *plVar9;
        lVar13 = *(long *)(param_2 + 0x98);
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar12;
          *(long *)(param_2 + 0x98) = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar3 = *plVar9;
      if (lVar3 != lVar12 || *(long *)(param_2 + 0x98) != lVar13) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3b834;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar12;
        *(long *)(param_2 + 0x94) = lVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3b834:
    if (!bVar10) {
      lVar12 = lVar3;
      lVar13 = *(long *)(param_2 + 0x98);
      goto LAB_00d3b7f8;
    }
    uVar11 = *(ulong *)(param_2 + 0x140);
    plVar17 = (long *)(param_2 + 0x138);
    if (uVar11 != 0) {
      uVar14 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar11 - 1 & local_48;
      }
      else if (local_48 < uVar11) {
        uVar15 = local_48;
      }
      else {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = local_48 / uVar11;
        }
        uVar15 = local_48 - uVar15 * uVar11;
      }
      plVar16 = *(long **)(*plVar17 + uVar15 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if (plVar16[1] == local_48) {
              if (plVar16[2] == local_48) goto LAB_00d3b8c4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar15) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar16[1];
            if (uVar14 == local_48) {
              if (plVar16[2] == local_48) goto LAB_00d3b8c4;
            }
            else {
              if (uVar11 <= uVar14) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar14 / uVar11;
                }
                uVar14 = uVar14 - uVar5 * uVar11;
              }
              if (uVar14 != uVar15) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0x98);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0x98) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar9;
      lVar3 = *(long *)(param_2 + 0x98);
      if (lVar13 != lVar6 || lVar3 != lVar12) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3bd6c;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0x94) = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3bd6c:
    if (!bVar10) {
      do {
        lVar6 = *plVar9;
        lVar12 = *(long *)(param_2 + 0x98);
        if (lVar6 != lVar13 || lVar12 != lVar3) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d3bdd4;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar13;
          *(long *)(param_2 + 0x94) = lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
joined_r0x00d3bdd4:
      if (!bVar10) {
        do {
          lVar13 = *plVar9;
          lVar3 = *(long *)(param_2 + 0x98);
          if (lVar13 != lVar6 || lVar3 != lVar12) {
            bVar10 = false;
            ClearExclusiveLocal();
            lVar6 = lVar13;
            lVar12 = lVar3;
            goto joined_r0x00d3bdd4;
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = lVar6;
            *(long *)(param_2 + 0x94) = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar10 = true;
        lVar6 = lVar13;
        lVar12 = lVar3;
        goto joined_r0x00d3bdd4;
      }
    }
    nn::os::SignalLightEvent(pLVar18);
    lVar6 = nn::os::GetCurrentThread();
    while (*plVar9 == 0 && *(long *)(param_2 + 0x98) == 0) {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(undefined8 *)(param_2 + 0x98) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00d3bf14;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar18);
    do {
      if (*plVar9 != 0 || *(long *)(param_2 + 0x98) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar18);
          while (*plVar9 == 0 && *(long *)(param_2 + 0x98) == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar10) {
              *plVar9 = lVar6;
              *(undefined8 *)(param_2 + 0x98) = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d3bf14;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(undefined8 *)(param_2 + 0x98) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d3bf14:
    FUN_00d3c214(&local_50,param_3,"--SubView2");
    plVar16 = (long *)FUN_00d3c290(plVar17,&local_48);
    plVar7 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *plVar16 = local_50;
    local_50 = 0;
    puVar8 = (undefined8 *)FUN_00d3c290(plVar17,&local_48);
    plVar17 = (long *)*puVar8;
    puVar1 = (ulong *)PTR_DAT_047d8b70;
    if (plVar17 != (long *)0x0) {
      puVar1 = (ulong *)(plVar17 + 6);
    }
    puVar2 = (ulong *)PTR_PTR_047d4508;
    if (plVar17 != (long *)0x0) {
      puVar2 = (ulong *)(plVar17 + 7);
    }
    uVar11 = *puVar2;
    if (plVar17 == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = plVar17[8];
    }
    *param_1 = *puVar1;
    param_1[1] = uVar11;
    param_1[2] = uVar14;
    param_1[3] = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    param_1[3] = (ulong)plVar17;
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0x98);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0x98) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar9;
      lVar3 = *(long *)(param_2 + 0x98);
      if (lVar13 != lVar6 || lVar3 != lVar12) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3c12c;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = 0;
        *(long *)(param_2 + 0x94) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3c12c:
    if (bVar10) goto LAB_00d3b3d0;
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0x98);
      if (lVar6 != lVar13 || lVar12 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d3c18c;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = 0;
        *(long *)(param_2 + 0x94) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
joined_r0x00d3c18c:
    if (!bVar10) {
      do {
        lVar13 = *plVar9;
        lVar3 = *(long *)(param_2 + 0x98);
        if (lVar13 != lVar6 || lVar3 != lVar12) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar6 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x00d3c18c;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = 0;
          *(long *)(param_2 + 0x94) = lVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
      lVar6 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x00d3c18c;
    }
  }
  else {
    if (param_4 != 3) {
      *param_1 = local_48;
      uVar11 = param_3[2];
      param_1[1] = param_3[1];
      param_1[2] = uVar11;
      plVar9 = (long *)param_3[3];
      param_1[3] = (ulong)plVar9;
      if (plVar9 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar9 + 0x18))();
      return;
    }
    plVar9 = (long *)(param_2 + 0xb0);
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar12 = *plVar9;
      lVar13 = *(long *)(param_2 + 0xb8);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar12;
        *(long *)(param_2 + 0xb8) = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pLVar18 = (LightEventType *)(param_2 + 0xc0);
LAB_00d3b95c:
    while ((lVar12 != 0 && (lVar6 != lVar12))) {
      nn::os::WaitLightEvent(pLVar18);
      do {
        lVar12 = *plVar9;
        lVar13 = *(long *)(param_2 + 0xb8);
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar12;
          *(long *)(param_2 + 0xb8) = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar3 = *plVar9;
      if (lVar3 != lVar12 || *(long *)(param_2 + 0xb8) != lVar13) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3b998;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar12;
        *(long *)(param_2 + 0xb4) = lVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3b998:
    if (!bVar10) {
      lVar12 = lVar3;
      lVar13 = *(long *)(param_2 + 0xb8);
      goto LAB_00d3b95c;
    }
    uVar11 = *(ulong *)(param_2 + 0x1a8);
    plVar17 = (long *)(param_2 + 0x1a0);
    if (uVar11 != 0) {
      uVar14 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar11 - 1 & local_48;
      }
      else if (local_48 < uVar11) {
        uVar15 = local_48;
      }
      else {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = local_48 / uVar11;
        }
        uVar15 = local_48 - uVar15 * uVar11;
      }
      plVar16 = *(long **)(*plVar17 + uVar15 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if (plVar16[1] == local_48) {
              if (plVar16[2] == local_48) goto LAB_00d3ba28;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar15) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar16[1];
            if (uVar14 == local_48) {
              if (plVar16[2] == local_48) goto LAB_00d3ba28;
            }
            else {
              if (uVar11 <= uVar14) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar14 / uVar11;
                }
                uVar14 = uVar14 - uVar5 * uVar11;
              }
              if (uVar14 != uVar15) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0xb8);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0xb8) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar9;
      lVar3 = *(long *)(param_2 + 0xb8);
      if (lVar13 != lVar6 || lVar3 != lVar12) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3bda0;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0xb4) = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3bda0:
    if (!bVar10) {
      do {
        lVar6 = *plVar9;
        lVar12 = *(long *)(param_2 + 0xb8);
        if (lVar6 != lVar13 || lVar12 != lVar3) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d3be44;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar13;
          *(long *)(param_2 + 0xb4) = lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
joined_r0x00d3be44:
      if (!bVar10) {
        do {
          lVar13 = *plVar9;
          lVar3 = *(long *)(param_2 + 0xb8);
          if (lVar13 != lVar6 || lVar3 != lVar12) {
            bVar10 = false;
            ClearExclusiveLocal();
            lVar6 = lVar13;
            lVar12 = lVar3;
            goto joined_r0x00d3be44;
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = lVar6;
            *(long *)(param_2 + 0xb4) = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar10 = true;
        lVar6 = lVar13;
        lVar12 = lVar3;
        goto joined_r0x00d3be44;
      }
    }
    nn::os::SignalLightEvent(pLVar18);
    lVar6 = nn::os::GetCurrentThread();
    while (*plVar9 == 0 && *(long *)(param_2 + 0xb8) == 0) {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(undefined8 *)(param_2 + 0xb8) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00d3bfd8;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar18);
    do {
      if (*plVar9 != 0 || *(long *)(param_2 + 0xb8) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar18);
          while (*plVar9 == 0 && *(long *)(param_2 + 0xb8) == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar10) {
              *plVar9 = lVar6;
              *(undefined8 *)(param_2 + 0xb8) = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d3bfd8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(undefined8 *)(param_2 + 0xb8) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d3bfd8:
    FUN_00d3c214(&local_50,param_3,"--SubView3");
    plVar16 = (long *)FUN_00d3c290(plVar17,&local_48);
    plVar7 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *plVar16 = local_50;
    local_50 = 0;
    puVar8 = (undefined8 *)FUN_00d3c290(plVar17,&local_48);
    plVar17 = (long *)*puVar8;
    puVar1 = (ulong *)PTR_DAT_047d8b70;
    if (plVar17 != (long *)0x0) {
      puVar1 = (ulong *)(plVar17 + 6);
    }
    puVar2 = (ulong *)PTR_PTR_047d4508;
    if (plVar17 != (long *)0x0) {
      puVar2 = (ulong *)(plVar17 + 7);
    }
    uVar11 = *puVar2;
    if (plVar17 == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = plVar17[8];
    }
    *param_1 = *puVar1;
    param_1[1] = uVar11;
    param_1[2] = uVar14;
    param_1[3] = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    param_1[3] = (ulong)plVar17;
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0xb8);
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        *(long *)(param_2 + 0xb8) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar9;
      lVar3 = *(long *)(param_2 + 0xb8);
      if (lVar13 != lVar6 || lVar3 != lVar12) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d3c15c;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = 0;
        *(long *)(param_2 + 0xb4) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00d3c15c:
    if (bVar10) goto LAB_00d3b3d0;
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0xb8);
      if (lVar6 != lVar13 || lVar12 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d3c1d4;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = 0;
        *(long *)(param_2 + 0xb4) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
joined_r0x00d3c1d4:
    if (!bVar10) {
      do {
        lVar13 = *plVar9;
        lVar3 = *(long *)(param_2 + 0xb8);
        if (lVar13 != lVar6 || lVar3 != lVar12) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar6 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x00d3c1d4;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = 0;
          *(long *)(param_2 + 0xb4) = lVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
      lVar6 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x00d3c1d4;
    }
  }
LAB_00d3b3d0:
  nn::os::SignalLightEvent(pLVar18);
  return;
LAB_00d3b8c4:
  plVar17 = (long *)plVar16[3];
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (plVar17 != (long *)0x0) {
    puVar1 = (ulong *)(plVar17 + 6);
  }
  puVar2 = (ulong *)PTR_PTR_047d4508;
  if (plVar17 != (long *)0x0) {
    puVar2 = (ulong *)(plVar17 + 7);
  }
  uVar11 = *puVar2;
  if (plVar17 == (long *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = plVar17[8];
  }
  *param_1 = *puVar1;
  param_1[1] = uVar11;
  param_1[2] = uVar14;
  param_1[3] = 0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  param_1[3] = (ulong)plVar17;
  do {
    lVar6 = *plVar9;
    lVar12 = *(long *)(param_2 + 0x98);
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      *(long *)(param_2 + 0x98) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar13 = *plVar9;
    lVar3 = *(long *)(param_2 + 0x98);
    if (lVar13 != lVar6 || lVar3 != lVar12) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00d3baac;
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      *(long *)(param_2 + 0x94) = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar10 = true;
LAB_00d3baac:
  if (!bVar10) {
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0x98);
      if (lVar6 != lVar13 || lVar12 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d3bcd4;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar13;
        *(long *)(param_2 + 0x94) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
joined_r0x00d3bcd4:
    if (!bVar10) {
      do {
        lVar13 = *plVar9;
        lVar3 = *(long *)(param_2 + 0x98);
        if (lVar13 != lVar6 || lVar3 != lVar12) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar6 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x00d3bcd4;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar6;
          *(long *)(param_2 + 0x94) = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
      lVar6 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x00d3bcd4;
    }
  }
  goto LAB_00d3b3d0;
LAB_00d3ba28:
  plVar17 = (long *)plVar16[3];
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (plVar17 != (long *)0x0) {
    puVar1 = (ulong *)(plVar17 + 6);
  }
  puVar2 = (ulong *)PTR_PTR_047d4508;
  if (plVar17 != (long *)0x0) {
    puVar2 = (ulong *)(plVar17 + 7);
  }
  uVar11 = *puVar2;
  if (plVar17 == (long *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = plVar17[8];
  }
  *param_1 = *puVar1;
  param_1[1] = uVar11;
  param_1[2] = uVar14;
  param_1[3] = 0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  param_1[3] = (ulong)plVar17;
  do {
    lVar6 = *plVar9;
    lVar12 = *(long *)(param_2 + 0xb8);
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      *(long *)(param_2 + 0xb8) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar13 = *plVar9;
    lVar3 = *(long *)(param_2 + 0xb8);
    if (lVar13 != lVar6 || lVar3 != lVar12) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00d3bae0;
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      *(long *)(param_2 + 0xb4) = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar10 = true;
LAB_00d3bae0:
  if (!bVar10) {
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0xb8);
      if (lVar6 != lVar13 || lVar12 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d3bd20;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar13;
        *(long *)(param_2 + 0xb4) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
joined_r0x00d3bd20:
    if (!bVar10) {
      do {
        lVar13 = *plVar9;
        lVar3 = *(long *)(param_2 + 0xb8);
        if (lVar13 != lVar6 || lVar3 != lVar12) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar6 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x00d3bd20;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar6;
          *(long *)(param_2 + 0xb4) = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
      lVar6 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x00d3bd20;
    }
  }
  goto LAB_00d3b3d0;
LAB_00d3b328:
  plVar17 = (long *)plVar16[3];
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (plVar17 != (long *)0x0) {
    puVar1 = (ulong *)(plVar17 + 6);
  }
  puVar2 = (ulong *)PTR_PTR_047d4508;
  if (plVar17 != (long *)0x0) {
    puVar2 = (ulong *)(plVar17 + 7);
  }
  uVar11 = *puVar2;
  if (plVar17 == (long *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = plVar17[8];
  }
  *param_1 = *puVar1;
  param_1[1] = uVar11;
  param_1[2] = uVar14;
  param_1[3] = 0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  param_1[3] = (ulong)plVar17;
  do {
    lVar6 = *plVar9;
    lVar12 = *(long *)(param_2 + 0x78);
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      *(long *)(param_2 + 0x78) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar13 = *plVar9;
    lVar3 = *(long *)(param_2 + 0x78);
    if (lVar13 != lVar6 || lVar3 != lVar12) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00d3b3cc;
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      *(long *)(param_2 + 0x74) = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar10 = true;
LAB_00d3b3cc:
  if (!bVar10) {
    do {
      lVar6 = *plVar9;
      lVar12 = *(long *)(param_2 + 0x78);
      if (lVar6 != lVar13 || lVar12 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d3b640;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar13;
        *(long *)(param_2 + 0x74) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
joined_r0x00d3b640:
    if (!bVar10) {
      do {
        lVar13 = *plVar9;
        lVar3 = *(long *)(param_2 + 0x78);
        if (lVar13 != lVar6 || lVar3 != lVar12) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar6 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x00d3b640;
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar6;
          *(long *)(param_2 + 0x74) = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar10 = true;
      lVar6 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x00d3b640;
    }
  }
  goto LAB_00d3b3d0;
}


