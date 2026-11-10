/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cda6fc; name: FUN_01cda6fc
 */


void FUN_01cda6fc(long param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  short sVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  bool bVar19;
  long *local_68;
  long *local_48;
  
  lVar14 = *(long *)(param_1 + 0x18);
  if ((lVar14 != 0) && (sVar16 = *(short *)(lVar14 + 0x1a), sVar16 != 0)) {
    puVar17 = *(undefined8 **)(lVar14 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar8 != 0)) {
      uVar18 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar18;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar17 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        if (puVar17 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_01cda788;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x01cda7fc:
  cVar6 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar19) {
    *plVar2 = lVar10;
    *(undefined8 *)(lVar14 + 0x60) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01cda804;
  goto LAB_01cda7f0;
LAB_01cda788:
  sVar5 = *psVar1;
  if (sVar5 == sVar16) {
    cVar6 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar19) {
      *psVar1 = sVar16 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_01cda7ac;
    bVar19 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01cda7ac:
    bVar19 = false;
  }
  if (!bVar19) {
    sVar16 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_01cda788;
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  plVar15 = (long *)(lVar14 + -0x28);
  plVar2 = (long *)(lVar14 + 0x58);
  do {
    lVar10 = *plVar2;
    cVar6 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar19) {
      *plVar2 = lVar10;
      *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(lVar14 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    lVar10 = nn::os::GetCurrentThread();
LAB_01cda7f0:
    if (*plVar2 == 0 && *(long *)(lVar14 + 0x60) == 0) goto code_r0x01cda7fc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar14 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar14 + 0x60) == 0) {
            cVar6 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar19) {
              *plVar2 = lVar10;
              *(undefined8 *)(lVar14 + 0x60) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01cda804;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar19) {
        *plVar2 = lVar10;
        *(undefined8 *)(lVar14 + 0x60) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01cda804:
    bVar19 = false;
    goto LAB_01cda808;
  }
  bVar19 = true;
LAB_01cda808:
  FUN_00c65924(plVar15);
  FUN_01cdace0(&local_48,plVar15);
  plVar12 = local_48;
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  local_68 = (long *)*param_2;
  if (local_68 == (long *)0x0) {
    FUN_01cdafec(param_1,local_48,uVar18,uVar18,&local_68,param_3);
  }
  else {
    lVar10 = local_68[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar11;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar7 = local_68;
    FUN_01cdafec(param_1,plVar12,uVar18,uVar18,&local_68,param_3);
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar16 == 0) goto LAB_01cda994;
    }
  }
  if (*(char *)(lVar14 + 0x128) != '\0') {
    plVar12 = *(long **)(lVar14 + 0x120);
    do {
      lVar10 = *plVar12;
      lVar9 = plVar12[1];
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar10;
        plVar12[1] = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar12;
      lVar4 = plVar12[1];
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_01cda940;
      }
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar10;
        *(long *)((long)plVar12 + 4) = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar13 = true;
LAB_01cda940:
    if (!bVar13) {
      do {
        lVar10 = *plVar12;
        lVar9 = plVar12[1];
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x01cdaa88;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = lVar3;
          *(long *)((long)plVar12 + 4) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
joined_r0x01cdaa88:
      if (!bVar13) {
        do {
          lVar3 = *plVar12;
          lVar4 = plVar12[1];
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x01cdaa88;
          }
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar13) {
            *plVar12 = lVar10;
            *(long *)((long)plVar12 + 4) = lVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar13 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x01cdaa88;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 2));
  }
  *(undefined1 *)(lVar14 + 0x128) = 0;
  *(undefined8 *)(lVar14 + 0x120) = 0;
  if (*(char *)(lVar14 + 0x138) != '\0') {
    plVar12 = *(long **)(lVar14 + 0x130);
    do {
      lVar10 = *plVar12;
      lVar9 = plVar12[1];
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar10;
        plVar12[1] = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar12;
      lVar4 = plVar12[1];
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_01cdabb0;
      }
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = 0;
        *(long *)((long)plVar12 + 4) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar13 = true;
LAB_01cdabb0:
    if (!bVar13) {
      do {
        lVar10 = *plVar12;
        lVar9 = plVar12[1];
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x01cdaca0;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = 0;
          *(long *)((long)plVar12 + 4) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
joined_r0x01cdaca0:
      if (!bVar13) {
        do {
          lVar3 = *plVar12;
          lVar4 = plVar12[1];
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x01cdaca0;
          }
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar13) {
            *plVar12 = 0;
            *(long *)((long)plVar12 + 4) = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar13 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x01cdaca0;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 2));
  }
  *(undefined8 *)(lVar14 + 0x130) = 0;
  *(undefined1 *)(lVar14 + 0x138) = 0;
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_01cda994;
  }
  if (!bVar19) {
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(lVar14 + 0x60);
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar19) {
        *plVar2 = lVar10;
        *(long *)(lVar14 + 0x60) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar14 + 0x60);
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar19 = false;
        ClearExclusiveLocal();
        goto LAB_01cdab9c;
      }
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar19) {
        *plVar2 = 0;
        *(long *)(lVar14 + 0x5c) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar19 = true;
LAB_01cdab9c:
    if (!bVar19) {
      do {
        lVar10 = *plVar2;
        lVar9 = *(long *)(lVar14 + 0x60);
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar19 = false;
          ClearExclusiveLocal();
          goto joined_r0x01cdac58;
        }
        cVar6 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar19) {
          *plVar2 = 0;
          *(long *)(lVar14 + 0x5c) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar19 = true;
joined_r0x01cdac58:
      if (!bVar19) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar14 + 0x60);
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar19 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x01cdac58;
          }
          cVar6 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar19) {
            *plVar2 = 0;
            *(long *)(lVar14 + 0x5c) = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar19 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x01cdac58;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x68));
  }
  lVar14 = *(long *)(lVar14 + 8);
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar6 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar19) {
      *psVar1 = sVar16 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return;
  }
  if (sVar16 != 0) {
    return;
  }
LAB_01cda994:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


