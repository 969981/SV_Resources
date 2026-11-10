/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018c1378; name: FUN_018c1378
 */


void FUN_018c1378(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  local_98 = (long *)0x0;
  lVar11 = FUN_0145b26c(&local_68,*(undefined8 *)(param_1 + 8),&local_98);
  if (lVar11 != 0) {
    FUN_00f1b0c8(lVar11);
    lVar18 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar18 + 0x10) == 0) {
LAB_018c3dc4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_018c3de4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar17 = *(code **)(lVar11 + 0x388);
  if (pcVar17 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x390) = 0;
    *(undefined8 *)(lVar11 + 0x398) = 0;
    *(undefined8 *)(lVar11 + 0x380) = 0;
    *(undefined8 *)(lVar11 + 0x388) = 0;
    (*pcVar17)(lVar11 + 0x3a0);
  }
  *(code **)(lVar11 + 0x380) = FUN_01f9bb5c;
  *(undefined1 **)(lVar11 + 0x388) = &LAB_02a29998;
  *(undefined1 **)(lVar11 + 0x390) = &LAB_02a2999c;
  *(long *)(lVar11 + 0x3a0) = param_1;
  *(undefined1 **)(lVar11 + 0x398) = &LAB_02a299a8;
  if (((*PTR_DAT_047d6c20 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_98);
  plVar19 = local_98;
  plVar12 = (long *)(**(code **)local_98[5])(local_98 + 5);
  if ((*PTR_DAT_047d9100 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_047d9100);
    puVar8 = PTR_DAT_047d3ab0;
    if (iVar10 != 0) {
      if ((*PTR_DAT_047d3aa8 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_047d3aa8);
        puVar6 = PTR_DAT_047d39b8;
        if (iVar10 != 0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar7 = PTR_DAT_047d39c8;
            if (iVar10 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
                *(undefined8 *)puVar7 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar6 = puVar7;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
      }
      *(undefined **)PTR_DAT_047d9108 = puVar8;
      __cxa_guard_release(PTR_DAT_047d9100);
    }
  }
  for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    if (plVar12 == (long *)PTR_DAT_047d9108) goto LAB_018c14c0;
  }
  plVar19 = (long *)0x0;
LAB_018c14c0:
  if (local_98 != (long *)0x0) {
    lVar18 = local_98[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_98 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_018c2da0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar12 = (long *)(lVar11 + 0x1d0);
  lVar18 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_018c1508;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1d8));
        while (*plVar12 == 0) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar9) {
            *plVar12 = lVar18;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_018c1508;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_018c1508:
  if (((*PTR_DAT_047d89c8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar18 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar18;
  FUN_00e220f4(lVar11,0,*(undefined8 *)(lVar18 + 0x38));
  FUN_00e220f4(lVar11,0,plVar19);
  plVar12 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar12 != (long *)0x0) {
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  *(long *)(param_1 + 0x30) = lVar11;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0x98);
  }
  *(undefined8 *)(param_1 + 0xa0) = local_88;
  *(undefined8 *)(param_1 + 0xa8) = local_80;
  *(long **)(param_1 + 0x98) = local_90;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0xb0);
  *(long **)(param_1 + 0xb0) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0xb8);
  }
  *(undefined8 *)(param_1 + 0xc0) = local_88;
  *(undefined8 *)(param_1 + 200) = local_80;
  *(long **)(param_1 + 0xb8) = local_90;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0xd0);
  *(long **)(param_1 + 0xd0) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0xd8);
  }
  *(undefined8 *)(param_1 + 0xe0) = local_88;
  *(undefined8 *)(param_1 + 0xe8) = local_80;
  *(long **)(param_1 + 0xd8) = local_90;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0xf0);
  *(long **)(param_1 + 0xf0) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0xf8);
  }
  *(undefined8 *)(param_1 + 0x100) = local_88;
  *(undefined8 *)(param_1 + 0x108) = local_80;
  *(long **)(param_1 + 0xf8) = local_90;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x110);
  *(long **)(param_1 + 0x110) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0x118);
  }
  *(undefined8 *)(param_1 + 0x120) = local_88;
  *(undefined8 *)(param_1 + 0x128) = local_80;
  *(long **)(param_1 + 0x118) = local_90;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x130);
  *(long **)(param_1 + 0x130) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0x138);
  }
  *(undefined8 *)(param_1 + 0x140) = local_88;
  *(undefined8 *)(param_1 + 0x148) = local_80;
  *(long **)(param_1 + 0x138) = local_90;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x150);
  *(long **)(param_1 + 0x150) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0x158);
  }
  *(undefined8 *)(param_1 + 0x160) = local_88;
  *(undefined8 *)(param_1 + 0x168) = local_80;
  *(long **)(param_1 + 0x158) = local_90;
  FUN_018c4010(&local_98,*(undefined8 *)(param_1 + 8));
  plVar12 = local_98;
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x170);
  *(long **)(param_1 + 0x170) = plVar12;
  if (lVar18 != 0) {
    FUN_01f99744(param_1 + 0x178);
  }
  *(undefined8 *)(param_1 + 0x180) = local_88;
  *(undefined8 *)(param_1 + 0x188) = local_80;
  *(long **)(param_1 + 0x178) = local_90;
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x90);
  local_68 = (long *)0x3c209b5;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x90);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c0b48f;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x90);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c0b4d0;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0xb0);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3bfd466;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0xb0);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3bfd4a9;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0xd0);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c2eb86;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0xd0);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c77ca1;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0xf0);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c2ebc4;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0xf0);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c6a9ff;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x110);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c35668;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x110);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c3c3b7;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x130);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3be90cc;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x130);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c12436;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x150);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c99319;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x150);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c0b514;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x170);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c04303;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x170);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  plVar12 = *(long **)(param_1 + 8);
  pvVar14 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0xd0,8);
  puVar8 = PTR_DAT_047d8e88;
  if (pvVar14 == (void *)0x0) {
    local_88 = 0;
    local_80 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_018c3e0c;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    memset(pvVar14,0,0xd0);
    *(undefined **)((long)pvVar14 + 0x18) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x68) = 0;
    *(undefined8 *)((long)pvVar14 + 0x70) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
    *(undefined8 *)((long)pvVar14 + 0x78) = 0;
    *(undefined8 *)((long)pvVar14 + 0x80) = 0;
    *(undefined8 *)((long)pvVar14 + 0x88) = 0;
    *(undefined8 *)((long)pvVar14 + 0x90) = 0;
    *(undefined **)((long)pvVar14 + 0x58) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x60) = 0;
    *(undefined8 *)((long)pvVar14 + 0x98) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa0) = 0;
    FUN_018c4154((long)pvVar14 + 0xb0);
    local_88 = 0xd0;
    local_80 = 8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    local_90 = plVar12;
  }
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x198);
  *(void **)(param_1 + 0x198) = pvVar14;
  if (lVar18 != 0) {
    FUN_018c43d4(param_1 + 0x1a0);
  }
  *(undefined8 *)(param_1 + 0x1a8) = local_88;
  *(undefined8 *)(param_1 + 0x1b0) = local_80;
  *(long **)(param_1 + 0x1a0) = local_90;
  plVar12 = *(long **)(param_1 + 8);
  pvVar14 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0xd0,8);
  if (pvVar14 == (void *)0x0) {
    local_88 = 0;
    local_80 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_018c3e0c;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    memset(pvVar14,0,0xd0);
    *(undefined **)((long)pvVar14 + 0x18) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x68) = 0;
    *(undefined8 *)((long)pvVar14 + 0x70) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
    *(undefined8 *)((long)pvVar14 + 0x78) = 0;
    *(undefined8 *)((long)pvVar14 + 0x80) = 0;
    *(undefined8 *)((long)pvVar14 + 0x88) = 0;
    *(undefined8 *)((long)pvVar14 + 0x90) = 0;
    *(undefined **)((long)pvVar14 + 0x58) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x60) = 0;
    *(undefined8 *)((long)pvVar14 + 0x98) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa0) = 0;
    FUN_018c4154((long)pvVar14 + 0xb0);
    local_88 = 0xd0;
    local_80 = 8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    local_90 = plVar12;
  }
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x1b8);
  *(void **)(param_1 + 0x1b8) = pvVar14;
  if (lVar18 != 0) {
    FUN_018c43d4(param_1 + 0x1c0);
  }
  *(undefined8 *)(param_1 + 0x1c8) = local_88;
  *(undefined8 *)(param_1 + 0x1d0) = local_80;
  *(long **)(param_1 + 0x1c0) = local_90;
  plVar12 = *(long **)(param_1 + 8);
  pvVar14 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0xd0,8);
  if (pvVar14 == (void *)0x0) {
    local_88 = 0;
    local_80 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_018c3e0c;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    memset(pvVar14,0,0xd0);
    *(undefined **)((long)pvVar14 + 0x18) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x68) = 0;
    *(undefined8 *)((long)pvVar14 + 0x70) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
    *(undefined8 *)((long)pvVar14 + 0x78) = 0;
    *(undefined8 *)((long)pvVar14 + 0x80) = 0;
    *(undefined8 *)((long)pvVar14 + 0x88) = 0;
    *(undefined8 *)((long)pvVar14 + 0x90) = 0;
    *(undefined **)((long)pvVar14 + 0x58) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x60) = 0;
    *(undefined8 *)((long)pvVar14 + 0x98) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa0) = 0;
    FUN_018c4154((long)pvVar14 + 0xb0);
    local_88 = 0xd0;
    local_80 = 8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    local_90 = plVar12;
  }
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x1d8);
  *(void **)(param_1 + 0x1d8) = pvVar14;
  if (lVar18 != 0) {
    FUN_018c43d4(param_1 + 0x1e0);
  }
  *(undefined8 *)(param_1 + 0x1e8) = local_88;
  *(undefined8 *)(param_1 + 0x1f0) = local_80;
  *(long **)(param_1 + 0x1e0) = local_90;
  plVar12 = *(long **)(param_1 + 8);
  pvVar14 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0xd0,8);
  if (pvVar14 == (void *)0x0) {
    local_88 = 0;
    local_80 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_018c3e0c;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    memset(pvVar14,0,0xd0);
    *(undefined **)((long)pvVar14 + 0x18) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x68) = 0;
    *(undefined8 *)((long)pvVar14 + 0x70) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
    *(undefined8 *)((long)pvVar14 + 0x78) = 0;
    *(undefined8 *)((long)pvVar14 + 0x80) = 0;
    *(undefined8 *)((long)pvVar14 + 0x88) = 0;
    *(undefined8 *)((long)pvVar14 + 0x90) = 0;
    *(undefined **)((long)pvVar14 + 0x58) = puVar8 + 0x10;
    *(undefined8 *)((long)pvVar14 + 0x60) = 0;
    *(undefined8 *)((long)pvVar14 + 0x98) = 0;
    *(undefined8 *)((long)pvVar14 + 0xa0) = 0;
    FUN_018c4154((long)pvVar14 + 0xb0);
    local_88 = 0xd0;
    local_80 = 8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    local_90 = plVar12;
  }
  local_98 = (long *)0x0;
  lVar18 = *(long *)(param_1 + 0x1f8);
  *(void **)(param_1 + 0x1f8) = pvVar14;
  if (lVar18 != 0) {
    FUN_018c43d4(param_1 + 0x200);
  }
  *(undefined8 *)(param_1 + 0x208) = local_88;
  *(undefined8 *)(param_1 + 0x210) = local_80;
  *(long **)(param_1 + 0x200) = local_90;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x198);
  local_68 = (long *)0x3c50c25;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x198);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c27a0e;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x198);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c5d928;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x1b8);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3befcae;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x1b8);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c27a46;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x1d8);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c71547;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x1d8);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c925d1;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x1f8);
  uVar13 = FUN_00dc5c18(lVar18 + 0x58,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x78), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_68 = (long *)0x3c92610;
  FUN_00e52f24(&local_98,&local_68);
  lVar18 = *(long *)(param_1 + 0x1f8);
  uVar13 = FUN_00dc5c18(lVar18 + 0x18,1,&local_98,0,*(undefined8 *)(param_1 + 8));
  if (((uVar13 & 1) != 0) && (plVar12 = *(long **)(lVar18 + 0x38), plVar12 != (long *)0x0)) {
    lVar18 = plVar12[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_018c3dc4;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar24;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_018c3de4;
    lVar18 = plVar12[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_018c2da0;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  plVar12 = *(long **)(param_1 + 8);
  pvVar14 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,0xe0,8);
  if (pvVar14 == (void *)0x0) {
    plVar12 = (long *)0x0;
    uVar25 = 0;
    uVar24 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_018c3e0c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    memset(pvVar14,0,0xe0);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    lVar16 = tpidr_el0;
    if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
        (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
       (lVar15 = *(long *)(lVar16 + 0x30), lVar15 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar15 = DAT_04859430;
      *(long *)(lVar16 + 0x30) = DAT_04859430;
    }
    *(undefined4 *)((long)pvVar14 + 0x70) = 0;
    *(long *)((long)pvVar14 + 0x58) = lVar15;
    *(undefined8 *)((long)pvVar14 + 0x60) = 0x1fffffffffffffff;
    *(undefined8 *)((long)pvVar14 + 0x68) = 0;
    *(undefined8 *)((long)pvVar14 + 0x78) = 0;
    *(undefined8 *)((long)pvVar14 + 0x80) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
        (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
       (lVar15 = *(long *)(lVar16 + 0x30), lVar15 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar15 = DAT_04859430;
      *(long *)(lVar16 + 0x30) = DAT_04859430;
    }
    *(undefined4 *)((long)pvVar14 + 0xa0) = 0;
    *(long *)((long)pvVar14 + 0x88) = lVar15;
    *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
    *(undefined8 *)((long)pvVar14 + 0x90) = 0xfffffffffffffff;
    *(undefined8 *)((long)pvVar14 + 0x98) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
        (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
       (lVar15 = *(long *)(lVar16 + 0x30), lVar15 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar15 = DAT_04859430;
      *(long *)(lVar16 + 0x30) = DAT_04859430;
    }
    *(long *)((long)pvVar14 + 0xb0) = lVar15;
    *(undefined4 *)((long)pvVar14 + 200) = 0;
    uVar24 = 8;
    uVar25 = 0xe0;
    *(undefined8 *)((long)pvVar14 + 0xb8) = 0xfffffffffffffff;
    *(undefined8 *)((long)pvVar14 + 0xc0) = 0;
    *(undefined8 *)((long)pvVar14 + 0xd0) = 0;
    *(undefined4 *)((long)pvVar14 + 0xd8) = 0x3f800000;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  }
  lVar18 = *(long *)(param_1 + 0x220);
  *(void **)(param_1 + 0x220) = pvVar14;
  if (lVar18 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar16 = FUN_00c4e600();
    iVar4 = *(int *)(lVar16 + 0x12c8);
    iVar10 = iVar4 + 1;
    *(int *)(lVar16 + 0x12c8) = iVar10;
    if (*(int *)(lVar16 + 0x12cc) <= iVar4) {
      *(int *)(lVar16 + 0x12cc) = iVar10;
    }
    FUN_018c45a4(lVar18);
    plVar19 = *(long **)(param_1 + 0x228);
    uVar20 = *(undefined8 *)(param_1 + 0x230);
    uVar21 = *(undefined8 *)(param_1 + 0x238);
    uVar13 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar13 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar18,uVar20,uVar21);
    }
    else {
      FUN_00c48fe8(plVar19,lVar18,uVar20,uVar21);
    }
    lVar18 = FUN_00c4e600();
    iVar10 = *(int *)(lVar18 + 0x12c8) + -1;
    *(int *)(lVar18 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar19 = (long *)FUN_00c4e600();
      if (plVar19[600] != 0) {
        local_68 = plVar19 + plVar19[600] * 3;
        local_98 = plVar19;
        FUN_00c4ea30(&local_98,&local_68);
        plVar22 = (long *)*plVar19;
        plVar2 = plVar19;
        if (plVar19[600] != 0) {
          plVar2 = plVar19 + plVar19[600] * 3;
        }
        if (plVar2 == plVar19) {
          local_a0 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar19 + 0xd0))();
          if ((long *)*plVar19 != plVar22) {
            (**(code **)(*plVar22 + 0x100))(plVar22,plVar19,plVar19);
            plVar22 = (long *)*plVar19;
          }
          plVar23 = plVar19 + 3;
          if (plVar2 == plVar23) {
            local_a0 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar23 + 0xd0))();
            bVar9 = (long *)*plVar23 != plVar22;
            if (bVar9) {
              (**(code **)(*plVar22 + 0x100))(plVar22,plVar19,plVar19 + 3);
              plVar22 = (long *)plVar19[3];
            }
            local_a0 = (ulong)bVar9;
            plVar23 = plVar19 + 6;
            if (plVar2 == plVar23) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar23 + 0xd0))();
              if ((long *)*plVar23 != plVar22) {
                (**(code **)(*plVar22 + 0x100))(plVar22,plVar19 + local_a0 * 3,plVar19 + 6);
                plVar22 = (long *)plVar19[6];
                local_a0 = 2;
              }
              plVar23 = plVar19 + 9;
              if (plVar2 == plVar23) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar23 + 0xd0))();
                if ((long *)*plVar23 != plVar22) {
                  (**(code **)(*plVar22 + 0x100))(plVar22,plVar19 + local_a0 * 3,plVar19 + 9);
                  plVar22 = (long *)plVar19[9];
                  local_a0 = 3;
                }
                plVar23 = plVar19 + 0xc;
                if (plVar2 == plVar23) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar23 + 0xd0))();
                  if ((long *)*plVar23 != plVar22) {
                    (**(code **)(*plVar22 + 0x100))(plVar22,plVar19 + local_a0 * 3,plVar19 + 0xc);
                    plVar22 = (long *)plVar19[0xc];
                    local_a0 = 4;
                  }
                  plVar23 = plVar19 + 0xf;
                  if (plVar2 == plVar23) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar23 + 0xd0))();
                    if ((long *)*plVar23 != plVar22) {
                      (**(code **)(*plVar22 + 0x100))(plVar22,plVar19 + local_a0 * 3,plVar19 + 0xf);
                      plVar22 = (long *)plVar19[0xf];
                      local_a0 = 5;
                    }
                    plVar23 = plVar19 + 0x12;
                    uVar13 = 6;
                    if (plVar2 != plVar23) {
                      do {
                        (**(code **)(*(long *)*plVar23 + 0xd0))();
                        if ((long *)*plVar23 != plVar22) {
                          (**(code **)(*plVar22 + 0x100))(plVar22,plVar19 + local_a0 * 3,plVar23);
                          plVar22 = (long *)*plVar23;
                          local_a0 = uVar13;
                        }
                        plVar23 = plVar23 + 3;
                        uVar13 = uVar13 + 1;
                      } while (plVar2 != plVar23);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar22 + 0x100))(plVar22,plVar19 + local_a0 * 3,plVar19 + uVar13 * 3);
        plVar19[600] = 0;
      }
      *(undefined4 *)(lVar18 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x228) = plVar12;
  *(undefined8 *)(param_1 + 0x230) = uVar25;
  *(undefined8 *)(param_1 + 0x238) = uVar24;
  FUN_00d1af18(param_1 + 0x78);
  *(undefined8 *)(lVar11 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1d8));
  return;
}


