/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e139b8; name: FUN_01e139b8
 */


void FUN_01e139b8(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  char *pcVar16;
  long *plVar17;
  long *plVar18;
  short sVar19;
  long *plVar20;
  ulong local_e8;
  long *local_e0;
  undefined1 local_d4 [4];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long *local_b0;
  undefined1 *puStack_a8;
  ulong *local_a0;
  
  if ((*(int *)(param_1 + 0x390) == 0) && (iVar10 = *(int *)(param_1 + 0x294), iVar10 != -1)) {
    plVar11 = (long *)FUN_014be030(param_1);
    lVar13 = *plVar11;
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar19 = *(short *)(lVar13 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e13a4c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e13a4c:
          bVar5 = false;
        }
        if (bVar5) {
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 == 0) {
            return;
          }
          plVar20 = (long *)(lVar13 + -0x28);
          plVar11 = (long *)FUN_014be030(param_1);
          lVar14 = *plVar11;
          if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) goto switchD_01e13b98_default;
          psVar1 = (short *)(lVar14 + 0x1a);
          sVar19 = *(short *)(lVar14 + 0x1a);
          goto LAB_01e13af0;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
code_r0x01e13b1c:
  sVar19 = sVar3;
  if (sVar3 == 0) goto switchD_01e13b98_default;
  goto LAB_01e13af0;
code_r0x01e14358:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar5) {
    *plVar18 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e14360;
  goto LAB_01e14350;
code_r0x01e14514:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e1451c;
  goto LAB_01e1450c;
code_r0x01e13c2c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar5) {
    *plVar18 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e13c34;
  goto LAB_01e13c24;
code_r0x01e13f40:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e13f48;
  goto LAB_01e13f38;
code_r0x01e13d4c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar5) {
    *plVar18 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e13d54;
  goto LAB_01e13d44;
code_r0x01e14170:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar14;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e14178;
  goto LAB_01e14168;
LAB_01e13af0:
  sVar3 = *psVar1;
  if (sVar3 == sVar19) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar19 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01e13b14;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01e13b14:
    bVar5 = false;
  }
  if (!bVar5) goto code_r0x01e13b1c;
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) goto switchD_01e13b98_default;
  plVar11 = (long *)(lVar14 + -0x28);
  iVar8 = FUN_01e1497c(plVar11,iVar10);
  lVar14 = *(long *)(lVar14 + 8);
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar19 == 0) goto LAB_01e13aa0;
  if (iVar8 == 0) goto switchD_01e13b98_default;
  uVar9 = FUN_01e1497c(plVar20,iVar10);
  switch(uVar9) {
  case 1:
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,1);
    FUN_017b5c00(param_1,&local_d0);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar6 = PTR_DAT_047d3e30;
    *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)PTR_DAT_047d3e30;
    *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(puVar6 + 8);
    plVar11 = *(long **)(puVar6 + 0x18);
    *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(puVar6 + 0x10);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar12 = *(long **)(param_1 + 0x2b0);
    *(long **)(param_1 + 0x2b0) = plVar11;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    goto switchD_01e13b98_default;
  case 2:
    FUN_00d64f48(&local_e0,param_1);
    plVar11 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar12 = local_e0 + 0x10;
      plVar18 = local_e0 + 0x60;
      lVar14 = nn::os::GetCurrentThread();
LAB_01e13d44:
      if (*plVar18 == 0) goto code_r0x01e13d4c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x61));
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x61));
            while (*plVar18 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *plVar18 = lVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01e13d54;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01e13d54:
      plVar18 = (long *)plVar11[0x10];
      plVar2 = (long *)plVar11[0x11];
      plVar17 = plVar18;
      if ((plVar18 != plVar2) && (*plVar18 != -0x3f2e63c9690744f1)) {
        do {
          plVar17 = plVar17 + 0xb;
          if (plVar2 == plVar17) {
            plVar17 = plVar2;
            goto LAB_01e13d98;
          }
        } while (*plVar17 != -0x3f2e63c9690744f1);
      }
LAB_01e13d98:
      if (plVar2 == plVar17) {
        plVar11[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x61));
        local_e8 = 0;
      }
      else {
        plVar11[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x61));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar17 - (long)plVar18) >> 3) * -0x45d1745d)
                   << 0x20 | 1;
        local_d4 = (undefined1  [4])0x0;
        if (plVar11[0x37] == 0) {
          local_b0 = (long *)local_d4;
          local_d0 = &LAB_02e657b0;
          local_c8 = FUN_02e657f0;
          local_c0 = &LAB_02e657f4;
          puStack_b8 = &LAB_02e65800;
        }
        else {
          puStack_a8 = local_d4;
          local_b0 = plVar11;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e901c;
          local_c8 = FUN_02e65784;
          local_c0 = &LAB_02e65788;
          puStack_b8 = &LAB_02e6579c;
        }
        FUN_00c837c0(plVar11,plVar12,&local_e8,&local_d0);
        pcVar7 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar7)(&local_b0);
        }
      }
      lVar14 = plVar11[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar19 == 0) goto LAB_01e13aa0;
    }
    FUN_00d64f48(&local_e0,param_1);
    if (local_e0 != (long *)0x0) {
      plVar11 = local_e0 + 0x60;
      lVar14 = nn::os::GetCurrentThread();
LAB_01e14168:
      if (*plVar11 == 0) goto code_r0x01e14170;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0x61));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0x61));
            while (*plVar11 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01e14178;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01e14178:
      plVar11 = (long *)local_e0[0x25];
      plVar12 = (long *)local_e0[0x26];
      plVar18 = plVar11;
      if ((plVar11 != plVar12) && (*plVar11 != -0x298fabf040b8c71a)) {
        do {
          plVar18 = plVar18 + 0xb;
          if (plVar12 == plVar18) {
            plVar18 = plVar12;
            goto LAB_01e141bc;
          }
        } while (*plVar18 != -0x298fabf040b8c71a);
      }
LAB_01e141bc:
      if (plVar12 == plVar18) {
        local_e0[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0x61));
        local_e8 = 0;
      }
      else {
        local_e0[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0x61));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar18 - (long)plVar11) >> 3) * -0x45d1745d)
                   << 0x20 | 1;
        local_d4[0] = 1;
        if (local_e0[0x5e] == 0) {
          local_b0 = (long *)local_d4;
          local_d0 = &LAB_02e659e0;
          local_c8 = FUN_02e65a28;
          local_c0 = &LAB_02e65a2c;
          puStack_b8 = &LAB_02e65a38;
        }
        else {
          puStack_a8 = local_d4;
          local_b0 = local_e0;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e9c14;
          local_c8 = FUN_02e659b4;
          local_c0 = &LAB_02e659b8;
          puStack_b8 = &LAB_02e659cc;
        }
        FUN_00c837c0(local_e0,local_e0 + 0x25,&local_e8,&local_d0);
        pcVar7 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar7)(&local_b0);
        }
      }
      lVar14 = local_e0[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_e0 + 0x50))(local_e0);
      }
      else if (sVar19 == 0) goto LAB_01e13aa0;
    }
    FUN_017ab97c(param_1,0);
    uVar15 = 0xe8173f5953307b94;
    pcVar16 = "loc_poke_searchmove_target01";
    break;
  case 3:
    FUN_00d64f48(&local_e0,param_1);
    plVar11 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar12 = local_e0 + 0x10;
      plVar18 = local_e0 + 0x60;
      lVar14 = nn::os::GetCurrentThread();
LAB_01e13c24:
      if (*plVar18 == 0) goto code_r0x01e13c2c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x61));
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x61));
            while (*plVar18 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *plVar18 = lVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01e13c34;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01e13c34:
      plVar18 = (long *)plVar11[0x10];
      plVar2 = (long *)plVar11[0x11];
      plVar17 = plVar18;
      if ((plVar18 != plVar2) && (*plVar18 != -0x3f2e63c9690744f1)) {
        do {
          plVar17 = plVar17 + 0xb;
          if (plVar2 == plVar17) {
            plVar17 = plVar2;
            goto LAB_01e13c78;
          }
        } while (*plVar17 != -0x3f2e63c9690744f1);
      }
LAB_01e13c78:
      if (plVar2 == plVar17) {
        plVar11[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x61));
        local_e8 = 0;
      }
      else {
        plVar11[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x61));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar17 - (long)plVar18) >> 3) * -0x45d1745d)
                   << 0x20 | 1;
        local_d4 = (undefined1  [4])0x0;
        if (plVar11[0x37] == 0) {
          local_b0 = (long *)local_d4;
          local_d0 = &LAB_02e657b0;
          local_c8 = FUN_02e657f0;
          local_c0 = &LAB_02e657f4;
          puStack_b8 = &LAB_02e65800;
        }
        else {
          puStack_a8 = local_d4;
          local_b0 = plVar11;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e901c;
          local_c8 = FUN_02e65784;
          local_c0 = &LAB_02e65788;
          puStack_b8 = &LAB_02e6579c;
        }
        FUN_00c837c0(plVar11,plVar12,&local_e8,&local_d0);
        pcVar7 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar7)(&local_b0);
        }
      }
      lVar14 = plVar11[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar19 == 0) goto LAB_01e13aa0;
    }
    FUN_00d64f48(&local_e0,param_1);
    if (local_e0 != (long *)0x0) {
      plVar11 = local_e0 + 0x60;
      lVar14 = nn::os::GetCurrentThread();
LAB_01e13f38:
      if (*plVar11 == 0) goto code_r0x01e13f40;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0x61));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0x61));
            while (*plVar11 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01e13f48;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01e13f48:
      plVar11 = (long *)local_e0[0x25];
      plVar12 = (long *)local_e0[0x26];
      plVar18 = plVar11;
      if ((plVar11 != plVar12) && (*plVar11 != -0x298fabf040b8c71a)) {
        do {
          plVar18 = plVar18 + 0xb;
          if (plVar12 == plVar18) {
            plVar18 = plVar12;
            goto LAB_01e13f8c;
          }
        } while (*plVar18 != -0x298fabf040b8c71a);
      }
LAB_01e13f8c:
      if (plVar12 == plVar18) {
        local_e0[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0x61));
        local_e8 = 0;
      }
      else {
        local_e0[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0x61));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar18 - (long)plVar11) >> 3) * -0x45d1745d)
                   << 0x20 | 1;
        local_d4[0] = 1;
        if (local_e0[0x5e] == 0) {
          local_b0 = (long *)local_d4;
          local_d0 = &LAB_02e659e0;
          local_c8 = FUN_02e65a28;
          local_c0 = &LAB_02e65a2c;
          puStack_b8 = &LAB_02e65a38;
        }
        else {
          puStack_a8 = local_d4;
          local_b0 = local_e0;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e9c14;
          local_c8 = FUN_02e659b4;
          local_c0 = &LAB_02e659b8;
          puStack_b8 = &LAB_02e659cc;
        }
        FUN_00c837c0(local_e0,local_e0 + 0x25,&local_e8,&local_d0);
        pcVar7 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar7)(&local_b0);
        }
      }
      lVar14 = local_e0[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_e0 + 0x50))(local_e0);
      }
      else if (sVar19 == 0) goto LAB_01e13aa0;
    }
    FUN_017ab97c(param_1,1);
    uVar15 = 0xe8174259533080ad;
    pcVar16 = "loc_poke_searchmove_target02";
    break;
  case 4:
    FUN_00d64f48(&local_e0,param_1);
    plVar11 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar12 = local_e0 + 0x10;
      plVar18 = local_e0 + 0x60;
      lVar14 = nn::os::GetCurrentThread();
LAB_01e14350:
      if (*plVar18 == 0) goto code_r0x01e14358;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x61));
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x61));
            while (*plVar18 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *plVar18 = lVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01e14360;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01e14360:
      plVar18 = (long *)plVar11[0x10];
      plVar2 = (long *)plVar11[0x11];
      plVar17 = plVar18;
      if ((plVar18 != plVar2) && (*plVar18 != -0x3f2e63c9690744f1)) {
        do {
          plVar17 = plVar17 + 0xb;
          if (plVar2 == plVar17) {
            plVar17 = plVar2;
            goto LAB_01e143a4;
          }
        } while (*plVar17 != -0x3f2e63c9690744f1);
      }
LAB_01e143a4:
      if (plVar2 == plVar17) {
        plVar11[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x61));
        local_e8 = 0;
      }
      else {
        plVar11[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x61));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar17 - (long)plVar18) >> 3) * -0x45d1745d)
                   << 0x20 | 1;
        local_d4 = (undefined1  [4])0x0;
        if (plVar11[0x37] == 0) {
          local_b0 = (long *)local_d4;
          local_d0 = &LAB_02e657b0;
          local_c8 = FUN_02e657f0;
          local_c0 = &LAB_02e657f4;
          puStack_b8 = &LAB_02e65800;
        }
        else {
          puStack_a8 = local_d4;
          local_b0 = plVar11;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e901c;
          local_c8 = FUN_02e65784;
          local_c0 = &LAB_02e65788;
          puStack_b8 = &LAB_02e6579c;
        }
        FUN_00c837c0(plVar11,plVar12,&local_e8,&local_d0);
        pcVar7 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar7)(&local_b0);
        }
      }
      lVar14 = plVar11[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar19 == 0) goto LAB_01e13aa0;
    }
    FUN_00d64f48(&local_e0,param_1);
    if (local_e0 != (long *)0x0) {
      plVar11 = local_e0 + 0x60;
      lVar14 = nn::os::GetCurrentThread();
LAB_01e1450c:
      if (*plVar11 == 0) goto code_r0x01e14514;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0x61));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0x61));
            while (*plVar11 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01e1451c;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01e1451c:
      plVar11 = (long *)local_e0[0x25];
      plVar12 = (long *)local_e0[0x26];
      plVar18 = plVar11;
      if ((plVar11 != plVar12) && (*plVar11 != -0x298fabf040b8c71a)) {
        do {
          plVar18 = plVar18 + 0xb;
          if (plVar12 == plVar18) {
            plVar18 = plVar12;
            goto LAB_01e14560;
          }
        } while (*plVar18 != -0x298fabf040b8c71a);
      }
LAB_01e14560:
      if (plVar12 == plVar18) {
        local_e0[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0x61));
        local_e8 = 0;
      }
      else {
        local_e0[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0x61));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar18 - (long)plVar11) >> 3) * -0x45d1745d)
                   << 0x20 | 1;
        local_d4[0] = 1;
        if (local_e0[0x5e] == 0) {
          local_b0 = (long *)local_d4;
          local_d0 = &LAB_02e659e0;
          local_c8 = FUN_02e65a28;
          local_c0 = &LAB_02e65a2c;
          puStack_b8 = &LAB_02e65a38;
        }
        else {
          puStack_a8 = local_d4;
          local_b0 = local_e0;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e9c14;
          local_c8 = FUN_02e659b4;
          local_c0 = &LAB_02e659b8;
          puStack_b8 = &LAB_02e659cc;
        }
        FUN_00c837c0(local_e0,local_e0 + 0x25,&local_e8,&local_d0);
        pcVar7 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar7)(&local_b0);
        }
      }
      lVar14 = local_e0[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_e0 + 0x50))(local_e0);
      }
      else if (sVar19 == 0) goto LAB_01e13aa0;
    }
    FUN_017ab97c(param_1,2);
    uVar15 = 0xe817415953307efa;
    pcVar16 = "loc_poke_searchmove_target03";
    break;
  default:
    goto switchD_01e13b98_default;
  }
  plVar11 = *(long **)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x298) = uVar15;
  *(char **)(param_1 + 0x2a0) = pcVar16;
  *(undefined8 *)(param_1 + 0x2a8) = 0x1c;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
switchD_01e13b98_default:
  lVar13 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar20 + 0x50))(plVar20);
    return;
  }
  if (sVar19 != 0) {
    return;
  }
LAB_01e13aa0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


