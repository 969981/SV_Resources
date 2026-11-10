/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236cff8; name: FUN_0236cff8
 */


/* WARNING: Removing unreachable block (ram,0x0236d094) */
/* WARNING: Removing unreachable block (ram,0x0236d174) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0236cff8(ulong param_1,long param_2,long param_3,ulong param_4,ulong *param_5)

{
  LightEventType *pLVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  long lVar8;
  short sVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  size_t sVar13;
  undefined4 uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  LightEventType *pLVar21;
  undefined8 uVar22;
  void *pvVar23;
  long lVar24;
  ulong uVar25;
  float *pfVar26;
  bool bVar27;
  bool bVar28;
  ulong *puVar29;
  long *plVar30;
  long *plVar31;
  short sVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  long *plVar39;
  bool bVar40;
  ulong uVar41;
  long *plVar42;
  long *plVar43;
  ulong local_190;
  long lStack_188;
  ulong local_180;
  ulong *local_178 [3];
  ulong local_160;
  ulong uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  ulong *local_138;
  undefined8 *local_130;
  char local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long local_108;
  ulong local_100;
  long local_f8;
  ulong local_f0;
  long *local_e8;
  undefined8 local_e0;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  long local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  long local_88;
  long *plStack_80;
  
  if (*(float *)(param_5 + 2) <= 1.1920929e-07) {
    return;
  }
  plVar19 = (long *)(param_1 + 0x530);
  lVar17 = nn::os::GetCurrentThread();
  do {
    lVar37 = *plVar19;
    lVar24 = *(long *)(param_1 + 0x538);
    cVar11 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar27) {
      *plVar19 = lVar37;
      *(long *)(param_1 + 0x538) = lVar24;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  pLVar21 = (LightEventType *)(param_1 + 0x540);
  do {
    while ((lVar37 != 0 && (lVar17 != lVar37))) {
      nn::os::WaitLightEvent(pLVar21);
      do {
        lVar37 = *plVar19;
        lVar24 = *(long *)(param_1 + 0x538);
        cVar11 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar27) {
          *plVar19 = lVar37;
          *(long *)(param_1 + 0x538) = lVar24;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    while( true ) {
      if (*plVar19 != lVar37 || *(long *)(param_1 + 0x538) != lVar24) break;
      cVar11 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar27) {
        *plVar19 = lVar37;
        *(long *)(param_1 + 0x534) = lVar24 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
      if (cVar11 == '\0') {
        if (*(char *)(param_1 + 0x550) != '\0') goto LAB_0236d0d0;
        plVar43 = (long *)(param_1 + 0x60);
        lVar17 = nn::os::GetCurrentThread();
        goto LAB_0236d114;
      }
    }
    ClearExclusiveLocal();
    lVar37 = *plVar19;
    lVar24 = *(long *)(param_1 + 0x538);
  } while( true );
  while( true ) {
    cVar11 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
    if (bVar27) {
      *plVar43 = lVar17;
      cVar11 = ExclusiveMonitorsStatus();
    }
    if (cVar11 == '\0') break;
LAB_0236d114:
    if (*plVar43 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar43 == 0) {
          cVar11 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar27) {
            *plVar43 = lVar17;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_0236d124;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_0236d124:
  plVar43 = (long *)(param_1 + 0x290);
  lVar17 = nn::os::GetCurrentThread();
  do {
    lVar37 = *plVar43;
    lVar24 = *(long *)(param_1 + 0x298);
    cVar11 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
    if (bVar27) {
      *plVar43 = lVar37;
      *(long *)(param_1 + 0x298) = lVar24;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  pLVar1 = (LightEventType *)(param_1 + 0x2a0);
  do {
    while ((lVar37 != 0 && (lVar17 != lVar37))) {
      nn::os::WaitLightEvent(pLVar1);
      do {
        lVar37 = *plVar43;
        lVar24 = *(long *)(param_1 + 0x298);
        cVar11 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
        if (bVar27) {
          *plVar43 = lVar37;
          *(long *)(param_1 + 0x298) = lVar24;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    while( true ) {
      if (*plVar43 != lVar37 || *(long *)(param_1 + 0x298) != lVar24) break;
      cVar11 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
      if (bVar27) {
        *plVar43 = lVar37;
        *(long *)(param_1 + 0x294) = lVar24 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
      if (cVar11 == '\0') {
        plVar30 = *(long **)(param_1 + 0x2b0);
        lVar17 = *(long *)(param_1 + 0x2e8);
        if ((lVar17 == 0) || (*plVar30 == param_2)) {
          plVar38 = plVar30;
          goto LAB_0236d1ec;
        }
        lVar37 = lVar17 * 0x20;
        plVar42 = plVar30;
        goto LAB_0236d1d0;
      }
    }
    ClearExclusiveLocal();
    lVar37 = *plVar43;
    lVar24 = *(long *)(param_1 + 0x298);
  } while( true );
  while( true ) {
    plVar31 = plVar42 + 4;
    plVar38 = plVar42 + 4;
    plVar42 = plVar42 + 4;
    if (*plVar31 == param_2) break;
LAB_0236d1d0:
    lVar37 = lVar37 + -0x20;
    if (lVar37 == 0) goto LAB_0236d9a4;
  }
LAB_0236d1ec:
  if (plVar38 != plVar30 + lVar17 * 4) {
    plVar30 = (long *)plVar38[3];
    lVar20 = *(long *)(param_1 + 0x348);
    lVar37 = lVar20 + (long)plVar30 * 0x130;
    plVar38 = (long *)(lVar37 + 0x68);
    lVar17 = *plVar38;
    lVar24 = *(long *)(lVar37 + 0x70) - lVar17 >> 5;
    uVar18 = lVar24 * -0x5555555555555555;
    if (param_4 < uVar18) {
      uVar22 = 1;
    }
    else {
      uVar36 = param_4 + 1;
      lVar24 = uVar36 + lVar24 * 0x5555555555555555;
      if (uVar36 < uVar18 || lVar24 == 0) {
        if (uVar36 < uVar18) {
          uVar22 = 0;
          *(long *)(lVar37 + 0x70) = lVar17 + uVar36 * 0x60;
          goto LAB_0236d23c;
        }
      }
      else {
        FUN_01aa8008(plVar38,lVar24);
        lVar17 = *plVar38;
      }
      uVar22 = 0;
    }
LAB_0236d23c:
    puVar35 = (ulong *)(lVar17 + param_4 * 0x60);
    *(undefined1 *)(puVar35 + 10) = 1;
    uVar18 = param_5[2];
    puVar35[1] = param_5[1];
    uVar36 = *param_5;
    *(int *)(puVar35 + 2) = (int)uVar18;
    *puVar35 = uVar36;
    FUN_0193cb94(&local_190,lVar37 + 0x60,uVar22,param_4);
    puVar35 = (ulong *)(lVar20 + (long)plVar30 * 0x130 + 0x10);
    uVar18 = *puVar35;
    uVar36 = uVar18 & 0xfffffffffffffff8 |
             uVar18 & 3 | (ulong)(1.1920929e-07 < (float)local_180) << 2;
    *puVar35 = uVar36;
    if (uVar18 != uVar36) {
      lVar17 = *(long *)(lVar20 + (long)plVar30 * 0x130 + 0x48);
      if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar17 + 0x1a);
        sVar32 = *(short *)(lVar17 + 0x1a);
LAB_0236f280:
        sVar9 = *psVar2;
        if (sVar9 == sVar32) {
          cVar11 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar27) {
            *psVar2 = sVar32 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 != '\0') goto LAB_0236f2a8;
          bVar27 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0236f2a8:
          bVar27 = false;
        }
        if (!bVar27) goto code_r0x0236f2b0;
        if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0236d2b4;
        plVar38 = (long *)(*(long *)(lVar17 + 0x10) + -8);
        do {
          lVar17 = *plVar43;
          lVar37 = *(long *)(param_1 + 0x298);
          cVar11 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar27) {
            *plVar43 = lVar17;
            *(long *)(param_1 + 0x298) = lVar37;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        do {
          lVar24 = *plVar43;
          lVar8 = *(long *)(param_1 + 0x298);
          if (lVar24 != lVar17 || lVar8 != lVar37) {
            bVar27 = false;
            ClearExclusiveLocal();
            goto joined_r0x0236f310;
          }
          cVar11 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
          if (bVar27) {
            *plVar43 = lVar17;
            *(long *)(param_1 + 0x294) = lVar37 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        bVar27 = true;
joined_r0x0236f310:
        do {
          if (bVar27) {
            nn::os::SignalLightEvent(pLVar1);
            plVar42 = (long *)(param_1 + 0x2f0);
            lVar37 = *plVar42;
            lVar17 = nn::os::GetCurrentThread();
            if (lVar17 == lVar37) {
              plVar42 = (long *)0x0;
              bVar27 = true;
            }
            else {
              lVar17 = nn::os::GetCurrentThread();
              do {
                if (*plVar42 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
                    while (*plVar42 == 0) {
                      cVar11 = '\x01';
                      bVar27 = (bool)ExclusiveMonitorPass(plVar42,0x10);
                      if (bVar27) {
                        *plVar42 = lVar17;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                      if (cVar11 == '\0') goto LAB_0236f348;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar11 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(plVar42,0x10);
                if (bVar27) {
                  *plVar42 = lVar17;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
LAB_0236f348:
              bVar27 = false;
            }
            lVar17 = nn::os::GetCurrentThread();
            do {
              lVar37 = *plVar43;
              lVar24 = *(long *)(param_1 + 0x298);
              cVar11 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar28) {
                *plVar43 = lVar37;
                *(long *)(param_1 + 0x298) = lVar24;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            do {
              while ((lVar37 != 0 && (lVar17 != lVar37))) {
                nn::os::WaitLightEvent(pLVar1);
                do {
                  lVar37 = *plVar43;
                  lVar24 = *(long *)(param_1 + 0x298);
                  cVar11 = '\x01';
                  bVar28 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar28) {
                    *plVar43 = lVar37;
                    *(long *)(param_1 + 0x298) = lVar24;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
              }
              do {
                lVar8 = *plVar43;
                if (lVar8 != lVar37 || *(long *)(param_1 + 0x298) != lVar24) {
                  bVar28 = false;
                  ClearExclusiveLocal();
                  goto LAB_0236f4e0;
                }
                cVar11 = '\x01';
                bVar28 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                if (bVar28) {
                  *plVar43 = lVar37;
                  *(long *)(param_1 + 0x294) = lVar24 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              bVar28 = true;
LAB_0236f4e0:
              lVar37 = lVar8;
              lVar24 = *(long *)(param_1 + 0x298);
            } while (!bVar28);
            FUN_0196cdc4(*(undefined8 *)(lVar20 + (long)plVar30 * 0x130 + 0x120),puVar35);
            if (!bVar27) {
              *plVar42 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar42 + 1));
            }
            (**(code **)(*plVar38 + 0x18))(plVar38);
            break;
          }
          do {
            lVar17 = *plVar43;
            lVar37 = *(long *)(param_1 + 0x298);
            if (lVar17 != lVar24 || lVar37 != lVar8) {
              bVar27 = false;
              ClearExclusiveLocal();
              lVar24 = lVar17;
              lVar8 = lVar37;
              goto joined_r0x0236f310;
            }
            cVar11 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(plVar43,0x10);
            if (bVar27) {
              *plVar43 = lVar24;
              *(long *)(param_1 + 0x294) = lVar8 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          bVar27 = true;
          lVar24 = lVar17;
          lVar8 = lVar37;
        } while( true );
      }
LAB_0236d2b4:
      if (((uint)*puVar35 >> 2 & 1) == 0) {
        uVar18 = *(ulong *)(param_1 + 0x1c8);
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar36 = 0;
          puVar34 = *(ulong **)(param_1 + 0x120);
          do {
            if (((*(ulong *)(param_1 + 0x160) <= uVar36) ||
                ((*(ulong *)(*(long *)(param_1 + 0x158) + (uVar36 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar36 & 0x3f) & 1) == 0)) && ((long *)*puVar34 == plVar30)) goto LAB_0236d30c;
            uVar36 = uVar36 + 1;
            puVar34 = puVar34 + 0xe;
          } while (uVar18 != uVar36);
          uVar36 = uVar18;
LAB_0236d30c:
          uVar18 = (ulong)(int)uVar36;
        }
        if (((uint)*puVar35 >> 3 & 1) == 0) {
          plVar38 = *(long **)(param_1 + 0xf8);
          if (plVar38 != (long *)0x0) {
            lVar17 = plVar38[6];
            if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0236f3cc;
            psVar2 = (short *)(lVar17 + 0x1a);
            do {
              sVar32 = *psVar2;
              cVar11 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar27) {
                *psVar2 = sVar32 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (sVar32 == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
              *(undefined8 *)(lVar17 + 8) = uVar22;
              *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
            }
            else if (sVar32 == -1) goto LAB_0236f3ec;
          }
          nn::os::AcquireSemaphore((SemaphoreType *)(plVar38 + 0x87));
          lVar17 = *(long *)plVar38[0x80];
          puVar35 = *(ulong **)(lVar17 + 0x3b0);
          puVar34 = *(ulong **)(lVar17 + 0x3b8);
          if ((puVar35 != puVar34) && (*puVar35 != uVar18)) {
            puVar33 = puVar35;
            do {
              if (puVar34 + -1 == puVar33) {
                puVar35 = puVar34;
                goto LAB_0236d3d8;
              }
              puVar35 = puVar33 + 1;
              puVar29 = puVar33 + 1;
              puVar33 = puVar35;
            } while (*puVar29 != uVar18);
          }
          if (puVar35 != puVar34) {
            puVar33 = puVar35 + 1;
            if (puVar33 != puVar34) {
              do {
                puVar29 = puVar35;
                if (*puVar33 != uVar18) {
                  puVar29 = puVar35 + 1;
                  *puVar35 = *puVar33;
                }
                puVar33 = puVar33 + 1;
                puVar35 = puVar29;
              } while (puVar34 != puVar33);
              puVar34 = *(ulong **)(lVar17 + 0x3b8);
            }
          }
LAB_0236d3d8:
          sVar13 = (long)puVar34 - (long)(puVar35 + 1);
          if (sVar13 != 0) {
            memmove(puVar35,puVar35 + 1,sVar13);
          }
          *(size_t *)(lVar17 + 0x3b8) = (long)puVar35 + sVar13;
          lVar17 = *(long *)(*(long *)(**(long **)(param_1 + 0x1e8) + 0x400) +
                            (*(long **)(param_1 + 0x1e8))[2] * 8);
          puVar35 = *(ulong **)(lVar17 + 0x3b0);
          puVar34 = *(ulong **)(lVar17 + 0x3b8);
          if ((puVar35 != puVar34) && (*puVar35 != uVar18)) {
            puVar33 = puVar35;
            do {
              if (puVar34 + -1 == puVar33) {
                puVar35 = puVar34;
                goto LAB_0236d480;
              }
              puVar35 = puVar33 + 1;
              puVar29 = puVar33 + 1;
              puVar33 = puVar35;
            } while (*puVar29 != uVar18);
          }
          if (puVar35 != puVar34) {
            puVar33 = puVar35 + 1;
            if (puVar33 != puVar34) {
              do {
                puVar29 = puVar35;
                if (*puVar33 != uVar18) {
                  puVar29 = puVar35 + 1;
                  *puVar35 = *puVar33;
                }
                puVar33 = puVar33 + 1;
                puVar35 = puVar29;
              } while (puVar34 != puVar33);
              puVar34 = *(ulong **)(lVar17 + 0x3b8);
            }
          }
LAB_0236d480:
          sVar13 = (long)puVar34 - (long)(puVar35 + 1);
          if (sVar13 != 0) {
            memmove(puVar35,puVar35 + 1,sVar13);
          }
          *(size_t *)(lVar17 + 0x3b8) = (long)puVar35 + sVar13;
          *(undefined8 *)(*(long *)(param_1 + 0x120) + uVar18 * 0x70) = 0xffffffffffffffff;
          *(undefined1 *)(*(long *)(param_1 + 0x120) + uVar18 * 0x70 + 0x60) = 1;
          if (uVar18 < *(ulong *)(param_1 + 0x1c8)) {
            lVar17 = *(long *)(param_1 + 0x120) + uVar18 * 0x70;
            plVar30 = *(long **)(lVar17 + 8);
            *(undefined8 *)(lVar17 + 8) = 0;
            if (plVar30 != (long *)0x0) {
              (**(code **)(*plVar30 + 0x18))();
            }
            FUN_028c4c00((long *)(param_1 + 0x120),uVar18);
          }
          nn::os::ReleaseSemaphore((SemaphoreType *)(plVar38 + 0x87));
          if (plVar38 != (long *)0x0) {
            lVar17 = plVar38[6];
            psVar2 = (short *)(lVar17 + 0x1a);
            do {
              sVar32 = *psVar2;
              cVar11 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar27) {
                *psVar2 = sVar32 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            goto LAB_0236e08c;
          }
        }
        else {
          lVar17 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f0) + 0x400) +
                            (*(long **)(param_1 + 0x1f0))[2] * 8);
          puVar35 = *(ulong **)(lVar17 + 0x3b0);
          puVar34 = *(ulong **)(lVar17 + 0x3b8);
          if ((puVar35 != puVar34) && (*puVar35 != uVar18)) {
            puVar33 = puVar35;
            do {
              if (puVar34 + -1 == puVar33) {
                puVar35 = puVar34;
                goto LAB_0236f034;
              }
              puVar35 = puVar33 + 1;
              puVar29 = puVar33 + 1;
              puVar33 = puVar35;
            } while (*puVar29 != uVar18);
          }
          if (puVar35 != puVar34) {
            puVar33 = puVar35 + 1;
            if (puVar33 != puVar34) {
              do {
                puVar29 = puVar35;
                if (*puVar33 != uVar18) {
                  puVar29 = puVar35 + 1;
                  *puVar35 = *puVar33;
                }
                puVar33 = puVar33 + 1;
                puVar35 = puVar29;
              } while (puVar34 != puVar33);
              puVar34 = *(ulong **)(lVar17 + 0x3b8);
            }
          }
LAB_0236f034:
          sVar13 = (long)puVar34 - (long)(puVar35 + 1);
          if (sVar13 != 0) {
            memmove(puVar35,puVar35 + 1,sVar13);
          }
          *(size_t *)(lVar17 + 0x3b8) = (long)puVar35 + sVar13;
          FUN_02de4fd4(*(undefined8 *)(**(long **)(param_1 + 0x1f8) + 0x400),
                       (*(long **)(param_1 + 0x1f8))[2],uVar18);
        }
      }
      else {
        plVar38 = *(long **)(param_1 + 0xf8);
        if (plVar38 != (long *)0x0) {
          lVar17 = plVar38[6];
          if (*(long *)(lVar17 + 0x10) == 0) {
LAB_0236f3cc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar2 = (short *)(lVar17 + 0x1a);
          do {
            sVar32 = *psVar2;
            cVar11 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar27) {
              *psVar2 = sVar32 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar32 == 0) {
            uVar22 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
            *(undefined8 *)(lVar17 + 8) = uVar22;
            *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
          }
          else if (sVar32 == -1) {
LAB_0236f3ec:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        nn::os::AcquireSemaphore((SemaphoreType *)(plVar38 + 0x87));
        if ((*(byte *)puVar35 >> 3 & 1) == 0) {
          local_100 = local_100 & 0xffffffffffffff00;
          local_118 = (long *)0x0;
          local_110 = (long *)0xffffffffffffffff;
          local_d0 = local_d0 & 0xffffffffffffff00;
          local_c0 = local_c0 & 0xffffffffffffff00;
          local_120 = plVar30;
          lVar17 = FUN_028c4f64(param_1 + 0x120,&local_120);
          if (local_118 != (long *)0x0) {
            (**(code **)(*local_118 + 0x18))();
          }
          FUN_02de4fd4(plVar38[0x80],0,lVar17);
          plVar30 = (long *)(param_1 + 0x1e8);
        }
        else {
          uVar18 = *(ulong *)(param_1 + 0x1c8);
          if (uVar18 == 0) {
            lVar17 = 0;
          }
          else {
            uVar36 = 0;
            puVar35 = *(ulong **)(param_1 + 0x120);
            do {
              if (((*(ulong *)(param_1 + 0x160) <= uVar36) ||
                  ((*(ulong *)(*(long *)(param_1 + 0x158) + (uVar36 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar36 & 0x3f) & 1) == 0)) && ((long *)*puVar35 == plVar30)) goto LAB_0236e048;
              uVar36 = uVar36 + 1;
              puVar35 = puVar35 + 0xe;
            } while (uVar18 != uVar36);
            uVar36 = uVar18;
LAB_0236e048:
            lVar17 = (long)(int)uVar36;
          }
          plVar30 = (long *)(param_1 + 0x1f0);
        }
        FUN_02de4fd4(*(undefined8 *)(*(long *)*plVar30 + 0x400),((long *)*plVar30)[2],lVar17);
        nn::os::ReleaseSemaphore((SemaphoreType *)(plVar38 + 0x87));
        if (plVar38 != (long *)0x0) {
          lVar17 = plVar38[6];
          psVar2 = (short *)(lVar17 + 0x1a);
          do {
            sVar32 = *psVar2;
            cVar11 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar27) {
              *psVar2 = sVar32 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
LAB_0236e08c:
          if (sVar32 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*plVar38 + 0x50))(plVar38);
          }
          else if (sVar32 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
    bVar27 = true;
    goto LAB_0236f070;
  }
LAB_0236d9a4:
  plVar30 = (long *)(param_1 + 0x6d8);
  lVar37 = *plVar30;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 == lVar37) {
    plVar30 = (long *)0x0;
    bVar28 = true;
  }
  else {
    lVar17 = nn::os::GetCurrentThread();
    do {
      if (*plVar30 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6e0));
          while (*plVar30 == 0) {
            cVar11 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar27) {
              *plVar30 = lVar17;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') {
              bVar28 = false;
              goto LAB_0236dae4;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar27) {
        *plVar30 = lVar17;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar28 = false;
  }
LAB_0236dae4:
  plVar42 = *(long **)(param_1 + 0x6f0);
  lVar17 = *(long *)(param_1 + 0x728);
  plVar38 = plVar42;
  if ((lVar17 != 0) && (*plVar42 != param_3)) {
    lVar37 = lVar17 * 0x10;
    plVar31 = plVar42;
    do {
      lVar37 = lVar37 + -0x10;
      if (lVar37 == 0) {
        plVar38 = plVar42 + lVar17 * 2;
        goto LAB_0236db28;
      }
      plVar38 = plVar31 + 2;
      plVar39 = plVar31 + 2;
      plVar31 = plVar38;
    } while (*plVar39 != param_3);
  }
LAB_0236db28:
  if (plVar42 + lVar17 * 2 == plVar38) {
    bVar27 = true;
  }
  else {
    plVar38 = (long *)(param_1 + 0x948);
    lVar37 = *plVar38;
    lVar17 = nn::os::GetCurrentThread();
    if (lVar17 == lVar37) {
      plVar38 = (long *)0x0;
      bVar40 = true;
    }
    else {
      lVar17 = nn::os::GetCurrentThread();
      do {
        if (*plVar38 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x950));
            while (*plVar38 == 0) {
              cVar11 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(plVar38,0x10);
              if (bVar27) {
                *plVar38 = lVar17;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_0236dd24;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar27) {
          *plVar38 = lVar17;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_0236dd24:
      bVar40 = false;
    }
    plVar42 = *(long **)(param_1 + 0x960);
    lVar17 = *(long *)(param_1 + 0x998);
    if ((lVar17 == 0) || (*plVar42 == param_2)) {
      plVar31 = plVar42;
    }
    else {
      lVar37 = lVar17 * 0x10;
      plVar39 = plVar42;
      do {
        lVar37 = lVar37 + -0x10;
        if (lVar37 == 0) goto LAB_0236e310;
        plVar31 = plVar39 + 2;
        plVar4 = plVar39 + 2;
        plVar39 = plVar31;
      } while (*plVar4 != param_2);
    }
    if (plVar31 == plVar42 + lVar17 * 2) {
LAB_0236e310:
      do {
        lVar17 = *plVar19;
        lVar37 = *(long *)(param_1 + 0x538);
        cVar11 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar27) {
          *plVar19 = lVar17;
          *(long *)(param_1 + 0x538) = lVar37;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      do {
        lVar24 = *plVar19;
        lVar20 = *(long *)(param_1 + 0x538);
        if (lVar24 != lVar17 || lVar20 != lVar37) {
          bVar27 = false;
          ClearExclusiveLocal();
          goto joined_r0x0236e350;
        }
        cVar11 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar27) {
          *plVar19 = lVar17;
          *(long *)(param_1 + 0x534) = lVar37 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar27 = true;
joined_r0x0236e350:
      if (!bVar27) {
        do {
          lVar17 = *plVar19;
          lVar37 = *(long *)(param_1 + 0x538);
          if (lVar17 != lVar24 || lVar37 != lVar20) {
            bVar27 = false;
            ClearExclusiveLocal();
            lVar24 = lVar17;
            lVar20 = lVar37;
            goto joined_r0x0236e350;
          }
          cVar11 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar27) {
            *plVar19 = lVar24;
            *(long *)(param_1 + 0x534) = lVar20 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        bVar27 = true;
        lVar24 = lVar17;
        lVar20 = lVar37;
        goto joined_r0x0236e350;
      }
      nn::os::SignalLightEvent(pLVar21);
      local_190 = param_1;
      lStack_188 = param_2;
      local_180 = param_4;
      FUN_00d5f508(local_178,param_3);
      local_150 = (undefined4)param_5[2];
      uStack_158 = param_5[1];
      local_160 = *param_5;
      FUN_00f338dc(&local_138,param_1);
      puVar35 = local_138 + 0x33;
      fVar7 = *(float *)(param_1 + 0x520);
      uVar36 = *puVar35;
      uVar18 = nn::os::GetCurrentThread();
      if (uVar18 == uVar36) {
        puVar35 = (ulong *)0x0;
        bVar27 = true;
      }
      else {
        uVar18 = nn::os::GetCurrentThread();
        do {
          if (*puVar35 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(local_138 + 0x34));
              while (*puVar35 == 0) {
                cVar11 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(puVar35,0x10);
                if (bVar27) {
                  *puVar35 = uVar18;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_0236e3d8;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(puVar35,0x10);
          if (bVar27) {
            *puVar35 = uVar18;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_0236e3d8:
        bVar27 = false;
      }
      plVar42 = (long *)*local_138;
      plVar19 = plVar42 + 6;
      lVar37 = *plVar19;
      lVar17 = nn::os::GetCurrentThread();
      if (lVar17 == lVar37) {
        if (plVar42[0x3f] == 0) {
          local_a0 = plVar42[1];
          FUN_0103caf0(&local_120,local_a0,&local_a0);
          plVar19 = local_120;
          local_120 = (long *)0x0;
          lVar17 = plVar42[0x3f];
          plVar42[0x3f] = (long)plVar19;
          if (lVar17 == 0) {
            plVar42[0x42] = local_108;
            plVar42[0x41] = (long)local_110;
            plVar42[0x40] = (long)local_118;
          }
          else {
            FUN_0103e9d8(plVar42 + 0x40);
            plVar19 = local_120;
            plVar42[0x42] = local_108;
            plVar42[0x41] = (long)local_110;
            plVar42[0x40] = (long)local_118;
            local_120 = (long *)0x0;
            if (plVar19 != (long *)0x0) {
              FUN_0103e9d8(&local_118);
            }
          }
        }
        local_120 = (long *)0xffffffff00000003;
        plVar31 = (long *)FUN_0103b2e0(plVar42 + 0x1d,&local_120);
        plVar19 = plVar42 + 9;
        lVar37 = *plVar19;
        lVar17 = nn::os::GetCurrentThread();
        if (lVar17 == lVar37) {
          plVar19 = (long *)0x0;
          bVar12 = true;
        }
        else {
          lVar17 = nn::os::GetCurrentThread();
          do {
            if (*plVar19 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(plVar42 + 10));
                while (*plVar19 == 0) {
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar12) {
                    *plVar19 = lVar17;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  if (cVar11 == '\0') goto LAB_0236e6dc;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar12) {
              *plVar19 = lVar17;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
LAB_0236e6dc:
          bVar12 = false;
        }
        local_100 = local_190;
        local_f8 = lStack_188;
        local_e0 = 0;
        local_f0 = local_180;
        local_e8 = (long *)0x0;
        local_120 = plVar42;
        local_118 = plVar31;
        local_110 = plVar42;
        FUN_00f34110(&local_e8,local_178);
        local_c0 = CONCAT44(uStack_14c,local_150);
        local_d0 = local_160;
        local_c8 = uStack_158;
        local_b8 = uStack_148;
        local_a8 = 1;
        puVar6 = (undefined8 *)plVar42[0xd];
        local_b0 = fVar7;
        if (puVar6 < (undefined8 *)plVar42[0xe]) {
          lVar17 = plVar42[0xf];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar37 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar37 != 0) {
            if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_0236f304;
            *(long *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = lVar17;
            *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
          }
          puVar6[2] = 0;
          puVar6[3] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[4] = local_120;
          puVar6[5] = local_118;
          puVar6[6] = local_110;
          puVar6[9] = local_f8;
          puVar6[10] = local_f0;
          puVar6[8] = local_100;
          puVar6[0xc] = 0;
          puVar6[0xb] = 0;
          FUN_00fd9730(puVar6 + 0xb,&local_e8);
          puVar6[0x11] = local_b8;
          puVar6[0xf] = local_c8;
          puVar6[0x10] = local_c0;
          puVar6[0xe] = local_d0;
          puVar6[0x12] = CONCAT44(uStack_ac,local_b0);
          puVar6[0x13] = local_a8;
          *puVar6 = &LAB_02df5dd0;
          puVar6[1] = &LAB_02df6050;
          puVar6[2] = &LAB_02df6990;
          puVar6[3] = &LAB_02df6a14;
          if (lVar37 != 0) {
            *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
          }
          plVar42[0xd] = (long)(puVar6 + 0x20);
        }
        else {
          plVar39 = plVar42 + 0xf;
          lVar24 = FUN_0103b290(plVar42 + 0xc,((long)puVar6 - plVar42[0xc] >> 8) + 1);
          lVar17 = plVar42[0xc];
          lVar37 = plVar42[0xd];
          local_88 = 0;
          plStack_80 = plVar39;
          if (lVar24 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (**(code **)(*(long *)*plVar39 + 0x10))((long *)*plVar39,lVar24 << 8,0x10);
            if (lVar20 == 0) {
              (**(code **)(*(long *)*plVar39 + 0xe8))();
            }
          }
          puVar6 = (undefined8 *)(lVar20 + (lVar37 - lVar17 >> 8) * 0x100);
          local_88 = lVar20 + lVar24 * 0x100;
          lVar17 = *plVar39;
          local_a0 = lVar20;
          puStack_98 = puVar6;
          local_90 = puVar6;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar37 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar37 != 0) {
            if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_0236f304;
            *(long *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = lVar17;
            *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
          }
          puVar6[2] = 0;
          puVar6[3] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[4] = local_120;
          puVar6[5] = local_118;
          puVar6[6] = local_110;
          puVar6[0xb] = 0;
          puVar6[8] = local_100;
          puVar6[0xc] = 0;
          puVar6[9] = local_f8;
          puVar6[10] = local_f0;
          FUN_00fd9730(puVar6 + 0xb,&local_e8);
          puVar6[0xf] = local_c8;
          puVar6[0x11] = local_b8;
          puVar6[0x10] = local_c0;
          puVar6[0xe] = local_d0;
          puVar6[0x12] = CONCAT44(uStack_ac,local_b0);
          puVar6[0x13] = local_a8;
          *puVar6 = &LAB_02df5dd0;
          puVar6[1] = &LAB_02df6050;
          puVar6[2] = &LAB_02df6990;
          puVar6[3] = &LAB_02df6a14;
          if (lVar37 != 0) {
            *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
          }
          local_90 = local_90 + 0x20;
          FUN_0103b38c(plVar42 + 0xc,&local_a0);
          FUN_0103bbd0(&local_a0);
        }
        plVar42 = local_e8;
        if (local_e8 != (long *)0x0) {
          plVar39 = local_e8 + 3;
          do {
            sVar32 = (short)*plVar39;
            cVar11 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar10) {
              *(short *)plVar39 = sVar32 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar32 == 1) {
            piVar3 = (int *)((long)local_e8 + 0x1c);
            do {
              iVar16 = *piVar3;
              cVar11 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar10) {
                *piVar3 = -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar16 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_a0 = *plVar42;
              FUN_00c44438(lVar17 + 0x8040,&local_a0);
            }
          }
          else if (sVar32 == 0) goto LAB_0236dfd0;
        }
        if (!bVar12) {
          *plVar19 = 0;
          pLVar21 = (LightEventType *)(plVar19 + 1);
          goto LAB_0236eb98;
        }
      }
      else {
        lVar17 = nn::os::GetCurrentThread();
        do {
          if (*plVar19 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(plVar42 + 7));
              while (*plVar19 == 0) {
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar12) {
                  *plVar19 = lVar17;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_0236e418;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *plVar19 = lVar17;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_0236e418:
        lVar17 = plVar42[0x3f];
        if (lVar17 == 0) {
          local_a0 = plVar42[1];
          FUN_0103caf0(&local_120,local_a0,&local_a0);
          plVar19 = local_120;
          local_120 = (long *)0x0;
          lVar17 = plVar42[0x3f];
          plVar42[0x3f] = (long)plVar19;
          if (lVar17 == 0) {
            plVar42[0x42] = local_108;
            plVar42[0x41] = (long)local_110;
            plVar42[0x40] = (long)local_118;
            local_120 = (long *)0x0;
          }
          else {
            FUN_0103e9d8(plVar42 + 0x40);
            plVar19 = local_120;
            plVar42[0x42] = local_108;
            plVar42[0x41] = (long)local_110;
            plVar42[0x40] = (long)local_118;
            local_120 = (long *)0x0;
            if (plVar19 != (long *)0x0) {
              FUN_0103e9d8(&local_118);
            }
          }
          lVar17 = plVar42[0x3f];
        }
        local_a0 = CONCAT44(local_a0._4_4_,fVar7);
        plVar19 = (long *)FUN_02df6a98(lVar17 + 8,&local_190);
        plVar39 = (long *)(lVar17 + 0xc0);
        lVar37 = *plVar39;
        lVar24 = *(long *)(lVar17 + 200) - lVar37 >> 3;
        plVar31 = (long *)(lVar24 * -0x5555555555555555);
        local_120 = plVar19;
        if (plVar31 <= plVar19) {
          plVar4 = (long *)((long)plVar19 + 1);
          lVar24 = (long)plVar4 + lVar24 * 0x5555555555555555;
          if (plVar4 < plVar31 || lVar24 == 0) {
            if (plVar4 < plVar31) {
              *(long *)(lVar17 + 200) = lVar37 + (long)plVar4 * 0x18;
            }
          }
          else {
            FUN_00e93f30(plVar39,lVar24);
            lVar37 = *plVar39;
          }
        }
        *(undefined1 *)(lVar37 + (long)plVar19 * 0x18) = 0;
        *(undefined8 *)(*(long *)(lVar17 + 0xc0) + (long)plVar19 * 0x18 + 8) = 1;
        uVar14 = (undefined4)local_a0;
        *(undefined4 *)(*(long *)(lVar17 + 0xc0) + (long)plVar19 * 0x18 + 0x10) =
             (undefined4)local_a0;
        uVar36 = *(ulong *)(lVar17 + 0x130);
        uVar18 = uVar36 + 1;
        plVar31 = (long *)(lVar17 + 0xf8);
        *(ulong *)(lVar17 + 0x130) = uVar18;
        if (uVar36 == 0) {
          if (*(long *)(lVar17 + 0x100) - (long)*(ulong **)(lVar17 + 0xf8) >> 4 == 0)
          goto LAB_0236e698;
          **(ulong **)(lVar17 + 0xf8) = (ulong)plVar19;
          lVar17 = *plVar31;
LAB_0236e93c:
          *(undefined4 *)(lVar17 + 8) = (undefined4)local_a0;
        }
        else {
          pvVar23 = *(void **)(lVar17 + 0xf8);
          uVar25 = *(long *)(lVar17 + 0x100) - (long)pvVar23 >> 4;
          if (*(float *)((long)pvVar23 + (uVar36 - 1) * 0x10 + 8) <= fVar7) {
            if (uVar18 <= uVar25) {
              *(long **)((long)pvVar23 + uVar36 * 0x10) = plVar19;
              lVar17 = *plVar31 + uVar36 * 0x10;
              goto LAB_0236e93c;
            }
LAB_0236e698:
            FUN_0103e0a0(plVar31,&local_120,&local_a0);
          }
          else {
            if (uVar25 <= uVar18 && uVar18 - uVar25 != 0) {
              FUN_0103e51c(plVar31,uVar18 - uVar25);
              pvVar23 = (void *)*plVar31;
            }
            if (*(float *)((long)pvVar23 + 8) <= fVar7) {
              uVar15 = uVar36 - 1;
              uVar25 = uVar36 - 2;
              uVar18 = 1;
              while (uVar41 = uVar15, 2 < uVar25) {
                uVar5 = uVar18 + (long)((float)uVar25 * 0.5);
                uVar15 = uVar5;
                uVar25 = (long)((float)uVar25 * 0.5);
                if (*(float *)((long)pvVar23 + uVar5 * 0x10 + 8) <= fVar7) {
                  uVar15 = uVar41;
                  uVar25 = uVar41 - uVar5;
                  uVar18 = uVar5;
                }
              }
              if (uVar41 <= uVar36 && uVar18 <= uVar41) {
                pfVar26 = (float *)((long)pvVar23 + uVar41 * 0x10 + 8);
                while (fVar7 < *pfVar26) {
                  uVar41 = uVar41 - 1;
                  if ((uVar41 < uVar18) || (pfVar26 = pfVar26 + -4, uVar36 < uVar41))
                  goto LAB_0236e948;
                }
                uVar41 = uVar41 + 1;
              }
LAB_0236e948:
              if (uVar41 <= uVar36 && uVar18 <= uVar41) {
                uVar18 = uVar41;
              }
              pvVar23 = (void *)((long)pvVar23 + uVar18 * 0x10);
              memmove((void *)((long)pvVar23 + 0x10),pvVar23,(uVar36 - uVar18) * 0x10);
              *(long **)(*plVar31 + uVar18 * 0x10) = plVar19;
              *(undefined4 *)(*plVar31 + uVar18 * 0x10 + 8) = uVar14;
            }
            else {
              memmove((void *)((long)pvVar23 + 0x10),pvVar23,uVar36 << 4);
              *(long **)*plVar31 = plVar19;
              *(undefined4 *)(*plVar31 + 8) = uVar14;
            }
          }
        }
        local_120 = (long *)0x3;
        do {
          lVar17 = plVar42[0x2c] - plVar42[0x2b];
          local_118 = plVar19;
          if (lVar17 == 0) {
            plVar31 = (long *)(plVar42[0x1e] - plVar42[0x1d] >> 4);
            FUN_0103b268(plVar42 + 0x1d,&local_120);
            goto LAB_0236ea1c;
          }
          plVar31 = *(long **)(plVar42[0x2c] + -8);
          plVar42[0x2c] = lVar17 + plVar42[0x2b] + -8;
          uVar18 = (ulong)plVar31 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(plVar42[0x24] + uVar18) =
               *(ulong *)(plVar42[0x24] + uVar18) &
               (1L << ((ulong)plVar31 & 0x3f) ^ 0xffffffffffffffffU);
        } while ((long *)(plVar42[0x1e] - plVar42[0x1d] >> 4) <= plVar31);
        puVar6 = (undefined8 *)(plVar42[0x1d] + (long)plVar31 * 0x10);
        *puVar6 = 3;
        puVar6[1] = plVar19;
        if ((long *)plVar42[0x32] <= plVar31) {
LAB_0236ea1c:
          plVar42[0x32] = (long)plVar31 + 1;
        }
        pLVar21 = (LightEventType *)(plVar42 + 7);
        plVar42[6] = 0;
LAB_0236eb98:
        nn::os::SignalLightEvent(pLVar21);
      }
      local_120 = plVar31;
      FUN_0103bd9c(local_138 + 0x36,&local_120);
      if (!bVar27) {
        *puVar35 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar35 + 1));
      }
      *(float *)(param_1 + 0x520) = fVar7 + 0.01;
      if (local_128 != '\0') {
        *local_130 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_130 + 1));
      }
      if (local_178[0] != (ulong *)0x0) {
        puVar35 = local_178[0] + 3;
        do {
          sVar32 = (short)*puVar35;
          cVar11 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(puVar35,0x10);
          if (bVar27) {
            *(short *)puVar35 = sVar32 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar32 == 1) {
          piVar3 = (int *)((long)local_178[0] + 0x1c);
          do {
            iVar16 = *piVar3;
            cVar11 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar27) {
              *piVar3 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar16 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_120 = (long *)*local_178[0];
            FUN_00c44438(lVar17 + 0x8040,&local_120);
          }
        }
        else if (sVar32 == 0) goto LAB_0236dfd0;
      }
      plVar19 = (long *)0x0;
      bVar27 = false;
    }
    else {
      bVar27 = true;
      *(undefined1 *)(plVar31 + 1) = 1;
    }
    if (!bVar40) {
      *plVar38 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar38 + 1));
    }
  }
  if (!bVar28) {
    *plVar30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar30 + 1));
  }
LAB_0236f070:
  do {
    lVar17 = *plVar43;
    lVar37 = *(long *)(param_1 + 0x298);
    cVar11 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(plVar43,0x10);
    if (bVar28) {
      *plVar43 = lVar17;
      *(long *)(param_1 + 0x298) = lVar37;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar24 = *plVar43;
    lVar20 = *(long *)(param_1 + 0x298);
    if (lVar24 != lVar17 || lVar20 != lVar37) {
      bVar28 = false;
      ClearExclusiveLocal();
      goto joined_r0x0236f0ac;
    }
    cVar11 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(plVar43,0x10);
    if (bVar28) {
      *plVar43 = lVar17;
      *(long *)(param_1 + 0x294) = lVar37 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar28 = true;
joined_r0x0236f0ac:
  if (!bVar28) {
    do {
      lVar17 = *plVar43;
      lVar37 = *(long *)(param_1 + 0x298);
      if (lVar17 != lVar24 || lVar37 != lVar20) {
        bVar28 = false;
        ClearExclusiveLocal();
        lVar24 = lVar17;
        lVar20 = lVar37;
        goto joined_r0x0236f0ac;
      }
      cVar11 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar43,0x10);
      if (bVar28) {
        *plVar43 = lVar24;
        *(long *)(param_1 + 0x294) = lVar20 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar28 = true;
    lVar24 = lVar17;
    lVar20 = lVar37;
    goto joined_r0x0236f0ac;
  }
  nn::os::SignalLightEvent(pLVar1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  if (!bVar27) {
    return;
  }
  do {
    lVar17 = *plVar19;
    lVar37 = plVar19[1];
    cVar11 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar27) {
      *plVar19 = lVar17;
      plVar19[1] = lVar37;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar24 = *plVar19;
    lVar20 = plVar19[1];
    if (lVar24 != lVar17 || lVar20 != lVar37) {
      bVar27 = false;
      ClearExclusiveLocal();
      goto joined_r0x0236f104;
    }
    cVar11 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar27) {
      *plVar19 = lVar17;
      *(long *)((long)plVar19 + 4) = lVar37 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar27 = true;
joined_r0x0236f104:
  do {
    if (bVar27) {
      nn::os::SignalLightEvent((LightEventType *)(plVar19 + 2));
      return;
    }
    do {
      lVar17 = *plVar19;
      lVar37 = plVar19[1];
      if (lVar17 != lVar24 || lVar37 != lVar20) {
        bVar27 = false;
        ClearExclusiveLocal();
        lVar24 = lVar17;
        lVar20 = lVar37;
        goto joined_r0x0236f104;
      }
      cVar11 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar27) {
        *plVar19 = lVar24;
        *(long *)((long)plVar19 + 4) = lVar20 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar27 = true;
    lVar24 = lVar17;
    lVar20 = lVar37;
  } while( true );
code_r0x0236f2b0:
  sVar32 = sVar9;
  if (sVar9 == 0) goto LAB_0236d2b4;
  goto LAB_0236f280;
LAB_0236d0d0:
  do {
    lVar17 = *plVar19;
    lVar37 = *(long *)(param_1 + 0x538);
    cVar11 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar27) {
      *plVar19 = lVar17;
      *(long *)(param_1 + 0x538) = lVar37;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  do {
    lVar24 = *plVar19;
    lVar20 = *(long *)(param_1 + 0x538);
    if (lVar24 != lVar17 || lVar20 != lVar37) {
      bVar27 = false;
      ClearExclusiveLocal();
      goto joined_r0x0236d530;
    }
    cVar11 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar27) {
      *plVar19 = lVar17;
      *(long *)(param_1 + 0x534) = lVar37 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar27 = true;
joined_r0x0236d530:
  if (!bVar27) {
    do {
      lVar17 = *plVar19;
      lVar37 = *(long *)(param_1 + 0x538);
      if (lVar17 != lVar24 || lVar37 != lVar20) {
        bVar27 = false;
        ClearExclusiveLocal();
        lVar24 = lVar17;
        lVar20 = lVar37;
        goto joined_r0x0236d530;
      }
      cVar11 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar27) {
        *plVar19 = lVar24;
        *(long *)(param_1 + 0x534) = lVar20 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar27 = true;
    lVar24 = lVar17;
    lVar20 = lVar37;
    goto joined_r0x0236d530;
  }
  nn::os::SignalLightEvent(pLVar21);
  local_190 = param_1;
  lStack_188 = param_2;
  local_180 = param_4;
  FUN_00d5f508(local_178,param_3);
  local_150 = (undefined4)param_5[2];
  uStack_158 = param_5[1];
  local_160 = *param_5;
  FUN_00f338dc(&local_138,param_1);
  puVar35 = local_138 + 0x33;
  fVar7 = *(float *)(param_1 + 0x520);
  uVar36 = *puVar35;
  uVar18 = nn::os::GetCurrentThread();
  if (uVar18 == uVar36) {
    puVar35 = (ulong *)0x0;
    bVar27 = true;
  }
  else {
    uVar18 = nn::os::GetCurrentThread();
    do {
      if (*puVar35 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(local_138 + 0x34));
          while (*puVar35 == 0) {
            cVar11 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(puVar35,0x10);
            if (bVar27) {
              *puVar35 = uVar18;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_0236d5b4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar27) {
        *puVar35 = uVar18;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_0236d5b4:
    bVar27 = false;
  }
  plVar43 = (long *)*local_138;
  plVar19 = plVar43 + 6;
  lVar37 = *plVar19;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 == lVar37) {
    if (plVar43[0x3f] == 0) {
      local_a0 = plVar43[1];
      FUN_0103caf0(&local_120,local_a0,&local_a0);
      plVar19 = local_120;
      local_120 = (long *)0x0;
      lVar17 = plVar43[0x3f];
      plVar43[0x3f] = (long)plVar19;
      if (lVar17 == 0) {
        plVar43[0x42] = local_108;
        plVar43[0x41] = (long)local_110;
        plVar43[0x40] = (long)local_118;
      }
      else {
        FUN_0103e9d8(plVar43 + 0x40);
        plVar19 = local_120;
        plVar43[0x42] = local_108;
        plVar43[0x41] = (long)local_110;
        plVar43[0x40] = (long)local_118;
        local_120 = (long *)0x0;
        if (plVar19 != (long *)0x0) {
          FUN_0103e9d8(&local_118);
        }
      }
    }
    local_120 = (long *)0xffffffff00000003;
    plVar30 = (long *)FUN_0103b2e0(plVar43 + 0x1d,&local_120);
    plVar19 = plVar43 + 9;
    lVar37 = *plVar19;
    lVar17 = nn::os::GetCurrentThread();
    if (lVar17 == lVar37) {
      plVar19 = (long *)0x0;
      bVar28 = true;
    }
    else {
      lVar17 = nn::os::GetCurrentThread();
      do {
        if (*plVar19 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar43 + 10));
            while (*plVar19 == 0) {
              cVar11 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar28) {
                *plVar19 = lVar17;
                cVar11 = ExclusiveMonitorsStatus();
              }
              if (cVar11 == '\0') goto LAB_0236d800;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar11 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar28) {
          *plVar19 = lVar17;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
LAB_0236d800:
      bVar28 = false;
    }
    local_100 = local_190;
    local_f8 = lStack_188;
    local_e0 = 0;
    local_f0 = local_180;
    local_e8 = (long *)0x0;
    local_120 = plVar43;
    local_118 = plVar30;
    local_110 = plVar43;
    FUN_00f34110(&local_e8,local_178);
    local_c0 = CONCAT44(uStack_14c,local_150);
    local_d0 = local_160;
    local_c8 = uStack_158;
    local_b8 = uStack_148;
    local_a8 = 1;
    puVar6 = (undefined8 *)plVar43[0xd];
    local_b0 = fVar7;
    if (puVar6 < (undefined8 *)plVar43[0xe]) {
      lVar17 = plVar43[0xf];
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar37 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar37 != 0) {
        if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_0236f304;
        *(long *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = lVar17;
        *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
      }
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[4] = local_120;
      puVar6[5] = local_118;
      puVar6[6] = local_110;
      puVar6[9] = local_f8;
      puVar6[10] = local_f0;
      puVar6[0xc] = 0;
      puVar6[8] = local_100;
      puVar6[0xb] = 0;
      FUN_00fd9730(puVar6 + 0xb,&local_e8);
      puVar6[0x11] = local_b8;
      puVar6[0xf] = local_c8;
      puVar6[0x10] = local_c0;
      puVar6[0xe] = local_d0;
      puVar6[0x12] = CONCAT44(uStack_ac,local_b0);
      puVar6[0x13] = local_a8;
      *puVar6 = &LAB_02df48d8;
      puVar6[1] = &LAB_02df4b58;
      puVar6[2] = &LAB_02df5498;
      puVar6[3] = &LAB_02df551c;
      if (lVar37 != 0) {
        *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
      }
      plVar43[0xd] = (long)(puVar6 + 0x20);
    }
    else {
      plVar38 = plVar43 + 0xf;
      lVar24 = FUN_0103b290(plVar43 + 0xc,((long)puVar6 - plVar43[0xc] >> 8) + 1);
      lVar17 = plVar43[0xc];
      lVar37 = plVar43[0xd];
      local_88 = 0;
      plStack_80 = plVar38;
      if (lVar24 == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = (**(code **)(*(long *)*plVar38 + 0x10))((long *)*plVar38,lVar24 << 8,0x10);
        if (lVar20 == 0) {
          (**(code **)(*(long *)*plVar38 + 0xe8))();
        }
      }
      puVar6 = (undefined8 *)(lVar20 + (lVar37 - lVar17 >> 8) * 0x100);
      local_88 = lVar20 + lVar24 * 0x100;
      lVar17 = *plVar38;
      local_a0 = lVar20;
      puStack_98 = puVar6;
      local_90 = puVar6;
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar37 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar37 != 0) {
        if (0xf < *(ulong *)(lVar37 + 0x80)) {
LAB_0236f304:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = lVar17;
        *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
      }
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[4] = local_120;
      puVar6[5] = local_118;
      puVar6[6] = local_110;
      puVar6[0xb] = 0;
      puVar6[8] = local_100;
      puVar6[0xc] = 0;
      puVar6[9] = local_f8;
      puVar6[10] = local_f0;
      FUN_00fd9730(puVar6 + 0xb,&local_e8);
      puVar6[0xf] = local_c8;
      puVar6[0x11] = local_b8;
      puVar6[0x10] = local_c0;
      puVar6[0xe] = local_d0;
      puVar6[0x12] = CONCAT44(uStack_ac,local_b0);
      puVar6[0x13] = local_a8;
      *puVar6 = &LAB_02df48d8;
      puVar6[1] = &LAB_02df4b58;
      puVar6[2] = &LAB_02df5498;
      puVar6[3] = &LAB_02df551c;
      if (lVar37 != 0) {
        *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
      }
      local_90 = local_90 + 0x20;
      FUN_0103b38c(plVar43 + 0xc,&local_a0);
      FUN_0103bbd0(&local_a0);
    }
    plVar43 = local_e8;
    if (local_e8 != (long *)0x0) {
      plVar38 = local_e8 + 3;
      do {
        sVar32 = (short)*plVar38;
        cVar11 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar40) {
          *(short *)plVar38 = sVar32 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar32 == 1) {
        piVar3 = (int *)((long)local_e8 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar11 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar40) {
            *piVar3 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_a0 = *plVar43;
          FUN_00c44438(lVar17 + 0x8040,&local_a0);
        }
      }
      else if (sVar32 == 0) goto LAB_0236dfd0;
    }
    if (!bVar28) {
      *plVar19 = 0;
      pLVar21 = (LightEventType *)(plVar19 + 1);
      goto LAB_0236df50;
    }
  }
  else {
    lVar17 = nn::os::GetCurrentThread();
    do {
      if (*plVar19 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar43 + 7));
          while (*plVar19 == 0) {
            cVar11 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar28) {
              *plVar19 = lVar17;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_0236d5f0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar28) {
        *plVar19 = lVar17;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_0236d5f0:
    lVar17 = plVar43[0x3f];
    if (lVar17 == 0) {
      local_a0 = plVar43[1];
      FUN_0103caf0(&local_120,local_a0,&local_a0);
      plVar19 = local_120;
      local_120 = (long *)0x0;
      lVar17 = plVar43[0x3f];
      plVar43[0x3f] = (long)plVar19;
      if (lVar17 == 0) {
        plVar43[0x42] = local_108;
        plVar43[0x41] = (long)local_110;
        plVar43[0x40] = (long)local_118;
        local_120 = (long *)0x0;
      }
      else {
        FUN_0103e9d8(plVar43 + 0x40);
        plVar19 = local_120;
        plVar43[0x42] = local_108;
        plVar43[0x41] = (long)local_110;
        plVar43[0x40] = (long)local_118;
        local_120 = (long *)0x0;
        if (plVar19 != (long *)0x0) {
          FUN_0103e9d8(&local_118);
        }
      }
      lVar17 = plVar43[0x3f];
    }
    local_a0 = CONCAT44(local_a0._4_4_,fVar7);
    plVar19 = (long *)FUN_02df55a0(lVar17 + 8,&local_190);
    plVar38 = (long *)(lVar17 + 0xc0);
    lVar37 = *plVar38;
    lVar24 = *(long *)(lVar17 + 200) - lVar37 >> 3;
    plVar30 = (long *)(lVar24 * -0x5555555555555555);
    local_120 = plVar19;
    if (plVar30 <= plVar19) {
      plVar42 = (long *)((long)plVar19 + 1);
      lVar24 = (long)plVar42 + lVar24 * 0x5555555555555555;
      if (plVar42 < plVar30 || lVar24 == 0) {
        if (plVar42 < plVar30) {
          *(long *)(lVar17 + 200) = lVar37 + (long)plVar42 * 0x18;
        }
      }
      else {
        FUN_00e93f30(plVar38,lVar24);
        lVar37 = *plVar38;
      }
    }
    *(undefined1 *)(lVar37 + (long)plVar19 * 0x18) = 0;
    *(undefined8 *)(*(long *)(lVar17 + 0xc0) + (long)plVar19 * 0x18 + 8) = 1;
    uVar14 = (undefined4)local_a0;
    *(undefined4 *)(*(long *)(lVar17 + 0xc0) + (long)plVar19 * 0x18 + 0x10) = (undefined4)local_a0;
    uVar36 = *(ulong *)(lVar17 + 0x130);
    uVar18 = uVar36 + 1;
    plVar30 = (long *)(lVar17 + 0xf8);
    *(ulong *)(lVar17 + 0x130) = uVar18;
    if (uVar36 == 0) {
      if (*(long *)(lVar17 + 0x100) - (long)*(ulong **)(lVar17 + 0xf8) >> 4 != 0) {
        **(ulong **)(lVar17 + 0xf8) = (ulong)plVar19;
LAB_0236d9ec:
        lVar17 = *plVar30;
        goto LAB_0236dc3c;
      }
LAB_0236d9fc:
      FUN_0103e0a0(plVar30,&local_120,&local_a0);
    }
    else {
      pvVar23 = *(void **)(lVar17 + 0xf8);
      uVar25 = *(long *)(lVar17 + 0x100) - (long)pvVar23 >> 4;
      if (*(float *)((long)pvVar23 + (uVar36 - 1) * 0x10 + 8) <= fVar7) {
        if (uVar25 < uVar18) goto LAB_0236d9fc;
        *(long **)((long)pvVar23 + uVar36 * 0x10) = plVar19;
        lVar17 = *plVar30 + uVar36 * 0x10;
      }
      else {
        if (uVar25 <= uVar18 && uVar18 - uVar25 != 0) {
          FUN_0103e51c(plVar30,uVar18 - uVar25);
          pvVar23 = (void *)*plVar30;
        }
        if (fVar7 < *(float *)((long)pvVar23 + 8)) {
          memmove((void *)((long)pvVar23 + 0x10),pvVar23,uVar36 << 4);
          *(long **)*plVar30 = plVar19;
          goto LAB_0236d9ec;
        }
        uVar15 = uVar36 - 1;
        uVar25 = uVar36 - 2;
        uVar18 = 1;
        while (uVar41 = uVar15, 2 < uVar25) {
          uVar5 = uVar18 + (long)((float)uVar25 * 0.5);
          uVar15 = uVar5;
          uVar25 = (long)((float)uVar25 * 0.5);
          if (*(float *)((long)pvVar23 + uVar5 * 0x10 + 8) <= fVar7) {
            uVar15 = uVar41;
            uVar25 = uVar41 - uVar5;
            uVar18 = uVar5;
          }
        }
        if (uVar41 <= uVar36 && uVar18 <= uVar41) {
          pfVar26 = (float *)((long)pvVar23 + uVar41 * 0x10 + 8);
          while (fVar7 < *pfVar26) {
            uVar41 = uVar41 - 1;
            if ((uVar41 < uVar18) || (pfVar26 = pfVar26 + -4, uVar36 < uVar41)) goto LAB_0236dc08;
          }
          uVar41 = uVar41 + 1;
        }
LAB_0236dc08:
        if (uVar41 <= uVar36 && uVar18 <= uVar41) {
          uVar18 = uVar41;
        }
        pvVar23 = (void *)((long)pvVar23 + uVar18 * 0x10);
        memmove((void *)((long)pvVar23 + 0x10),pvVar23,(uVar36 - uVar18) * 0x10);
        *(long **)(*plVar30 + uVar18 * 0x10) = plVar19;
        lVar17 = *plVar30 + uVar18 * 0x10;
      }
LAB_0236dc3c:
      *(undefined4 *)(lVar17 + 8) = uVar14;
    }
    local_120 = (long *)0x3;
    do {
      lVar17 = plVar43[0x2c] - plVar43[0x2b];
      local_118 = plVar19;
      if (lVar17 == 0) {
        plVar30 = (long *)(plVar43[0x1e] - plVar43[0x1d] >> 4);
        FUN_0103b268(plVar43 + 0x1d,&local_120);
        goto LAB_0236dcd0;
      }
      plVar30 = *(long **)(plVar43[0x2c] + -8);
      plVar43[0x2c] = lVar17 + plVar43[0x2b] + -8;
      uVar18 = (ulong)plVar30 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(plVar43[0x24] + uVar18) =
           *(ulong *)(plVar43[0x24] + uVar18) &
           (1L << ((ulong)plVar30 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((long *)(plVar43[0x1e] - plVar43[0x1d] >> 4) <= plVar30);
    puVar6 = (undefined8 *)(plVar43[0x1d] + (long)plVar30 * 0x10);
    *puVar6 = 3;
    puVar6[1] = plVar19;
    if ((long *)plVar43[0x32] <= plVar30) {
LAB_0236dcd0:
      plVar43[0x32] = (long)plVar30 + 1;
    }
    plVar43[6] = 0;
    pLVar21 = (LightEventType *)(plVar43 + 7);
LAB_0236df50:
    nn::os::SignalLightEvent(pLVar21);
  }
  local_120 = plVar30;
  FUN_0103bd9c(local_138 + 0x36,&local_120);
  if (!bVar27) {
    *puVar35 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar35 + 1));
  }
  *(float *)(param_1 + 0x520) = fVar7 + 0.01;
  if (local_128 != '\0') {
    *local_130 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_130 + 1));
  }
  if (local_178[0] != (ulong *)0x0) {
    puVar35 = local_178[0] + 3;
    do {
      sVar32 = (short)*puVar35;
      cVar11 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar27) {
        *(short *)puVar35 = sVar32 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar32 == 1) {
      piVar3 = (int *)((long)local_178[0] + 0x1c);
      do {
        iVar16 = *piVar3;
        cVar11 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar27) {
          *piVar3 = -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_120 = (long *)*local_178[0];
        FUN_00c44438(lVar17 + 0x8040,&local_120);
      }
    }
    else if (sVar32 == 0) {
LAB_0236dfd0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


