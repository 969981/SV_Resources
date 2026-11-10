/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01003b00; name: FUN_01003b00
 */


/* WARNING: Removing unreachable block (ram,0x010041a0) */

void FUN_01003b00(long *param_1,ulong *param_2,long *param_3,long *param_4,ulong param_5)

{
  undefined8 *puVar1;
  LightEventType *pLVar2;
  LightEventType *pLVar3;
  short *psVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  short sVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined6 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  LightEventType *pLVar20;
  LightEventType *pLVar21;
  long lVar22;
  void *pvVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  long *plVar33;
  float *pfVar34;
  bool bVar35;
  ulong uVar36;
  short sVar37;
  undefined8 *puVar38;
  long lVar39;
  long *plVar40;
  bool bVar41;
  bool bVar42;
  long *plVar43;
  ulong *puVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 *puVar47;
  ulong *puVar48;
  long *plVar49;
  long lVar50;
  long *plVar51;
  long *plVar52;
  ulong uVar53;
  long *plVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float fVar57;
  long local_298;
  long *local_290;
  long *local_278;
  long *local_250;
  char local_22c;
  long local_228;
  undefined1 local_220;
  undefined6 uStack_21f;
  undefined1 uStack_219;
  undefined1 local_218;
  undefined6 uStack_217;
  undefined1 uStack_211;
  undefined7 local_210;
  undefined1 uStack_209;
  long *local_208;
  ulong *local_200;
  long *local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [32];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_130;
  undefined2 local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  long *local_e8;
  ulong *puStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 *local_b0;
  char local_a8;
  long *local_a0;
  ulong *puStack_98;
  ulong *local_90;
  long *local_88;
  undefined8 *puStack_80;
  undefined8 local_68;
  
  if ((param_5 & 1) == 0) {
    plVar54 = param_1 + 0xdb;
    lVar39 = *plVar54;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 == lVar39) {
      plVar54 = (long *)0x0;
      bVar41 = true;
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar54 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
            while (*plVar54 == 0) {
              cVar11 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(plVar54,0x10);
              if (bVar41) {
                *plVar54 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_01003ba4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar41 = (bool)ExclusiveMonitorPass(plVar54,0x10);
        if (bVar41) {
          *plVar54 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_01003ba4:
      bVar41 = false;
    }
    lVar25 = 0;
    if ((long *)*param_3 != (long *)0x0) {
      lVar25 = *(long *)*param_3;
    }
    plVar40 = (long *)param_1[0xde];
    lVar39 = param_1[0xe5];
    plVar33 = plVar40 + lVar39 * 2;
    if ((lVar39 == 0) || (*plVar40 == lVar25)) {
      plVar30 = plVar40;
    }
    else {
      lVar50 = lVar39 * 0x10;
      plVar51 = plVar40;
      do {
        lVar50 = lVar50 + -0x10;
        if (lVar50 == 0) {
          plVar30 = plVar33;
          break;
        }
        plVar30 = plVar51 + 2;
        plVar43 = plVar51 + 2;
        plVar51 = plVar30;
      } while (*plVar43 != lVar25);
    }
    if (plVar33 == plVar30) {
      if (lVar39 == param_1[0xdf] - (long)plVar40 >> 4) {
        local_220 = (undefined1)lVar25;
        uStack_21f = (undefined6)((ulong)lVar25 >> 8);
        uStack_219 = (undefined1)((ulong)lVar25 >> 0x38);
        uVar53 = *param_2;
        local_218 = (undefined1)uVar53;
        uStack_217 = (undefined6)(uVar53 >> 8);
        uStack_211 = (undefined1)(uVar53 >> 0x38);
        FUN_0103c76c(param_1 + 0xde,&local_220);
      }
      else {
        uVar53 = *param_2;
        *plVar33 = lVar25;
        plVar33[1] = uVar53;
      }
      param_1[0xe5] = param_1[0xe5] + 1;
    }
    if (!bVar41) {
      *plVar54 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar54 + 1));
    }
    plVar54 = (long *)0x0;
    uVar53 = 0;
    plVar33 = (long *)0x0;
    bVar41 = true;
LAB_0100402c:
    plVar40 = param_1 + 0x129;
    lVar39 = *plVar40;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 == lVar39) {
      plVar40 = (long *)0x0;
      bVar42 = true;
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar40 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x12a));
            while (*plVar40 == 0) {
              cVar11 = '\x01';
              bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar42) {
                *plVar40 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_0100408c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_0100408c:
      bVar42 = false;
    }
    if ((long *)*param_4 == (long *)0x0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *(long *)*param_4;
    }
    plVar51 = (long *)param_1[300];
    lVar39 = param_1[0x133];
    plVar30 = plVar51;
    if ((lVar39 != 0) && (*plVar51 != lVar25)) {
      lVar50 = lVar39 * 0x10;
      plVar43 = plVar51;
      do {
        lVar50 = lVar50 + -0x10;
        if (lVar50 == 0) {
          plVar30 = plVar51 + lVar39 * 2;
          goto LAB_010040ac;
        }
        plVar30 = plVar43 + 2;
        plVar19 = plVar43 + 2;
        plVar43 = plVar30;
      } while (*plVar19 != lVar25);
    }
LAB_010040ac:
    if (plVar51 + lVar39 * 2 == plVar30) {
      if (!bVar42) {
        *plVar40 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar40 + 1));
      }
      plVar40 = param_1 + 0xa6;
      lVar25 = nn::os::GetCurrentThread();
      do {
        lVar39 = *plVar40;
        lVar50 = param_1[0xa7];
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = lVar39;
          param_1[0xa7] = lVar50;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      pLVar20 = (LightEventType *)(param_1 + 0xa8);
LAB_0100416c:
      while ((lVar39 != 0 && (lVar25 != lVar39))) {
        nn::os::WaitLightEvent(pLVar20);
        do {
          lVar39 = *plVar40;
          lVar50 = param_1[0xa7];
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar42) {
            *plVar40 = lVar39;
            param_1[0xa7] = lVar50;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      do {
        if (*plVar40 != lVar39 || param_1[0xa7] != lVar50) goto LAB_010041a4;
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = lVar39;
          *(long *)((long)param_1 + 0x534) = lVar50 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if ((char)param_1[0xaa] == '\0') goto LAB_0100421c;
      *param_2 = 0xfffffffffffffffe;
      do {
        lVar25 = *plVar40;
        lVar39 = param_1[0xa7];
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = lVar25;
          param_1[0xa7] = lVar39;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      do {
        lVar50 = *plVar40;
        lVar31 = param_1[0xa7];
        if (lVar50 != lVar25 || lVar31 != lVar39) {
          bVar42 = false;
          ClearExclusiveLocal();
          goto joined_r0x01004518;
        }
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = lVar25;
          *(long *)((long)param_1 + 0x534) = lVar39 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar42 = true;
joined_r0x01004518:
      if (!bVar42) {
        do {
          lVar25 = *plVar40;
          lVar39 = param_1[0xa7];
          if (lVar25 != lVar50 || lVar39 != lVar31) {
            bVar42 = false;
            ClearExclusiveLocal();
            lVar50 = lVar25;
            lVar31 = lVar39;
            goto joined_r0x01004518;
          }
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar42) {
            *plVar40 = lVar50;
            *(long *)((long)param_1 + 0x534) = lVar31 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        bVar42 = true;
        lVar50 = lVar25;
        lVar31 = lVar39;
        goto joined_r0x01004518;
      }
      nn::os::SignalLightEvent(pLVar20);
      local_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      local_e8 = param_1;
      puStack_e0 = param_2;
      FUN_00dbefa4(&local_d8,param_4);
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      FUN_00f34110(&local_c8,param_3);
      FUN_00f338dc(&local_b8,param_1);
      plVar30 = local_b8;
      plVar40 = local_b8 + 0x33;
      fVar55 = *(float *)(param_1 + 0xa4);
      lVar39 = *plVar40;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 == lVar39) {
        plVar40 = (long *)0x0;
        bVar42 = true;
      }
      else {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*plVar40 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x34));
              while (*plVar40 == 0) {
                cVar11 = '\x01';
                bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
                if (bVar42) {
                  *plVar40 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_01004598;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar42) {
            *plVar40 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_01004598:
        bVar42 = false;
      }
      lVar50 = *plVar30;
      plVar51 = (long *)(lVar50 + 0x30);
      lVar39 = *plVar51;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 != lVar39) {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*plVar51 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x38));
              while (*plVar51 == 0) {
                cVar11 = '\x01';
                bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                if (bVar35) {
                  *plVar51 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_010045d4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar35) {
            *plVar51 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_010045d4:
        lVar25 = *(long *)(lVar50 + 0x1f8);
        if (lVar25 == 0) {
          local_a0 = *(long **)(lVar50 + 8);
          FUN_0103caf0(&local_220,local_a0,&local_a0);
          uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          lVar25 = *(long *)(lVar50 + 0x1f8);
          *(undefined8 *)(lVar50 + 0x1f8) = uVar27;
          if (lVar25 == 0) {
            *(long **)(lVar50 + 0x210) = local_208;
            *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
            *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
          }
          else {
            FUN_0103e9d8(lVar50 + 0x200);
            lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            *(long **)(lVar50 + 0x210) = local_208;
            *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
            *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
            if (lVar25 != 0) {
              FUN_0103e9d8(&local_218);
            }
          }
          lVar25 = *(long *)(lVar50 + 0x1f8);
        }
        local_a0 = (long *)CONCAT44(local_a0._4_4_,fVar55);
        uVar26 = FUN_02deb734(lVar25 + 8,&local_e8);
        local_220 = (undefined1)uVar26;
        uVar13 = local_220;
        uStack_21f = (undefined6)(uVar26 >> 8);
        uVar14 = uStack_21f;
        uStack_219 = (undefined1)(uVar26 >> 0x38);
        uVar15 = uStack_219;
        plVar51 = (long *)(lVar25 + 0xc0);
        lVar39 = *plVar51;
        lVar31 = *(long *)(lVar25 + 200) - lVar39 >> 3;
        uVar36 = lVar31 * -0x5555555555555555;
        if (uVar36 <= uVar26) {
          uVar45 = uVar26 + 1;
          lVar31 = uVar45 + lVar31 * 0x5555555555555555;
          if (uVar45 < uVar36 || lVar31 == 0) {
            if (uVar45 < uVar36) {
              *(ulong *)(lVar25 + 200) = lVar39 + uVar45 * 0x18;
            }
          }
          else {
            FUN_00e93f30(plVar51,lVar31);
            lVar39 = *plVar51;
          }
        }
        *(undefined1 *)(lVar39 + uVar26 * 0x18) = 0;
        *(undefined8 *)(*(long *)(lVar25 + 0xc0) + uVar26 * 0x18 + 8) = 1;
        uVar16 = local_a0._0_4_;
        *(undefined4 *)(*(long *)(lVar25 + 0xc0) + uVar26 * 0x18 + 0x10) = local_a0._0_4_;
        uVar45 = *(ulong *)(lVar25 + 0x130);
        uVar36 = uVar45 + 1;
        plVar51 = (long *)(lVar25 + 0xf8);
        *(ulong *)(lVar25 + 0x130) = uVar36;
        if (uVar45 == 0) {
          if (*(long *)(lVar25 + 0x100) - (long)*(ulong **)(lVar25 + 0xf8) >> 4 == 0)
          goto LAB_01004d84;
          **(ulong **)(lVar25 + 0xf8) = uVar26;
          lVar25 = *plVar51;
LAB_01005518:
          *(undefined4 *)(lVar25 + 8) = local_a0._0_4_;
        }
        else {
          pvVar23 = *(void **)(lVar25 + 0xf8);
          uVar32 = *(long *)(lVar25 + 0x100) - (long)pvVar23 >> 4;
          if (*(float *)((long)pvVar23 + (uVar45 - 1) * 0x10 + 8) <= fVar55) {
            if (uVar36 <= uVar32) {
              *(ulong *)((long)pvVar23 + uVar45 * 0x10) = uVar26;
              lVar25 = *plVar51 + uVar45 * 0x10;
              goto LAB_01005518;
            }
LAB_01004d84:
            FUN_0103e0a0(plVar51,&local_220,&local_a0);
          }
          else {
            if (uVar32 <= uVar36 && uVar36 - uVar32 != 0) {
              FUN_0103e51c(plVar51,uVar36 - uVar32);
              pvVar23 = (void *)*plVar51;
            }
            if (*(float *)((long)pvVar23 + 8) <= fVar55) {
              uVar17 = uVar45 - 1;
              uVar32 = uVar45 - 2;
              uVar36 = 1;
              while (uVar46 = uVar17, 2 < uVar32) {
                uVar6 = uVar36 + (long)((float)uVar32 * 0.5);
                uVar17 = uVar6;
                uVar32 = (long)((float)uVar32 * 0.5);
                if (*(float *)((long)pvVar23 + uVar6 * 0x10 + 8) <= fVar55) {
                  uVar17 = uVar46;
                  uVar32 = uVar46 - uVar6;
                  uVar36 = uVar6;
                }
              }
              if (uVar46 <= uVar45 && uVar36 <= uVar46) {
                pfVar34 = (float *)((long)pvVar23 + uVar46 * 0x10 + 8);
                while (fVar55 < *pfVar34) {
                  uVar46 = uVar46 - 1;
                  if ((uVar46 < uVar36) || (pfVar34 = pfVar34 + -4, uVar45 < uVar46))
                  goto LAB_01005524;
                }
                uVar46 = uVar46 + 1;
              }
LAB_01005524:
              if (uVar46 <= uVar45 && uVar36 <= uVar46) {
                uVar36 = uVar46;
              }
              pvVar23 = (void *)((long)pvVar23 + uVar36 * 0x10);
              memmove((void *)((long)pvVar23 + 0x10),pvVar23,(uVar45 - uVar36) * 0x10);
              *(ulong *)(*plVar51 + uVar36 * 0x10) = uVar26;
              lVar25 = *plVar51 + uVar36 * 0x10;
            }
            else {
              memmove((void *)((long)pvVar23 + 0x10),pvVar23,uVar45 << 4);
              *(ulong *)*plVar51 = uVar26;
              lVar25 = *plVar51;
            }
            *(undefined4 *)(lVar25 + 8) = uVar16;
          }
        }
        local_220 = 3;
        uStack_21f = 0;
        uStack_219 = 0;
LAB_01005570:
        lVar25 = *(long *)(lVar50 + 0x160) - *(long *)(lVar50 + 0x158);
        local_218 = uVar13;
        uStack_217 = uVar14;
        uStack_211 = uVar15;
        if (lVar25 != 0) goto code_r0x0100557c;
        uVar36 = *(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4;
        FUN_0103b268(lVar50 + 0xe8,&local_220);
LAB_010055f4:
        *(ulong *)(lVar50 + 400) = uVar36 + 1;
        goto LAB_010055fc;
      }
      if (*(long *)(lVar50 + 0x1f8) == 0) {
        local_a0 = *(long **)(lVar50 + 8);
        FUN_0103caf0(&local_220,local_a0,&local_a0);
        uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
        local_220 = 0;
        uStack_21f = 0;
        uStack_219 = 0;
        lVar25 = *(long *)(lVar50 + 0x1f8);
        *(undefined8 *)(lVar50 + 0x1f8) = uVar27;
        if (lVar25 == 0) {
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
        }
        else {
          FUN_0103e9d8(lVar50 + 0x200);
          lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          if (lVar25 != 0) {
            FUN_0103e9d8(&local_218);
          }
        }
      }
      local_220 = 3;
      uStack_21f = 0xffffff000000;
      uStack_219 = 0xff;
      uVar36 = FUN_0103b2e0(lVar50 + 0xe8,&local_220);
      plVar51 = (long *)(lVar50 + 0x48);
      lVar39 = *plVar51;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 == lVar39) {
        plVar51 = (long *)0x0;
        bVar35 = true;
      }
      else {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*plVar51 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x50));
              while (*plVar51 == 0) {
                cVar11 = '\x01';
                bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                if (bVar35) {
                  *plVar51 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_01004dc8;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar35) {
            *plVar51 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_01004dc8:
        bVar35 = false;
      }
      local_1f0 = 0;
      local_220 = (undefined1)lVar50;
      uStack_21f = (undefined6)((ulong)lVar50 >> 8);
      uStack_219 = (undefined1)((ulong)lVar50 >> 0x38);
      local_218 = (undefined1)uVar36;
      uStack_217 = (undefined6)(uVar36 >> 8);
      uStack_211 = (undefined1)(uVar36 >> 0x38);
      local_210 = (undefined7)lVar50;
      local_208 = local_e8;
      local_200 = puStack_e0;
      local_1f8 = (long *)0x0;
      uStack_209 = uStack_219;
      FUN_00dbefa4(&local_1f8,&local_d8);
      local_1e8 = (long *)0x0;
      local_1e0 = 0;
      FUN_00f34110(&local_1e8,&local_c8);
      local_1d8 = CONCAT44(local_1d8._4_4_,fVar55);
      local_1d0 = 1;
      uVar26 = *(ulong *)(lVar50 + 0x68);
      if (uVar26 < *(ulong *)(lVar50 + 0x70)) {
        FUN_02dea7f8(*(undefined8 *)(lVar50 + 0x78),uVar26,&local_220);
        *(ulong *)(lVar50 + 0x68) = uVar26 + 0x100;
      }
      else {
        puVar29 = (undefined8 *)(lVar50 + 0x78);
        lVar31 = FUN_0103b290(lVar50 + 0x60,((long)(uVar26 - *(long *)(lVar50 + 0x60)) >> 8) + 1);
        lVar25 = *(long *)(lVar50 + 0x60);
        lVar39 = *(long *)(lVar50 + 0x68);
        local_88 = (long *)0x0;
        puStack_80 = puVar29;
        if (lVar31 == 0) {
          plVar43 = (long *)0x0;
        }
        else {
          plVar43 = (long *)(**(code **)(*(long *)*puVar29 + 0x10))
                                      ((long *)*puVar29,lVar31 << 8,0x10);
          if (plVar43 == (long *)0x0) {
            (**(code **)(*(long *)*puVar29 + 0xe8))();
          }
        }
        puVar44 = (ulong *)((long)plVar43 + (lVar39 - lVar25));
        local_88 = plVar43 + lVar31 * 0x20;
        local_a0 = plVar43;
        puStack_98 = puVar44;
        FUN_02dea7f8(*puVar29,puVar44,&local_220);
        local_90 = puVar44 + 0x20;
        FUN_0103b38c(lVar50 + 0x60,&local_a0);
        FUN_0103bbd0(&local_a0);
      }
      plVar43 = local_1e8;
      if (local_1e8 != (long *)0x0) {
        plVar19 = local_1e8 + 3;
        do {
          sVar37 = (short)*plVar19;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(short *)plVar19 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 == 1) {
          piVar5 = (int *)((long)local_1e8 + 0x1c);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar12) {
              *piVar5 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_a0 = (long *)*plVar43;
            FUN_00c44438(lVar25 + 0x8040,&local_a0);
          }
        }
        else if (sVar37 == 0) goto LAB_010092d4;
      }
      plVar43 = local_1f8;
      if (local_1f8 != (long *)0x0) {
        plVar19 = local_1f8 + 3;
        do {
          sVar37 = (short)*plVar19;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(short *)plVar19 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 == 1) {
          piVar5 = (int *)((long)local_1f8 + 0x1c);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar12) {
              *piVar5 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_a0 = (long *)*plVar43;
            FUN_00c44438(lVar25 + 0x8040,&local_a0);
          }
        }
        else if (sVar37 == 0) goto LAB_010092d4;
      }
      if (!bVar35) {
        *plVar51 = 0;
        pLVar20 = (LightEventType *)(plVar51 + 1);
        goto LAB_010057a0;
      }
LAB_010057a4:
      local_220 = (undefined1)uVar36;
      uStack_21f = (undefined6)(uVar36 >> 8);
      uStack_219 = (undefined1)(uVar36 >> 0x38);
      FUN_0103bd9c(plVar30 + 0x36,&local_220);
      if (!bVar42) {
        *plVar40 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar40 + 1));
      }
      *(float *)(param_1 + 0xa4) = fVar55 + 0.01;
      if (local_a8 != '\0') {
        *local_b0 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_b0 + 1));
      }
      puVar29 = local_c8;
      if (local_c8 != (undefined8 *)0x0) {
        psVar4 = (short *)(local_c8 + 3);
        do {
          sVar37 = *psVar4;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar42) {
            *psVar4 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 == 1) {
          piVar5 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar42) {
              *piVar5 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            uVar27 = *puVar29;
            local_220 = (undefined1)uVar27;
            uStack_21f = (undefined6)((ulong)uVar27 >> 8);
            uStack_219 = (undefined1)((ulong)uVar27 >> 0x38);
            FUN_00c44438(lVar25 + 0x8040,&local_220);
          }
        }
        else if (sVar37 == 0) goto LAB_010092d4;
      }
      if (local_d8 != (undefined8 *)0x0) {
        psVar4 = (short *)(local_d8 + 3);
        do {
          sVar37 = *psVar4;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar42) {
            *psVar4 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 != 1) goto LAB_010063c0;
        piVar5 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar42) {
            *piVar5 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        goto LAB_010069dc;
      }
      goto LAB_010063c4;
    }
    *param_2 = 0xfffffffffffffffe;
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    local_e8 = param_1;
    puStack_e0 = param_2;
    FUN_00dbefa4(&local_d8,param_4);
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    FUN_00f34110(&local_c8,param_3);
    FUN_00f338dc(&local_b8,param_1);
    plVar51 = local_b8;
    plVar30 = local_b8 + 0x33;
    fVar55 = *(float *)(param_1 + 0xa4);
    lVar39 = *plVar30;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 == lVar39) {
      plVar30 = (long *)0x0;
      bVar35 = true;
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar30 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar51 + 0x34));
            while (*plVar30 == 0) {
              cVar11 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar35) {
                *plVar30 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_01004284;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar35 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar35) {
          *plVar30 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_01004284:
      bVar35 = false;
    }
    lVar50 = *plVar51;
    plVar43 = (long *)(lVar50 + 0x30);
    lVar39 = *plVar43;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 == lVar39) {
      if (*(long *)(lVar50 + 0x1f8) == 0) {
        local_a0 = *(long **)(lVar50 + 8);
        FUN_0103caf0(&local_220,local_a0,&local_a0);
        uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
        local_220 = 0;
        uStack_21f = 0;
        uStack_219 = 0;
        lVar25 = *(long *)(lVar50 + 0x1f8);
        *(undefined8 *)(lVar50 + 0x1f8) = uVar27;
        if (lVar25 == 0) {
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
        }
        else {
          FUN_0103e9d8(lVar50 + 0x200);
          lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          if (lVar25 != 0) {
            FUN_0103e9d8(&local_218);
          }
        }
      }
      local_220 = 3;
      uStack_21f = 0xffffff000000;
      uStack_219 = 0xff;
      uVar26 = FUN_0103b2e0(lVar50 + 0xe8,&local_220);
      plVar43 = (long *)(lVar50 + 0x48);
      lVar39 = *plVar43;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 == lVar39) {
        plVar43 = (long *)0x0;
        bVar12 = true;
      }
      else {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*plVar43 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x50));
              while (*plVar43 == 0) {
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                if (bVar12) {
                  *plVar43 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_0100477c;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar12) {
            *plVar43 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_0100477c:
        bVar12 = false;
      }
      local_1f0 = 0;
      local_220 = (undefined1)lVar50;
      uStack_21f = (undefined6)((ulong)lVar50 >> 8);
      uStack_219 = (undefined1)((ulong)lVar50 >> 0x38);
      local_218 = (undefined1)uVar26;
      uStack_217 = (undefined6)(uVar26 >> 8);
      uStack_211 = (undefined1)(uVar26 >> 0x38);
      local_210 = (undefined7)lVar50;
      local_208 = local_e8;
      local_200 = puStack_e0;
      local_1f8 = (long *)0x0;
      uStack_209 = uStack_219;
      FUN_00dbefa4(&local_1f8,&local_d8);
      local_1e8 = (long *)0x0;
      local_1e0 = 0;
      FUN_00f34110(&local_1e8,&local_c8);
      local_1d8 = CONCAT44(local_1d8._4_4_,fVar55);
      local_1d0 = 1;
      uVar36 = *(ulong *)(lVar50 + 0x68);
      if (uVar36 < *(ulong *)(lVar50 + 0x70)) {
        FUN_02de912c(*(undefined8 *)(lVar50 + 0x78),uVar36,&local_220);
        *(ulong *)(lVar50 + 0x68) = uVar36 + 0x100;
      }
      else {
        puVar29 = (undefined8 *)(lVar50 + 0x78);
        lVar31 = FUN_0103b290(lVar50 + 0x60,((long)(uVar36 - *(long *)(lVar50 + 0x60)) >> 8) + 1);
        lVar25 = *(long *)(lVar50 + 0x60);
        lVar39 = *(long *)(lVar50 + 0x68);
        local_88 = (long *)0x0;
        puStack_80 = puVar29;
        if (lVar31 == 0) {
          plVar19 = (long *)0x0;
        }
        else {
          plVar19 = (long *)(**(code **)(*(long *)*puVar29 + 0x10))
                                      ((long *)*puVar29,lVar31 << 8,0x10);
          if (plVar19 == (long *)0x0) {
            (**(code **)(*(long *)*puVar29 + 0xe8))();
          }
        }
        puVar44 = (ulong *)((long)plVar19 + (lVar39 - lVar25));
        local_88 = plVar19 + lVar31 * 0x20;
        local_a0 = plVar19;
        puStack_98 = puVar44;
        FUN_02de912c(*puVar29,puVar44,&local_220);
        local_90 = puVar44 + 0x20;
        FUN_0103b38c(lVar50 + 0x60,&local_a0);
        FUN_0103bbd0(&local_a0);
      }
      plVar19 = local_1e8;
      if (local_1e8 != (long *)0x0) {
        plVar49 = local_1e8 + 3;
        do {
          sVar37 = (short)*plVar49;
          cVar11 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar10) {
            *(short *)plVar49 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 == 1) {
          piVar5 = (int *)((long)local_1e8 + 0x1c);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar10) {
              *piVar5 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_a0 = (long *)*plVar19;
            FUN_00c44438(lVar25 + 0x8040,&local_a0);
          }
        }
        else if (sVar37 == 0) goto LAB_010092d4;
      }
      plVar19 = local_1f8;
      if (local_1f8 != (long *)0x0) {
        plVar49 = local_1f8 + 3;
        do {
          sVar37 = (short)*plVar49;
          cVar11 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar49,0x10);
          if (bVar10) {
            *(short *)plVar49 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 == 1) {
          piVar5 = (int *)((long)local_1f8 + 0x1c);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar10) {
              *piVar5 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_a0 = (long *)*plVar19;
            FUN_00c44438(lVar25 + 0x8040,&local_a0);
          }
        }
        else if (sVar37 == 0) goto LAB_010092d4;
      }
      if (!bVar12) {
        *plVar43 = 0;
        pLVar20 = (LightEventType *)(plVar43 + 1);
        goto LAB_01004eec;
      }
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar43 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x38));
            while (*plVar43 == 0) {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar12) {
                *plVar43 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_010042c0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar43,0x10);
        if (bVar12) {
          *plVar43 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_010042c0:
      lVar25 = *(long *)(lVar50 + 0x1f8);
      if (lVar25 == 0) {
        local_a0 = *(long **)(lVar50 + 8);
        FUN_0103caf0(&local_220,local_a0,&local_a0);
        uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
        local_220 = 0;
        uStack_21f = 0;
        uStack_219 = 0;
        lVar25 = *(long *)(lVar50 + 0x1f8);
        *(undefined8 *)(lVar50 + 0x1f8) = uVar27;
        if (lVar25 == 0) {
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
        }
        else {
          FUN_0103e9d8(lVar50 + 0x200);
          lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          if (lVar25 != 0) {
            FUN_0103e9d8(&local_218);
          }
        }
        lVar25 = *(long *)(lVar50 + 0x1f8);
      }
      local_a0 = (long *)CONCAT44(local_a0._4_4_,fVar55);
      uVar36 = FUN_02dea068(lVar25 + 8,&local_e8);
      local_220 = (undefined1)uVar36;
      uVar13 = local_220;
      uStack_21f = (undefined6)(uVar36 >> 8);
      uVar14 = uStack_21f;
      uStack_219 = (undefined1)(uVar36 >> 0x38);
      uVar15 = uStack_219;
      plVar43 = (long *)(lVar25 + 0xc0);
      lVar39 = *plVar43;
      lVar31 = *(long *)(lVar25 + 200) - lVar39 >> 3;
      uVar26 = lVar31 * -0x5555555555555555;
      if (uVar26 <= uVar36) {
        uVar45 = uVar36 + 1;
        lVar31 = uVar45 + lVar31 * 0x5555555555555555;
        if (uVar45 < uVar26 || lVar31 == 0) {
          if (uVar45 < uVar26) {
            *(ulong *)(lVar25 + 200) = lVar39 + uVar45 * 0x18;
          }
        }
        else {
          FUN_00e93f30(plVar43,lVar31);
          lVar39 = *plVar43;
        }
      }
      *(undefined1 *)(lVar39 + uVar36 * 0x18) = 0;
      *(undefined8 *)(*(long *)(lVar25 + 0xc0) + uVar36 * 0x18 + 8) = 1;
      uVar16 = local_a0._0_4_;
      *(undefined4 *)(*(long *)(lVar25 + 0xc0) + uVar36 * 0x18 + 0x10) = local_a0._0_4_;
      uVar45 = *(ulong *)(lVar25 + 0x130);
      uVar26 = uVar45 + 1;
      plVar43 = (long *)(lVar25 + 0xf8);
      *(ulong *)(lVar25 + 0x130) = uVar26;
      if (uVar45 == 0) {
        if (*(long *)(lVar25 + 0x100) - (long)*(ulong **)(lVar25 + 0xf8) >> 4 == 0)
        goto LAB_010044fc;
        **(ulong **)(lVar25 + 0xf8) = uVar36;
        lVar25 = *plVar43;
LAB_01004b90:
        *(undefined4 *)(lVar25 + 8) = local_a0._0_4_;
      }
      else {
        pvVar23 = *(void **)(lVar25 + 0xf8);
        uVar32 = *(long *)(lVar25 + 0x100) - (long)pvVar23 >> 4;
        if (*(float *)((long)pvVar23 + (uVar45 - 1) * 0x10 + 8) <= fVar55) {
          if (uVar26 <= uVar32) {
            *(ulong *)((long)pvVar23 + uVar45 * 0x10) = uVar36;
            lVar25 = *plVar43 + uVar45 * 0x10;
            goto LAB_01004b90;
          }
LAB_010044fc:
          FUN_0103e0a0(plVar43,&local_220,&local_a0);
        }
        else {
          if (uVar32 <= uVar26 && uVar26 - uVar32 != 0) {
            FUN_0103e51c(plVar43,uVar26 - uVar32);
            pvVar23 = (void *)*plVar43;
          }
          if (*(float *)((long)pvVar23 + 8) <= fVar55) {
            uVar17 = uVar45 - 1;
            uVar32 = uVar45 - 2;
            uVar26 = 1;
            while (uVar46 = uVar17, 2 < uVar32) {
              uVar6 = uVar26 + (long)((float)uVar32 * 0.5);
              uVar17 = uVar6;
              uVar32 = (long)((float)uVar32 * 0.5);
              if (*(float *)((long)pvVar23 + uVar6 * 0x10 + 8) <= fVar55) {
                uVar17 = uVar46;
                uVar32 = uVar46 - uVar6;
                uVar26 = uVar6;
              }
            }
            if (uVar46 <= uVar45 && uVar26 <= uVar46) {
              pfVar34 = (float *)((long)pvVar23 + uVar46 * 0x10 + 8);
              while (fVar55 < *pfVar34) {
                uVar46 = uVar46 - 1;
                if ((uVar46 < uVar26) || (pfVar34 = pfVar34 + -4, uVar45 < uVar46))
                goto LAB_01004b9c;
              }
              uVar46 = uVar46 + 1;
            }
LAB_01004b9c:
            if (uVar46 <= uVar45 && uVar26 <= uVar46) {
              uVar26 = uVar46;
            }
            pvVar23 = (void *)((long)pvVar23 + uVar26 * 0x10);
            memmove((void *)((long)pvVar23 + 0x10),pvVar23,(uVar45 - uVar26) * 0x10);
            *(ulong *)(*plVar43 + uVar26 * 0x10) = uVar36;
            lVar25 = *plVar43 + uVar26 * 0x10;
          }
          else {
            memmove((void *)((long)pvVar23 + 0x10),pvVar23,uVar45 << 4);
            *(ulong *)*plVar43 = uVar36;
            lVar25 = *plVar43;
          }
          *(undefined4 *)(lVar25 + 8) = uVar16;
        }
      }
      local_220 = 3;
      uStack_21f = 0;
      uStack_219 = 0;
      do {
        lVar25 = *(long *)(lVar50 + 0x160) - *(long *)(lVar50 + 0x158);
        local_218 = uVar13;
        uStack_217 = uVar14;
        uStack_211 = uVar15;
        if (lVar25 == 0) {
          uVar26 = *(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4;
          FUN_0103b268(lVar50 + 0xe8,&local_220);
          goto LAB_01004c70;
        }
        uVar26 = *(ulong *)(*(long *)(lVar50 + 0x160) + -8);
        *(long *)(lVar50 + 0x160) = lVar25 + *(long *)(lVar50 + 0x158) + -8;
        uVar45 = uVar26 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(lVar50 + 0x120) + uVar45) =
             *(ulong *)(*(long *)(lVar50 + 0x120) + uVar45) &
             (1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((ulong)(*(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4) <= uVar26);
      puVar29 = (undefined8 *)(*(long *)(lVar50 + 0xe8) + uVar26 * 0x10);
      *puVar29 = 3;
      puVar29[1] = uVar36;
      if (*(ulong *)(lVar50 + 400) <= uVar26) {
LAB_01004c70:
        *(ulong *)(lVar50 + 400) = uVar26 + 1;
      }
      *(undefined8 *)(lVar50 + 0x30) = 0;
      pLVar20 = (LightEventType *)(lVar50 + 0x38);
LAB_01004eec:
      nn::os::SignalLightEvent(pLVar20);
    }
    local_220 = (undefined1)uVar26;
    uStack_21f = (undefined6)(uVar26 >> 8);
    uStack_219 = (undefined1)(uVar26 >> 0x38);
    FUN_0103bd9c(plVar51 + 0x36,&local_220);
    if (!bVar35) {
      *plVar30 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar30 + 1));
    }
    *(float *)(param_1 + 0xa4) = fVar55 + 0.01;
    if (local_a8 != '\0') {
      *local_b0 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_b0 + 1));
    }
    puVar29 = local_c8;
    if (local_c8 != (undefined8 *)0x0) {
      psVar4 = (short *)(local_c8 + 3);
      do {
        sVar37 = *psVar4;
        cVar11 = '\x01';
        bVar35 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar35) {
          *psVar4 = sVar37 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar37 == 1) {
        piVar5 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar35) {
            *piVar5 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          uVar27 = *puVar29;
          local_220 = (undefined1)uVar27;
          uStack_21f = (undefined6)((ulong)uVar27 >> 8);
          uStack_219 = (undefined1)((ulong)uVar27 >> 0x38);
          FUN_00c44438(lVar25 + 0x8040,&local_220);
        }
      }
      else if (sVar37 == 0) goto LAB_010092d4;
    }
    puVar29 = local_d8;
    if (local_d8 != (undefined8 *)0x0) {
      psVar4 = (short *)(local_d8 + 3);
      do {
        sVar37 = *psVar4;
        cVar11 = '\x01';
        bVar35 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar35) {
          *psVar4 = sVar37 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar37 == 1) {
        piVar5 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar35) {
            *piVar5 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          uVar27 = *puVar29;
          local_220 = (undefined1)uVar27;
          uStack_21f = (undefined6)((ulong)uVar27 >> 8);
          uStack_219 = (undefined1)((ulong)uVar27 >> 0x38);
          FUN_00c44438(lVar25 + 0x8040,&local_220);
        }
      }
      else if (sVar37 == 0) goto LAB_010092d4;
    }
    if (!bVar42) {
      *plVar40 = 0;
      pLVar20 = (LightEventType *)(plVar40 + 1);
      goto LAB_01004fa8;
    }
    goto LAB_010063c4;
  }
  lVar25 = *param_3;
  if (lVar25 == 0) {
    plVar33 = (long *)0x0;
  }
  else if (*(short *)(lVar25 + 0x1a) == 0) {
    plVar33 = (long *)0x0;
  }
  else {
    psVar4 = (short *)(lVar25 + 0x1a);
    sVar37 = *(short *)(lVar25 + 0x1a);
    do {
      sVar9 = *psVar4;
      if (sVar9 == sVar37) {
        cVar11 = '\x01';
        bVar41 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar41) {
          *psVar4 = sVar37 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
        if (cVar11 != '\0') goto LAB_010086cc;
        bVar41 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010086cc:
        bVar41 = false;
      }
      if (bVar41) {
        plVar33 = (long *)0x0;
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar33 = (long *)(*(long *)(lVar25 + 0x10) + -0x28);
        }
        break;
      }
      plVar33 = (long *)0x0;
      sVar37 = sVar9;
    } while (sVar9 != 0);
  }
  plVar54 = param_1 + 0x11e;
  lVar39 = *plVar54;
  lVar25 = nn::os::GetCurrentThread();
  if (lVar25 == lVar39) {
    local_22c = '\0';
    plVar54 = (long *)0x0;
  }
  else {
    lVar25 = nn::os::GetCurrentThread();
    do {
      if (*plVar54 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x11f));
          while (*plVar54 == 0) {
            cVar11 = '\x01';
            bVar41 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar41) {
              *plVar54 = lVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_01003c90;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar41 = (bool)ExclusiveMonitorPass(plVar54,0x10);
      if (bVar41) {
        *plVar54 = lVar25;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_01003c90:
    local_22c = '\x01';
  }
  lVar25 = 0;
  if ((long *)*param_3 != (long *)0x0) {
    lVar25 = *(long *)*param_3;
  }
  plVar40 = (long *)param_1[0x121];
  uVar53 = (ulong)plVar54 >> 8;
  lVar39 = param_1[0x128];
  plVar30 = plVar40 + lVar39 * 2;
  if ((lVar39 != 0) && (*plVar40 != lVar25)) {
    lVar39 = lVar39 * 0x10;
    do {
      lVar39 = lVar39 + -0x10;
      if (lVar39 == 0) {
        plVar40 = plVar30;
        goto LAB_01003cf8;
      }
      plVar51 = plVar40 + 2;
      plVar40 = plVar40 + 2;
    } while (*plVar51 != lVar25);
  }
LAB_01003cf8:
  plVar51 = param_1 + 0xdb;
  lVar39 = *plVar51;
  lVar25 = nn::os::GetCurrentThread();
  if (plVar30 == plVar40) {
    if (lVar25 == lVar39) {
      plVar40 = (long *)0x0;
      bVar41 = true;
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar51 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
            while (*plVar51 == 0) {
              cVar11 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(plVar51,0x10);
              if (bVar41) {
                *plVar51 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_01003f6c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar41 = (bool)ExclusiveMonitorPass(plVar51,0x10);
        if (bVar41) {
          *plVar51 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_01003f6c:
      bVar41 = false;
      plVar40 = plVar51;
    }
    lVar25 = 0;
    if ((long *)*param_3 != (long *)0x0) {
      lVar25 = *(long *)*param_3;
    }
    plVar30 = (long *)param_1[0xde];
    lVar39 = param_1[0xe5];
    plVar43 = plVar30 + lVar39 * 2;
    if ((lVar39 != 0) && (*plVar30 != lVar25)) {
      lVar39 = lVar39 * 0x10;
      do {
        lVar39 = lVar39 + -0x10;
        if (lVar39 == 0) {
          plVar30 = plVar43;
          goto LAB_01003fcc;
        }
        plVar19 = plVar30 + 2;
        plVar30 = plVar30 + 2;
      } while (*plVar19 != lVar25);
    }
LAB_01003fcc:
    if (!bVar41) {
      *plVar40 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar40 + 1));
    }
    if (plVar43 != plVar30) {
      if (plVar33 != (long *)0x0) {
        bVar41 = false;
        goto LAB_0100402c;
      }
      lVar39 = *plVar51;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 == lVar39) {
        plVar51 = (long *)0x0;
        bVar41 = true;
      }
      else {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*plVar51 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
              while (*plVar51 == 0) {
                cVar11 = '\x01';
                bVar41 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                if (bVar41) {
                  *plVar51 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_0100490c;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar41 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar41) {
            *plVar51 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_0100490c:
        bVar41 = false;
      }
      if ((long *)*param_3 == (long *)0x0) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(long *)*param_3;
      }
      plVar33 = (long *)param_1[0xde];
      uVar26 = param_1[0xe5];
      if ((uVar26 == 0) || (*plVar33 == lVar25)) {
        plVar40 = plVar33;
      }
      else {
        lVar39 = uVar26 * 0x10;
        plVar30 = plVar33;
        do {
          lVar39 = lVar39 + -0x10;
          if (lVar39 == 0) {
            plVar40 = plVar33 + uVar26 * 2;
            break;
          }
          plVar40 = plVar30 + 2;
          plVar43 = plVar30 + 2;
          plVar30 = plVar40;
        } while (*plVar43 != lVar25);
      }
      if (plVar33 + uVar26 * 2 != plVar40) {
        uVar36 = (long)plVar40 - (long)plVar33 >> 4;
        if (uVar26 <= uVar36) goto LAB_01009190;
        uVar45 = uVar36 + 1;
        if (uVar45 < (ulong)(param_1[0xdf] - (long)plVar33 >> 4)) {
          memmove(plVar33 + uVar36 * 2,plVar33 + uVar45 * 2,(uVar26 - uVar45) * 0x10);
          uVar26 = param_1[0xe5];
        }
        param_1[0xe5] = uVar26 - 1;
      }
      if (!bVar41) {
        *plVar51 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar51 + 1));
      }
      plVar33 = param_1 + 0x129;
      lVar39 = *plVar33;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 == lVar39) {
        plVar33 = (long *)0x0;
        bVar41 = true;
      }
      else {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*plVar33 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x12a));
              while (*plVar33 == 0) {
                cVar11 = '\x01';
                bVar41 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar41) {
                  *plVar33 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_01004abc;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar41 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar41) {
            *plVar33 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_01004abc:
        bVar41 = false;
      }
      uVar27 = 0;
      if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
        uVar27 = *(undefined8 *)*param_4;
      }
      local_220 = (undefined1)uVar27;
      uStack_21f = (undefined6)((ulong)uVar27 >> 8);
      uStack_219 = (undefined1)((ulong)uVar27 >> 0x38);
      local_218 = 1;
      FUN_01659fb8(param_1 + 300,&local_220);
      if (!bVar41) {
        *plVar33 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar33 + 1));
      }
      plVar33 = (long *)0x0;
    }
  }
  else {
    if (lVar25 == lVar39) {
      plVar51 = (long *)0x0;
      bVar41 = true;
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar51 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
            while (*plVar51 == 0) {
              cVar11 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(plVar51,0x10);
              if (bVar41) {
                *plVar51 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_01003d90;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar41 = (bool)ExclusiveMonitorPass(plVar51,0x10);
        if (bVar41) {
          *plVar51 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_01003d90:
      bVar41 = false;
    }
    if ((long *)*param_3 == (long *)0x0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *(long *)*param_3;
    }
    plVar30 = (long *)param_1[0xde];
    uVar26 = param_1[0xe5];
    if ((uVar26 == 0) || (*plVar30 == lVar25)) {
      plVar43 = plVar30;
    }
    else {
      lVar39 = uVar26 * 0x10;
      plVar19 = plVar30;
      do {
        lVar39 = lVar39 + -0x10;
        if (lVar39 == 0) {
          plVar43 = plVar30 + uVar26 * 2;
          break;
        }
        plVar43 = plVar19 + 2;
        plVar49 = plVar19 + 2;
        plVar19 = plVar43;
      } while (*plVar49 != lVar25);
    }
    if (plVar30 + uVar26 * 2 != plVar43) {
      uVar36 = (long)plVar43 - (long)plVar30 >> 4;
      if (uVar26 <= uVar36) goto LAB_01009190;
      uVar45 = uVar36 + 1;
      if (uVar45 < (ulong)(param_1[0xdf] - (long)plVar30 >> 4)) {
        memmove(plVar30 + uVar36 * 2,plVar30 + uVar45 * 2,(uVar26 - uVar45) * 0x10);
        uVar26 = param_1[0xe5];
      }
      param_1[0xe5] = uVar26 - 1;
    }
    plVar30 = param_1 + 0x129;
    lVar39 = *plVar30;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 == lVar39) {
      plVar30 = (long *)0x0;
      bVar42 = true;
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar30 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x12a));
            while (*plVar30 == 0) {
              cVar11 = '\x01';
              bVar42 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar42) {
                *plVar30 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_01003ea4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar42) {
          *plVar30 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_01003ea4:
      bVar42 = false;
    }
    uVar27 = 0;
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      uVar27 = *(undefined8 *)*param_4;
    }
    local_220 = (undefined1)uVar27;
    uStack_21f = (undefined6)((ulong)uVar27 >> 8);
    uStack_219 = (undefined1)((ulong)uVar27 >> 0x38);
    local_218 = 1;
    FUN_01659fb8(param_1 + 300,&local_220);
    lVar25 = param_1[0x121];
    uVar36 = (long)plVar40 - lVar25 >> 4;
    uVar26 = param_1[0x128];
    if (uVar26 <= uVar36) {
LAB_01009190:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("index < m_end","erase",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                 ,0x391,"FlatHashTable::erase iterator out of bounds");
    }
    uVar45 = uVar36 + 1;
    if (uVar45 < (ulong)(param_1[0x122] - lVar25 >> 4)) {
      memmove((void *)(lVar25 + uVar36 * 0x10),(void *)(lVar25 + uVar45 * 0x10),
              (uVar26 - uVar45) * 0x10);
      uVar26 = param_1[0x128];
    }
    param_1[0x128] = uVar26 - 1;
    if (!bVar42) {
      *plVar30 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar30 + 1));
    }
    if (!bVar41) {
      *plVar51 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar51 + 1));
    }
  }
  goto LAB_010063cc;
LAB_010041a4:
  ClearExclusiveLocal();
  lVar39 = *plVar40;
  lVar50 = param_1[0xa7];
  goto LAB_0100416c;
code_r0x0100557c:
  uVar36 = *(ulong *)(*(long *)(lVar50 + 0x160) + -8);
  *(long *)(lVar50 + 0x160) = lVar25 + *(long *)(lVar50 + 0x158) + -8;
  uVar45 = uVar36 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(lVar50 + 0x120) + uVar45) =
       *(ulong *)(*(long *)(lVar50 + 0x120) + uVar45) &
       (1L << (uVar36 & 0x3f) ^ 0xffffffffffffffffU);
  if (uVar36 < (ulong)(*(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4))
  goto code_r0x010055b8;
  goto LAB_01005570;
code_r0x010055b8:
  puVar29 = (undefined8 *)(*(long *)(lVar50 + 0xe8) + uVar36 * 0x10);
  *puVar29 = 3;
  puVar29[1] = uVar26;
  if (*(ulong *)(lVar50 + 400) <= uVar36) goto LAB_010055f4;
LAB_010055fc:
  *(undefined8 *)(lVar50 + 0x30) = 0;
  pLVar20 = (LightEventType *)(lVar50 + 0x38);
LAB_010057a0:
  nn::os::SignalLightEvent(pLVar20);
  goto LAB_010057a4;
LAB_0100421c:
  do {
    lVar25 = *plVar40;
    lVar39 = param_1[0xa7];
    cVar11 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar42) {
      *plVar40 = lVar25;
      param_1[0xa7] = lVar39;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar50 = *plVar40;
    lVar31 = param_1[0xa7];
    if (lVar50 != lVar25 || lVar31 != lVar39) {
      bVar42 = false;
      ClearExclusiveLocal();
      goto joined_r0x01004998;
    }
    cVar11 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar42) {
      *plVar40 = lVar25;
      *(long *)((long)param_1 + 0x534) = lVar39 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar42 = true;
joined_r0x01004998:
  if (!bVar42) {
    do {
      lVar25 = *plVar40;
      lVar39 = param_1[0xa7];
      if (lVar25 != lVar50 || lVar39 != lVar31) {
        bVar42 = false;
        ClearExclusiveLocal();
        lVar50 = lVar25;
        lVar31 = lVar39;
        goto joined_r0x01004998;
      }
      cVar11 = '\x01';
      bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar42) {
        *plVar40 = lVar50;
        *(long *)((long)param_1 + 0x534) = lVar31 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar42 = true;
    lVar50 = lVar25;
    lVar31 = lVar39;
    goto joined_r0x01004998;
  }
  nn::os::SignalLightEvent(pLVar20);
  lVar25 = nn::os::GetCurrentThread();
  do {
    if (*plVar40 != 0 || param_1[0xa7] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar20);
        while (*plVar40 == 0 && param_1[0xa7] == 0) {
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar42) {
            *plVar40 = lVar25;
            param_1[0xa7] = 0;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_010049e4;
        }
      } while( true );
    }
    cVar11 = '\x01';
    bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar42) {
      *plVar40 = lVar25;
      param_1[0xa7] = 0;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
LAB_010049e4:
  if ((char)param_1[0xaa] == '\0') {
    if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
      puVar44 = (ulong *)0x0;
    }
    else {
      puVar44 = *(ulong **)*param_4;
    }
    plVar30 = param_1 + 0xc;
    lVar25 = nn::os::GetCurrentThread();
    do {
      if (*plVar30 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd));
          while (*plVar30 == 0) {
            cVar11 = '\x01';
            bVar42 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar42) {
              *plVar30 = lVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_01004cd4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar42 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar42) {
        *plVar30 = lVar25;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_01004cd4:
    if (((char)param_1[0x47] == '\0') && (*(char *)((long)param_1 + 0x239) != '\0')) {
      *(undefined1 *)(param_1 + 0x47) = 1;
      (**(code **)(*(long *)param_1[0x1c] + 0x70))((long *)param_1[0x1c],0);
      *(undefined1 *)(param_1 + 0xaa) = 0;
    }
    plVar51 = param_1 + 0x52;
    lVar25 = nn::os::GetCurrentThread();
    do {
      if (*plVar51 != 0 || param_1[0x53] != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
          while (*plVar51 == 0 && param_1[0x53] == 0) {
            cVar11 = '\x01';
            bVar42 = (bool)ExclusiveMonitorPass(plVar51,0x10);
            if (bVar42) {
              *plVar51 = lVar25;
              param_1[0x53] = 0;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_01004d28;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar42 = (bool)ExclusiveMonitorPass(plVar51,0x10);
      if (bVar42) {
        *plVar51 = lVar25;
        param_1[0x53] = 0;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_01004d28:
    puVar28 = (undefined8 *)param_1[0x56];
    lVar25 = param_1[0x5d];
    puVar29 = puVar28 + lVar25 * 4;
    if ((lVar25 == 0) || ((ulong *)*puVar28 == puVar44)) {
      puVar47 = puVar28;
    }
    else {
      lVar39 = lVar25 * 0x20;
      puVar38 = puVar28;
      do {
        lVar39 = lVar39 + -0x20;
        if (lVar39 == 0) {
          puVar47 = puVar29;
          break;
        }
        puVar47 = puVar38 + 4;
        puVar1 = puVar38 + 4;
        puVar38 = puVar47;
      } while ((ulong *)*puVar1 != puVar44);
    }
    if (puVar29 == puVar47) {
      puVar47 = (undefined8 *)param_1[0x57];
      if (lVar25 == (long)puVar47 - (long)puVar28 >> 5) {
        uStack_211 = 0;
        local_210 = 0;
        uStack_219 = 0;
        local_218 = 0;
        uStack_217 = 0;
        if (puVar47 < (undefined8 *)param_1[0x58]) {
          lVar25 = param_1[0x59];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar39 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar39 == 0) {
            *puVar47 = puVar44;
            *(undefined1 *)(puVar47 + 1) = 0;
            puVar47[3] = CONCAT71(local_210,uStack_211);
            *(ulong *)((long)puVar47 + 0x11) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            *(ulong *)((long)puVar47 + 9) = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          }
          else {
            if (0xf < *(ulong *)(lVar39 + 0x80)) goto LAB_01009504;
            *(long *)(lVar39 + *(ulong *)(lVar39 + 0x80) * 8) = lVar25;
            *(long *)(lVar39 + 0x80) = *(long *)(lVar39 + 0x80) + 1;
            *puVar47 = puVar44;
            *(undefined1 *)(puVar47 + 1) = 0;
            puVar47[3] = CONCAT71(local_210,uStack_211);
            *(ulong *)((long)puVar47 + 0x11) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            *(ulong *)((long)puVar47 + 9) = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            *(long *)(lVar39 + 0x80) = *(long *)(lVar39 + 0x80) + -1;
          }
          param_1[0x57] = (long)(puVar47 + 4);
        }
        else {
          uVar36 = param_1[0x5a];
          uVar26 = lVar25 + 1;
          if (0x7ffffffffffffffe < uVar36) {
            uVar36 = 0x7fffffffffffffff;
          }
          if (uVar36 < uVar26) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar39 = param_1[0x58] - (long)puVar28;
          uVar45 = lVar39 >> 4;
          if (uVar26 <= uVar45) {
            uVar26 = uVar45;
          }
          if (uVar36 >> 1 <= (ulong)(lVar39 >> 5)) {
            uVar26 = uVar36;
          }
          if (uVar26 == 0) {
            lVar39 = 0;
          }
          else {
            lVar39 = (**(code **)(*(long *)param_1[0x59] + 0x10))
                               ((long *)param_1[0x59],uVar26 << 5,8);
            if (lVar39 == 0) {
              (**(code **)(*(long *)param_1[0x59] + 0xe8))();
            }
          }
          puVar29 = (undefined8 *)(lVar39 + lVar25 * 0x20);
          lVar25 = param_1[0x59];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar50 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar50 == 0) {
            *puVar29 = puVar44;
            *(undefined1 *)(puVar29 + 1) = 0;
            puVar29[3] = CONCAT71(local_210,uStack_211);
            *(ulong *)((long)puVar29 + 0x11) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            *(ulong *)((long)puVar29 + 9) = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          }
          else {
            if (0xf < *(ulong *)(lVar50 + 0x80)) goto LAB_01009504;
            *(long *)(lVar50 + *(ulong *)(lVar50 + 0x80) * 8) = lVar25;
            *(long *)(lVar50 + 0x80) = *(long *)(lVar50 + 0x80) + 1;
            *puVar29 = puVar44;
            *(undefined1 *)(puVar29 + 1) = 0;
            puVar29[3] = CONCAT71(local_210,uStack_211);
            *(ulong *)((long)puVar29 + 0x11) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            *(ulong *)((long)puVar29 + 9) = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            *(long *)(lVar50 + 0x80) = *(long *)(lVar50 + 0x80) + -1;
          }
          lVar25 = param_1[0x56];
          lVar50 = param_1[0x57];
          puVar28 = puVar29;
          if (lVar50 != lVar25) {
            do {
              lVar31 = param_1[0x59];
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar22 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar22 == 0) {
                uVar27 = *(undefined8 *)(lVar50 + -0x20);
                uVar24 = *(undefined8 *)(lVar50 + -0x18);
                uVar7 = *(undefined8 *)(lVar50 + -8);
                puVar28[-2] = *(undefined8 *)(lVar50 + -0x10);
                puVar28[-1] = uVar7;
                puVar28[-4] = uVar27;
                puVar28[-3] = uVar24;
              }
              else {
                if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_01009504;
                *(long *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = lVar31;
                *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
                uVar27 = *(undefined8 *)(lVar50 + -0x20);
                uVar24 = *(undefined8 *)(lVar50 + -0x18);
                uVar7 = *(undefined8 *)(lVar50 + -8);
                puVar28[-2] = *(undefined8 *)(lVar50 + -0x10);
                puVar28[-1] = uVar7;
                puVar28[-4] = uVar27;
                puVar28[-3] = uVar24;
                *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
              }
              lVar50 = lVar50 + -0x20;
              puVar28 = puVar28 + -4;
            } while (lVar25 != lVar50);
            lVar25 = param_1[0x56];
          }
          param_1[0x56] = (long)puVar28;
          param_1[0x57] = (long)(puVar29 + 4);
          lVar50 = param_1[0x58];
          param_1[0x58] = lVar39 + uVar26 * 0x20;
          if (lVar25 != 0) {
            plVar43 = (long *)param_1[0x59];
            uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
            if (((uVar26 & 1) == 0) || (lVar39 = FUN_00c4e600(), *(int *)(lVar39 + 0x12c8) < 1)) {
              (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,lVar50 - lVar25,8);
            }
            else {
              FUN_00c48fe8(plVar43,lVar25,lVar50 - lVar25,8);
            }
          }
        }
      }
      else {
        uStack_211 = 0;
        local_210 = 0;
        uStack_219 = 0;
        local_218 = 0;
        uStack_217 = 0;
        *puVar29 = puVar44;
        *(undefined1 *)(puVar29 + 1) = 0;
        puVar29[3] = 0;
        *(undefined8 *)((long)puVar29 + 0x11) = 0;
        *(ulong *)((long)puVar29 + 9) = (ulong)CONCAT61(uStack_21f,local_220);
      }
      lVar39 = param_1[0x5d];
      param_1[0x5d] = lVar39 + 1;
      lVar50 = param_1[0x56];
      lVar25 = param_1[0x8e] - param_1[0x8d];
      if (lVar25 == 0) {
        lVar31 = param_1[0x80];
        lVar22 = param_1[0x7f];
        lVar25 = FUN_011b19ac(param_1[1]);
        local_220 = (undefined1)lVar25;
        uStack_21f = (undefined6)((ulong)lVar25 >> 8);
        uStack_219 = (undefined1)((ulong)lVar25 >> 0x38);
        if (lVar25 != 0) {
          piVar5 = (int *)(lVar25 + 0x28);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar42) {
              *piVar5 = iVar18 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 == -1) goto LAB_01009550;
        }
        FUN_028e3c58(param_1 + 0x7f,&local_220);
        plVar43 = (long *)CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
        if (plVar43 != (long *)0x0) {
          plVar19 = plVar43 + 5;
          do {
            lVar25 = *plVar19;
            iVar18 = (int)lVar25 + -1;
            cVar11 = '\x01';
            bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar42) {
              *(int *)plVar19 = iVar18;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*plVar43 + 0x10))();
          }
          else if ((int)lVar25 == 0) goto LAB_010064f0;
        }
        puVar48 = (ulong *)(lVar31 - lVar22 >> 3);
LAB_010059bc:
        param_1[0x94] = (long)puVar48 + 1;
      }
      else {
        puVar48 = *(ulong **)(param_1[0x8e] + -8);
        param_1[0x8e] = lVar25 + param_1[0x8d] + -8;
        uVar26 = (ulong)puVar48 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_1[0x86] + uVar26) =
             *(ulong *)(param_1[0x86] + uVar26) &
             (1L << ((ulong)puVar48 & 0x3f) ^ 0xffffffffffffffffU);
        if (puVar48 < (ulong *)(param_1[0x80] - param_1[0x7f] >> 3)) {
          if ((ulong *)param_1[0x94] <= puVar48) goto LAB_010059bc;
        }
        else {
          lVar25 = FUN_011b19ac(param_1[1]);
          local_220 = (undefined1)lVar25;
          uStack_21f = (undefined6)((ulong)lVar25 >> 8);
          uStack_219 = (undefined1)((ulong)lVar25 >> 0x38);
          if (lVar25 != 0) {
            piVar5 = (int *)(lVar25 + 0x28);
            do {
              iVar18 = *piVar5;
              cVar11 = '\x01';
              bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar42) {
                *piVar5 = iVar18 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar18 == -1) goto LAB_01009550;
          }
          puVar48 = (ulong *)FUN_028e4060(param_1 + 0x7f,&local_220);
          plVar43 = (long *)CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          if (plVar43 != (long *)0x0) {
            plVar19 = plVar43 + 5;
            do {
              lVar25 = *plVar19;
              iVar18 = (int)lVar25 + -1;
              cVar11 = '\x01';
              bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar42) {
                *(int *)plVar19 = iVar18;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar18 == 0) {
              (**(code **)(*plVar43 + 0x10))();
            }
            else if ((int)lVar25 == 0) goto LAB_010064f0;
          }
        }
      }
      local_1c0 = param_1[1];
      local_208 = (long *)CONCAT62(local_208._2_6_,0x101);
      local_1f8 = (long *)0x0;
      puVar47 = (undefined8 *)(lVar50 + lVar39 * 0x20);
      local_1f0 = 0;
      local_1e8 = (long *)0x0;
      local_220 = 0;
      local_210 = 0;
      uStack_209 = 0;
      local_1d0 = 0;
      local_190 = 0;
      local_188 = 0;
      local_130 = 0;
      local_120 = 0;
      local_110 = 0;
      uStack_198 = 0x2aaaaaaaaaaaaaa;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_160 = 0;
      uStack_158 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_fb = 0;
      do {
        lVar25 = param_1[0x78] - param_1[0x77];
        local_200 = puVar48;
        local_1a0 = local_1c0;
        if (lVar25 == 0) {
          uVar26 = param_1[0x6a];
          uVar36 = ((long)(uVar26 - param_1[0x69]) >> 4) * -0x79435e50d79435e5;
          if (uVar26 < (ulong)param_1[0x6b]) {
            FUN_013082c4(param_1 + 0x6c,uVar26,&local_220);
            param_1[0x6a] = uVar26 + 0x130;
          }
          else {
            FUN_028e41b8(param_1 + 0x69,&local_220);
          }
          goto LAB_01005c98;
        }
        uVar36 = *(ulong *)(param_1[0x78] + -8);
        param_1[0x78] = lVar25 + param_1[0x77] + -8;
        uVar26 = uVar36 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_1[0x70] + uVar26) =
             *(ulong *)(param_1[0x70] + uVar26) & (1L << (uVar36 & 0x3f) ^ 0xffffffffffffffffU);
        lVar25 = param_1[0x69];
      } while ((ulong)((param_1[0x6a] - lVar25 >> 4) * -0x79435e50d79435e5) <= uVar36);
      pvVar23 = (void *)(lVar25 + uVar36 * 0x130);
      memcpy(pvVar23,&local_220,0x48);
      FUN_00dd9f00((long)pvVar23 + 0x48,&local_1d8);
      plVar43 = (long *)((long)pvVar23 + 0x68);
      lVar39 = *plVar43;
      *(long *)((long)pvVar23 + 0x60) = local_1c0;
      if (lVar39 != 0) {
        lVar50 = lVar25 + uVar36 * 0x130;
        plVar19 = *(long **)(lVar50 + 0x80);
        *(long *)(lVar50 + 0x70) = lVar39;
        lVar50 = *(long *)(lVar50 + 0x78) - lVar39;
        uVar26 = (**(code **)(*plVar19 + 0xf8))(plVar19);
        if (((uVar26 & 1) == 0) || (lVar31 = FUN_00c4e600(), *(int *)(lVar31 + 0x12c8) < 1)) {
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar39,lVar50,0x10);
        }
        else {
          FUN_00c48fe8(plVar19,lVar39,lVar50,0x10);
        }
        *(undefined8 *)((long)pvVar23 + 0x70) = 0;
        *(undefined8 *)((long)pvVar23 + 0x78) = 0;
        *plVar43 = 0;
      }
      lVar39 = lVar25 + uVar36 * 0x130;
      *(undefined8 *)(lVar39 + 0x90) = local_190;
      *(ulong *)(lVar39 + 0x98) = CONCAT44(uStack_184,local_188);
      *(long *)(lVar39 + 0x80) = local_1a0;
      *(undefined8 *)(lVar39 + 0x88) = uStack_198;
      *plVar43 = local_1b8;
      *(undefined8 *)(lVar39 + 0x70) = local_1b0;
      *(undefined8 *)(lVar39 + 0x78) = local_1a8;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1b8 = 0;
      memcpy((void *)(lVar39 + 0xa0),auStack_180,0x62);
      plVar43 = *(long **)(lVar39 + 0x110);
      *(undefined8 *)(lVar39 + 0x110) = 0;
      if (plVar43 != (long *)0x0) {
        plVar19 = plVar43 + 5;
        do {
          lVar50 = *plVar19;
          iVar18 = (int)lVar50 + -1;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar42) {
            *(int *)plVar19 = iVar18;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar43 + 0x10))();
        }
        else if ((int)lVar50 == 0) goto LAB_010064f0;
      }
      uVar27 = local_110;
      local_110 = 0;
      *(undefined8 *)(lVar39 + 0x110) = uVar27;
      lVar39 = lVar25 + uVar36 * 0x130;
      plVar43 = *(long **)(lVar39 + 0x118);
      *(undefined8 *)(lVar39 + 0x118) = 0;
      if (plVar43 != (long *)0x0) {
        plVar19 = plVar43 + 5;
        do {
          lVar50 = *plVar19;
          iVar18 = (int)lVar50 + -1;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar42) {
            *(int *)plVar19 = iVar18;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar43 + 0x10))();
        }
        else if ((int)lVar50 == 0) goto LAB_010064f0;
      }
      uVar27 = local_108;
      local_108 = 0;
      *(undefined8 *)(lVar39 + 0x118) = uVar27;
      lVar39 = lVar25 + uVar36 * 0x130;
      plVar43 = *(long **)(lVar39 + 0x120);
      *(undefined8 *)(lVar39 + 0x120) = 0;
      if (plVar43 != (long *)0x0) {
        plVar19 = plVar43 + 5;
        do {
          lVar50 = *plVar19;
          iVar18 = (int)lVar50 + -1;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar42) {
            *(int *)plVar19 = iVar18;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar43 + 0x10))();
        }
        else if ((int)lVar50 == 0) goto LAB_010064f0;
      }
      uVar27 = CONCAT35(local_fb,uStack_100);
      uStack_100 = 0;
      local_fb = 0;
      *(undefined8 *)(lVar39 + 0x120) = uVar27;
      lVar25 = lVar25 + uVar36 * 0x130;
      *(undefined1 *)(lVar25 + 300) = uStack_f4;
      *(undefined4 *)(lVar25 + 0x128) = uStack_f8;
      if ((ulong)param_1[0x7e] <= uVar36) {
LAB_01005c98:
        param_1[0x7e] = uVar36 + 1;
      }
      FUN_013138e0(&local_220);
      lVar39 = param_1[0x69];
      FUN_00dbefa4(lVar39 + uVar36 * 0x130 + 0x48,param_4);
      lVar25 = FUN_0103b434(param_1[1]);
      if (lVar25 != 0) {
        piVar5 = (int *)(lVar25 + 0x28);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar42) {
            *piVar5 = iVar18 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == -1) goto LAB_01009550;
      }
      lVar50 = lVar39 + uVar36 * 0x130;
      plVar43 = *(long **)(lVar50 + 0x110);
      *(undefined8 *)(lVar50 + 0x110) = 0;
      if (plVar43 != (long *)0x0) {
        plVar19 = plVar43 + 5;
        do {
          lVar31 = *plVar19;
          iVar18 = (int)lVar31 + -1;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar42) {
            *(int *)plVar19 = iVar18;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar43 + 0x10))();
        }
        else if ((int)lVar31 == 0) goto LAB_010064f0;
      }
      *(long *)(lVar50 + 0x110) = lVar25;
      lVar25 = FUN_0103b434(param_1[1]);
      if (lVar25 != 0) {
        piVar5 = (int *)(lVar25 + 0x28);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar42) {
            *piVar5 = iVar18 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == -1) goto LAB_01009550;
      }
      lVar50 = lVar39 + uVar36 * 0x130;
      plVar43 = *(long **)(lVar50 + 0x118);
      *(undefined8 *)(lVar50 + 0x118) = 0;
      if (plVar43 != (long *)0x0) {
        plVar19 = plVar43 + 5;
        do {
          lVar31 = *plVar19;
          iVar18 = (int)lVar31 + -1;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar42) {
            *(int *)plVar19 = iVar18;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar43 + 0x10))();
        }
        else if ((int)lVar31 == 0) goto LAB_010064f0;
      }
      *(long *)(lVar50 + 0x118) = lVar25;
      lVar25 = FUN_0103c258(param_1[1]);
      if (lVar25 != 0) {
        piVar5 = (int *)(lVar25 + 0x28);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar42) {
            *piVar5 = iVar18 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == -1) {
LAB_01009550:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      lVar50 = lVar39 + uVar36 * 0x130;
      plVar43 = *(long **)(lVar50 + 0x120);
      *(undefined8 *)(lVar50 + 0x120) = 0;
      if (plVar43 != (long *)0x0) {
        plVar19 = plVar43 + 5;
        do {
          lVar31 = *plVar19;
          iVar18 = (int)lVar31 + -1;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar42) {
            *(int *)plVar19 = iVar18;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar43 + 0x10))();
        }
        else if ((int)lVar31 == 0) {
LAB_010064f0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(long *)(lVar50 + 0x120) = lVar25;
      *(ulong **)(lVar39 + uVar36 * 0x130 + 8) = puVar44;
      puVar47[2] = 0;
      puVar47[3] = uVar36;
      *(undefined1 *)(puVar47 + 1) = 0;
      bVar42 = true;
    }
    else {
      bVar42 = false;
    }
    uVar26 = puVar47[2];
    lVar39 = param_1[0x69] + puVar47[3] * 0x130;
    plVar43 = (long *)(lVar39 + 0x68);
    lVar25 = *plVar43;
    lVar50 = *(long *)(lVar39 + 0x70) - lVar25 >> 5;
    uVar36 = lVar50 * -0x5555555555555555;
    uVar27 = 1;
    if (uVar26 < uVar36) {
      uVar24 = 1;
    }
    else {
      uVar45 = uVar26 + 1;
      lVar50 = uVar45 + lVar50 * 0x5555555555555555;
      if (uVar45 < uVar36 || lVar50 == 0) {
        if (uVar45 < uVar36) {
          uVar24 = 0;
          *(long *)(lVar39 + 0x70) = lVar25 + uVar45 * 0x60;
          goto LAB_01005e04;
        }
      }
      else {
        FUN_01aa8008(plVar43,lVar50);
        lVar25 = *plVar43;
      }
      uVar24 = 0;
    }
LAB_01005e04:
    puVar29 = (undefined8 *)(lVar25 + uVar26 * 0x60);
    *(undefined1 *)(puVar29 + 10) = 1;
    *puVar29 = 0;
    puVar29[1] = 0;
    *(undefined4 *)(puVar29 + 2) = 0;
    FUN_0193cb94(&local_220,lVar39 + 0x60,uVar24,uVar26);
    local_210 = 0;
    uStack_209 = 0;
    local_208 = (long *)0x0;
    local_220 = 0;
    uStack_21f = 0;
    uStack_219 = 0;
    local_218 = 0;
    uStack_217 = 0;
    uStack_211 = 0;
    lVar39 = param_1[0x69] + puVar47[3] * 0x130;
    plVar43 = (long *)(lVar39 + 0x68);
    lVar25 = *plVar43;
    lVar50 = *(long *)(lVar39 + 0x70) - lVar25 >> 5;
    uVar36 = lVar50 * -0x5555555555555555;
    if (uVar36 <= uVar26) {
      uVar45 = uVar26 + 1;
      lVar50 = uVar45 + lVar50 * 0x5555555555555555;
      if (uVar45 < uVar36 || lVar50 == 0) {
        if (uVar45 < uVar36) {
          uVar27 = 0;
          *(long *)(lVar39 + 0x70) = lVar25 + uVar45 * 0x60;
          goto LAB_01005e68;
        }
      }
      else {
        FUN_01aa8008(plVar43,lVar50);
        lVar25 = *plVar43;
      }
      uVar27 = 0;
    }
LAB_01005e68:
    lVar50 = lVar25 + uVar26 * 0x60;
    *(undefined1 *)(lVar50 + 0x51) = 1;
    *(undefined8 *)(lVar50 + 0x20) = 0;
    *(undefined8 *)(lVar50 + 0x28) = 0;
    *(ulong *)(lVar50 + 0x38) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
    *(long **)(lVar50 + 0x48) = local_208;
    *(ulong *)(lVar50 + 0x40) = CONCAT17(uStack_209,local_210);
    *(ulong *)(lVar50 + 0x30) = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
    if (*(char *)(lVar50 + 0x50) == '\0') {
      auVar56 = NEON_ext(ZEXT816(0),ZEXT816(0),4,1);
      puVar29 = (undefined8 *)(lVar25 + uVar26 * 0x60);
      fVar55 = SQRT(auVar56._0_4_ + auVar56._4_4_) * 0.5;
      fVar57 = 1.0;
      if (fVar55 < 0.0) {
        fVar57 = 0.0;
      }
      puVar29[1] = puVar29[9];
      *puVar29 = puVar29[8];
      *(float *)(puVar29 + 2) = fVar55 * fVar57 - fVar55 * 0.0;
    }
    FUN_00f1e4c0(lVar39 + 0x60,uVar27,uVar26);
    puVar47[2] = puVar47[2] + 1;
    *param_2 = uVar26;
    do {
      lVar25 = *plVar51;
      lVar39 = param_1[0x53];
      cVar11 = '\x01';
      bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
      if (bVar35) {
        *plVar51 = lVar25;
        param_1[0x53] = lVar39;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    do {
      lVar50 = *plVar51;
      lVar31 = param_1[0x53];
      if (lVar50 != lVar25 || lVar31 != lVar39) {
        bVar35 = false;
        ClearExclusiveLocal();
        goto joined_r0x01005f08;
      }
      cVar11 = '\x01';
      bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
      if (bVar35) {
        *plVar51 = 0;
        *(long *)((long)param_1 + 0x294) = lVar39;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar35 = true;
joined_r0x01005f08:
    if (!bVar35) {
      do {
        lVar25 = *plVar51;
        lVar39 = param_1[0x53];
        if (lVar25 != lVar50 || lVar39 != lVar31) {
          bVar35 = false;
          ClearExclusiveLocal();
          lVar50 = lVar25;
          lVar31 = lVar39;
          goto joined_r0x01005f08;
        }
        cVar11 = '\x01';
        bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
        if (bVar35) {
          *plVar51 = 0;
          *(long *)((long)param_1 + 0x294) = lVar31;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar35 = true;
      lVar50 = lVar25;
      lVar31 = lVar39;
      goto joined_r0x01005f08;
    }
    pLVar2 = (LightEventType *)(param_1 + 0x54);
    nn::os::SignalLightEvent(pLVar2);
    pLVar3 = (LightEventType *)(param_1 + 0xd);
    param_1[0xc] = 0;
    nn::os::SignalLightEvent(pLVar3);
    if (bVar42) {
      local_250 = param_1 + 0x5e;
      lVar39 = *local_250;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 == lVar39) {
        local_250 = (long *)0x0;
        bVar42 = true;
      }
      else {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*local_250 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5f));
              while (*local_250 == 0) {
                cVar11 = '\x01';
                bVar42 = (bool)ExclusiveMonitorPass(local_250,0x10);
                if (bVar42) {
                  *local_250 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_01005fa4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(local_250,0x10);
          if (bVar42) {
            *local_250 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_01005fa4:
        bVar42 = false;
      }
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar30 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar3);
            while (*plVar30 == 0) {
              cVar11 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar35) {
                *plVar30 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_01005fe0;
            }
          } while( true );
        }
        cVar11 = '\x01';
        bVar35 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar35) {
          *plVar30 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_01005fe0:
      puVar29 = (undefined8 *)param_1[0x61];
      lVar25 = param_1[0x68];
      if ((lVar25 == 0) || ((ulong *)*puVar29 == puVar44)) {
        puVar28 = puVar29;
      }
      else {
        lVar39 = lVar25 * 0x40;
        puVar47 = puVar29;
        do {
          lVar39 = lVar39 + -0x40;
          if (lVar39 == 0) goto LAB_01007c30;
          puVar28 = puVar47 + 8;
          puVar38 = puVar47 + 8;
          puVar47 = puVar28;
        } while ((ulong *)*puVar38 != puVar44);
      }
      if (puVar28 != puVar29 + lVar25 * 8) {
        lVar25 = nn::os::GetCurrentThread();
        do {
          lVar39 = *plVar51;
          lVar50 = param_1[0x53];
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar35) {
            *plVar51 = lVar39;
            param_1[0x53] = lVar50;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        do {
          while ((lVar39 != 0 && (lVar25 != lVar39))) {
            nn::os::WaitLightEvent(pLVar2);
            do {
              lVar39 = *plVar51;
              lVar50 = param_1[0x53];
              cVar11 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
              if (bVar35) {
                *plVar51 = lVar39;
                param_1[0x53] = lVar50;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          do {
            lVar31 = *plVar51;
            if (lVar31 != lVar39 || param_1[0x53] != lVar50) {
              bVar35 = false;
              ClearExclusiveLocal();
              goto LAB_01006ed0;
            }
            cVar11 = '\x01';
            bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
            if (bVar35) {
              *plVar51 = lVar39;
              *(long *)((long)param_1 + 0x294) = lVar50 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          bVar35 = true;
LAB_01006ed0:
          lVar39 = lVar31;
          lVar50 = param_1[0x53];
        } while (!bVar35);
        puVar29 = (undefined8 *)param_1[0x56];
        lVar25 = param_1[0x5d];
        if ((lVar25 != 0) && ((ulong *)*puVar29 != puVar44)) {
          puVar47 = puVar29 + lVar25 * 4;
          lVar25 = lVar25 * 0x20;
          do {
            lVar25 = lVar25 + -0x20;
            if (lVar25 == 0) {
              puVar29 = puVar47;
              break;
            }
            puVar1 = puVar29 + 4;
            puVar38 = puVar29 + 4;
            puVar29 = puVar1;
          } while ((ulong *)*puVar38 != puVar44);
        }
        lVar50 = *(long *)(param_1[0x69] + puVar29[3] * 0x130 + 0x110);
        plVar43 = (long *)(lVar50 + 0x30);
        lVar39 = *plVar43;
        local_a0 = param_1;
        puStack_98 = puVar44;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar39) {
          if (*(long *)(lVar50 + 0x198) == 0) {
            local_68 = *(undefined8 *)(lVar50 + 8);
            FUN_0103c0d0(&local_220,local_68,&local_68);
            uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
            lVar25 = *(long *)(lVar50 + 0x198);
            *(undefined8 *)(lVar50 + 0x198) = uVar27;
            if (lVar25 != 0) {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar39 = FUN_00c4e600();
              iVar8 = *(int *)(lVar39 + 0x12c8);
              iVar18 = iVar8 + 1;
              *(int *)(lVar39 + 0x12c8) = iVar18;
              if (*(int *)(lVar39 + 0x12cc) <= iVar8) {
                *(int *)(lVar39 + 0x12cc) = iVar18;
              }
              lVar39 = *(long *)(lVar25 + 0xf8);
              if (lVar39 != 0) {
                plVar43 = *(long **)(lVar25 + 0x110);
                *(long *)(lVar25 + 0x100) = lVar39;
                lVar31 = *(long *)(lVar25 + 0x108) - lVar39;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar39,lVar31,8);
                }
              }
              lVar39 = *(long *)(lVar25 + 0xc0);
              if (lVar39 != 0) {
                plVar43 = *(long **)(lVar25 + 0xd8);
                *(long *)(lVar25 + 200) = lVar39;
                lVar31 = *(long *)(lVar25 + 0xd0) - lVar39;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar39,lVar31,8);
                }
              }
              FUN_00f11738(lVar25 + 8);
              plVar43 = *(long **)(lVar50 + 0x1a0);
              uVar27 = *(undefined8 *)(lVar50 + 0x1a8);
              uVar24 = *(undefined8 *)(lVar50 + 0x1b0);
              uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
              if (((uVar26 & 1) == 0) || (lVar39 = FUN_00c4e600(), *(int *)(lVar39 + 0x12c8) < 1)) {
                (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,uVar27,uVar24);
              }
              else {
                FUN_00c48fe8(plVar43,lVar25,uVar27,uVar24);
              }
              lVar25 = FUN_00c4e600();
              iVar18 = *(int *)(lVar25 + 0x12c8) + -1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (iVar18 == 0) {
                plVar43 = (long *)FUN_00c4e600();
                if (plVar43[600] != 0) {
                  local_b8 = plVar43 + plVar43[600] * 3;
                  local_e8 = plVar43;
                  FUN_00c4ea30(&local_e8,&local_b8);
                  local_290 = (long *)*plVar43;
                  plVar19 = plVar43;
                  if (plVar43[600] != 0) {
                    plVar19 = plVar43 + plVar43[600] * 3;
                  }
                  if (plVar19 == plVar43) {
                    lVar39 = 0;
                    local_298 = 0;
                  }
                  else {
                    lVar39 = 0;
                    local_298 = 0;
                    plVar49 = plVar43;
                    do {
                      (**(code **)(*(long *)*plVar49 + 0xd0))();
                      if ((long *)*plVar49 != local_290) {
                        (**(code **)(*local_290 + 0x100))(local_290,plVar43 + local_298 * 3,plVar49)
                        ;
                        local_290 = (long *)*plVar49;
                        local_298 = lVar39;
                      }
                      plVar49 = plVar49 + 3;
                      lVar39 = lVar39 + 1;
                    } while (plVar19 != plVar49);
                  }
                  (**(code **)(*local_290 + 0x100))
                            (local_290,plVar43 + local_298 * 3,plVar43 + lVar39 * 3);
                  plVar43[600] = 0;
                }
                *(undefined4 *)(lVar25 + 0x12cc) = 0;
              }
            }
            *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
            *(long **)(lVar50 + 0x1b0) = local_208;
            *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          }
          local_220 = 0;
          uStack_21f = 0xffffff000000;
          uStack_219 = 0xff;
          uVar26 = FUN_0103b2e0(lVar50 + 0xe8,&local_220);
          plVar43 = (long *)(lVar50 + 0x48);
          lVar39 = *plVar43;
          lVar25 = nn::os::GetCurrentThread();
          if (lVar25 == lVar39) {
            plVar43 = (long *)0x0;
            bVar35 = true;
          }
          else {
            lVar25 = nn::os::GetCurrentThread();
            do {
              if (*plVar43 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x50));
                  while (*plVar43 == 0) {
                    cVar11 = '\x01';
                    bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar35) {
                      *plVar43 = lVar25;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    if (cVar11 == '\0') goto LAB_010070b0;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar11 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar35) {
                *plVar43 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
LAB_010070b0:
            bVar35 = false;
          }
          local_e8 = local_a0;
          puStack_e0 = puStack_98;
          puVar47 = *(undefined8 **)(lVar50 + 0x68);
          if (puVar47 < *(undefined8 **)(lVar50 + 0x70)) {
            uVar27 = *(undefined8 *)(lVar50 + 0x78);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar25 != 0) {
              if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_01009504;
              *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar27;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
            }
            puVar47[4] = lVar50;
            puVar47[5] = uVar26;
            puVar47[8] = puStack_e0;
            puVar47[6] = lVar50;
            puVar47[7] = local_e8;
            *puVar47 = &LAB_02dee35c;
            puVar47[1] = &LAB_02dee3a0;
            puVar47[2] = &LAB_02dee8d0;
            puVar47[3] = &LAB_02dee8e4;
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
            }
            *(undefined8 **)(lVar50 + 0x68) = puVar47 + 0x20;
          }
          else {
            puVar48 = (ulong *)(lVar50 + 0x78);
            lVar31 = FUN_0103b290(lVar50 + 0x60,((long)puVar47 - *(long *)(lVar50 + 0x60) >> 8) + 1)
            ;
            lVar25 = *(long *)(lVar50 + 0x60);
            lVar39 = *(long *)(lVar50 + 0x68);
            local_208 = (long *)0x0;
            local_200 = puVar48;
            if (lVar31 == 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = (**(code **)(*(long *)*puVar48 + 0x10))((long *)*puVar48,lVar31 << 8,0x10);
              if (lVar22 == 0) {
                (**(code **)(*(long *)*puVar48 + 0xe8))();
              }
            }
            puVar47 = (undefined8 *)(lVar22 + (lVar39 - lVar25 >> 8) * 0x100);
            local_220 = (undefined1)lVar22;
            uStack_21f = (undefined6)((ulong)lVar22 >> 8);
            uStack_219 = (undefined1)((ulong)lVar22 >> 0x38);
            local_218 = SUB81(puVar47,0);
            uStack_217 = (undefined6)((ulong)puVar47 >> 8);
            uStack_211 = (undefined1)((ulong)puVar47 >> 0x38);
            local_208 = (long *)(lVar22 + lVar31 * 0x100);
            local_210 = SUB87(puVar47,0);
            uVar36 = *puVar48;
            uStack_209 = uStack_211;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar25 != 0) {
              if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_01009504;
              *(ulong *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar36;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
            }
            puVar47[2] = 0;
            puVar47[3] = 0;
            puVar47[6] = lVar50;
            puVar47[4] = lVar50;
            puVar47[5] = uVar26;
            puVar47[7] = local_e8;
            puVar47[8] = puStack_e0;
            *puVar47 = &LAB_02dee35c;
            puVar47[1] = &LAB_02dee3a0;
            puVar47[2] = &LAB_02dee8d0;
            puVar47[3] = &LAB_02dee8e4;
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
            }
            lVar25 = CONCAT17(uStack_209,local_210) + 0x100;
            local_210 = (undefined7)lVar25;
            uStack_209 = (undefined1)((ulong)lVar25 >> 0x38);
            FUN_0103b38c(lVar50 + 0x60,&local_220);
            FUN_0103bbd0(&local_220);
          }
          if (!bVar35) {
            *plVar43 = 0;
            pLVar21 = (LightEventType *)(plVar43 + 1);
            goto LAB_01007364;
          }
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar43 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x38));
                while (*plVar43 == 0) {
                  cVar11 = '\x01';
                  bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar35) {
                    *plVar43 = lVar25;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  if (cVar11 == '\0') goto LAB_01006f68;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar11 = '\x01';
            bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
            if (bVar35) {
              *plVar43 = lVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
LAB_01006f68:
          lVar25 = *(long *)(lVar50 + 0x198);
          if (lVar25 == 0) {
            local_68 = *(undefined8 *)(lVar50 + 8);
            FUN_0103c0d0(&local_220,local_68,&local_68);
            lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
            lVar39 = *(long *)(lVar50 + 0x198);
            *(long *)(lVar50 + 0x198) = lVar25;
            if (lVar39 == 0) {
              *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
              *(long **)(lVar50 + 0x1b0) = local_208;
              *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            }
            else {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar25 = FUN_00c4e600();
              iVar8 = *(int *)(lVar25 + 0x12c8);
              iVar18 = iVar8 + 1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (*(int *)(lVar25 + 0x12cc) <= iVar8) {
                *(int *)(lVar25 + 0x12cc) = iVar18;
              }
              lVar25 = *(long *)(lVar39 + 0xf8);
              if (lVar25 != 0) {
                plVar43 = *(long **)(lVar39 + 0x110);
                *(long *)(lVar39 + 0x100) = lVar25;
                lVar31 = *(long *)(lVar39 + 0x108) - lVar25;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar25,lVar31,8);
                }
              }
              lVar25 = *(long *)(lVar39 + 0xc0);
              if (lVar25 != 0) {
                plVar43 = *(long **)(lVar39 + 0xd8);
                *(long *)(lVar39 + 200) = lVar25;
                lVar31 = *(long *)(lVar39 + 0xd0) - lVar25;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar25,lVar31,8);
                }
              }
              FUN_00f11738(lVar39 + 8);
              plVar43 = *(long **)(lVar50 + 0x1a0);
              uVar27 = *(undefined8 *)(lVar50 + 0x1a8);
              uVar24 = *(undefined8 *)(lVar50 + 0x1b0);
              uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
              if (((uVar26 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
                (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,uVar27,uVar24);
              }
              else {
                FUN_00c48fe8(plVar43,lVar39,uVar27,uVar24);
              }
              lVar25 = FUN_00c4e600();
              iVar18 = *(int *)(lVar25 + 0x12c8) + -1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (iVar18 == 0) {
                plVar43 = (long *)FUN_00c4e600();
                if (plVar43[600] != 0) {
                  local_b8 = plVar43 + plVar43[600] * 3;
                  local_e8 = plVar43;
                  FUN_00c4ea30(&local_e8,&local_b8);
                  local_290 = (long *)*plVar43;
                  plVar19 = plVar43;
                  if (plVar43[600] != 0) {
                    plVar19 = plVar43 + plVar43[600] * 3;
                  }
                  if (plVar19 == plVar43) {
                    lVar39 = 0;
                    local_298 = 0;
                  }
                  else {
                    lVar39 = 0;
                    local_298 = 0;
                    plVar49 = plVar43;
                    do {
                      (**(code **)(*(long *)*plVar49 + 0xd0))();
                      if ((long *)*plVar49 != local_290) {
                        (**(code **)(*local_290 + 0x100))(local_290,plVar43 + local_298 * 3,plVar49)
                        ;
                        local_290 = (long *)*plVar49;
                        local_298 = lVar39;
                      }
                      plVar49 = plVar49 + 3;
                      lVar39 = lVar39 + 1;
                    } while (plVar19 != plVar49);
                  }
                  (**(code **)(*local_290 + 0x100))
                            (local_290,plVar43 + local_298 * 3,plVar43 + lVar39 * 3);
                  plVar43[600] = 0;
                }
                *(undefined4 *)(lVar25 + 0x12cc) = 0;
              }
              *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
              *(long **)(lVar50 + 0x1b0) = local_208;
              *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
              lVar25 = *(long *)(lVar50 + 0x198);
            }
          }
          uVar27 = FUN_02dee8f8(lVar25 + 8,&local_a0);
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          local_218 = (undefined1)uVar27;
          uStack_217 = (undefined6)((ulong)uVar27 >> 8);
          uStack_211 = (undefined1)((ulong)uVar27 >> 0x38);
          do {
            lVar25 = *(long *)(lVar50 + 0x160) - *(long *)(lVar50 + 0x158);
            if (lVar25 == 0) {
              uVar26 = *(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4;
              FUN_0103b268(lVar50 + 0xe8,&local_220);
              goto LAB_01007268;
            }
            uVar26 = *(ulong *)(*(long *)(lVar50 + 0x160) + -8);
            *(long *)(lVar50 + 0x160) = lVar25 + *(long *)(lVar50 + 0x158) + -8;
            uVar36 = uVar26 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(lVar50 + 0x120) + uVar36) =
                 *(ulong *)(*(long *)(lVar50 + 0x120) + uVar36) &
                 (1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU);
          } while ((ulong)(*(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4) <= uVar26);
          puVar47 = (undefined8 *)(*(long *)(lVar50 + 0xe8) + uVar26 * 0x10);
          *puVar47 = 0;
          puVar47[1] = uVar27;
          if (*(ulong *)(lVar50 + 400) <= uVar26) {
LAB_01007268:
            *(ulong *)(lVar50 + 400) = uVar26 + 1;
          }
          pLVar21 = (LightEventType *)(lVar50 + 0x38);
          *(undefined8 *)(lVar50 + 0x30) = 0;
LAB_01007364:
          nn::os::SignalLightEvent(pLVar21);
        }
        puVar28[5] = uVar26;
        lVar50 = *(long *)(param_1[0x69] + puVar29[3] * 0x130 + 0x118);
        plVar43 = (long *)(lVar50 + 0x30);
        lVar39 = *plVar43;
        local_a0 = param_1;
        puStack_98 = puVar44;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar39) {
          if (*(long *)(lVar50 + 0x198) == 0) {
            local_68 = *(undefined8 *)(lVar50 + 8);
            FUN_0103c0d0(&local_220,local_68,&local_68);
            uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
            lVar25 = *(long *)(lVar50 + 0x198);
            *(undefined8 *)(lVar50 + 0x198) = uVar27;
            if (lVar25 != 0) {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar39 = FUN_00c4e600();
              iVar8 = *(int *)(lVar39 + 0x12c8);
              iVar18 = iVar8 + 1;
              *(int *)(lVar39 + 0x12c8) = iVar18;
              if (*(int *)(lVar39 + 0x12cc) <= iVar8) {
                *(int *)(lVar39 + 0x12cc) = iVar18;
              }
              lVar39 = *(long *)(lVar25 + 0xf8);
              if (lVar39 != 0) {
                plVar43 = *(long **)(lVar25 + 0x110);
                *(long *)(lVar25 + 0x100) = lVar39;
                lVar31 = *(long *)(lVar25 + 0x108) - lVar39;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar39,lVar31,8);
                }
              }
              lVar39 = *(long *)(lVar25 + 0xc0);
              if (lVar39 != 0) {
                plVar43 = *(long **)(lVar25 + 0xd8);
                *(long *)(lVar25 + 200) = lVar39;
                lVar31 = *(long *)(lVar25 + 0xd0) - lVar39;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar39,lVar31,8);
                }
              }
              FUN_00f11738(lVar25 + 8);
              plVar43 = *(long **)(lVar50 + 0x1a0);
              uVar27 = *(undefined8 *)(lVar50 + 0x1a8);
              uVar24 = *(undefined8 *)(lVar50 + 0x1b0);
              uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
              if (((uVar26 & 1) == 0) || (lVar39 = FUN_00c4e600(), *(int *)(lVar39 + 0x12c8) < 1)) {
                (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,uVar27,uVar24);
              }
              else {
                FUN_00c48fe8(plVar43,lVar25,uVar27,uVar24);
              }
              lVar25 = FUN_00c4e600();
              iVar18 = *(int *)(lVar25 + 0x12c8) + -1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (iVar18 == 0) {
                plVar43 = (long *)FUN_00c4e600();
                if (plVar43[600] != 0) {
                  local_b8 = plVar43 + plVar43[600] * 3;
                  local_e8 = plVar43;
                  FUN_00c4ea30(&local_e8,&local_b8);
                  local_278 = (long *)*plVar43;
                  plVar19 = plVar43;
                  if (plVar43[600] != 0) {
                    plVar19 = plVar43 + plVar43[600] * 3;
                  }
                  if (plVar19 == plVar43) {
                    lVar39 = 0;
                    local_298 = 0;
                  }
                  else {
                    lVar39 = 0;
                    local_298 = 0;
                    plVar49 = plVar43;
                    do {
                      (**(code **)(*(long *)*plVar49 + 0xd0))();
                      if ((long *)*plVar49 != local_278) {
                        (**(code **)(*local_278 + 0x100))(local_278,plVar43 + local_298 * 3,plVar49)
                        ;
                        local_278 = (long *)*plVar49;
                        local_298 = lVar39;
                      }
                      plVar49 = plVar49 + 3;
                      lVar39 = lVar39 + 1;
                    } while (plVar19 != plVar49);
                  }
                  (**(code **)(*local_278 + 0x100))
                            (local_278,plVar43 + local_298 * 3,plVar43 + lVar39 * 3);
                  plVar43[600] = 0;
                }
                *(undefined4 *)(lVar25 + 0x12cc) = 0;
              }
            }
            *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
            *(long **)(lVar50 + 0x1b0) = local_208;
            *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          }
          local_220 = 0;
          uStack_21f = 0xffffff000000;
          uStack_219 = 0xff;
          uVar26 = FUN_0103b2e0(lVar50 + 0xe8,&local_220);
          plVar43 = (long *)(lVar50 + 0x48);
          lVar39 = *plVar43;
          lVar25 = nn::os::GetCurrentThread();
          if (lVar25 == lVar39) {
            plVar43 = (long *)0x0;
            bVar35 = true;
          }
          else {
            lVar25 = nn::os::GetCurrentThread();
            do {
              if (*plVar43 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x50));
                  while (*plVar43 == 0) {
                    cVar11 = '\x01';
                    bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar35) {
                      *plVar43 = lVar25;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    if (cVar11 == '\0') goto LAB_0100755c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar11 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar35) {
                *plVar43 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
LAB_0100755c:
            bVar35 = false;
          }
          local_e8 = local_a0;
          puStack_e0 = puStack_98;
          puVar47 = *(undefined8 **)(lVar50 + 0x68);
          if (puVar47 < *(undefined8 **)(lVar50 + 0x70)) {
            uVar27 = *(undefined8 *)(lVar50 + 0x78);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar25 != 0) {
              if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_01009504;
              *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar27;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
            }
            puVar47[4] = lVar50;
            puVar47[5] = uVar26;
            puVar47[8] = puStack_e0;
            puVar47[6] = lVar50;
            puVar47[7] = local_e8;
            *puVar47 = &LAB_02deee1c;
            puVar47[1] = &LAB_02deee60;
            puVar47[2] = &LAB_02def390;
            puVar47[3] = &LAB_02def3a4;
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
            }
            *(undefined8 **)(lVar50 + 0x68) = puVar47 + 0x20;
          }
          else {
            puVar48 = (ulong *)(lVar50 + 0x78);
            lVar31 = FUN_0103b290(lVar50 + 0x60,((long)puVar47 - *(long *)(lVar50 + 0x60) >> 8) + 1)
            ;
            lVar25 = *(long *)(lVar50 + 0x60);
            lVar39 = *(long *)(lVar50 + 0x68);
            local_208 = (long *)0x0;
            local_200 = puVar48;
            if (lVar31 == 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = (**(code **)(*(long *)*puVar48 + 0x10))((long *)*puVar48,lVar31 << 8,0x10);
              if (lVar22 == 0) {
                (**(code **)(*(long *)*puVar48 + 0xe8))();
              }
            }
            puVar47 = (undefined8 *)(lVar22 + (lVar39 - lVar25 >> 8) * 0x100);
            local_220 = (undefined1)lVar22;
            uStack_21f = (undefined6)((ulong)lVar22 >> 8);
            uStack_219 = (undefined1)((ulong)lVar22 >> 0x38);
            local_218 = SUB81(puVar47,0);
            uStack_217 = (undefined6)((ulong)puVar47 >> 8);
            uStack_211 = (undefined1)((ulong)puVar47 >> 0x38);
            local_208 = (long *)(lVar22 + lVar31 * 0x100);
            local_210 = SUB87(puVar47,0);
            uVar36 = *puVar48;
            uStack_209 = uStack_211;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar25 != 0) {
              if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_01009504;
              *(ulong *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar36;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
            }
            puVar47[2] = 0;
            puVar47[3] = 0;
            puVar47[6] = lVar50;
            puVar47[4] = lVar50;
            puVar47[5] = uVar26;
            puVar47[7] = local_e8;
            puVar47[8] = puStack_e0;
            *puVar47 = &LAB_02deee1c;
            puVar47[1] = &LAB_02deee60;
            puVar47[2] = &LAB_02def390;
            puVar47[3] = &LAB_02def3a4;
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
            }
            lVar25 = CONCAT17(uStack_209,local_210) + 0x100;
            local_210 = (undefined7)lVar25;
            uStack_209 = (undefined1)((ulong)lVar25 >> 0x38);
            FUN_0103b38c(lVar50 + 0x60,&local_220);
            FUN_0103bbd0(&local_220);
          }
          if (!bVar35) {
            *plVar43 = 0;
            pLVar21 = (LightEventType *)(plVar43 + 1);
            goto LAB_010077bc;
          }
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar43 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x38));
                while (*plVar43 == 0) {
                  cVar11 = '\x01';
                  bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar35) {
                    *plVar43 = lVar25;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  if (cVar11 == '\0') goto LAB_010073b4;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar11 = '\x01';
            bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
            if (bVar35) {
              *plVar43 = lVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
LAB_010073b4:
          lVar25 = *(long *)(lVar50 + 0x198);
          if (lVar25 == 0) {
            local_68 = *(undefined8 *)(lVar50 + 8);
            FUN_0103c0d0(&local_220,local_68,&local_68);
            lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
            lVar39 = *(long *)(lVar50 + 0x198);
            *(long *)(lVar50 + 0x198) = lVar25;
            if (lVar39 == 0) {
              *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
              *(long **)(lVar50 + 0x1b0) = local_208;
              *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            }
            else {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar25 = FUN_00c4e600();
              iVar8 = *(int *)(lVar25 + 0x12c8);
              iVar18 = iVar8 + 1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (*(int *)(lVar25 + 0x12cc) <= iVar8) {
                *(int *)(lVar25 + 0x12cc) = iVar18;
              }
              lVar25 = *(long *)(lVar39 + 0xf8);
              if (lVar25 != 0) {
                plVar43 = *(long **)(lVar39 + 0x110);
                *(long *)(lVar39 + 0x100) = lVar25;
                lVar31 = *(long *)(lVar39 + 0x108) - lVar25;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar25,lVar31,8);
                }
              }
              lVar25 = *(long *)(lVar39 + 0xc0);
              if (lVar25 != 0) {
                plVar43 = *(long **)(lVar39 + 0xd8);
                *(long *)(lVar39 + 200) = lVar25;
                lVar31 = *(long *)(lVar39 + 0xd0) - lVar25;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar25,lVar31,8);
                }
              }
              FUN_00f11738(lVar39 + 8);
              plVar43 = *(long **)(lVar50 + 0x1a0);
              uVar27 = *(undefined8 *)(lVar50 + 0x1a8);
              uVar24 = *(undefined8 *)(lVar50 + 0x1b0);
              uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
              if (((uVar26 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
                (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,uVar27,uVar24);
              }
              else {
                FUN_00c48fe8(plVar43,lVar39,uVar27,uVar24);
              }
              lVar25 = FUN_00c4e600();
              iVar18 = *(int *)(lVar25 + 0x12c8) + -1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (iVar18 == 0) {
                plVar43 = (long *)FUN_00c4e600();
                if (plVar43[600] != 0) {
                  local_b8 = plVar43 + plVar43[600] * 3;
                  local_e8 = plVar43;
                  FUN_00c4ea30(&local_e8,&local_b8);
                  local_278 = (long *)*plVar43;
                  plVar19 = plVar43;
                  if (plVar43[600] != 0) {
                    plVar19 = plVar43 + plVar43[600] * 3;
                  }
                  if (plVar19 == plVar43) {
                    lVar39 = 0;
                    local_298 = 0;
                  }
                  else {
                    lVar39 = 0;
                    local_298 = 0;
                    plVar49 = plVar43;
                    do {
                      (**(code **)(*(long *)*plVar49 + 0xd0))();
                      if ((long *)*plVar49 != local_278) {
                        (**(code **)(*local_278 + 0x100))(local_278,plVar43 + local_298 * 3,plVar49)
                        ;
                        local_278 = (long *)*plVar49;
                        local_298 = lVar39;
                      }
                      plVar49 = plVar49 + 3;
                      lVar39 = lVar39 + 1;
                    } while (plVar19 != plVar49);
                  }
                  (**(code **)(*local_278 + 0x100))
                            (local_278,plVar43 + local_298 * 3,plVar43 + lVar39 * 3);
                  plVar43[600] = 0;
                }
                *(undefined4 *)(lVar25 + 0x12cc) = 0;
              }
              *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
              *(long **)(lVar50 + 0x1b0) = local_208;
              *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
              lVar25 = *(long *)(lVar50 + 0x198);
            }
          }
          uVar27 = FUN_02def3b8(lVar25 + 8,&local_a0);
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          local_218 = (undefined1)uVar27;
          uStack_217 = (undefined6)((ulong)uVar27 >> 8);
          uStack_211 = (undefined1)((ulong)uVar27 >> 0x38);
          do {
            lVar25 = *(long *)(lVar50 + 0x160) - *(long *)(lVar50 + 0x158);
            if (lVar25 == 0) {
              uVar26 = *(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4;
              FUN_0103b268(lVar50 + 0xe8,&local_220);
              goto LAB_010076b8;
            }
            uVar26 = *(ulong *)(*(long *)(lVar50 + 0x160) + -8);
            *(long *)(lVar50 + 0x160) = lVar25 + *(long *)(lVar50 + 0x158) + -8;
            uVar36 = uVar26 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(lVar50 + 0x120) + uVar36) =
                 *(ulong *)(*(long *)(lVar50 + 0x120) + uVar36) &
                 (1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU);
          } while ((ulong)(*(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4) <= uVar26);
          puVar47 = (undefined8 *)(*(long *)(lVar50 + 0xe8) + uVar26 * 0x10);
          *puVar47 = 0;
          puVar47[1] = uVar27;
          if (*(ulong *)(lVar50 + 400) <= uVar26) {
LAB_010076b8:
            *(ulong *)(lVar50 + 400) = uVar26 + 1;
          }
          *(undefined8 *)(lVar50 + 0x30) = 0;
          pLVar21 = (LightEventType *)(lVar50 + 0x38);
LAB_010077bc:
          nn::os::SignalLightEvent(pLVar21);
        }
        puVar28[6] = uVar26;
        lVar50 = *(long *)(param_1[0x69] + puVar29[3] * 0x130 + 0x120);
        plVar43 = (long *)(lVar50 + 0x30);
        lVar39 = *plVar43;
        local_a0 = param_1;
        puStack_98 = puVar44;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar39) {
          if (*(long *)(lVar50 + 0x198) == 0) {
            local_68 = *(undefined8 *)(lVar50 + 8);
            FUN_0103cc80(&local_220,local_68,&local_68);
            uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
            lVar25 = *(long *)(lVar50 + 0x198);
            *(undefined8 *)(lVar50 + 0x198) = uVar27;
            if (lVar25 != 0) {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar39 = FUN_00c4e600();
              iVar8 = *(int *)(lVar39 + 0x12c8);
              iVar18 = iVar8 + 1;
              *(int *)(lVar39 + 0x12c8) = iVar18;
              if (*(int *)(lVar39 + 0x12cc) <= iVar8) {
                *(int *)(lVar39 + 0x12cc) = iVar18;
              }
              lVar39 = *(long *)(lVar25 + 0xf8);
              if (lVar39 != 0) {
                plVar43 = *(long **)(lVar25 + 0x110);
                *(long *)(lVar25 + 0x100) = lVar39;
                lVar31 = *(long *)(lVar25 + 0x108) - lVar39;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar39,lVar31,8);
                }
              }
              lVar39 = *(long *)(lVar25 + 0xc0);
              if (lVar39 != 0) {
                plVar43 = *(long **)(lVar25 + 0xd8);
                *(long *)(lVar25 + 200) = lVar39;
                lVar31 = *(long *)(lVar25 + 0xd0) - lVar39;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar39,lVar31,8);
                }
              }
              FUN_010920f8(lVar25 + 8);
              plVar43 = *(long **)(lVar50 + 0x1a0);
              uVar27 = *(undefined8 *)(lVar50 + 0x1a8);
              uVar24 = *(undefined8 *)(lVar50 + 0x1b0);
              uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
              if (((uVar26 & 1) == 0) || (lVar39 = FUN_00c4e600(), *(int *)(lVar39 + 0x12c8) < 1)) {
                (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,uVar27,uVar24);
              }
              else {
                FUN_00c48fe8(plVar43,lVar25,uVar27,uVar24);
              }
              lVar25 = FUN_00c4e600();
              iVar18 = *(int *)(lVar25 + 0x12c8) + -1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (iVar18 == 0) {
                plVar43 = (long *)FUN_00c4e600();
                if (plVar43[600] != 0) {
                  local_b8 = plVar43 + plVar43[600] * 3;
                  local_e8 = plVar43;
                  FUN_00c4ea30(&local_e8,&local_b8);
                  plVar49 = (long *)*plVar43;
                  plVar19 = plVar43;
                  if (plVar43[600] != 0) {
                    plVar19 = plVar43 + plVar43[600] * 3;
                  }
                  if (plVar19 == plVar43) {
                    lVar39 = 0;
                    local_228 = 0;
                  }
                  else {
                    lVar39 = 0;
                    local_228 = 0;
                    plVar52 = plVar43;
                    do {
                      (**(code **)(*(long *)*plVar52 + 0xd0))();
                      if ((long *)*plVar52 != plVar49) {
                        (**(code **)(*plVar49 + 0x100))(plVar49,plVar43 + local_228 * 3,plVar52);
                        plVar49 = (long *)*plVar52;
                        local_228 = lVar39;
                      }
                      plVar52 = plVar52 + 3;
                      lVar39 = lVar39 + 1;
                    } while (plVar19 != plVar52);
                  }
                  (**(code **)(*plVar49 + 0x100))
                            (plVar49,plVar43 + local_228 * 3,plVar43 + lVar39 * 3);
                  plVar43[600] = 0;
                }
                *(undefined4 *)(lVar25 + 0x12cc) = 0;
              }
            }
            *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
            *(long **)(lVar50 + 0x1b0) = local_208;
            *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          }
          local_220 = 0;
          uStack_21f = 0xffffff000000;
          uStack_219 = 0xff;
          uVar26 = FUN_0103b2e0(lVar50 + 0xe8,&local_220);
          plVar43 = (long *)(lVar50 + 0x48);
          lVar39 = *plVar43;
          lVar25 = nn::os::GetCurrentThread();
          if (lVar25 == lVar39) {
            plVar43 = (long *)0x0;
            bVar35 = true;
          }
          else {
            lVar25 = nn::os::GetCurrentThread();
            do {
              if (*plVar43 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x50));
                  while (*plVar43 == 0) {
                    cVar11 = '\x01';
                    bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                    if (bVar35) {
                      *plVar43 = lVar25;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    if (cVar11 == '\0') goto LAB_01007950;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar11 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar35) {
                *plVar43 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
LAB_01007950:
            bVar35 = false;
          }
          local_e8 = local_a0;
          puStack_e0 = puStack_98;
          puVar29 = *(undefined8 **)(lVar50 + 0x68);
          if (puVar29 < *(undefined8 **)(lVar50 + 0x70)) {
            uVar27 = *(undefined8 *)(lVar50 + 0x78);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar25 != 0) {
              if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_01009504;
              *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar27;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
            }
            puVar29[4] = lVar50;
            puVar29[5] = uVar26;
            *puVar29 = &LAB_02def8dc;
            puVar29[1] = &LAB_02def920;
            puVar29[6] = lVar50;
            puVar29[7] = local_e8;
            puVar29[8] = puStack_e0;
            puVar29[2] = &LAB_02defe4c;
            puVar29[3] = &LAB_02defe60;
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
            }
            *(undefined8 **)(lVar50 + 0x68) = puVar29 + 0x20;
          }
          else {
            puVar44 = (ulong *)(lVar50 + 0x78);
            lVar31 = FUN_0103b290(lVar50 + 0x60,((long)puVar29 - *(long *)(lVar50 + 0x60) >> 8) + 1)
            ;
            lVar25 = *(long *)(lVar50 + 0x60);
            lVar39 = *(long *)(lVar50 + 0x68);
            local_208 = (long *)0x0;
            local_200 = puVar44;
            if (lVar31 == 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = (**(code **)(*(long *)*puVar44 + 0x10))((long *)*puVar44,lVar31 << 8,0x10);
              if (lVar22 == 0) {
                (**(code **)(*(long *)*puVar44 + 0xe8))();
              }
            }
            puVar29 = (undefined8 *)(lVar22 + (lVar39 - lVar25 >> 8) * 0x100);
            local_220 = (undefined1)lVar22;
            uStack_21f = (undefined6)((ulong)lVar22 >> 8);
            uStack_219 = (undefined1)((ulong)lVar22 >> 0x38);
            local_218 = SUB81(puVar29,0);
            uStack_217 = (undefined6)((ulong)puVar29 >> 8);
            uStack_211 = (undefined1)((ulong)puVar29 >> 0x38);
            local_208 = (long *)(lVar22 + lVar31 * 0x100);
            local_210 = SUB87(puVar29,0);
            uVar36 = *puVar44;
            uStack_209 = uStack_211;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar25 != 0) {
              if (0xf < *(ulong *)(lVar25 + 0x80)) {
LAB_01009504:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(ulong *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar36;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
            }
            puVar29[2] = 0;
            puVar29[3] = 0;
            puVar29[4] = lVar50;
            puVar29[5] = uVar26;
            puVar29[6] = lVar50;
            puVar29[7] = local_e8;
            puVar29[8] = puStack_e0;
            *puVar29 = &LAB_02def8dc;
            puVar29[1] = &LAB_02def920;
            puVar29[2] = &LAB_02defe4c;
            puVar29[3] = &LAB_02defe60;
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
            }
            lVar25 = CONCAT17(uStack_209,local_210) + 0x100;
            local_210 = (undefined7)lVar25;
            uStack_209 = (undefined1)((ulong)lVar25 >> 0x38);
            FUN_0103b38c(lVar50 + 0x60,&local_220);
            FUN_0103bbd0(&local_220);
          }
          if (!bVar35) {
            *plVar43 = 0;
            pLVar21 = (LightEventType *)(plVar43 + 1);
            goto LAB_01007bd8;
          }
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar43 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x38));
                while (*plVar43 == 0) {
                  cVar11 = '\x01';
                  bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar35) {
                    *plVar43 = lVar25;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  if (cVar11 == '\0') goto LAB_0100780c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar11 = '\x01';
            bVar35 = (bool)ExclusiveMonitorPass(plVar43,0x10);
            if (bVar35) {
              *plVar43 = lVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
LAB_0100780c:
          lVar25 = *(long *)(lVar50 + 0x198);
          if (lVar25 == 0) {
            local_68 = *(undefined8 *)(lVar50 + 8);
            FUN_0103cc80(&local_220,local_68,&local_68);
            lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
            local_220 = 0;
            uStack_21f = 0;
            uStack_219 = 0;
            lVar39 = *(long *)(lVar50 + 0x198);
            *(long *)(lVar50 + 0x198) = lVar25;
            if (lVar39 == 0) {
              *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
              *(long **)(lVar50 + 0x1b0) = local_208;
              *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
            }
            else {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar25 = FUN_00c4e600();
              iVar8 = *(int *)(lVar25 + 0x12c8);
              iVar18 = iVar8 + 1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (*(int *)(lVar25 + 0x12cc) <= iVar8) {
                *(int *)(lVar25 + 0x12cc) = iVar18;
              }
              lVar25 = *(long *)(lVar39 + 0xf8);
              if (lVar25 != 0) {
                plVar43 = *(long **)(lVar39 + 0x110);
                *(long *)(lVar39 + 0x100) = lVar25;
                lVar31 = *(long *)(lVar39 + 0x108) - lVar25;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar25,lVar31,8);
                }
              }
              lVar25 = *(long *)(lVar39 + 0xc0);
              if (lVar25 != 0) {
                plVar43 = *(long **)(lVar39 + 0xd8);
                *(long *)(lVar39 + 200) = lVar25;
                lVar31 = *(long *)(lVar39 + 0xd0) - lVar25;
                uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
                if (((uVar26 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar43 + 0x18))(plVar43,lVar25,lVar31,8);
                }
                else {
                  FUN_00c48fe8(plVar43,lVar25,lVar31,8);
                }
              }
              FUN_010920f8(lVar39 + 8);
              plVar43 = *(long **)(lVar50 + 0x1a0);
              uVar27 = *(undefined8 *)(lVar50 + 0x1a8);
              uVar24 = *(undefined8 *)(lVar50 + 0x1b0);
              uVar26 = (**(code **)(*plVar43 + 0xf8))(plVar43);
              if (((uVar26 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
                (**(code **)(*plVar43 + 0x18))(plVar43,lVar39,uVar27,uVar24);
              }
              else {
                FUN_00c48fe8(plVar43,lVar39,uVar27,uVar24);
              }
              lVar25 = FUN_00c4e600();
              iVar18 = *(int *)(lVar25 + 0x12c8) + -1;
              *(int *)(lVar25 + 0x12c8) = iVar18;
              if (iVar18 == 0) {
                plVar43 = (long *)FUN_00c4e600();
                if (plVar43[600] != 0) {
                  local_b8 = plVar43 + plVar43[600] * 3;
                  local_e8 = plVar43;
                  FUN_00c4ea30(&local_e8,&local_b8);
                  plVar49 = (long *)*plVar43;
                  plVar19 = plVar43;
                  if (plVar43[600] != 0) {
                    plVar19 = plVar43 + plVar43[600] * 3;
                  }
                  if (plVar19 == plVar43) {
                    lVar39 = 0;
                    local_228 = 0;
                  }
                  else {
                    lVar39 = 0;
                    local_228 = 0;
                    plVar52 = plVar43;
                    do {
                      (**(code **)(*(long *)*plVar52 + 0xd0))();
                      if ((long *)*plVar52 != plVar49) {
                        (**(code **)(*plVar49 + 0x100))(plVar49,plVar43 + local_228 * 3,plVar52);
                        plVar49 = (long *)*plVar52;
                        local_228 = lVar39;
                      }
                      plVar52 = plVar52 + 3;
                      lVar39 = lVar39 + 1;
                    } while (plVar19 != plVar52);
                  }
                  (**(code **)(*plVar49 + 0x100))
                            (plVar49,plVar43 + local_228 * 3,plVar43 + lVar39 * 3);
                  plVar43[600] = 0;
                }
                *(undefined4 *)(lVar25 + 0x12cc) = 0;
              }
              *(ulong *)(lVar50 + 0x1a8) = CONCAT17(uStack_209,local_210);
              *(long **)(lVar50 + 0x1b0) = local_208;
              *(ulong *)(lVar50 + 0x1a0) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
              lVar25 = *(long *)(lVar50 + 0x198);
            }
          }
          uVar27 = FUN_02defe74(lVar25 + 8,&local_a0);
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          local_218 = (undefined1)uVar27;
          uStack_217 = (undefined6)((ulong)uVar27 >> 8);
          uStack_211 = (undefined1)((ulong)uVar27 >> 0x38);
          do {
            lVar25 = *(long *)(lVar50 + 0x160) - *(long *)(lVar50 + 0x158);
            if (lVar25 == 0) {
              uVar26 = *(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4;
              FUN_0103b268(lVar50 + 0xe8,&local_220);
              goto LAB_01007ae0;
            }
            uVar26 = *(ulong *)(*(long *)(lVar50 + 0x160) + -8);
            *(long *)(lVar50 + 0x160) = lVar25 + *(long *)(lVar50 + 0x158) + -8;
            uVar36 = uVar26 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(lVar50 + 0x120) + uVar36) =
                 *(ulong *)(*(long *)(lVar50 + 0x120) + uVar36) &
                 (1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU);
          } while ((ulong)(*(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4) <= uVar26);
          puVar29 = (undefined8 *)(*(long *)(lVar50 + 0xe8) + uVar26 * 0x10);
          *puVar29 = 0;
          puVar29[1] = uVar27;
          if (*(ulong *)(lVar50 + 400) <= uVar26) {
LAB_01007ae0:
            *(ulong *)(lVar50 + 400) = uVar26 + 1;
          }
          *(undefined8 *)(lVar50 + 0x30) = 0;
          pLVar21 = (LightEventType *)(lVar50 + 0x38);
LAB_01007bd8:
          nn::os::SignalLightEvent(pLVar21);
        }
        puVar28[7] = uVar26;
        do {
          lVar25 = *plVar51;
          lVar39 = param_1[0x53];
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar35) {
            *plVar51 = lVar25;
            param_1[0x53] = lVar39;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        do {
          lVar50 = *plVar51;
          lVar31 = param_1[0x53];
          if (lVar50 != lVar25 || lVar31 != lVar39) {
            bVar35 = false;
            ClearExclusiveLocal();
            goto joined_r0x01007c24;
          }
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar35) {
            *plVar51 = lVar25;
            *(long *)((long)param_1 + 0x294) = lVar39 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        bVar35 = true;
joined_r0x01007c24:
        if (!bVar35) {
          do {
            lVar25 = *plVar51;
            lVar39 = param_1[0x53];
            if (lVar25 != lVar50 || lVar39 != lVar31) {
              bVar35 = false;
              ClearExclusiveLocal();
              lVar50 = lVar25;
              lVar31 = lVar39;
              goto joined_r0x01007c24;
            }
            cVar11 = '\x01';
            bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
            if (bVar35) {
              *plVar51 = lVar50;
              *(long *)((long)param_1 + 0x294) = lVar31 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          bVar35 = true;
          lVar50 = lVar25;
          lVar31 = lVar39;
          goto joined_r0x01007c24;
        }
        nn::os::SignalLightEvent(pLVar2);
      }
LAB_01007c30:
      *plVar30 = 0;
      nn::os::SignalLightEvent(pLVar3);
      if (!bVar42) {
        *local_250 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_250 + 1));
      }
    }
    do {
      lVar25 = *plVar40;
      lVar39 = param_1[0xa7];
      cVar11 = '\x01';
      bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar42) {
        *plVar40 = lVar25;
        param_1[0xa7] = lVar39;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    do {
      lVar50 = *plVar40;
      lVar31 = param_1[0xa7];
      if (lVar50 != lVar25 || lVar31 != lVar39) {
        bVar42 = false;
        ClearExclusiveLocal();
        goto joined_r0x01007c90;
      }
      cVar11 = '\x01';
      bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar42) {
        *plVar40 = 0;
        *(long *)((long)param_1 + 0x534) = lVar39;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar42 = true;
joined_r0x01007c90:
    if (!bVar42) {
      do {
        lVar25 = *plVar40;
        lVar39 = param_1[0xa7];
        if (lVar25 != lVar50 || lVar39 != lVar31) {
          bVar42 = false;
          ClearExclusiveLocal();
          lVar50 = lVar25;
          lVar31 = lVar39;
          goto joined_r0x01007c90;
        }
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = 0;
          *(long *)((long)param_1 + 0x534) = lVar31;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar42 = true;
      lVar50 = lVar25;
      lVar31 = lVar39;
      goto joined_r0x01007c90;
    }
LAB_01004fa8:
    nn::os::SignalLightEvent(pLVar20);
  }
  else {
    *param_2 = 0xfffffffffffffffe;
    do {
      lVar25 = *plVar40;
      lVar39 = param_1[0xa7];
      cVar11 = '\x01';
      bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar42) {
        *plVar40 = lVar25;
        param_1[0xa7] = lVar39;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    do {
      lVar50 = *plVar40;
      lVar31 = param_1[0xa7];
      if (lVar50 != lVar25 || lVar31 != lVar39) {
        bVar42 = false;
        ClearExclusiveLocal();
        goto joined_r0x0100501c;
      }
      cVar11 = '\x01';
      bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar42) {
        *plVar40 = 0;
        *(long *)((long)param_1 + 0x534) = lVar39;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar42 = true;
joined_r0x0100501c:
    if (!bVar42) {
      do {
        lVar25 = *plVar40;
        lVar39 = param_1[0xa7];
        if (lVar25 != lVar50 || lVar39 != lVar31) {
          bVar42 = false;
          ClearExclusiveLocal();
          lVar50 = lVar25;
          lVar31 = lVar39;
          goto joined_r0x0100501c;
        }
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = 0;
          *(long *)((long)param_1 + 0x534) = lVar31;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar42 = true;
      lVar50 = lVar25;
      lVar31 = lVar39;
      goto joined_r0x0100501c;
    }
    nn::os::SignalLightEvent(pLVar20);
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    local_e8 = param_1;
    puStack_e0 = param_2;
    FUN_00dbefa4(&local_d8,param_4);
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    FUN_00f34110(&local_c8,param_3);
    FUN_00f338dc(&local_b8,param_1);
    plVar30 = local_b8;
    plVar40 = local_b8 + 0x33;
    fVar55 = *(float *)(param_1 + 0xa4);
    lVar39 = *plVar40;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 == lVar39) {
      plVar40 = (long *)0x0;
      bVar42 = true;
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar40 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x34));
            while (*plVar40 == 0) {
              cVar11 = '\x01';
              bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar42) {
                *plVar40 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_0100509c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar42) {
          *plVar40 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_0100509c:
      bVar42 = false;
    }
    lVar50 = *plVar30;
    plVar51 = (long *)(lVar50 + 0x30);
    lVar39 = *plVar51;
    lVar25 = nn::os::GetCurrentThread();
    if (lVar25 == lVar39) {
      if (*(long *)(lVar50 + 0x1f8) == 0) {
        local_a0 = *(long **)(lVar50 + 8);
        FUN_0103caf0(&local_220,local_a0,&local_a0);
        uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
        local_220 = 0;
        uStack_21f = 0;
        uStack_219 = 0;
        lVar25 = *(long *)(lVar50 + 0x1f8);
        *(undefined8 *)(lVar50 + 0x1f8) = uVar27;
        if (lVar25 == 0) {
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
        }
        else {
          FUN_0103e9d8(lVar50 + 0x200);
          lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          if (lVar25 != 0) {
            FUN_0103e9d8(&local_218);
          }
        }
      }
      local_220 = 3;
      uStack_21f = 0xffffff000000;
      uStack_219 = 0xff;
      uVar26 = FUN_0103b2e0(lVar50 + 0xe8,&local_220);
      plVar51 = (long *)(lVar50 + 0x48);
      lVar39 = *plVar51;
      lVar25 = nn::os::GetCurrentThread();
      if (lVar25 == lVar39) {
        plVar51 = (long *)0x0;
        bVar35 = true;
      }
      else {
        lVar25 = nn::os::GetCurrentThread();
        do {
          if (*plVar51 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x50));
              while (*plVar51 == 0) {
                cVar11 = '\x01';
                bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                if (bVar35) {
                  *plVar51 = lVar25;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_01005680;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar35) {
            *plVar51 = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_01005680:
        bVar35 = false;
      }
      local_1f0 = 0;
      local_220 = (undefined1)lVar50;
      uStack_21f = (undefined6)((ulong)lVar50 >> 8);
      uStack_219 = (undefined1)((ulong)lVar50 >> 0x38);
      local_218 = (undefined1)uVar26;
      uStack_217 = (undefined6)(uVar26 >> 8);
      uStack_211 = (undefined1)(uVar26 >> 0x38);
      local_210 = (undefined7)lVar50;
      local_208 = local_e8;
      local_200 = puStack_e0;
      local_1f8 = (long *)0x0;
      uStack_209 = uStack_219;
      FUN_00dbefa4(&local_1f8,&local_d8);
      local_1e8 = (long *)0x0;
      local_1e0 = 0;
      FUN_00f34110(&local_1e8,&local_c8);
      local_1d8 = CONCAT44(local_1d8._4_4_,fVar55);
      local_1d0 = 1;
      uVar36 = *(ulong *)(lVar50 + 0x68);
      if (uVar36 < *(ulong *)(lVar50 + 0x70)) {
        FUN_02debec4(*(undefined8 *)(lVar50 + 0x78),uVar36,&local_220);
        *(ulong *)(lVar50 + 0x68) = uVar36 + 0x100;
      }
      else {
        puVar29 = (undefined8 *)(lVar50 + 0x78);
        lVar31 = FUN_0103b290(lVar50 + 0x60,((long)(uVar36 - *(long *)(lVar50 + 0x60)) >> 8) + 1);
        lVar25 = *(long *)(lVar50 + 0x60);
        lVar39 = *(long *)(lVar50 + 0x68);
        local_88 = (long *)0x0;
        puStack_80 = puVar29;
        if (lVar31 == 0) {
          plVar43 = (long *)0x0;
        }
        else {
          plVar43 = (long *)(**(code **)(*(long *)*puVar29 + 0x10))
                                      ((long *)*puVar29,lVar31 << 8,0x10);
          if (plVar43 == (long *)0x0) {
            (**(code **)(*(long *)*puVar29 + 0xe8))();
          }
        }
        puVar44 = (ulong *)((long)plVar43 + (lVar39 - lVar25));
        local_88 = plVar43 + lVar31 * 0x20;
        local_a0 = plVar43;
        puStack_98 = puVar44;
        FUN_02debec4(*puVar29,puVar44,&local_220);
        local_90 = puVar44 + 0x20;
        FUN_0103b38c(lVar50 + 0x60,&local_a0);
        FUN_0103bbd0(&local_a0);
      }
      plVar43 = local_1e8;
      if (local_1e8 != (long *)0x0) {
        plVar19 = local_1e8 + 3;
        do {
          sVar37 = (short)*plVar19;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(short *)plVar19 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 == 1) {
          piVar5 = (int *)((long)local_1e8 + 0x1c);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar12) {
              *piVar5 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_a0 = (long *)*plVar43;
            FUN_00c44438(lVar25 + 0x8040,&local_a0);
          }
        }
        else if (sVar37 == 0) goto LAB_010092d4;
      }
      plVar43 = local_1f8;
      if (local_1f8 != (long *)0x0) {
        plVar19 = local_1f8 + 3;
        do {
          sVar37 = (short)*plVar19;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(short *)plVar19 = sVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar37 == 1) {
          piVar5 = (int *)((long)local_1f8 + 0x1c);
          do {
            iVar18 = *piVar5;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar12) {
              *piVar5 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar18 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_a0 = (long *)*plVar43;
            FUN_00c44438(lVar25 + 0x8040,&local_a0);
          }
        }
        else if (sVar37 == 0) goto LAB_010092d4;
      }
      if (!bVar35) {
        *plVar51 = 0;
        pLVar20 = (LightEventType *)(plVar51 + 1);
        goto LAB_01006318;
      }
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar51 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar50 + 0x38));
            while (*plVar51 == 0) {
              cVar11 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
              if (bVar35) {
                *plVar51 = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_010050d8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar35 = (bool)ExclusiveMonitorPass(plVar51,0x10);
        if (bVar35) {
          *plVar51 = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_010050d8:
      lVar25 = *(long *)(lVar50 + 0x1f8);
      if (lVar25 == 0) {
        local_a0 = *(long **)(lVar50 + 8);
        FUN_0103caf0(&local_220,local_a0,&local_a0);
        uVar27 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
        local_220 = 0;
        uStack_21f = 0;
        uStack_219 = 0;
        lVar25 = *(long *)(lVar50 + 0x1f8);
        *(undefined8 *)(lVar50 + 0x1f8) = uVar27;
        if (lVar25 == 0) {
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
        }
        else {
          FUN_0103e9d8(lVar50 + 0x200);
          lVar25 = CONCAT17(uStack_219,CONCAT61(uStack_21f,local_220));
          *(long **)(lVar50 + 0x210) = local_208;
          *(ulong *)(lVar50 + 0x208) = CONCAT17(uStack_209,local_210);
          *(ulong *)(lVar50 + 0x200) = CONCAT17(uStack_211,CONCAT61(uStack_217,local_218));
          local_220 = 0;
          uStack_21f = 0;
          uStack_219 = 0;
          if (lVar25 != 0) {
            FUN_0103e9d8(&local_218);
          }
        }
        lVar25 = *(long *)(lVar50 + 0x1f8);
      }
      local_a0 = (long *)CONCAT44(local_a0._4_4_,fVar55);
      uVar36 = FUN_02dece00(lVar25 + 8,&local_e8);
      local_220 = (undefined1)uVar36;
      uVar13 = local_220;
      uStack_21f = (undefined6)(uVar36 >> 8);
      uVar14 = uStack_21f;
      uStack_219 = (undefined1)(uVar36 >> 0x38);
      uVar15 = uStack_219;
      plVar51 = (long *)(lVar25 + 0xc0);
      lVar39 = *plVar51;
      lVar31 = *(long *)(lVar25 + 200) - lVar39 >> 3;
      uVar26 = lVar31 * -0x5555555555555555;
      if (uVar26 <= uVar36) {
        uVar45 = uVar36 + 1;
        lVar31 = uVar45 + lVar31 * 0x5555555555555555;
        if (uVar45 < uVar26 || lVar31 == 0) {
          if (uVar45 < uVar26) {
            *(ulong *)(lVar25 + 200) = lVar39 + uVar45 * 0x18;
          }
        }
        else {
          FUN_00e93f30(plVar51,lVar31);
          lVar39 = *plVar51;
        }
      }
      *(undefined1 *)(lVar39 + uVar36 * 0x18) = 0;
      *(undefined8 *)(*(long *)(lVar25 + 0xc0) + uVar36 * 0x18 + 8) = 1;
      uVar16 = local_a0._0_4_;
      *(undefined4 *)(*(long *)(lVar25 + 0xc0) + uVar36 * 0x18 + 0x10) = local_a0._0_4_;
      uVar45 = *(ulong *)(lVar25 + 0x130);
      uVar26 = uVar45 + 1;
      plVar51 = (long *)(lVar25 + 0xf8);
      *(ulong *)(lVar25 + 0x130) = uVar26;
      if (uVar45 == 0) {
        if (*(long *)(lVar25 + 0x100) - (long)*(ulong **)(lVar25 + 0xf8) >> 4 == 0)
        goto LAB_0100563c;
        **(ulong **)(lVar25 + 0xf8) = uVar36;
        lVar25 = *plVar51;
LAB_0100611c:
        *(undefined4 *)(lVar25 + 8) = local_a0._0_4_;
      }
      else {
        pvVar23 = *(void **)(lVar25 + 0xf8);
        uVar32 = *(long *)(lVar25 + 0x100) - (long)pvVar23 >> 4;
        if (*(float *)((long)pvVar23 + (uVar45 - 1) * 0x10 + 8) <= fVar55) {
          if (uVar26 <= uVar32) {
            *(ulong *)((long)pvVar23 + uVar45 * 0x10) = uVar36;
            lVar25 = *plVar51 + uVar45 * 0x10;
            goto LAB_0100611c;
          }
LAB_0100563c:
          FUN_0103e0a0(plVar51,&local_220,&local_a0);
        }
        else {
          if (uVar32 <= uVar26 && uVar26 - uVar32 != 0) {
            FUN_0103e51c(plVar51,uVar26 - uVar32);
            pvVar23 = (void *)*plVar51;
          }
          if (*(float *)((long)pvVar23 + 8) <= fVar55) {
            uVar17 = uVar45 - 1;
            uVar32 = uVar45 - 2;
            uVar26 = 1;
            while (uVar46 = uVar17, 2 < uVar32) {
              uVar6 = uVar26 + (long)((float)uVar32 * 0.5);
              uVar17 = uVar6;
              uVar32 = (long)((float)uVar32 * 0.5);
              if (*(float *)((long)pvVar23 + uVar6 * 0x10 + 8) <= fVar55) {
                uVar17 = uVar46;
                uVar32 = uVar46 - uVar6;
                uVar26 = uVar6;
              }
            }
            if (uVar46 <= uVar45 && uVar26 <= uVar46) {
              pfVar34 = (float *)((long)pvVar23 + uVar46 * 0x10 + 8);
              while (fVar55 < *pfVar34) {
                uVar46 = uVar46 - 1;
                if ((uVar46 < uVar26) || (pfVar34 = pfVar34 + -4, uVar45 < uVar46))
                goto LAB_01006128;
              }
              uVar46 = uVar46 + 1;
            }
LAB_01006128:
            if (uVar46 <= uVar45 && uVar26 <= uVar46) {
              uVar26 = uVar46;
            }
            pvVar23 = (void *)((long)pvVar23 + uVar26 * 0x10);
            memmove((void *)((long)pvVar23 + 0x10),pvVar23,(uVar45 - uVar26) * 0x10);
            *(ulong *)(*plVar51 + uVar26 * 0x10) = uVar36;
            lVar25 = *plVar51 + uVar26 * 0x10;
          }
          else {
            memmove((void *)((long)pvVar23 + 0x10),pvVar23,uVar45 << 4);
            *(ulong *)*plVar51 = uVar36;
            lVar25 = *plVar51;
          }
          *(undefined4 *)(lVar25 + 8) = uVar16;
        }
      }
      local_220 = 3;
      uStack_21f = 0;
      uStack_219 = 0;
      do {
        lVar25 = *(long *)(lVar50 + 0x160) - *(long *)(lVar50 + 0x158);
        local_218 = uVar13;
        uStack_217 = uVar14;
        uStack_211 = uVar15;
        if (lVar25 == 0) {
          uVar26 = *(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4;
          FUN_0103b268(lVar50 + 0xe8,&local_220);
          goto LAB_010061f8;
        }
        uVar26 = *(ulong *)(*(long *)(lVar50 + 0x160) + -8);
        *(long *)(lVar50 + 0x160) = lVar25 + *(long *)(lVar50 + 0x158) + -8;
        uVar45 = uVar26 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(lVar50 + 0x120) + uVar45) =
             *(ulong *)(*(long *)(lVar50 + 0x120) + uVar45) &
             (1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((ulong)(*(long *)(lVar50 + 0xf0) - *(long *)(lVar50 + 0xe8) >> 4) <= uVar26);
      puVar29 = (undefined8 *)(*(long *)(lVar50 + 0xe8) + uVar26 * 0x10);
      *puVar29 = 3;
      puVar29[1] = uVar36;
      if (*(ulong *)(lVar50 + 400) <= uVar26) {
LAB_010061f8:
        *(ulong *)(lVar50 + 400) = uVar26 + 1;
      }
      *(undefined8 *)(lVar50 + 0x30) = 0;
      pLVar20 = (LightEventType *)(lVar50 + 0x38);
LAB_01006318:
      nn::os::SignalLightEvent(pLVar20);
    }
    local_220 = (undefined1)uVar26;
    uStack_21f = (undefined6)(uVar26 >> 8);
    uStack_219 = (undefined1)(uVar26 >> 0x38);
    FUN_0103bd9c(plVar30 + 0x36,&local_220);
    if (!bVar42) {
      *plVar40 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar40 + 1));
    }
    *(float *)(param_1 + 0xa4) = fVar55 + 0.01;
    if (local_a8 != '\0') {
      *local_b0 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_b0 + 1));
    }
    puVar29 = local_c8;
    if (local_c8 != (undefined8 *)0x0) {
      psVar4 = (short *)(local_c8 + 3);
      do {
        sVar37 = *psVar4;
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar42) {
          *psVar4 = sVar37 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar37 == 1) {
        piVar5 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar42) {
            *piVar5 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar18 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          uVar27 = *puVar29;
          local_220 = (undefined1)uVar27;
          uStack_21f = (undefined6)((ulong)uVar27 >> 8);
          uStack_219 = (undefined1)((ulong)uVar27 >> 0x38);
          FUN_00c44438(lVar25 + 0x8040,&local_220);
        }
      }
      else if (sVar37 == 0) goto LAB_010092d4;
    }
    if (local_d8 != (undefined8 *)0x0) {
      psVar4 = (short *)(local_d8 + 3);
      do {
        sVar37 = *psVar4;
        cVar11 = '\x01';
        bVar42 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar42) {
          *psVar4 = sVar37 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar37 == 1) {
        piVar5 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar18 = *piVar5;
          cVar11 = '\x01';
          bVar42 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar42) {
            *piVar5 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_010069dc:
        puVar29 = local_d8;
        if (iVar18 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar18 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          uVar27 = *puVar29;
          local_220 = (undefined1)uVar27;
          uStack_21f = (undefined6)((ulong)uVar27 >> 8);
          uStack_219 = (undefined1)((ulong)uVar27 >> 0x38);
          FUN_00c44438(lVar25 + 0x8040,&local_220);
        }
      }
      else {
LAB_010063c0:
        if (sVar37 == 0) {
LAB_010092d4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
LAB_010063c4:
  if (bVar41) goto LAB_010063e8;
LAB_010063cc:
  if (local_22c != '\0') {
    puVar29 = (undefined8 *)((ulong)plVar54 & 0xff | uVar53 << 8);
    *puVar29 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar29 + 1));
  }
LAB_010063e8:
  if (plVar33 != (long *)0x0) {
    lVar25 = plVar33[6];
    psVar4 = (short *)(lVar25 + 0x1a);
    do {
      sVar37 = *psVar4;
      cVar11 = '\x01';
      bVar41 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar41) {
        *psVar4 = sVar37 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar37 == 1) {
      *(undefined8 *)(lVar25 + 0x10) = 0;
      (**(code **)(*plVar33 + 0x50))(plVar33);
    }
    else if (sVar37 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


