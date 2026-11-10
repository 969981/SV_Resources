/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f9b7c; name: FUN_010f9b7c
 */


void FUN_010f9b7c(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  plVar14 = (long *)(param_1 + 0x200);
  lVar13 = *plVar14;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar13) {
    lVar10 = nn::os::GetCurrentThread();
LAB_010f9bbc:
    if (*plVar14 == 0) goto code_r0x010f9bc4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x208));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x208));
          while (*plVar14 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar2) {
              *plVar14 = lVar10;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_010f9bcc;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_010f9bcc:
    bVar2 = false;
    goto LAB_010f9bd0;
  }
  plVar14 = (long *)0x0;
  bVar2 = true;
LAB_010f9bd0:
  plVar16 = (long *)(param_1 + 0x70);
  lVar13 = *plVar16;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar13) {
    lVar10 = nn::os::GetCurrentThread();
LAB_010f9bec:
    if (*plVar16 == 0) goto code_r0x010f9bf4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
    do {
      if (*plVar16 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
          while (*plVar16 == 0) {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *plVar16 = lVar10;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_010f9bfc;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_010f9bfc:
    bVar3 = false;
    goto LAB_010f9c00;
  }
  plVar16 = (long *)0x0;
  bVar3 = true;
LAB_010f9c00:
  plVar18 = (long *)(param_1 + 0x138);
  lVar13 = *plVar18;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar13) {
    lVar10 = nn::os::GetCurrentThread();
LAB_010f9c1c:
    if (*plVar18 == 0) goto code_r0x010f9c24;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
          while (*plVar18 == 0) {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = lVar10;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_010f9c2c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_010f9c2c:
    bVar4 = false;
    goto LAB_010f9c30;
  }
  plVar18 = (long *)0x0;
  bVar4 = true;
LAB_010f9c30:
  plVar17 = (long *)(param_1 + 0x2d0);
  lVar13 = *plVar17;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar13) {
    plVar17 = (long *)0x0;
    bVar5 = true;
LAB_010f9c60:
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x288);
    uVar12 = *(ulong *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    puVar8 = PTR_DAT_047d88e0;
    puVar7 = PTR_DAT_047d88d8;
    puVar6 = PTR_DAT_047d88d0;
    if (*(char *)(param_1 + 0x398) == '\0') {
      if (uVar12 != 0) {
        uVar15 = 0;
        do {
          if ((*(ulong *)(param_1 + 200) <= uVar15) ||
             ((*(ulong *)(*(long *)(param_1 + 0xc0) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
               (uVar15 & 0x3f) & 1) == 0)) {
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dbdd8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar6);
            }
            uVar11 = *(undefined8 *)puVar7;
            *(undefined8 *)puVar8 = uVar11;
            FUN_010fad98(uVar11,*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(long *)(param_1 + 0x88) + uVar15 * 8),0);
            uVar12 = *(ulong *)(param_1 + 0x130);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
      }
      puVar8 = PTR_DAT_047d88e0;
      puVar7 = PTR_DAT_047d88d8;
      puVar6 = PTR_DAT_047d88d0;
      uVar12 = *(ulong *)(param_1 + 0x1f8);
      if (uVar12 != 0) {
        uVar15 = 0;
        do {
          if ((*(ulong *)(param_1 + 400) <= uVar15) ||
             ((*(ulong *)(*(long *)(param_1 + 0x188) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
               (uVar15 & 0x3f) & 1) == 0)) {
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dbdd8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar6);
            }
            uVar11 = *(undefined8 *)puVar7;
            *(undefined8 *)puVar8 = uVar11;
            FUN_010fa798(uVar11,*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(long *)(param_1 + 0x150) + uVar15 * 8),0);
            uVar12 = *(ulong *)(param_1 + 0x1f8);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
      }
      uVar12 = *(ulong *)(param_1 + 0x390);
      if (uVar12 != 0) {
        if ((*(long *)(param_1 + 0x328) == 0) || ((**(byte **)(param_1 + 800) & 1) == 0)) {
          if (((*PTR_DAT_047d88d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d88d0);
          }
          uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
          *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
          FUN_010fb398(uVar11,*(undefined8 *)(param_1 + 0x40),**(undefined8 **)(param_1 + 0x2e8),0);
          uVar12 = *(ulong *)(param_1 + 0x390);
        }
        if (1 < uVar12) {
          if ((*(ulong *)(param_1 + 0x328) < 2) || ((**(byte **)(param_1 + 800) >> 1 & 1) == 0)) {
            if (((*PTR_DAT_047d88d0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d88d0);
            }
            uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
            *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
            FUN_010fb398(uVar11,*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(long *)(param_1 + 0x2e8) + 8),0);
            uVar12 = *(ulong *)(param_1 + 0x390);
          }
          puVar8 = PTR_DAT_047d88e0;
          puVar7 = PTR_DAT_047d88d8;
          puVar6 = PTR_DAT_047d88d0;
          if (2 < uVar12) {
            uVar15 = 2;
            do {
              if ((*(ulong *)(param_1 + 0x328) <= uVar15) ||
                 ((*(ulong *)(*(long *)(param_1 + 800) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar15 & 0x3f) & 1) == 0)) {
                if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047dbdd8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar6);
                }
                uVar11 = *(undefined8 *)puVar7;
                *(undefined8 *)puVar8 = uVar11;
                FUN_010fb398(uVar11,*(undefined8 *)(param_1 + 0x40),
                             *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar15 * 8),0);
                uVar12 = *(ulong *)(param_1 + 0x390);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar12);
          }
        }
      }
    }
    else {
      if (uVar12 != 0) {
        if ((*(long *)(param_1 + 200) == 0) || ((**(byte **)(param_1 + 0xc0) & 1) == 0)) {
          if (((*PTR_DAT_047d88d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d88d0);
          }
          uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
          *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
          FUN_010fb998(uVar11,*(undefined8 *)(param_1 + 0x40),**(undefined8 **)(param_1 + 0x88),0);
          uVar12 = *(ulong *)(param_1 + 0x130);
        }
        if (1 < uVar12) {
          if ((*(ulong *)(param_1 + 200) < 2) || ((**(byte **)(param_1 + 0xc0) >> 1 & 1) == 0)) {
            if (((*PTR_DAT_047d88d0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d88d0);
            }
            uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
            *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
            FUN_010fb998(uVar11,*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(long *)(param_1 + 0x88) + 8),0);
            uVar12 = *(ulong *)(param_1 + 0x130);
          }
          puVar8 = PTR_DAT_047d88e0;
          puVar7 = PTR_DAT_047d88d8;
          puVar6 = PTR_DAT_047d88d0;
          if (2 < uVar12) {
            uVar15 = 2;
            do {
              if ((*(ulong *)(param_1 + 200) <= uVar15) ||
                 ((*(ulong *)(*(long *)(param_1 + 0xc0) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar15 & 0x3f) & 1) == 0)) {
                if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047dbdd8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar6);
                }
                uVar11 = *(undefined8 *)puVar7;
                *(undefined8 *)puVar8 = uVar11;
                FUN_010fb998(uVar11,*(undefined8 *)(param_1 + 0x40),
                             *(undefined8 *)(*(long *)(param_1 + 0x88) + uVar15 * 8),0);
                uVar12 = *(ulong *)(param_1 + 0x130);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar12);
          }
        }
      }
      uVar12 = *(ulong *)(param_1 + 0x1f8);
      if (uVar12 != 0) {
        if ((*(long *)(param_1 + 400) == 0) || ((**(byte **)(param_1 + 0x188) & 1) == 0)) {
          if (((*PTR_DAT_047d88d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d88d0);
          }
          uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
          *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
          FUN_010fbea8(uVar11,*(undefined8 *)(param_1 + 0x40),**(undefined8 **)(param_1 + 0x150),0);
          uVar12 = *(ulong *)(param_1 + 0x1f8);
        }
        if (1 < uVar12) {
          if ((*(ulong *)(param_1 + 400) < 2) || ((**(byte **)(param_1 + 0x188) >> 1 & 1) == 0)) {
            if (((*PTR_DAT_047d88d0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d88d0);
            }
            uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
            *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
            FUN_010fbea8(uVar11,*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(long *)(param_1 + 0x150) + 8),0);
            uVar12 = *(ulong *)(param_1 + 0x1f8);
          }
          puVar8 = PTR_DAT_047d88e0;
          puVar7 = PTR_DAT_047d88d8;
          puVar6 = PTR_DAT_047d88d0;
          if (2 < uVar12) {
            uVar15 = 2;
            do {
              if ((*(ulong *)(param_1 + 400) <= uVar15) ||
                 ((*(ulong *)(*(long *)(param_1 + 0x188) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar15 & 0x3f) & 1) == 0)) {
                if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047dbdd8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar6);
                }
                uVar11 = *(undefined8 *)puVar7;
                *(undefined8 *)puVar8 = uVar11;
                FUN_010fbea8(uVar11,*(undefined8 *)(param_1 + 0x40),
                             *(undefined8 *)(*(long *)(param_1 + 0x150) + uVar15 * 8),0);
                uVar12 = *(ulong *)(param_1 + 0x1f8);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar12);
          }
        }
      }
      uVar12 = *(ulong *)(param_1 + 0x390);
      if (uVar12 != 0) {
        if ((*(long *)(param_1 + 0x328) == 0) || ((**(byte **)(param_1 + 800) & 1) == 0)) {
          if (((*PTR_DAT_047d88d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d88d0);
          }
          uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
          *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
          FUN_010fc3b8(uVar11,*(undefined8 *)(param_1 + 0x40),**(undefined8 **)(param_1 + 0x2e8),0);
          uVar12 = *(ulong *)(param_1 + 0x390);
        }
        if (1 < uVar12) {
          if ((*(ulong *)(param_1 + 0x328) < 2) || ((**(byte **)(param_1 + 800) >> 1 & 1) == 0)) {
            if (((*PTR_DAT_047d88d0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d88d0);
            }
            uVar11 = *(undefined8 *)PTR_DAT_047d88d8;
            *(undefined8 *)PTR_DAT_047d88e0 = uVar11;
            FUN_010fc3b8(uVar11,*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(long *)(param_1 + 0x2e8) + 8),0);
            uVar12 = *(ulong *)(param_1 + 0x390);
          }
          puVar8 = PTR_DAT_047d88e0;
          puVar7 = PTR_DAT_047d88d8;
          puVar6 = PTR_DAT_047d88d0;
          if (2 < uVar12) {
            uVar15 = 2;
            do {
              if ((*(ulong *)(param_1 + 0x328) <= uVar15) ||
                 ((*(ulong *)(*(long *)(param_1 + 800) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar15 & 0x3f) & 1) == 0)) {
                if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047dbdd8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar6);
                }
                uVar11 = *(undefined8 *)puVar7;
                *(undefined8 *)puVar8 = uVar11;
                FUN_010fc3b8(uVar11,*(undefined8 *)(param_1 + 0x40),
                             *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar15 * 8),0);
                uVar12 = *(ulong *)(param_1 + 0x390);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar12);
          }
        }
      }
    }
    if (!bVar5) {
      *plVar17 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
    }
    if (!bVar4) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
    }
    if (!bVar3) {
      *plVar16 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
    }
    if (bVar2) {
      return;
    }
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    return;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar10;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_010f9c5c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d8));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d8));
        while (*plVar17 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar10;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_010f9c5c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar10;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_010f9c5c:
  bVar5 = false;
  goto LAB_010f9c60;
code_r0x010f9bc4:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar2) {
    *plVar14 = lVar10;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_010f9bcc;
  goto LAB_010f9bbc;
code_r0x010f9bf4:
  cVar1 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar3) {
    *plVar16 = lVar10;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_010f9bfc;
  goto LAB_010f9bec;
code_r0x010f9c24:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar4) {
    *plVar18 = lVar10;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_010f9c2c;
  goto LAB_010f9c1c;
}


