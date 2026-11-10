/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc21b8; name: FUN_00dc21b8
 */


/* WARNING: Removing unreachable block (ram,0x00dc2264) */
/* WARNING: Removing unreachable block (ram,0x00dc2348) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dc21b8(ulong param_1,long param_2,long param_3,ulong param_4,float *param_5)

{
  LightEventType *pLVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  size_t sVar11;
  undefined4 uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  LightEventType *pLVar19;
  void *pvVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  float *pfVar24;
  bool bVar25;
  bool bVar26;
  long *plVar27;
  ulong *puVar28;
  long *plVar29;
  short sVar30;
  ulong *puVar31;
  bool bVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong uVar35;
  long lVar36;
  long *plVar37;
  long *plVar38;
  undefined8 uVar39;
  long *plVar40;
  ulong uVar41;
  long *plVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float extraout_s0;
  float fVar48;
  float extraout_var;
  float fVar49;
  float extraout_var_00;
  float fVar50;
  undefined1 auVar47 [16];
  float extraout_var_01;
  ulong local_1b0;
  long lStack_1a8;
  ulong local_1a0;
  ulong *local_198 [3];
  undefined1 auStack_180 [56];
  ulong *local_148;
  undefined8 *local_140;
  char local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long local_118;
  ulong local_110;
  long local_108;
  ulong local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0;
  float local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  long local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  long local_88;
  long *plStack_80;
  
  fVar46 = *param_5 * *param_5;
  fVar48 = param_5[1] * param_5[1];
  fVar49 = param_5[2] * param_5[2];
  fVar50 = param_5[3] * param_5[3];
  auVar47._0_4_ = fVar46 + fVar48;
  auVar47._4_4_ = fVar49 + fVar50;
  auVar47._8_4_ = fVar46 + fVar48;
  auVar47._12_4_ = fVar49 + fVar50;
  auVar47 = NEON_ext(auVar47,auVar47,4,1);
  if (auVar47._0_4_ + auVar47._4_4_ <= 1.1920929e-07) {
    return;
  }
  plVar17 = (long *)(param_1 + 0x530);
  lVar15 = nn::os::GetCurrentThread();
  do {
    lVar36 = *plVar17;
    lVar22 = *(long *)(param_1 + 0x538);
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar25) {
      *plVar17 = lVar36;
      *(long *)(param_1 + 0x538) = lVar22;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  pLVar19 = (LightEventType *)(param_1 + 0x540);
  do {
    while ((lVar36 != 0 && (lVar15 != lVar36))) {
      nn::os::WaitLightEvent(pLVar19);
      do {
        lVar36 = *plVar17;
        lVar22 = *(long *)(param_1 + 0x538);
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar25) {
          *plVar17 = lVar36;
          *(long *)(param_1 + 0x538) = lVar22;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    while( true ) {
      if (*plVar17 != lVar36 || *(long *)(param_1 + 0x538) != lVar22) break;
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar25) {
        *plVar17 = lVar36;
        *(long *)(param_1 + 0x534) = lVar22 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 == '\0') {
        if (*(char *)(param_1 + 0x550) != '\0') goto LAB_00dc22a4;
        plVar40 = (long *)(param_1 + 0x60);
        lVar15 = nn::os::GetCurrentThread();
        goto LAB_00dc22e8;
      }
    }
    ClearExclusiveLocal();
    lVar36 = *plVar17;
    lVar22 = *(long *)(param_1 + 0x538);
  } while( true );
  while( true ) {
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar25) {
      *plVar40 = lVar15;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') break;
LAB_00dc22e8:
    if (*plVar40 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar40 == 0) {
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar25) {
            *plVar40 = lVar15;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_00dc22f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00dc22f8:
  plVar40 = (long *)(param_1 + 0x290);
  lVar15 = nn::os::GetCurrentThread();
  do {
    lVar36 = *plVar40;
    lVar22 = *(long *)(param_1 + 0x298);
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar25) {
      *plVar40 = lVar36;
      *(long *)(param_1 + 0x298) = lVar22;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  pLVar1 = (LightEventType *)(param_1 + 0x2a0);
  do {
    while ((lVar36 != 0 && (lVar15 != lVar36))) {
      nn::os::WaitLightEvent(pLVar1);
      do {
        lVar36 = *plVar40;
        lVar22 = *(long *)(param_1 + 0x298);
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar25) {
          *plVar40 = lVar36;
          *(long *)(param_1 + 0x298) = lVar22;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    while( true ) {
      if (*plVar40 != lVar36 || *(long *)(param_1 + 0x298) != lVar22) break;
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar25) {
        *plVar40 = lVar36;
        *(long *)(param_1 + 0x294) = lVar22 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 == '\0') {
        plVar27 = *(long **)(param_1 + 0x2b0);
        lVar15 = *(long *)(param_1 + 0x2e8);
        if ((lVar15 == 0) || (*plVar27 == param_2)) {
          plVar37 = plVar27;
          goto LAB_00dc23c0;
        }
        lVar36 = lVar15 * 0x20;
        plVar42 = plVar27;
        goto LAB_00dc23a4;
      }
    }
    ClearExclusiveLocal();
    lVar36 = *plVar40;
    lVar22 = *(long *)(param_1 + 0x298);
  } while( true );
  while( true ) {
    plVar29 = plVar42 + 4;
    plVar37 = plVar42 + 4;
    plVar42 = plVar42 + 4;
    if (*plVar29 == param_2) break;
LAB_00dc23a4:
    lVar36 = lVar36 + -0x20;
    if (lVar36 == 0) goto LAB_00dc2978;
  }
LAB_00dc23c0:
  if (plVar37 != plVar27 + lVar15 * 4) {
    plVar27 = (long *)plVar37[3];
    lVar36 = *(long *)(param_1 + 0x348);
    lVar18 = lVar36 + (long)plVar27 * 0x130;
    plVar37 = (long *)(lVar18 + 0x70);
    plVar42 = (long *)(lVar18 + 0x68);
    lVar22 = *plVar42;
    lVar15 = *plVar37 - lVar22 >> 5;
    uVar16 = lVar15 * -0x5555555555555555;
    if (param_4 < uVar16) {
      uVar12 = 1;
    }
    else {
      uVar35 = param_4 + 1;
      lVar15 = uVar35 + lVar15 * 0x5555555555555555;
      if (uVar35 < uVar16 || lVar15 == 0) {
        if (uVar35 < uVar16) {
          uVar12 = 0;
          *plVar37 = lVar22 + uVar35 * 0x60;
          goto LAB_00dc241c;
        }
      }
      else {
        FUN_01aa8008(plVar42,lVar15);
        lVar22 = *plVar42;
      }
      uVar12 = 0;
    }
LAB_00dc241c:
    lVar15 = lVar22 + param_4 * 0x60;
    *(undefined1 *)(lVar15 + 0x51) = 1;
    memcpy((float *)(lVar15 + 0x20),param_5,0x30);
    if (*(char *)(lVar15 + 0x50) == '\0') {
      fVar46 = *(float *)(lVar15 + 0x20);
      fVar46 = fVar46 * fVar46;
      fVar48 = *(float *)(lVar15 + 0x24) * *(float *)(lVar15 + 0x24);
      fVar49 = *(float *)(lVar15 + 0x28) * *(float *)(lVar15 + 0x28);
      fVar50 = *(float *)(lVar15 + 0x2c) * *(float *)(lVar15 + 0x2c);
      auVar44._0_4_ = fVar46 + fVar48;
      auVar44._4_4_ = fVar49 + fVar50;
      auVar44._8_4_ = fVar46 + fVar48;
      auVar44._12_4_ = fVar49 + fVar50;
      auVar47 = NEON_ext(auVar44,auVar44,4,1);
      fVar46 = SQRT(auVar47._0_4_ + auVar47._4_4_) * 0.5;
      fVar48 = 1.0;
      if (fVar46 < 0.0) {
        fVar48 = 0.0;
      }
      puVar21 = (undefined8 *)(lVar22 + param_4 * 0x60);
      puVar21[1] = puVar21[9];
      *puVar21 = puVar21[8];
      *(float *)(puVar21 + 2) = fVar46 * fVar48 - fVar46 * 0.0;
    }
    FUN_00f1e4c0(lVar18 + 0x60,uVar12,param_4);
    lVar22 = *plVar42;
    lVar15 = *plVar37 - lVar22 >> 5;
    uVar16 = lVar15 * -0x5555555555555555;
    if (param_4 < uVar16) {
      uVar39 = 1;
    }
    else {
      uVar35 = param_4 + 1;
      lVar15 = uVar35 + lVar15 * 0x5555555555555555;
      if (uVar35 < uVar16 || lVar15 == 0) {
        if (uVar35 < uVar16) {
          uVar39 = 0;
          *plVar37 = lVar22 + uVar35 * 0x60;
          goto LAB_00dc2480;
        }
      }
      else {
        FUN_01aa8008(plVar42,lVar15);
        lVar22 = *plVar42;
      }
      uVar39 = 0;
    }
LAB_00dc2480:
    lVar15 = lVar22 + param_4 * 0x60;
    *(undefined1 *)(lVar15 + 0x51) = 1;
    memcpy((float *)(lVar15 + 0x20),param_5,0x30);
    if (*(char *)(lVar15 + 0x50) == '\0') {
      fVar46 = *(float *)(lVar15 + 0x20);
      fVar46 = fVar46 * fVar46;
      fVar48 = *(float *)(lVar15 + 0x24) * *(float *)(lVar15 + 0x24);
      fVar49 = *(float *)(lVar15 + 0x28) * *(float *)(lVar15 + 0x28);
      fVar50 = *(float *)(lVar15 + 0x2c) * *(float *)(lVar15 + 0x2c);
      auVar45._0_4_ = fVar46 + fVar48;
      auVar45._4_4_ = fVar49 + fVar50;
      auVar45._8_4_ = fVar46 + fVar48;
      auVar45._12_4_ = fVar49 + fVar50;
      auVar47 = NEON_ext(auVar45,auVar45,4,1);
      fVar46 = SQRT(auVar47._0_4_ + auVar47._4_4_) * 0.5;
      fVar48 = 1.0;
      if (fVar46 < 0.0) {
        fVar48 = 0.0;
      }
      puVar21 = (undefined8 *)(lVar22 + param_4 * 0x60);
      puVar21[1] = puVar21[9];
      *puVar21 = puVar21[8];
      *(float *)(puVar21 + 2) = fVar46 * fVar48 - fVar46 * 0.0;
    }
    FUN_00f1e4c0(lVar18 + 0x60,uVar39,param_4);
    auVar43._0_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
    auVar43._4_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
    auVar43._8_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
    auVar43._12_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
    auVar47 = NEON_ext(auVar43,auVar43,4,1);
    puVar34 = (ulong *)(lVar36 + (long)plVar27 * 0x130 + 0x10);
    uVar16 = *puVar34;
    uVar35 = uVar16 & 0xfffffffffffffff0 |
             uVar16 & 7 | (ulong)(1.1920929e-07 < auVar47._0_4_ + auVar47._4_4_) << 3;
    *puVar34 = uVar35;
    if (uVar16 == uVar35) {
LAB_00dc2500:
      bVar25 = true;
    }
    else {
      lVar15 = *(long *)(lVar36 + (long)plVar27 * 0x130 + 0x48);
      if ((lVar15 != 0) && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar15 + 0x1a);
        sVar30 = *(short *)(lVar15 + 0x1a);
LAB_00dc4590:
        sVar7 = *psVar2;
        if (sVar7 == sVar30) {
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar25) {
            *psVar2 = sVar30 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_00dc45b4;
          bVar25 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00dc45b4:
          bVar25 = false;
        }
        if (!bVar25) goto code_r0x00dc45bc;
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00dc2a94;
        plVar37 = (long *)(*(long *)(lVar15 + 0x10) + -8);
        do {
          lVar15 = *plVar40;
          lVar22 = *(long *)(param_1 + 0x298);
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar25) {
            *plVar40 = lVar15;
            *(long *)(param_1 + 0x298) = lVar22;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        do {
          lVar18 = *plVar40;
          lVar6 = *(long *)(param_1 + 0x298);
          if (lVar18 != lVar15 || lVar6 != lVar22) {
            bVar25 = false;
            ClearExclusiveLocal();
            goto joined_r0x00dc4618;
          }
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar25) {
            *plVar40 = lVar15;
            *(long *)(param_1 + 0x294) = lVar22 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        bVar25 = true;
joined_r0x00dc4618:
        do {
          if (bVar25) {
            nn::os::SignalLightEvent(pLVar1);
            plVar42 = (long *)(param_1 + 0x2f0);
            lVar22 = *plVar42;
            lVar15 = nn::os::GetCurrentThread();
            if (lVar15 == lVar22) {
              plVar42 = (long *)0x0;
              bVar25 = true;
            }
            else {
              lVar15 = nn::os::GetCurrentThread();
              do {
                if (*plVar42 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
                    while (*plVar42 == 0) {
                      cVar9 = '\x01';
                      bVar25 = (bool)ExclusiveMonitorPass(plVar42,0x10);
                      if (bVar25) {
                        *plVar42 = lVar15;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                      if (cVar9 == '\0') goto LAB_00dc4654;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar9 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(plVar42,0x10);
                if (bVar25) {
                  *plVar42 = lVar15;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
LAB_00dc4654:
              bVar25 = false;
            }
            lVar15 = nn::os::GetCurrentThread();
            do {
              lVar22 = *plVar40;
              lVar18 = *(long *)(param_1 + 0x298);
              cVar9 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar26) {
                *plVar40 = lVar22;
                *(long *)(param_1 + 0x298) = lVar18;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            do {
              while ((lVar22 != 0 && (lVar15 != lVar22))) {
                nn::os::WaitLightEvent(pLVar1);
                do {
                  lVar22 = *plVar40;
                  lVar18 = *(long *)(param_1 + 0x298);
                  cVar9 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar40,0x10);
                  if (bVar26) {
                    *plVar40 = lVar22;
                    *(long *)(param_1 + 0x298) = lVar18;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
              }
              do {
                lVar6 = *plVar40;
                if (lVar6 != lVar22 || *(long *)(param_1 + 0x298) != lVar18) {
                  bVar26 = false;
                  ClearExclusiveLocal();
                  goto LAB_00dc4818;
                }
                cVar9 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar40,0x10);
                if (bVar26) {
                  *plVar40 = lVar22;
                  *(long *)(param_1 + 0x294) = lVar18 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              bVar26 = true;
LAB_00dc4818:
              lVar22 = lVar6;
              lVar18 = *(long *)(param_1 + 0x298);
            } while (!bVar26);
            FUN_0196cdc4(*(undefined8 *)(lVar36 + (long)plVar27 * 0x130 + 0x120),puVar34);
            if (!bVar25) {
              *plVar42 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar42 + 1));
            }
            (**(code **)(*plVar37 + 0x18))(plVar37);
            break;
          }
          do {
            lVar15 = *plVar40;
            lVar22 = *(long *)(param_1 + 0x298);
            if (lVar15 != lVar18 || lVar22 != lVar6) {
              bVar25 = false;
              ClearExclusiveLocal();
              lVar18 = lVar15;
              lVar6 = lVar22;
              goto joined_r0x00dc4618;
            }
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar25) {
              *plVar40 = lVar18;
              *(long *)(param_1 + 0x294) = lVar6 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          bVar25 = true;
          lVar18 = lVar15;
          lVar6 = lVar22;
        } while( true );
      }
LAB_00dc2a94:
      if (((uint)*puVar34 >> 3 & 1) == 0) {
        uVar16 = *(ulong *)(param_1 + 0x1c8);
        if (uVar16 == 0) {
          uVar16 = 0;
        }
        else {
          uVar35 = 0;
          puVar33 = *(ulong **)(param_1 + 0x120);
          do {
            if (((*(ulong *)(param_1 + 0x160) <= uVar35) ||
                ((*(ulong *)(*(long *)(param_1 + 0x158) + (uVar35 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar35 & 0x3f) & 1) == 0)) && ((long *)*puVar33 == plVar27)) goto LAB_00dc2aec;
            uVar35 = uVar35 + 1;
            puVar33 = puVar33 + 0xe;
          } while (uVar16 != uVar35);
          uVar35 = uVar16;
LAB_00dc2aec:
          uVar16 = (ulong)(int)uVar35;
        }
        if (((uint)*puVar34 >> 2 & 1) != 0) {
          lVar15 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f0) + 0x400) +
                            (*(long **)(param_1 + 0x1f0))[2] * 8);
          puVar34 = *(ulong **)(lVar15 + 0x3b0);
          puVar33 = *(ulong **)(lVar15 + 0x3b8);
          if ((puVar34 != puVar33) && (*puVar34 != uVar16)) {
            puVar31 = puVar34;
            do {
              if (puVar33 + -1 == puVar31) {
                puVar34 = puVar33;
                goto LAB_00dc4484;
              }
              puVar34 = puVar31 + 1;
              puVar28 = puVar31 + 1;
              puVar31 = puVar34;
            } while (*puVar28 != uVar16);
          }
          if (puVar34 != puVar33) {
            puVar31 = puVar34 + 1;
            if (puVar31 != puVar33) {
              do {
                puVar28 = puVar34;
                if (*puVar31 != uVar16) {
                  puVar28 = puVar34 + 1;
                  *puVar34 = *puVar31;
                }
                puVar31 = puVar31 + 1;
                puVar34 = puVar28;
              } while (puVar33 != puVar31);
              puVar33 = *(ulong **)(lVar15 + 0x3b8);
            }
          }
LAB_00dc4484:
          sVar11 = (long)puVar33 - (long)(puVar34 + 1);
          if (sVar11 != 0) {
            memmove(puVar34,puVar34 + 1,sVar11);
          }
          *(size_t *)(lVar15 + 0x3b8) = (long)puVar34 + sVar11;
          FUN_02de4fd4(*(undefined8 *)(**(long **)(param_1 + 0x1e8) + 0x400),
                       (*(long **)(param_1 + 0x1e8))[2],uVar16);
          goto LAB_00dc2500;
        }
        plVar37 = *(long **)(param_1 + 0xf8);
        if (plVar37 != (long *)0x0) {
          lVar15 = plVar37[6];
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00dc46dc;
          psVar2 = (short *)(lVar15 + 0x1a);
          do {
            sVar30 = *psVar2;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar25) {
              *psVar2 = sVar30 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar30 == 0) {
            uVar39 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
            *(undefined8 *)(lVar15 + 8) = uVar39;
            *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
          }
          else if (sVar30 == -1) goto LAB_00dc4724;
        }
        nn::os::AcquireSemaphore((SemaphoreType *)(plVar37 + 0x87));
        lVar15 = *(long *)plVar37[0x80];
        puVar34 = *(ulong **)(lVar15 + 0x3b0);
        puVar33 = *(ulong **)(lVar15 + 0x3b8);
        if ((puVar34 != puVar33) && (*puVar34 != uVar16)) {
          puVar31 = puVar34;
          do {
            if (puVar33 + -1 == puVar31) {
              puVar34 = puVar33;
              goto LAB_00dc2bb8;
            }
            puVar34 = puVar31 + 1;
            puVar28 = puVar31 + 1;
            puVar31 = puVar34;
          } while (*puVar28 != uVar16);
        }
        if (puVar34 != puVar33) {
          puVar31 = puVar34 + 1;
          if (puVar31 != puVar33) {
            do {
              puVar28 = puVar34;
              if (*puVar31 != uVar16) {
                puVar28 = puVar34 + 1;
                *puVar34 = *puVar31;
              }
              puVar31 = puVar31 + 1;
              puVar34 = puVar28;
            } while (puVar33 != puVar31);
            puVar33 = *(ulong **)(lVar15 + 0x3b8);
          }
        }
LAB_00dc2bb8:
        sVar11 = (long)puVar33 - (long)(puVar34 + 1);
        if (sVar11 != 0) {
          memmove(puVar34,puVar34 + 1,sVar11);
        }
        *(size_t *)(lVar15 + 0x3b8) = (long)puVar34 + sVar11;
        lVar15 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f8) + 0x400) +
                          (*(long **)(param_1 + 0x1f8))[2] * 8);
        puVar34 = *(ulong **)(lVar15 + 0x3b0);
        puVar33 = *(ulong **)(lVar15 + 0x3b8);
        if ((puVar34 != puVar33) && (*puVar34 != uVar16)) {
          puVar31 = puVar34;
          do {
            if (puVar33 + -1 == puVar31) {
              puVar34 = puVar33;
              goto LAB_00dc2c60;
            }
            puVar34 = puVar31 + 1;
            puVar28 = puVar31 + 1;
            puVar31 = puVar34;
          } while (*puVar28 != uVar16);
        }
        if (puVar34 != puVar33) {
          puVar31 = puVar34 + 1;
          if (puVar31 != puVar33) {
            do {
              puVar28 = puVar34;
              if (*puVar31 != uVar16) {
                puVar28 = puVar34 + 1;
                *puVar34 = *puVar31;
              }
              puVar31 = puVar31 + 1;
              puVar34 = puVar28;
            } while (puVar33 != puVar31);
            puVar33 = *(ulong **)(lVar15 + 0x3b8);
          }
        }
LAB_00dc2c60:
        sVar11 = (long)puVar33 - (long)(puVar34 + 1);
        if (sVar11 != 0) {
          memmove(puVar34,puVar34 + 1,sVar11);
        }
        *(size_t *)(lVar15 + 0x3b8) = (long)puVar34 + sVar11;
        *(undefined8 *)(*(long *)(param_1 + 0x120) + uVar16 * 0x70) = 0xffffffffffffffff;
        *(undefined1 *)(*(long *)(param_1 + 0x120) + uVar16 * 0x70 + 0x60) = 1;
        if (uVar16 < *(ulong *)(param_1 + 0x1c8)) {
          lVar15 = *(long *)(param_1 + 0x120) + uVar16 * 0x70;
          plVar27 = *(long **)(lVar15 + 8);
          *(undefined8 *)(lVar15 + 8) = 0;
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))();
          }
          FUN_028c4c00((long *)(param_1 + 0x120),uVar16);
        }
        nn::os::ReleaseSemaphore((SemaphoreType *)(plVar37 + 0x87));
        if (plVar37 != (long *)0x0) {
          lVar15 = plVar37[6];
          psVar2 = (short *)(lVar15 + 0x1a);
          do {
            sVar30 = *psVar2;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar25) {
              *psVar2 = sVar30 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          goto LAB_00dc339c;
        }
      }
      else {
        plVar37 = *(long **)(param_1 + 0xf8);
        if (plVar37 != (long *)0x0) {
          lVar15 = plVar37[6];
          if (*(long *)(lVar15 + 0x10) == 0) {
LAB_00dc46dc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar2 = (short *)(lVar15 + 0x1a);
          do {
            sVar30 = *psVar2;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar25) {
              *psVar2 = sVar30 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar30 == 0) {
            uVar39 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
            *(undefined8 *)(lVar15 + 8) = uVar39;
            *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
          }
          else if (sVar30 == -1) {
LAB_00dc4724:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        nn::os::AcquireSemaphore((SemaphoreType *)(plVar37 + 0x87));
        if ((*(byte *)puVar34 >> 2 & 1) == 0) {
          local_110 = local_110 & 0xffffffffffffff00;
          local_128 = (long *)0x0;
          local_120 = (long *)0xffffffffffffffff;
          local_e0[0] = 0;
          local_d0 = 0;
          local_130 = plVar27;
          lVar15 = FUN_028c4f64(param_1 + 0x120,&local_130);
          if (local_128 != (long *)0x0) {
            (**(code **)(*local_128 + 0x18))();
          }
          FUN_02de4fd4(plVar37[0x80],0,lVar15);
          plVar27 = (long *)(param_1 + 0x1f8);
        }
        else {
          uVar16 = *(ulong *)(param_1 + 0x1c8);
          if (uVar16 == 0) {
            lVar15 = 0;
          }
          else {
            uVar35 = 0;
            puVar34 = *(ulong **)(param_1 + 0x120);
            do {
              if (((*(ulong *)(param_1 + 0x160) <= uVar35) ||
                  ((*(ulong *)(*(long *)(param_1 + 0x158) + (uVar35 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar35 & 0x3f) & 1) == 0)) && ((long *)*puVar34 == plVar27)) goto LAB_00dc3354;
              uVar35 = uVar35 + 1;
              puVar34 = puVar34 + 0xe;
            } while (uVar16 != uVar35);
            uVar35 = uVar16;
LAB_00dc3354:
            lVar15 = (long)(int)uVar35;
          }
          plVar27 = (long *)(param_1 + 0x1f0);
        }
        FUN_02de4fd4(*(undefined8 *)(*(long *)*plVar27 + 0x400),((long *)*plVar27)[2],lVar15);
        nn::os::ReleaseSemaphore((SemaphoreType *)(plVar37 + 0x87));
        if (plVar37 != (long *)0x0) {
          lVar15 = plVar37[6];
          psVar2 = (short *)(lVar15 + 0x1a);
          do {
            sVar30 = *psVar2;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar25) {
              *psVar2 = sVar30 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
LAB_00dc339c:
          if (sVar30 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*plVar37 + 0x50))(plVar37);
          }
          else if (sVar30 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      bVar25 = true;
    }
    goto LAB_00dc3f50;
  }
LAB_00dc2978:
  plVar27 = (long *)(param_1 + 0x6d8);
  lVar36 = *plVar27;
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 == lVar36) {
    plVar27 = (long *)0x0;
    bVar26 = true;
  }
  else {
    lVar15 = nn::os::GetCurrentThread();
    do {
      if (*plVar27 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6e0));
          while (*plVar27 == 0) {
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar25) {
              *plVar27 = lVar15;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') {
              bVar26 = false;
              goto LAB_00dc2d44;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar25) {
        *plVar27 = lVar15;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar26 = false;
  }
LAB_00dc2d44:
  plVar42 = *(long **)(param_1 + 0x6f0);
  lVar15 = *(long *)(param_1 + 0x728);
  plVar37 = plVar42;
  if ((lVar15 != 0) && (*plVar42 != param_3)) {
    lVar36 = lVar15 * 0x10;
    plVar29 = plVar42;
    do {
      lVar36 = lVar36 + -0x10;
      if (lVar36 == 0) {
        plVar37 = plVar42 + lVar15 * 2;
        goto LAB_00dc2d88;
      }
      plVar37 = plVar29 + 2;
      plVar38 = plVar29 + 2;
      plVar29 = plVar37;
    } while (*plVar38 != param_3);
  }
LAB_00dc2d88:
  if (plVar42 + lVar15 * 2 == plVar37) {
    bVar25 = true;
  }
  else {
    plVar37 = (long *)(param_1 + 0x948);
    lVar36 = *plVar37;
    lVar15 = nn::os::GetCurrentThread();
    if (lVar15 == lVar36) {
      plVar37 = (long *)0x0;
      bVar32 = true;
    }
    else {
      lVar15 = nn::os::GetCurrentThread();
      do {
        if (*plVar37 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x950));
            while (*plVar37 == 0) {
              cVar9 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar25) {
                *plVar37 = lVar15;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00dc2f94;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar25) {
          *plVar37 = lVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00dc2f94:
      bVar32 = false;
    }
    plVar42 = *(long **)(param_1 + 0x960);
    lVar15 = *(long *)(param_1 + 0x998);
    if ((lVar15 == 0) || (*plVar42 == param_2)) {
      plVar29 = plVar42;
    }
    else {
      lVar36 = lVar15 * 0x10;
      plVar38 = plVar42;
      do {
        lVar36 = lVar36 + -0x10;
        if (lVar36 == 0) goto LAB_00dc3634;
        plVar29 = plVar38 + 2;
        plVar4 = plVar38 + 2;
        plVar38 = plVar29;
      } while (*plVar4 != param_2);
    }
    if (plVar29 == plVar42 + lVar15 * 2) {
LAB_00dc3634:
      do {
        lVar15 = *plVar17;
        lVar36 = *(long *)(param_1 + 0x538);
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar25) {
          *plVar17 = lVar15;
          *(long *)(param_1 + 0x538) = lVar36;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        lVar22 = *plVar17;
        lVar18 = *(long *)(param_1 + 0x538);
        if (lVar22 != lVar15 || lVar18 != lVar36) {
          bVar25 = false;
          ClearExclusiveLocal();
          goto joined_r0x00dc3670;
        }
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar25) {
          *plVar17 = lVar15;
          *(long *)(param_1 + 0x534) = lVar36 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar25 = true;
joined_r0x00dc3670:
      if (!bVar25) {
        do {
          lVar15 = *plVar17;
          lVar36 = *(long *)(param_1 + 0x538);
          if (lVar15 != lVar22 || lVar36 != lVar18) {
            bVar25 = false;
            ClearExclusiveLocal();
            lVar22 = lVar15;
            lVar18 = lVar36;
            goto joined_r0x00dc3670;
          }
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar25) {
            *plVar17 = lVar22;
            *(long *)(param_1 + 0x534) = lVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        bVar25 = true;
        lVar22 = lVar15;
        lVar18 = lVar36;
        goto joined_r0x00dc3670;
      }
      nn::os::SignalLightEvent(pLVar19);
      local_1b0 = param_1;
      lStack_1a8 = param_2;
      local_1a0 = param_4;
      FUN_00d5f508(local_198,param_3);
      memcpy(auStack_180,param_5,0x30);
      FUN_00f338dc(&local_148,param_1);
      puVar34 = local_148 + 0x33;
      fVar46 = *(float *)(param_1 + 0x520);
      uVar35 = *puVar34;
      uVar16 = nn::os::GetCurrentThread();
      if (uVar16 == uVar35) {
        puVar34 = (ulong *)0x0;
        bVar25 = true;
      }
      else {
        uVar16 = nn::os::GetCurrentThread();
        do {
          if (*puVar34 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(local_148 + 0x34));
              while (*puVar34 == 0) {
                cVar9 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(puVar34,0x10);
                if (bVar25) {
                  *puVar34 = uVar16;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_00dc36f4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(puVar34,0x10);
          if (bVar25) {
            *puVar34 = uVar16;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_00dc36f4:
        bVar25 = false;
      }
      plVar42 = (long *)*local_148;
      plVar17 = plVar42 + 6;
      lVar36 = *plVar17;
      lVar15 = nn::os::GetCurrentThread();
      if (lVar15 == lVar36) {
        if (plVar42[0x3f] == 0) {
          local_a0 = plVar42[1];
          FUN_0103caf0(&local_130,local_a0,&local_a0);
          plVar17 = local_130;
          local_130 = (long *)0x0;
          lVar15 = plVar42[0x3f];
          plVar42[0x3f] = (long)plVar17;
          if (lVar15 == 0) {
            plVar42[0x42] = local_118;
            plVar42[0x41] = (long)local_120;
            plVar42[0x40] = (long)local_128;
          }
          else {
            FUN_0103e9d8(plVar42 + 0x40);
            plVar17 = local_130;
            plVar42[0x42] = local_118;
            plVar42[0x41] = (long)local_120;
            plVar42[0x40] = (long)local_128;
            local_130 = (long *)0x0;
            if (plVar17 != (long *)0x0) {
              FUN_0103e9d8(&local_128);
            }
          }
        }
        local_130 = (long *)0xffffffff00000003;
        plVar29 = (long *)FUN_0103b2e0(plVar42 + 0x1d,&local_130);
        plVar17 = plVar42 + 9;
        lVar36 = *plVar17;
        lVar15 = nn::os::GetCurrentThread();
        if (lVar15 == lVar36) {
          plVar17 = (long *)0x0;
          bVar10 = true;
        }
        else {
          lVar15 = nn::os::GetCurrentThread();
          do {
            if (*plVar17 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(plVar42 + 10));
                while (*plVar17 == 0) {
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar10) {
                    *plVar17 = lVar15;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') goto LAB_00dc3950;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar10) {
              *plVar17 = lVar15;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
LAB_00dc3950:
          bVar10 = false;
        }
        local_f0 = 0;
        local_110 = local_1b0;
        local_108 = lStack_1a8;
        local_100 = local_1a0;
        local_f8 = (long *)0x0;
        local_130 = plVar42;
        local_128 = plVar29;
        local_120 = plVar42;
        FUN_00f34110(&local_f8,local_198);
        memcpy(local_e0,auStack_180,0x30);
        local_a8 = 1;
        puVar21 = (undefined8 *)plVar42[0xd];
        local_b0 = fVar46;
        if (puVar21 < (undefined8 *)plVar42[0xe]) {
          lVar15 = plVar42[0xf];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar36 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar36 != 0) {
            if (0xf < *(ulong *)(lVar36 + 0x80)) goto LAB_00dc460c;
            *(long *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = lVar15;
            *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
          }
          puVar21[2] = 0;
          puVar21[3] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[4] = local_130;
          puVar21[5] = local_128;
          puVar21[6] = local_120;
          puVar21[9] = local_108;
          puVar21[10] = local_100;
          puVar21[0xc] = 0;
          puVar21[8] = local_110;
          puVar21[0xb] = 0;
          FUN_00fd9730(puVar21 + 0xb,&local_f8);
          memcpy(puVar21 + 0xe,local_e0,0x30);
          *puVar21 = &LAB_02df8710;
          puVar21[1] = &LAB_02df8990;
          puVar21[0x14] = CONCAT44(uStack_ac,local_b0);
          puVar21[0x15] = local_a8;
          puVar21[2] = &LAB_02df9290;
          puVar21[3] = &LAB_02df92fc;
          if (lVar36 != 0) {
            *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
          }
          plVar42[0xd] = (long)(puVar21 + 0x20);
        }
        else {
          plVar38 = plVar42 + 0xf;
          lVar22 = FUN_0103b290(plVar42 + 0xc,((long)puVar21 - plVar42[0xc] >> 8) + 1);
          lVar15 = plVar42[0xc];
          lVar36 = plVar42[0xd];
          local_88 = 0;
          plStack_80 = plVar38;
          if (lVar22 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = (**(code **)(*(long *)*plVar38 + 0x10))((long *)*plVar38,lVar22 << 8,0x10);
            if (lVar18 == 0) {
              (**(code **)(*(long *)*plVar38 + 0xe8))();
            }
          }
          puVar21 = (undefined8 *)(lVar18 + (lVar36 - lVar15 >> 8) * 0x100);
          local_88 = lVar18 + lVar22 * 0x100;
          lVar15 = *plVar38;
          local_a0 = lVar18;
          puStack_98 = puVar21;
          local_90 = puVar21;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar36 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar36 != 0) {
            if (0xf < *(ulong *)(lVar36 + 0x80)) goto LAB_00dc460c;
            *(long *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = lVar15;
            *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
          }
          puVar21[2] = 0;
          puVar21[3] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[4] = local_130;
          puVar21[5] = local_128;
          puVar21[6] = local_120;
          puVar21[0xb] = 0;
          puVar21[8] = local_110;
          puVar21[0xc] = 0;
          puVar21[9] = local_108;
          puVar21[10] = local_100;
          FUN_00fd9730(puVar21 + 0xb,&local_f8);
          memcpy(puVar21 + 0xe,local_e0,0x30);
          puVar21[0x14] = CONCAT44(uStack_ac,local_b0);
          puVar21[0x15] = local_a8;
          *puVar21 = &LAB_02df8710;
          puVar21[1] = &LAB_02df8990;
          puVar21[2] = &LAB_02df9290;
          puVar21[3] = &LAB_02df92fc;
          if (lVar36 != 0) {
            *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
          }
          local_90 = local_90 + 0x20;
          FUN_0103b38c(plVar42 + 0xc,&local_a0);
          FUN_0103bbd0(&local_a0);
        }
        plVar42 = local_f8;
        if (local_f8 != (long *)0x0) {
          plVar38 = local_f8 + 3;
          do {
            sVar30 = (short)*plVar38;
            cVar9 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar38,0x10);
            if (bVar8) {
              *(short *)plVar38 = sVar30 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar30 == 1) {
            piVar3 = (int *)((long)local_f8 + 0x1c);
            do {
              iVar14 = *piVar3;
              cVar9 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar14 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_a0 = *plVar42;
              FUN_00c44438(lVar15 + 0x8040,&local_a0);
            }
          }
          else if (sVar30 == 0) goto LAB_00dc3234;
        }
        if (!bVar10) {
          *plVar17 = 0;
          pLVar19 = (LightEventType *)(plVar17 + 1);
          goto LAB_00dc3e94;
        }
      }
      else {
        lVar15 = nn::os::GetCurrentThread();
        do {
          if (*plVar17 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(plVar42 + 7));
              while (*plVar17 == 0) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar10) {
                  *plVar17 = lVar15;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_00dc3730;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar10) {
            *plVar17 = lVar15;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_00dc3730:
        lVar15 = plVar42[0x3f];
        if (lVar15 == 0) {
          local_a0 = plVar42[1];
          FUN_0103caf0(&local_130,local_a0,&local_a0);
          plVar17 = local_130;
          local_130 = (long *)0x0;
          lVar15 = plVar42[0x3f];
          plVar42[0x3f] = (long)plVar17;
          if (lVar15 == 0) {
            plVar42[0x42] = local_118;
            plVar42[0x41] = (long)local_120;
            plVar42[0x40] = (long)local_128;
            local_130 = (long *)0x0;
          }
          else {
            FUN_0103e9d8(plVar42 + 0x40);
            plVar17 = local_130;
            plVar42[0x42] = local_118;
            plVar42[0x41] = (long)local_120;
            plVar42[0x40] = (long)local_128;
            local_130 = (long *)0x0;
            if (plVar17 != (long *)0x0) {
              FUN_0103e9d8(&local_128);
            }
          }
          lVar15 = plVar42[0x3f];
        }
        local_a0 = CONCAT44(local_a0._4_4_,fVar46);
        plVar17 = (long *)FUN_02df9368(lVar15 + 8,&local_1b0);
        plVar38 = (long *)(lVar15 + 0xc0);
        lVar36 = *plVar38;
        lVar22 = *(long *)(lVar15 + 200) - lVar36 >> 3;
        plVar29 = (long *)(lVar22 * -0x5555555555555555);
        local_130 = plVar17;
        if (plVar29 <= plVar17) {
          plVar4 = (long *)((long)plVar17 + 1);
          lVar22 = (long)plVar4 + lVar22 * 0x5555555555555555;
          if (plVar4 < plVar29 || lVar22 == 0) {
            if (plVar4 < plVar29) {
              *(long *)(lVar15 + 200) = lVar36 + (long)plVar4 * 0x18;
            }
          }
          else {
            FUN_00e93f30(plVar38,lVar22);
            lVar36 = *plVar38;
          }
        }
        *(undefined1 *)(lVar36 + (long)plVar17 * 0x18) = 0;
        *(undefined8 *)(*(long *)(lVar15 + 0xc0) + (long)plVar17 * 0x18 + 8) = 1;
        uVar12 = (undefined4)local_a0;
        *(undefined4 *)(*(long *)(lVar15 + 0xc0) + (long)plVar17 * 0x18 + 0x10) =
             (undefined4)local_a0;
        uVar35 = *(ulong *)(lVar15 + 0x130);
        uVar16 = uVar35 + 1;
        plVar29 = (long *)(lVar15 + 0xf8);
        *(ulong *)(lVar15 + 0x130) = uVar16;
        if (uVar35 == 0) {
          if (*(long *)(lVar15 + 0x100) - (long)*(ulong **)(lVar15 + 0xf8) >> 4 == 0) {
            FUN_0103e0a0(plVar29,&local_130,&local_a0);
          }
          else {
            **(ulong **)(lVar15 + 0xf8) = (ulong)plVar17;
            *(undefined4 *)(*plVar29 + 8) = (undefined4)local_a0;
          }
        }
        else {
          pvVar20 = *(void **)(lVar15 + 0xf8);
          uVar23 = *(long *)(lVar15 + 0x100) - (long)pvVar20 >> 4;
          if (*(float *)((long)pvVar20 + (uVar35 - 1) * 0x10 + 8) <= fVar46) {
            if (uVar23 < uVar16) {
              FUN_0103e0a0(plVar29,&local_130,&local_a0);
            }
            else {
              *(long **)((long)pvVar20 + uVar35 * 0x10) = plVar17;
              *(undefined4 *)(*plVar29 + uVar35 * 0x10 + 8) = (undefined4)local_a0;
            }
          }
          else {
            if (uVar23 <= uVar16 && uVar16 - uVar23 != 0) {
              FUN_0103e51c(plVar29,uVar16 - uVar23);
              pvVar20 = (void *)*plVar29;
            }
            if (*(float *)((long)pvVar20 + 8) <= fVar46) {
              uVar13 = uVar35 - 1;
              uVar23 = uVar35 - 2;
              uVar16 = 1;
              while (uVar41 = uVar13, 2 < uVar23) {
                uVar5 = uVar16 + (long)((float)uVar23 * 0.5);
                uVar13 = uVar5;
                uVar23 = (long)((float)uVar23 * 0.5);
                if (*(float *)((long)pvVar20 + uVar5 * 0x10 + 8) <= fVar46) {
                  uVar13 = uVar41;
                  uVar23 = uVar41 - uVar5;
                  uVar16 = uVar5;
                }
              }
              if (uVar41 <= uVar35 && uVar16 <= uVar41) {
                pfVar24 = (float *)((long)pvVar20 + uVar41 * 0x10 + 8);
                while (fVar46 < *pfVar24) {
                  uVar41 = uVar41 - 1;
                  if ((uVar41 < uVar16) || (pfVar24 = pfVar24 + -4, uVar35 < uVar41))
                  goto LAB_00dc3c58;
                }
                uVar41 = uVar41 + 1;
              }
LAB_00dc3c58:
              if (uVar41 <= uVar35 && uVar16 <= uVar41) {
                uVar16 = uVar41;
              }
              pvVar20 = (void *)((long)pvVar20 + uVar16 * 0x10);
              memmove((void *)((long)pvVar20 + 0x10),pvVar20,(uVar35 - uVar16) * 0x10);
              *(long **)(*plVar29 + uVar16 * 0x10) = plVar17;
              *(undefined4 *)(*plVar29 + uVar16 * 0x10 + 8) = uVar12;
            }
            else {
              memmove((void *)((long)pvVar20 + 0x10),pvVar20,uVar35 << 4);
              *(long **)*plVar29 = plVar17;
              *(undefined4 *)(*plVar29 + 8) = uVar12;
            }
          }
        }
        local_130 = (long *)0x3;
        do {
          lVar15 = plVar42[0x2c] - plVar42[0x2b];
          local_128 = plVar17;
          if (lVar15 == 0) {
            plVar29 = (long *)(plVar42[0x1e] - plVar42[0x1d] >> 4);
            FUN_0103b268(plVar42 + 0x1d,&local_130);
            goto LAB_00dc3d28;
          }
          plVar29 = *(long **)(plVar42[0x2c] + -8);
          plVar42[0x2c] = lVar15 + plVar42[0x2b] + -8;
          uVar16 = (ulong)plVar29 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(plVar42[0x24] + uVar16) =
               *(ulong *)(plVar42[0x24] + uVar16) &
               (1L << ((ulong)plVar29 & 0x3f) ^ 0xffffffffffffffffU);
        } while ((long *)(plVar42[0x1e] - plVar42[0x1d] >> 4) <= plVar29);
        puVar21 = (undefined8 *)(plVar42[0x1d] + (long)plVar29 * 0x10);
        *puVar21 = 3;
        puVar21[1] = plVar17;
        if ((long *)plVar42[0x32] <= plVar29) {
LAB_00dc3d28:
          plVar42[0x32] = (long)plVar29 + 1;
        }
        plVar42[6] = 0;
        pLVar19 = (LightEventType *)(plVar42 + 7);
LAB_00dc3e94:
        nn::os::SignalLightEvent(pLVar19);
      }
      local_130 = plVar29;
      FUN_0103bd9c(local_148 + 0x36,&local_130);
      if (!bVar25) {
        *puVar34 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar34 + 1));
      }
      *(float *)(param_1 + 0x520) = fVar46 + 0.01;
      if (local_138 != '\0') {
        *local_140 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_140 + 1));
      }
      if (local_198[0] != (ulong *)0x0) {
        puVar34 = local_198[0] + 3;
        do {
          sVar30 = (short)*puVar34;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(puVar34,0x10);
          if (bVar25) {
            *(short *)puVar34 = sVar30 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar30 == 1) {
          piVar3 = (int *)((long)local_198[0] + 0x1c);
          do {
            iVar14 = *piVar3;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar25) {
              *piVar3 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_130 = (long *)*local_198[0];
            FUN_00c44438(lVar15 + 0x8040,&local_130);
          }
        }
        else if (sVar30 == 0) goto LAB_00dc3234;
      }
      plVar17 = (long *)0x0;
      bVar25 = false;
    }
    else {
      bVar25 = true;
      *(undefined1 *)(plVar29 + 1) = 1;
    }
    if (!bVar32) {
      *plVar37 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar37 + 1));
    }
  }
  if (!bVar26) {
    *plVar27 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar27 + 1));
  }
LAB_00dc3f50:
  do {
    lVar15 = *plVar40;
    lVar36 = *(long *)(param_1 + 0x298);
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar26) {
      *plVar40 = lVar15;
      *(long *)(param_1 + 0x298) = lVar36;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar22 = *plVar40;
    lVar18 = *(long *)(param_1 + 0x298);
    if (lVar22 != lVar15 || lVar18 != lVar36) {
      bVar26 = false;
      ClearExclusiveLocal();
      goto joined_r0x00dc3f8c;
    }
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar26) {
      *plVar40 = lVar15;
      *(long *)(param_1 + 0x294) = lVar36 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar26 = true;
joined_r0x00dc3f8c:
  if (!bVar26) {
    do {
      lVar15 = *plVar40;
      lVar36 = *(long *)(param_1 + 0x298);
      if (lVar15 != lVar22 || lVar36 != lVar18) {
        bVar26 = false;
        ClearExclusiveLocal();
        lVar22 = lVar15;
        lVar18 = lVar36;
        goto joined_r0x00dc3f8c;
      }
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar26) {
        *plVar40 = lVar22;
        *(long *)(param_1 + 0x294) = lVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar26 = true;
    lVar22 = lVar15;
    lVar18 = lVar36;
    goto joined_r0x00dc3f8c;
  }
  nn::os::SignalLightEvent(pLVar1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  if (!bVar25) {
    return;
  }
  do {
    lVar15 = *plVar17;
    lVar36 = plVar17[1];
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar25) {
      *plVar17 = lVar15;
      plVar17[1] = lVar36;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar22 = *plVar17;
    lVar18 = plVar17[1];
    if (lVar22 != lVar15 || lVar18 != lVar36) {
      bVar25 = false;
      ClearExclusiveLocal();
      goto joined_r0x00dc3fe8;
    }
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar25) {
      *plVar17 = lVar15;
      *(long *)((long)plVar17 + 4) = lVar36 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar25 = true;
joined_r0x00dc3fe8:
  do {
    if (bVar25) {
      nn::os::SignalLightEvent((LightEventType *)(plVar17 + 2));
      return;
    }
    do {
      lVar15 = *plVar17;
      lVar36 = plVar17[1];
      if (lVar15 != lVar22 || lVar36 != lVar18) {
        bVar25 = false;
        ClearExclusiveLocal();
        lVar22 = lVar15;
        lVar18 = lVar36;
        goto joined_r0x00dc3fe8;
      }
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar25) {
        *plVar17 = lVar22;
        *(long *)((long)plVar17 + 4) = lVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar25 = true;
    lVar22 = lVar15;
    lVar18 = lVar36;
  } while( true );
code_r0x00dc45bc:
  sVar30 = sVar7;
  if (sVar7 == 0) goto LAB_00dc2a94;
  goto LAB_00dc4590;
LAB_00dc22a4:
  do {
    lVar15 = *plVar17;
    lVar36 = *(long *)(param_1 + 0x538);
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar25) {
      *plVar17 = lVar15;
      *(long *)(param_1 + 0x538) = lVar36;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar22 = *plVar17;
    lVar18 = *(long *)(param_1 + 0x538);
    if (lVar22 != lVar15 || lVar18 != lVar36) {
      bVar25 = false;
      ClearExclusiveLocal();
      goto joined_r0x00dc2510;
    }
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar25) {
      *plVar17 = lVar15;
      *(long *)(param_1 + 0x534) = lVar36 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar25 = true;
joined_r0x00dc2510:
  if (!bVar25) {
    do {
      lVar15 = *plVar17;
      lVar36 = *(long *)(param_1 + 0x538);
      if (lVar15 != lVar22 || lVar36 != lVar18) {
        bVar25 = false;
        ClearExclusiveLocal();
        lVar22 = lVar15;
        lVar18 = lVar36;
        goto joined_r0x00dc2510;
      }
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar25) {
        *plVar17 = lVar22;
        *(long *)(param_1 + 0x534) = lVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar25 = true;
    lVar22 = lVar15;
    lVar18 = lVar36;
    goto joined_r0x00dc2510;
  }
  nn::os::SignalLightEvent(pLVar19);
  local_1b0 = param_1;
  lStack_1a8 = param_2;
  local_1a0 = param_4;
  FUN_00d5f508(local_198,param_3);
  memcpy(auStack_180,param_5,0x30);
  FUN_00f338dc(&local_148,param_1);
  puVar34 = local_148 + 0x33;
  fVar46 = *(float *)(param_1 + 0x520);
  uVar35 = *puVar34;
  uVar16 = nn::os::GetCurrentThread();
  if (uVar16 == uVar35) {
    puVar34 = (ulong *)0x0;
    bVar25 = true;
  }
  else {
    uVar16 = nn::os::GetCurrentThread();
    do {
      if (*puVar34 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(local_148 + 0x34));
          while (*puVar34 == 0) {
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar34,0x10);
            if (bVar25) {
              *puVar34 = uVar16;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_00dc2590;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar34,0x10);
      if (bVar25) {
        *puVar34 = uVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_00dc2590:
    bVar25 = false;
  }
  plVar40 = (long *)*local_148;
  plVar17 = plVar40 + 6;
  lVar36 = *plVar17;
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 == lVar36) {
    if (plVar40[0x3f] == 0) {
      local_a0 = plVar40[1];
      FUN_0103caf0(&local_130,local_a0,&local_a0);
      plVar17 = local_130;
      local_130 = (long *)0x0;
      lVar15 = plVar40[0x3f];
      plVar40[0x3f] = (long)plVar17;
      if (lVar15 == 0) {
        plVar40[0x42] = local_118;
        plVar40[0x41] = (long)local_120;
        plVar40[0x40] = (long)local_128;
      }
      else {
        FUN_0103e9d8(plVar40 + 0x40);
        plVar17 = local_130;
        plVar40[0x42] = local_118;
        plVar40[0x41] = (long)local_120;
        plVar40[0x40] = (long)local_128;
        local_130 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          FUN_0103e9d8(&local_128);
        }
      }
    }
    local_130 = (long *)0xffffffff00000003;
    plVar27 = (long *)FUN_0103b2e0(plVar40 + 0x1d,&local_130);
    plVar17 = plVar40 + 9;
    lVar36 = *plVar17;
    lVar15 = nn::os::GetCurrentThread();
    if (lVar15 == lVar36) {
      plVar17 = (long *)0x0;
      bVar26 = true;
    }
    else {
      lVar15 = nn::os::GetCurrentThread();
      do {
        if (*plVar17 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar40 + 10));
            while (*plVar17 == 0) {
              cVar9 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar26) {
                *plVar17 = lVar15;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00dc27e4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar9 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar26) {
          *plVar17 = lVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00dc27e4:
      bVar26 = false;
    }
    local_110 = local_1b0;
    local_108 = lStack_1a8;
    local_f0 = 0;
    local_100 = local_1a0;
    local_f8 = (long *)0x0;
    local_130 = plVar40;
    local_128 = plVar27;
    local_120 = plVar40;
    FUN_00f34110(&local_f8,local_198);
    memcpy(local_e0,auStack_180,0x30);
    local_a8 = 1;
    puVar21 = (undefined8 *)plVar40[0xd];
    local_b0 = fVar46;
    if (puVar21 < (undefined8 *)plVar40[0xe]) {
      lVar15 = plVar40[0xf];
      if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar36 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar36 != 0) {
        if (0xf < *(ulong *)(lVar36 + 0x80)) goto LAB_00dc460c;
        *(long *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = lVar15;
        *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
      }
      puVar21[2] = 0;
      puVar21[3] = 0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[4] = local_130;
      puVar21[5] = local_128;
      puVar21[6] = local_120;
      puVar21[9] = local_108;
      puVar21[10] = local_100;
      puVar21[0xc] = 0;
      puVar21[8] = local_110;
      puVar21[0xb] = 0;
      FUN_00fd9730(puVar21 + 0xb,&local_f8);
      memcpy(puVar21 + 0xe,local_e0,0x30);
      puVar21[0x14] = CONCAT44(uStack_ac,local_b0);
      puVar21[0x15] = local_a8;
      *puVar21 = &LAB_02df72c8;
      puVar21[1] = &LAB_02df7548;
      puVar21[2] = &LAB_02df7e48;
      puVar21[3] = &LAB_02df7eb4;
      if (lVar36 != 0) {
        *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
      }
      plVar40[0xd] = (long)(puVar21 + 0x20);
    }
    else {
      plVar37 = plVar40 + 0xf;
      lVar22 = FUN_0103b290(plVar40 + 0xc,((long)puVar21 - plVar40[0xc] >> 8) + 1);
      lVar15 = plVar40[0xc];
      lVar36 = plVar40[0xd];
      local_88 = 0;
      plStack_80 = plVar37;
      if (lVar22 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = (**(code **)(*(long *)*plVar37 + 0x10))((long *)*plVar37,lVar22 << 8,0x10);
        if (lVar18 == 0) {
          (**(code **)(*(long *)*plVar37 + 0xe8))();
        }
      }
      puVar21 = (undefined8 *)(lVar18 + (lVar36 - lVar15 >> 8) * 0x100);
      local_88 = lVar18 + lVar22 * 0x100;
      lVar15 = *plVar37;
      local_a0 = lVar18;
      puStack_98 = puVar21;
      local_90 = puVar21;
      if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar36 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar36 != 0) {
        if (0xf < *(ulong *)(lVar36 + 0x80)) {
LAB_00dc460c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = lVar15;
        *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
      }
      puVar21[2] = 0;
      puVar21[3] = 0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[4] = local_130;
      puVar21[5] = local_128;
      puVar21[6] = local_120;
      puVar21[0xb] = 0;
      puVar21[8] = local_110;
      puVar21[0xc] = 0;
      puVar21[9] = local_108;
      puVar21[10] = local_100;
      FUN_00fd9730(puVar21 + 0xb,&local_f8);
      memcpy(puVar21 + 0xe,local_e0,0x30);
      puVar21[0x14] = CONCAT44(uStack_ac,local_b0);
      puVar21[0x15] = local_a8;
      *puVar21 = &LAB_02df72c8;
      puVar21[1] = &LAB_02df7548;
      puVar21[2] = &LAB_02df7e48;
      puVar21[3] = &LAB_02df7eb4;
      if (lVar36 != 0) {
        *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
      }
      local_90 = local_90 + 0x20;
      FUN_0103b38c(plVar40 + 0xc,&local_a0);
      FUN_0103bbd0(&local_a0);
    }
    plVar40 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar37 = local_f8 + 3;
      do {
        sVar30 = (short)*plVar37;
        cVar9 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar32) {
          *(short *)plVar37 = sVar30 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar30 == 1) {
        piVar3 = (int *)((long)local_f8 + 0x1c);
        do {
          iVar14 = *piVar3;
          cVar9 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar32) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar14 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_a0 = *plVar40;
          FUN_00c44438(lVar15 + 0x8040,&local_a0);
        }
      }
      else if (sVar30 == 0) goto LAB_00dc3234;
    }
    if (!bVar26) {
      *plVar17 = 0;
      pLVar19 = (LightEventType *)(plVar17 + 1);
      goto LAB_00dc31b0;
    }
  }
  else {
    lVar15 = nn::os::GetCurrentThread();
    do {
      if (*plVar17 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar40 + 7));
          while (*plVar17 == 0) {
            cVar9 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar26) {
              *plVar17 = lVar15;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_00dc25c8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar26) {
        *plVar17 = lVar15;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_00dc25c8:
    lVar15 = plVar40[0x3f];
    if (lVar15 == 0) {
      local_a0 = plVar40[1];
      FUN_0103caf0(&local_130,local_a0,&local_a0);
      plVar17 = local_130;
      local_130 = (long *)0x0;
      lVar15 = plVar40[0x3f];
      plVar40[0x3f] = (long)plVar17;
      if (lVar15 == 0) {
        plVar40[0x42] = local_118;
        plVar40[0x41] = (long)local_120;
        plVar40[0x40] = (long)local_128;
        local_130 = (long *)0x0;
      }
      else {
        FUN_0103e9d8(plVar40 + 0x40);
        plVar17 = local_130;
        plVar40[0x42] = local_118;
        plVar40[0x41] = (long)local_120;
        plVar40[0x40] = (long)local_128;
        local_130 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          FUN_0103e9d8(&local_128);
        }
      }
      lVar15 = plVar40[0x3f];
    }
    local_a0 = CONCAT44(local_a0._4_4_,fVar46);
    plVar17 = (long *)FUN_02df7f20(lVar15 + 8,&local_1b0);
    plVar37 = (long *)(lVar15 + 0xc0);
    lVar36 = *plVar37;
    lVar22 = *(long *)(lVar15 + 200) - lVar36 >> 3;
    plVar27 = (long *)(lVar22 * -0x5555555555555555);
    local_130 = plVar17;
    if (plVar27 <= plVar17) {
      plVar42 = (long *)((long)plVar17 + 1);
      lVar22 = (long)plVar42 + lVar22 * 0x5555555555555555;
      if (plVar42 < plVar27 || lVar22 == 0) {
        if (plVar42 < plVar27) {
          *(long *)(lVar15 + 200) = lVar36 + (long)plVar42 * 0x18;
        }
      }
      else {
        FUN_00e93f30(plVar37,lVar22);
        lVar36 = *plVar37;
      }
    }
    *(undefined1 *)(lVar36 + (long)plVar17 * 0x18) = 0;
    *(undefined8 *)(*(long *)(lVar15 + 0xc0) + (long)plVar17 * 0x18 + 8) = 1;
    uVar12 = (undefined4)local_a0;
    *(undefined4 *)(*(long *)(lVar15 + 0xc0) + (long)plVar17 * 0x18 + 0x10) = (undefined4)local_a0;
    uVar35 = *(ulong *)(lVar15 + 0x130);
    uVar16 = uVar35 + 1;
    plVar27 = (long *)(lVar15 + 0xf8);
    *(ulong *)(lVar15 + 0x130) = uVar16;
    if (uVar35 == 0) {
      if (*(long *)(lVar15 + 0x100) - (long)*(ulong **)(lVar15 + 0xf8) >> 4 == 0) {
        FUN_0103e0a0(plVar27,&local_130,&local_a0);
      }
      else {
        **(ulong **)(lVar15 + 0xf8) = (ulong)plVar17;
        *(undefined4 *)(*plVar27 + 8) = (undefined4)local_a0;
      }
    }
    else {
      pvVar20 = *(void **)(lVar15 + 0xf8);
      uVar23 = *(long *)(lVar15 + 0x100) - (long)pvVar20 >> 4;
      if (*(float *)((long)pvVar20 + (uVar35 - 1) * 0x10 + 8) <= fVar46) {
        if (uVar23 < uVar16) {
          FUN_0103e0a0(plVar27,&local_130,&local_a0);
          goto LAB_00dc2ebc;
        }
        *(long **)((long)pvVar20 + uVar35 * 0x10) = plVar17;
        lVar15 = *plVar27 + uVar35 * 0x10;
      }
      else {
        if (uVar23 <= uVar16 && uVar16 - uVar23 != 0) {
          FUN_0103e51c(plVar27,uVar16 - uVar23);
          pvVar20 = (void *)*plVar27;
        }
        if (*(float *)((long)pvVar20 + 8) <= fVar46) {
          uVar13 = uVar35 - 1;
          uVar23 = uVar35 - 2;
          uVar16 = 1;
          while (uVar41 = uVar13, 2 < uVar23) {
            uVar5 = uVar16 + (long)((float)uVar23 * 0.5);
            uVar13 = uVar5;
            uVar23 = (long)((float)uVar23 * 0.5);
            if (*(float *)((long)pvVar20 + uVar5 * 0x10 + 8) <= fVar46) {
              uVar13 = uVar41;
              uVar23 = uVar41 - uVar5;
              uVar16 = uVar5;
            }
          }
          if (uVar41 <= uVar35 && uVar16 <= uVar41) {
            pfVar24 = (float *)((long)pvVar20 + uVar41 * 0x10 + 8);
            while (fVar46 < *pfVar24) {
              uVar41 = uVar41 - 1;
              if ((uVar41 < uVar16) || (pfVar24 = pfVar24 + -4, uVar35 < uVar41)) goto LAB_00dc2e78;
            }
            uVar41 = uVar41 + 1;
          }
LAB_00dc2e78:
          if (uVar41 <= uVar35 && uVar16 <= uVar41) {
            uVar16 = uVar41;
          }
          pvVar20 = (void *)((long)pvVar20 + uVar16 * 0x10);
          memmove((void *)((long)pvVar20 + 0x10),pvVar20,(uVar35 - uVar16) * 0x10);
          *(long **)(*plVar27 + uVar16 * 0x10) = plVar17;
          lVar15 = *plVar27 + uVar16 * 0x10;
        }
        else {
          memmove((void *)((long)pvVar20 + 0x10),pvVar20,uVar35 << 4);
          *(long **)*plVar27 = plVar17;
          lVar15 = *plVar27;
        }
      }
      *(undefined4 *)(lVar15 + 8) = uVar12;
    }
LAB_00dc2ebc:
    local_130 = (long *)0x3;
    do {
      lVar15 = plVar40[0x2c] - plVar40[0x2b];
      local_128 = plVar17;
      if (lVar15 == 0) {
        plVar27 = (long *)(plVar40[0x1e] - plVar40[0x1d] >> 4);
        FUN_0103b268(plVar40 + 0x1d,&local_130);
        goto LAB_00dc2f4c;
      }
      plVar27 = *(long **)(plVar40[0x2c] + -8);
      plVar40[0x2c] = lVar15 + plVar40[0x2b] + -8;
      uVar16 = (ulong)plVar27 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(plVar40[0x24] + uVar16) =
           *(ulong *)(plVar40[0x24] + uVar16) &
           (1L << ((ulong)plVar27 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((long *)(plVar40[0x1e] - plVar40[0x1d] >> 4) <= plVar27);
    puVar21 = (undefined8 *)(plVar40[0x1d] + (long)plVar27 * 0x10);
    *puVar21 = 3;
    puVar21[1] = plVar17;
    if ((long *)plVar40[0x32] <= plVar27) {
LAB_00dc2f4c:
      plVar40[0x32] = (long)plVar27 + 1;
    }
    pLVar19 = (LightEventType *)(plVar40 + 7);
    plVar40[6] = 0;
LAB_00dc31b0:
    nn::os::SignalLightEvent(pLVar19);
  }
  local_130 = plVar27;
  FUN_0103bd9c(local_148 + 0x36,&local_130);
  if (!bVar25) {
    *puVar34 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar34 + 1));
  }
  *(float *)(param_1 + 0x520) = fVar46 + 0.01;
  if (local_138 != '\0') {
    *local_140 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_140 + 1));
  }
  if (local_198[0] != (ulong *)0x0) {
    puVar34 = local_198[0] + 3;
    do {
      sVar30 = (short)*puVar34;
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar34,0x10);
      if (bVar25) {
        *(short *)puVar34 = sVar30 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar30 == 1) {
      piVar3 = (int *)((long)local_198[0] + 0x1c);
      do {
        iVar14 = *piVar3;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar25) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar14 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_130 = (long *)*local_198[0];
        FUN_00c44438(lVar15 + 0x8040,&local_130);
      }
    }
    else if (sVar30 == 0) {
LAB_00dc3234:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


