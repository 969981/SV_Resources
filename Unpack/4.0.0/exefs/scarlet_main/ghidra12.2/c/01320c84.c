/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01320c84; name: FUN_01320c84
 */


void FUN_01320c84(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  long *local_60;
  long *local_58;
  
  plVar6 = (long *)FUN_013213e0();
  lVar10 = *plVar6;
  if ((param_2 & 1) == 0) {
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar11 = *(short *)(lVar10 + 0x1a);
LAB_01320ed0:
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01320ef4;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01320ef4:
        bVar9 = false;
      }
      if (!bVar9) goto code_r0x01320efc;
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar10 + 0x70);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
        }
        else if (sVar11 == 0) goto LAB_013213b8;
        if (*(char *)(lVar10 + 0xf3) == '\0') {
          (**(code **)(*(long *)(lVar10 + -8) + 0xf8))((long *)(lVar10 + -8));
          *(undefined2 *)(lVar10 + 0xf3) = 1;
        }
      }
    }
LAB_01320cb8:
    FUN_00c9e664(&local_60,param_1 + 0xe8);
    if (local_58 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = local_58[9];
    }
    plVar6 = (long *)(lVar10 + 0x3c0);
    lVar14 = *plVar6;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar14) {
      lVar7 = nn::os::GetCurrentThread();
LAB_01320cec:
      if (*plVar6 == 0) goto code_r0x01320cf4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x3c8));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x3c8));
            while (*plVar6 == 0) {
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar9) {
                *plVar6 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                bVar9 = false;
                goto LAB_01320cfc;
              }
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar9) {
          *plVar6 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar9 = false;
      goto LAB_01320cfc;
    }
    plVar6 = (long *)0x0;
    bVar9 = true;
LAB_01320cfc:
    plVar13 = *(long **)(lVar10 + 0x3e0);
    for (plVar12 = *(long **)(lVar10 + 0x3d8); plVar12 != plVar13; plVar12 = plVar12 + 2) {
      lVar10 = *plVar12;
      if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar11) {
            cVar3 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar15) {
              *psVar1 = sVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01321058;
            bVar15 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01321058:
            bVar15 = false;
          }
          if (bVar15) {
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 != 0) {
              plVar8 = (long *)(lVar10 + 0xe8);
              lVar14 = *plVar8;
              lVar7 = nn::os::GetCurrentThread();
              if (lVar7 == lVar14) {
                bVar15 = true;
                goto LAB_013210bc;
              }
              lVar7 = nn::os::GetCurrentThread();
              goto LAB_013210a8;
            }
            break;
          }
          sVar11 = sVar2;
        } while (sVar2 != 0);
      }
LAB_01320d14:
    }
    if (!bVar9) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    if (local_58 == (long *)0x0) goto LAB_01320d50;
    plVar6 = local_58 + 5;
    do {
      iVar5 = (int)*plVar6;
      iVar4 = iVar5 + -1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *(int *)plVar6 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar11 = *(short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar11) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01320f90;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01320f90:
          bVar9 = false;
        }
        if (bVar9) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 != 0) {
            lVar7 = *(long *)(lVar10 + 0x70);
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
            }
            else if (sVar11 == 0) {
LAB_013213b8:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            if (*(char *)(lVar10 + 0xf3) != '\0') {
              (**(code **)(*(long *)(lVar10 + -8) + 0x100))((long *)(lVar10 + -8));
              *(undefined1 *)(lVar10 + 0xf3) = 0;
              *(byte *)(lVar10 + 0xf4) = *(byte *)(lVar10 + 0xf0) ^ 1;
            }
          }
          break;
        }
        sVar11 = sVar2;
      } while (sVar2 != 0);
    }
    FUN_00c9e664(&local_60,param_1 + 0xe8);
    if (local_58 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = local_58[9];
    }
    plVar6 = (long *)(lVar10 + 0x3c0);
    lVar14 = *plVar6;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar14) {
      lVar7 = nn::os::GetCurrentThread();
LAB_01320db8:
      if (*plVar6 == 0) goto code_r0x01320dc0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x3c8));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x3c8));
            while (*plVar6 == 0) {
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar9) {
                *plVar6 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                bVar9 = false;
                goto LAB_01320dc8;
              }
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar9) {
          *plVar6 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar9 = false;
      goto LAB_01320dc8;
    }
    plVar6 = (long *)0x0;
    bVar9 = true;
LAB_01320dc8:
    plVar13 = *(long **)(lVar10 + 0x3e0);
    for (plVar12 = *(long **)(lVar10 + 0x3d8); plVar12 != plVar13; plVar12 = plVar12 + 2) {
      lVar10 = *plVar12;
      if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar11) {
            cVar3 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar15) {
              *psVar1 = sVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01321164;
            bVar15 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01321164:
            bVar15 = false;
          }
          if (bVar15) {
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 != 0) {
              plVar8 = (long *)(lVar10 + 0xe8);
              lVar14 = *plVar8;
              lVar7 = nn::os::GetCurrentThread();
              if (lVar7 == lVar14) {
                bVar15 = true;
                goto LAB_013211c8;
              }
              lVar7 = nn::os::GetCurrentThread();
              goto LAB_013211b4;
            }
            break;
          }
          sVar11 = sVar2;
        } while (sVar2 != 0);
      }
LAB_01320de0:
    }
    if (!bVar9) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    if (local_58 == (long *)0x0) goto LAB_01320d50;
    plVar6 = local_58 + 5;
    do {
      iVar5 = (int)*plVar6;
      iVar4 = iVar5 + -1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *(int *)plVar6 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar4 == 0) {
    (**(code **)(*local_58 + 0x10))();
  }
  else if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_01320d50:
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  return;
code_r0x01320efc:
  sVar11 = sVar2;
  if (sVar2 == 0) goto LAB_01320cb8;
  goto LAB_01320ed0;
code_r0x01320cf4:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar9) {
    *plVar6 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  bVar9 = false;
  if (cVar3 == '\0') goto LAB_01320cfc;
  goto LAB_01320cec;
LAB_013210a8:
  if (*plVar8 == 0) goto code_r0x013210b0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar15) {
            *plVar8 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013210b8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar15) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013210b8:
  bVar15 = false;
LAB_013210bc:
  plVar8 = (long *)FUN_013217a0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_013217a0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar15) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x11b) == '\0')) {
    (**(code **)(*(long *)(lVar7 + 0x20) + 0xf8))((long *)(lVar7 + 0x20));
    *(undefined2 *)(lVar7 + 0x11b) = 1;
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
  goto LAB_01320d14;
code_r0x013210b0:
  cVar3 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar15) {
    *plVar8 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_013210b8;
  goto LAB_013210a8;
code_r0x01320dc0:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar9) {
    *plVar6 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  bVar9 = false;
  if (cVar3 == '\0') goto LAB_01320dc8;
  goto LAB_01320db8;
LAB_013211b4:
  if (*plVar8 == 0) goto code_r0x013211bc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar15) {
            *plVar8 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013211c4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar15) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013211c4:
  bVar15 = false;
LAB_013211c8:
  plVar8 = (long *)FUN_013217a0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_013217a0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar15) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x11b) != '\0')) {
    (**(code **)(*(long *)(lVar7 + 0x20) + 0x100))((long *)(lVar7 + 0x20));
    *(undefined1 *)(lVar7 + 0x11b) = 0;
    *(byte *)(lVar7 + 0x11c) = *(byte *)(lVar7 + 0x118) ^ 1;
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
  goto LAB_01320de0;
code_r0x013211bc:
  cVar3 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar15) {
    *plVar8 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_013211c4;
  goto LAB_013211b4;
}


