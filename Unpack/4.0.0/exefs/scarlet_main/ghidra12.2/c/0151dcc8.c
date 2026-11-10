/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151dcc8; name: FUN_0151dcc8
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0151dcc8(undefined8 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  short sVar9;
  long lVar10;
  bool bVar11;
  undefined8 uVar12;
  long *local_48;
  undefined1 auStack_38 [8];
  
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0151dd34;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0151dd34:
        bVar11 = false;
      }
      if (bVar11) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar6 = (long *)(lVar8 + 0xe8);
        lVar10 = *plVar6;
        lVar4 = nn::os::GetCurrentThread();
        if (lVar4 == lVar10) {
          bVar11 = true;
          goto LAB_0151dd80;
        }
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_0151dd6c;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return;
code_r0x0151de64:
  cVar3 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar11) {
    *plVar6 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0151de6c;
  goto LAB_0151de5c;
LAB_0151dd6c:
  if (*plVar6 == 0) {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar11) {
      *plVar6 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0151dd7c;
    goto LAB_0151dd6c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar11) {
            *plVar6 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0151dd7c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar11) {
      *plVar6 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0151dd7c:
  bVar11 = false;
LAB_0151dd80:
  plVar5 = (long *)FUN_01e29e60(*(undefined8 *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0x108));
  if ((*(long **)(lVar8 + 0x108) == plVar5) || (*plVar5 == 0)) {
    plVar5 = (long *)FUN_01e29e60(*(undefined8 *)(lVar8 + 0x138),*(undefined8 *)(lVar8 + 0x140));
    if (*(long **)(lVar8 + 0x140) == plVar5) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      if (*plVar5 != 0) {
        lVar4 = *plVar5 + -0x20;
      }
    }
  }
  else {
    lVar4 = *plVar5 + -0x20;
  }
  if (!bVar11) {
    *(undefined8 *)(lVar8 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xf0));
  }
  if ((lVar4 != 0) && (plVar5 = (long *)FUN_01e149b8(lVar4), *plVar5 != 0)) {
    uVar12 = FUN_01e2a57c();
    lVar10 = *plVar6;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar10) {
      lVar4 = nn::os::GetCurrentThread();
LAB_0151de5c:
      if (*plVar6 == 0) goto code_r0x0151de64;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
            while (*plVar6 == 0) {
              cVar3 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar11) {
                *plVar6 = lVar4;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0151de6c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = lVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0151de6c:
      bVar11 = false;
      goto LAB_0151de70;
    }
    bVar11 = true;
LAB_0151de70:
    plVar6 = (long *)FUN_01e2a620(*(undefined8 *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0x108));
    if ((*(long **)(lVar8 + 0x108) == plVar6) || (*plVar6 == 0)) {
      plVar6 = (long *)FUN_01e2a620(*(undefined8 *)(lVar8 + 0x138),*(undefined8 *)(lVar8 + 0x140));
      if (*(long **)(lVar8 + 0x140) == plVar6) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*plVar6 != 0) {
          lVar4 = *plVar6 + -0x20;
        }
      }
    }
    else {
      lVar4 = *plVar6 + -0x20;
    }
    if (!bVar11) {
      *(undefined8 *)(lVar8 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xf0));
    }
    if (lVar4 != 0) {
      plVar6 = *(long **)(lVar4 + 0x178);
      plVar5 = *(long **)(lVar4 + 0x180);
      if (plVar6 == plVar5) {
LAB_0151dee0:
        if ((plVar6 != plVar5) && (*plVar6 != 0)) {
          FUN_01e2a730(&local_48,*plVar6,auStack_38);
          if (local_48 != (long *)0x0) {
            plVar6 = (long *)local_48[0xe];
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            lVar4 = plVar6[6];
            if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar4 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar3 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar11) {
                *psVar1 = sVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar9 == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
              *(undefined8 *)(lVar4 + 8) = uVar7;
              *(undefined4 *)(lVar4 + 0x1c) = 0xfffffffe;
            }
            else if (sVar9 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            (**(code **)(*plVar6 + 0x158))(uVar12,plVar6);
            lVar4 = plVar6[6];
            psVar1 = (short *)(lVar4 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar3 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar11) {
                *psVar1 = sVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar4 + 0x10) = 0;
              (**(code **)(*plVar6 + 0x50))(plVar6);
            }
            else if (sVar9 == 0) goto LAB_0151df2c;
            if (local_48 != (long *)0x0) {
              lVar4 = local_48[6];
              psVar1 = (short *)(lVar4 + 0x1a);
              do {
                sVar9 = *psVar1;
                cVar3 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar11) {
                  *psVar1 = sVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar9 == 1) {
                *(undefined8 *)(lVar4 + 0x10) = 0;
                (**(code **)(*local_48 + 0x50))();
              }
              else if (sVar9 == 0) goto LAB_0151df2c;
            }
          }
          goto LAB_0151df04;
        }
      }
      else {
        do {
          if (*(undefined1 **)(*plVar6 + 0x1d0) == &DAT_afc4d6c05abef19e) goto LAB_0151dee0;
          plVar6 = plVar6 + 1;
        } while (plVar5 != plVar6);
      }
      local_48 = (long *)0x0;
    }
  }
LAB_0151df04:
  lVar4 = *(long *)(lVar8 + 8);
  psVar1 = (short *)(lVar4 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar4 + 0x10) = 0;
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))();
    return;
  }
  if (sVar9 != 0) {
    return;
  }
LAB_0151df2c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


