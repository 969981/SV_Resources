/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125aa8c; name: FUN_0125aa8c
 */


void FUN_0125aa8c(long param_1,byte param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  bool bVar17;
  long lVar18;
  long *plVar19;
  bool bVar20;
  long *plVar21;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code *apcStack_160 [13];
  undefined1 local_f4 [4];
  code *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 **local_d0 [12];
  undefined8 local_70 [2];
  
  local_f4[0] = param_2 & 1;
  local_180 = &LAB_02b52680;
  local_178 = FUN_02b52854;
  apcStack_160[0] = (code *)local_f4;
  local_170 = &LAB_02b52858;
  local_168 = &LAB_02b52864;
  plVar15 = (long *)(param_1 + 0x40);
  local_f0 = apcStack_160[0];
  uVar9 = (**(code **)(*plVar15 + 0x70))(plVar15);
  if ((uVar9 & 1) == 0) {
    plVar21 = (long *)(param_1 + 0x48);
    lVar18 = *plVar21;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar18) {
      lVar10 = nn::os::GetCurrentThread();
LAB_0125ac58:
      if (*plVar21 == 0) goto code_r0x0125ac60;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
      do {
        if (*plVar21 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
            while (*plVar21 == 0) {
              cVar4 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar17) {
                *plVar21 = lVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_0125ac68;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *plVar21 = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_0125ac68:
      bVar17 = false;
      goto LAB_0125ac6c;
    }
    plVar21 = (long *)0x0;
    bVar17 = true;
LAB_0125ac6c:
    puVar6 = PTR_DAT_047d39b8;
    puVar5 = PTR_DAT_047d39b0;
    plVar19 = *(long **)(param_1 + 0x60);
    plVar2 = *(long **)(param_1 + 0x68);
    if (plVar19 != plVar2) {
      do {
        lVar10 = *plVar19;
        FUN_0125af80(lVar10,*local_f0);
        if ((*(long *)(lVar10 + 0x5a0) != 0) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x5a0) + 0x10),
           puVar11 != (undefined8 *)0x0)) {
          plVar12 = (long *)(**(code **)*puVar11)();
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar8 != 0)) {
              *(undefined8 *)PTR_DAT_047d39c8 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar6 = PTR_DAT_047d39c8;
            __cxa_guard_release(puVar5);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar6) {
              plVar12 = *(long **)(lVar10 + 0x5b0);
              if (((plVar12 != (long *)0x0) && (plVar12 != plVar15)) &&
                 (uVar9 = (**(code **)(*plVar12 + 0x70))(plVar12), (uVar9 & 1) == 0)) {
                plVar14 = plVar12 + 1;
                lVar18 = *plVar14;
                lVar10 = nn::os::GetCurrentThread();
                if (lVar10 == lVar18) {
                  plVar14 = (long *)0x0;
                  bVar20 = true;
                  goto LAB_0125ad48;
                }
                lVar10 = nn::os::GetCurrentThread();
                goto LAB_0125ad34;
              }
              break;
            }
          }
        }
LAB_0125ad08:
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar2);
    }
    if (!bVar17) {
      *plVar21 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
    }
  }
  local_d0[0] = &local_180;
  local_f0 = (code *)PTR_FUN_047db0a8;
  local_e8 = (code *)PTR_FUN_047db0b0;
  local_e0 = PTR_LAB_047db0b8;
  puStack_d8 = PTR_LAB_047db0c0;
  plVar15 = (long *)(param_1 + 0x1d8);
  lVar18 = *plVar15;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar18) {
    plVar15 = (long *)0x0;
    bVar17 = true;
LAB_0125ab6c:
    puVar1 = *(undefined8 **)(param_1 + 0x1f8);
    for (puVar11 = *(undefined8 **)(param_1 + 0x1f0); puVar11 != puVar1; puVar11 = puVar11 + 1) {
      local_70[0] = *puVar11;
      (*local_f0)(local_d0,local_70);
    }
    if (!bVar17) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
    pcVar7 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined *)0x0;
      puStack_d8 = (undefined *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar7)(local_d0);
    }
    pcVar7 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = (undefined1 *)0x0;
      local_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar7)(apcStack_160);
    }
    return;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar17) {
      *plVar15 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0125ab68;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar17) {
            *plVar15 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0125ab68;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar17) {
      *plVar15 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0125ab68:
  bVar17 = false;
  goto LAB_0125ab6c;
code_r0x0125ac60:
  cVar4 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar17) {
    *plVar21 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0125ac68;
  goto LAB_0125ac58;
LAB_0125ad34:
  if (*plVar14 == 0) goto code_r0x0125ad3c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 2));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 2));
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar20) {
            *plVar14 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0125ad44;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar20) {
      *plVar14 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0125ad44:
  bVar20 = false;
LAB_0125ad48:
  plVar3 = (long *)plVar12[5];
  for (plVar16 = (long *)plVar12[4]; plVar16 != plVar3; plVar16 = plVar16 + 1) {
    lVar10 = *plVar16;
    FUN_0125af80(lVar10,*local_f0);
    if ((*(long *)(lVar10 + 0x5a0) != 0) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x5a0) + 0x10), puVar11 != (undefined8 *)0x0))
    {
      plVar13 = (long *)(**(code **)*puVar11)();
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar8 != 0)) {
          *(undefined8 *)PTR_DAT_047d39c8 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar6 = PTR_DAT_047d39c8;
        __cxa_guard_release(puVar5);
      }
      for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        if (plVar13 == (long *)puVar6) {
          plVar13 = *(long **)(lVar10 + 0x5b0);
          if ((plVar13 != (long *)0x0) && (plVar13 != plVar12)) {
            FUN_0125b1c4(plVar13,&local_f0);
          }
          break;
        }
      }
    }
  }
  if (!bVar20) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  goto LAB_0125ad08;
code_r0x0125ad3c:
  cVar4 = '\x01';
  bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar20) {
    *plVar14 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0125ad44;
  goto LAB_0125ad34;
}


