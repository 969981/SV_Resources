/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cd5f78; name: FUN_01cd5f78
 */


void FUN_01cd5f78(long param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  undefined8 uVar14;
  short sVar15;
  undefined8 *puVar16;
  bool bVar17;
  long *plVar18;
  long *local_48;
  
  lVar13 = *(long *)(param_1 + 0x18);
  if ((lVar13 != 0) && (sVar15 = *(short *)(lVar13 + 0x1a), sVar15 != 0)) {
    puVar16 = *(undefined8 **)(lVar13 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar7 != 0)) {
      uVar14 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar14;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar16 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        if (puVar16 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_01cd5ffc;
        puVar16 = (undefined8 *)*puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x01cd6070:
  cVar6 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar17) {
    *plVar2 = lVar9;
    *(undefined8 *)(lVar13 + 0x60) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01cd6078;
  goto LAB_01cd6064;
LAB_01cd5ffc:
  sVar5 = *psVar1;
  if (sVar5 == sVar15) {
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar15 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_01cd6020;
    bVar17 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01cd6020:
    bVar17 = false;
  }
  if (!bVar17) {
    sVar15 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_01cd5ffc;
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  plVar18 = (long *)(lVar13 + -0x28);
  plVar2 = (long *)(lVar13 + 0x58);
  do {
    lVar9 = *plVar2;
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar17) {
      *plVar2 = lVar9;
      *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)(lVar13 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    lVar9 = nn::os::GetCurrentThread();
LAB_01cd6064:
    if (*plVar2 == 0 && *(long *)(lVar13 + 0x60) == 0) goto code_r0x01cd6070;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar13 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar13 + 0x60) == 0) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar17) {
              *plVar2 = lVar9;
              *(undefined8 *)(lVar13 + 0x60) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01cd6078;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = lVar9;
        *(undefined8 *)(lVar13 + 0x60) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01cd6078:
    bVar17 = false;
    goto LAB_01cd607c;
  }
  bVar17 = true;
LAB_01cd607c:
  FUN_00c65924(plVar18);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  local_48 = (long *)*param_2;
  if (local_48 == (long *)0x0) {
    FUN_01cd6620(param_1,uVar14,uVar14,&local_48,param_3);
  }
  else {
    lVar9 = local_48[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar10;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar11 = local_48;
    FUN_01cd6620(param_1,uVar14,uVar14,&local_48,param_3);
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar15 == 0) goto LAB_01cd61ec;
    }
  }
  if (*(char *)(lVar13 + 0x128) != '\0') {
    plVar11 = *(long **)(lVar13 + 0x120);
    do {
      lVar9 = *plVar11;
      lVar8 = plVar11[1];
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar9;
        plVar11[1] = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar11;
      lVar4 = plVar11[1];
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_01cd61a0;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar9;
        *(long *)((long)plVar11 + 4) = lVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
LAB_01cd61a0:
    if (!bVar12) {
      do {
        lVar9 = *plVar11;
        lVar8 = plVar11[1];
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x01cd62c8;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *plVar11 = lVar3;
          *(long *)((long)plVar11 + 4) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
joined_r0x01cd62c8:
      if (!bVar12) {
        do {
          lVar3 = *plVar11;
          lVar4 = plVar11[1];
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x01cd62c8;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = lVar9;
            *(long *)((long)plVar11 + 4) = lVar8 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x01cd62c8;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  *(undefined1 *)(lVar13 + 0x128) = 0;
  *(undefined8 *)(lVar13 + 0x120) = 0;
  if (*(char *)(lVar13 + 0x138) != '\0') {
    plVar11 = *(long **)(lVar13 + 0x130);
    do {
      lVar9 = *plVar11;
      lVar8 = plVar11[1];
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar9;
        plVar11[1] = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar11;
      lVar4 = plVar11[1];
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_01cd63dc;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = 0;
        *(long *)((long)plVar11 + 4) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
LAB_01cd63dc:
    if (!bVar12) {
      do {
        lVar9 = *plVar11;
        lVar8 = plVar11[1];
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x01cd64cc;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *plVar11 = 0;
          *(long *)((long)plVar11 + 4) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
joined_r0x01cd64cc:
      if (!bVar12) {
        do {
          lVar3 = *plVar11;
          lVar4 = plVar11[1];
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x01cd64cc;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = 0;
            *(long *)((long)plVar11 + 4) = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x01cd64cc;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  *(undefined8 *)(lVar13 + 0x130) = 0;
  *(undefined1 *)(lVar13 + 0x138) = 0;
  if (!bVar17) {
    do {
      lVar9 = *plVar2;
      lVar8 = *(long *)(lVar13 + 0x60);
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = lVar9;
        *(long *)(lVar13 + 0x60) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar13 + 0x60);
      if (lVar3 != lVar9 || lVar4 != lVar8) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto LAB_01cd63c8;
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = 0;
        *(long *)(lVar13 + 0x5c) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar17 = true;
LAB_01cd63c8:
    if (!bVar17) {
      do {
        lVar9 = *plVar2;
        lVar8 = *(long *)(lVar13 + 0x60);
        if (lVar9 != lVar3 || lVar8 != lVar4) {
          bVar17 = false;
          ClearExclusiveLocal();
          goto joined_r0x01cd6484;
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar17) {
          *plVar2 = 0;
          *(long *)(lVar13 + 0x5c) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar17 = true;
joined_r0x01cd6484:
      if (!bVar17) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar13 + 0x60);
          if (lVar3 != lVar9 || lVar4 != lVar8) {
            bVar17 = false;
            ClearExclusiveLocal();
            lVar9 = lVar3;
            lVar8 = lVar4;
            goto joined_r0x01cd6484;
          }
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar17) {
            *plVar2 = 0;
            *(long *)(lVar13 + 0x5c) = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar17 = true;
        lVar9 = lVar3;
        lVar8 = lVar4;
        goto joined_r0x01cd6484;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x68));
  }
  lVar13 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01cd627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar18 + 0x50))(plVar18);
    return;
  }
  if (sVar15 != 0) {
    return;
  }
LAB_01cd61ec:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


