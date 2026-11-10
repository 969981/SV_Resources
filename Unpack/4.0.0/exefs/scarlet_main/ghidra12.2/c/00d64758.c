/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d64758; name: FUN_00d64758
 */


void FUN_00d64758(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  short *psVar3;
  short sVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *local_38;
  
  FUN_00d64f48(&local_38);
  if (local_38 == (long *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  plVar1 = local_38 + 0x60;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00d647bc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_38 + 0x61));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_38 + 0x61));
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d647bc;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d647bc:
  plVar12 = (long *)local_38[0x25];
  plVar6 = (long *)local_38[0x26];
  if ((plVar12 != plVar6) && (*plVar12 != 0x1be933fd1c91508b)) {
    do {
      plVar12 = plVar12 + 0xb;
      if (plVar6 == plVar12) {
        plVar12 = plVar6;
        goto LAB_00d64800;
      }
    } while (*plVar12 != 0x1be933fd1c91508b);
  }
LAB_00d64800:
  pLVar2 = (LightEventType *)(local_38 + 0x61);
  local_38[0x60] = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar6 != plVar12) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    uVar7 = *(ulong *)(param_1 + 0x50);
    uVar11 = uVar7 ^ uVar5;
    *(char **)(param_1 + 0x1d8) = "eye_blink01_trigger";
    *(undefined8 *)(param_1 + 0x1e0) = 0x13;
    *(ulong *)(param_1 + 0x48) = uVar11 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar11 << 0x10;
    *(ulong *)(param_1 + 0x50) = uVar11 >> 0x1b | uVar11 << 0x25;
    *(undefined8 *)(param_1 + 0x1d0) = 0x1be933fd1c91508b;
    *(float *)(param_1 + 0x1c8) = (float)(uVar7 + uVar5) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00d6489c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d6489c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d6489c:
  plVar12 = (long *)local_38[0x25];
  plVar6 = (long *)local_38[0x26];
  if ((plVar12 != plVar6) && (*plVar12 != 0x63c69b262ffe6bd2)) {
    do {
      plVar12 = plVar12 + 0xb;
      if (plVar6 == plVar12) {
        plVar12 = plVar6;
        goto LAB_00d648e0;
      }
    } while (*plVar12 != 0x63c69b262ffe6bd2);
  }
LAB_00d648e0:
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar6 != plVar12) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    uVar7 = *(ulong *)(param_1 + 0x50);
    uVar11 = uVar7 ^ uVar5;
    *(char **)(param_1 + 0x1f8) = "eye_blink02_trigger";
    *(undefined8 *)(param_1 + 0x200) = 0x13;
    *(ulong *)(param_1 + 0x48) = uVar11 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar11 << 0x10;
    *(ulong *)(param_1 + 0x50) = uVar11 >> 0x1b | uVar11 << 0x25;
    *(undefined8 *)(param_1 + 0x1f0) = 0x63c69b262ffe6bd2;
    *(float *)(param_1 + 0x1e8) = (float)(uVar7 + uVar5) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00d6490c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d6490c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d6490c:
  plVar12 = (long *)local_38[0x25];
  plVar6 = (long *)local_38[0x26];
  if ((plVar12 != plVar6) && (*plVar12 != -0x5f1f37b10d296cbb)) {
    do {
      plVar12 = plVar12 + 0xb;
      if (plVar6 == plVar12) {
        plVar12 = plVar6;
        goto LAB_00d64950;
      }
    } while (*plVar12 != -0x5f1f37b10d296cbb);
  }
LAB_00d64950:
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar6 != plVar12) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    uVar7 = *(ulong *)(param_1 + 0x50);
    uVar11 = uVar7 ^ uVar5;
    *(undefined8 *)(param_1 + 0x210) = 0xa0e0c84ef2d69345;
    *(undefined8 *)(param_1 + 0x220) = 0x13;
    *(char **)(param_1 + 0x218) = "eye_blink03_trigger";
    *(ulong *)(param_1 + 0x48) = uVar11 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar11 << 0x10;
    *(ulong *)(param_1 + 0x50) = uVar11 >> 0x1b | uVar11 << 0x25;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
    *(float *)(param_1 + 0x208) = (float)(uVar7 + uVar5) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00d6497c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d6497c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d6497c:
  plVar12 = (long *)local_38[0x25];
  plVar6 = (long *)local_38[0x26];
  if ((plVar12 != plVar6) && (*plVar12 != -0x57b0d9571898dc04)) {
    do {
      plVar12 = plVar12 + 0xb;
      if (plVar6 == plVar12) {
        plVar12 = plVar6;
        goto LAB_00d649c0;
      }
    } while (*plVar12 != -0x57b0d9571898dc04);
  }
LAB_00d649c0:
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar6 != plVar12) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    uVar7 = *(ulong *)(param_1 + 0x50);
    uVar11 = uVar7 ^ uVar5;
    *(undefined8 *)(param_1 + 0x230) = 0xa84f26a8e76723fc;
    *(undefined8 *)(param_1 + 0x240) = 0x13;
    *(char **)(param_1 + 0x238) = "eye_blink04_trigger";
    *(ulong *)(param_1 + 0x48) = uVar11 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar11 << 0x10;
    *(ulong *)(param_1 + 0x50) = uVar11 >> 0x1b | uVar11 << 0x25;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
    *(float *)(param_1 + 0x228) = (float)(uVar7 + uVar5) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00d649ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d649ec;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d649ec:
  plVar12 = (long *)local_38[0x25];
  plVar6 = (long *)local_38[0x26];
  if ((plVar12 != plVar6) && (*plVar12 != -0x2561bf2cdd3257b1)) {
    do {
      plVar12 = plVar12 + 0xb;
      if (plVar6 == plVar12) {
        plVar12 = plVar6;
        goto LAB_00d64a30;
      }
    } while (*plVar12 != -0x2561bf2cdd3257b1);
  }
LAB_00d64a30:
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar6 != plVar12) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    uVar7 = *(ulong *)(param_1 + 0x50);
    uVar11 = uVar7 ^ uVar5;
    *(undefined8 *)(param_1 + 0x250) = 0xda9e40d322cda84f;
    *(undefined8 *)(param_1 + 0x260) = 0x13;
    *(char **)(param_1 + 600) = "eye_blink05_trigger";
    *(ulong *)(param_1 + 0x48) = uVar11 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar11 << 0x10;
    *(ulong *)(param_1 + 0x50) = uVar11 >> 0x1b | uVar11 << 0x25;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
    *(float *)(param_1 + 0x248) = (float)(uVar7 + uVar5) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00d64a5c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00d64a5c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00d64a5c:
  plVar12 = (long *)local_38[0x25];
  plVar6 = (long *)local_38[0x26];
  if ((plVar12 != plVar6) && (*plVar12 != 0x4213bb940a413b56)) {
    do {
      plVar12 = plVar12 + 0xb;
      if (plVar6 == plVar12) {
        plVar12 = plVar6;
        goto LAB_00d64aa0;
      }
    } while (*plVar12 != 0x4213bb940a413b56);
  }
LAB_00d64aa0:
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plVar6 != plVar12) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    uVar7 = *(ulong *)(param_1 + 0x50);
    uVar11 = uVar7 ^ uVar5;
    *(undefined8 *)(param_1 + 0x270) = 0x4213bb940a413b56;
    *(undefined8 *)(param_1 + 0x280) = 0x13;
    *(char **)(param_1 + 0x278) = "eye_blink06_trigger";
    *(ulong *)(param_1 + 0x48) = uVar11 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar11 << 0x10;
    *(ulong *)(param_1 + 0x50) = uVar11 >> 0x1b | uVar11 << 0x25;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
    *(float *)(param_1 + 0x268) = (float)(uVar7 + uVar5) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
  }
  lVar10 = local_38[6];
  psVar3 = (short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar3;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar9) {
      *psVar3 = sVar4 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*local_38 + 0x50))(local_38);
    return;
  }
  if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


