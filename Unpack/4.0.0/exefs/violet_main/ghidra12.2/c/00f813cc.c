/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f813cc; name: FUN_00f813cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f813cc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  short *psVar5;
  MutexType *pMVar6;
  uint *puVar7;
  short sVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  uint *puVar23;
  ulong uVar24;
  uint *puVar25;
  bool bVar26;
  long lVar27;
  undefined8 uVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  uint *puVar35;
  long *plVar36;
  long *plVar37;
  ulong uVar38;
  long local_258;
  long *local_210;
  long local_1f8;
  long lStack_1f0;
  long local_1e8;
  long *local_1e0;
  uint local_1d8 [2];
  long *local_1d0;
  char *local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  long *local_198;
  undefined8 local_190 [3];
  long *local_178;
  long local_170;
  long lStack_168;
  long local_160;
  long *local_158;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  long *local_138;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  char *local_78;
  undefined8 local_70;
  
  lVar27 = *param_2;
  if (param_2[1] != lVar27) {
    plVar1 = (long *)(PTR_DAT_047dcc88 + 0x10);
    plVar2 = (long *)(PTR_DAT_047dcc78 + 0x10);
    plVar3 = (long *)(PTR_DAT_047dcc80 + 0x10);
    puVar4 = PTR_DAT_047dcc70 + 0x10;
    uVar24 = 0;
    do {
      plVar33 = *(long **)(lVar27 + uVar24 * 8);
      if (plVar33 == (long *)0x0) {
        plVar17 = (long *)param_1[1];
        local_210 = *(long **)param_1[2];
        plVar36 = *(long **)param_1[3];
      }
      else {
        lVar27 = plVar33[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
        lVar27 = plVar33[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        plVar17 = (long *)param_1[1];
        psVar5 = (short *)(lVar27 + 0x1a);
        local_210 = *(long **)param_1[2];
        plVar36 = *(long **)param_1[3];
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      plVar29 = (long *)plVar33[8];
      if (plVar29 == (long *)0x0) {
LAB_00f82e38:
        lVar27 = _DAT_00000040;
        lVar30 = nn::os::GetCurrentThread();
        if (lVar30 != lVar27) {
          lVar27 = nn::os::GetCurrentThread();
LAB_00f82e54:
          if (_DAT_00000040 == 0) goto code_r0x00f82e5c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)&DAT_00000048);
          do {
            if (_DAT_00000040 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)&DAT_00000048);
                while (_DAT_00000040 == 0) {
                  cVar14 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(0x40,0x10);
                  if (bVar26) {
                    cVar14 = ExclusiveMonitorsStatus();
                    _DAT_00000040 = lVar27;
                  }
                  if (cVar14 == '\0') goto LAB_00f82e64;
                }
              } while( true );
            }
            cVar14 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(0x40,0x10);
            if (bVar26) {
              cVar14 = ExclusiveMonitorsStatus();
              _DAT_00000040 = lVar27;
            }
          } while (cVar14 != '\0');
LAB_00f82e64:
          uVar28 = _DAT_00000240;
          _DAT_00000040 = 0;
          nn::os::SignalLightEvent((LightEventType *)&DAT_00000048);
          goto LAB_00f82e78;
        }
        uVar28 = _DAT_00000240;
LAB_00f82e78:
        FUN_00f83b9c(auStack_130,plVar29,uVar28);
      }
      else {
        lVar27 = plVar29[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
        plVar37 = (long *)plVar33[8];
        if (plVar37 == (long *)0x0) goto LAB_00f82e38;
        lVar27 = plVar37[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
        plVar31 = plVar37 + 8;
        lVar30 = *plVar31;
        lVar27 = nn::os::GetCurrentThread();
        if (lVar27 != lVar30) {
          lVar27 = nn::os::GetCurrentThread();
LAB_00f81584:
          if (*plVar31 == 0) goto code_r0x00f8158c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar37 + 9));
          do {
            if (*plVar31 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar37 + 9));
                while (*plVar31 == 0) {
                  cVar14 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar26) {
                    *plVar31 = lVar27;
                    cVar14 = ExclusiveMonitorsStatus();
                  }
                  if (cVar14 == '\0') goto LAB_00f81594;
                }
              } while( true );
            }
            cVar14 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar26) {
              *plVar31 = lVar27;
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
LAB_00f81594:
          lVar27 = plVar37[0x48];
          plVar37[8] = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar37 + 9));
          goto LAB_00f815a8;
        }
        lVar27 = plVar37[0x48];
LAB_00f815a8:
        FUN_00f83b9c(auStack_130,plVar29,lVar27);
        lVar27 = plVar37[6];
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*plVar37 + 0x50))(plVar37);
        }
        else if (sVar8 == 0) goto LAB_00f82f84;
      }
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[6];
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*plVar29 + 0x50))(plVar29);
        }
        else if (sVar8 == 0) goto LAB_00f82f84;
      }
      plVar29 = (long *)plVar33[8];
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      plVar31 = (long *)plVar29[0xb];
      plVar37 = (long *)PTR_DAT_047d8b70;
      if (plVar31 != (long *)0x0) {
        plVar37 = plVar31 + 6;
      }
      local_170 = *plVar37;
      plVar37 = (long *)PTR_PTR_047d4508;
      if (plVar31 != (long *)0x0) {
        plVar37 = plVar31 + 7;
      }
      lStack_168 = *plVar37;
      if (plVar31 == (long *)0x0) {
        local_160 = 0;
        local_158 = plVar31;
        FUN_00f86c70(auStack_150,&local_170);
      }
      else {
        local_160 = plVar31[8];
        (**(code **)(*plVar31 + 0x18))(plVar31);
        local_158 = plVar31;
        FUN_00f86c70(auStack_150,&local_170);
        (**(code **)(*plVar31 + 0x20))(plVar31);
      }
      lVar27 = plVar29[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar8 == 0) goto LAB_00f82f84;
      plVar29 = (long *)plVar33[8];
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      plVar31 = (long *)plVar29[0xb];
      plVar37 = (long *)PTR_DAT_047d8b70;
      if (plVar31 != (long *)0x0) {
        plVar37 = plVar31 + 6;
      }
      plVar37 = (long *)*plVar37;
      plVar32 = (long *)PTR_PTR_047d4508;
      if (plVar31 != (long *)0x0) {
        plVar32 = plVar31 + 7;
      }
      plVar32 = (long *)*plVar32;
      if (plVar31 == (long *)0x0) {
        plVar34 = (long *)0x0;
      }
      else {
        plVar34 = (long *)plVar31[8];
        (**(code **)(*plVar31 + 0x18))(plVar31);
        (**(code **)(*plVar31 + 0x18))(plVar31);
      }
      local_110 = (long *)0x302ee6d5ddb8605e;
      local_108 = (long *)0x3c2139f;
      local_100 = (long *)0xb;
      local_1b0 = 0x45e24506a4634ddf;
      local_1a8 = "Event";
      uStack_1a0 = 5;
      local_d8 = plVar37;
      local_d0 = plVar32;
      local_c8 = plVar34;
      local_c0 = plVar31;
      if (plVar31 == (long *)0x0) {
        local_1d0 = (long *)0xb346610b5947045f;
        local_1c8 = "CurrentStateLength";
        uStack_1c0 = 0x12;
        FUN_00f831b8(local_190,&local_110,&local_1b0,&local_d8,&local_1d0);
      }
      else {
        (**(code **)(*plVar31 + 0x18))(plVar31);
        local_1d0 = (long *)0xb346610b5947045f;
        local_1c8 = "CurrentStateLength";
        uStack_1c0 = 0x12;
        FUN_00f831b8(local_190,&local_110,&local_1b0,&local_d8,&local_1d0);
        (**(code **)(*plVar31 + 0x20))(plVar31);
        (**(code **)(*plVar31 + 0x20))(plVar31);
        (**(code **)(*plVar31 + 0x20))(plVar31);
      }
      lVar27 = plVar29[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar8 == 0) goto LAB_00f82f84;
      plVar29 = (long *)plVar33[8];
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      plVar31 = (long *)plVar29[0xb];
      plVar37 = (long *)PTR_DAT_047d8b70;
      if (plVar31 != (long *)0x0) {
        plVar37 = plVar31 + 6;
      }
      plVar37 = (long *)*plVar37;
      plVar32 = (long *)PTR_PTR_047d4508;
      if (plVar31 != (long *)0x0) {
        plVar32 = plVar31 + 7;
      }
      plVar32 = (long *)*plVar32;
      if (plVar31 == (long *)0x0) {
        plVar34 = (long *)0x0;
      }
      else {
        plVar34 = (long *)plVar31[8];
        (**(code **)(*plVar31 + 0x18))(plVar31);
        (**(code **)(*plVar31 + 0x18))(plVar31);
      }
      local_110 = (long *)0x302ee6d5ddb8605e;
      local_108 = (long *)0x3c2139f;
      local_100 = (long *)0xb;
      local_1d0 = (long *)0x45e24506a4634ddf;
      local_1c8 = "Event";
      uStack_1c0 = 5;
      local_d8 = plVar37;
      local_d0 = plVar32;
      local_c8 = plVar34;
      local_c0 = plVar31;
      if (plVar31 == (long *)0x0) {
        local_80 = (undefined *)0x6da65ee563ec9d0f;
        local_78 = "CurrentState";
        local_70 = 0xc;
        FUN_00f831b8(&local_1b0,&local_110,&local_1d0,&local_d8,&local_80);
      }
      else {
        (**(code **)(*plVar31 + 0x18))(plVar31);
        local_80 = (undefined *)0x6da65ee563ec9d0f;
        local_78 = "CurrentState";
        local_70 = 0xc;
        FUN_00f831b8(&local_1b0,&local_110,&local_1d0,&local_d8,&local_80);
        (**(code **)(*plVar31 + 0x20))(plVar31);
        (**(code **)(*plVar31 + 0x20))(plVar31);
        (**(code **)(*plVar31 + 0x20))(plVar31);
      }
      lVar27 = plVar29[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar8 == 0) goto LAB_00f82f84;
      plVar29 = local_178;
      uVar28 = local_190[0];
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x18))(local_178);
      }
      local_c0 = (long *)0x0;
      local_d8 = (long *)&DAT_e4d07a996e5ef5e8;
      local_d0 = (long *)&DAT_03c60f6f;
      local_c8 = (long *)0x4;
      uVar16 = FUN_00f844f4(plVar36,&local_d8);
      local_110 = (long *)CONCAT44(local_110._4_4_,(int)uVar28);
      cVar14 = FUN_00f846d0(uVar16,&local_110);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x20))(plVar29);
      }
      if (cVar14 == '\0') {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","InnerLoadEvent",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/pokemon_engine/programs/src/savedata/io/event_system.cpp"
                   ,0x73,
                   "EventSystem: Could not set loaded currentStateLength! EventName(%s) StateName(%s)"
                   ,local_148,local_128);
      }
      plVar29 = (long *)plVar33[8];
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      lVar27 = plVar33[6];
      if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 0) {
        uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
        *(undefined8 *)(lVar27 + 8) = uVar28;
        *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
      }
      else if (sVar8 == -1) goto LAB_00f82f5c;
      plVar37 = plVar29 + 8;
      lVar30 = *plVar37;
      lVar27 = nn::os::GetCurrentThread();
      if (lVar27 != lVar30) {
        lVar27 = nn::os::GetCurrentThread();
LAB_00f81a58:
        if (*plVar37 == 0) goto code_r0x00f81a60;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar29 + 9));
        do {
          if (*plVar37 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar29 + 9));
              while (*plVar37 == 0) {
                cVar14 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar26) {
                  *plVar37 = lVar27;
                  cVar14 = ExclusiveMonitorsStatus();
                }
                if (cVar14 == '\0') goto LAB_00f81a68;
              }
            } while( true );
          }
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar26) {
            *plVar37 = lVar27;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
LAB_00f81a68:
        bVar26 = false;
        goto LAB_00f81a6c;
      }
      bVar26 = true;
LAB_00f81a6c:
      if (plVar33 != (long *)0x0) {
        lVar27 = plVar33[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar13) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      if (plVar29[0x2e] != plVar29[0x2d]) {
        uVar38 = 0;
        do {
          FUN_00f830a8(&local_d8,plVar29,uVar38);
          FUN_00f834a4(&local_110,plVar29,&local_d8);
          if (local_c0 != (long *)0x0) {
            (**(code **)(*local_c0 + 0x20))();
          }
          local_1d0 = plVar33;
          if (plVar33 != (long *)0x0) {
            lVar27 = plVar33[6];
            if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
            psVar5 = (short *)(lVar27 + 0x1a);
            do {
              sVar8 = *psVar5;
              cVar14 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar13) {
                *psVar5 = sVar8 + 1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar8 == 0) {
              uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
              *(undefined8 *)(lVar27 + 8) = uVar28;
              *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
            }
            else if (sVar8 == -1) goto LAB_00f82f5c;
          }
          plVar37 = local_f8;
          local_d8 = local_110;
          local_d0 = local_108;
          local_c8 = local_100;
          local_c0 = local_f8;
          if (local_f8 != (long *)0x0) {
            (**(code **)(*local_f8 + 0x18))(local_f8);
          }
          plVar31 = (long *)CONCAT44(uStack_dc,local_e0);
          local_b8 = local_f0;
          local_b0 = uStack_e8;
          local_a8 = plVar31;
          if (plVar31 == (long *)0x0) {
            FUN_00f83d60(plVar17,plVar36,&local_1d0,&local_d8);
          }
          else {
            (**(code **)(*plVar31 + 0x18))(plVar31);
            FUN_00f83d60(plVar17,plVar36,&local_1d0,&local_d8);
            (**(code **)(*plVar31 + 0x20))(plVar31);
          }
          if (plVar37 != (long *)0x0) {
            (**(code **)(*plVar37 + 0x20))(plVar37);
          }
          if (local_1d0 != (long *)0x0) {
            lVar27 = local_1d0[6];
            psVar5 = (short *)(lVar27 + 0x1a);
            do {
              sVar8 = *psVar5;
              cVar14 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar13) {
                *psVar5 = sVar8 + -1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar8 == 1) {
              *(undefined8 *)(lVar27 + 0x10) = 0;
              (**(code **)(*local_1d0 + 0x50))();
            }
            else if (sVar8 == 0) goto LAB_00f82f84;
          }
          if ((long *)CONCAT44(uStack_dc,local_e0) != (long *)0x0) {
            (**(code **)(*(long *)CONCAT44(uStack_dc,local_e0) + 0x20))();
          }
          if (local_f8 != (long *)0x0) {
            (**(code **)(*local_f8 + 0x20))();
          }
          uVar38 = uVar38 + 1;
        } while (uVar38 < (ulong)(plVar29[0x2e] - plVar29[0x2d] >> 3));
      }
      if (plVar33 != (long *)0x0) {
        lVar27 = plVar33[6];
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar13) {
            *psVar5 = sVar8 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*plVar33 + 0x50))(plVar33);
        }
        else if (sVar8 == 0) goto LAB_00f82f84;
      }
      if (!bVar26) {
        plVar29[8] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar29 + 9));
      }
      if (plVar33 != (long *)0x0) {
        lVar27 = plVar33[6];
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*plVar33 + 0x50))(plVar33);
        }
        else if (sVar8 == 0) goto LAB_00f82f84;
      }
      lVar27 = plVar29[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar8 == 0) goto LAB_00f82f84;
      plVar29 = (long *)plVar33[8];
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      local_108 = local_210;
      lVar27 = plVar33[6];
      local_110 = plVar17;
      local_100 = plVar36;
      local_f8 = plVar33;
      if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 0) {
        uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
        *(undefined8 *)(lVar27 + 8) = uVar28;
        *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
      }
      else if (sVar8 == -1) goto LAB_00f82f5c;
      plVar37 = plVar29 + 8;
      lVar30 = *plVar37;
      lVar27 = nn::os::GetCurrentThread();
      if (lVar27 != lVar30) {
        lVar27 = nn::os::GetCurrentThread();
LAB_00f81d4c:
        if (*plVar37 == 0) goto code_r0x00f81d54;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar29 + 9));
        do {
          if (*plVar37 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar29 + 9));
              while (*plVar37 == 0) {
                cVar14 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar26) {
                  *plVar37 = lVar27;
                  cVar14 = ExclusiveMonitorsStatus();
                }
                if (cVar14 == '\0') goto LAB_00f81d5c;
              }
            } while( true );
          }
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar26) {
            *plVar37 = lVar27;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
LAB_00f81d5c:
        bVar26 = false;
        goto LAB_00f81d60;
      }
      bVar26 = true;
LAB_00f81d60:
      puVar9 = (undefined8 *)plVar29[0x19];
      if ((undefined8 *)plVar29[0x1a] != puVar9) {
        local_d8 = (long *)*puVar9;
        local_d0 = (long *)puVar9[1];
        local_c8 = (long *)puVar9[2];
        plVar37 = (long *)puVar9[3];
        local_c0 = plVar37;
        if (plVar37 != (long *)0x0) {
          (**(code **)(*plVar37 + 0x18))(plVar37);
        }
        local_b8 = puVar9[4];
        local_b0 = CONCAT71(local_b0._1_7_,*(undefined1 *)(puVar9 + 5));
        plVar31 = (long *)puVar9[6];
        local_a8 = plVar31;
        if (plVar31 == (long *)0x0) {
          FUN_00f88d88(&local_110,&local_d8);
        }
        else {
          (**(code **)(*plVar31 + 0x18))(plVar31);
          FUN_00f88d88(&local_110,&local_d8);
          (**(code **)(*plVar31 + 0x20))(plVar31);
        }
        if (plVar37 != (long *)0x0) {
          (**(code **)(*plVar37 + 0x20))(plVar37);
        }
        lVar27 = plVar29[0x19];
        if (1 < (ulong)((plVar29[0x1a] - lVar27 >> 3) * 0x6db6db6db6db6db7)) {
          uVar38 = 1;
          local_258 = 0;
          do {
            lVar27 = lVar27 + local_258;
            local_d8 = *(long **)(lVar27 + 0x38);
            local_d0 = *(long **)(lVar27 + 0x40);
            local_c8 = *(long **)(lVar27 + 0x48);
            plVar37 = *(long **)(lVar27 + 0x50);
            local_c0 = plVar37;
            if (plVar37 != (long *)0x0) {
              (**(code **)(*plVar37 + 0x18))();
            }
            local_b8 = *(undefined8 *)(lVar27 + 0x58);
            local_b0 = CONCAT71(local_b0._1_7_,*(undefined1 *)(lVar27 + 0x60));
            plVar31 = *(long **)(lVar27 + 0x68);
            local_a8 = plVar31;
            if (plVar31 == (long *)0x0) {
              FUN_00f88d88(&local_110,&local_d8);
            }
            else {
              (**(code **)(*plVar31 + 0x18))(plVar31);
              FUN_00f88d88(&local_110,&local_d8);
              (**(code **)(*plVar31 + 0x20))(plVar31);
            }
            if (plVar37 != (long *)0x0) {
              (**(code **)(*plVar37 + 0x20))();
            }
            lVar27 = plVar29[0x19];
            uVar38 = uVar38 + 1;
            local_258 = local_258 + 0x38;
          } while (uVar38 < (ulong)((plVar29[0x1a] - lVar27 >> 3) * 0x6db6db6db6db6db7));
        }
      }
      if (!bVar26) {
        plVar29[8] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar29 + 9));
      }
      if (local_f8 != (long *)0x0) {
        lVar27 = local_f8[6];
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*local_f8 + 0x50))();
        }
        else if (sVar8 == 0) goto LAB_00f82f84;
      }
      lVar27 = plVar29[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar8 == 0) goto LAB_00f82f84;
      plVar29 = (long *)plVar33[8];
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[6];
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_00f82f5c;
      }
      local_108 = local_210;
      lVar27 = plVar33[6];
      local_110 = plVar17;
      local_100 = plVar36;
      local_f8 = plVar33;
      if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00f82f3c;
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 0) {
        uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
        *(undefined8 *)(lVar27 + 8) = uVar28;
        *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
      }
      else if (sVar8 == -1) goto LAB_00f82f5c;
      plVar37 = plVar29 + 8;
      lVar30 = *plVar37;
      lVar27 = nn::os::GetCurrentThread();
      if (lVar27 != lVar30) {
        lVar27 = nn::os::GetCurrentThread();
LAB_00f81e60:
        if (*plVar37 == 0) goto code_r0x00f81e68;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar29 + 9));
        do {
          if (*plVar37 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar29 + 9));
              while (*plVar37 == 0) {
                cVar14 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar26) {
                  *plVar37 = lVar27;
                  cVar14 = ExclusiveMonitorsStatus();
                }
                if (cVar14 == '\0') goto LAB_00f81e70;
              }
            } while( true );
          }
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar26) {
            *plVar37 = lVar27;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
LAB_00f81e70:
        bVar26 = false;
        goto LAB_00f81e74;
      }
      bVar26 = true;
LAB_00f81e74:
      lVar27 = plVar29[0x41];
      if (plVar29[0x42] != lVar27) {
        uVar38 = 0;
        do {
          puVar9 = (undefined8 *)(lVar27 + uVar38 * 0x40);
          local_d8 = (long *)*puVar9;
          local_d0 = (long *)puVar9[1];
          local_c8 = (long *)puVar9[2];
          local_c0 = (long *)puVar9[3];
          if (local_c0 != (long *)0x0) {
            (**(code **)(*local_c0 + 0x18))();
          }
          local_b8 = puVar9[4];
          local_b0 = CONCAT62(local_b0._2_6_,*(undefined2 *)(puVar9 + 5));
          local_a8 = (long *)puVar9[6];
          if (local_a8 != (long *)0x0) {
            plVar37 = local_a8 + 5;
            do {
              lVar27 = *plVar37;
              cVar14 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar13) {
                *(int *)plVar37 = (int)lVar27 + 1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if ((int)lVar27 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          plVar37 = (long *)puVar9[7];
          local_a0 = plVar37;
          if (plVar37 == (long *)0x0) {
            FUN_00f88f7c(&local_110,&local_d8);
          }
          else {
            (**(code **)(*plVar37 + 0x18))(plVar37);
            FUN_00f88f7c(&local_110,&local_d8);
            (**(code **)(*plVar37 + 0x20))(plVar37);
          }
          if (local_a8 != (long *)0x0) {
            plVar37 = local_a8 + 5;
            do {
              lVar27 = *plVar37;
              iVar15 = (int)lVar27 + -1;
              cVar14 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar13) {
                *(int *)plVar37 = iVar15;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (iVar15 == 0) {
              (**(code **)(*local_a8 + 0x10))();
            }
            else if ((int)lVar27 == 0) {
              pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
              pcVar19 = "DecrementReferenceInternal";
              pcVar20 = 
              "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
              ;
              pcVar21 = "Reference counter underflows.";
              goto LAB_00f82f7c;
            }
          }
          if (local_c0 != (long *)0x0) {
            (**(code **)(*local_c0 + 0x20))();
          }
          uVar38 = uVar38 + 1;
          lVar27 = plVar29[0x41];
        } while (uVar38 < (ulong)(plVar29[0x42] - lVar27 >> 6));
      }
      if (!bVar26) {
        plVar29[8] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar29 + 9));
      }
      if (local_f8 != (long *)0x0) {
        lVar27 = local_f8[6];
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*local_f8 + 0x50))();
        }
        else if (sVar8 == 0) goto LAB_00f82f84;
      }
      lVar27 = plVar29[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar8 == 0) goto LAB_00f82f84;
      local_f8 = (long *)plVar17[1];
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_100 = (long *)0x0;
      local_e0 = 0;
      lVar27 = (long)DAT_045a7a28 + 1;
      local_f0 = 0xffffffffffffffff;
      uStack_e8 = 0;
      if ((int)lVar27 != 0) {
        if (DAT_045a7a28 < -1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        plVar17 = (long *)(**(code **)(*local_f8 + 0x10))(local_f8,lVar27,1);
        if (plVar17 == (long *)0x0) {
          (**(code **)(*local_f8 + 0xe8))();
        }
        plVar29 = (long *)((long)plVar17 + lVar27);
        local_110 = plVar17;
        local_108 = plVar17;
        local_100 = plVar29;
        do {
          plVar37 = local_f8;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar30 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar30 == 0) {
            *(char *)plVar17 = '\0';
          }
          else {
            if (0xf < *(ulong *)(lVar30 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = plVar37;
            *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
            *(char *)plVar17 = '\0';
            *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
          }
          plVar17 = (long *)((long)plVar17 + 1);
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        local_108 = plVar29;
      }
      local_1b8 = (long *)0x0;
      local_1d0 = (long *)&DAT_e4d07a996e5ef5e8;
      local_1c8 = "main";
      uStack_1c0 = 4;
      lVar27 = FUN_00f844f4(plVar36,&local_1d0);
      plVar17 = local_110;
      pMVar6 = (MutexType *)(lVar27 + 0x80);
      local_1d8[0] = (uint)local_1b0;
      nn::os::LockMutex(pMVar6);
      plVar36 = *(long **)(lVar27 + 0x60);
      if (plVar36 != (long *)0x0) {
        (**(code **)(*plVar36 + 0x28))(plVar36,local_1d8);
      }
      nn::os::LockMutex(pMVar6);
      puVar10 = *(uint **)(lVar27 + 0x10);
      uVar38 = (long)puVar10 - (long)*(uint **)(lVar27 + 8);
      if (0 < (long)uVar38) {
        puVar23 = *(uint **)(lVar27 + 8);
        puVar25 = puVar10;
        do {
          puVar35 = puVar23 + (uVar38 / 0x60) * 0xc;
          if (*puVar35 == local_1d8[0]) goto LAB_00f8205c;
          puVar7 = puVar35 + 0xc;
          if (local_1d8[0] <= *puVar35) {
            puVar7 = puVar23;
            puVar25 = puVar35;
          }
          uVar38 = (long)puVar25 - (long)puVar7;
          puVar23 = puVar7;
        } while (0 < (long)uVar38);
      }
      puVar35 = puVar10;
LAB_00f8205c:
      nn::os::UnlockMutex(pMVar6);
      if ((puVar35 == (uint *)0x0) || (puVar10 == puVar35)) {
        nn::os::UnlockMutex(pMVar6);
LAB_00f822c8:
        plVar17 = *(long **)(lVar27 + 0x60);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x50))(plVar17,local_1d8);
        }
      }
      else {
        uVar28 = *(undefined8 *)(puVar35 + 2);
        uVar16 = *(undefined8 *)(puVar35 + 6);
        uVar11 = *puVar35;
        local_78 = (char *)0x0;
        local_70 = (ulong)uVar11 << 0x20;
        uVar22 = 0;
        local_d8 = plVar1;
        local_80 = puVar4;
        if (uVar11 != 0) {
          uVar38 = (ulong)uVar11 - ((ulong)(uVar11 >> 1) & 0x5555555555555555);
          uVar11 = uVar11 ^ uVar11 << 2;
          uVar38 = (uVar38 & 0x3333333333333333) + (uVar38 >> 2 & 0x3333333333333333);
          uVar11 = uVar11 ^ uVar11 >> 0xf;
          uVar22 = uVar11 ^ uVar11 << 0xd;
          local_70 = (ulong)uVar22 << 0x20;
          uVar38 = (uVar38 + (uVar38 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar38 != 1) {
            uVar22 = uVar22 ^ uVar22 << 2;
            uVar22 = uVar22 ^ uVar22 >> 0xf;
            uVar22 = uVar22 ^ uVar22 << 0xd;
            local_70 = (ulong)uVar22 << 0x20;
            if (uVar38 != 2) {
              uVar22 = uVar22 ^ uVar22 << 2;
              uVar22 = uVar22 ^ uVar22 >> 0xf;
              uVar22 = uVar22 ^ uVar22 << 0xd;
              local_70 = (ulong)uVar22 << 0x20;
              if (uVar38 != 3) {
                uVar22 = uVar22 ^ uVar22 << 2;
                uVar22 = uVar22 ^ uVar22 >> 0xf;
                uVar22 = uVar22 ^ uVar22 << 0xd;
                local_70 = (ulong)uVar22 << 0x20;
                if (uVar38 != 4) {
                  FUN_00f83090(&local_80);
                  for (lVar30 = uVar38 - 5; lVar30 != 0; lVar30 = lVar30 + -1) {
                    (**(code **)(local_80 + 0x10))(&local_80);
                  }
                  local_70._4_4_ = (uint)((ulong)local_70 >> 0x20);
                  uVar22 = local_70._4_4_;
                }
              }
            }
          }
        }
        local_70 = CONCAT44(local_70._4_4_,uVar22);
        local_a8 = (long *)((ulong)local_a8 & 0xffffffffffffff00);
        local_a0 = (long *)(PTR_DAT_047dcc70 + 0x10);
        local_90 = local_70;
        uStack_88 = 0;
        local_c8 = (long *)0x0;
        local_d0 = plVar3;
        local_c0 = plVar2;
        local_b8 = uVar28;
        local_b0 = uVar16;
        pcStack_98 = local_78;
        cVar14 = FUN_00f88478(&local_d8,plVar17,(long)DAT_045a7a28);
        nn::os::UnlockMutex(pMVar6);
        if (cVar14 == '\0') goto LAB_00f822c8;
      }
      if (local_1b8 != (long *)0x0) {
        (**(code **)(*local_1b8 + 0x20))();
      }
      plVar17 = local_110;
      if ((char)*local_110 == '\0') {
        plVar17 = (long *)FUN_00d44228();
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar28 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar28;
        FUN_00cf9884(&local_d8,uVar28,plVar17);
        plVar17 = local_d8;
      }
      plVar36 = (long *)plVar33[8];
      if (plVar36 != (long *)0x0) {
        lVar27 = plVar36[6];
        if (*(long *)(lVar27 + 0x10) == 0) {
LAB_00f82f3c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          *(undefined8 *)(lVar27 + 8) = uVar28;
          *(undefined4 *)(lVar27 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) {
LAB_00f82f5c:
          pcVar18 = "count != 0";
          pcVar19 = "AddReference";
          pcVar20 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar21 = "Reference counter overflows.";
LAB_00f82f7c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar18,pcVar19,pcVar20,0x58,pcVar21);
        }
      }
      plVar29 = (long *)PTR_DAT_047d8b70;
      if (plVar17 != (long *)0x0) {
        plVar29 = plVar17 + 6;
      }
      local_1f8 = *plVar29;
      plVar29 = (long *)PTR_PTR_047d4508;
      if (plVar17 != (long *)0x0) {
        plVar29 = plVar17 + 7;
      }
      lStack_1f0 = *plVar29;
      if (plVar17 == (long *)0x0) {
        local_1e8 = 0;
        local_1e0 = (long *)0x0;
        uVar38 = FUN_00f8337c(plVar36,&local_1f8);
      }
      else {
        local_1e8 = plVar17[8];
        (**(code **)(*plVar17 + 0x18))(plVar17);
        local_1e0 = plVar17;
        uVar38 = FUN_00f8337c(plVar36,&local_1f8);
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
      if (plVar36 != (long *)0x0) {
        lVar27 = plVar36[6];
        psVar5 = (short *)(lVar27 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar14 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar26) {
            *psVar5 = sVar8 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*plVar36 + 0x50))(plVar36);
        }
        else if (sVar8 == 0) goto LAB_00f82f84;
      }
      if ((uVar38 & 1) == 0) {
        plVar1 = (long *)PTR_PTR_047d4508;
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 7;
        }
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","InnerLoadEvent",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/pokemon_engine/programs/src/savedata/io/event_system.cpp"
                   ,0x84,
                   "EventSystem: Could not set loaded currentState! EventName(%s) StateName(%s)",
                   local_148,*plVar1);
      }
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
      plVar36 = local_f8;
      plVar17 = local_110;
      if (local_110 != (long *)0x0) {
        local_108 = local_110;
        lVar27 = (long)local_100 - (long)local_110;
        uVar38 = (**(code **)(*local_f8 + 0xf8))(local_f8);
        if (((uVar38 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
          (**(code **)(*plVar36 + 0x18))(plVar36,plVar17,lVar27,1);
        }
        else {
          FUN_00c48fe8(plVar36,plVar17,lVar27,1);
        }
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      *(undefined1 *)*param_1 = 1;
      lVar27 = plVar33[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar14 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar33 + 0x50))(plVar33);
      }
      else if (sVar8 == 0) goto LAB_00f82f84;
      cVar14 = *(char *)*param_1;
      lVar27 = plVar33[6];
      psVar5 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar5;
        cVar12 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar26) {
          *psVar5 = sVar8 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*plVar33 + 0x50))(plVar33);
      }
      else if (sVar8 == 0) {
LAB_00f82f84:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if (cVar14 == '\0') {
        return;
      }
      uVar24 = uVar24 + 1;
      lVar27 = *param_2;
    } while (uVar24 < (ulong)(param_2[1] - lVar27 >> 3));
  }
  return;
code_r0x00f82e5c:
  cVar14 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(0x40,0x10);
  if (bVar26) {
    cVar14 = ExclusiveMonitorsStatus();
    _DAT_00000040 = lVar27;
  }
  if (cVar14 == '\0') goto LAB_00f82e64;
  goto LAB_00f82e54;
code_r0x00f8158c:
  cVar14 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
  if (bVar26) {
    *plVar31 = lVar27;
    cVar14 = ExclusiveMonitorsStatus();
  }
  if (cVar14 == '\0') goto LAB_00f81594;
  goto LAB_00f81584;
code_r0x00f81a60:
  cVar14 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
  if (bVar26) {
    *plVar37 = lVar27;
    cVar14 = ExclusiveMonitorsStatus();
  }
  if (cVar14 == '\0') goto LAB_00f81a68;
  goto LAB_00f81a58;
code_r0x00f81d54:
  cVar14 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
  if (bVar26) {
    *plVar37 = lVar27;
    cVar14 = ExclusiveMonitorsStatus();
  }
  if (cVar14 == '\0') goto LAB_00f81d5c;
  goto LAB_00f81d4c;
code_r0x00f81e68:
  cVar14 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar37,0x10);
  if (bVar26) {
    *plVar37 = lVar27;
    cVar14 = ExclusiveMonitorsStatus();
  }
  if (cVar14 == '\0') goto LAB_00f81e70;
  goto LAB_00f81e60;
}


