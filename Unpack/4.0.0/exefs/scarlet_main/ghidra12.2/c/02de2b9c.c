/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02de2b9c; name: FUN_02de2b9c
 */


/* WARNING: Removing unreachable block (ram,0x02de3dbc) */
/* WARNING: Removing unreachable block (ram,0x02de2c78) */
/* WARNING: Removing unreachable block (ram,0x02de3bbc) */
/* WARNING: Removing unreachable block (ram,0x02de3c94) */
/* WARNING: Removing unreachable block (ram,0x02de4710) */
/* WARNING: Removing unreachable block (ram,0x02de3c58) */

void FUN_02de2b9c(long param_1,long param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  undefined8 *puVar3;
  LightEventType *pLVar4;
  int *piVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  bool bVar10;
  char cVar11;
  size_t sVar12;
  undefined4 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  LightEventType *pLVar20;
  void *pvVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  float *pfVar27;
  long lVar28;
  bool bVar29;
  ulong *puVar30;
  long *plVar31;
  long *plVar32;
  short sVar33;
  uint uVar34;
  ulong *puVar35;
  ulong *puVar36;
  bool bVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  ulong uVar41;
  undefined8 uVar42;
  long *plVar43;
  ulong *puVar44;
  long *plVar45;
  ulong uVar46;
  float extraout_s0;
  float fVar47;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar48 [16];
  float fVar49;
  long local_150;
  long local_148;
  ulong local_140;
  ulong local_138;
  ulong *local_130 [3];
  ulong *local_118;
  undefined8 *local_110;
  char local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  long *local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  long local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  long local_88;
  undefined8 *puStack_80;
  
  plVar40 = (long *)(param_1 + 0x948);
  lVar38 = *plVar40;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 == lVar38) {
    plVar40 = (long *)0x0;
    bVar37 = true;
  }
  else {
    lVar16 = nn::os::GetCurrentThread();
    do {
      if (*plVar40 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x950));
          while (*plVar40 == 0) {
            cVar11 = '\x01';
            bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar37) {
              *plVar40 = lVar16;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_02de2c00;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar37) {
        *plVar40 = lVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_02de2c00:
    bVar37 = false;
  }
  local_f8 = CONCAT71(local_f8._1_7_,1);
  local_100 = param_3;
  FUN_01659fb8(param_1 + 0x960,&local_100);
  if (!bVar37) {
    *plVar40 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar40 + 1));
  }
  plVar40 = (long *)(param_1 + 0x530);
  lVar16 = nn::os::GetCurrentThread();
  do {
    lVar38 = *plVar40;
    lVar25 = *(long *)(param_1 + 0x538);
    cVar11 = '\x01';
    bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar37) {
      *plVar40 = lVar38;
      *(long *)(param_1 + 0x538) = lVar25;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  pLVar20 = (LightEventType *)(param_1 + 0x540);
  do {
    while ((lVar38 != 0 && (lVar16 != lVar38))) {
      nn::os::WaitLightEvent(pLVar20);
      do {
        lVar38 = *plVar40;
        lVar25 = *(long *)(param_1 + 0x538);
        cVar11 = '\x01';
        bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar37) {
          *plVar40 = lVar38;
          *(long *)(param_1 + 0x538) = lVar25;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    while( true ) {
      if (*plVar40 != lVar38 || *(long *)(param_1 + 0x538) != lVar25) break;
      cVar11 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar37) {
        *plVar40 = lVar38;
        *(long *)(param_1 + 0x534) = lVar25 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
      if (cVar11 == '\0') {
        if (*(char *)(param_1 + 0x550) != '\0') goto LAB_02de2cb4;
        plVar1 = (long *)(param_1 + 0x60);
        lVar16 = nn::os::GetCurrentThread();
        goto LAB_02de2d20;
      }
    }
    ClearExclusiveLocal();
    lVar38 = *plVar40;
    lVar25 = *(long *)(param_1 + 0x538);
  } while( true );
  while( true ) {
    cVar11 = '\x01';
    bVar37 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar37) {
      *plVar1 = lVar16;
      cVar11 = ExclusiveMonitorsStatus();
    }
    if (cVar11 == '\0') break;
LAB_02de2d20:
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar1 == 0) {
          cVar11 = '\x01';
          bVar37 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar37) {
            *plVar1 = lVar16;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_02de2d30;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_02de2d30:
  if (param_4 != 0xffffffffffffffff) {
    plVar43 = (long *)(param_1 + 0x6d8);
    lVar38 = *plVar43;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 == lVar38) {
      plVar43 = (long *)0x0;
      bVar37 = true;
    }
    else {
      lVar16 = nn::os::GetCurrentThread();
      do {
        if (*plVar43 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6e0));
            while (*plVar43 == 0) {
              cVar11 = '\x01';
              bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar37) {
                *plVar43 = lVar16;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_02de2d64;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
        if (bVar37) {
          *plVar43 = lVar16;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_02de2d64:
      bVar37 = false;
    }
    plVar24 = *(long **)(param_1 + 0x6f0);
    uVar17 = *(ulong *)(param_1 + 0x728);
    if ((uVar17 == 0) || (*plVar24 == param_2)) {
      plVar45 = plVar24;
    }
    else {
      lVar16 = uVar17 * 0x10;
      plVar23 = plVar24;
      do {
        lVar16 = lVar16 + -0x10;
        if (lVar16 == 0) {
          plVar45 = plVar24 + uVar17 * 2;
          break;
        }
        plVar45 = plVar23 + 2;
        plVar32 = plVar23 + 2;
        plVar23 = plVar45;
      } while (*plVar32 != param_2);
    }
    if (plVar24 + uVar17 * 2 != plVar45) {
      uVar39 = (long)plVar45 - (long)plVar24 >> 4;
      if (uVar17 <= uVar39) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("index < m_end","erase",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                   ,0x391,"FlatHashTable::erase iterator out of bounds");
      }
      uVar18 = uVar39 + 1;
      if (uVar18 < (ulong)(*(long *)(param_1 + 0x6f8) - (long)plVar24 >> 4)) {
        memmove(plVar24 + uVar39 * 2,plVar24 + uVar18 * 2,(uVar17 - uVar18) * 0x10);
        uVar17 = *(ulong *)(param_1 + 0x728);
      }
      *(ulong *)(param_1 + 0x728) = uVar17 - 1;
      if (plVar45[1] != -2) {
        if (!bVar37) {
          *plVar43 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar43 + 1));
        }
        plVar43 = (long *)(param_1 + 0x290);
        lVar16 = nn::os::GetCurrentThread();
        do {
          lVar38 = *plVar43;
          lVar25 = *(long *)(param_1 + 0x298);
          cVar11 = '\x01';
          bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar37) {
            *plVar43 = lVar38;
            *(long *)(param_1 + 0x298) = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        pLVar2 = (LightEventType *)(param_1 + 0x2a0);
        do {
          while ((lVar38 != 0 && (lVar16 != lVar38))) {
            nn::os::WaitLightEvent(pLVar2);
            do {
              lVar38 = *plVar43;
              lVar25 = *(long *)(param_1 + 0x298);
              cVar11 = '\x01';
              bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar37) {
                *plVar43 = lVar38;
                *(long *)(param_1 + 0x298) = lVar25;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          while( true ) {
            if (*plVar43 != lVar38 || *(long *)(param_1 + 0x298) != lVar25) break;
            cVar11 = '\x01';
            bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
            if (bVar37) {
              *plVar43 = lVar38;
              *(long *)(param_1 + 0x294) = lVar25 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') {
              puVar44 = *(ulong **)(param_1 + 0x2b0);
              lVar16 = *(long *)(param_1 + 0x2e8);
              if ((lVar16 != 0) && (*puVar44 != param_3)) {
                lVar38 = lVar16 * 0x20;
                puVar30 = puVar44;
                goto LAB_02de3df0;
              }
              puVar35 = puVar44;
              goto LAB_02de3e0c;
            }
          }
          ClearExclusiveLocal();
          lVar38 = *plVar43;
          lVar25 = *(long *)(param_1 + 0x298);
        } while( true );
      }
    }
    if (!bVar37) {
      *plVar43 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar43 + 1));
    }
  }
  bVar37 = true;
  goto LAB_02de2e18;
  while( true ) {
    puVar35 = puVar30 + 4;
    puVar36 = puVar30 + 4;
    puVar30 = puVar35;
    if (*puVar36 == param_3) break;
LAB_02de3df0:
    lVar38 = lVar38 + -0x20;
    if (lVar38 == 0) goto LAB_02de3f74;
  }
LAB_02de3e0c:
  if (puVar35 == puVar44 + lVar16 * 4) {
LAB_02de3f74:
    bVar37 = true;
  }
  else {
    uVar18 = puVar35[3];
    lVar25 = *(long *)(param_1 + 0x348);
    lVar19 = lVar25 + uVar18 * 0x130;
    puVar44 = (ulong *)(lVar19 + 0x10);
    uVar17 = *puVar44;
    plVar24 = (long *)(lVar19 + 0x70);
    plVar45 = (long *)(lVar19 + 0x68);
    lVar16 = *plVar45;
    lVar38 = *plVar24 - lVar16 >> 5;
    uVar39 = lVar38 * -0x5555555555555555;
    if (param_4 < uVar39) {
      uVar42 = 1;
    }
    else {
      uVar41 = param_4 + 1;
      lVar38 = uVar41 + lVar38 * 0x5555555555555555;
      if (uVar41 < uVar39 || lVar38 == 0) {
        if (uVar41 < uVar39) {
          uVar42 = 0;
          *plVar24 = lVar16 + uVar41 * 0x60;
        }
        else {
          uVar42 = 0;
        }
      }
      else {
        FUN_01aa8008(plVar45,lVar38);
        uVar42 = 0;
        lVar16 = *plVar45;
      }
    }
    puVar22 = (undefined8 *)(lVar16 + param_4 * 0x60);
    *(undefined1 *)(puVar22 + 10) = 1;
    *puVar22 = 0;
    puVar22[1] = 0;
    *(undefined4 *)(puVar22 + 2) = 0;
    FUN_0193cb94(&local_100,lVar19 + 0x60,uVar42,param_4);
    uVar34 = 0;
    if ((float)local_f0 <= 1.1920929e-07) {
      uVar34 = (uint)(*puVar44 >> 2) & 1;
      *puVar44 = *puVar44 & 0xfffffffffffffffb;
    }
    local_140 = 0;
    local_138 = 0;
    local_150 = 0;
    local_148 = 0;
    lVar16 = *plVar45;
    lVar38 = *plVar24 - lVar16 >> 5;
    uVar39 = lVar38 * -0x5555555555555555;
    if (param_4 < uVar39) {
      uVar42 = 1;
    }
    else {
      uVar41 = param_4 + 1;
      lVar38 = uVar41 + lVar38 * 0x5555555555555555;
      if (uVar41 < uVar39 || lVar38 == 0) {
        if (uVar41 < uVar39) {
          uVar42 = 0;
          *plVar24 = lVar16 + uVar41 * 0x60;
          goto LAB_02de3efc;
        }
      }
      else {
        FUN_01aa8008(plVar45,lVar38);
        lVar16 = *plVar45;
      }
      uVar42 = 0;
    }
LAB_02de3efc:
    lVar38 = lVar16 + param_4 * 0x60;
    *(undefined1 *)(lVar38 + 0x51) = 1;
    *(undefined8 *)(lVar38 + 0x20) = 0;
    *(undefined8 *)(lVar38 + 0x28) = 0;
    *(long *)(lVar38 + 0x38) = local_148;
    *(ulong *)(lVar38 + 0x48) = local_138;
    *(ulong *)(lVar38 + 0x40) = local_140;
    *(long *)(lVar38 + 0x30) = local_150;
    if (*(char *)(lVar38 + 0x50) == '\0') {
      auVar48 = NEON_ext(ZEXT816(0),ZEXT816(0),4,1);
      puVar22 = (undefined8 *)(lVar16 + param_4 * 0x60);
      fVar47 = SQRT(auVar48._0_4_ + auVar48._4_4_) * 0.5;
      fVar49 = 1.0;
      if (fVar47 < 0.0) {
        fVar49 = 0.0;
      }
      puVar22[1] = puVar22[9];
      *puVar22 = puVar22[8];
      *(float *)(puVar22 + 2) = fVar47 * fVar49 - fVar47 * 0.0;
    }
    FUN_00f1e4c0(lVar19 + 0x60,uVar42,param_4);
    auVar48._0_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
    auVar48._4_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
    auVar48._8_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
    auVar48._12_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
    auVar48 = NEON_ext(auVar48,auVar48,4,1);
    uVar39 = *puVar44;
    if (auVar48._0_4_ + auVar48._4_4_ <= 1.1920929e-07) {
      uVar34 = uVar34 | (uint)(uVar39 >> 3) & 1;
      uVar39 = uVar39 & 0xfffffffffffffff7;
      *puVar44 = uVar39;
    }
    if ((uVar39 == 0) && (uVar34 != 0)) {
      lVar16 = *(long *)(lVar25 + uVar18 * 0x130 + 0x48);
      if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
        psVar6 = (short *)(lVar16 + 0x1a);
        sVar33 = *(short *)(lVar16 + 0x1a);
LAB_02de4628:
        sVar9 = *psVar6;
        if (sVar9 == sVar33) {
          cVar11 = '\x01';
          bVar37 = (bool)ExclusiveMonitorPass(psVar6,0x10);
          if (bVar37) {
            *psVar6 = sVar33 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 != '\0') goto LAB_02de464c;
          bVar37 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02de464c:
          bVar37 = false;
        }
        if (!bVar37) goto code_r0x02de4654;
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 == 0) goto LAB_02de3fac;
        do {
          lVar38 = *plVar43;
          lVar19 = *(long *)(param_1 + 0x298);
          cVar11 = '\x01';
          bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar37) {
            *plVar43 = lVar38;
            *(long *)(param_1 + 0x298) = lVar19;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        do {
          lVar28 = *plVar43;
          lVar8 = *(long *)(param_1 + 0x298);
          if (lVar28 != lVar38 || lVar8 != lVar19) {
            bVar37 = false;
            ClearExclusiveLocal();
            goto joined_r0x02de49b0;
          }
          cVar11 = '\x01';
          bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar37) {
            *plVar43 = lVar38;
            *(long *)(param_1 + 0x294) = lVar19 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        bVar37 = true;
joined_r0x02de49b0:
        do {
          if (bVar37) {
            nn::os::SignalLightEvent(pLVar2);
            plVar24 = (long *)(param_1 + 0x2f0);
            lVar19 = *plVar24;
            lVar38 = nn::os::GetCurrentThread();
            if (lVar38 == lVar19) {
              plVar24 = (long *)0x0;
              bVar37 = true;
            }
            else {
              lVar38 = nn::os::GetCurrentThread();
              do {
                if (*plVar24 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
                    while (*plVar24 == 0) {
                      cVar11 = '\x01';
                      bVar37 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                      if (bVar37) {
                        *plVar24 = lVar38;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                      if (cVar11 == '\0') goto LAB_02de49e8;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar11 = '\x01';
                bVar37 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar37) {
                  *plVar24 = lVar38;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
LAB_02de49e8:
              bVar37 = false;
            }
            lVar38 = nn::os::GetCurrentThread();
            do {
              lVar19 = *plVar43;
              lVar28 = *(long *)(param_1 + 0x298);
              cVar11 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar29) {
                *plVar43 = lVar19;
                *(long *)(param_1 + 0x298) = lVar28;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            do {
              while ((lVar19 != 0 && (lVar38 != lVar19))) {
                nn::os::WaitLightEvent(pLVar2);
                do {
                  lVar19 = *plVar43;
                  lVar28 = *(long *)(param_1 + 0x298);
                  cVar11 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar29) {
                    *plVar43 = lVar19;
                    *(long *)(param_1 + 0x298) = lVar28;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
              }
              do {
                lVar8 = *plVar43;
                if (lVar8 != lVar19 || *(long *)(param_1 + 0x298) != lVar28) {
                  bVar29 = false;
                  ClearExclusiveLocal();
                  goto LAB_02de4b34;
                }
                cVar11 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                if (bVar29) {
                  *plVar43 = lVar19;
                  *(long *)(param_1 + 0x294) = lVar28 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              bVar29 = true;
LAB_02de4b34:
              lVar19 = lVar8;
              lVar28 = *(long *)(param_1 + 0x298);
            } while (!bVar29);
            local_150 = 0;
            FUN_019517a4(*(undefined8 *)(lVar25 + uVar18 * 0x130 + 0x120),&local_150);
            if (!bVar37) {
              *plVar24 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
            }
            (**(code **)(*(long *)(lVar16 + -8) + 0x18))();
            break;
          }
          do {
            lVar38 = *plVar43;
            lVar19 = *(long *)(param_1 + 0x298);
            if (lVar38 != lVar28 || lVar19 != lVar8) {
              bVar37 = false;
              ClearExclusiveLocal();
              lVar28 = lVar38;
              lVar8 = lVar19;
              goto joined_r0x02de49b0;
            }
            cVar11 = '\x01';
            bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
            if (bVar37) {
              *plVar43 = lVar28;
              *(long *)(param_1 + 0x294) = lVar8 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          bVar37 = true;
          lVar28 = lVar38;
          lVar8 = lVar19;
        } while( true );
      }
LAB_02de3fac:
      uVar39 = *(ulong *)(param_1 + 0x1c8);
      if (uVar39 == 0) {
        uVar41 = 0;
      }
      else {
        uVar41 = 0;
        puVar44 = *(ulong **)(param_1 + 0x120);
        do {
          if (((*(ulong *)(param_1 + 0x160) <= uVar41) ||
              ((*(ulong *)(*(long *)(param_1 + 0x158) + (uVar41 >> 3 & 0x1ffffffffffffff8)) >>
                (uVar41 & 0x3f) & 1) == 0)) && (*puVar44 == uVar18)) goto LAB_02de3ffc;
          uVar41 = uVar41 + 1;
          puVar44 = puVar44 + 0xe;
        } while (uVar39 != uVar41);
        uVar41 = uVar39;
      }
LAB_02de3ffc:
      plVar24 = *(long **)(param_1 + 0xf8);
      iVar15 = (int)uVar41;
      if (plVar24 != (long *)0x0) {
        lVar16 = plVar24[6];
        if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar6 = (short *)(lVar16 + 0x1a);
        do {
          sVar33 = *psVar6;
          cVar11 = '\x01';
          bVar37 = (bool)ExclusiveMonitorPass(psVar6,0x10);
          if (bVar37) {
            *psVar6 = sVar33 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar33 == 0) {
          uVar42 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          *(undefined8 *)(lVar16 + 8) = uVar42;
          *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
        }
        else if (sVar33 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        nn::os::AcquireSemaphore((SemaphoreType *)(plVar24 + 0x87));
        lVar16 = (long)iVar15;
        lVar38 = *(long *)plVar24[0x80];
        plVar45 = *(long **)(lVar38 + 0x3b0);
        plVar23 = *(long **)(lVar38 + 0x3b8);
        if ((plVar45 != plVar23) && (*plVar45 != lVar16)) {
          plVar32 = plVar45;
          do {
            if (plVar23 + -1 == plVar32) {
              plVar45 = plVar23;
              goto LAB_02de40c8;
            }
            plVar45 = plVar32 + 1;
            plVar31 = plVar32 + 1;
            plVar32 = plVar45;
          } while (*plVar31 != lVar16);
        }
        if (plVar45 != plVar23) {
          plVar32 = plVar45 + 1;
          if (plVar32 != plVar23) {
            do {
              plVar31 = plVar45;
              if (*plVar32 != lVar16) {
                plVar31 = plVar45 + 1;
                *plVar45 = *plVar32;
              }
              plVar32 = plVar32 + 1;
              plVar45 = plVar31;
            } while (plVar23 != plVar32);
            plVar23 = *(long **)(lVar38 + 0x3b8);
          }
        }
LAB_02de40c8:
        sVar12 = (long)plVar23 - (long)(plVar45 + 1);
        if (sVar12 != 0) {
          memmove(plVar45,plVar45 + 1,sVar12);
        }
        *(size_t *)(lVar38 + 0x3b8) = (long)plVar45 + sVar12;
        nn::os::ReleaseSemaphore((SemaphoreType *)(plVar24 + 0x87));
        lVar16 = plVar24[6];
        psVar6 = (short *)(lVar16 + 0x1a);
        do {
          sVar33 = *psVar6;
          cVar11 = '\x01';
          bVar37 = (bool)ExclusiveMonitorPass(psVar6,0x10);
          if (bVar37) {
            *psVar6 = sVar33 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar33 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*plVar24 + 0x50))(plVar24);
        }
        else if (sVar33 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar34 = (uint)uVar17;
      if ((uVar34 >> 2 & 1) != 0) {
        if (((uVar34 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x1d8) != 0)) {
          lVar16 = (long)iVar15;
          lVar38 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f0) + 0x400) +
                            (*(long **)(param_1 + 0x1f0))[2] * 8);
          plVar24 = *(long **)(lVar38 + 0x3b0);
          plVar45 = *(long **)(lVar38 + 0x3b8);
          if ((plVar24 != plVar45) && (*plVar24 != lVar16)) {
            plVar23 = plVar24;
            do {
              if (plVar45 + -1 == plVar23) {
                plVar24 = plVar45;
                goto LAB_02de41b8;
              }
              plVar24 = plVar23 + 1;
              plVar32 = plVar23 + 1;
              plVar23 = plVar24;
            } while (*plVar32 != lVar16);
          }
          if (plVar24 != plVar45) {
            plVar23 = plVar24 + 1;
            if (plVar23 != plVar45) {
              do {
                plVar32 = plVar24;
                if (*plVar23 != lVar16) {
                  plVar32 = plVar24 + 1;
                  *plVar24 = *plVar23;
                }
                plVar23 = plVar23 + 1;
                plVar24 = plVar32;
              } while (plVar45 != plVar23);
              plVar45 = *(long **)(lVar38 + 0x3b8);
            }
          }
LAB_02de41b8:
          sVar12 = (long)plVar45 - (long)(plVar24 + 1);
          if (sVar12 != 0) {
            memmove(plVar24,plVar24 + 1,sVar12);
          }
          *(size_t *)(lVar38 + 0x3b8) = (long)plVar24 + sVar12;
        }
        if (*(long *)(param_1 + 0x1d0) != 0) {
          lVar16 = (long)iVar15;
          lVar38 = *(long *)(*(long *)(**(long **)(param_1 + 0x1e8) + 0x400) +
                            (*(long **)(param_1 + 0x1e8))[2] * 8);
          plVar24 = *(long **)(lVar38 + 0x3b0);
          plVar45 = *(long **)(lVar38 + 0x3b8);
          if ((plVar24 != plVar45) && (*plVar24 != lVar16)) {
            plVar23 = plVar24;
            do {
              if (plVar45 + -1 == plVar23) {
                plVar24 = plVar45;
                goto LAB_02de4270;
              }
              plVar24 = plVar23 + 1;
              plVar32 = plVar23 + 1;
              plVar23 = plVar24;
            } while (*plVar32 != lVar16);
          }
          if (plVar24 != plVar45) {
            plVar23 = plVar24 + 1;
            if (plVar23 != plVar45) {
              do {
                plVar32 = plVar24;
                if (*plVar23 != lVar16) {
                  plVar32 = plVar24 + 1;
                  *plVar24 = *plVar23;
                }
                plVar23 = plVar23 + 1;
                plVar24 = plVar32;
              } while (plVar45 != plVar23);
              plVar45 = *(long **)(lVar38 + 0x3b8);
            }
          }
LAB_02de4270:
          sVar12 = (long)plVar45 - (long)(plVar24 + 1);
          if (sVar12 != 0) {
            memmove(plVar24,plVar24 + 1,sVar12);
          }
          *(size_t *)(lVar38 + 0x3b8) = (long)plVar24 + sVar12;
        }
      }
      if (((uVar34 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x1e0) != 0)) {
        lVar16 = (long)iVar15;
        lVar38 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f8) + 0x400) +
                          (*(long **)(param_1 + 0x1f8))[2] * 8);
        plVar24 = *(long **)(lVar38 + 0x3b0);
        plVar45 = *(long **)(lVar38 + 0x3b8);
        if ((plVar24 != plVar45) && (*plVar24 != lVar16)) {
          plVar23 = plVar24;
          do {
            if (plVar45 + -1 == plVar23) {
              plVar24 = plVar45;
              goto LAB_02de432c;
            }
            plVar24 = plVar23 + 1;
            plVar32 = plVar23 + 1;
            plVar23 = plVar24;
          } while (*plVar32 != lVar16);
        }
        if (plVar24 != plVar45) {
          plVar23 = plVar24 + 1;
          if (plVar23 != plVar45) {
            do {
              plVar32 = plVar24;
              if (*plVar23 != lVar16) {
                plVar32 = plVar24 + 1;
                *plVar24 = *plVar23;
              }
              plVar23 = plVar23 + 1;
              plVar24 = plVar32;
            } while (plVar45 != plVar23);
            plVar45 = *(long **)(lVar38 + 0x3b8);
          }
        }
LAB_02de432c:
        sVar12 = (long)plVar45 - (long)(plVar24 + 1);
        if (sVar12 != 0) {
          memmove(plVar24,plVar24 + 1,sVar12);
        }
        *(size_t *)(lVar38 + 0x3b8) = (long)plVar24 + sVar12;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x120) + (long)iVar15 * 0x70) = 0xffffffffffffffff;
      *(undefined1 *)(*(long *)(param_1 + 0x120) + (long)iVar15 * 0x70 + 0x60) = 1;
      if ((ulong)(long)iVar15 < *(ulong *)(param_1 + 0x1c8)) {
        lVar16 = *(long *)(param_1 + 0x120) + (long)iVar15 * 0x70;
        plVar24 = *(long **)(lVar16 + 8);
        *(undefined8 *)(lVar16 + 8) = 0;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x18))();
        }
        FUN_028c4c00((long *)(param_1 + 0x120),(long)iVar15);
      }
    }
    bVar37 = false;
    puVar35[2] = puVar35[2] - 1;
  }
  do {
    lVar16 = *plVar43;
    lVar38 = *(long *)(param_1 + 0x298);
    cVar11 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(plVar43,0x10);
    if (bVar29) {
      *plVar43 = lVar16;
      *(long *)(param_1 + 0x298) = lVar38;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar25 = *plVar43;
    lVar19 = *(long *)(param_1 + 0x298);
    if (lVar25 != lVar16 || lVar19 != lVar38) {
      bVar29 = false;
      ClearExclusiveLocal();
      goto joined_r0x02de4404;
    }
    cVar11 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(plVar43,0x10);
    if (bVar29) {
      *plVar43 = lVar16;
      *(long *)(param_1 + 0x294) = lVar38 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar29 = true;
joined_r0x02de4404:
  if (!bVar29) {
    do {
      lVar16 = *plVar43;
      lVar38 = *(long *)(param_1 + 0x298);
      if (lVar16 != lVar25 || lVar38 != lVar19) {
        bVar29 = false;
        ClearExclusiveLocal();
        lVar25 = lVar16;
        lVar19 = lVar38;
        goto joined_r0x02de4404;
      }
      cVar11 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(plVar43,0x10);
      if (bVar29) {
        *plVar43 = lVar25;
        *(long *)(param_1 + 0x294) = lVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar29 = true;
    lVar25 = lVar16;
    lVar19 = lVar38;
    goto joined_r0x02de4404;
  }
  nn::os::SignalLightEvent(pLVar2);
LAB_02de2e18:
  pLVar2 = (LightEventType *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar37) {
    lVar16 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar2);
          while (*plVar1 == 0) {
            cVar11 = '\x01';
            bVar37 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar37) {
              *plVar1 = lVar16;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_02de32c4;
          }
        } while( true );
      }
      cVar11 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar37) {
        *plVar1 = lVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_02de32c4:
    plVar43 = (long *)(param_1 + 0x2f0);
    lVar38 = *plVar43;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 == lVar38) {
      plVar43 = (long *)0x0;
      bVar37 = true;
    }
    else {
      lVar16 = nn::os::GetCurrentThread();
      do {
        if (*plVar43 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
            while (*plVar43 == 0) {
              cVar11 = '\x01';
              bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar37) {
                *plVar43 = lVar16;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_02de32f0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar37 = (bool)ExclusiveMonitorPass(plVar43,0x10);
        if (bVar37) {
          *plVar43 = lVar16;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_02de32f0:
      bVar37 = false;
    }
    puVar44 = *(ulong **)(param_1 + 0x308);
    lVar16 = *(long *)(param_1 + 0x340);
    puVar30 = puVar44 + lVar16 * 8;
    if ((lVar16 != 0) && (*puVar44 != param_3)) {
      lVar16 = lVar16 * 0x40;
      do {
        lVar16 = lVar16 + -0x40;
        if (lVar16 == 0) {
          puVar44 = puVar30;
          goto LAB_02de3424;
        }
        puVar36 = puVar44 + 8;
        puVar44 = puVar44 + 8;
      } while (*puVar36 != param_3);
    }
LAB_02de3424:
    plVar24 = (long *)(param_1 + 0x290);
    lVar16 = nn::os::GetCurrentThread();
    do {
      lVar38 = *plVar24;
      lVar25 = *(long *)(param_1 + 0x298);
      cVar11 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar29) {
        *plVar24 = lVar38;
        *(long *)(param_1 + 0x298) = lVar25;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    pLVar4 = (LightEventType *)(param_1 + 0x2a0);
    if (puVar30 == puVar44) {
      do {
        while ((lVar38 != 0 && (lVar16 != lVar38))) {
          nn::os::WaitLightEvent(pLVar4);
          do {
            lVar38 = *plVar24;
            lVar25 = *(long *)(param_1 + 0x298);
            cVar11 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar29) {
              *plVar24 = lVar38;
              *(long *)(param_1 + 0x298) = lVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        while( true ) {
          if (*plVar24 != lVar38 || *(long *)(param_1 + 0x298) != lVar25) break;
          cVar11 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar29) {
            *plVar24 = lVar38;
            *(long *)(param_1 + 0x294) = lVar25 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') {
            puVar44 = *(ulong **)(param_1 + 0x2b0);
            lVar16 = *(long *)(param_1 + 0x2e8);
            if ((lVar16 != 0) && (*puVar44 != param_3)) {
              lVar38 = lVar16 * 0x20;
              puVar30 = puVar44;
              goto LAB_02de4744;
            }
            puVar35 = puVar44;
            goto LAB_02de4760;
          }
        }
        ClearExclusiveLocal();
        lVar38 = *plVar24;
        lVar25 = *(long *)(param_1 + 0x298);
      } while( true );
    }
    do {
      while ((lVar38 != 0 && (lVar16 != lVar38))) {
        nn::os::WaitLightEvent(pLVar4);
        do {
          lVar38 = *plVar24;
          lVar25 = *(long *)(param_1 + 0x298);
          cVar11 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar29) {
            *plVar24 = lVar38;
            *(long *)(param_1 + 0x298) = lVar25;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      while( true ) {
        if (*plVar24 != lVar38 || *(long *)(param_1 + 0x298) != lVar25) break;
        cVar11 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar29) {
          *plVar24 = lVar38;
          *(long *)(param_1 + 0x294) = lVar25 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
        if (cVar11 == '\0') {
          puVar44 = *(ulong **)(param_1 + 0x2b0);
          lVar16 = *(long *)(param_1 + 0x2e8);
          if ((lVar16 == 0) || (*puVar44 == param_3)) {
            puVar30 = puVar44;
            goto LAB_02de3c0c;
          }
          lVar38 = lVar16 * 0x20;
          puVar36 = puVar44;
          goto LAB_02de3bf0;
        }
      }
      ClearExclusiveLocal();
      lVar38 = *plVar24;
      lVar25 = *(long *)(param_1 + 0x298);
    } while( true );
  }
LAB_02de484c:
  do {
    lVar16 = *plVar40;
    lVar38 = *(long *)(param_1 + 0x538);
    cVar11 = '\x01';
    bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar37) {
      *plVar40 = lVar16;
      *(long *)(param_1 + 0x538) = lVar38;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar25 = *plVar40;
    lVar19 = *(long *)(param_1 + 0x538);
    if (lVar25 != lVar16 || lVar19 != lVar38) {
      bVar37 = false;
      ClearExclusiveLocal();
      goto joined_r0x02de4888;
    }
    cVar11 = '\x01';
    bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar37) {
      *plVar40 = lVar16;
      *(long *)(param_1 + 0x534) = lVar38 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar37 = true;
joined_r0x02de4888:
  do {
    if (bVar37) {
      nn::os::SignalLightEvent(pLVar20);
      return;
    }
    do {
      lVar16 = *plVar40;
      lVar38 = *(long *)(param_1 + 0x538);
      if (lVar16 != lVar25 || lVar38 != lVar19) {
        bVar37 = false;
        ClearExclusiveLocal();
        lVar25 = lVar16;
        lVar19 = lVar38;
        goto joined_r0x02de4888;
      }
      cVar11 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar37) {
        *plVar40 = lVar25;
        *(long *)(param_1 + 0x534) = lVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar37 = true;
    lVar25 = lVar16;
    lVar19 = lVar38;
  } while( true );
code_r0x02de4654:
  sVar33 = sVar9;
  if (sVar9 == 0) goto LAB_02de3fac;
  goto LAB_02de4628;
  while( true ) {
    puVar36 = puVar30 + 4;
    puVar35 = puVar30 + 4;
    puVar30 = puVar30 + 4;
    if (*puVar36 == param_3) break;
LAB_02de4744:
    lVar38 = lVar38 + -0x20;
    if (lVar38 == 0) goto LAB_02de4774;
  }
LAB_02de4760:
  if ((puVar35 == puVar44 + lVar16 * 4) || (puVar35[2] != 0)) {
LAB_02de4774:
    do {
      lVar16 = *plVar24;
      lVar38 = *(long *)(param_1 + 0x298);
      cVar11 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar29) {
        *plVar24 = lVar16;
        *(long *)(param_1 + 0x298) = lVar38;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_02de4788:
    if (*plVar24 == lVar16 && *(long *)(param_1 + 0x298) == lVar38) goto code_r0x02de479c;
    ClearExclusiveLocal();
    lVar16 = *plVar24;
    lVar38 = *(long *)(param_1 + 0x298);
    do {
      do {
        lVar25 = *plVar24;
        if (lVar25 != lVar16 || *(long *)(param_1 + 0x298) != lVar38) {
          bVar29 = false;
          ClearExclusiveLocal();
          goto LAB_02de47dc;
        }
        cVar11 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar29) {
          *plVar24 = lVar16;
          *(long *)(param_1 + 0x294) = lVar38 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar29 = true;
LAB_02de47dc:
      lVar16 = lVar25;
      lVar38 = *(long *)(param_1 + 0x298);
    } while (!bVar29);
    goto LAB_02de482c;
  }
  do {
    lVar16 = *plVar24;
    lVar38 = *(long *)(param_1 + 0x298);
    cVar11 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar29) {
      *plVar24 = lVar16;
      *(long *)(param_1 + 0x298) = lVar38;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar25 = *plVar24;
    lVar19 = *(long *)(param_1 + 0x298);
    if (lVar25 != lVar16 || lVar19 != lVar38) {
      bVar29 = false;
      ClearExclusiveLocal();
      goto joined_r0x02de48bc;
    }
    cVar11 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar29) {
      *plVar24 = lVar16;
      *(long *)(param_1 + 0x294) = lVar38 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar29 = true;
joined_r0x02de48bc:
  if (!bVar29) {
    do {
      lVar16 = *plVar24;
      lVar38 = *(long *)(param_1 + 0x298);
      if (lVar16 != lVar25 || lVar38 != lVar19) {
        bVar29 = false;
        ClearExclusiveLocal();
        lVar25 = lVar16;
        lVar19 = lVar38;
        goto joined_r0x02de48bc;
      }
      cVar11 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar29) {
        *plVar24 = lVar25;
        *(long *)(param_1 + 0x294) = lVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar29 = true;
    lVar25 = lVar16;
    lVar19 = lVar38;
    goto joined_r0x02de48bc;
  }
  nn::os::SignalLightEvent(pLVar4);
  FUN_011a6f34(param_1,param_3);
  if ((*(char *)(param_1 + 0x238) != '\0') &&
     ((*(long *)(param_1 + 0x350) - *(long *)(param_1 + 0x348) >> 4) * -0x79435e50d79435e5 ==
      *(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8) >> 3)) {
    FUN_02de25c4(param_1);
  }
LAB_02de4830:
  if (!bVar37) {
    *plVar43 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar43 + 1));
  }
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  goto LAB_02de484c;
code_r0x02de479c:
  cVar11 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar29) {
    *plVar24 = lVar16;
    *(long *)(param_1 + 0x294) = lVar38 + -1;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_02de482c;
  goto LAB_02de4788;
  while( true ) {
    puVar35 = puVar36 + 4;
    puVar30 = puVar36 + 4;
    puVar36 = puVar36 + 4;
    if (*puVar35 == param_3) break;
LAB_02de3bf0:
    lVar38 = lVar38 + -0x20;
    if (lVar38 == 0) goto LAB_02de3c5c;
  }
LAB_02de3c0c:
  if (puVar30 == puVar44 + lVar16 * 4) {
LAB_02de3c5c:
    do {
      lVar16 = *plVar24;
      lVar38 = *(long *)(param_1 + 0x298);
      cVar11 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar29) {
        *plVar24 = lVar16;
        *(long *)(param_1 + 0x298) = lVar38;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_02de3c70:
    if (*plVar24 == lVar16 && *(long *)(param_1 + 0x298) == lVar38) goto code_r0x02de3c84;
    ClearExclusiveLocal();
    lVar16 = *plVar24;
    lVar38 = *(long *)(param_1 + 0x298);
    do {
      do {
        lVar25 = *plVar24;
        if (lVar25 != lVar16 || *(long *)(param_1 + 0x298) != lVar38) {
          bVar29 = false;
          ClearExclusiveLocal();
          goto LAB_02de3d20;
        }
        cVar11 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar29) {
          *plVar24 = lVar16;
          *(long *)(param_1 + 0x294) = lVar38 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar29 = true;
LAB_02de3d20:
      lVar16 = lVar25;
      lVar38 = *(long *)(param_1 + 0x298);
    } while (!bVar29);
    goto LAB_02de482c;
  }
  *(undefined1 *)(puVar30 + 1) = 1;
  do {
    lVar16 = *plVar24;
    lVar38 = *(long *)(param_1 + 0x298);
    cVar11 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar29) {
      *plVar24 = lVar16;
      *(long *)(param_1 + 0x298) = lVar38;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
LAB_02de3c34:
  if (*plVar24 == lVar16 && *(long *)(param_1 + 0x298) == lVar38) goto code_r0x02de3c48;
  ClearExclusiveLocal();
  lVar16 = *plVar24;
  lVar38 = *(long *)(param_1 + 0x298);
  do {
    do {
      lVar25 = *plVar24;
      if (lVar25 != lVar16 || *(long *)(param_1 + 0x298) != lVar38) {
        bVar29 = false;
        ClearExclusiveLocal();
        goto LAB_02de3cd4;
      }
      cVar11 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar29) {
        *plVar24 = lVar16;
        *(long *)(param_1 + 0x294) = lVar38 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar29 = true;
LAB_02de3cd4:
    lVar16 = lVar25;
    lVar38 = *(long *)(param_1 + 0x298);
  } while (!bVar29);
LAB_02de482c:
  nn::os::SignalLightEvent(pLVar4);
  goto LAB_02de4830;
code_r0x02de3c84:
  cVar11 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar29) {
    *plVar24 = lVar16;
    *(long *)(param_1 + 0x294) = lVar38 + -1;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_02de482c;
  goto LAB_02de3c70;
code_r0x02de3c48:
  cVar11 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar29) {
    *plVar24 = lVar16;
    *(long *)(param_1 + 0x294) = lVar38 + -1;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_02de482c;
  goto LAB_02de3c34;
LAB_02de2cb4:
  do {
    lVar16 = *plVar40;
    lVar38 = *(long *)(param_1 + 0x538);
    cVar11 = '\x01';
    bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar37) {
      *plVar40 = lVar16;
      *(long *)(param_1 + 0x538) = lVar38;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar25 = *plVar40;
    lVar19 = *(long *)(param_1 + 0x538);
    if (lVar25 != lVar16 || lVar19 != lVar38) {
      bVar37 = false;
      ClearExclusiveLocal();
      goto joined_r0x02de2e54;
    }
    cVar11 = '\x01';
    bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar37) {
      *plVar40 = lVar16;
      *(long *)(param_1 + 0x534) = lVar38 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar37 = true;
joined_r0x02de2e54:
  if (!bVar37) {
    do {
      lVar16 = *plVar40;
      lVar38 = *(long *)(param_1 + 0x538);
      if (lVar16 != lVar25 || lVar38 != lVar19) {
        bVar37 = false;
        ClearExclusiveLocal();
        lVar25 = lVar16;
        lVar19 = lVar38;
        goto joined_r0x02de2e54;
      }
      cVar11 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar37) {
        *plVar40 = lVar25;
        *(long *)(param_1 + 0x534) = lVar19 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar37 = true;
    lVar25 = lVar16;
    lVar19 = lVar38;
    goto joined_r0x02de2e54;
  }
  nn::os::SignalLightEvent(pLVar20);
  local_150 = param_1;
  local_148 = param_2;
  local_140 = param_3;
  local_138 = param_4;
  FUN_00d5f508(local_130,param_2);
  FUN_00f338dc(&local_118,param_1);
  puVar44 = local_118 + 0x33;
  fVar47 = *(float *)(param_1 + 0x520);
  uVar39 = *puVar44;
  uVar17 = nn::os::GetCurrentThread();
  if (uVar17 == uVar39) {
    puVar44 = (ulong *)0x0;
    bVar37 = true;
  }
  else {
    uVar17 = nn::os::GetCurrentThread();
    do {
      if (*puVar44 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(local_118 + 0x34));
          while (*puVar44 == 0) {
            cVar11 = '\x01';
            bVar37 = (bool)ExclusiveMonitorPass(puVar44,0x10);
            if (bVar37) {
              *puVar44 = uVar17;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_02de2ec0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(puVar44,0x10);
      if (bVar37) {
        *puVar44 = uVar17;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_02de2ec0:
    bVar37 = false;
  }
  uVar17 = *local_118;
  plVar40 = (long *)(uVar17 + 0x30);
  lVar38 = *plVar40;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 == lVar38) {
    if (*(long *)(uVar17 + 0x1f8) == 0) {
      local_a0 = *(long *)(uVar17 + 8);
      FUN_0103caf0(&local_100,local_a0,&local_a0);
      uVar39 = local_100;
      local_100 = 0;
      lVar16 = *(long *)(uVar17 + 0x1f8);
      *(ulong *)(uVar17 + 0x1f8) = uVar39;
      if (lVar16 == 0) {
        *(long *)(uVar17 + 0x210) = local_e8;
        *(ulong *)(uVar17 + 0x208) = local_f0;
        *(ulong *)(uVar17 + 0x200) = local_f8;
      }
      else {
        FUN_0103e9d8(uVar17 + 0x200);
        uVar39 = local_100;
        *(long *)(uVar17 + 0x210) = local_e8;
        *(ulong *)(uVar17 + 0x208) = local_f0;
        *(ulong *)(uVar17 + 0x200) = local_f8;
        local_100 = 0;
        if (uVar39 != 0) {
          FUN_0103e9d8(&local_f8);
        }
      }
    }
    local_100 = 0xffffffff00000003;
    uVar39 = FUN_0103b2e0(uVar17 + 0xe8,&local_100);
    plVar40 = (long *)(uVar17 + 0x48);
    lVar38 = *plVar40;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 == lVar38) {
      plVar40 = (long *)0x0;
      bVar29 = true;
    }
    else {
      lVar16 = nn::os::GetCurrentThread();
      do {
        if (*plVar40 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(uVar17 + 0x50));
            while (*plVar40 == 0) {
              cVar11 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar29) {
                *plVar40 = lVar16;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_02de3114;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar29) {
          *plVar40 = lVar16;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_02de3114:
      bVar29 = false;
    }
    local_e8 = local_150;
    local_c0 = 0;
    local_e0 = local_148;
    local_d8 = local_140;
    local_d0 = local_138;
    local_c8 = (long *)0x0;
    local_100 = uVar17;
    local_f8 = uVar39;
    local_f0 = uVar17;
    FUN_00f34110(&local_c8,local_130);
    local_b0 = 1;
    puVar22 = *(undefined8 **)(uVar17 + 0x68);
    local_b8 = fVar47;
    if (puVar22 < *(undefined8 **)(uVar17 + 0x70)) {
      uVar42 = *(undefined8 *)(uVar17 + 0x78);
      if (((DAT_04865a38 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar16 != 0) {
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02de3b50;
        *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar42;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      }
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[4] = local_100;
      puVar22[5] = local_f8;
      puVar22[6] = local_f0;
      puVar22[0xc] = 0;
      puVar22[9] = local_d8;
      puVar22[10] = local_d0;
      puVar22[7] = local_e8;
      puVar22[8] = local_e0;
      puVar22[0xb] = 0;
      FUN_00fd9730(puVar22 + 0xb,&local_c8);
      puVar22[0xd] = CONCAT44(uStack_b4,local_b8);
      puVar22[0xe] = local_b0;
      *puVar22 = &LAB_02df039c;
      puVar22[1] = &LAB_02df061c;
      puVar22[2] = &LAB_02df0eac;
      puVar22[3] = &LAB_02df0f08;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      *(undefined8 **)(uVar17 + 0x68) = puVar22 + 0x20;
    }
    else {
      puVar3 = (undefined8 *)(uVar17 + 0x78);
      lVar25 = FUN_0103b290(uVar17 + 0x60,((long)puVar22 - *(long *)(uVar17 + 0x60) >> 8) + 1);
      lVar16 = *(long *)(uVar17 + 0x60);
      lVar38 = *(long *)(uVar17 + 0x68);
      local_88 = 0;
      puStack_80 = puVar3;
      if (lVar25 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,lVar25 << 8,0x10);
        if (lVar19 == 0) {
          (**(code **)(*(long *)*puVar3 + 0xe8))();
        }
      }
      puVar22 = (undefined8 *)(lVar19 + (lVar38 - lVar16 >> 8) * 0x100);
      local_88 = lVar19 + lVar25 * 0x100;
      uVar42 = *puVar3;
      local_a0 = lVar19;
      puStack_98 = puVar22;
      local_90 = puVar22;
      if (((DAT_04865a38 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar16 != 0) {
        if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_02de3b50:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar42;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      }
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[4] = local_100;
      puVar22[5] = local_f8;
      puVar22[6] = local_f0;
      puVar22[0xb] = 0;
      puVar22[7] = local_e8;
      puVar22[8] = local_e0;
      puVar22[9] = local_d8;
      puVar22[10] = local_d0;
      puVar22[0xc] = 0;
      FUN_00fd9730(puVar22 + 0xb,&local_c8);
      puVar22[0xd] = CONCAT44(uStack_b4,local_b8);
      puVar22[0xe] = local_b0;
      *puVar22 = &LAB_02df039c;
      puVar22[1] = &LAB_02df061c;
      puVar22[2] = &LAB_02df0eac;
      puVar22[3] = &LAB_02df0f08;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      local_90 = local_90 + 0x20;
      FUN_0103b38c(uVar17 + 0x60,&local_a0);
      FUN_0103bbd0(&local_a0);
    }
    plVar1 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar43 = local_c8 + 3;
      do {
        sVar33 = (short)*plVar43;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar43,0x10);
        if (bVar10) {
          *(short *)plVar43 = sVar33 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar33 == 1) {
        piVar5 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar15 = *piVar5;
          cVar11 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar10) {
            *piVar5 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar15 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_a0 = *plVar1;
          FUN_00c44438(lVar16 + 0x8040,&local_a0);
        }
      }
      else if (sVar33 == 0) goto LAB_02de3b28;
    }
    if (!bVar29) {
      *plVar40 = 0;
      pLVar20 = (LightEventType *)(plVar40 + 1);
      goto LAB_02de3794;
    }
  }
  else {
    lVar16 = nn::os::GetCurrentThread();
    do {
      if (*plVar40 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(uVar17 + 0x38));
          while (*plVar40 == 0) {
            cVar11 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar29) {
              *plVar40 = lVar16;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_02de2efc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar29) {
        *plVar40 = lVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_02de2efc:
    lVar16 = *(long *)(uVar17 + 0x1f8);
    if (lVar16 == 0) {
      local_a0 = *(long *)(uVar17 + 8);
      FUN_0103caf0(&local_100,local_a0,&local_a0);
      uVar39 = local_100;
      local_100 = 0;
      lVar16 = *(long *)(uVar17 + 0x1f8);
      *(ulong *)(uVar17 + 0x1f8) = uVar39;
      if (lVar16 == 0) {
        *(long *)(uVar17 + 0x210) = local_e8;
        *(ulong *)(uVar17 + 0x208) = local_f0;
        *(ulong *)(uVar17 + 0x200) = local_f8;
        local_100 = 0;
      }
      else {
        FUN_0103e9d8(uVar17 + 0x200);
        uVar39 = local_100;
        *(long *)(uVar17 + 0x210) = local_e8;
        *(ulong *)(uVar17 + 0x208) = local_f0;
        *(ulong *)(uVar17 + 0x200) = local_f8;
        local_100 = 0;
        if (uVar39 != 0) {
          FUN_0103e9d8(&local_f8);
        }
      }
      lVar16 = *(long *)(uVar17 + 0x1f8);
    }
    local_a0 = CONCAT44(local_a0._4_4_,fVar47);
    uVar18 = FUN_02df0f64(lVar16 + 8,&local_150);
    plVar40 = (long *)(lVar16 + 0xc0);
    lVar38 = *plVar40;
    lVar25 = *(long *)(lVar16 + 200) - lVar38 >> 3;
    uVar39 = lVar25 * -0x5555555555555555;
    local_100 = uVar18;
    if (uVar39 <= uVar18) {
      uVar41 = uVar18 + 1;
      lVar25 = uVar41 + lVar25 * 0x5555555555555555;
      if (uVar41 < uVar39 || lVar25 == 0) {
        if (uVar41 < uVar39) {
          *(ulong *)(lVar16 + 200) = lVar38 + uVar41 * 0x18;
        }
      }
      else {
        FUN_00e93f30(plVar40,lVar25);
        lVar38 = *plVar40;
      }
    }
    *(undefined1 *)(lVar38 + uVar18 * 0x18) = 0;
    *(undefined8 *)(*(long *)(lVar16 + 0xc0) + uVar18 * 0x18 + 8) = 1;
    uVar13 = (undefined4)local_a0;
    *(undefined4 *)(*(long *)(lVar16 + 0xc0) + uVar18 * 0x18 + 0x10) = (undefined4)local_a0;
    uVar41 = *(ulong *)(lVar16 + 0x130);
    uVar39 = uVar41 + 1;
    plVar40 = (long *)(lVar16 + 0xf8);
    *(ulong *)(lVar16 + 0x130) = uVar39;
    if (uVar41 == 0) {
      if (*(long *)(lVar16 + 0x100) - (long)*(ulong **)(lVar16 + 0xf8) >> 4 == 0) {
        FUN_0103e0a0(plVar40,&local_100,&local_a0);
      }
      else {
        **(ulong **)(lVar16 + 0xf8) = uVar18;
        *(undefined4 *)(*plVar40 + 8) = (undefined4)local_a0;
      }
    }
    else {
      pvVar21 = *(void **)(lVar16 + 0xf8);
      uVar26 = *(long *)(lVar16 + 0x100) - (long)pvVar21 >> 4;
      if (*(float *)((long)pvVar21 + (uVar41 - 1) * 0x10 + 8) <= fVar47) {
        if (uVar26 < uVar39) {
          FUN_0103e0a0(plVar40,&local_100,&local_a0);
          goto LAB_02de35a0;
        }
        *(ulong *)((long)pvVar21 + uVar41 * 0x10) = uVar18;
        lVar16 = *plVar40 + uVar41 * 0x10;
      }
      else {
        if (uVar26 <= uVar39 && uVar39 - uVar26 != 0) {
          FUN_0103e51c(plVar40,uVar39 - uVar26);
          pvVar21 = (void *)*plVar40;
        }
        if (*(float *)((long)pvVar21 + 8) <= fVar47) {
          uVar14 = uVar41 - 1;
          uVar26 = uVar41 - 2;
          uVar39 = 1;
          while (uVar46 = uVar14, 2 < uVar26) {
            uVar7 = uVar39 + (long)((float)uVar26 * 0.5);
            uVar14 = uVar7;
            uVar26 = (long)((float)uVar26 * 0.5);
            if (*(float *)((long)pvVar21 + uVar7 * 0x10 + 8) <= fVar47) {
              uVar14 = uVar46;
              uVar26 = uVar46 - uVar7;
              uVar39 = uVar7;
            }
          }
          if (uVar46 <= uVar41 && uVar39 <= uVar46) {
            pfVar27 = (float *)((long)pvVar21 + uVar46 * 0x10 + 8);
            while (fVar47 < *pfVar27) {
              uVar46 = uVar46 - 1;
              if ((uVar46 < uVar39) || (pfVar27 = pfVar27 + -4, uVar41 < uVar46)) goto LAB_02de3564;
            }
            uVar46 = uVar46 + 1;
          }
LAB_02de3564:
          if (uVar46 <= uVar41 && uVar39 <= uVar46) {
            uVar39 = uVar46;
          }
          pvVar21 = (void *)((long)pvVar21 + uVar39 * 0x10);
          memmove((void *)((long)pvVar21 + 0x10),pvVar21,(uVar41 - uVar39) * 0x10);
          *(ulong *)(*plVar40 + uVar39 * 0x10) = uVar18;
          lVar16 = *plVar40 + uVar39 * 0x10;
        }
        else {
          memmove((void *)((long)pvVar21 + 0x10),pvVar21,uVar41 << 4);
          *(ulong *)*plVar40 = uVar18;
          lVar16 = *plVar40;
        }
      }
      *(undefined4 *)(lVar16 + 8) = uVar13;
    }
LAB_02de35a0:
    local_100 = 3;
    do {
      lVar16 = *(long *)(uVar17 + 0x160) - *(long *)(uVar17 + 0x158);
      local_f8 = uVar18;
      if (lVar16 == 0) {
        uVar39 = *(long *)(uVar17 + 0xf0) - *(long *)(uVar17 + 0xe8) >> 4;
        FUN_0103b268(uVar17 + 0xe8,&local_100);
        goto LAB_02de3634;
      }
      uVar39 = *(ulong *)(*(long *)(uVar17 + 0x160) + -8);
      *(long *)(uVar17 + 0x160) = lVar16 + *(long *)(uVar17 + 0x158) + -8;
      uVar41 = uVar39 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(*(long *)(uVar17 + 0x120) + uVar41) =
           *(ulong *)(*(long *)(uVar17 + 0x120) + uVar41) &
           (1L << (uVar39 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((ulong)(*(long *)(uVar17 + 0xf0) - *(long *)(uVar17 + 0xe8) >> 4) <= uVar39);
    puVar22 = (undefined8 *)(*(long *)(uVar17 + 0xe8) + uVar39 * 0x10);
    *puVar22 = 3;
    puVar22[1] = uVar18;
    if (*(ulong *)(uVar17 + 400) <= uVar39) {
LAB_02de3634:
      *(ulong *)(uVar17 + 400) = uVar39 + 1;
    }
    pLVar20 = (LightEventType *)(uVar17 + 0x38);
    *(undefined8 *)(uVar17 + 0x30) = 0;
LAB_02de3794:
    nn::os::SignalLightEvent(pLVar20);
  }
  local_100 = uVar39;
  FUN_0103bd9c(local_118 + 0x36,&local_100);
  if (!bVar37) {
    *puVar44 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar44 + 1));
  }
  *(float *)(param_1 + 0x520) = fVar47 + 0.01;
  if (local_108 != '\0') {
    *local_110 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_110 + 1));
  }
  if (local_130[0] != (ulong *)0x0) {
    puVar44 = local_130[0] + 3;
    do {
      sVar33 = (short)*puVar44;
      cVar11 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(puVar44,0x10);
      if (bVar37) {
        *(short *)puVar44 = sVar33 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar33 == 1) {
      piVar5 = (int *)((long)local_130[0] + 0x1c);
      do {
        iVar15 = *piVar5;
        cVar11 = '\x01';
        bVar37 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar37) {
          *piVar5 = -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_100 = *local_130[0];
        FUN_00c44438(lVar16 + 0x8040,&local_100);
      }
    }
    else if (sVar33 == 0) {
LAB_02de3b28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


