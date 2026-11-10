/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01036c78; name: FUN_01036c78
 */


void FUN_01036c78(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  undefined8 *puVar4;
  float fVar5;
  short sVar6;
  int iVar7;
  char cVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  LightEventType *pLVar15;
  LightEventType *pLVar16;
  long lVar17;
  void *pvVar18;
  bool bVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  float *pfVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  bool bVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  long *local_178;
  long *local_170;
  long *local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined8 *local_100;
  char local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  float local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  long *local_88;
  long *plStack_80;
  undefined8 local_68;
  
  if ((param_4 & 1) == 0) {
    plVar32 = param_1 + 0xe6;
    lVar33 = *plVar32;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar33) {
      lVar14 = nn::os::GetCurrentThread();
LAB_01036cc8:
      if (*plVar32 == 0) goto code_r0x01036cd0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe7));
      do {
        if (*plVar32 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe7));
            while (*plVar32 == 0) {
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar12) {
                *plVar32 = lVar14;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01036cd8;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar12) {
          *plVar32 = lVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01036cd8:
      bVar12 = false;
      goto LAB_01036cdc;
    }
    plVar32 = (long *)0x0;
    bVar12 = true;
LAB_01036cdc:
    plVar20 = (long *)0x0;
    if ((long *)*param_3 != (long *)0x0) {
      plVar20 = *(long **)*param_3;
    }
    plVar27 = (long *)param_1[0xe9];
    lVar14 = param_1[0xf0];
    plVar24 = plVar27 + lVar14 * 2;
    if ((lVar14 == 0) || ((long *)*plVar27 == plVar20)) {
      plVar22 = plVar27;
    }
    else {
      lVar33 = lVar14 * 0x10;
      plVar31 = plVar27;
      do {
        lVar33 = lVar33 + -0x10;
        if (lVar33 == 0) goto LAB_01036d34;
        plVar30 = plVar31 + 2;
        plVar22 = plVar31 + 2;
        plVar31 = plVar31 + 2;
      } while ((long *)*plVar30 != plVar20);
    }
    if (plVar24 == plVar22) {
LAB_01036d34:
      plVar22 = param_1 + 0xf0;
      if (lVar14 == param_1[0xea] - (long)plVar27 >> 4) {
        local_e8 = (long *)0x1;
        local_f0 = plVar20;
        FUN_0103c76c(param_1 + 0xe9,&local_f0);
      }
      else {
        *plVar24 = (long)plVar20;
        plVar24[1] = 1;
      }
    }
    else {
      plVar22 = plVar22 + 1;
    }
    *plVar22 = *plVar22 + 1;
    if (!bVar12) {
      *plVar32 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar32 + 1));
    }
  }
  plVar32 = param_1 + 0xa6;
  lVar14 = nn::os::GetCurrentThread();
  do {
    lVar33 = *plVar32;
    lVar28 = param_1[0xa7];
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
    if (bVar12) {
      *plVar32 = lVar33;
      param_1[0xa7] = lVar28;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pLVar16 = (LightEventType *)(param_1 + 0xa8);
LAB_01036d94:
  while ((lVar33 != 0 && (lVar14 != lVar33))) {
    nn::os::WaitLightEvent(pLVar16);
    do {
      lVar33 = *plVar32;
      lVar28 = param_1[0xa7];
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar12) {
        *plVar32 = lVar33;
        param_1[0xa7] = lVar28;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  do {
    lVar34 = *plVar32;
    if (lVar34 != lVar33 || param_1[0xa7] != lVar28) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_01036dc4;
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
    if (bVar12) {
      *plVar32 = lVar33;
      *(long *)((long)param_1 + 0x534) = lVar28 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar12 = true;
LAB_01036dc4:
  if (!bVar12) {
    lVar33 = lVar34;
    lVar28 = param_1[0xa7];
    goto LAB_01036d94;
  }
  if ((char)param_1[0xaa] == '\0') {
    plVar20 = param_1 + 0xe6;
    lVar33 = *plVar20;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar33) {
      lVar14 = nn::os::GetCurrentThread();
LAB_01036e00:
      if (*plVar20 == 0) goto code_r0x01036e08;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe7));
      do {
        if (*plVar20 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe7));
            while (*plVar20 == 0) {
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar12) {
                *plVar20 = lVar14;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01036e10;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar12) {
          *plVar20 = lVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01036e10:
      bVar12 = false;
      goto LAB_01036e14;
    }
    plVar20 = (long *)0x0;
    bVar12 = true;
LAB_01036e14:
    if ((long *)*param_3 == (long *)0x0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)*param_3;
    }
    plVar24 = (long *)param_1[0xe9];
    uVar21 = param_1[0xf0];
    if ((uVar21 == 0) || (*plVar24 == lVar14)) {
      plVar27 = plVar24;
    }
    else {
      lVar33 = uVar21 * 0x10;
      plVar22 = plVar24;
      do {
        lVar33 = lVar33 + -0x10;
        if (lVar33 == 0) {
          plVar27 = plVar24 + uVar21 * 2;
          break;
        }
        plVar27 = plVar22 + 2;
        plVar31 = plVar22 + 2;
        plVar22 = plVar27;
      } while (*plVar31 != lVar14);
    }
    if (plVar24 + uVar21 * 2 != plVar27) {
      if (plVar27[1] != 0) {
        plVar27[1] = plVar27[1] + -1;
        if (!bVar12) {
          *plVar20 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
        }
        if ((long *)*param_2 == (long *)0x0) {
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = *(long **)*param_2;
        }
        plVar24 = param_1 + 0xc;
        lVar14 = nn::os::GetCurrentThread();
LAB_01036ee0:
        if (*plVar24 == 0) goto code_r0x01036ee8;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd));
        do {
          if (*plVar24 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd));
              while (*plVar24 == 0) {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar12) {
                  *plVar24 = lVar14;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_01036ef0;
              }
            } while( true );
          }
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar12) {
            *plVar24 = lVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
LAB_01036ef0:
        plVar24 = param_1 + 0x5e;
        lVar33 = *plVar24;
        lVar14 = nn::os::GetCurrentThread();
        if (lVar14 != lVar33) {
          lVar14 = nn::os::GetCurrentThread();
LAB_01036f10:
          if (*plVar24 == 0) goto code_r0x01036f18;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5f));
          do {
            if (*plVar24 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5f));
                while (*plVar24 == 0) {
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar12) {
                    *plVar24 = lVar14;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') goto LAB_01036f20;
                }
              } while( true );
            }
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar12) {
              *plVar24 = lVar14;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
LAB_01036f20:
          bVar12 = false;
          bVar36 = false;
          goto LAB_01036f24;
        }
        plVar24 = (long *)0x0;
        bVar12 = true;
        bVar36 = true;
LAB_01036f24:
        plVar22 = (long *)param_1[0x61];
        lVar14 = param_1[0x68];
        plVar27 = plVar22 + lVar14 * 8;
        if ((lVar14 == 0) || ((long *)*plVar22 == plVar20)) {
          plVar31 = plVar22;
LAB_01036f68:
          if (plVar27 == plVar31) goto LAB_01036f70;
          plVar31[1] = plVar31[1] + 1;
        }
        else {
          lVar33 = lVar14 * 0x40;
          plVar30 = plVar22;
          while (lVar33 = lVar33 + -0x40, lVar33 != 0) {
            plVar35 = plVar30 + 8;
            plVar31 = plVar30 + 8;
            plVar30 = plVar30 + 8;
            if ((long *)*plVar35 == plVar20) goto LAB_01036f68;
          }
LAB_01036f70:
          plVar31 = (long *)param_1[0x62];
          if (lVar14 == (long)plVar31 - (long)plVar22 >> 6) {
            local_e8 = (long *)0x0;
            local_e0 = (long *)0x0;
            local_f0 = (long *)0x0;
            if (plVar31 < (long *)param_1[99]) {
              lVar14 = param_1[100];
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar33 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar33 == 0) {
                *plVar31 = (long)plVar20;
                plVar31[1] = 0;
                plVar31[2] = 0;
                plVar31[3] = 0;
                plVar31[6] = (long)local_e8;
                plVar31[7] = (long)local_e0;
                plVar31[4] = 0;
                plVar31[5] = (long)local_f0;
              }
              else {
                if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_0103aa70;
                *(long *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = lVar14;
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
                *plVar31 = (long)plVar20;
                plVar31[1] = 0;
                plVar31[2] = 0;
                plVar31[3] = 0;
                plVar31[6] = (long)local_e8;
                plVar31[7] = (long)local_e0;
                plVar31[4] = 0;
                plVar31[5] = (long)local_f0;
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
              }
              param_1[0x62] = (long)(plVar31 + 8);
            }
            else {
              uVar29 = param_1[0x65];
              uVar21 = lVar14 + 1;
              if (0x7ffffffffffffffe < uVar29) {
                uVar29 = 0x7fffffffffffffff;
              }
              if (uVar29 < uVar21) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar33 = param_1[99] - (long)plVar22;
              uVar23 = lVar33 >> 5;
              if (uVar21 <= uVar23) {
                uVar21 = uVar23;
              }
              if (uVar29 >> 1 <= (ulong)(lVar33 >> 6)) {
                uVar21 = uVar29;
              }
              if (uVar21 == 0) {
                lVar33 = 0;
              }
              else {
                lVar33 = (**(code **)(*(long *)param_1[100] + 0x10))
                                   ((long *)param_1[100],uVar21 << 6,8);
                if (lVar33 == 0) {
                  (**(code **)(*(long *)param_1[100] + 0xe8))();
                }
              }
              plVar27 = (long *)(lVar33 + lVar14 * 0x40);
              lVar14 = param_1[100];
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar28 == 0) {
                plVar27[3] = 0;
                plVar27[4] = 0;
                *plVar27 = (long)plVar20;
                plVar27[1] = 0;
                plVar27[2] = 0;
                plVar27[5] = (long)local_f0;
                plVar27[6] = (long)local_e8;
                plVar27[7] = (long)local_e0;
              }
              else {
                if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_0103aa70;
                *(long *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = lVar14;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                *plVar27 = (long)plVar20;
                plVar27[3] = 0;
                plVar27[4] = 0;
                plVar27[1] = 0;
                plVar27[2] = 0;
                plVar27[5] = (long)local_f0;
                plVar27[6] = (long)local_e8;
                plVar27[7] = (long)local_e0;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              }
              lVar14 = param_1[0x61];
              lVar28 = param_1[0x62];
              if (lVar28 == lVar14) {
                plVar22 = plVar27;
                lVar28 = lVar14;
              }
              else {
                lVar34 = 0;
                do {
                  lVar37 = param_1[100];
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar17 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar17 != 0) {
                    if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_0103aa70;
                    *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar37;
                    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
                  }
                  lVar37 = lVar28 + lVar34;
                  *(undefined8 *)((long)plVar27 + lVar34 + -0x40) = *(undefined8 *)(lVar37 + -0x40);
                  *(undefined8 *)((long)plVar27 + lVar34 + -0x38) = *(undefined8 *)(lVar37 + -0x38);
                  uVar39 = *(undefined8 *)(lVar37 + -0x30);
                  *(undefined8 *)(lVar37 + -0x30) = 0;
                  *(undefined8 *)((long)plVar27 + lVar34 + -0x30) = uVar39;
                  uVar39 = *(undefined8 *)(lVar37 + -0x28);
                  *(undefined8 *)(lVar37 + -0x28) = 0;
                  *(undefined8 *)((long)plVar27 + lVar34 + -0x28) = uVar39;
                  uVar39 = *(undefined8 *)(lVar37 + -0x20);
                  *(undefined8 *)(lVar37 + -0x20) = 0;
                  *(undefined8 *)((long)plVar27 + lVar34 + -0x20) = uVar39;
                  uVar39 = *(undefined8 *)(lVar37 + -0x18);
                  uVar38 = *(undefined8 *)(lVar37 + -8);
                  *(undefined8 *)((long)plVar27 + lVar34 + -0x10) = *(undefined8 *)(lVar37 + -0x10);
                  *(undefined8 *)((long)plVar27 + lVar34 + -8) = uVar38;
                  *(undefined8 *)((long)plVar27 + lVar34 + -0x18) = uVar39;
                  if (lVar17 != 0) {
                    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
                  }
                  lVar34 = lVar34 + -0x40;
                } while (lVar14 - lVar28 != lVar34);
                lVar14 = param_1[0x62];
                plVar22 = (long *)((long)plVar27 + lVar34);
                lVar28 = param_1[0x61];
              }
              lVar34 = param_1[99];
              param_1[0x61] = (long)plVar22;
              param_1[0x62] = (long)(plVar27 + 8);
              param_1[99] = lVar33 + uVar21 * 0x40;
              for (; lVar14 != lVar28; lVar14 = lVar14 + -0x40) {
                FUN_0103bcb0(lVar14 + -0x38);
              }
              bVar12 = bVar36;
              if (lVar28 != 0) {
                plVar27 = (long *)param_1[100];
                uVar21 = (**(code **)(*plVar27 + 0xf8))(plVar27);
                if (((uVar21 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,lVar34 - lVar28,8);
                }
                else {
                  FUN_00c48fe8(plVar27,lVar28,lVar34 - lVar28,8);
                }
              }
            }
          }
          else {
            local_e8 = (long *)0x0;
            local_e0 = (long *)0x0;
            local_d8 = (long *)0x0;
            local_d0 = (long *)0x0;
            uStack_c8 = 0;
            local_c0 = (long *)0x0;
            uStack_b8 = 0;
            *plVar27 = (long)plVar20;
            local_f0 = plVar20;
            FUN_00e34064(plVar27 + 1,&local_e8);
            if (local_d0 != (long *)0x0) {
              plVar27 = local_d0 + 5;
              do {
                lVar14 = *plVar27;
                iVar13 = (int)lVar14 + -1;
                cVar8 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar19) {
                  *(int *)plVar27 = iVar13;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar13 == 0) {
                (**(code **)(*local_d0 + 0x10))();
              }
              else if ((int)lVar14 == 0) goto LAB_0103881c;
            }
            if (local_d8 != (long *)0x0) {
              plVar27 = local_d8 + 5;
              do {
                lVar14 = *plVar27;
                iVar13 = (int)lVar14 + -1;
                cVar8 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar19) {
                  *(int *)plVar27 = iVar13;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar13 == 0) {
                (**(code **)(*local_d8 + 0x10))();
              }
              else if ((int)lVar14 == 0) goto LAB_0103881c;
            }
            if (local_e0 != (long *)0x0) {
              plVar27 = local_e0 + 5;
              do {
                lVar14 = *plVar27;
                iVar13 = (int)lVar14 + -1;
                cVar8 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar19) {
                  *(int *)plVar27 = iVar13;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar13 == 0) {
                (**(code **)(*local_e0 + 0x10))();
              }
              else if ((int)lVar14 == 0) goto LAB_0103881c;
            }
          }
          lVar14 = param_1[0x68];
          param_1[0x68] = lVar14 + 1;
          lVar14 = param_1[0x61] + lVar14 * 0x40;
          *(undefined8 *)(lVar14 + 8) = 1;
          lVar33 = FUN_0103b434(param_1[1]);
          if (lVar33 != 0) {
            piVar1 = (int *)(lVar33 + 0x28);
            do {
              iVar13 = *piVar1;
              cVar8 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar19) {
                *piVar1 = iVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == -1) goto LAB_01037e04;
          }
          plVar22 = (long *)(lVar14 + 0x10);
          plVar27 = (long *)*plVar22;
          *plVar22 = 0;
          if (plVar27 != (long *)0x0) {
            plVar31 = plVar27 + 5;
            do {
              lVar28 = *plVar31;
              iVar13 = (int)lVar28 + -1;
              cVar8 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *(int *)plVar31 = iVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*plVar27 + 0x10))();
            }
            else if ((int)lVar28 == 0) goto LAB_0103881c;
          }
          *plVar22 = lVar33;
          lVar33 = FUN_0103b434(param_1[1]);
          if (lVar33 != 0) {
            piVar1 = (int *)(lVar33 + 0x28);
            do {
              iVar13 = *piVar1;
              cVar8 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar19) {
                *piVar1 = iVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == -1) goto LAB_01037e04;
          }
          plVar22 = (long *)(lVar14 + 0x18);
          plVar27 = (long *)*plVar22;
          *plVar22 = 0;
          if (plVar27 != (long *)0x0) {
            plVar31 = plVar27 + 5;
            do {
              lVar28 = *plVar31;
              iVar13 = (int)lVar28 + -1;
              cVar8 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *(int *)plVar31 = iVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*plVar27 + 0x10))();
            }
            else if ((int)lVar28 == 0) goto LAB_0103881c;
          }
          *plVar22 = lVar33;
          lVar33 = FUN_0103c258(param_1[1]);
          if (lVar33 != 0) {
            piVar1 = (int *)(lVar33 + 0x28);
            do {
              iVar13 = *piVar1;
              cVar8 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar19) {
                *piVar1 = iVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == -1) {
LAB_01037e04:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          plVar22 = (long *)(lVar14 + 0x20);
          plVar27 = (long *)*plVar22;
          *plVar22 = 0;
          if (plVar27 != (long *)0x0) {
            plVar31 = plVar27 + 5;
            do {
              lVar28 = *plVar31;
              iVar13 = (int)lVar28 + -1;
              cVar8 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar19) {
                *(int *)plVar31 = iVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*plVar27 + 0x10))();
            }
            else if ((int)lVar28 == 0) {
LAB_0103881c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          *plVar22 = lVar33;
          plVar27 = param_1 + 0x52;
          lVar33 = nn::os::GetCurrentThread();
          do {
            lVar28 = *plVar27;
            lVar34 = param_1[0x53];
            cVar8 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar19) {
              *plVar27 = lVar28;
              param_1[0x53] = lVar34;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
LAB_0103705c:
          while ((lVar28 != 0 && (lVar33 != lVar28))) {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x54));
            do {
              lVar28 = *plVar27;
              lVar34 = param_1[0x53];
              cVar8 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar19) {
                *plVar27 = lVar28;
                param_1[0x53] = lVar34;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          do {
            lVar37 = *plVar27;
            if (lVar37 != lVar28 || param_1[0x53] != lVar34) {
              bVar19 = false;
              ClearExclusiveLocal();
              goto LAB_0103708c;
            }
            cVar8 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar19) {
              *plVar27 = lVar28;
              *(long *)((long)param_1 + 0x294) = lVar34 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar19 = true;
LAB_0103708c:
          if (!bVar19) {
            lVar28 = lVar37;
            lVar34 = param_1[0x53];
            goto LAB_0103705c;
          }
          plVar22 = (long *)param_1[0x56];
          lVar33 = param_1[0x5d];
          if ((lVar33 == 0) || (bVar12 = bVar36, (long *)*plVar22 == plVar20)) {
            bVar36 = bVar12;
            plVar31 = plVar22;
LAB_010370e8:
            if (plVar31 == plVar22 + lVar33 * 4) goto LAB_01037fac;
            lVar34 = *(long *)(param_1[0x69] + plVar31[3] * 0x130 + 0x110);
            plVar22 = (long *)(lVar34 + 0x30);
            lVar28 = *plVar22;
            local_130 = param_1;
            local_128 = plVar20;
            lVar33 = nn::os::GetCurrentThread();
            if (lVar33 != lVar28) {
              lVar33 = nn::os::GetCurrentThread();
LAB_0103713c:
              if (*plVar22 == 0) goto code_r0x01037144;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x38));
              do {
                if (*plVar22 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x38));
                    while (*plVar22 == 0) {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar12) {
                        *plVar22 = lVar33;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                      if (cVar8 == '\0') goto LAB_0103714c;
                    }
                  } while( true );
                }
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar12) {
                  *plVar22 = lVar33;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_0103714c:
              plVar22 = *(long **)(lVar34 + 0x198);
              if (plVar22 == (long *)0x0) {
                local_68 = *(undefined8 *)(lVar34 + 8);
                FUN_0103c0d0(&local_f0,local_68,&local_68);
                plVar22 = local_f0;
                local_f0 = (long *)0x0;
                lVar33 = *(long *)(lVar34 + 0x198);
                *(long **)(lVar34 + 0x198) = plVar22;
                if (lVar33 == 0) {
                  *(long **)(lVar34 + 0x1a8) = local_e0;
                  *(long **)(lVar34 + 0x1b0) = local_d8;
                  *(long **)(lVar34 + 0x1a0) = local_e8;
                }
                else {
                  FUN_00c4e600();
                  FUN_00c4e600();
                  lVar28 = FUN_00c4e600();
                  iVar7 = *(int *)(lVar28 + 0x12c8);
                  iVar13 = iVar7 + 1;
                  *(int *)(lVar28 + 0x12c8) = iVar13;
                  if (*(int *)(lVar28 + 0x12cc) <= iVar7) {
                    *(int *)(lVar28 + 0x12cc) = iVar13;
                  }
                  lVar28 = *(long *)(lVar33 + 0xf8);
                  if (lVar28 != 0) {
                    plVar22 = *(long **)(lVar33 + 0x110);
                    *(long *)(lVar33 + 0x100) = lVar28;
                    lVar37 = *(long *)(lVar33 + 0x108) - lVar28;
                    uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                    if (((uVar21 & 1) == 0) ||
                       (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                      (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                    }
                    else {
                      FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                    }
                  }
                  lVar28 = *(long *)(lVar33 + 0xc0);
                  if (lVar28 != 0) {
                    plVar22 = *(long **)(lVar33 + 0xd8);
                    *(long *)(lVar33 + 200) = lVar28;
                    lVar37 = *(long *)(lVar33 + 0xd0) - lVar28;
                    uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                    if (((uVar21 & 1) == 0) ||
                       (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                      (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                    }
                    else {
                      FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                    }
                  }
                  FUN_00f11738(lVar33 + 8);
                  plVar22 = *(long **)(lVar34 + 0x1a0);
                  uVar39 = *(undefined8 *)(lVar34 + 0x1a8);
                  uVar38 = *(undefined8 *)(lVar34 + 0x1b0);
                  uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar21 & 1) == 0) ||
                     (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))(plVar22,lVar33,uVar39,uVar38);
                  }
                  else {
                    FUN_00c48fe8(plVar22,lVar33,uVar39,uVar38);
                  }
                  lVar33 = FUN_00c4e600();
                  iVar13 = *(int *)(lVar33 + 0x12c8) + -1;
                  *(int *)(lVar33 + 0x12c8) = iVar13;
                  if (iVar13 == 0) {
                    plVar22 = (long *)FUN_00c4e600();
                    if (plVar22[600] != 0) {
                      local_108 = plVar22 + plVar22[600] * 3;
                      local_a0 = plVar22;
                      FUN_00c4ea30(&local_a0,&local_108);
                      plVar35 = (long *)*plVar22;
                      plVar30 = plVar22;
                      if (plVar22[600] != 0) {
                        plVar30 = plVar22 + plVar22[600] * 3;
                      }
                      if (plVar30 == plVar22) {
                        uVar29 = 0;
                        uVar21 = 0;
                      }
                      else {
                        (**(code **)(*(long *)*plVar22 + 0xd0))();
                        if ((long *)*plVar22 != plVar35) {
                          (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22);
                          plVar35 = (long *)*plVar22;
                        }
                        plVar3 = plVar22 + 3;
                        if (plVar30 == plVar3) {
                          uVar29 = 0;
                          uVar21 = 1;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          bVar12 = (long *)*plVar3 != plVar35;
                          if (bVar12) {
                            (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22 + 3);
                            plVar35 = (long *)plVar22[3];
                          }
                          uVar29 = (ulong)bVar12;
                          plVar3 = plVar22 + 6;
                          if (plVar30 == plVar3) {
                            uVar21 = 2;
                          }
                          else {
                            (**(code **)(*(long *)*plVar3 + 0xd0))();
                            if ((long *)*plVar3 != plVar35) {
                              (**(code **)(*plVar35 + 0x100))
                                        (plVar35,plVar22 + uVar29 * 3,plVar22 + 6);
                              plVar35 = (long *)plVar22[6];
                              uVar29 = 2;
                            }
                            plVar3 = plVar22 + 9;
                            if (plVar30 == plVar3) {
                              uVar21 = 3;
                            }
                            else {
                              (**(code **)(*(long *)*plVar3 + 0xd0))();
                              if ((long *)*plVar3 != plVar35) {
                                (**(code **)(*plVar35 + 0x100))
                                          (plVar35,plVar22 + uVar29 * 3,plVar22 + 9);
                                plVar35 = (long *)plVar22[9];
                                uVar29 = 3;
                              }
                              plVar3 = plVar22 + 0xc;
                              if (plVar30 == plVar3) {
                                uVar21 = 4;
                              }
                              else {
                                (**(code **)(*(long *)*plVar3 + 0xd0))();
                                if ((long *)*plVar3 != plVar35) {
                                  (**(code **)(*plVar35 + 0x100))
                                            (plVar35,plVar22 + uVar29 * 3,plVar22 + 0xc);
                                  plVar35 = (long *)plVar22[0xc];
                                  uVar29 = 4;
                                }
                                plVar3 = plVar22 + 0xf;
                                if (plVar30 == plVar3) {
                                  uVar21 = 5;
                                }
                                else {
                                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                                  if ((long *)*plVar3 != plVar35) {
                                    (**(code **)(*plVar35 + 0x100))
                                              (plVar35,plVar22 + uVar29 * 3,plVar22 + 0xf);
                                    plVar35 = (long *)plVar22[0xf];
                                    uVar29 = 5;
                                  }
                                  uVar21 = 6;
                                  for (local_170 = plVar22 + 0x12; plVar30 != local_170;
                                      local_170 = local_170 + 3) {
                                    (**(code **)(*(long *)*local_170 + 0xd0))();
                                    if ((long *)*local_170 != plVar35) {
                                      (**(code **)(*plVar35 + 0x100))
                                                (plVar35,plVar22 + uVar29 * 3,local_170);
                                      plVar35 = (long *)*local_170;
                                      uVar29 = uVar21;
                                    }
                                    uVar21 = uVar21 + 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      (**(code **)(*plVar35 + 0x100))
                                (plVar35,plVar22 + uVar29 * 3,plVar22 + uVar21 * 3);
                      plVar22[600] = 0;
                    }
                    *(undefined4 *)(lVar33 + 0x12cc) = 0;
                  }
                  *(long **)(lVar34 + 0x1a0) = local_e8;
                  plVar22 = *(long **)(lVar34 + 0x198);
                  *(long **)(lVar34 + 0x1a8) = local_e0;
                  *(long **)(lVar34 + 0x1b0) = local_d8;
                }
              }
              local_e8 = (long *)FUN_0103d31c(plVar22 + 1,&local_130);
              local_f0 = (long *)0x0;
              do {
                lVar33 = *(long *)(lVar34 + 0x160) - *(long *)(lVar34 + 0x158);
                if (lVar33 == 0) {
                  uVar21 = *(long *)(lVar34 + 0xf0) - *(long *)(lVar34 + 0xe8) >> 4;
                  FUN_0103b268(lVar34 + 0xe8,&local_f0);
LAB_010371d4:
                  *(ulong *)(lVar34 + 400) = uVar21 + 1;
                  goto LAB_010371dc;
                }
                uVar21 = *(ulong *)(*(long *)(lVar34 + 0x160) + -8);
                *(long *)(lVar34 + 0x160) = lVar33 + *(long *)(lVar34 + 0x158) + -8;
                uVar29 = uVar21 >> 3 & 0x1ffffffffffffff8;
                *(ulong *)(*(long *)(lVar34 + 0x120) + uVar29) =
                     *(ulong *)(*(long *)(lVar34 + 0x120) + uVar29) &
                     (1L << (uVar21 & 0x3f) ^ 0xffffffffffffffffU);
              } while ((ulong)(*(long *)(lVar34 + 0xf0) - *(long *)(lVar34 + 0xe8) >> 4) <= uVar21);
              puVar4 = (undefined8 *)(*(long *)(lVar34 + 0xe8) + uVar21 * 0x10);
              *puVar4 = 0;
              puVar4[1] = local_e8;
              if (*(ulong *)(lVar34 + 400) <= uVar21) goto LAB_010371d4;
LAB_010371dc:
              pLVar15 = (LightEventType *)(lVar34 + 0x38);
              *(undefined8 *)(lVar34 + 0x30) = 0;
LAB_010371e8:
              nn::os::SignalLightEvent(pLVar15);
              goto LAB_010371ec;
            }
            if (*(long *)(lVar34 + 0x198) == 0) {
              local_68 = *(undefined8 *)(lVar34 + 8);
              FUN_0103c0d0(&local_f0,local_68,&local_68);
              plVar22 = local_f0;
              local_f0 = (long *)0x0;
              lVar33 = *(long *)(lVar34 + 0x198);
              *(long **)(lVar34 + 0x198) = plVar22;
              if (lVar33 != 0) {
                FUN_00c4e600();
                FUN_00c4e600();
                lVar28 = FUN_00c4e600();
                iVar7 = *(int *)(lVar28 + 0x12c8);
                iVar13 = iVar7 + 1;
                *(int *)(lVar28 + 0x12c8) = iVar13;
                if (*(int *)(lVar28 + 0x12cc) <= iVar7) {
                  *(int *)(lVar28 + 0x12cc) = iVar13;
                }
                lVar28 = *(long *)(lVar33 + 0xf8);
                if (lVar28 != 0) {
                  plVar22 = *(long **)(lVar33 + 0x110);
                  *(long *)(lVar33 + 0x100) = lVar28;
                  lVar37 = *(long *)(lVar33 + 0x108) - lVar28;
                  uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar21 & 1) == 0) ||
                     (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                  }
                  else {
                    FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                  }
                }
                lVar28 = *(long *)(lVar33 + 0xc0);
                if (lVar28 != 0) {
                  plVar22 = *(long **)(lVar33 + 0xd8);
                  *(long *)(lVar33 + 200) = lVar28;
                  lVar37 = *(long *)(lVar33 + 0xd0) - lVar28;
                  uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar21 & 1) == 0) ||
                     (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                  }
                  else {
                    FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                  }
                }
                FUN_00f11738(lVar33 + 8);
                plVar22 = *(long **)(lVar34 + 0x1a0);
                uVar39 = *(undefined8 *)(lVar34 + 0x1a8);
                uVar38 = *(undefined8 *)(lVar34 + 0x1b0);
                uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                if (((uVar21 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar22 + 0x18))(plVar22,lVar33,uVar39,uVar38);
                }
                else {
                  FUN_00c48fe8(plVar22,lVar33,uVar39,uVar38);
                }
                lVar33 = FUN_00c4e600();
                iVar13 = *(int *)(lVar33 + 0x12c8) + -1;
                *(int *)(lVar33 + 0x12c8) = iVar13;
                if (iVar13 == 0) {
                  plVar22 = (long *)FUN_00c4e600();
                  if (plVar22[600] != 0) {
                    local_108 = plVar22 + plVar22[600] * 3;
                    local_a0 = plVar22;
                    FUN_00c4ea30(&local_a0,&local_108);
                    plVar35 = (long *)*plVar22;
                    plVar30 = plVar22;
                    if (plVar22[600] != 0) {
                      plVar30 = plVar22 + plVar22[600] * 3;
                    }
                    if (plVar30 == plVar22) {
                      local_170 = (long *)0x0;
                      uVar21 = 0;
                    }
                    else {
                      (**(code **)(*(long *)*plVar22 + 0xd0))();
                      if ((long *)*plVar22 != plVar35) {
                        (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22);
                        plVar35 = (long *)*plVar22;
                      }
                      plVar3 = plVar22 + 3;
                      if (plVar30 == plVar3) {
                        local_170 = (long *)0x0;
                        uVar21 = 1;
                      }
                      else {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        bVar12 = (long *)*plVar3 != plVar35;
                        if (bVar12) {
                          (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22 + 3);
                          plVar35 = (long *)plVar22[3];
                        }
                        local_170 = (long *)(ulong)bVar12;
                        plVar3 = plVar22 + 6;
                        if (plVar30 == plVar3) {
                          uVar21 = 2;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          if ((long *)*plVar3 != plVar35) {
                            (**(code **)(*plVar35 + 0x100))
                                      (plVar35,plVar22 + (long)local_170 * 3,plVar22 + 6);
                            plVar35 = (long *)plVar22[6];
                            local_170 = (long *)0x2;
                          }
                          plVar3 = plVar22 + 9;
                          if (plVar30 == plVar3) {
                            uVar21 = 3;
                          }
                          else {
                            (**(code **)(*(long *)*plVar3 + 0xd0))();
                            if ((long *)*plVar3 != plVar35) {
                              (**(code **)(*plVar35 + 0x100))
                                        (plVar35,plVar22 + (long)local_170 * 3,plVar22 + 9);
                              plVar35 = (long *)plVar22[9];
                              local_170 = (long *)0x3;
                            }
                            plVar3 = plVar22 + 0xc;
                            if (plVar30 == plVar3) {
                              uVar21 = 4;
                            }
                            else {
                              (**(code **)(*(long *)*plVar3 + 0xd0))();
                              if ((long *)*plVar3 != plVar35) {
                                (**(code **)(*plVar35 + 0x100))
                                          (plVar35,plVar22 + (long)local_170 * 3,plVar22 + 0xc);
                                plVar35 = (long *)plVar22[0xc];
                                local_170 = (long *)0x4;
                              }
                              plVar3 = plVar22 + 0xf;
                              if (plVar30 == plVar3) {
                                uVar21 = 5;
                              }
                              else {
                                (**(code **)(*(long *)*plVar3 + 0xd0))();
                                if ((long *)*plVar3 != plVar35) {
                                  (**(code **)(*plVar35 + 0x100))
                                            (plVar35,plVar22 + (long)local_170 * 3,plVar22 + 0xf);
                                  plVar35 = (long *)plVar22[0xf];
                                  local_170 = (long *)0x5;
                                }
                                uVar21 = 6;
                                for (local_178 = plVar22 + 0x12; plVar30 != local_178;
                                    local_178 = local_178 + 3) {
                                  (**(code **)(*(long *)*local_178 + 0xd0))();
                                  if ((long *)*local_178 != plVar35) {
                                    (**(code **)(*plVar35 + 0x100))
                                              (plVar35,plVar22 + (long)local_170 * 3,local_178);
                                    plVar35 = (long *)*local_178;
                                    local_170 = (long *)uVar21;
                                  }
                                  uVar21 = uVar21 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    (**(code **)(*plVar35 + 0x100))
                              (plVar35,plVar22 + (long)local_170 * 3,plVar22 + uVar21 * 3);
                    plVar22[600] = 0;
                  }
                  *(undefined4 *)(lVar33 + 0x12cc) = 0;
                }
              }
              *(long **)(lVar34 + 0x1a8) = local_e0;
              *(long **)(lVar34 + 0x1b0) = local_d8;
              *(long **)(lVar34 + 0x1a0) = local_e8;
            }
            local_f0 = (long *)0xffffffff00000000;
            uVar21 = FUN_0103b2e0(lVar34 + 0xe8,&local_f0);
            plVar22 = (long *)(lVar34 + 0x48);
            lVar28 = *plVar22;
            lVar33 = nn::os::GetCurrentThread();
            if (lVar33 != lVar28) {
              lVar33 = nn::os::GetCurrentThread();
LAB_01037980:
              if (*plVar22 == 0) goto code_r0x01037988;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x50));
              do {
                if (*plVar22 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x50));
                    while (*plVar22 == 0) {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar12) {
                        *plVar22 = lVar33;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                      if (cVar8 == '\0') goto LAB_01037990;
                    }
                  } while( true );
                }
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar12) {
                  *plVar22 = lVar33;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_01037990:
              bVar12 = false;
              goto LAB_01037994;
            }
            plVar22 = (long *)0x0;
            bVar12 = true;
LAB_01037994:
            local_a0 = local_130;
            plStack_98 = local_128;
            puVar4 = *(undefined8 **)(lVar34 + 0x68);
            if (puVar4 < *(undefined8 **)(lVar34 + 0x70)) {
              uVar39 = *(undefined8 *)(lVar34 + 0x78);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar33 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar33 != 0) {
                if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_0103aa70;
                *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = uVar39;
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
              }
              puVar4[4] = lVar34;
              puVar4[5] = uVar21;
              puVar4[8] = plStack_98;
              puVar4[6] = lVar34;
              puVar4[7] = local_a0;
              *puVar4 = &LAB_02df2514;
              puVar4[1] = &LAB_02df2558;
              puVar4[2] = &LAB_02df2a88;
              puVar4[3] = &LAB_02df2a9c;
              if (lVar33 != 0) {
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
              }
              *(undefined8 **)(lVar34 + 0x68) = puVar4 + 0x20;
            }
            else {
              plVar30 = (long *)(lVar34 + 0x78);
              lVar37 = FUN_0103b290(lVar34 + 0x60,((long)puVar4 - *(long *)(lVar34 + 0x60) >> 8) + 1
                                   );
              lVar33 = *(long *)(lVar34 + 0x60);
              lVar28 = *(long *)(lVar34 + 0x68);
              local_d8 = (long *)0x0;
              local_d0 = plVar30;
              if (lVar37 == 0) {
                plVar35 = (long *)0x0;
              }
              else {
                plVar35 = (long *)(**(code **)(*(long *)*plVar30 + 0x10))
                                            ((long *)*plVar30,lVar37 << 8,0x10);
                if (plVar35 == (long *)0x0) {
                  (**(code **)(*(long *)*plVar30 + 0xe8))();
                }
              }
              plVar3 = plVar35 + (lVar28 - lVar33 >> 8) * 0x20;
              local_d8 = plVar35 + lVar37 * 0x20;
              lVar33 = *plVar30;
              local_f0 = plVar35;
              local_e8 = plVar3;
              local_e0 = plVar3;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar28 != 0) {
                if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_0103aa70;
                *(long *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = lVar33;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
              }
              plVar3[2] = 0;
              plVar3[3] = 0;
              plVar3[6] = lVar34;
              plVar3[4] = lVar34;
              plVar3[5] = uVar21;
              plVar3[7] = (long)local_a0;
              plVar3[8] = (long)plStack_98;
              *plVar3 = (long)&LAB_02df2514;
              plVar3[1] = (long)&LAB_02df2558;
              plVar3[2] = (long)&LAB_02df2a88;
              plVar3[3] = (long)&LAB_02df2a9c;
              if (lVar28 != 0) {
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              }
              local_e0 = local_e0 + 0x20;
              FUN_0103b38c(lVar34 + 0x60,&local_f0);
              FUN_0103bbd0(&local_f0);
            }
            if (!bVar12) {
              *plVar22 = 0;
              pLVar15 = (LightEventType *)(plVar22 + 1);
              goto LAB_010371e8;
            }
LAB_010371ec:
            *(ulong *)(lVar14 + 0x28) = uVar21;
            lVar34 = *(long *)(param_1[0x69] + plVar31[3] * 0x130 + 0x118);
            plVar22 = (long *)(lVar34 + 0x30);
            lVar28 = *plVar22;
            local_130 = param_1;
            local_128 = plVar20;
            lVar33 = nn::os::GetCurrentThread();
            if (lVar33 != lVar28) {
              lVar33 = nn::os::GetCurrentThread();
LAB_01037228:
              if (*plVar22 == 0) goto code_r0x01037230;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x38));
              do {
                if (*plVar22 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x38));
                    while (*plVar22 == 0) {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar12) {
                        *plVar22 = lVar33;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                      if (cVar8 == '\0') goto LAB_01037238;
                    }
                  } while( true );
                }
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar12) {
                  *plVar22 = lVar33;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_01037238:
              plVar22 = *(long **)(lVar34 + 0x198);
              if (plVar22 == (long *)0x0) {
                local_68 = *(undefined8 *)(lVar34 + 8);
                FUN_0103c0d0(&local_f0,local_68,&local_68);
                plVar22 = local_f0;
                local_f0 = (long *)0x0;
                lVar33 = *(long *)(lVar34 + 0x198);
                *(long **)(lVar34 + 0x198) = plVar22;
                if (lVar33 == 0) {
                  *(long **)(lVar34 + 0x1a8) = local_e0;
                  *(long **)(lVar34 + 0x1b0) = local_d8;
                  *(long **)(lVar34 + 0x1a0) = local_e8;
                }
                else {
                  FUN_00c4e600();
                  FUN_00c4e600();
                  lVar28 = FUN_00c4e600();
                  iVar7 = *(int *)(lVar28 + 0x12c8);
                  iVar13 = iVar7 + 1;
                  *(int *)(lVar28 + 0x12c8) = iVar13;
                  if (*(int *)(lVar28 + 0x12cc) <= iVar7) {
                    *(int *)(lVar28 + 0x12cc) = iVar13;
                  }
                  lVar28 = *(long *)(lVar33 + 0xf8);
                  if (lVar28 != 0) {
                    plVar22 = *(long **)(lVar33 + 0x110);
                    *(long *)(lVar33 + 0x100) = lVar28;
                    lVar37 = *(long *)(lVar33 + 0x108) - lVar28;
                    uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                    if (((uVar21 & 1) == 0) ||
                       (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                      (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                    }
                    else {
                      FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                    }
                  }
                  lVar28 = *(long *)(lVar33 + 0xc0);
                  if (lVar28 != 0) {
                    plVar22 = *(long **)(lVar33 + 0xd8);
                    *(long *)(lVar33 + 200) = lVar28;
                    lVar37 = *(long *)(lVar33 + 0xd0) - lVar28;
                    uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                    if (((uVar21 & 1) == 0) ||
                       (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                      (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                    }
                    else {
                      FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                    }
                  }
                  FUN_00f11738(lVar33 + 8);
                  plVar22 = *(long **)(lVar34 + 0x1a0);
                  uVar39 = *(undefined8 *)(lVar34 + 0x1a8);
                  uVar38 = *(undefined8 *)(lVar34 + 0x1b0);
                  uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar21 & 1) == 0) ||
                     (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))(plVar22,lVar33,uVar39,uVar38);
                  }
                  else {
                    FUN_00c48fe8(plVar22,lVar33,uVar39,uVar38);
                  }
                  lVar33 = FUN_00c4e600();
                  iVar13 = *(int *)(lVar33 + 0x12c8) + -1;
                  *(int *)(lVar33 + 0x12c8) = iVar13;
                  if (iVar13 == 0) {
                    plVar22 = (long *)FUN_00c4e600();
                    if (plVar22[600] != 0) {
                      local_108 = plVar22 + plVar22[600] * 3;
                      local_a0 = plVar22;
                      FUN_00c4ea30(&local_a0,&local_108);
                      plVar35 = (long *)*plVar22;
                      plVar30 = plVar22;
                      if (plVar22[600] != 0) {
                        plVar30 = plVar22 + plVar22[600] * 3;
                      }
                      if (plVar30 == plVar22) {
                        uVar29 = 0;
                        uVar21 = 0;
                      }
                      else {
                        (**(code **)(*(long *)*plVar22 + 0xd0))();
                        if ((long *)*plVar22 != plVar35) {
                          (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22);
                          plVar35 = (long *)*plVar22;
                        }
                        plVar3 = plVar22 + 3;
                        if (plVar30 == plVar3) {
                          uVar29 = 0;
                          uVar21 = 1;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          bVar12 = (long *)*plVar3 != plVar35;
                          if (bVar12) {
                            (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22 + 3);
                            plVar35 = (long *)plVar22[3];
                          }
                          uVar29 = (ulong)bVar12;
                          plVar3 = plVar22 + 6;
                          if (plVar30 == plVar3) {
                            uVar21 = 2;
                          }
                          else {
                            (**(code **)(*(long *)*plVar3 + 0xd0))();
                            if ((long *)*plVar3 != plVar35) {
                              (**(code **)(*plVar35 + 0x100))
                                        (plVar35,plVar22 + uVar29 * 3,plVar22 + 6);
                              plVar35 = (long *)plVar22[6];
                              uVar29 = 2;
                            }
                            plVar3 = plVar22 + 9;
                            if (plVar30 == plVar3) {
                              uVar21 = 3;
                            }
                            else {
                              (**(code **)(*(long *)*plVar3 + 0xd0))();
                              if ((long *)*plVar3 != plVar35) {
                                (**(code **)(*plVar35 + 0x100))
                                          (plVar35,plVar22 + uVar29 * 3,plVar22 + 9);
                                plVar35 = (long *)plVar22[9];
                                uVar29 = 3;
                              }
                              plVar3 = plVar22 + 0xc;
                              if (plVar30 == plVar3) {
                                uVar21 = 4;
                              }
                              else {
                                (**(code **)(*(long *)*plVar3 + 0xd0))();
                                if ((long *)*plVar3 != plVar35) {
                                  (**(code **)(*plVar35 + 0x100))
                                            (plVar35,plVar22 + uVar29 * 3,plVar22 + 0xc);
                                  plVar35 = (long *)plVar22[0xc];
                                  uVar29 = 4;
                                }
                                plVar3 = plVar22 + 0xf;
                                if (plVar30 == plVar3) {
                                  uVar21 = 5;
                                }
                                else {
                                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                                  if ((long *)*plVar3 != plVar35) {
                                    (**(code **)(*plVar35 + 0x100))
                                              (plVar35,plVar22 + uVar29 * 3,plVar22 + 0xf);
                                    plVar35 = (long *)plVar22[0xf];
                                    uVar29 = 5;
                                  }
                                  uVar21 = 6;
                                  for (local_170 = plVar22 + 0x12; plVar30 != local_170;
                                      local_170 = local_170 + 3) {
                                    (**(code **)(*(long *)*local_170 + 0xd0))();
                                    if ((long *)*local_170 != plVar35) {
                                      (**(code **)(*plVar35 + 0x100))
                                                (plVar35,plVar22 + uVar29 * 3,local_170);
                                      plVar35 = (long *)*local_170;
                                      uVar29 = uVar21;
                                    }
                                    uVar21 = uVar21 + 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      (**(code **)(*plVar35 + 0x100))
                                (plVar35,plVar22 + uVar29 * 3,plVar22 + uVar21 * 3);
                      plVar22[600] = 0;
                    }
                    *(undefined4 *)(lVar33 + 0x12cc) = 0;
                  }
                  *(long **)(lVar34 + 0x1a0) = local_e8;
                  plVar22 = *(long **)(lVar34 + 0x198);
                  *(long **)(lVar34 + 0x1a8) = local_e0;
                  *(long **)(lVar34 + 0x1b0) = local_d8;
                }
              }
              local_e8 = (long *)FUN_0103d79c(plVar22 + 1,&local_130);
              local_f0 = (long *)0x0;
              do {
                lVar33 = *(long *)(lVar34 + 0x160) - *(long *)(lVar34 + 0x158);
                if (lVar33 == 0) {
                  uVar21 = *(long *)(lVar34 + 0xf0) - *(long *)(lVar34 + 0xe8) >> 4;
                  FUN_0103b268(lVar34 + 0xe8,&local_f0);
LAB_010372c0:
                  *(ulong *)(lVar34 + 400) = uVar21 + 1;
                  goto LAB_010372c8;
                }
                uVar21 = *(ulong *)(*(long *)(lVar34 + 0x160) + -8);
                *(long *)(lVar34 + 0x160) = lVar33 + *(long *)(lVar34 + 0x158) + -8;
                uVar29 = uVar21 >> 3 & 0x1ffffffffffffff8;
                *(ulong *)(*(long *)(lVar34 + 0x120) + uVar29) =
                     *(ulong *)(*(long *)(lVar34 + 0x120) + uVar29) &
                     (1L << (uVar21 & 0x3f) ^ 0xffffffffffffffffU);
              } while ((ulong)(*(long *)(lVar34 + 0xf0) - *(long *)(lVar34 + 0xe8) >> 4) <= uVar21);
              puVar4 = (undefined8 *)(*(long *)(lVar34 + 0xe8) + uVar21 * 0x10);
              *puVar4 = 0;
              puVar4[1] = local_e8;
              if (*(ulong *)(lVar34 + 400) <= uVar21) goto LAB_010372c0;
LAB_010372c8:
              pLVar15 = (LightEventType *)(lVar34 + 0x38);
              *(undefined8 *)(lVar34 + 0x30) = 0;
LAB_010372d4:
              nn::os::SignalLightEvent(pLVar15);
              goto LAB_010372d8;
            }
            if (*(long *)(lVar34 + 0x198) == 0) {
              local_68 = *(undefined8 *)(lVar34 + 8);
              FUN_0103c0d0(&local_f0,local_68,&local_68);
              plVar22 = local_f0;
              local_f0 = (long *)0x0;
              lVar33 = *(long *)(lVar34 + 0x198);
              *(long **)(lVar34 + 0x198) = plVar22;
              if (lVar33 != 0) {
                FUN_00c4e600();
                FUN_00c4e600();
                lVar28 = FUN_00c4e600();
                iVar7 = *(int *)(lVar28 + 0x12c8);
                iVar13 = iVar7 + 1;
                *(int *)(lVar28 + 0x12c8) = iVar13;
                if (*(int *)(lVar28 + 0x12cc) <= iVar7) {
                  *(int *)(lVar28 + 0x12cc) = iVar13;
                }
                lVar28 = *(long *)(lVar33 + 0xf8);
                if (lVar28 != 0) {
                  plVar22 = *(long **)(lVar33 + 0x110);
                  *(long *)(lVar33 + 0x100) = lVar28;
                  lVar37 = *(long *)(lVar33 + 0x108) - lVar28;
                  uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar21 & 1) == 0) ||
                     (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                  }
                  else {
                    FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                  }
                }
                lVar28 = *(long *)(lVar33 + 0xc0);
                if (lVar28 != 0) {
                  plVar22 = *(long **)(lVar33 + 0xd8);
                  *(long *)(lVar33 + 200) = lVar28;
                  lVar37 = *(long *)(lVar33 + 0xd0) - lVar28;
                  uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar21 & 1) == 0) ||
                     (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar37,8);
                  }
                  else {
                    FUN_00c48fe8(plVar22,lVar28,lVar37,8);
                  }
                }
                FUN_00f11738(lVar33 + 8);
                plVar22 = *(long **)(lVar34 + 0x1a0);
                uVar39 = *(undefined8 *)(lVar34 + 0x1a8);
                uVar38 = *(undefined8 *)(lVar34 + 0x1b0);
                uVar21 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                if (((uVar21 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar22 + 0x18))(plVar22,lVar33,uVar39,uVar38);
                }
                else {
                  FUN_00c48fe8(plVar22,lVar33,uVar39,uVar38);
                }
                lVar33 = FUN_00c4e600();
                iVar13 = *(int *)(lVar33 + 0x12c8) + -1;
                *(int *)(lVar33 + 0x12c8) = iVar13;
                if (iVar13 == 0) {
                  plVar22 = (long *)FUN_00c4e600();
                  if (plVar22[600] != 0) {
                    local_108 = plVar22 + plVar22[600] * 3;
                    local_a0 = plVar22;
                    FUN_00c4ea30(&local_a0,&local_108);
                    plVar35 = (long *)*plVar22;
                    plVar30 = plVar22;
                    if (plVar22[600] != 0) {
                      plVar30 = plVar22 + plVar22[600] * 3;
                    }
                    if (plVar30 == plVar22) {
                      uVar29 = 0;
                      uVar21 = 0;
                    }
                    else {
                      (**(code **)(*(long *)*plVar22 + 0xd0))();
                      if ((long *)*plVar22 != plVar35) {
                        (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22);
                        plVar35 = (long *)*plVar22;
                      }
                      plVar3 = plVar22 + 3;
                      if (plVar30 == plVar3) {
                        uVar29 = 0;
                        uVar21 = 1;
                      }
                      else {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        bVar12 = (long *)*plVar3 != plVar35;
                        if (bVar12) {
                          (**(code **)(*plVar35 + 0x100))(plVar35,plVar22,plVar22 + 3);
                          plVar35 = (long *)plVar22[3];
                        }
                        uVar29 = (ulong)bVar12;
                        plVar3 = plVar22 + 6;
                        if (plVar30 == plVar3) {
                          uVar21 = 2;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          if ((long *)*plVar3 != plVar35) {
                            (**(code **)(*plVar35 + 0x100))
                                      (plVar35,plVar22 + uVar29 * 3,plVar22 + 6);
                            plVar35 = (long *)plVar22[6];
                            uVar29 = 2;
                          }
                          plVar3 = plVar22 + 9;
                          if (plVar30 == plVar3) {
                            uVar21 = 3;
                          }
                          else {
                            (**(code **)(*(long *)*plVar3 + 0xd0))();
                            if ((long *)*plVar3 != plVar35) {
                              (**(code **)(*plVar35 + 0x100))
                                        (plVar35,plVar22 + uVar29 * 3,plVar22 + 9);
                              plVar35 = (long *)plVar22[9];
                              uVar29 = 3;
                            }
                            plVar3 = plVar22 + 0xc;
                            if (plVar30 == plVar3) {
                              uVar21 = 4;
                            }
                            else {
                              (**(code **)(*(long *)*plVar3 + 0xd0))();
                              if ((long *)*plVar3 != plVar35) {
                                (**(code **)(*plVar35 + 0x100))
                                          (plVar35,plVar22 + uVar29 * 3,plVar22 + 0xc);
                                plVar35 = (long *)plVar22[0xc];
                                uVar29 = 4;
                              }
                              plVar3 = plVar22 + 0xf;
                              if (plVar30 == plVar3) {
                                uVar21 = 5;
                              }
                              else {
                                (**(code **)(*(long *)*plVar3 + 0xd0))();
                                if ((long *)*plVar3 != plVar35) {
                                  (**(code **)(*plVar35 + 0x100))
                                            (plVar35,plVar22 + uVar29 * 3,plVar22 + 0xf);
                                  plVar35 = (long *)plVar22[0xf];
                                  uVar29 = 5;
                                }
                                uVar21 = 6;
                                for (local_170 = plVar22 + 0x12; plVar30 != local_170;
                                    local_170 = local_170 + 3) {
                                  (**(code **)(*(long *)*local_170 + 0xd0))();
                                  if ((long *)*local_170 != plVar35) {
                                    (**(code **)(*plVar35 + 0x100))
                                              (plVar35,plVar22 + uVar29 * 3,local_170);
                                    plVar35 = (long *)*local_170;
                                    uVar29 = uVar21;
                                  }
                                  uVar21 = uVar21 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    (**(code **)(*plVar35 + 0x100))
                              (plVar35,plVar22 + uVar29 * 3,plVar22 + uVar21 * 3);
                    plVar22[600] = 0;
                  }
                  *(undefined4 *)(lVar33 + 0x12cc) = 0;
                }
              }
              *(long **)(lVar34 + 0x1a8) = local_e0;
              *(long **)(lVar34 + 0x1b0) = local_d8;
              *(long **)(lVar34 + 0x1a0) = local_e8;
            }
            local_f0 = (long *)0xffffffff00000000;
            uVar21 = FUN_0103b2e0(lVar34 + 0xe8,&local_f0);
            plVar22 = (long *)(lVar34 + 0x48);
            lVar28 = *plVar22;
            lVar33 = nn::os::GetCurrentThread();
            if (lVar33 != lVar28) {
              lVar33 = nn::os::GetCurrentThread();
LAB_01037a8c:
              if (*plVar22 == 0) goto code_r0x01037a94;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x50));
              do {
                if (*plVar22 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x50));
                    while (*plVar22 == 0) {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar12) {
                        *plVar22 = lVar33;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                      if (cVar8 == '\0') goto LAB_01037a9c;
                    }
                  } while( true );
                }
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar12) {
                  *plVar22 = lVar33;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_01037a9c:
              bVar12 = false;
              goto LAB_01037aa0;
            }
            plVar22 = (long *)0x0;
            bVar12 = true;
LAB_01037aa0:
            local_a0 = local_130;
            plStack_98 = local_128;
            puVar4 = *(undefined8 **)(lVar34 + 0x68);
            if (puVar4 < *(undefined8 **)(lVar34 + 0x70)) {
              uVar39 = *(undefined8 *)(lVar34 + 0x78);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar33 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar33 != 0) {
                if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_0103aa70;
                *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = uVar39;
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
              }
              puVar4[4] = lVar34;
              puVar4[5] = uVar21;
              puVar4[8] = plStack_98;
              puVar4[6] = lVar34;
              puVar4[7] = local_a0;
              *puVar4 = &LAB_02df2b54;
              puVar4[1] = &LAB_02df2b98;
              puVar4[2] = &LAB_02df30c8;
              puVar4[3] = &LAB_02df30dc;
              if (lVar33 != 0) {
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
              }
              *(undefined8 **)(lVar34 + 0x68) = puVar4 + 0x20;
            }
            else {
              plVar30 = (long *)(lVar34 + 0x78);
              lVar37 = FUN_0103b290(lVar34 + 0x60,((long)puVar4 - *(long *)(lVar34 + 0x60) >> 8) + 1
                                   );
              lVar33 = *(long *)(lVar34 + 0x60);
              lVar28 = *(long *)(lVar34 + 0x68);
              local_d8 = (long *)0x0;
              local_d0 = plVar30;
              if (lVar37 == 0) {
                plVar35 = (long *)0x0;
              }
              else {
                plVar35 = (long *)(**(code **)(*(long *)*plVar30 + 0x10))
                                            ((long *)*plVar30,lVar37 << 8,0x10);
                if (plVar35 == (long *)0x0) {
                  (**(code **)(*(long *)*plVar30 + 0xe8))();
                }
              }
              plVar3 = plVar35 + (lVar28 - lVar33 >> 8) * 0x20;
              local_d8 = plVar35 + lVar37 * 0x20;
              lVar33 = *plVar30;
              local_f0 = plVar35;
              local_e8 = plVar3;
              local_e0 = plVar3;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar28 != 0) {
                if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_0103aa70;
                *(long *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = lVar33;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
              }
              plVar3[2] = 0;
              plVar3[3] = 0;
              plVar3[6] = lVar34;
              plVar3[4] = lVar34;
              plVar3[5] = uVar21;
              plVar3[7] = (long)local_a0;
              plVar3[8] = (long)plStack_98;
              *plVar3 = (long)&LAB_02df2b54;
              plVar3[1] = (long)&LAB_02df2b98;
              plVar3[2] = (long)&LAB_02df30c8;
              plVar3[3] = (long)&LAB_02df30dc;
              if (lVar28 != 0) {
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              }
              local_e0 = local_e0 + 0x20;
              FUN_0103b38c(lVar34 + 0x60,&local_f0);
              FUN_0103bbd0(&local_f0);
            }
            if (!bVar12) {
              *plVar22 = 0;
              pLVar15 = (LightEventType *)(plVar22 + 1);
              goto LAB_010372d4;
            }
LAB_010372d8:
            *(ulong *)(lVar14 + 0x30) = uVar21;
            lVar28 = *(long *)(param_1[0x69] + plVar31[3] * 0x130 + 0x120);
            plVar22 = (long *)(lVar28 + 0x30);
            lVar34 = *plVar22;
            local_130 = param_1;
            local_128 = plVar20;
            lVar33 = nn::os::GetCurrentThread();
            if (lVar33 != lVar34) {
              lVar33 = nn::os::GetCurrentThread();
LAB_01037310:
              if (*plVar22 == 0) goto code_r0x01037318;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x38));
              do {
                if (*plVar22 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x38));
                    while (*plVar22 == 0) {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar12) {
                        *plVar22 = lVar33;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                      if (cVar8 == '\0') goto LAB_01037320;
                    }
                  } while( true );
                }
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar12) {
                  *plVar22 = lVar33;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_01037320:
              plVar20 = *(long **)(lVar28 + 0x198);
              if (plVar20 == (long *)0x0) {
                local_68 = *(undefined8 *)(lVar28 + 8);
                FUN_0103cc80(&local_f0,local_68,&local_68);
                plVar20 = local_f0;
                local_f0 = (long *)0x0;
                lVar33 = *(long *)(lVar28 + 0x198);
                *(long **)(lVar28 + 0x198) = plVar20;
                if (lVar33 == 0) {
                  *(long **)(lVar28 + 0x1a8) = local_e0;
                  *(long **)(lVar28 + 0x1b0) = local_d8;
                  *(long **)(lVar28 + 0x1a0) = local_e8;
                }
                else {
                  FUN_00c4e600();
                  FUN_00c4e600();
                  lVar34 = FUN_00c4e600();
                  iVar7 = *(int *)(lVar34 + 0x12c8);
                  iVar13 = iVar7 + 1;
                  *(int *)(lVar34 + 0x12c8) = iVar13;
                  if (*(int *)(lVar34 + 0x12cc) <= iVar7) {
                    *(int *)(lVar34 + 0x12cc) = iVar13;
                  }
                  lVar34 = *(long *)(lVar33 + 0xf8);
                  if (lVar34 != 0) {
                    plVar20 = *(long **)(lVar33 + 0x110);
                    *(long *)(lVar33 + 0x100) = lVar34;
                    lVar37 = *(long *)(lVar33 + 0x108) - lVar34;
                    uVar21 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                    if (((uVar21 & 1) == 0) ||
                       (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                      (**(code **)(*plVar20 + 0x18))(plVar20,lVar34,lVar37,8);
                    }
                    else {
                      FUN_00c48fe8(plVar20,lVar34,lVar37,8);
                    }
                  }
                  lVar34 = *(long *)(lVar33 + 0xc0);
                  if (lVar34 != 0) {
                    plVar20 = *(long **)(lVar33 + 0xd8);
                    *(long *)(lVar33 + 200) = lVar34;
                    lVar37 = *(long *)(lVar33 + 0xd0) - lVar34;
                    uVar21 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                    if (((uVar21 & 1) == 0) ||
                       (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                      (**(code **)(*plVar20 + 0x18))(plVar20,lVar34,lVar37,8);
                    }
                    else {
                      FUN_00c48fe8(plVar20,lVar34,lVar37,8);
                    }
                  }
                  FUN_010920f8(lVar33 + 8);
                  plVar20 = *(long **)(lVar28 + 0x1a0);
                  uVar39 = *(undefined8 *)(lVar28 + 0x1a8);
                  uVar38 = *(undefined8 *)(lVar28 + 0x1b0);
                  uVar21 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                  if (((uVar21 & 1) == 0) ||
                     (lVar34 = FUN_00c4e600(), *(int *)(lVar34 + 0x12c8) < 1)) {
                    (**(code **)(*plVar20 + 0x18))(plVar20,lVar33,uVar39,uVar38);
                  }
                  else {
                    FUN_00c48fe8(plVar20,lVar33,uVar39,uVar38);
                  }
                  lVar33 = FUN_00c4e600();
                  iVar13 = *(int *)(lVar33 + 0x12c8) + -1;
                  *(int *)(lVar33 + 0x12c8) = iVar13;
                  if (iVar13 == 0) {
                    plVar20 = (long *)FUN_00c4e600();
                    if (plVar20[600] != 0) {
                      local_108 = plVar20 + plVar20[600] * 3;
                      local_a0 = plVar20;
                      FUN_00c4ea30(&local_a0,&local_108);
                      plVar31 = (long *)*plVar20;
                      plVar22 = plVar20;
                      if (plVar20[600] != 0) {
                        plVar22 = plVar20 + plVar20[600] * 3;
                      }
                      if (plVar22 == plVar20) {
                        uVar29 = 0;
                        uVar21 = 0;
                      }
                      else {
                        (**(code **)(*(long *)*plVar20 + 0xd0))();
                        if ((long *)*plVar20 != plVar31) {
                          (**(code **)(*plVar31 + 0x100))(plVar31,plVar20,plVar20);
                          plVar31 = (long *)*plVar20;
                        }
                        plVar30 = plVar20 + 3;
                        if (plVar22 == plVar30) {
                          uVar29 = 0;
                          uVar21 = 1;
                        }
                        else {
                          (**(code **)(*(long *)*plVar30 + 0xd0))();
                          bVar12 = (long *)*plVar30 != plVar31;
                          if (bVar12) {
                            (**(code **)(*plVar31 + 0x100))(plVar31,plVar20,plVar20 + 3);
                            plVar31 = (long *)plVar20[3];
                          }
                          uVar29 = (ulong)bVar12;
                          plVar30 = plVar20 + 6;
                          if (plVar22 == plVar30) {
                            uVar21 = 2;
                          }
                          else {
                            (**(code **)(*(long *)*plVar30 + 0xd0))();
                            if ((long *)*plVar30 != plVar31) {
                              (**(code **)(*plVar31 + 0x100))
                                        (plVar31,plVar20 + uVar29 * 3,plVar20 + 6);
                              plVar31 = (long *)plVar20[6];
                              uVar29 = 2;
                            }
                            plVar30 = plVar20 + 9;
                            if (plVar22 == plVar30) {
                              uVar21 = 3;
                            }
                            else {
                              (**(code **)(*(long *)*plVar30 + 0xd0))();
                              if ((long *)*plVar30 != plVar31) {
                                (**(code **)(*plVar31 + 0x100))
                                          (plVar31,plVar20 + uVar29 * 3,plVar20 + 9);
                                plVar31 = (long *)plVar20[9];
                                uVar29 = 3;
                              }
                              plVar30 = plVar20 + 0xc;
                              if (plVar22 == plVar30) {
                                uVar21 = 4;
                              }
                              else {
                                (**(code **)(*(long *)*plVar30 + 0xd0))();
                                if ((long *)*plVar30 != plVar31) {
                                  (**(code **)(*plVar31 + 0x100))
                                            (plVar31,plVar20 + uVar29 * 3,plVar20 + 0xc);
                                  plVar31 = (long *)plVar20[0xc];
                                  uVar29 = 4;
                                }
                                plVar30 = plVar20 + 0xf;
                                if (plVar22 == plVar30) {
                                  uVar21 = 5;
                                }
                                else {
                                  (**(code **)(*(long *)*plVar30 + 0xd0))();
                                  if ((long *)*plVar30 != plVar31) {
                                    (**(code **)(*plVar31 + 0x100))
                                              (plVar31,plVar20 + uVar29 * 3,plVar20 + 0xf);
                                    plVar31 = (long *)plVar20[0xf];
                                    uVar29 = 5;
                                  }
                                  uVar21 = 6;
                                  for (plVar30 = plVar20 + 0x12; plVar22 != plVar30;
                                      plVar30 = plVar30 + 3) {
                                    (**(code **)(*(long *)*plVar30 + 0xd0))();
                                    if ((long *)*plVar30 != plVar31) {
                                      (**(code **)(*plVar31 + 0x100))
                                                (plVar31,plVar20 + uVar29 * 3,plVar30);
                                      plVar31 = (long *)*plVar30;
                                      uVar29 = uVar21;
                                    }
                                    uVar21 = uVar21 + 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      (**(code **)(*plVar31 + 0x100))
                                (plVar31,plVar20 + uVar29 * 3,plVar20 + uVar21 * 3);
                      plVar20[600] = 0;
                    }
                    *(undefined4 *)(lVar33 + 0x12cc) = 0;
                  }
                  *(long **)(lVar28 + 0x1a0) = local_e8;
                  plVar20 = *(long **)(lVar28 + 0x198);
                  *(long **)(lVar28 + 0x1a8) = local_e0;
                  *(long **)(lVar28 + 0x1b0) = local_d8;
                }
              }
              local_e8 = (long *)FUN_0103dc1c(plVar20 + 1,&local_130);
              local_f0 = (long *)0x0;
              do {
                lVar33 = *(long *)(lVar28 + 0x160) - *(long *)(lVar28 + 0x158);
                if (lVar33 == 0) {
                  uVar21 = *(long *)(lVar28 + 0xf0) - *(long *)(lVar28 + 0xe8) >> 4;
                  FUN_0103b268(lVar28 + 0xe8,&local_f0);
LAB_010373a4:
                  *(ulong *)(lVar28 + 400) = uVar21 + 1;
                  goto LAB_010373ac;
                }
                uVar21 = *(ulong *)(*(long *)(lVar28 + 0x160) + -8);
                *(long *)(lVar28 + 0x160) = lVar33 + *(long *)(lVar28 + 0x158) + -8;
                uVar29 = uVar21 >> 3 & 0x1ffffffffffffff8;
                *(ulong *)(*(long *)(lVar28 + 0x120) + uVar29) =
                     *(ulong *)(*(long *)(lVar28 + 0x120) + uVar29) &
                     (1L << (uVar21 & 0x3f) ^ 0xffffffffffffffffU);
              } while ((ulong)(*(long *)(lVar28 + 0xf0) - *(long *)(lVar28 + 0xe8) >> 4) <= uVar21);
              puVar4 = (undefined8 *)(*(long *)(lVar28 + 0xe8) + uVar21 * 0x10);
              *puVar4 = 0;
              puVar4[1] = local_e8;
              if (*(ulong *)(lVar28 + 400) <= uVar21) goto LAB_010373a4;
LAB_010373ac:
              *(undefined8 *)(lVar28 + 0x30) = 0;
              pLVar15 = (LightEventType *)(lVar28 + 0x38);
LAB_010373c0:
              nn::os::SignalLightEvent(pLVar15);
              goto LAB_010373c4;
            }
            if (*(long *)(lVar28 + 0x198) == 0) {
              local_68 = *(undefined8 *)(lVar28 + 8);
              FUN_0103cc80(&local_f0,local_68,&local_68);
              plVar20 = local_f0;
              local_f0 = (long *)0x0;
              lVar33 = *(long *)(lVar28 + 0x198);
              *(long **)(lVar28 + 0x198) = plVar20;
              if (lVar33 != 0) {
                FUN_00c4e600();
                FUN_00c4e600();
                lVar34 = FUN_00c4e600();
                iVar7 = *(int *)(lVar34 + 0x12c8);
                iVar13 = iVar7 + 1;
                *(int *)(lVar34 + 0x12c8) = iVar13;
                if (*(int *)(lVar34 + 0x12cc) <= iVar7) {
                  *(int *)(lVar34 + 0x12cc) = iVar13;
                }
                lVar34 = *(long *)(lVar33 + 0xf8);
                if (lVar34 != 0) {
                  plVar20 = *(long **)(lVar33 + 0x110);
                  *(long *)(lVar33 + 0x100) = lVar34;
                  lVar37 = *(long *)(lVar33 + 0x108) - lVar34;
                  uVar21 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                  if (((uVar21 & 1) == 0) ||
                     (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                    (**(code **)(*plVar20 + 0x18))(plVar20,lVar34,lVar37,8);
                  }
                  else {
                    FUN_00c48fe8(plVar20,lVar34,lVar37,8);
                  }
                }
                lVar34 = *(long *)(lVar33 + 0xc0);
                if (lVar34 != 0) {
                  plVar20 = *(long **)(lVar33 + 0xd8);
                  *(long *)(lVar33 + 200) = lVar34;
                  lVar37 = *(long *)(lVar33 + 0xd0) - lVar34;
                  uVar21 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                  if (((uVar21 & 1) == 0) ||
                     (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
                    (**(code **)(*plVar20 + 0x18))(plVar20,lVar34,lVar37,8);
                  }
                  else {
                    FUN_00c48fe8(plVar20,lVar34,lVar37,8);
                  }
                }
                FUN_010920f8(lVar33 + 8);
                plVar20 = *(long **)(lVar28 + 0x1a0);
                uVar39 = *(undefined8 *)(lVar28 + 0x1a8);
                uVar38 = *(undefined8 *)(lVar28 + 0x1b0);
                uVar21 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                if (((uVar21 & 1) == 0) || (lVar34 = FUN_00c4e600(), *(int *)(lVar34 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar20 + 0x18))(plVar20,lVar33,uVar39,uVar38);
                }
                else {
                  FUN_00c48fe8(plVar20,lVar33,uVar39,uVar38);
                }
                lVar33 = FUN_00c4e600();
                iVar13 = *(int *)(lVar33 + 0x12c8) + -1;
                *(int *)(lVar33 + 0x12c8) = iVar13;
                if (iVar13 == 0) {
                  plVar20 = (long *)FUN_00c4e600();
                  if (plVar20[600] != 0) {
                    local_108 = plVar20 + plVar20[600] * 3;
                    local_a0 = plVar20;
                    FUN_00c4ea30(&local_a0,&local_108);
                    plVar31 = (long *)*plVar20;
                    plVar22 = plVar20;
                    if (plVar20[600] != 0) {
                      plVar22 = plVar20 + plVar20[600] * 3;
                    }
                    if (plVar22 == plVar20) {
                      uVar29 = 0;
                      uVar21 = 0;
                    }
                    else {
                      (**(code **)(*(long *)*plVar20 + 0xd0))();
                      if ((long *)*plVar20 != plVar31) {
                        (**(code **)(*plVar31 + 0x100))(plVar31,plVar20,plVar20);
                        plVar31 = (long *)*plVar20;
                      }
                      plVar30 = plVar20 + 3;
                      if (plVar22 == plVar30) {
                        uVar29 = 0;
                        uVar21 = 1;
                      }
                      else {
                        (**(code **)(*(long *)*plVar30 + 0xd0))();
                        bVar12 = (long *)*plVar30 != plVar31;
                        if (bVar12) {
                          (**(code **)(*plVar31 + 0x100))(plVar31,plVar20,plVar20 + 3);
                          plVar31 = (long *)plVar20[3];
                        }
                        uVar29 = (ulong)bVar12;
                        plVar30 = plVar20 + 6;
                        if (plVar22 == plVar30) {
                          uVar21 = 2;
                        }
                        else {
                          (**(code **)(*(long *)*plVar30 + 0xd0))();
                          if ((long *)*plVar30 != plVar31) {
                            (**(code **)(*plVar31 + 0x100))
                                      (plVar31,plVar20 + uVar29 * 3,plVar20 + 6);
                            plVar31 = (long *)plVar20[6];
                            uVar29 = 2;
                          }
                          plVar30 = plVar20 + 9;
                          if (plVar22 == plVar30) {
                            uVar21 = 3;
                          }
                          else {
                            (**(code **)(*(long *)*plVar30 + 0xd0))();
                            if ((long *)*plVar30 != plVar31) {
                              (**(code **)(*plVar31 + 0x100))
                                        (plVar31,plVar20 + uVar29 * 3,plVar20 + 9);
                              plVar31 = (long *)plVar20[9];
                              uVar29 = 3;
                            }
                            plVar30 = plVar20 + 0xc;
                            if (plVar22 == plVar30) {
                              uVar21 = 4;
                            }
                            else {
                              (**(code **)(*(long *)*plVar30 + 0xd0))();
                              if ((long *)*plVar30 != plVar31) {
                                (**(code **)(*plVar31 + 0x100))
                                          (plVar31,plVar20 + uVar29 * 3,plVar20 + 0xc);
                                plVar31 = (long *)plVar20[0xc];
                                uVar29 = 4;
                              }
                              plVar30 = plVar20 + 0xf;
                              if (plVar22 == plVar30) {
                                uVar21 = 5;
                              }
                              else {
                                (**(code **)(*(long *)*plVar30 + 0xd0))();
                                if ((long *)*plVar30 != plVar31) {
                                  (**(code **)(*plVar31 + 0x100))
                                            (plVar31,plVar20 + uVar29 * 3,plVar20 + 0xf);
                                  plVar31 = (long *)plVar20[0xf];
                                  uVar29 = 5;
                                }
                                uVar21 = 6;
                                for (plVar30 = plVar20 + 0x12; plVar22 != plVar30;
                                    plVar30 = plVar30 + 3) {
                                  (**(code **)(*(long *)*plVar30 + 0xd0))();
                                  if ((long *)*plVar30 != plVar31) {
                                    (**(code **)(*plVar31 + 0x100))
                                              (plVar31,plVar20 + uVar29 * 3,plVar30);
                                    plVar31 = (long *)*plVar30;
                                    uVar29 = uVar21;
                                  }
                                  uVar21 = uVar21 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    (**(code **)(*plVar31 + 0x100))
                              (plVar31,plVar20 + uVar29 * 3,plVar20 + uVar21 * 3);
                    plVar20[600] = 0;
                  }
                  *(undefined4 *)(lVar33 + 0x12cc) = 0;
                }
              }
              *(long **)(lVar28 + 0x1a8) = local_e0;
              *(long **)(lVar28 + 0x1b0) = local_d8;
              *(long **)(lVar28 + 0x1a0) = local_e8;
            }
            local_f0 = (long *)0xffffffff00000000;
            uVar21 = FUN_0103b2e0(lVar28 + 0xe8,&local_f0);
            plVar20 = (long *)(lVar28 + 0x48);
            lVar34 = *plVar20;
            lVar33 = nn::os::GetCurrentThread();
            if (lVar33 != lVar34) {
              lVar33 = nn::os::GetCurrentThread();
LAB_01037b94:
              if (*plVar20 == 0) goto code_r0x01037b9c;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x50));
              do {
                if (*plVar20 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x50));
                    while (*plVar20 == 0) {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar12) {
                        *plVar20 = lVar33;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                      if (cVar8 == '\0') goto LAB_01037ba4;
                    }
                  } while( true );
                }
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar12) {
                  *plVar20 = lVar33;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
LAB_01037ba4:
              bVar12 = false;
              goto LAB_01037ba8;
            }
            plVar20 = (long *)0x0;
            bVar12 = true;
LAB_01037ba8:
            local_a0 = local_130;
            plStack_98 = local_128;
            puVar4 = *(undefined8 **)(lVar28 + 0x68);
            if (puVar4 < *(undefined8 **)(lVar28 + 0x70)) {
              uVar39 = *(undefined8 *)(lVar28 + 0x78);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar33 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar33 != 0) {
                if (0xf < *(ulong *)(lVar33 + 0x80)) {
LAB_0103aa70:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = uVar39;
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
              }
              puVar4[4] = lVar28;
              puVar4[5] = uVar21;
              *puVar4 = &LAB_02df3194;
              puVar4[1] = &LAB_02df31d8;
              puVar4[6] = lVar28;
              puVar4[7] = local_a0;
              puVar4[8] = plStack_98;
              puVar4[2] = &LAB_02df3704;
              puVar4[3] = &LAB_02df3718;
              if (lVar33 != 0) {
                *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
              }
              *(undefined8 **)(lVar28 + 0x68) = puVar4 + 0x20;
            }
            else {
              plVar22 = (long *)(lVar28 + 0x78);
              lVar37 = FUN_0103b290(lVar28 + 0x60,((long)puVar4 - *(long *)(lVar28 + 0x60) >> 8) + 1
                                   );
              lVar33 = *(long *)(lVar28 + 0x60);
              lVar34 = *(long *)(lVar28 + 0x68);
              local_d8 = (long *)0x0;
              local_d0 = plVar22;
              if (lVar37 == 0) {
                plVar31 = (long *)0x0;
              }
              else {
                plVar31 = (long *)(**(code **)(*(long *)*plVar22 + 0x10))
                                            ((long *)*plVar22,lVar37 << 8,0x10);
                if (plVar31 == (long *)0x0) {
                  (**(code **)(*(long *)*plVar22 + 0xe8))();
                }
              }
              plVar30 = plVar31 + (lVar34 - lVar33 >> 8) * 0x20;
              local_d8 = plVar31 + lVar37 * 0x20;
              lVar33 = *plVar22;
              local_f0 = plVar31;
              local_e8 = plVar30;
              local_e0 = plVar30;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar34 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar34 != 0) {
                if (0xf < *(ulong *)(lVar34 + 0x80)) goto LAB_0103aa70;
                *(long *)(lVar34 + *(ulong *)(lVar34 + 0x80) * 8) = lVar33;
                *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + 1;
              }
              plVar30[2] = 0;
              plVar30[3] = 0;
              plVar30[4] = lVar28;
              plVar30[5] = uVar21;
              plVar30[6] = lVar28;
              plVar30[7] = (long)local_a0;
              plVar30[8] = (long)plStack_98;
              *plVar30 = (long)&LAB_02df3194;
              plVar30[1] = (long)&LAB_02df31d8;
              plVar30[2] = (long)&LAB_02df3704;
              plVar30[3] = (long)&LAB_02df3718;
              if (lVar34 != 0) {
                *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + -1;
              }
              local_e0 = local_e0 + 0x20;
              FUN_0103b38c(lVar28 + 0x60,&local_f0);
              FUN_0103bbd0(&local_f0);
            }
            if (!bVar12) {
              *plVar20 = 0;
              pLVar15 = (LightEventType *)(plVar20 + 1);
              goto LAB_010373c0;
            }
LAB_010373c4:
            *(ulong *)(lVar14 + 0x38) = uVar21;
          }
          else {
            lVar28 = lVar33 * 0x20;
            plVar30 = plVar22;
            while (lVar28 = lVar28 + -0x20, lVar28 != 0) {
              plVar31 = plVar30 + 4;
              plVar35 = plVar30 + 4;
              plVar30 = plVar31;
              if ((long *)*plVar35 == plVar20) goto LAB_010370e8;
            }
LAB_01037fac:
            *(undefined8 *)(lVar14 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(lVar14 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(lVar14 + 0x28) = 0xffffffffffffffff;
          }
          do {
            lVar14 = *plVar27;
            lVar33 = param_1[0x53];
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar12) {
              *plVar27 = lVar14;
              param_1[0x53] = lVar33;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          do {
            lVar28 = *plVar27;
            lVar34 = param_1[0x53];
            if (lVar28 != lVar14 || lVar34 != lVar33) {
              bVar12 = false;
              ClearExclusiveLocal();
              goto LAB_01037514;
            }
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar12) {
              *plVar27 = lVar14;
              *(long *)((long)param_1 + 0x294) = lVar33 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar12 = true;
LAB_01037514:
          if (!bVar12) {
            do {
              lVar14 = *plVar27;
              lVar33 = param_1[0x53];
              if (lVar14 != lVar28 || lVar33 != lVar34) {
                bVar12 = false;
                ClearExclusiveLocal();
                goto joined_r0x010395b8;
              }
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar12) {
                *plVar27 = lVar28;
                *(long *)((long)param_1 + 0x294) = lVar34 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            bVar12 = true;
joined_r0x010395b8:
            if (!bVar12) {
              do {
                lVar28 = *plVar27;
                lVar34 = param_1[0x53];
                if (lVar28 != lVar14 || lVar34 != lVar33) {
                  bVar12 = false;
                  ClearExclusiveLocal();
                  lVar14 = lVar28;
                  lVar33 = lVar34;
                  goto joined_r0x010395b8;
                }
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar12) {
                  *plVar27 = lVar14;
                  *(long *)((long)param_1 + 0x294) = lVar33 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              bVar12 = true;
              lVar14 = lVar28;
              lVar33 = lVar34;
              goto joined_r0x010395b8;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x54));
        }
        if (!bVar36) {
          *plVar24 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
        }
        param_1[0xc] = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd));
        goto LAB_01037544;
      }
      uVar29 = (long)plVar27 - (long)plVar24 >> 4;
      if (uVar21 <= uVar29) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("index < m_end","erase",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                   ,0x391,"FlatHashTable::erase iterator out of bounds");
      }
      uVar23 = uVar29 + 1;
      if (uVar23 < (ulong)(param_1[0xea] - (long)plVar24 >> 4)) {
        memmove(plVar24 + uVar29 * 2,plVar24 + uVar23 * 2,(uVar21 - uVar23) * 0x10);
        uVar21 = param_1[0xf0];
      }
      param_1[0xf0] = uVar21 - 1;
    }
    if (!bVar12) {
      *plVar20 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
    }
LAB_01037544:
    do {
      lVar14 = *plVar32;
      lVar33 = param_1[0xa7];
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar12) {
        *plVar32 = lVar14;
        param_1[0xa7] = lVar33;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar28 = *plVar32;
      lVar34 = param_1[0xa7];
      if (lVar28 != lVar14 || lVar34 != lVar33) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_01037580;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar12) {
        *plVar32 = lVar14;
        *(long *)((long)param_1 + 0x534) = lVar33 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
LAB_01037580:
    if (!bVar12) {
      do {
        lVar14 = *plVar32;
        lVar33 = param_1[0xa7];
        if (lVar14 != lVar28 || lVar33 != lVar34) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0103956c;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar12) {
          *plVar32 = lVar28;
          *(long *)((long)param_1 + 0x534) = lVar34 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
joined_r0x0103956c:
      if (!bVar12) {
        do {
          lVar28 = *plVar32;
          lVar34 = param_1[0xa7];
          if (lVar28 != lVar14 || lVar34 != lVar33) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar14 = lVar28;
            lVar33 = lVar34;
            goto joined_r0x0103956c;
          }
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar12) {
            *plVar32 = lVar14;
            *(long *)((long)param_1 + 0x534) = lVar33 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar12 = true;
        lVar14 = lVar28;
        lVar33 = lVar34;
        goto joined_r0x0103956c;
      }
    }
    nn::os::SignalLightEvent(pLVar16);
  }
  else {
    do {
      lVar14 = *plVar32;
      lVar33 = param_1[0xa7];
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar12) {
        *plVar32 = lVar14;
        param_1[0xa7] = lVar33;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar28 = *plVar32;
      lVar34 = param_1[0xa7];
      if (lVar28 != lVar14 || lVar34 != lVar33) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_010375b8;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar12) {
        *plVar32 = lVar14;
        *(long *)((long)param_1 + 0x534) = lVar33 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
LAB_010375b8:
    if (!bVar12) {
      do {
        lVar14 = *plVar32;
        lVar33 = param_1[0xa7];
        if (lVar14 != lVar28 || lVar33 != lVar34) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x0103960c;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar12) {
          *plVar32 = lVar28;
          *(long *)((long)param_1 + 0x534) = lVar34 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
joined_r0x0103960c:
      if (!bVar12) {
        do {
          lVar28 = *plVar32;
          lVar34 = param_1[0xa7];
          if (lVar28 != lVar14 || lVar34 != lVar33) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar14 = lVar28;
            lVar33 = lVar34;
            goto joined_r0x0103960c;
          }
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar12) {
            *plVar32 = lVar14;
            *(long *)((long)param_1 + 0x534) = lVar33 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar12 = true;
        lVar14 = lVar28;
        lVar33 = lVar34;
        goto joined_r0x0103960c;
      }
    }
    nn::os::SignalLightEvent(pLVar16);
    local_120 = 0;
    local_128 = (long *)0x0;
    local_130 = param_1;
    FUN_00dbefa4(&local_128,param_2);
    local_118 = (undefined8 *)0x0;
    uStack_110 = 0;
    FUN_00f34110(&local_118,param_3);
    FUN_00f338dc(&local_108,param_1);
    plVar32 = local_108 + 0x33;
    fVar5 = *(float *)(param_1 + 0xa4);
    lVar33 = *plVar32;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar33) {
      lVar14 = nn::os::GetCurrentThread();
LAB_01037628:
      if (*plVar32 == 0) goto code_r0x01037630;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_108 + 0x34));
      do {
        if (*plVar32 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_108 + 0x34));
            while (*plVar32 == 0) {
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar12) {
                *plVar32 = lVar14;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01037638;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar12) {
          *plVar32 = lVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01037638:
      bVar12 = false;
      goto LAB_0103763c;
    }
    plVar32 = (long *)0x0;
    bVar12 = true;
LAB_0103763c:
    plVar24 = (long *)*local_108;
    plVar20 = plVar24 + 6;
    lVar33 = *plVar20;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar33) {
      lVar14 = nn::os::GetCurrentThread();
LAB_01037660:
      if (*plVar20 == 0) goto code_r0x01037668;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar24 + 7));
      do {
        if (*plVar20 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar24 + 7));
            while (*plVar20 == 0) {
              cVar8 = '\x01';
              bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar36) {
                *plVar20 = lVar14;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01037670;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar36) {
          *plVar20 = lVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01037670:
      lVar14 = plVar24[0x3f];
      if (lVar14 == 0) {
        local_a0 = (long *)plVar24[1];
        FUN_0103caf0(&local_f0,local_a0,&local_a0);
        plVar20 = local_f0;
        local_f0 = (long *)0x0;
        lVar14 = plVar24[0x3f];
        plVar24[0x3f] = (long)plVar20;
        if (lVar14 == 0) {
          plVar24[0x42] = (long)local_d8;
          plVar24[0x41] = (long)local_e0;
          plVar24[0x40] = (long)local_e8;
          local_f0 = (long *)0x0;
        }
        else {
          FUN_0103e9d8(plVar24 + 0x40);
          plVar20 = local_f0;
          plVar24[0x42] = (long)local_d8;
          plVar24[0x41] = (long)local_e0;
          plVar24[0x40] = (long)local_e8;
          local_f0 = (long *)0x0;
          if (plVar20 != (long *)0x0) {
            FUN_0103e9d8(&local_e8);
          }
        }
        lVar14 = plVar24[0x3f];
      }
      local_a0 = (long *)CONCAT44(local_a0._4_4_,fVar5);
      plVar20 = (long *)FUN_0103ce08(lVar14 + 8,&local_130);
      plVar22 = (long *)(lVar14 + 0xc0);
      lVar33 = *plVar22;
      lVar28 = *(long *)(lVar14 + 200) - lVar33 >> 3;
      plVar27 = (long *)(lVar28 * -0x5555555555555555);
      local_f0 = plVar20;
      if (plVar27 <= plVar20) {
        plVar31 = (long *)((long)plVar20 + 1);
        lVar28 = (long)plVar31 + lVar28 * 0x5555555555555555;
        if (plVar31 < plVar27 || lVar28 == 0) {
          if (plVar31 < plVar27) {
            *(long *)(lVar14 + 200) = lVar33 + (long)plVar31 * 0x18;
          }
        }
        else {
          FUN_00e93f30(plVar22,lVar28);
          lVar33 = *plVar22;
        }
      }
      *(undefined1 *)(lVar33 + (long)plVar20 * 0x18) = 0;
      *(undefined8 *)(*(long *)(lVar14 + 0xc0) + (long)plVar20 * 0x18 + 8) = 1;
      uVar10 = local_a0._0_4_;
      *(undefined4 *)(*(long *)(lVar14 + 0xc0) + (long)plVar20 * 0x18 + 0x10) = local_a0._0_4_;
      uVar29 = *(ulong *)(lVar14 + 0x130);
      uVar21 = uVar29 + 1;
      plVar27 = (long *)(lVar14 + 0xf8);
      *(ulong *)(lVar14 + 0x130) = uVar21;
      if (uVar29 == 0) {
        if (*(long *)(lVar14 + 0x100) - (long)*(undefined8 **)(lVar14 + 0xf8) >> 4 == 0) {
          FUN_0103e0a0(plVar27,&local_f0,&local_a0);
        }
        else {
          **(undefined8 **)(lVar14 + 0xf8) = plVar20;
          *(undefined4 *)(*plVar27 + 8) = local_a0._0_4_;
        }
      }
      else {
        pvVar18 = *(void **)(lVar14 + 0xf8);
        uVar23 = uVar29 - 1;
        uVar25 = *(long *)(lVar14 + 0x100) - (long)pvVar18 >> 4;
        if (*(float *)((long)pvVar18 + uVar23 * 0x10 + 8) <= fVar5) {
          if (uVar25 < uVar21) {
            FUN_0103e0a0(plVar27,&local_f0,&local_a0);
            goto LAB_01038af4;
          }
          *(long **)((long)pvVar18 + uVar29 * 0x10) = plVar20;
          lVar14 = *plVar27 + uVar29 * 0x10;
        }
        else {
          if (uVar25 <= uVar21 && uVar21 - uVar25 != 0) {
            FUN_0103e51c(plVar27,uVar21 - uVar25);
            pvVar18 = (void *)*plVar27;
          }
          if (*(float *)((long)pvVar18 + 8) <= fVar5) {
            if (uVar29 - 2 < 3) {
              uVar21 = 1;
            }
            else {
              uVar25 = (ulong)((float)(uVar29 - 2) * 0.5);
              fVar40 = *(float *)((long)pvVar18 + (uVar25 + 1) * 0x10 + 8);
              if (fVar40 <= fVar5) {
                uVar9 = uVar23 - (uVar25 + 1);
              }
              else {
                uVar23 = uVar25 + 1;
                uVar9 = uVar25;
              }
              uVar21 = 1;
              if (fVar40 <= fVar5) {
                uVar21 = uVar25 + 1;
              }
              if (2 < uVar9) {
                uVar25 = uVar21 + (long)((float)uVar9 * 0.5);
                uVar11 = uVar25;
                uVar9 = (long)((float)uVar9 * 0.5);
                if (*(float *)((long)pvVar18 + uVar25 * 0x10 + 8) <= fVar5) {
                  uVar21 = uVar25;
                  uVar11 = uVar23;
                  uVar9 = uVar23 - uVar25;
                }
                uVar23 = uVar11;
                if (2 < uVar9) {
                  uVar25 = uVar21 + (long)((float)uVar9 * 0.5);
                  uVar11 = uVar25;
                  uVar9 = (long)((float)uVar9 * 0.5);
                  if (*(float *)((long)pvVar18 + uVar25 * 0x10 + 8) <= fVar5) {
                    uVar21 = uVar25;
                    uVar11 = uVar23;
                    uVar9 = uVar23 - uVar25;
                  }
                  while (uVar23 = uVar11, 2 < uVar9) {
                    uVar25 = uVar21 + (long)((float)uVar9 * 0.5);
                    uVar11 = uVar25;
                    uVar9 = (long)((float)uVar9 * 0.5);
                    if (*(float *)((long)pvVar18 + uVar25 * 0x10 + 8) <= fVar5) {
                      uVar21 = uVar25;
                      uVar11 = uVar23;
                      uVar9 = uVar23 - uVar25;
                    }
                  }
                }
              }
            }
            if (uVar23 <= uVar29 && uVar21 <= uVar23) {
              pfVar26 = (float *)((long)pvVar18 + uVar23 * 0x10 + 8);
              while (fVar5 < *pfVar26) {
                uVar23 = uVar23 - 1;
                if ((uVar23 < uVar21) || (pfVar26 = pfVar26 + -4, uVar29 < uVar23))
                goto LAB_01038ab4;
              }
              uVar23 = uVar23 + 1;
            }
LAB_01038ab4:
            if (uVar23 <= uVar29 && uVar21 <= uVar23) {
              uVar21 = uVar23;
            }
            pvVar18 = (void *)((long)pvVar18 + uVar21 * 0x10);
            memmove((void *)((long)pvVar18 + 0x10),pvVar18,(uVar29 - uVar21) * 0x10);
            *(long **)(*plVar27 + uVar21 * 0x10) = plVar20;
            lVar14 = *plVar27 + uVar21 * 0x10;
          }
          else {
            memmove((void *)((long)pvVar18 + 0x10),pvVar18,uVar29 << 4);
            *(long **)*plVar27 = plVar20;
            lVar14 = *plVar27;
          }
        }
        *(undefined4 *)(lVar14 + 8) = uVar10;
      }
LAB_01038af4:
      local_f0 = (long *)0x3;
      do {
        lVar14 = plVar24[0x2c] - plVar24[0x2b];
        local_e8 = plVar20;
        if (lVar14 == 0) {
          plVar27 = (long *)(plVar24[0x1e] - plVar24[0x1d] >> 4);
          FUN_0103b268(plVar24 + 0x1d,&local_f0);
LAB_01038b68:
          plVar24[0x32] = (long)plVar27 + 1;
          goto LAB_01038b70;
        }
        plVar27 = *(long **)(plVar24[0x2c] + -8);
        plVar24[0x2c] = lVar14 + plVar24[0x2b] + -8;
        uVar21 = (ulong)plVar27 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(plVar24[0x24] + uVar21) =
             *(ulong *)(plVar24[0x24] + uVar21) &
             (1L << ((ulong)plVar27 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((long *)(plVar24[0x1e] - plVar24[0x1d] >> 4) <= plVar27);
      puVar4 = (undefined8 *)(plVar24[0x1d] + (long)plVar27 * 0x10);
      *puVar4 = 3;
      puVar4[1] = plVar20;
      if ((long *)plVar24[0x32] <= plVar27) goto LAB_01038b68;
LAB_01038b70:
      pLVar16 = (LightEventType *)(plVar24 + 7);
      plVar24[6] = 0;
      goto LAB_01038b80;
    }
    if (plVar24[0x3f] == 0) {
      local_a0 = (long *)plVar24[1];
      FUN_0103caf0(&local_f0,local_a0,&local_a0);
      plVar20 = local_f0;
      local_f0 = (long *)0x0;
      lVar14 = plVar24[0x3f];
      plVar24[0x3f] = (long)plVar20;
      if (lVar14 == 0) {
        plVar24[0x42] = (long)local_d8;
        plVar24[0x41] = (long)local_e0;
        plVar24[0x40] = (long)local_e8;
      }
      else {
        FUN_0103e9d8(plVar24 + 0x40);
        plVar20 = local_f0;
        plVar24[0x42] = (long)local_d8;
        plVar24[0x41] = (long)local_e0;
        plVar24[0x40] = (long)local_e8;
        local_f0 = (long *)0x0;
        if (plVar20 != (long *)0x0) {
          FUN_0103e9d8(&local_e8);
        }
      }
    }
    local_f0 = (long *)0xffffffff00000003;
    plVar27 = (long *)FUN_0103b2e0(plVar24 + 0x1d,&local_f0);
    plVar20 = plVar24 + 9;
    lVar33 = *plVar20;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar33) {
      lVar14 = nn::os::GetCurrentThread();
LAB_01037888:
      if (*plVar20 == 0) goto code_r0x01037890;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar24 + 10));
      do {
        if (*plVar20 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar24 + 10));
            while (*plVar20 == 0) {
              cVar8 = '\x01';
              bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar36) {
                *plVar20 = lVar14;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01037898;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar36) {
          *plVar20 = lVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01037898:
      bVar36 = false;
      goto LAB_0103789c;
    }
    plVar20 = (long *)0x0;
    bVar36 = true;
LAB_0103789c:
    local_d8 = local_130;
    local_d0 = (long *)0x0;
    uStack_c8 = 0;
    local_f0 = plVar24;
    local_e8 = plVar27;
    local_e0 = plVar24;
    FUN_00dbefa4(&local_d0,&local_128);
    local_c0 = (long *)0x0;
    uStack_b8 = 0;
    FUN_00f34110(&local_c0,&local_118);
    local_a8 = 1;
    uVar21 = plVar24[0xd];
    local_b0 = fVar5;
    if (uVar21 < (ulong)plVar24[0xe]) {
      FUN_0103c624(plVar24[0xf],uVar21,&local_f0);
      plVar24[0xd] = uVar21 + 0x100;
    }
    else {
      plVar22 = plVar24 + 0xf;
      lVar28 = FUN_0103b290(plVar24 + 0xc,((long)(uVar21 - plVar24[0xc]) >> 8) + 1);
      lVar14 = plVar24[0xc];
      lVar33 = plVar24[0xd];
      local_88 = (long *)0x0;
      plStack_80 = plVar22;
      if (lVar28 == 0) {
        plVar31 = (long *)0x0;
      }
      else {
        plVar31 = (long *)(**(code **)(*(long *)*plVar22 + 0x10))((long *)*plVar22,lVar28 << 8,0x10)
        ;
        if (plVar31 == (long *)0x0) {
          (**(code **)(*(long *)*plVar22 + 0xe8))();
        }
      }
      plVar30 = (long *)((long)plVar31 + (lVar33 - lVar14));
      local_88 = plVar31 + lVar28 * 0x20;
      local_a0 = plVar31;
      plStack_98 = plVar30;
      FUN_0103c624(*plVar22,plVar30,&local_f0);
      local_90 = plVar30 + 0x20;
      FUN_0103b38c(plVar24 + 0xc,&local_a0);
      FUN_0103bbd0(&local_a0);
    }
    plVar24 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar22 = local_c0 + 3;
      do {
        sVar6 = (short)*plVar22;
        cVar8 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar19) {
          *(short *)plVar22 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar1 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar13 = *piVar1;
          cVar8 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_a0 = (long *)*plVar24;
          FUN_00c44438(lVar14 + 0x8040,&local_a0);
        }
      }
      else if (sVar6 == 0) goto LAB_01038c2c;
    }
    plVar24 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar22 = local_d0 + 3;
      do {
        sVar6 = (short)*plVar22;
        cVar8 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar19) {
          *(short *)plVar22 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar1 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar13 = *piVar1;
          cVar8 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_a0 = (long *)*plVar24;
          FUN_00c44438(lVar14 + 0x8040,&local_a0);
        }
      }
      else if (sVar6 == 0) goto LAB_01038c2c;
    }
    if (!bVar36) {
      *plVar20 = 0;
      pLVar16 = (LightEventType *)(plVar20 + 1);
LAB_01038b80:
      nn::os::SignalLightEvent(pLVar16);
    }
    local_f0 = plVar27;
    FUN_0103bd9c(local_108 + 0x36,&local_f0);
    if (!bVar12) {
      *plVar32 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar32 + 1));
    }
    *(float *)(param_1 + 0xa4) = fVar5 + 0.01;
    if (local_f8 != '\0') {
      *local_100 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_100 + 1));
    }
    puVar4 = local_118;
    if (local_118 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_118 + 3);
      do {
        sVar6 = *psVar2;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar1 = (int *)((long)local_118 + 0x1c);
        do {
          iVar13 = *piVar1;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_f0 = (long *)*puVar4;
          FUN_00c44438(lVar14 + 0x8040,&local_f0);
        }
      }
      else if (sVar6 == 0) goto LAB_01038c2c;
    }
    plVar32 = local_128;
    if (local_128 != (long *)0x0) {
      plVar20 = local_128 + 3;
      do {
        sVar6 = (short)*plVar20;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar12) {
          *(short *)plVar20 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar1 = (int *)((long)local_128 + 0x1c);
        do {
          iVar13 = *piVar1;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_f0 = (long *)*plVar32;
          FUN_00c44438(lVar14 + 0x8040,&local_f0);
        }
      }
      else if (sVar6 == 0) {
LAB_01038c2c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01036cd0:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
  if (bVar12) {
    *plVar32 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01036cd8;
  goto LAB_01036cc8;
code_r0x01037630:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
  if (bVar12) {
    *plVar32 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037638;
  goto LAB_01037628;
code_r0x01037668:
  cVar8 = '\x01';
  bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar36) {
    *plVar20 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037670;
  goto LAB_01037660;
code_r0x01037890:
  cVar8 = '\x01';
  bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar36) {
    *plVar20 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037898;
  goto LAB_01037888;
code_r0x01036e08:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar12) {
    *plVar20 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01036e10;
  goto LAB_01036e00;
code_r0x01036ee8:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar12) {
    *plVar24 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01036ef0;
  goto LAB_01036ee0;
code_r0x01036f18:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar12) {
    *plVar24 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01036f20;
  goto LAB_01036f10;
code_r0x01037144:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar12) {
    *plVar22 = lVar33;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_0103714c;
  goto LAB_0103713c;
code_r0x01037988:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar12) {
    *plVar22 = lVar33;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037990;
  goto LAB_01037980;
code_r0x01037230:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar12) {
    *plVar22 = lVar33;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037238;
  goto LAB_01037228;
code_r0x01037a94:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar12) {
    *plVar22 = lVar33;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037a9c;
  goto LAB_01037a8c;
code_r0x01037318:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar12) {
    *plVar22 = lVar33;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037320;
  goto LAB_01037310;
code_r0x01037b9c:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar12) {
    *plVar20 = lVar33;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01037ba4;
  goto LAB_01037b94;
}


