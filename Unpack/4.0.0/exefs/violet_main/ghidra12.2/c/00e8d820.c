/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8d820; name: FUN_00e8d820
 */


void FUN_00e8d820(long param_1)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_68 = *(long **)(param_1 + 0x1c0);
  if (local_68 != (long *)0x0) {
    lVar10 = local_68[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00e8ddd0;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_00e8ddf0;
  }
  local_70 = *(long **)(param_1 + 0x1c8);
  if (local_70 != (long *)0x0) {
    lVar10 = local_70[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00e8ddd0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_00e8ddf0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar11 = local_68;
  plVar14 = local_68 + 0x3a;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00e8d8dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x3b));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x3b));
        while (*plVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00e8d8dc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e8d8dc:
  plVar12 = local_70;
  plVar16 = local_70 + 0x3a;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00e8d8fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
        while (*plVar16 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00e8d8fc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e8d8fc:
  lVar10 = *(long *)(param_1 + 0x178);
  if (*(long *)(param_1 + 0x180) != lVar10) {
    uVar15 = 0;
    do {
      lVar13 = *(long *)(lVar10 + uVar15 * 0x10);
      FUN_00e8bca4(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar13 * 8));
      plVar7 = local_78;
      FUN_00e220f4(plVar11,0,local_78);
      plVar11 = plVar7 + 0x3a;
      lVar10 = nn::os::GetCurrentThread();
LAB_00e8da8c:
      if (*plVar11 == 0) goto code_r0x00e8da94;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x3b));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x3b));
            while (*plVar11 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar6) {
                *plVar11 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00e8da9c;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00e8da9c:
      FUN_00e220f4(plVar7,local_68,0);
      plVar7[0x3a] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x3b));
      FUN_012dcb50(&local_68,plVar7);
      plVar11 = local_68;
      plVar2 = local_68 + 0x3a;
      lVar10 = nn::os::GetCurrentThread();
      while (*plVar2 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_00e8dae8;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x3b));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x3b));
            while (*plVar2 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00e8dae8;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00e8dae8:
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
      FUN_00e8bd64(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar13 * 8));
      plVar8 = local_78;
      FUN_00e220f4(plVar12,0,local_78);
      plVar14 = plVar8 + 0x3a;
      lVar10 = nn::os::GetCurrentThread();
      while (*plVar14 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_00e8db34;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
      do {
        if (*plVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
            while (*plVar14 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00e8db34;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00e8db34:
      FUN_00e220f4(plVar8,local_70,0);
      plVar8[0x3a] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
      FUN_012dcb50(&local_70,plVar8);
      plVar12 = local_70;
      plVar3 = local_70 + 0x3a;
      lVar10 = nn::os::GetCurrentThread();
      while (*plVar3 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_00e8db80;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
      do {
        if (*plVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
            while (*plVar3 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *plVar3 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00e8db80;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00e8db80:
      *plVar16 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar4 == 0) goto LAB_00e8dda8;
      }
      if (plVar7 != (long *)0x0) {
        lVar10 = plVar7[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
        }
        else if (sVar4 == 0) goto LAB_00e8dda8;
      }
      lVar10 = *(long *)(param_1 + 0x178);
      uVar15 = uVar15 + 1;
      plVar14 = plVar2;
      plVar16 = plVar3;
      if ((ulong)(*(long *)(param_1 + 0x180) - lVar10 >> 4) <= uVar15) break;
    } while( true );
  }
  FUN_00e220f4(plVar11,0,*(undefined8 *)(param_1 + 0x1d0));
  FUN_00e220f4(plVar12,0,*(undefined8 *)(param_1 + 0x1d8));
  plVar12[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x3b));
  plVar11[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x3b));
  if (local_70 != (long *)0x0) {
    lVar10 = local_70[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_00e8dda8;
  }
  if (local_68 != (long *)0x0) {
    lVar10 = local_68[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_00e8dda8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
code_r0x00e8da94:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar6) {
    *plVar11 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00e8da9c;
  goto LAB_00e8da8c;
}


