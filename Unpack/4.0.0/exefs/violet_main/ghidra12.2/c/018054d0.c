/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018054d0; name: FUN_018054d0
 */


void FUN_018054d0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  bool bVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 auStack_150 [96];
  code *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 **local_d0 [12];
  undefined8 local_70 [2];
  
  lVar14 = *(long *)(param_1 + 0x1c8);
  *(undefined1 *)(param_1 + 0x448) = 1;
  for (; (lVar14 != 0 && (lVar14 = *(long *)(lVar14 + 0x10), lVar14 != 0));
      lVar14 = *(long *)(lVar14 + 0x1a0)) {
    *(undefined1 *)(lVar14 + 0x420) = 1;
  }
  local_170 = &LAB_02b53388;
  local_168 = FUN_02b5356c;
  local_160 = &LAB_02b53570;
  puStack_158 = &LAB_02b53574;
  plVar19 = (long *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x448) = 1;
  uVar10 = (**(code **)(*plVar19 + 0x70))(plVar19);
  if ((uVar10 & 1) == 0) {
    plVar21 = (long *)(param_1 + 0x48);
    lVar17 = *plVar21;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar17) {
      lVar14 = nn::os::GetCurrentThread();
LAB_018056b0:
      if (*plVar21 == 0) goto code_r0x018056b8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
      do {
        if (*plVar21 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
            while (*plVar21 == 0) {
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar16) {
                *plVar21 = lVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_018056c0;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar16) {
          *plVar21 = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_018056c0:
      bVar16 = false;
      goto LAB_018056c4;
    }
    plVar21 = (long *)0x0;
    bVar16 = true;
LAB_018056c4:
    puVar7 = PTR_DAT_047d39b8;
    puVar6 = PTR_DAT_047d39b0;
    plVar18 = *(long **)(param_1 + 0x60);
    plVar2 = *(long **)(param_1 + 0x68);
    if (plVar18 != plVar2) {
      do {
        lVar14 = *plVar18;
        *(undefined1 *)(lVar14 + 0x7c0) = 1;
        if ((*(long *)(lVar14 + 0x5a0) != 0) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x5a0) + 0x10),
           puVar11 != (undefined8 *)0x0)) {
          plVar12 = (long *)(**(code **)*puVar11)();
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
              *(undefined8 *)PTR_DAT_047d39c8 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar7 = PTR_DAT_047d39c8;
            __cxa_guard_release(puVar6);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar7) {
              plVar12 = *(long **)(lVar14 + 0x5b0);
              if (((plVar12 != (long *)0x0) && (plVar12 != plVar19)) &&
                 (uVar10 = (**(code **)(*plVar12 + 0x70))(plVar12), (uVar10 & 1) == 0)) {
                plVar15 = plVar12 + 1;
                lVar17 = *plVar15;
                lVar14 = nn::os::GetCurrentThread();
                if (lVar14 == lVar17) {
                  plVar15 = (long *)0x0;
                  bVar5 = true;
                  goto LAB_01805798;
                }
                lVar14 = nn::os::GetCurrentThread();
                goto LAB_01805784;
              }
              break;
            }
          }
        }
LAB_01805758:
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar2);
    }
    if (!bVar16) {
      *plVar21 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
    }
  }
  local_d0[0] = &local_170;
  local_f0 = (code *)PTR_FUN_047db0a8;
  local_e8 = (code *)PTR_FUN_047db0b0;
  local_e0 = PTR_LAB_047db0b8;
  puStack_d8 = PTR_LAB_047db0c0;
  plVar19 = (long *)(param_1 + 0x1d8);
  lVar17 = *plVar19;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 == lVar17) {
    plVar19 = (long *)0x0;
    bVar16 = true;
LAB_018055c4:
    puVar1 = *(undefined8 **)(param_1 + 0x1f8);
    for (puVar11 = *(undefined8 **)(param_1 + 0x1f0); puVar11 != puVar1; puVar11 = puVar11 + 1) {
      local_70[0] = *puVar11;
      (*local_f0)(local_d0,local_70);
    }
    if (!bVar16) {
      *plVar19 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
    }
    pcVar8 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined *)0x0;
      puStack_d8 = (undefined *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar8)(local_d0);
    }
    pcVar8 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar8)(auStack_150);
    }
    return;
  }
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar16) {
      *plVar19 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_018055c0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar19 == 0) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar16) {
            *plVar19 = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_018055c0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar16) {
      *plVar19 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_018055c0:
  bVar16 = false;
  goto LAB_018055c4;
code_r0x018056b8:
  cVar4 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar16) {
    *plVar21 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_018056c0;
  goto LAB_018056b0;
LAB_01805784:
  if (*plVar15 == 0) goto code_r0x0180578c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 2));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 2));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01805794;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01805794:
  bVar5 = false;
LAB_01805798:
  plVar3 = (long *)plVar12[5];
  for (plVar20 = (long *)plVar12[4]; plVar20 != plVar3; plVar20 = plVar20 + 1) {
    lVar14 = *plVar20;
    *(undefined1 *)(lVar14 + 0x7c0) = 1;
    if ((*(long *)(lVar14 + 0x5a0) != 0) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x5a0) + 0x10), puVar11 != (undefined8 *)0x0))
    {
      plVar13 = (long *)(**(code **)*puVar11)();
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
          *(undefined8 *)PTR_DAT_047d39c8 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar7 = PTR_DAT_047d39c8;
        __cxa_guard_release(puVar6);
      }
      for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        if (plVar13 == (long *)puVar7) {
          if ((*(long **)(lVar14 + 0x5b0) != (long *)0x0) && (*(long **)(lVar14 + 0x5b0) != plVar12)
             ) {
            FUN_021a2698();
          }
          break;
        }
      }
    }
  }
  if (!bVar5) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
  }
  goto LAB_01805758;
code_r0x0180578c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar5) {
    *plVar15 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01805794;
  goto LAB_01805784;
}


