/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011403c0; name: FUN_011403c0
 */


void FUN_011403c0(long param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long **pplStack_58;
  long *local_38;
  
  FUN_00c9e664(&local_70,param_1 + 0xe8);
  if (local_70 != (long *)0x0) {
    if (local_68 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_68[9];
    }
    plVar9 = (long *)(lVar12 + 0x110);
    lVar11 = *plVar9;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      lVar7 = nn::os::GetCurrentThread();
      bVar13 = false;
LAB_01140874:
      if (*plVar9 == 0) goto code_r0x0114087c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      bVar13 = false;
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar13) {
                *plVar9 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              bVar13 = false;
              if (cVar4 == '\0') goto LAB_01140418;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01140418;
    }
    bVar13 = true;
LAB_01140418:
    plVar9 = *(long **)(lVar12 + 0x128);
    plVar3 = *(long **)(lVar12 + 0x130);
    if (plVar9 != plVar3) {
      do {
        lVar7 = *plVar9;
        if ((((lVar7 != 0) && (uVar8 = FUN_01140ab0(lVar7 + 8), (uVar8 & 1) != 0)) &&
            (uVar8 = (**(code **)(*(long *)*plVar9 + 0xc0))(), (uVar8 & 1) == 0)) &&
           (*(long *)(param_1 + 0x498) == lVar7 + -0x20)) goto LAB_0114046c;
        plVar9 = plVar9 + 1;
      } while (plVar3 != plVar9);
      plVar9 = plVar3;
LAB_0114046c:
      if (plVar9 != *(long **)(lVar12 + 0x130)) {
        (**(code **)(*(long *)*plVar9 + 0xa8))();
        *(undefined **)(lVar12 + 0x1b0) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar12 + 0x1b8) = 0;
      }
    }
    plVar9 = *(long **)(lVar12 + 0x160);
    plVar3 = *(long **)(lVar12 + 0x168);
    if (plVar9 != plVar3) {
      do {
        lVar7 = *plVar9;
        if (((lVar7 != 0) && (uVar8 = FUN_01140ab0(lVar7 + 8), (uVar8 & 1) != 0)) &&
           ((uVar8 = (**(code **)(*(long *)*plVar9 + 0xc0))(), (uVar8 & 1) == 0 &&
            (*(long *)(param_1 + 0x498) == lVar7 + -0x20)))) goto LAB_011404e8;
        plVar9 = plVar9 + 1;
      } while (plVar3 != plVar9);
      plVar9 = plVar3;
LAB_011404e8:
      if (plVar9 != *(long **)(lVar12 + 0x168)) {
        (**(code **)(*(long *)*plVar9 + 0xa8))();
        *(undefined **)(lVar12 + 0x1b0) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar12 + 0x1b8) = 0;
      }
    }
    if ((*(byte *)(lVar12 + 0x360) & 7) != 0) {
      pcVar10 = *(code **)(lVar12 + 0x1b0);
      if ((*(ulong *)(lVar12 + 0x1b8) & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 +
                            *(long *)(lVar12 + 0x108 + ((long)*(ulong *)(lVar12 + 0x1b8) >> 1)));
      }
      (*pcVar10)();
    }
    if (!bVar13) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
    if (local_68 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_68[9];
    }
    local_38 = &local_78;
    pplStack_58 = &local_38;
    plVar9 = (long *)(lVar12 + 0x110);
    lVar11 = *plVar9;
    local_78 = param_1;
    local_60 = lVar12 + 0x108;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      lVar7 = nn::os::GetCurrentThread();
      bVar13 = false;
LAB_01140894:
      if (*plVar9 == 0) goto code_r0x0114089c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      bVar13 = false;
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar13) {
                *plVar9 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              bVar13 = false;
              if (cVar4 == '\0') goto LAB_01140588;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01140588;
    }
    bVar13 = true;
LAB_01140588:
    FUN_01140b88(&local_60,lVar12 + 0x128);
    FUN_01140b88(&local_60,lVar12 + 0x160);
    if ((*(byte *)(lVar12 + 0x360) & 7) != 0) {
      pcVar10 = *(code **)(lVar12 + 0x1b0);
      if ((*(ulong *)(lVar12 + 0x1b8) & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 +
                            *(long *)(lVar12 + 0x108 + ((long)*(ulong *)(lVar12 + 0x1b8) >> 1)));
      }
      (*pcVar10)();
    }
    if (!bVar13) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
    if (local_68 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_68[9];
    }
    local_38 = &local_78;
    pplStack_58 = &local_38;
    plVar9 = (long *)(lVar12 + 0x110);
    lVar11 = *plVar9;
    local_78 = param_1;
    local_60 = lVar12 + 0x108;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      lVar7 = nn::os::GetCurrentThread();
      bVar13 = false;
LAB_011408b4:
      if (*plVar9 == 0) goto code_r0x011408bc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      bVar13 = false;
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar13) {
                *plVar9 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              bVar13 = false;
              if (cVar4 == '\0') goto LAB_01140614;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01140614;
    }
    bVar13 = true;
LAB_01140614:
    FUN_01140cec(&local_60,lVar12 + 0x128);
    FUN_01140cec(&local_60,lVar12 + 0x160);
    if ((*(byte *)(lVar12 + 0x360) & 7) != 0) {
      pcVar10 = *(code **)(lVar12 + 0x1b0);
      if ((*(ulong *)(lVar12 + 0x1b8) & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 +
                            *(long *)(lVar12 + 0x108 + ((long)*(ulong *)(lVar12 + 0x1b8) >> 1)));
      }
      (*pcVar10)();
    }
    if (!bVar13) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
    if (local_68 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_68[9];
    }
    local_38 = &local_78;
    pplStack_58 = &local_38;
    plVar9 = (long *)(lVar12 + 0x110);
    lVar11 = *plVar9;
    local_78 = param_1;
    local_60 = lVar12 + 0x108;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      lVar7 = nn::os::GetCurrentThread();
      bVar13 = false;
LAB_011408d4:
      if (*plVar9 == 0) goto code_r0x011408dc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      bVar13 = false;
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar13) {
                *plVar9 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              bVar13 = false;
              if (cVar4 == '\0') goto LAB_011406a0;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_011406a0;
    }
    bVar13 = true;
LAB_011406a0:
    FUN_01140e54(&local_60,lVar12 + 0x128);
    FUN_01140e54(&local_60,lVar12 + 0x160);
    if ((*(byte *)(lVar12 + 0x360) & 7) != 0) {
      pcVar10 = *(code **)(lVar12 + 0x1b0);
      if ((*(ulong *)(lVar12 + 0x1b8) & 1) != 0) {
        pcVar10 = *(code **)(pcVar10 +
                            *(long *)(lVar12 + 0x108 + ((long)*(ulong *)(lVar12 + 0x1b8) >> 1)));
      }
      (*pcVar10)();
    }
    if (!bVar13) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
  }
  if (local_68 != (long *)0x0) {
    plVar9 = local_68 + 5;
    do {
      lVar12 = *plVar9;
      iVar6 = (int)lVar12 + -1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar13) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x60))();
  }
  plVar9 = *(long **)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01140830;
  }
  plVar9 = *(long **)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01140830;
  }
  plVar9 = *(long **)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x510) = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01140830;
  }
  plVar9 = *(long **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_01140830:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((*(long *)(param_1 + 0x488) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_1 + 0x488) + 0x120), lVar12 != 0)) {
    *(undefined1 *)(lVar12 + 0x210) = 0;
  }
  *(undefined1 *)(param_1 + 0x482) = 1;
  return;
code_r0x0114087c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01140418;
  goto LAB_01140874;
code_r0x0114089c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01140588;
  goto LAB_01140894;
code_r0x011408bc:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01140614;
  goto LAB_011408b4;
code_r0x011408dc:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_011406a0;
  goto LAB_011408d4;
}


