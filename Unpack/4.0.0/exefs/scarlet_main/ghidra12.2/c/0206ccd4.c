/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0206ccd4; name: FUN_0206ccd4
 */


uint FUN_0206ccd4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined4 *param_4)

{
  short *psVar1;
  uint *puVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  code *pcVar17;
  short sVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined1 local_220 [256];
  undefined8 local_120;
  undefined8 local_118;
  ulong local_110;
  uint local_104;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  uint *local_e0;
  uint *puStack_d8;
  ulong *local_d0;
  undefined4 local_80;
  undefined4 uStack_7c;
  
  uVar21 = *(undefined8 *)(param_3 + 8);
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar8 + 0x30) = DAT_04859430;
  }
  local_120 = *(undefined8 *)(lVar8 + 0x30);
  local_118 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0x30) = uVar21;
  *(undefined2 *)(lVar8 + 0x38) = 1;
  uVar19 = *(uint *)(param_3 + 0x294);
  if (uVar19 != 0xffffffff) {
    FUN_01707fc8(param_3);
    FUN_0170835c(param_3);
    plVar11 = (long *)FUN_00d63ba4(param_3);
    lVar13 = *plVar11;
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar18 = *(short *)(lVar13 + 0x1a);
LAB_0206ce10:
      sVar4 = *psVar1;
      if (sVar4 == sVar18) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0206ce3c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0206ce3c:
        bVar7 = false;
      }
      if (!bVar7) goto code_r0x0206ce44;
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 == 0) goto LAB_0206cd7c;
      memset(local_220,0,0x100);
      FUN_00d64f48(&local_80,param_3);
      puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
      if (puVar9 == (uint *)0x0) goto LAB_0206d00c;
      puVar2 = puVar9 + 0xc0;
      uVar21 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
            while (*(long *)puVar2 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_0206ceac;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *(undefined8 *)puVar2 = uVar21;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0206ceac:
      plVar11 = *(long **)(puVar9 + 0x20);
      plVar3 = *(long **)(puVar9 + 0x22);
      plVar15 = plVar11;
      if ((plVar11 != plVar3) && (*plVar11 != -0x43f8ef6748bbc2b0)) {
        do {
          plVar15 = plVar15 + 0xb;
          if (plVar3 == plVar15) {
            plVar15 = plVar3;
            goto LAB_0206cf2c;
          }
        } while (*plVar15 != -0x43f8ef6748bbc2b0);
      }
LAB_0206cf2c:
      if (plVar3 == plVar15) {
        puVar9[0xc0] = 0;
        puVar9[0xc1] = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
        local_110 = 0;
      }
      else {
        puVar9[0xc0] = 0;
        puVar9[0xc1] = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
        local_110 = (ulong)(uint)((int)((ulong)((long)plVar15 - (long)plVar11) >> 3) * -0x45d1745d)
                    << 0x20 | 1;
        if (*(long *)(puVar9 + 0x6e) == 0) {
          local_100 = &LAB_02e657b0;
          local_f8 = FUN_02e657f0;
          local_f0 = &LAB_02e657f4;
          puStack_e8 = &LAB_02e65800;
          local_e0 = &local_104;
        }
        else {
          puStack_d8 = &local_104;
          local_d0 = &local_110;
          local_100 = &LAB_029e901c;
          local_f8 = FUN_02e65784;
          local_f0 = &LAB_02e65788;
          puStack_e8 = &LAB_02e6579c;
          local_e0 = puVar9;
        }
        local_104 = uVar19;
        FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
        pcVar17 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (undefined1 *)0x0;
          puStack_e8 = (undefined1 *)0x0;
          local_100 = (undefined1 *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar17)(&local_e0);
        }
      }
      lVar14 = *(long *)(puVar9 + 0xc);
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
      }
      else if (sVar18 == 0) goto LAB_02071034;
LAB_0206d00c:
      plVar11 = (long *)(lVar13 + -0x28);
      switch(*param_4) {
      case 1:
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206d130;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206d130:
          plVar3 = *(long **)(puVar9 + 0x3c);
          plVar15 = *(long **)(puVar9 + 0x3e);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != 0x4955b49339758aca)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206df10;
              }
            } while (*plVar16 != 0x4955b49339758aca);
          }
LAB_0206df10:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = local_104 & 0xffffff00;
            if (*(long *)(puVar9 + 0xa2) == 0) {
              local_100 = &LAB_02e658c0;
              local_f8 = FUN_02e65908;
              local_f0 = &LAB_02e6590c;
              puStack_e8 = &LAB_02e65918;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e9640;
              local_f8 = FUN_02e65894;
              local_f0 = &LAB_02e65898;
              puStack_e8 = &LAB_02e658ac;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206e024;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206e024:
          plVar3 = *(long **)(puVar9 + 0x3c);
          plVar15 = *(long **)(puVar9 + 0x3e);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != 0x1e0ac9c58ee35984)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206e7e8;
              }
            } while (*plVar16 != 0x1e0ac9c58ee35984);
          }
LAB_0206e7e8:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = local_104 & 0xffffff00;
            if (*(long *)(puVar9 + 0xa2) == 0) {
              local_100 = &LAB_02e658c0;
              local_f8 = FUN_02e65908;
              local_f0 = &LAB_02e6590c;
              puStack_e8 = &LAB_02e65918;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e9640;
              local_f8 = FUN_02e65894;
              local_f0 = &LAB_02e65898;
              puStack_e8 = &LAB_02e658ac;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        local_100 = (undefined1 *)0xdb3511ae502a979c;
        local_f8 = (code *)0x3bdb71c;
        local_f0 = (undefined1 *)0x17;
        puStack_e8 = (undefined1 *)0x0;
        puVar20 = &DAT_cbf29ce484222645;
        FUN_01e0f454(param_3,local_220,&local_100);
        (**(code **)(*plVar11 + 0xd0))(plVar11);
        local_f0 = (undefined1 *)strlen(local_220);
        if (local_220[0] != (code)0x0) {
          pcVar17 = (code *)((ulong)local_220 | 1);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3);
            local_220[0] = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (local_220[0] != (code)0x0);
        }
        break;
      case 2:
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206d1ac;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206d1ac:
          plVar3 = *(long **)(puVar9 + 0x3c);
          plVar15 = *(long **)(puVar9 + 0x3e);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != 0x4955b49339758aca)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206e0a4;
              }
            } while (*plVar16 != 0x4955b49339758aca);
          }
LAB_0206e0a4:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = CONCAT31(local_104._1_3_,1);
            if (*(long *)(puVar9 + 0xa2) == 0) {
              local_100 = &LAB_02e658c0;
              local_f8 = FUN_02e65908;
              local_f0 = &LAB_02e6590c;
              puStack_e8 = &LAB_02e65918;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e9640;
              local_f8 = FUN_02e65894;
              local_f0 = &LAB_02e65898;
              puStack_e8 = &LAB_02e658ac;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        local_100 = (undefined1 *)0xc138b1952a40927a;
        local_f8 = (code *)0x3c6a2d7;
        local_f0 = (undefined1 *)0x16;
        puStack_e8 = (undefined1 *)0x0;
        puVar20 = &DAT_cbf29ce484222645;
        FUN_01e0f454(param_3,local_220,&local_100);
        (**(code **)(*plVar11 + 0xd0))(plVar11);
        local_f0 = (undefined1 *)strlen(local_220);
        if (local_220[0] != (code)0x0) {
          pcVar17 = (code *)((ulong)local_220 | 1);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3);
            local_220[0] = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (local_220[0] != (code)0x0);
        }
        break;
      case 3:
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206d228;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206d228:
          plVar3 = *(long **)(puVar9 + 0x3c);
          plVar15 = *(long **)(puVar9 + 0x3e);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != 0x1e0ac9c58ee35984)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206e218;
              }
            } while (*plVar16 != 0x1e0ac9c58ee35984);
          }
LAB_0206e218:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = CONCAT31(local_104._1_3_,1);
            if (*(long *)(puVar9 + 0xa2) == 0) {
              local_100 = &LAB_02e658c0;
              local_f8 = FUN_02e65908;
              local_f0 = &LAB_02e6590c;
              puStack_e8 = &LAB_02e65918;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e9640;
              local_f8 = FUN_02e65894;
              local_f0 = &LAB_02e65898;
              puStack_e8 = &LAB_02e658ac;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        local_100 = (undefined1 *)0xd5598e60eec0b3cc;
        local_f8 = (code *)0x3c70eb7;
        local_f0 = (undefined1 *)0x16;
        puStack_e8 = (undefined1 *)0x0;
        puVar20 = &DAT_cbf29ce484222645;
        FUN_01e0f454(param_3,local_220,&local_100);
        (**(code **)(*plVar11 + 0xd0))(plVar11);
        local_f0 = (undefined1 *)strlen(local_220);
        if (local_220[0] != (code)0x0) {
          pcVar17 = (code *)((ulong)local_220 | 1);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3);
            local_220[0] = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (local_220[0] != (code)0x0);
        }
        break;
      case 4:
      case 9:
        uVar12 = FUN_00a935c4(param_3,0);
        if ((uVar12 & 1) == 0) {
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d42c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d42c:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x724613aa0b0313b5)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206dbe4;
                }
              } while (*plVar16 != -0x724613aa0b0313b5);
            }
LAB_0206dbe4:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 2;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206dcfc;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206dcfc:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != 0x4d98b1b60e771d7e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206e500;
                }
              } while (*plVar16 != 0x4d98b1b60e771d7e);
            }
LAB_0206e500:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0x5a69b601ed182f1a;
          local_f8 = (code *)0x3c495fa;
          local_f0 = (undefined1 *)0xf;
          puStack_e8 = (undefined1 *)0x0;
          puVar20 = &DAT_cbf29ce484222645;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
          break;
        }
        local_100 = (undefined1 *)0x5a69b601ed182f1a;
        local_f8 = (code *)0x3c495fa;
        local_f0 = (undefined1 *)0xf;
        puStack_e8 = (undefined1 *)0x0;
        uVar12 = FUN_00c738f0(param_3,&local_100,uVar19);
        if ((uVar12 & 1) == 0) {
LAB_0206d5fc:
          param_3 = 0;
          goto LAB_02070528;
        }
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206d0b4;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206d0b4:
          plVar3 = *(long **)(puVar9 + 0x20);
          plVar15 = *(long **)(puVar9 + 0x22);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != -0x724613aa0b0313b5)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206e9c4;
              }
            } while (*plVar16 != -0x724613aa0b0313b5);
          }
LAB_0206e9c4:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = 2;
            if (*(long *)(puVar9 + 0x6e) == 0) {
              local_100 = &LAB_02e657b0;
              local_f8 = FUN_02e657f0;
              local_f0 = &LAB_02e657f4;
              puStack_e8 = &LAB_02e65800;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e901c;
              local_f8 = FUN_02e65784;
              local_f0 = &LAB_02e65788;
              puStack_e8 = &LAB_02e6579c;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206eadc;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206eadc:
          plVar3 = *(long **)(puVar9 + 0x3c);
          plVar15 = *(long **)(puVar9 + 0x3e);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != 0x4d98b1b60e771d7e)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206f1bc;
              }
            } while (*plVar16 != 0x4d98b1b60e771d7e);
          }
LAB_0206f1bc:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = CONCAT31(local_104._1_3_,1);
            if (*(long *)(puVar9 + 0xa2) == 0) {
              local_100 = &LAB_02e658c0;
              local_f8 = FUN_02e65908;
              local_f0 = &LAB_02e6590c;
              puStack_e8 = &LAB_02e65918;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e9640;
              local_f8 = FUN_02e65894;
              local_f0 = &LAB_02e65898;
              puStack_e8 = &LAB_02e658ac;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        local_100 = (undefined1 *)0x5a69b601ed182f1a;
        local_f8 = (code *)0x3c495fa;
        puVar20 = &DAT_cbf29ce484222645;
        local_f0 = (undefined1 *)0xf;
        puStack_e8 = (undefined1 *)0x0;
        FUN_01e0f454(param_3,local_220,&local_100);
        (**(code **)(*plVar11 + 0xd0))(plVar11);
        local_f0 = (undefined1 *)strlen(local_220);
        if (local_220[0] != (code)0x0) {
          pcVar17 = (code *)((ulong)local_220 | 1);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3);
            local_220[0] = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (local_220[0] != (code)0x0);
        }
        break;
      case 5:
        uVar12 = FUN_00a935c4(param_3,0);
        if ((uVar12 & 1) == 0) {
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d938;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d938:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x724613aa0b0313b5)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206ee8c;
                }
              } while (*plVar16 != -0x724613aa0b0313b5);
            }
LAB_0206ee8c:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 3;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206efa4;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206efa4:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != 0x4d98b1b60e771d7e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206f600;
                }
              } while (*plVar16 != 0x4d98b1b60e771d7e);
            }
LAB_0206f600:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0x83107dba9c7957d0;
          local_f8 = (code *)0x3c84c5b;
          local_f0 = (undefined1 *)0xf;
          puStack_e8 = (undefined1 *)0x0;
          puVar20 = &DAT_cbf29ce484222645;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        else {
          local_100 = (undefined1 *)0x83107dba9c7957d0;
          local_f8 = (code *)0x3c84c5b;
          local_f0 = (undefined1 *)0xf;
          puStack_e8 = (undefined1 *)0x0;
          uVar12 = FUN_00c738f0(param_3,&local_100,uVar19);
          if ((uVar12 & 1) == 0) goto LAB_0206d5fc;
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d4f0;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d4f0:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x724613aa0b0313b5)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206fc30;
                }
              } while (*plVar16 != -0x724613aa0b0313b5);
            }
LAB_0206fc30:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 3;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206fd48;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206fd48:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != 0x4d98b1b60e771d7e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_02070230;
                }
              } while (*plVar16 != 0x4d98b1b60e771d7e);
            }
LAB_02070230:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0x83107dba9c7957d0;
          local_f8 = (code *)0x3c84c5b;
          puVar20 = &DAT_cbf29ce484222645;
          local_f0 = (undefined1 *)0xf;
          puStack_e8 = (undefined1 *)0x0;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        break;
      case 6:
        uVar12 = FUN_00a935c4(param_3,0);
        if ((uVar12 & 1) == 0) {
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d9b4;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d9b4:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3f2e63c9690744f1)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206f024;
                }
              } while (*plVar16 != -0x3f2e63c9690744f1);
            }
LAB_0206f024:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 1;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206f13c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206f13c:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3aa15713c3797e8e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206f774;
                }
              } while (*plVar16 != -0x3aa15713c3797e8e);
            }
LAB_0206f774:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0xffd9cea4dcd80c85;
          local_f8 = (code *)0x3c50329;
          local_f0 = (undefined1 *)0x15;
          puStack_e8 = (undefined1 *)0x0;
          puVar20 = &DAT_cbf29ce484222645;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        else {
          local_100 = (undefined1 *)0x8f1a6455636e1e74;
          local_f8 = (code *)0x3c5033f;
          local_f0 = (undefined1 *)0x10;
          puStack_e8 = (undefined1 *)0x0;
          uVar12 = FUN_00c738f0(param_3,&local_100,uVar19);
          if ((uVar12 & 1) == 0) goto LAB_0206d5fc;
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d5b4;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d5b4:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3f2e63c9690744f1)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206fdc8;
                }
              } while (*plVar16 != -0x3f2e63c9690744f1);
            }
LAB_0206fdc8:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 1;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206fee0;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206fee0:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3aa15713c3797e8e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0207038c;
                }
              } while (*plVar16 != -0x3aa15713c3797e8e);
            }
LAB_0207038c:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0xffd9cea4dcd80c85;
          local_f8 = (code *)0x3c50329;
          local_f0 = (undefined1 *)0x15;
          puStack_e8 = (undefined1 *)0x0;
          puVar20 = &DAT_cbf29ce484222645;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        break;
      case 7:
        uVar12 = FUN_00a935c4(param_3,1);
        if ((uVar12 & 1) == 0) {
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d840;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d840:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x724613aa0b0313b5)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206eb5c;
                }
              } while (*plVar16 != -0x724613aa0b0313b5);
            }
LAB_0206eb5c:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 1;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206ec74;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206ec74:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != 0x4d98b1b60e771d7e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206f318;
                }
              } while (*plVar16 != 0x4d98b1b60e771d7e);
            }
LAB_0206f318:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0x6f4cde6416ffe156;
          local_f8 = (code *)0x3c70e94;
          local_f0 = (undefined1 *)0x11;
          puStack_e8 = (undefined1 *)0x0;
          puVar20 = &DAT_cbf29ce484222645;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        else {
          local_100 = (undefined1 *)0x6f4cde6416ffe156;
          local_f8 = (code *)0x3c70e94;
          local_f0 = (undefined1 *)0x11;
          puStack_e8 = (undefined1 *)0x0;
          uVar12 = FUN_00c738f0(param_3,&local_100,uVar19);
          if ((uVar12 & 1) == 0) goto LAB_0206d5fc;
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d2ec;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d2ec:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x724613aa0b0313b5)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206f900;
                }
              } while (*plVar16 != -0x724613aa0b0313b5);
            }
LAB_0206f900:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 1;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206fa18;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206fa18:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != 0x4d98b1b60e771d7e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206ff60;
                }
              } while (*plVar16 != 0x4d98b1b60e771d7e);
            }
LAB_0206ff60:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0x6f4cde6416ffe156;
          local_f8 = (code *)0x3c70e94;
          puVar20 = &DAT_cbf29ce484222645;
          local_f0 = (undefined1 *)0x11;
          puStack_e8 = (undefined1 *)0x0;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        break;
      case 8:
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206d638;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206d638:
          plVar3 = *(long **)(puVar9 + 0x3c);
          plVar15 = *(long **)(puVar9 + 0x3e);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != -0x5ab50790c5f4fee3)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206e38c;
              }
            } while (*plVar16 != -0x5ab50790c5f4fee3);
          }
LAB_0206e38c:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = CONCAT31(local_104._1_3_,1);
            if (*(long *)(puVar9 + 0xa2) == 0) {
              local_100 = &LAB_02e658c0;
              local_f8 = FUN_02e65908;
              local_f0 = &LAB_02e6590c;
              puStack_e8 = &LAB_02e65918;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e9640;
              local_f8 = FUN_02e65894;
              local_f0 = &LAB_02e65898;
              puStack_e8 = &LAB_02e658ac;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        local_100 = (undefined1 *)0x764d6844e4a09e7;
        local_f8 = (code *)0x3c03aff;
        local_f0 = (undefined1 *)0x17;
        puStack_e8 = (undefined1 *)0x0;
        puVar20 = &DAT_cbf29ce484222645;
        FUN_01e0f454(param_3,local_220,&local_100);
        (**(code **)(*plVar11 + 0xd0))(plVar11);
        local_f0 = (undefined1 *)strlen(local_220);
        if (local_220[0] != (code)0x0) {
          pcVar17 = (code *)((ulong)local_220 | 1);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3);
            local_220[0] = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (local_220[0] != (code)0x0);
        }
        break;
      case 10:
        uVar12 = FUN_00a935c4(param_3,0);
        if ((uVar12 & 1) == 0) {
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d8bc;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d8bc:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3f2e63c9690744f1)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206ecf4;
                }
              } while (*plVar16 != -0x3f2e63c9690744f1);
            }
LAB_0206ecf4:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 2;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206ee0c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206ee0c:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3aa15713c3797e8e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206f48c;
                }
              } while (*plVar16 != -0x3aa15713c3797e8e);
            }
LAB_0206f48c:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0x986fefcd946ea0e9;
          local_f8 = (code *)0x3c03b17;
          local_f0 = (undefined1 *)0x15;
          puStack_e8 = (undefined1 *)0x0;
          puVar20 = &DAT_cbf29ce484222645;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        else {
          local_100 = (undefined1 *)0x6d21cee2c1a4ab20;
          local_f8 = (code *)0x3c63b7a;
          local_f0 = (undefined1 *)0x14;
          puStack_e8 = (undefined1 *)0x0;
          uVar12 = FUN_00c738f0(param_3,&local_100,uVar19);
          if ((uVar12 & 1) == 0) goto LAB_0206d5fc;
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206d3b0;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206d3b0:
            plVar3 = *(long **)(puVar9 + 0x20);
            plVar15 = *(long **)(puVar9 + 0x22);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3f2e63c9690744f1)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_0206fa98;
                }
              } while (*plVar16 != -0x3f2e63c9690744f1);
            }
LAB_0206fa98:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = 2;
              if (*(long *)(puVar9 + 0x6e) == 0) {
                local_100 = &LAB_02e657b0;
                local_f8 = FUN_02e657f0;
                local_f0 = &LAB_02e657f4;
                puStack_e8 = &LAB_02e65800;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e901c;
                local_f8 = FUN_02e65784;
                local_f0 = &LAB_02e65788;
                puStack_e8 = &LAB_02e6579c;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          FUN_00d64f48(&local_80,param_3);
          puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
          if (puVar9 != (uint *)0x0) {
            puVar2 = puVar9 + 0xc0;
            uVar21 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                  while (*(long *)puVar2 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar7) {
                      *(undefined8 *)puVar2 = uVar21;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0206fbb0;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar21;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0206fbb0:
            plVar3 = *(long **)(puVar9 + 0x3c);
            plVar15 = *(long **)(puVar9 + 0x3e);
            plVar16 = plVar3;
            if ((plVar3 != plVar15) && (*plVar3 != -0x3aa15713c3797e8e)) {
              do {
                plVar16 = plVar16 + 0xb;
                if (plVar15 == plVar16) {
                  plVar16 = plVar15;
                  goto LAB_020700bc;
                }
              } while (*plVar16 != -0x3aa15713c3797e8e);
            }
LAB_020700bc:
            if (plVar15 == plVar16) {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = 0;
            }
            else {
              puVar9[0xc0] = 0;
              puVar9[0xc1] = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
              local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                       -0x45d1745d) << 0x20 | 1;
              local_104 = CONCAT31(local_104._1_3_,1);
              if (*(long *)(puVar9 + 0xa2) == 0) {
                local_100 = &LAB_02e658c0;
                local_f8 = FUN_02e65908;
                local_f0 = &LAB_02e6590c;
                puStack_e8 = &LAB_02e65918;
                local_e0 = &local_104;
              }
              else {
                puStack_d8 = &local_104;
                local_d0 = &local_110;
                local_100 = &LAB_029e9640;
                local_f8 = FUN_02e65894;
                local_f0 = &LAB_02e65898;
                puStack_e8 = &LAB_02e658ac;
                local_e0 = puVar9;
              }
              FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
              pcVar17 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (undefined1 *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar17)(&local_e0);
              }
            }
            lVar14 = *(long *)(puVar9 + 0xc);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
            }
            else if (sVar18 == 0) goto LAB_02071034;
          }
          local_100 = (undefined1 *)0x986fefcd946ea0e9;
          local_f8 = (code *)0x3c03b17;
          local_f0 = (undefined1 *)0x15;
          puStack_e8 = (undefined1 *)0x0;
          puVar20 = &DAT_cbf29ce484222645;
          FUN_01e0f454(param_3,local_220,&local_100);
          (**(code **)(*plVar11 + 0xd0))(plVar11);
          local_f0 = (undefined1 *)strlen(local_220);
          if (local_220[0] != (code)0x0) {
            pcVar17 = (code *)((ulong)local_220 | 1);
            do {
              puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3)
              ;
              local_220[0] = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (local_220[0] != (code)0x0);
          }
        }
        break;
      case 0xb:
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206d6b4;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206d6b4:
          plVar3 = *(long **)(puVar9 + 0x20);
          plVar15 = *(long **)(puVar9 + 0x22);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != 0x13ee4f04b1568f34)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206dd7c;
              }
            } while (*plVar16 != 0x13ee4f04b1568f34);
          }
LAB_0206dd7c:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = 0;
            if (*(long *)(puVar9 + 0x6e) == 0) {
              local_100 = &LAB_02e657b0;
              local_f8 = FUN_02e657f0;
              local_f0 = &LAB_02e657f4;
              puStack_e8 = &LAB_02e65800;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e901c;
              local_f8 = FUN_02e65784;
              local_f0 = &LAB_02e65788;
              puStack_e8 = &LAB_02e6579c;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x20,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        FUN_00d64f48(&local_80,param_3);
        puVar9 = (uint *)CONCAT44(uStack_7c,local_80);
        if (puVar9 != (uint *)0x0) {
          puVar2 = puVar9 + 0xc0;
          uVar21 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar2 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
                while (*(long *)puVar2 == 0) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar2 = uVar21;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0206de90;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *(undefined8 *)puVar2 = uVar21;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0206de90:
          plVar3 = *(long **)(puVar9 + 0x3c);
          plVar15 = *(long **)(puVar9 + 0x3e);
          plVar16 = plVar3;
          if ((plVar3 != plVar15) && (*plVar3 != 0x7060a834bf10ce7f)) {
            do {
              plVar16 = plVar16 + 0xb;
              if (plVar15 == plVar16) {
                plVar16 = plVar15;
                goto LAB_0206e674;
              }
            } while (*plVar16 != 0x7060a834bf10ce7f);
          }
LAB_0206e674:
          if (plVar15 == plVar16) {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = 0;
          }
          else {
            puVar9[0xc0] = 0;
            puVar9[0xc1] = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
            local_110 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar3) >> 3) *
                                     -0x45d1745d) << 0x20 | 1;
            local_104 = CONCAT31(local_104._1_3_,1);
            if (*(long *)(puVar9 + 0xa2) == 0) {
              local_100 = &LAB_02e658c0;
              local_f8 = FUN_02e65908;
              local_f0 = &LAB_02e6590c;
              puStack_e8 = &LAB_02e65918;
              local_e0 = &local_104;
            }
            else {
              puStack_d8 = &local_104;
              local_d0 = &local_110;
              local_100 = &LAB_029e9640;
              local_f8 = FUN_02e65894;
              local_f0 = &LAB_02e65898;
              puStack_e8 = &LAB_02e658ac;
              local_e0 = puVar9;
            }
            FUN_00c837c0(puVar9,puVar9 + 0x3c,&local_110,&local_100);
            pcVar17 = local_f8;
            if (local_f8 != (code *)0x0) {
              local_f0 = (undefined1 *)0x0;
              puStack_e8 = (undefined1 *)0x0;
              local_100 = (undefined1 *)0x0;
              local_f8 = (code *)0x0;
              (*pcVar17)(&local_e0);
            }
          }
          lVar14 = *(long *)(puVar9 + 0xc);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
          }
          else if (sVar18 == 0) goto LAB_02071034;
        }
        local_100 = (undefined1 *)0x6b64b02311507459;
        local_f8 = (code *)0x3c3ba81;
        local_f0 = (undefined1 *)0x10;
        puStack_e8 = (undefined1 *)0x0;
        puVar20 = &DAT_cbf29ce484222645;
        FUN_01e0f454(param_3,local_220,&local_100);
        (**(code **)(*plVar11 + 0xd0))(plVar11);
        local_f0 = (undefined1 *)strlen(local_220);
        if (local_220[0] != (code)0x0) {
          pcVar17 = (code *)((ulong)local_220 | 1);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)(byte)local_220[0]) * 0x100000001b3);
            local_220[0] = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (local_220[0] != (code)0x0);
        }
        break;
      default:
        bVar7 = true;
        goto LAB_0207052c;
      }
      local_f8 = (code *)local_220;
      puStack_e8 = (undefined1 *)0x0;
      uStack_7c = 0;
      local_80 = CONCAT31(local_80._1_3_,1);
      local_100 = puVar20;
      param_3 = FUN_017e03dc(param_1,param_2,plVar11,&local_100,&local_80);
      param_3 = param_3 & 0xffffffff;
LAB_02070528:
      bVar7 = false;
LAB_0207052c:
      uVar19 = (uint)param_3;
      lVar13 = *(long *)(lVar13 + 8);
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar18 == 0) {
LAB_02071034:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if (!bVar7) goto LAB_0206cd80;
    }
  }
LAB_0206cd7c:
  uVar19 = 0;
LAB_0206cd80:
  *(undefined8 *)(lVar8 + 0x30) = local_120;
  *(undefined2 *)(lVar8 + 0x38) = (undefined2)local_118;
  return uVar19 & 1;
code_r0x0206ce44:
  sVar18 = sVar4;
  if (sVar4 == 0) goto LAB_0206cd7c;
  goto LAB_0206ce10;
}


