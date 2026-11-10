/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d70cac; name: FUN_00d70cac
 */


void FUN_00d70cac(long param_1,uint *param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  short *psVar3;
  uint *puVar4;
  short sVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  ulong local_e8;
  uint *local_e0;
  uint local_d4;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  uint *local_b0;
  uint *puStack_a8;
  ulong *local_a0;
  
  if ((param_3 & 1) == 0) {
    local_d0 = (undefined1 *)0x13ee4f04b1568f34;
    local_c8 = (code *)0x3c5d235;
    local_c0 = (undefined1 *)0xf;
    puStack_b8 = (undefined1 *)0x0;
    iVar12 = FUN_00d93250(param_1,&local_d0);
    local_d0 = (undefined1 *)0x7060a834bf10ce7f;
    local_c8 = (code *)0x3c777c3;
    local_c0 = (undefined1 *)0x10;
    puStack_b8 = (undefined1 *)0x0;
    uVar13 = FUN_00d93028(param_1,&local_d0);
    if ((iVar12 == 0) && ((uVar13 & 1) != 0)) {
      FUN_00d64f48(&local_e0,param_1);
      puVar4 = local_e0;
      if (local_e0 != (uint *)0x0) {
        puVar1 = local_e0 + 0x20;
        puVar2 = local_e0 + 0xc0;
        uVar14 = nn::os::GetCurrentThread();
LAB_00d712a4:
        if (*(long *)puVar2 == 0) goto code_r0x00d712ac;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
        do {
          if (*(long *)puVar2 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
              while (*(long *)puVar2 == 0) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar10) {
                  *(undefined8 *)puVar2 = uVar14;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_00d712b4;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar10) {
            *(undefined8 *)puVar2 = uVar14;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_00d712b4:
        plVar6 = *(long **)(puVar4 + 0x20);
        plVar7 = *(long **)(puVar4 + 0x22);
        plVar16 = plVar6;
        if ((plVar6 != plVar7) && (*plVar6 != 0x13ee4f04b1568f34)) {
          do {
            plVar16 = plVar16 + 0xb;
            if (plVar7 == plVar16) {
              plVar16 = plVar7;
              goto LAB_00d712e8;
            }
          } while (*plVar16 != 0x13ee4f04b1568f34);
        }
LAB_00d712e8:
        if (plVar7 == plVar16) {
          puVar4[0xc0] = 0;
          puVar4[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
          local_e8 = 0;
        }
        else {
          puVar4[0xc0] = 0;
          puVar4[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
          local_e8 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar6) >> 3) * -0x45d1745d)
                     << 0x20 | 1;
          local_d4 = 1;
          if (*(long *)(puVar4 + 0x6e) == 0) {
            local_b0 = &local_d4;
            local_d0 = &LAB_02e657b0;
            local_c8 = FUN_02e657f0;
            local_c0 = &LAB_02e657f4;
            puStack_b8 = &LAB_02e65800;
          }
          else {
            puStack_a8 = &local_d4;
            local_b0 = puVar4;
            local_a0 = &local_e8;
            local_d0 = &LAB_029e901c;
            local_c8 = FUN_02e65784;
            local_c0 = &LAB_02e65788;
            puStack_b8 = &LAB_02e6579c;
          }
          FUN_00c837c0(puVar4,puVar1,&local_e8,&local_d0);
          pcVar11 = local_c8;
          if (local_c8 != (code *)0x0) {
            local_c0 = (undefined1 *)0x0;
            puStack_b8 = (undefined1 *)0x0;
            local_d0 = (undefined1 *)0x0;
            local_c8 = (code *)0x0;
            (*pcVar11)(&local_b0);
          }
        }
        lVar15 = *(long *)(puVar4 + 0xc);
        psVar3 = (short *)(lVar15 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar10) {
            *psVar3 = sVar5 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*(long *)puVar4 + 0x50))(puVar4);
        }
        else if (sVar5 == 0) goto LAB_00d71984;
      }
      FUN_00d64f48(&local_e0,param_1);
      if (local_e0 != (uint *)0x0) {
        puVar4 = local_e0 + 0xc0;
        uVar14 = nn::os::GetCurrentThread();
LAB_00d71648:
        if (*(long *)puVar4 == 0) goto code_r0x00d71650;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0xc2));
        do {
          if (*(long *)puVar4 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0xc2));
              while (*(long *)puVar4 == 0) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar10) {
                  *(undefined8 *)puVar4 = uVar14;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_00d71658;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar10) {
            *(undefined8 *)puVar4 = uVar14;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_00d71658:
        plVar6 = *(long **)(local_e0 + 0x3c);
        plVar7 = *(long **)(local_e0 + 0x3e);
        plVar16 = plVar6;
        if ((plVar6 != plVar7) && (*plVar6 != 0x7060a834bf10ce7f)) {
          do {
            plVar16 = plVar16 + 0xb;
            if (plVar7 == plVar16) {
              plVar16 = plVar7;
              goto LAB_00d7168c;
            }
          } while (*plVar16 != 0x7060a834bf10ce7f);
        }
LAB_00d7168c:
        if (plVar7 == plVar16) {
          local_e0[0xc0] = 0;
          local_e0[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0xc2));
          local_e8 = 0;
        }
        else {
          local_e0[0xc0] = 0;
          local_e0[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0xc2));
          local_e8 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar6) >> 3) * -0x45d1745d)
                     << 0x20 | 1;
          local_d4 = CONCAT31(local_d4._1_3_,1);
          if (*(long *)(local_e0 + 0xa2) == 0) {
            local_b0 = &local_d4;
            local_d0 = &LAB_02e658c0;
            local_c8 = FUN_02e65908;
            local_c0 = &LAB_02e6590c;
            puStack_b8 = &LAB_02e65918;
          }
          else {
            puStack_a8 = &local_d4;
            local_b0 = local_e0;
            local_a0 = &local_e8;
            local_d0 = &LAB_029e9640;
            local_c8 = FUN_02e65894;
            local_c0 = &LAB_02e65898;
            puStack_b8 = &LAB_02e658ac;
          }
          FUN_00c837c0(local_e0,local_e0 + 0x3c,&local_e8,&local_d0);
          pcVar11 = local_c8;
          if (local_c8 != (code *)0x0) {
            local_c0 = (undefined1 *)0x0;
            puStack_b8 = (undefined1 *)0x0;
            local_d0 = (undefined1 *)0x0;
            local_c8 = (code *)0x0;
            (*pcVar11)(&local_b0);
          }
        }
        lVar15 = *(long *)(local_e0 + 0xc);
        psVar3 = (short *)(lVar15 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar10) {
            *psVar3 = sVar5 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*(long *)local_e0 + 0x50))(local_e0);
        }
        else if (sVar5 == 0) goto LAB_00d71984;
      }
      *(undefined1 *)(param_1 + 0x378) = 1;
      *(undefined4 *)(param_1 + 0x37c) = 0x3dcccccd;
    }
    else {
      FUN_00d64f48(&local_e0,param_1);
      puVar4 = local_e0;
      if (local_e0 != (uint *)0x0) {
        puVar1 = local_e0 + 0x20;
        puVar2 = local_e0 + 0xc0;
        uVar14 = nn::os::GetCurrentThread();
LAB_00d70d60:
        if (*(long *)puVar2 == 0) goto code_r0x00d70d68;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
        do {
          if (*(long *)puVar2 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
              while (*(long *)puVar2 == 0) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar10) {
                  *(undefined8 *)puVar2 = uVar14;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_00d70d70;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar10) {
            *(undefined8 *)puVar2 = uVar14;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_00d70d70:
        plVar6 = *(long **)(puVar4 + 0x20);
        plVar7 = *(long **)(puVar4 + 0x22);
        plVar16 = plVar6;
        if ((plVar6 != plVar7) && (*plVar6 != 0x13ee4f04b1568f34)) {
          do {
            plVar16 = plVar16 + 0xb;
            if (plVar7 == plVar16) {
              plVar16 = plVar7;
              goto LAB_00d70da4;
            }
          } while (*plVar16 != 0x13ee4f04b1568f34);
        }
LAB_00d70da4:
        if (plVar7 == plVar16) {
          puVar4[0xc0] = 0;
          puVar4[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
          local_e8 = 0;
        }
        else {
          puVar4[0xc0] = 0;
          puVar4[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
          local_e8 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar6) >> 3) * -0x45d1745d)
                     << 0x20 | 1;
          local_d4 = 1;
          if (*(long *)(puVar4 + 0x6e) == 0) {
            local_b0 = &local_d4;
            local_d0 = &LAB_02e657b0;
            local_c8 = FUN_02e657f0;
            local_c0 = &LAB_02e657f4;
            puStack_b8 = &LAB_02e65800;
          }
          else {
            puStack_a8 = &local_d4;
            local_b0 = puVar4;
            local_a0 = &local_e8;
            local_d0 = &LAB_029e901c;
            local_c8 = FUN_02e65784;
            local_c0 = &LAB_02e65788;
            puStack_b8 = &LAB_02e6579c;
          }
          FUN_00c837c0(puVar4,puVar1,&local_e8,&local_d0);
          pcVar11 = local_c8;
          if (local_c8 != (code *)0x0) {
            local_c0 = (undefined1 *)0x0;
            puStack_b8 = (undefined1 *)0x0;
            local_d0 = (undefined1 *)0x0;
            local_c8 = (code *)0x0;
            (*pcVar11)(&local_b0);
          }
        }
        lVar15 = *(long *)(puVar4 + 0xc);
        psVar3 = (short *)(lVar15 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar10) {
            *psVar3 = sVar5 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*(long *)puVar4 + 0x50))(puVar4);
        }
        else if (sVar5 == 0) goto LAB_00d71984;
      }
      FUN_00d64f48(&local_e0,param_1);
      if (local_e0 != (uint *)0x0) {
        puVar4 = local_e0 + 0xc0;
        uVar14 = nn::os::GetCurrentThread();
LAB_00d70ef0:
        if (*(long *)puVar4 == 0) goto code_r0x00d70ef8;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0xc2));
        do {
          if (*(long *)puVar4 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0xc2));
              while (*(long *)puVar4 == 0) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar10) {
                  *(undefined8 *)puVar4 = uVar14;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_00d70f00;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar10) {
            *(undefined8 *)puVar4 = uVar14;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_00d70f00:
        plVar6 = *(long **)(local_e0 + 0x3c);
        plVar7 = *(long **)(local_e0 + 0x3e);
        plVar16 = plVar6;
        if ((plVar6 != plVar7) && (*plVar6 != 0x7060a834bf10ce7f)) {
          do {
            plVar16 = plVar16 + 0xb;
            if (plVar7 == plVar16) {
              plVar16 = plVar7;
              goto LAB_00d70f34;
            }
          } while (*plVar16 != 0x7060a834bf10ce7f);
        }
LAB_00d70f34:
        if (plVar7 == plVar16) {
          local_e0[0xc0] = 0;
          local_e0[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0xc2));
          local_e8 = 0;
        }
        else {
          local_e0[0xc0] = 0;
          local_e0[0xc1] = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0xc2));
          local_e8 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar6) >> 3) * -0x45d1745d)
                     << 0x20 | 1;
          local_d4 = local_d4 & 0xffffff00;
          if (*(long *)(local_e0 + 0xa2) == 0) {
            local_b0 = &local_d4;
            local_d0 = &LAB_02e658c0;
            local_c8 = FUN_02e65908;
            local_c0 = &LAB_02e6590c;
            puStack_b8 = &LAB_02e65918;
          }
          else {
            puStack_a8 = &local_d4;
            local_b0 = local_e0;
            local_a0 = &local_e8;
            local_d0 = &LAB_029e9640;
            local_c8 = FUN_02e65894;
            local_c0 = &LAB_02e65898;
            puStack_b8 = &LAB_02e658ac;
          }
          FUN_00c837c0(local_e0,local_e0 + 0x3c,&local_e8,&local_d0);
          pcVar11 = local_c8;
          if (local_c8 != (code *)0x0) {
            local_c0 = (undefined1 *)0x0;
            puStack_b8 = (undefined1 *)0x0;
            local_d0 = (undefined1 *)0x0;
            local_c8 = (code *)0x0;
            (*pcVar11)(&local_b0);
          }
        }
        lVar15 = *(long *)(local_e0 + 0xc);
        psVar3 = (short *)(lVar15 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar10) {
            *psVar3 = sVar5 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        goto LAB_00d7104c;
      }
    }
  }
  else {
    uVar8 = *param_2;
    FUN_00d64f48(&local_e0,param_1);
    puVar4 = local_e0;
    if (local_e0 != (uint *)0x0) {
      puVar1 = local_e0 + 0x20;
      puVar2 = local_e0 + 0xc0;
      uVar14 = nn::os::GetCurrentThread();
LAB_00d71184:
      if (*(long *)puVar2 == 0) goto code_r0x00d7118c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
            while (*(long *)puVar2 == 0) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar10) {
                *(undefined8 *)puVar2 = uVar14;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00d71194;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar10) {
          *(undefined8 *)puVar2 = uVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00d71194:
      plVar6 = *(long **)(puVar4 + 0x20);
      plVar7 = *(long **)(puVar4 + 0x22);
      plVar16 = plVar6;
      if ((plVar6 != plVar7) && (*plVar6 != 0x13ee4f04b1568f34)) {
        do {
          plVar16 = plVar16 + 0xb;
          if (plVar7 == plVar16) {
            plVar16 = plVar7;
            goto LAB_00d711d8;
          }
        } while (*plVar16 != 0x13ee4f04b1568f34);
      }
LAB_00d711d8:
      if (plVar7 == plVar16) {
        puVar4[0xc0] = 0;
        puVar4[0xc1] = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
        local_e8 = 0;
      }
      else {
        puVar4[0xc0] = 0;
        puVar4[0xc1] = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar6) >> 3) * -0x45d1745d) <<
                   0x20 | 1;
        if (*(long *)(puVar4 + 0x6e) == 0) {
          local_b0 = &local_d4;
          local_d0 = &LAB_02e657b0;
          local_c8 = FUN_02e657f0;
          local_c0 = &LAB_02e657f4;
          puStack_b8 = &LAB_02e65800;
        }
        else {
          puStack_a8 = &local_d4;
          local_b0 = puVar4;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e901c;
          local_c8 = FUN_02e65784;
          local_c0 = &LAB_02e65788;
          puStack_b8 = &LAB_02e6579c;
        }
        local_d4 = uVar8;
        FUN_00c837c0(puVar4,puVar1,&local_e8,&local_d0);
        pcVar11 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar11)(&local_b0);
        }
      }
      lVar15 = *(long *)(puVar4 + 0xc);
      psVar3 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar10) {
          *psVar3 = sVar5 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*(long *)puVar4 + 0x50))(puVar4);
      }
      else if (sVar5 == 0) goto LAB_00d71984;
    }
    FUN_00d64f48(&local_e0,param_1);
    if (local_e0 != (uint *)0x0) {
      puVar4 = local_e0 + 0xc0;
      uVar14 = nn::os::GetCurrentThread();
      while (*(long *)puVar4 == 0) {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar10) {
          *(undefined8 *)puVar4 = uVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 == '\0') goto LAB_00d71488;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0xc2));
      do {
        if (*(long *)puVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_e0 + 0xc2));
            while (*(long *)puVar4 == 0) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar10) {
                *(undefined8 *)puVar4 = uVar14;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00d71488;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar10) {
          *(undefined8 *)puVar4 = uVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00d71488:
      plVar6 = *(long **)(local_e0 + 0x3c);
      plVar7 = *(long **)(local_e0 + 0x3e);
      plVar16 = plVar6;
      if ((plVar6 != plVar7) && (*plVar6 != 0x7060a834bf10ce7f)) {
        do {
          plVar16 = plVar16 + 0xb;
          if (plVar7 == plVar16) {
            plVar16 = plVar7;
            goto LAB_00d714cc;
          }
        } while (*plVar16 != 0x7060a834bf10ce7f);
      }
LAB_00d714cc:
      if (plVar7 == plVar16) {
        local_e0[0xc0] = 0;
        local_e0[0xc1] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0xc2));
        local_e8 = 0;
      }
      else {
        local_e0[0xc0] = 0;
        local_e0[0xc1] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_e0 + 0xc2));
        local_e8 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar6) >> 3) * -0x45d1745d) <<
                   0x20 | 1;
        local_d4 = CONCAT31(local_d4._1_3_,1);
        if (*(long *)(local_e0 + 0xa2) == 0) {
          local_b0 = &local_d4;
          local_d0 = &LAB_02e658c0;
          local_c8 = FUN_02e65908;
          local_c0 = &LAB_02e6590c;
          puStack_b8 = &LAB_02e65918;
        }
        else {
          puStack_a8 = &local_d4;
          local_b0 = local_e0;
          local_a0 = &local_e8;
          local_d0 = &LAB_029e9640;
          local_c8 = FUN_02e65894;
          local_c0 = &LAB_02e65898;
          puStack_b8 = &LAB_02e658ac;
        }
        FUN_00c837c0(local_e0,local_e0 + 0x3c,&local_e8,&local_d0);
        pcVar11 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar11)(&local_b0);
        }
      }
      lVar15 = *(long *)(local_e0 + 0xc);
      psVar3 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar10) {
          *psVar3 = sVar5 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00d7104c:
      if (sVar5 != 1) {
        if (sVar5 != 0) {
          return;
        }
LAB_00d71984:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*(long *)local_e0 + 0x50))(local_e0);
    }
  }
  return;
code_r0x00d712ac:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar10) {
    *(undefined8 *)puVar2 = uVar14;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00d712b4;
  goto LAB_00d712a4;
code_r0x00d71650:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar10) {
    *(undefined8 *)puVar4 = uVar14;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00d71658;
  goto LAB_00d71648;
code_r0x00d70d68:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar10) {
    *(undefined8 *)puVar2 = uVar14;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00d70d70;
  goto LAB_00d70d60;
code_r0x00d70ef8:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar10) {
    *(undefined8 *)puVar4 = uVar14;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00d70f00;
  goto LAB_00d70ef0;
code_r0x00d7118c:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar10) {
    *(undefined8 *)puVar2 = uVar14;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00d71194;
  goto LAB_00d71184;
}


