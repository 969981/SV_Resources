/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a39d98; name: FUN_02a39d98
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02a39d98(long *param_1)

{
  short *psVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  int *piVar4;
  undefined2 uVar5;
  short sVar6;
  bool bVar7;
  char cVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  long lVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  bool bVar16;
  short sVar17;
  undefined8 ***pppuVar18;
  long lVar19;
  undefined8 **ppuVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 ****local_80 [2];
  undefined8 ****local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 ***local_38;
  
  lVar14 = *param_1;
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar17 = *(short *)(lVar14 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar17) {
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_02a39e10;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a39e10:
        bVar16 = false;
      }
      if (bVar16) {
        lVar14 = *(long *)(lVar14 + 0x10);
        plVar15 = (long *)(lVar14 + -0x28);
        if (lVar14 == 0) {
          return;
        }
        lVar11 = FUN_01026aa0(lVar14 + 0xe0,&local_70);
        if (lVar11 != 0) {
          local_70 = (undefined8 ****)0x1c6013817e016209;
          pcStack_68 = "PLAY_GMK_RAID_FIELD_LOOP_LP";
          local_60 = 0x1b;
          local_58 = (long *)0x0;
          FUN_012054d8(lVar11,&local_70,100);
        }
        lVar11 = param_1[2];
        if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) goto LAB_02a39e84;
        psVar1 = (short *)(lVar11 + 0x1a);
        sVar17 = *(short *)(lVar11 + 0x1a);
        goto LAB_02a3a258;
      }
      sVar17 = sVar6;
    } while (sVar6 != 0);
  }
  return;
  while (sVar17 = sVar6, sVar6 != 0) {
LAB_02a3a258:
    sVar6 = *psVar1;
    if (sVar6 == sVar17) {
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_02a3a27c;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a3a27c:
      bVar16 = false;
    }
    if (bVar16) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 != 0) {
        plVar13 = (long *)(lVar11 + 0xe8);
        lVar22 = *plVar13;
        lVar19 = nn::os::GetCurrentThread();
        if (lVar19 == lVar22) {
          bVar16 = true;
        }
        else {
          lVar19 = nn::os::GetCurrentThread();
          bVar16 = false;
          do {
            if (*plVar13 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
                while (*plVar13 == 0) {
                  cVar8 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar16) {
                    *plVar13 = lVar19;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  bVar16 = false;
                  if (cVar8 == '\0') goto LAB_02a3a308;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar7) {
              *plVar13 = lVar19;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
LAB_02a3a308:
        plVar13 = (long *)FUN_013e0df0(*(undefined8 *)(lVar11 + 0x100),
                                       *(undefined8 *)(lVar11 + 0x108));
        if ((*(long **)(lVar11 + 0x108) == plVar13) || (*plVar13 == 0)) {
          plVar13 = (long *)FUN_013e0df0(*(undefined8 *)(lVar11 + 0x138),
                                         *(undefined8 *)(lVar11 + 0x140));
          if (*(long **)(lVar11 + 0x140) == plVar13) {
            lVar19 = 0;
          }
          else {
            lVar19 = 0;
            if (*plVar13 != 0) {
              lVar19 = *plVar13 + -0x20;
            }
          }
        }
        else {
          lVar19 = *plVar13 + -0x20;
        }
        if (!bVar16) {
          *(undefined8 *)(lVar11 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
        }
        if (lVar19 != 0) {
          FUN_01101dbc(lVar19,0,0);
        }
        lVar19 = *(long *)(lVar11 + 8);
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar17 = *psVar1;
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
        }
        else if (sVar17 == 0) goto LAB_02a3a134;
      }
      break;
    }
  }
LAB_02a39e84:
  local_70 = (undefined8 ****)0x8b70fdaf3eacff8e;
  pcStack_68 = "main_ptcl";
  local_60 = 9;
  local_58 = (long *)0x0;
  FUN_00fe3ff4(local_80,plVar15,&local_70);
  ppppuVar9 = local_80[0];
  pppuVar18 = (undefined8 ***)0x0;
  if (local_80[0] != (undefined8 ****)0x0) {
    if (*(short *)((long)local_80[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_80[0] + 0x1a);
      sVar17 = *(short *)((long)local_80[0] + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar17) {
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar17 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_02a3a2c4;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02a3a2c4:
          bVar16 = false;
        }
        if (bVar16) {
          pppuVar18 = (undefined8 ***)0x0;
          if (local_80[0][2] != (undefined8 ***)0x0) {
            pppuVar18 = local_80[0][2] + -5;
          }
          goto LAB_02a3a394;
        }
        sVar17 = sVar6;
        if (sVar6 == 0) break;
      } while( true );
    }
    pppuVar18 = (undefined8 ***)0x0;
LAB_02a3a394:
    ppppuVar3 = local_80[0] + 3;
    do {
      sVar17 = *(short *)ppppuVar3;
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
      if (bVar16) {
        *(short *)ppppuVar3 = sVar17 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar17 == 1) {
      piVar4 = (int *)((long)local_80[0] + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar16) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *ppppuVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar17 == 0) goto LAB_02a3a434;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (pppuVar18 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar18 + 0x22;
    ppuVar20 = *pppuVar2;
    ppuVar12 = (undefined8 **)nn::os::GetCurrentThread();
    if (ppuVar12 == ppuVar20) {
      bVar16 = true;
    }
    else {
      ppuVar12 = (undefined8 **)nn::os::GetCurrentThread();
      bVar16 = false;
      do {
        if (*pppuVar2 != (undefined8 **)0x0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(pppuVar18 + 0x23));
            while (*pppuVar2 == (undefined8 **)0x0) {
              cVar8 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
              if (bVar16) {
                *pppuVar2 = ppuVar12;
                cVar8 = ExclusiveMonitorsStatus();
              }
              bVar16 = false;
              if (cVar8 == '\0') goto LAB_02a39ee8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar7) {
          *pppuVar2 = ppuVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
LAB_02a39ee8:
    ppuVar12 = (undefined8 **)FUN_013e0df0(pppuVar18[0x25],pppuVar18[0x26]);
    if ((pppuVar18[0x26] == ppuVar12) || (*ppuVar12 == (undefined8 *)0x0)) {
      ppuVar12 = (undefined8 **)FUN_013e0df0(pppuVar18[0x2c],pppuVar18[0x2d]);
      if (pppuVar18[0x2d] == ppuVar12) {
        puVar21 = (undefined8 *)0x0;
      }
      else {
        puVar21 = (undefined8 *)0x0;
        if (*ppuVar12 != (undefined8 *)0x0) {
          puVar21 = *ppuVar12 + -4;
        }
      }
    }
    else {
      puVar21 = *ppuVar12 + -4;
    }
    if (!bVar16) {
      pppuVar18[0x22] = (undefined8 **)0x0;
      nn::os::SignalLightEvent((LightEventType *)(pppuVar18 + 0x23));
    }
    if (puVar21 != (undefined8 *)0x0) {
      FUN_01101dbc(puVar21,0,0);
    }
    ppuVar12 = pppuVar18[6];
    psVar1 = (short *)((long)ppuVar12 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar17 == 1) {
      ppuVar12[2] = (undefined8 *)0x0;
      (*(code *)(*pppuVar18)[10])(pppuVar18);
    }
    else if (sVar17 == 0) goto LAB_02a3a134;
  }
  if ((char)param_1[4] != '\0') {
    local_70 = (undefined8 ****)0xb24638b13d1d8569;
    pcStack_68 = "rainbow_ptcl";
    local_60 = 0xc;
    local_58 = (long *)0x0;
    FUN_00fe3ff4(local_80,plVar15,&local_70);
    ppppuVar9 = local_80[0];
    pppuVar18 = (undefined8 ***)0x0;
    if (local_80[0] != (undefined8 ****)0x0) {
      if (*(short *)((long)local_80[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_80[0] + 0x1a);
        sVar17 = *(short *)((long)local_80[0] + 0x1a);
        do {
          sVar6 = *psVar1;
          if (sVar6 == sVar17) {
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar17 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 != '\0') goto LAB_02a3a3ec;
            bVar16 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02a3a3ec:
            bVar16 = false;
          }
          if (bVar16) {
            pppuVar18 = (undefined8 ***)0x0;
            if (local_80[0][2] != (undefined8 ***)0x0) {
              pppuVar18 = local_80[0][2] + -5;
            }
            goto LAB_02a3a414;
          }
          sVar17 = sVar6;
          if (sVar6 == 0) break;
        } while( true );
      }
      pppuVar18 = (undefined8 ***)0x0;
LAB_02a3a414:
      ppppuVar3 = local_80[0] + 3;
      do {
        sVar17 = *(short *)ppppuVar3;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
        if (bVar16) {
          *(short *)ppppuVar3 = sVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar17 == 1) {
        piVar4 = (int *)((long)local_80[0] + 0x1c);
        do {
          iVar10 = *piVar4;
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar16) {
            *piVar4 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *ppppuVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar17 == 0) {
LAB_02a3a434:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (pppuVar18 != (undefined8 ***)0x0) {
      pppuVar2 = pppuVar18 + 0x22;
      ppuVar20 = *pppuVar2;
      ppuVar12 = (undefined8 **)nn::os::GetCurrentThread();
      if (ppuVar12 == ppuVar20) {
        bVar16 = true;
      }
      else {
        ppuVar12 = (undefined8 **)nn::os::GetCurrentThread();
        bVar16 = false;
        do {
          if (*pppuVar2 != (undefined8 **)0x0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(pppuVar18 + 0x23));
              while (*pppuVar2 == (undefined8 **)0x0) {
                cVar8 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
                if (bVar16) {
                  *pppuVar2 = ppuVar12;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                bVar16 = false;
                if (cVar8 == '\0') goto LAB_02a39fcc;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar7) {
            *pppuVar2 = ppuVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
LAB_02a39fcc:
      ppuVar12 = (undefined8 **)FUN_013e0df0(pppuVar18[0x25],pppuVar18[0x26]);
      if ((pppuVar18[0x26] == ppuVar12) || (*ppuVar12 == (undefined8 *)0x0)) {
        ppuVar12 = (undefined8 **)FUN_013e0df0(pppuVar18[0x2c],pppuVar18[0x2d]);
        if (pppuVar18[0x2d] == ppuVar12) {
          puVar21 = (undefined8 *)0x0;
        }
        else {
          puVar21 = (undefined8 *)0x0;
          if (*ppuVar12 != (undefined8 *)0x0) {
            puVar21 = *ppuVar12 + -4;
          }
        }
      }
      else {
        puVar21 = *ppuVar12 + -4;
      }
      if (!bVar16) {
        pppuVar18[0x22] = (undefined8 **)0x0;
        nn::os::SignalLightEvent((LightEventType *)(pppuVar18 + 0x23));
      }
      if (puVar21 != (undefined8 *)0x0) {
        FUN_01101dbc(puVar21,0,0);
      }
      ppuVar12 = pppuVar18[6];
      psVar1 = (short *)((long)ppuVar12 + 0x1a);
      do {
        sVar17 = *psVar1;
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar17 == 1) {
        ppuVar12[2] = (undefined8 *)0x0;
        (*(code *)(*pppuVar18)[10])(pppuVar18);
      }
      else if (sVar17 == 0) goto LAB_02a3a134;
    }
  }
  local_70 = &local_38;
  local_80[0] = &local_70;
  plVar13 = (long *)(lVar14 + 0xe8);
  lVar19 = *plVar13;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar19) {
    bVar16 = true;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
          while (*plVar13 == 0) {
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar16) {
              *plVar13 = lVar11;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_02a3a080;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar16) {
        *plVar13 = lVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_02a3a080:
    bVar16 = false;
  }
  lVar11 = FUN_01295b64(local_80,lVar14 + 0x100);
  if (lVar11 == 0) {
    lVar11 = FUN_01295b64(local_80,lVar14 + 0x138);
  }
  if (!bVar16) {
    *(undefined8 *)(lVar14 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xf0));
  }
  if ((lVar11 != 0) &&
     ((*(undefined1 *)(lVar11 + 0x138) = 1, *(char *)(lVar11 + 0x58) != '\0' ||
      (*(char *)(lVar11 + 0x59) != '\0')))) {
    uVar5 = *(undefined2 *)(lVar11 + 0x58);
    plVar13 = (long *)(lVar11 + 0x38);
    *(undefined2 *)(lVar11 + 0x58) = 0;
    if (*(long *)(lVar11 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(lVar11 + 0x48),plVar13);
    }
    (**(code **)(*plVar13 + 0x20))(plVar13,uVar5);
  }
  FUN_0125af80(plVar15,1);
  lVar14 = *(long *)(lVar14 + 8);
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar17 = *psVar1;
    cVar8 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar17 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar17 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return;
  }
  if (sVar17 != 0) {
    return;
  }
LAB_02a3a134:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


