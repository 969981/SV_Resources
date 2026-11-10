/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012fbef8; name: FUN_012fbef8
 */


void FUN_012fbef8(void)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  LightEventType *pLVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined8 uVar27;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar10 = PTR_DAT_047d88d0;
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar12 = PTR_DAT_047d88e0;
  puVar11 = PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = *(undefined8 *)PTR_DAT_047d88d8;
  FUN_012fd150(&local_68);
  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
  FUN_012fd210(&local_70);
  puVar10 = PTR_DAT_047d4df8;
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  puVar12 = PTR_DAT_047d4e08;
  puVar11 = PTR_DAT_047d4e00;
  uVar15 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar15;
  puVar16 = (undefined8 *)FUN_012fd13c(uVar15,0);
  plVar26 = (long *)*puVar16;
  if (plVar26 != (long *)0x0) {
    lVar24 = plVar26[6];
    if (*(long *)(lVar24 + 0x10) == 0) goto LAB_012fd0f4;
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
      *(undefined8 *)(lVar24 + 8) = uVar15;
      *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_012fd114;
  }
  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar15 = *(undefined8 *)puVar11;
  *(undefined8 *)puVar12 = uVar15;
  puVar16 = (undefined8 *)FUN_012fd13c(uVar15,1);
  plVar25 = (long *)*puVar16;
  if (plVar25 != (long *)0x0) {
    lVar24 = plVar25[6];
    if (*(long *)(lVar24 + 0x10) == 0) goto LAB_012fd0f4;
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
      *(undefined8 *)(lVar24 + 8) = uVar15;
      *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_012fd114;
  }
  if (((*PTR_DAT_047d8c00 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  uVar15 = *(undefined8 *)PTR_DAT_047d8c08;
  *(undefined8 *)PTR_DAT_047d8c10 = uVar15;
  lVar24 = plVar26[8];
  lVar6 = plVar26[9];
  lVar23 = plVar25[8];
  lVar7 = plVar25[9];
  if (((*PTR_DAT_047de6e0 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047de6e0), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047e23e8,PTR_DAT_047de6e8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047de6e0);
  }
  *(undefined8 *)PTR_DAT_047de6f0 = *(undefined8 *)PTR_DAT_047de6e8;
  lVar17 = FUN_012fd148();
  puVar10 = PTR_DAT_047d6c20;
  if (((*PTR_DAT_047d6c20 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  puVar12 = PTR_DAT_047d6c30;
  puVar11 = PTR_DAT_047d6c28;
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_78);
  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
  FUN_015ccff4(&local_80);
  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
  FUN_014c86ac(&local_88);
  puVar10 = PTR_DAT_047d89c8;
  if (((*PTR_DAT_047d89c8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  puVar12 = PTR_DAT_047d89d8;
  puVar11 = PTR_DAT_047d89d0;
  lVar19 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar19;
  uVar27 = *(undefined8 *)(lVar19 + 0x38);
  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar19 = *(long *)puVar11;
  *(long *)puVar12 = lVar19;
  lVar19 = *(long *)(lVar19 + 0x40);
  if (((*PTR_DAT_047d94e8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar20 = *(long *)PTR_DAT_047d94f0;
  *(long *)PTR_DAT_047d94f8 = lVar20;
  plVar21 = *(long **)(lVar20 + 0x268);
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[6];
    if (*(long *)(lVar20 + 0x10) == 0) {
LAB_012fd0f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar20 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      *(undefined8 *)(lVar20 + 8) = uVar18;
      *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_012fd114:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar2 = (long *)(lVar17 + 0x1d0);
  lVar20 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc1a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar20;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc1a8;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc1a8:
  FUN_00e220f4(lVar17,uVar27,0);
  FUN_00e220f4(lVar17,0,lVar24);
  plVar3 = (long *)(lVar24 + 0x1d0);
  lVar20 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc1e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x1d8));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x1d8));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *plVar3 = lVar20;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc1e4;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc1e4:
  if (((*PTR_DAT_047d8d80 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar20 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar20;
  lVar22 = *(long *)(lVar20 + 0x28);
  FUN_00e220f4(lVar24,0,lVar22);
  plVar3 = (long *)(lVar22 + 0x1d0);
  lVar20 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc240;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x1d8));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x1d8));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *plVar3 = lVar20;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc240;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc240:
  *(undefined8 *)(lVar22 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0x1d8));
  *(undefined8 *)(lVar24 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x1d8));
  pLVar4 = (LightEventType *)(lVar17 + 0x1d8);
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent(pLVar4);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc28c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar4);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar4);
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc28c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc28c:
  FUN_00e220f4(lVar17,uVar27,0);
  FUN_00e220f4(lVar17,0,local_78);
  plVar13 = local_78;
  plVar3 = local_78 + 0x3a;
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc2d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x3b));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x3b));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *plVar3 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc2d0;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc2d0:
  FUN_00e220f4(plVar13,0,lVar23);
  plVar3 = (long *)(lVar23 + 0x1d0);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc2fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x1d8));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x1d8));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *plVar3 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc2fc;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc2fc:
  FUN_00e220f4(lVar23,0,lVar7);
  plVar3 = (long *)(lVar7 + 0x1d0);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc328;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1d8));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1d8));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *plVar3 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc328;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc328:
  if (((*PTR_DAT_047d8d80 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar24 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar24;
  lVar17 = *(long *)(lVar24 + 0x28);
  FUN_00e220f4(lVar7,0,lVar17);
  plVar3 = (long *)(lVar17 + 0x1d0);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc380;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *plVar3 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc380;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc380:
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  *(undefined8 *)(lVar7 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1d8));
  *(undefined8 *)(lVar23 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0x1d8));
  plVar13[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x3b));
  *plVar2 = 0;
  nn::os::SignalLightEvent(pLVar4);
  plVar3 = local_80;
  plVar2 = local_80 + 0x3a;
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc3f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc3f4;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc3f4:
  FUN_00e220f4(plVar3,lVar7,0);
  FUN_00e220f4(plVar3,0,lVar19);
  plVar2 = (long *)(lVar19 + 0x1d0);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc430;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc430;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc430:
  FUN_00e220f4(lVar19,0,plVar21);
  plVar2 = plVar21 + 0x3a;
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc45c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar21 + 0x3b));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar21 + 0x3b));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc45c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc45c:
  plVar21[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar21 + 0x3b));
  *(undefined8 *)(lVar19 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1d8));
  plVar3[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar3 + 0x3b));
  plVar3 = local_88;
  plVar2 = local_88 + 0x3a;
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc4ac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc4ac;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc4ac:
  FUN_00e220f4(plVar3,local_80,0);
  plVar3[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar3 + 0x3b));
  plVar3 = local_68;
  plVar2 = local_68 + 0x3a;
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc4ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc4ec;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc4ec:
  FUN_00e220f4(plVar3,0,lVar6);
  plVar2 = (long *)(lVar6 + 0x1d0);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc518;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x1d8));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x1d8));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc518;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc518:
  *(undefined8 *)(lVar6 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x1d8));
  plVar3[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar3 + 0x3b));
  FUN_012c1efc(uVar15,local_78,local_68);
  plVar3 = local_70;
  plVar2 = local_70 + 0x3a;
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc568;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc568;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc568:
  FUN_00e220f4(plVar3,lVar7,0);
  plVar3[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar3 + 0x3b));
  plVar3 = local_70;
  plVar2 = local_70 + 0x3a;
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc5a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x3b));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc5a8;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc5a8:
  FUN_00e220f4(plVar3,lVar6,0);
  if (((*PTR_DAT_047d8d80 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar24 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar24;
  lVar23 = *(long *)(lVar24 + 0x28);
  FUN_00e220f4(plVar3,0,lVar23);
  plVar2 = (long *)(lVar23 + 0x1d0);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_012fc610;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x1d8));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x1d8));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_012fc610;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_012fc610:
  *(undefined8 *)(lVar23 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0x1d8));
  plVar3[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar3 + 0x3b));
  *(undefined4 *)(local_78 + 0x6a) = 0;
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*plVar21 + 0x50))(plVar21);
    }
    else if (sVar5 == 0) goto LAB_012fd0cc;
  }
  if (local_88 != (long *)0x0) {
    lVar24 = local_88[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*local_88 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_012fd0cc;
  }
  if (local_80 != (long *)0x0) {
    lVar24 = local_80[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*local_80 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_012fd0cc;
  }
  if (local_78 != (long *)0x0) {
    lVar24 = local_78[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_012fd0cc;
  }
  if (plVar25 != (long *)0x0) {
    lVar24 = plVar25[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*plVar25 + 0x50))(plVar25);
    }
    else if (sVar5 == 0) goto LAB_012fd0cc;
  }
  if (plVar26 != (long *)0x0) {
    lVar24 = plVar26[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*plVar26 + 0x50))(plVar26);
    }
    else if (sVar5 == 0) goto LAB_012fd0cc;
  }
  if (local_70 != (long *)0x0) {
    lVar24 = local_70[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_012fd0cc;
  }
  if (local_68 != (long *)0x0) {
    lVar24 = local_68[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_012fd0cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


