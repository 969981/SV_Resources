/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01638590; name: FUN_01638590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01638590(long *param_1,char *param_2,long param_3,long *param_4)

{
  short *psVar1;
  MutexType *pMVar2;
  uint *puVar3;
  long *plVar4;
  short sVar5;
  uint *puVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  uint *puVar24;
  bool bVar25;
  long lVar26;
  bool bVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  uint *puVar33;
  char *pcVar34;
  undefined1 *puVar35;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  long *local_258;
  undefined8 local_250;
  undefined8 local_248;
  long *local_238;
  undefined4 local_230 [6];
  long *local_218;
  long local_210;
  long lStack_208;
  long local_200;
  long *local_1f8;
  undefined1 auStack_1f0 [8];
  undefined8 local_1e8;
  long *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  long *local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  long local_190;
  ulong uStack_188;
  undefined1 local_180;
  undefined7 uStack_17f;
  long *local_178;
  char *pcStack_170;
  long local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  char *local_150;
  long local_148;
  long *local_140;
  long local_138;
  ulong local_130;
  long *local_128;
  long *local_120;
  char *pcStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  uint *local_e0 [3];
  long *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  char *pcStack_80;
  long local_78;
  long *local_70;
  
  plVar31 = *(long **)(*param_4 + 0x40);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  lVar26 = _DAT_00000040;
  plVar32 = *(long **)(*param_4 + 0x40);
  if (plVar32 == (long *)0x0) {
    lVar28 = nn::os::GetCurrentThread();
    if (lVar28 == lVar26) {
      uVar17 = _DAT_00000240;
    }
    else {
      lVar26 = nn::os::GetCurrentThread();
      do {
        if (_DAT_00000040 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)&DAT_00000048);
            while (_DAT_00000040 == 0) {
              cVar8 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(0x40,0x10);
              if (bVar25) {
                cVar8 = ExclusiveMonitorsStatus();
                _DAT_00000040 = lVar26;
              }
              if (cVar8 == '\0') goto LAB_0163aa74;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(0x40,0x10);
        if (bVar25) {
          cVar8 = ExclusiveMonitorsStatus();
          _DAT_00000040 = lVar26;
        }
      } while (cVar8 != '\0');
LAB_0163aa74:
      uVar17 = _DAT_00000240;
      _DAT_00000040 = 0;
      nn::os::SignalLightEvent((LightEventType *)&DAT_00000048);
    }
    FUN_00f83b9c(&local_1d0,plVar31,uVar17);
  }
  else {
    lVar26 = plVar32[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
    plVar29 = plVar32 + 8;
    lVar28 = *plVar29;
    lVar26 = nn::os::GetCurrentThread();
    if (lVar26 == lVar28) {
      lVar26 = plVar32[0x48];
    }
    else {
      lVar26 = nn::os::GetCurrentThread();
      do {
        if (*plVar29 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar32 + 9));
            while (*plVar29 == 0) {
              cVar8 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar25) {
                *plVar29 = lVar26;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01638668;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar25) {
          *plVar29 = lVar26;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01638668:
      lVar26 = plVar32[0x48];
      plVar32[8] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar32 + 9));
    }
    FUN_00f83b9c(&local_1d0,plVar31,lVar26);
    lVar26 = plVar32[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*plVar32 + 0x50))(plVar32);
    }
    else if (sVar5 == 0) goto LAB_0163aaec;
  }
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*plVar31 + 0x50))(plVar31);
    }
    else if (sVar5 == 0) goto LAB_0163aaec;
  }
  plVar31 = *(long **)(*param_4 + 0x40);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  plVar29 = (long *)plVar31[0xb];
  plVar32 = (long *)PTR_DAT_047d8b70;
  if (plVar29 != (long *)0x0) {
    plVar32 = plVar29 + 6;
  }
  local_210 = *plVar32;
  plVar32 = (long *)PTR_PTR_047d4508;
  if (plVar29 != (long *)0x0) {
    plVar32 = plVar29 + 7;
  }
  lStack_208 = *plVar32;
  if (plVar29 == (long *)0x0) {
    local_200 = 0;
  }
  else {
    local_200 = plVar29[8];
  }
  local_1f8 = (long *)0x0;
  if (plVar29 == (long *)0x0) {
    local_1f8 = plVar29;
    FUN_00f86c70(auStack_1f0,&local_210);
  }
  else {
    (**(code **)(*plVar29 + 0x18))(plVar29);
    local_1f8 = plVar29;
    FUN_00f86c70(auStack_1f0,&local_210);
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
  lVar26 = plVar31[6];
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar8 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar25) {
      *psVar1 = sVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar26 + 0x10) = 0;
    (**(code **)(*plVar31 + 0x50))(plVar31);
  }
  else if (sVar5 == 0) goto LAB_0163aaec;
  plVar31 = *(long **)(*param_4 + 0x40);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  plVar29 = (long *)plVar31[0xb];
  plVar32 = (long *)PTR_DAT_047d8b70;
  if (plVar29 != (long *)0x0) {
    plVar32 = plVar29 + 6;
  }
  plVar32 = (long *)*plVar32;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (plVar29 != (long *)0x0) {
    plVar4 = plVar29 + 7;
  }
  pcVar34 = (char *)*plVar4;
  if (plVar29 == (long *)0x0) {
    lVar26 = 0;
  }
  else {
    lVar26 = plVar29[8];
    (**(code **)(*plVar29 + 0x18))(plVar29);
    (**(code **)(*plVar29 + 0x18))(plVar29);
  }
  local_1a8 = "EventSystem";
  local_1a0 = 0xb;
  local_1b0 = (long *)0x302ee6d5ddb8605e;
  local_88 = (undefined1 *)0x45e24506a4634ddf;
  pcStack_80 = "Event";
  local_78 = 5;
  local_158 = plVar32;
  local_150 = pcVar34;
  local_148 = lVar26;
  local_140 = plVar29;
  if (plVar29 == (long *)0x0) {
    local_a8 = (long *)0xb346610b5947045f;
    local_a0 = "CurrentStateLength";
    local_98 = 0x12;
    FUN_00f831b8(local_230,&local_1b0,&local_88,&local_158,&local_a8);
  }
  else {
    (**(code **)(*plVar29 + 0x18))(plVar29);
    local_a8 = (long *)0xb346610b5947045f;
    local_a0 = "CurrentStateLength";
    local_98 = 0x12;
    FUN_00f831b8(local_230,&local_1b0,&local_88,&local_158,&local_a8);
    (**(code **)(*plVar29 + 0x20))(plVar29);
    (**(code **)(*plVar29 + 0x20))(plVar29);
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
  lVar26 = plVar31[6];
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar8 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar25) {
      *psVar1 = sVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar26 + 0x10) = 0;
    (**(code **)(*plVar31 + 0x50))(plVar31);
  }
  else if (sVar5 == 0) goto LAB_0163aaec;
  plVar31 = *(long **)(*param_4 + 0x40);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  plVar29 = (long *)plVar31[0xb];
  plVar32 = (long *)PTR_DAT_047d8b70;
  if (plVar29 != (long *)0x0) {
    plVar32 = plVar29 + 6;
  }
  plVar32 = (long *)*plVar32;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (plVar29 != (long *)0x0) {
    plVar4 = plVar29 + 7;
  }
  pcVar34 = (char *)*plVar4;
  if (plVar29 == (long *)0x0) {
    lVar26 = 0;
  }
  else {
    lVar26 = plVar29[8];
    (**(code **)(*plVar29 + 0x18))(plVar29);
    (**(code **)(*plVar29 + 0x18))(plVar29);
  }
  local_1a0 = 0xb;
  local_1b0 = (long *)0x302ee6d5ddb8605e;
  local_1a8 = "EventSystem";
  local_78 = 5;
  local_88 = (undefined1 *)0x45e24506a4634ddf;
  pcStack_80 = "Event";
  local_158 = plVar32;
  local_150 = pcVar34;
  local_148 = lVar26;
  local_140 = plVar29;
  if (plVar29 == (long *)0x0) {
    local_a8 = (long *)0x6da65ee563ec9d0f;
    local_a0 = "CurrentState";
    local_98 = 0xc;
    FUN_00f831b8(&local_250,&local_1b0,&local_88,&local_158,&local_a8);
  }
  else {
    (**(code **)(*plVar29 + 0x18))(plVar29);
    local_a8 = (long *)0x6da65ee563ec9d0f;
    local_a0 = "CurrentState";
    local_98 = 0xc;
    FUN_00f831b8(&local_250,&local_1b0,&local_88,&local_158,&local_a8);
    (**(code **)(*plVar29 + 0x20))(plVar29);
    (**(code **)(*plVar29 + 0x20))(plVar29);
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
  lVar26 = plVar31[6];
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar8 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar25) {
      *psVar1 = sVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar26 + 0x10) = 0;
    (**(code **)(*plVar31 + 0x50))(plVar31);
  }
  else if (sVar5 == 0) goto LAB_0163aaec;
  plVar31 = *(long **)(*param_4 + 0x40);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  local_270 = local_1d0;
  uStack_268 = local_1c8;
  local_260 = local_1c0;
  local_258 = local_1b8;
  if (local_1b8 != (long *)0x0) {
    (**(code **)(*local_1b8 + 0x18))();
  }
  uVar15 = FUN_02dfa2d8(plVar31,&local_270);
  if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("evt->GetProgress()->ValidState(currentState)","InnerSaveEvent",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/pokemon_engine/programs/src/savedata/io/event_system.cpp"
               ,0xdf,"EventSystem: Save invalid State! EventName(%s) StateName(%s)",local_1e8,
               local_248);
  }
  if (local_258 != (long *)0x0) {
    (**(code **)(*local_258 + 0x20))();
  }
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*plVar31 + 0x50))(plVar31);
    }
    else if (sVar5 == 0) goto LAB_0163aaec;
  }
  local_88 = &DAT_e4d07a996e5ef5e8;
  pcStack_80 = "main";
  local_78 = 4;
  local_70 = (long *)0x0;
  lVar26 = FUN_00f844f4(param_3,&local_88);
  local_c0 = CONCAT44(local_c0._4_4_,local_230[0]);
  pMVar2 = (MutexType *)(lVar26 + 0x80);
  local_100 = local_1c0;
  nn::os::LockMutex(pMVar2);
  if ((*(byte *)(lVar26 + 0xa0) & 1) == 0) {
    nn::os::LockMutex(pMVar2);
    puVar6 = *(uint **)(lVar26 + 0x10);
    uVar15 = (long)puVar6 - (long)*(uint **)(lVar26 + 8);
    if (0 < (long)uVar15) {
      puVar22 = *(uint **)(lVar26 + 8);
      puVar24 = puVar6;
      do {
        puVar33 = puVar22 + (uVar15 / 0x60) * 0xc;
        if (*puVar33 == (uint)local_c0) goto LAB_01638c6c;
        puVar3 = puVar33 + 0xc;
        if ((uint)local_c0 <= *puVar33) {
          puVar3 = puVar22;
          puVar24 = puVar33;
        }
        uVar15 = (long)puVar24 - (long)puVar3;
        puVar22 = puVar3;
      } while (0 < (long)uVar15);
    }
    puVar33 = puVar6;
LAB_01638c6c:
    nn::os::UnlockMutex(pMVar2);
    if ((puVar33 == (uint *)0x0) || (puVar6 == puVar33)) {
      nn::os::LockMutex(pMVar2);
      plVar31 = *(long **)(lVar26 + 0x60);
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 0x38))(plVar31,&local_c0);
      }
      FUN_015d0cb8(local_e0,lVar26,&local_c0,9);
      puVar11 = PTR_DAT_047dcc70;
      if (local_e0[0] != (uint *)0x0) {
        lVar28 = *(long *)(local_e0[0] + 2);
        uVar15 = *(ulong *)(local_e0[0] + 6);
        local_158 = (long *)(PTR_DAT_047dcc68 + 0x10);
        uVar7 = *local_e0[0];
        plVar31 = (long *)(PTR_DAT_047dcc70 + 0x10);
        local_1a0 = (ulong)uVar7 << 0x20;
        local_1a8 = (char *)0x0;
        uVar21 = 0;
        local_1b0 = plVar31;
        if (uVar7 != 0) {
          uVar23 = (ulong)uVar7 - ((ulong)(uVar7 >> 1) & 0x5555555555555555);
          uVar7 = uVar7 ^ uVar7 << 2;
          uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
          uVar7 = uVar7 ^ uVar7 >> 0xf;
          uVar21 = uVar7 ^ uVar7 << 0xd;
          local_1a0 = (ulong)uVar21 << 0x20;
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar23 != 1) {
            uVar21 = uVar21 ^ uVar21 << 2;
            uVar21 = uVar21 ^ uVar21 >> 0xf;
            uVar21 = uVar21 ^ uVar21 << 0xd;
            local_1a0 = (ulong)uVar21 << 0x20;
            if (uVar23 != 2) {
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              local_1a0 = (ulong)uVar21 << 0x20;
              if (uVar23 != 3) {
                uVar21 = uVar21 ^ uVar21 << 2;
                uVar21 = uVar21 ^ uVar21 >> 0xf;
                uVar21 = uVar21 ^ uVar21 << 0xd;
                local_1a0 = (ulong)uVar21 << 0x20;
                if (uVar23 != 4) {
                  (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_1b0);
                  for (lVar10 = uVar23 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
                    (*(code *)local_1b0[2])(&local_1b0);
                  }
                  local_1a0._4_4_ = (uint)((ulong)local_1a0 >> 0x20);
                  uVar21 = local_1a0._4_4_;
                }
              }
            }
          }
        }
        puVar13 = PTR_DAT_047dcc80;
        puVar12 = PTR_DAT_047dcc78;
        local_1a0 = CONCAT44(local_1a0._4_4_,uVar21);
        local_140 = (long *)(PTR_DAT_047dcc78 + 0x10);
        local_128 = (long *)((ulong)local_128 & 0xffffffffffffff00);
        local_110 = local_1a0;
        uStack_108 = 0;
        local_150 = PTR_DAT_047dcc80 + 0x10;
        local_148 = 0;
        local_138 = lVar28;
        local_130 = uVar15;
        local_120 = plVar31;
        pcStack_118 = local_1a8;
        uVar15 = FUN_02af2338(&local_158,&local_100);
        puVar6 = local_e0[0];
        if ((uVar15 & 1) == 0) {
          (**(code **)(**(long **)(lVar26 + 0x40) + 0x18))
                    (*(long **)(lVar26 + 0x40),*(undefined8 *)(local_e0[0] + 2),
                     *(undefined8 *)(local_e0[0] + 4));
          lVar28 = *(long *)(lVar26 + 0x10);
          if (*(char *)(lVar28 + -0x10) != '\0') {
            *(undefined1 *)(lVar28 + -0x10) = 0;
          }
          *(long *)(lVar26 + 0x10) = lVar28 + -0x30;
        }
        else {
          plVar31 = (long *)(puVar11 + 0x10);
          lVar28 = *(long *)(local_e0[0] + 2);
          uVar15 = *(ulong *)(local_e0[0] + 6);
          local_1b0 = (long *)(PTR_DAT_047dcc88 + 0x10);
          local_98._4_4_ = *local_e0[0];
          local_a0 = (char *)0x0;
          local_a8 = plVar31;
          if (local_98._4_4_ == 0) {
            local_98._4_4_ = 0;
          }
          else {
            uVar23 = (ulong)local_98._4_4_ - ((ulong)(local_98._4_4_ >> 1) & 0x5555555555555555);
            local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2;
            uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
            local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf;
            local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd;
            uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (((uVar23 != 1) &&
                (local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2,
                local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf,
                local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd, uVar23 != 2)) &&
               (local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2,
               local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf,
               local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd, uVar23 != 3)) {
              local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2;
              local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf;
              local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd;
              local_98._0_4_ = 0;
              if (uVar23 != 4) {
                (**(code **)(puVar11 + 0x20))(&local_a8);
                for (lVar10 = uVar23 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
                  (*(code *)local_a8[2])(&local_a8);
                }
              }
            }
          }
          local_98 = CONCAT44(local_98._4_4_,local_98._4_4_);
          local_198 = (long *)(puVar12 + 0x10);
          local_1a0 = 0;
          local_180 = 0;
          local_168 = local_98;
          uStack_160 = 0;
          local_1a8 = puVar13 + 0x10;
          local_190 = lVar28;
          uStack_188 = uVar15;
          local_178 = plVar31;
          pcStack_170 = local_a0;
          uVar17 = FUN_015d1064(&local_1b0);
          if ((char)puVar6[8] == '\0') {
            *(undefined8 *)(puVar6 + 9) = uVar17;
            *(undefined1 *)(puVar6 + 8) = 1;
          }
          else {
            *(undefined8 *)(puVar6 + 9) = uVar17;
          }
          nn::os::LockMutex(pMVar2);
          FUN_015d1340(*(undefined8 *)(lVar26 + 8),*(undefined8 *)(lVar26 + 0x10),&local_1b0);
          nn::os::UnlockMutex(pMVar2);
        }
      }
    }
    else {
      uVar15 = FUN_02af21dc(lVar26,puVar33);
      if (((uVar15 & 1) == 0) && (plVar31 = *(long **)(lVar26 + 0x60), plVar31 != (long *)0x0)) {
        (**(code **)(*plVar31 + 0x58))(plVar31,&local_c0);
      }
      nn::os::LockMutex(pMVar2);
      plVar31 = *(long **)(lVar26 + 0x60);
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 0x30))(plVar31,puVar33);
      }
      if (*(ulong *)(puVar33 + 4) < 9) {
        plVar31 = *(long **)(lVar26 + 0x60);
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x18))(plVar31,puVar33);
        }
        pvVar16 = (void *)(**(code **)(**(long **)(lVar26 + 0x40) + 0x10))
                                    (*(long **)(lVar26 + 0x40),9);
        if (pvVar16 != (void *)0x0) {
          memcpy(pvVar16,*(void **)(puVar33 + 2),*(size_t *)(puVar33 + 6));
          (**(code **)(**(long **)(lVar26 + 0x40) + 0x18))
                    (*(long **)(lVar26 + 0x40),*(undefined8 *)(puVar33 + 2),
                     *(undefined8 *)(puVar33 + 4));
          *(void **)(puVar33 + 2) = pvVar16;
          puVar33[4] = 9;
          puVar33[5] = 0;
          goto LAB_01638ed8;
        }
      }
      else {
        uVar15 = *(ulong *)(puVar33 + 6);
        if ((*(ulong *)(puVar33 + 4) != 9) && (uVar15 != 9)) {
          plVar31 = *(long **)(lVar26 + 0x60);
          if (plVar31 != (long *)0x0) {
            (**(code **)(*plVar31 + 0x20))(plVar31,puVar33);
          }
LAB_01638ed8:
          uVar15 = 9;
          puVar33[6] = 9;
          puVar33[7] = 0;
        }
        lVar28 = *(long *)(puVar33 + 2);
        local_158 = (long *)(PTR_DAT_047dcc68 + 0x10);
        local_1a0._4_4_ = *puVar33;
        plVar31 = (long *)(PTR_DAT_047dcc70 + 0x10);
        local_1a8 = (char *)0x0;
        local_1a0._0_4_ = 0;
        local_1b0 = plVar31;
        if (local_1a0._4_4_ == 0) {
          local_1a0._4_4_ = 0;
        }
        else {
          uVar23 = (ulong)local_1a0._4_4_ - ((ulong)(local_1a0._4_4_ >> 1) & 0x5555555555555555);
          local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2;
          uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
          local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf;
          local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd;
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if ((((uVar23 != 1) &&
               (local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2,
               local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf,
               local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd, uVar23 != 2)) &&
              (local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2,
              local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf,
              local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd, uVar23 != 3)) &&
             (local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2,
             local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf,
             local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd, uVar23 != 4)) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_1b0);
            for (lVar10 = uVar23 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
              (*(code *)local_1b0[2])(&local_1b0);
            }
          }
        }
        local_1a0 = CONCAT44(local_1a0._4_4_,local_1a0._4_4_);
        local_140 = (long *)(PTR_DAT_047dcc78 + 0x10);
        local_128 = (long *)((ulong)local_128 & 0xffffffffffffff00);
        local_110 = local_1a0;
        uStack_108 = 0;
        local_150 = PTR_DAT_047dcc80 + 0x10;
        local_148 = 0;
        local_138 = lVar28;
        local_130 = uVar15;
        local_120 = plVar31;
        pcStack_118 = local_1a8;
        FUN_02af2338(&local_158,&local_100);
        uVar15 = FUN_015d0a70(lVar26,puVar33);
        if ((uVar15 & 1) == 0) goto LAB_01639848;
      }
    }
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    plVar31 = *(long **)(lVar26 + 0x60);
    if (plVar31 != (long *)0x0) {
      local_158 = (long *)CONCAT44((uint)local_c0,(undefined4)local_158);
      local_158 = (long *)CONCAT71(local_158._1_7_,1);
      (**(code **)(*plVar31 + 0x60))(plVar31,&local_158);
      if ((char)local_158 != '\0') {
        local_158 = (long *)((ulong)local_158 & 0xffffffffffffff00);
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = &DAT_e4d07a996e5ef5e8;
  pcStack_80 = "main";
  local_78 = 4;
  local_70 = (long *)0x0;
  lVar26 = FUN_00f844f4(param_3,&local_88);
  pMVar2 = (MutexType *)(lVar26 + 0x80);
  local_100 = CONCAT44(local_100._4_4_,(undefined4)local_250);
  nn::os::LockMutex(pMVar2);
  if ((*(byte *)(lVar26 + 0xa0) & 1) == 0) {
    nn::os::LockMutex(pMVar2);
    puVar6 = *(uint **)(lVar26 + 0x10);
    uVar15 = (long)puVar6 - (long)*(uint **)(lVar26 + 8);
    if (0 < (long)uVar15) {
      puVar22 = *(uint **)(lVar26 + 8);
      puVar24 = puVar6;
      do {
        puVar33 = puVar22 + (uVar15 / 0x60) * 0xc;
        if (*puVar33 == (uint)local_100) goto LAB_0163945c;
        puVar3 = puVar33 + 0xc;
        if ((uint)local_100 <= *puVar33) {
          puVar3 = puVar22;
          puVar24 = puVar33;
        }
        uVar15 = (long)puVar24 - (long)puVar3;
        puVar22 = puVar3;
      } while (0 < (long)uVar15);
    }
    puVar33 = puVar6;
LAB_0163945c:
    nn::os::UnlockMutex(pMVar2);
    if ((puVar33 == (uint *)0x0) || (puVar6 == puVar33)) {
      nn::os::LockMutex(pMVar2);
      plVar31 = *(long **)(lVar26 + 0x60);
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 0x38))(plVar31,&local_100);
      }
      FUN_015d0cb8(local_e0,lVar26,&local_100,(long)DAT_045a7a28 + 5);
      puVar11 = PTR_DAT_047dcc70;
      if (local_e0[0] != (uint *)0x0) {
        lVar28 = *(long *)(local_e0[0] + 2);
        uVar15 = *(ulong *)(local_e0[0] + 6);
        local_158 = (long *)(PTR_DAT_047dcc68 + 0x10);
        uVar7 = *local_e0[0];
        plVar31 = (long *)(PTR_DAT_047dcc70 + 0x10);
        local_1a0 = (ulong)uVar7 << 0x20;
        local_1a8 = (char *)0x0;
        uVar21 = 0;
        local_1b0 = plVar31;
        if (uVar7 != 0) {
          uVar23 = (ulong)uVar7 - ((ulong)(uVar7 >> 1) & 0x5555555555555555);
          uVar7 = uVar7 ^ uVar7 << 2;
          uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
          uVar7 = uVar7 ^ uVar7 >> 0xf;
          uVar21 = uVar7 ^ uVar7 << 0xd;
          local_1a0 = (ulong)uVar21 << 0x20;
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar23 != 1) {
            uVar21 = uVar21 ^ uVar21 << 2;
            uVar21 = uVar21 ^ uVar21 >> 0xf;
            uVar21 = uVar21 ^ uVar21 << 0xd;
            local_1a0 = (ulong)uVar21 << 0x20;
            if (uVar23 != 2) {
              uVar21 = uVar21 ^ uVar21 << 2;
              uVar21 = uVar21 ^ uVar21 >> 0xf;
              uVar21 = uVar21 ^ uVar21 << 0xd;
              local_1a0 = (ulong)uVar21 << 0x20;
              if (uVar23 != 3) {
                uVar21 = uVar21 ^ uVar21 << 2;
                uVar21 = uVar21 ^ uVar21 >> 0xf;
                uVar21 = uVar21 ^ uVar21 << 0xd;
                local_1a0 = (ulong)uVar21 << 0x20;
                if (uVar23 != 4) {
                  (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_1b0);
                  for (lVar10 = uVar23 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
                    (*(code *)local_1b0[2])(&local_1b0);
                  }
                  local_1a0._4_4_ = (uint)((ulong)local_1a0 >> 0x20);
                  uVar21 = local_1a0._4_4_;
                }
              }
            }
          }
        }
        puVar13 = PTR_DAT_047dcc80;
        puVar12 = PTR_DAT_047dcc78;
        local_1a0 = CONCAT44(local_1a0._4_4_,uVar21);
        local_140 = (long *)(PTR_DAT_047dcc78 + 0x10);
        local_128 = (long *)((ulong)local_128 & 0xffffffffffffff00);
        local_110 = local_1a0;
        uStack_108 = 0;
        local_150 = PTR_DAT_047dcc80 + 0x10;
        local_148 = 0;
        local_138 = lVar28;
        local_130 = uVar15;
        local_120 = plVar31;
        pcStack_118 = local_1a8;
        uVar15 = FUN_015d05bc(&local_158,local_1c8,(long)DAT_045a7a28);
        puVar6 = local_e0[0];
        if ((uVar15 & 1) == 0) {
          (**(code **)(**(long **)(lVar26 + 0x40) + 0x18))
                    (*(long **)(lVar26 + 0x40),*(undefined8 *)(local_e0[0] + 2),
                     *(undefined8 *)(local_e0[0] + 4));
          lVar28 = *(long *)(lVar26 + 0x10);
          if (*(char *)(lVar28 + -0x10) != '\0') {
            *(undefined1 *)(lVar28 + -0x10) = 0;
          }
          *(long *)(lVar26 + 0x10) = lVar28 + -0x30;
        }
        else {
          plVar31 = (long *)(puVar11 + 0x10);
          lVar28 = *(long *)(local_e0[0] + 2);
          uVar15 = *(ulong *)(local_e0[0] + 6);
          local_1b0 = (long *)(PTR_DAT_047dcc88 + 0x10);
          local_98._4_4_ = *local_e0[0];
          local_a0 = (char *)0x0;
          local_a8 = plVar31;
          if (local_98._4_4_ == 0) {
            local_98._4_4_ = 0;
          }
          else {
            uVar23 = (ulong)local_98._4_4_ - ((ulong)(local_98._4_4_ >> 1) & 0x5555555555555555);
            local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2;
            uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
            local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf;
            local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd;
            uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (((uVar23 != 1) &&
                (local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2,
                local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf,
                local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd, uVar23 != 2)) &&
               (local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2,
               local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf,
               local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd, uVar23 != 3)) {
              local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 2;
              local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ >> 0xf;
              local_98._4_4_ = local_98._4_4_ ^ local_98._4_4_ << 0xd;
              local_98._0_4_ = 0;
              if (uVar23 != 4) {
                (**(code **)(puVar11 + 0x20))(&local_a8);
                for (lVar10 = uVar23 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
                  (*(code *)local_a8[2])(&local_a8);
                }
              }
            }
          }
          local_98 = CONCAT44(local_98._4_4_,local_98._4_4_);
          local_198 = (long *)(puVar12 + 0x10);
          local_1a0 = 0;
          local_180 = 0;
          local_168 = local_98;
          uStack_160 = 0;
          local_1a8 = puVar13 + 0x10;
          local_190 = lVar28;
          uStack_188 = uVar15;
          local_178 = plVar31;
          pcStack_170 = local_a0;
          uVar17 = FUN_015d1064(&local_1b0);
          if ((char)puVar6[8] == '\0') {
            *(undefined8 *)(puVar6 + 9) = uVar17;
            *(undefined1 *)(puVar6 + 8) = 1;
          }
          else {
            *(undefined8 *)(puVar6 + 9) = uVar17;
          }
          nn::os::LockMutex(pMVar2);
          FUN_015d1340(*(undefined8 *)(lVar26 + 8),*(undefined8 *)(lVar26 + 0x10),&local_1b0);
          nn::os::UnlockMutex(pMVar2);
        }
      }
    }
    else {
      uVar15 = FUN_015d0794(lVar26,puVar33);
      if (((uVar15 & 1) == 0) && (plVar31 = *(long **)(lVar26 + 0x60), plVar31 != (long *)0x0)) {
        (**(code **)(*plVar31 + 0x58))(plVar31,&local_100);
      }
      nn::os::LockMutex(pMVar2);
      plVar31 = *(long **)(lVar26 + 0x60);
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 0x30))(plVar31,puVar33);
      }
      uVar15 = (long)DAT_045a7a28 + 5;
      if (*(ulong *)(puVar33 + 4) < uVar15) {
        plVar31 = *(long **)(lVar26 + 0x60);
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x18))(plVar31,puVar33);
        }
        pvVar16 = (void *)(**(code **)(**(long **)(lVar26 + 0x40) + 0x10))
                                    (*(long **)(lVar26 + 0x40),uVar15);
        if (pvVar16 == (void *)0x0) goto LAB_01639a5c;
        memcpy(pvVar16,*(void **)(puVar33 + 2),*(size_t *)(puVar33 + 6));
        (**(code **)(**(long **)(lVar26 + 0x40) + 0x18))
                  (*(long **)(lVar26 + 0x40),*(undefined8 *)(puVar33 + 2),
                   *(undefined8 *)(puVar33 + 4));
        *(void **)(puVar33 + 2) = pvVar16;
        *(ulong *)(puVar33 + 4) = uVar15;
        *(ulong *)(puVar33 + 6) = uVar15;
        uVar23 = uVar15;
      }
      else {
        uVar23 = *(ulong *)(puVar33 + 6);
        if (*(ulong *)(puVar33 + 4) != uVar15) {
          if (*(ulong *)(puVar33 + 6) != uVar15) {
            plVar31 = *(long **)(lVar26 + 0x60);
            if (plVar31 != (long *)0x0) {
              (**(code **)(*plVar31 + 0x20))(plVar31,puVar33);
            }
            *(ulong *)(puVar33 + 6) = uVar15;
          }
          uVar23 = uVar15;
        }
      }
      lVar28 = *(long *)(puVar33 + 2);
      local_158 = (long *)(PTR_DAT_047dcc68 + 0x10);
      local_1a0._4_4_ = *puVar33;
      plVar31 = (long *)(PTR_DAT_047dcc70 + 0x10);
      local_1a8 = (char *)0x0;
      local_1a0._0_4_ = 0;
      local_1b0 = plVar31;
      if (local_1a0._4_4_ == 0) {
        local_1a0._4_4_ = 0;
      }
      else {
        uVar15 = (ulong)local_1a0._4_4_ - ((ulong)(local_1a0._4_4_ >> 1) & 0x5555555555555555);
        local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2;
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf;
        local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd;
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((((uVar15 != 1) &&
             (local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2,
             local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf,
             local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd, uVar15 != 2)) &&
            (local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2,
            local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf,
            local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd, uVar15 != 3)) &&
           (local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 2,
           local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ >> 0xf,
           local_1a0._4_4_ = local_1a0._4_4_ ^ local_1a0._4_4_ << 0xd, uVar15 != 4)) {
          (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_1b0);
          for (lVar10 = uVar15 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
            (*(code *)local_1b0[2])(&local_1b0);
          }
        }
      }
      local_1a0 = CONCAT44(local_1a0._4_4_,local_1a0._4_4_);
      local_140 = (long *)(PTR_DAT_047dcc78 + 0x10);
      local_128 = (long *)((ulong)local_128 & 0xffffffffffffff00);
      local_110 = local_1a0;
      uStack_108 = 0;
      local_150 = PTR_DAT_047dcc80 + 0x10;
      local_148 = 0;
      local_138 = lVar28;
      local_130 = uVar23;
      local_120 = plVar31;
      pcStack_118 = local_1a8;
      FUN_015d05bc(&local_158,local_1c8,(long)DAT_045a7a28);
      uVar15 = FUN_015d0a70(lVar26,puVar33);
      if ((uVar15 & 1) == 0) {
LAB_01639848:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "../../include\\pe/savedata/./hashdb/basic_storage.hpp",0x246);
      }
    }
LAB_01639a5c:
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    plVar31 = *(long **)(lVar26 + 0x60);
    if (plVar31 != (long *)0x0) {
      local_158 = (long *)CONCAT44((uint)local_100,(undefined4)local_158);
      local_158 = (long *)CONCAT71(local_158._1_7_,1);
      (**(code **)(*plVar31 + 0x60))(plVar31,&local_158);
      if ((char)local_158 != '\0') {
        local_158 = (long *)((ulong)local_158 & 0xffffffffffffff00);
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar32 = (long *)*param_4;
  plVar31 = (long *)plVar32[8];
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
    plVar32 = (long *)*param_4;
  }
  if (plVar32 != (long *)0x0) {
    lVar26 = plVar32[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  plVar29 = plVar31 + 8;
  lVar28 = *plVar29;
  lVar26 = nn::os::GetCurrentThread();
  if (lVar26 == lVar28) {
    bVar27 = true;
    bVar25 = true;
  }
  else {
    lVar26 = nn::os::GetCurrentThread();
    do {
      if (*plVar29 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar31 + 9));
          while (*plVar29 == 0) {
            cVar8 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar25) {
              *plVar29 = lVar26;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_01639b14;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar25) {
        *plVar29 = lVar26;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_01639b14:
    bVar27 = false;
    bVar25 = false;
  }
  if (plVar32 != (long *)0x0) {
    lVar26 = plVar32[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar25 = bVar27;
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  if (plVar31[0x2e] != plVar31[0x2d]) {
    uVar15 = 0;
    do {
      FUN_00f830a8(&local_158,plVar31,uVar15);
      FUN_00f834a4(&local_1b0,plVar31,&local_158);
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      if (plVar32 != (long *)0x0) {
        lVar26 = plVar32[6];
        if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar27) {
            *psVar1 = sVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          *(undefined8 *)(lVar26 + 8) = uVar17;
          *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_0163aac4;
      }
      local_158 = local_1b0;
      local_150 = local_1a8;
      local_148 = local_1a0;
      local_140 = local_198;
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x18))();
      }
      local_128 = (long *)CONCAT71(uStack_17f,local_180);
      local_138 = local_190;
      local_130 = uStack_188;
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x18))();
      }
      plVar29 = (long *)plVar32[8];
      if (plVar29 != (long *)0x0) {
        lVar26 = plVar29[6];
        if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar27) {
            *psVar1 = sVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          *(undefined8 *)(lVar26 + 8) = uVar17;
          *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_0163aac4;
      }
      plVar30 = (long *)plVar29[0xb];
      plVar4 = (long *)PTR_DAT_047d8b70;
      if (plVar30 != (long *)0x0) {
        plVar4 = plVar30 + 6;
      }
      puVar35 = (undefined1 *)*plVar4;
      plVar4 = (long *)PTR_PTR_047d4508;
      if (plVar30 != (long *)0x0) {
        plVar4 = plVar30 + 7;
      }
      pcVar34 = (char *)*plVar4;
      if (plVar30 == (long *)0x0) {
        lVar26 = 0;
      }
      else {
        lVar26 = plVar30[8];
        (**(code **)(*plVar30 + 0x18))(plVar30);
      }
      plVar14 = local_140;
      lVar28 = local_148;
      pcVar18 = local_150;
      plVar4 = local_158;
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x18))(local_140);
      }
      local_88 = puVar35;
      pcStack_80 = pcVar34;
      local_78 = lVar26;
      local_70 = plVar30;
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 0x18))(plVar30);
      }
      local_a8 = plVar4;
      local_a0 = pcVar18;
      local_98 = lVar28;
      local_90 = plVar14;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_100 = 0xff8ed28e8c8c3b4c;
      local_f8 = "EnterCount";
      uStack_f0 = 10;
      FUN_00f85058(local_e0,param_1,&local_88,&local_a8,&local_100);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 0x20))(plVar30);
      }
      lVar26 = plVar29[6];
      psVar1 = (short *)(lVar26 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar27) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar26 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar5 == 0) goto LAB_0163aaec;
      plVar29 = (long *)plVar32[8];
      if (plVar29 != (long *)0x0) {
        lVar26 = plVar29[6];
        if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar27) {
            *psVar1 = sVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          *(undefined8 *)(lVar26 + 8) = uVar17;
          *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_0163aac4;
      }
      plVar30 = (long *)plVar29[0xb];
      plVar4 = (long *)PTR_DAT_047d8b70;
      if (plVar30 != (long *)0x0) {
        plVar4 = plVar30 + 6;
      }
      puVar35 = (undefined1 *)*plVar4;
      plVar4 = (long *)PTR_PTR_047d4508;
      if (plVar30 != (long *)0x0) {
        plVar4 = plVar30 + 7;
      }
      pcVar34 = (char *)*plVar4;
      if (plVar30 == (long *)0x0) {
        lVar26 = 0;
      }
      else {
        lVar26 = plVar30[8];
        (**(code **)(*plVar30 + 0x18))(plVar30);
      }
      plVar14 = local_140;
      lVar28 = local_148;
      pcVar18 = local_150;
      plVar4 = local_158;
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x18))(local_140);
      }
      local_88 = puVar35;
      pcStack_80 = pcVar34;
      local_78 = lVar26;
      local_70 = plVar30;
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 0x18))(plVar30);
      }
      local_a8 = plVar4;
      local_a0 = pcVar18;
      local_98 = lVar28;
      local_90 = plVar14;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_c0 = 0xc0ad2a1dd7444354;
      local_b8 = "ExitCount";
      uStack_b0 = 9;
      FUN_00f85058(&local_100,param_1,&local_88,&local_a8,&local_c0);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 0x20))(plVar30);
      }
      lVar26 = plVar29[6];
      psVar1 = (short *)(lVar26 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar27) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar26 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar5 == 0) goto LAB_0163aaec;
      local_88 = &DAT_e4d07a996e5ef5e8;
      pcStack_80 = "main";
      local_78 = 4;
      local_70 = (long *)0x0;
      uVar17 = FUN_00f844f4(param_3,&local_88);
      local_a8 = (long *)CONCAT44(local_a8._4_4_,(int)local_e0[0]);
      FUN_020f0260(uVar17,&local_a8,&local_138);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = &DAT_e4d07a996e5ef5e8;
      pcStack_80 = "main";
      local_78 = 4;
      local_70 = (long *)0x0;
      uVar17 = FUN_00f844f4(param_3,&local_88);
      local_a8 = (long *)CONCAT44(local_a8._4_4_,(int)local_100);
      FUN_020f0260(uVar17,&local_a8,&local_130);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      lVar26 = plVar32[6];
      psVar1 = (short *)(lVar26 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar27) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar26 + 0x10) = 0;
        (**(code **)(*plVar32 + 0x50))(plVar32);
      }
      else if (sVar5 == 0) goto LAB_0163aaec;
      if ((long *)CONCAT71(uStack_17f,local_180) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT71(uStack_17f,local_180) + 0x20))();
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(plVar31[0x2e] - plVar31[0x2d] >> 3));
  }
  if (plVar32 != (long *)0x0) {
    lVar26 = plVar32[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar27) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*plVar32 + 0x50))(plVar32);
    }
    else if (sVar5 == 0) goto LAB_0163aaec;
  }
  if (!bVar25) {
    plVar31[8] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar31 + 9));
  }
  if (plVar32 != (long *)0x0) {
    lVar26 = plVar32[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*plVar32 + 0x50))(plVar32);
    }
    else if (sVar5 == 0) goto LAB_0163aaec;
  }
  lVar26 = plVar31[6];
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar8 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar25) {
      *psVar1 = sVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar26 + 0x10) = 0;
    (**(code **)(*plVar31 + 0x50))(plVar31);
  }
  else if (sVar5 == 0) goto LAB_0163aaec;
  plVar31 = *(long **)(*param_4 + 0x40);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  local_198 = (long *)*param_4;
  local_1b0 = param_1;
  local_1a8 = param_2;
  local_1a0 = param_3;
  if (local_198 != (long *)0x0) {
    lVar26 = local_198[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  plVar32 = plVar31 + 8;
  lVar28 = *plVar32;
  lVar26 = nn::os::GetCurrentThread();
  if (lVar26 == lVar28) {
    bVar25 = true;
  }
  else {
    lVar26 = nn::os::GetCurrentThread();
    do {
      if (*plVar32 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar31 + 9));
          while (*plVar32 == 0) {
            cVar8 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar25) {
              *plVar32 = lVar26;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_0163a2e0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar25) {
        *plVar32 = lVar26;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_0163a2e0:
    bVar25 = false;
  }
  lVar26 = plVar31[0x19];
  if (plVar31[0x1a] != lVar26) {
    lVar28 = 0;
    uVar15 = 0;
    do {
      plVar32 = (long *)(lVar26 + lVar28);
      local_158 = (long *)*plVar32;
      local_150 = (char *)plVar32[1];
      local_148 = plVar32[2];
      plVar29 = (long *)plVar32[3];
      local_140 = plVar29;
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x18))(plVar29);
      }
      local_138 = plVar32[4];
      local_130 = CONCAT71(local_130._1_7_,(char)plVar32[5]);
      plVar32 = (long *)plVar32[6];
      local_128 = plVar32;
      if (plVar32 == (long *)0x0) {
        FUN_021e7da8(&local_1b0,&local_158);
      }
      else {
        (**(code **)(*plVar32 + 0x18))(plVar32);
        FUN_021e7da8(&local_1b0,&local_158);
        (**(code **)(*plVar32 + 0x20))(plVar32);
      }
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x20))(plVar29);
      }
      lVar26 = plVar31[0x19];
      uVar15 = uVar15 + 1;
      lVar28 = lVar28 + 0x38;
    } while (uVar15 < (ulong)((plVar31[0x1a] - lVar26 >> 3) * 0x6db6db6db6db6db7));
  }
  if (!bVar25) {
    plVar31[8] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar31 + 9));
  }
  if (local_198 != (long *)0x0) {
    lVar26 = local_198[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*local_198 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0163aaec;
  }
  lVar26 = plVar31[6];
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar8 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar25) {
      *psVar1 = sVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar26 + 0x10) = 0;
    (**(code **)(*plVar31 + 0x50))(plVar31);
  }
  else if (sVar5 == 0) goto LAB_0163aaec;
  plVar31 = *(long **)(*param_4 + 0x40);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_0163aaa4;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163aac4;
  }
  local_198 = (long *)*param_4;
  local_1b0 = param_1;
  local_1a8 = param_2;
  local_1a0 = param_3;
  if (local_198 != (long *)0x0) {
    lVar26 = local_198[6];
    if (*(long *)(lVar26 + 0x10) == 0) {
LAB_0163aaa4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar17;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_0163aac4:
      pcVar34 = "count != 0";
      pcVar18 = "AddReference";
      pcVar19 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar20 = "Reference counter overflows.";
LAB_0163aae4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar34,pcVar18,pcVar19,0x58,pcVar20);
    }
  }
  plVar32 = plVar31 + 8;
  lVar28 = *plVar32;
  lVar26 = nn::os::GetCurrentThread();
  if (lVar26 == lVar28) {
    bVar25 = true;
  }
  else {
    lVar26 = nn::os::GetCurrentThread();
    do {
      if (*plVar32 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar31 + 9));
          while (*plVar32 == 0) {
            cVar8 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar25) {
              *plVar32 = lVar26;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_0163a404;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar25) {
        *plVar32 = lVar26;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_0163a404:
    bVar25 = false;
  }
  lVar26 = plVar31[0x41];
  if (plVar31[0x42] != lVar26) {
    uVar15 = 0;
    do {
      plVar32 = (long *)(lVar26 + uVar15 * 0x40);
      local_158 = (long *)*plVar32;
      local_150 = (char *)plVar32[1];
      local_148 = plVar32[2];
      local_140 = (long *)plVar32[3];
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x18))();
      }
      local_138 = plVar32[4];
      local_130 = CONCAT62(local_130._2_6_,(short)plVar32[5]);
      local_128 = (long *)plVar32[6];
      if (local_128 != (long *)0x0) {
        plVar29 = local_128 + 5;
        do {
          lVar26 = *plVar29;
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar27) {
            *(int *)plVar29 = (int)lVar26 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((int)lVar26 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar32 = (long *)plVar32[7];
      local_120 = plVar32;
      if (plVar32 == (long *)0x0) {
        FUN_021e7f78(&local_1b0,&local_158);
      }
      else {
        (**(code **)(*plVar32 + 0x18))(plVar32);
        FUN_021e7f78(&local_1b0,&local_158);
        (**(code **)(*plVar32 + 0x20))(plVar32);
      }
      if (local_128 != (long *)0x0) {
        plVar32 = local_128 + 5;
        do {
          lVar26 = *plVar32;
          iVar9 = (int)lVar26 + -1;
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar27) {
            *(int *)plVar32 = iVar9;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_128 + 0x10))();
        }
        else if ((int)lVar26 == 0) {
          pcVar34 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar18 = "DecrementReferenceInternal";
          pcVar19 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar20 = "Reference counter underflows.";
          goto LAB_0163aae4;
        }
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      uVar15 = uVar15 + 1;
      lVar26 = plVar31[0x41];
    } while (uVar15 < (ulong)(plVar31[0x42] - lVar26 >> 6));
  }
  if (!bVar25) {
    plVar31[8] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar31 + 9));
  }
  if (local_198 != (long *)0x0) {
    lVar26 = local_198[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*local_198 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0163aaec;
  }
  lVar26 = plVar31[6];
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar8 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar25) {
      *psVar1 = sVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar26 + 0x10) = 0;
    (**(code **)(*plVar31 + 0x50))(plVar31);
  }
  else if (sVar5 == 0) {
LAB_0163aaec:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (local_238 != (long *)0x0) {
    (**(code **)(*local_238 + 0x20))();
  }
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  if (local_1d8 != (long *)0x0) {
    (**(code **)(*local_1d8 + 0x20))();
  }
  if (local_1b8 != (long *)0x0) {
    (**(code **)(*local_1b8 + 0x20))();
  }
  return;
}


