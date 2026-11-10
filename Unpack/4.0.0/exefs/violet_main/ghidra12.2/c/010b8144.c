/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b8144; name: FUN_010b8144
 */


void FUN_010b8144(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  short *psVar6;
  int *piVar7;
  undefined8 *puVar8;
  short sVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  bool bVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  short sVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  bool bVar34;
  ulong local_118;
  long local_110;
  long *local_100;
  long local_f0;
  long *local_c8;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long *local_a8;
  undefined8 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  
  plVar29 = (long *)(param_1 + 0x2a0);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar29 == 0) {
    cVar10 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar34) {
      *plVar29 = lVar13;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB_010b8184;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
  do {
    if (*plVar29 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
        while (*plVar29 == 0) {
          cVar10 = '\x01';
          bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar34) {
            *plVar29 = lVar13;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_010b8184;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar34) {
      *plVar29 = lVar13;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_010b8184:
  plVar29 = (long *)(param_1 + 0x170);
  lVar21 = *plVar29;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 != lVar21) {
    lVar13 = nn::os::GetCurrentThread();
LAB_010b81a0:
    if (*plVar29 == 0) goto code_r0x010b81a8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x178));
    do {
      if (*plVar29 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x178));
          while (*plVar29 == 0) {
            cVar10 = '\x01';
            bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar34) {
              *plVar29 = lVar13;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_010b81b0;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar34) {
        *plVar29 = lVar13;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_010b81b0:
    bVar34 = false;
    plVar32 = plVar29;
    goto LAB_010b81b8;
  }
  plVar32 = (long *)0x0;
  bVar34 = true;
LAB_010b81b8:
  lVar13 = *(long *)(param_1 + 0x188);
  uVar25 = *(ulong *)(param_1 + 0x168);
  if (uVar25 < (ulong)((*(long *)(param_1 + 400) - lVar13 >> 3) * -0x5555555555555555)) {
    plVar33 = (long *)(param_1 + 0x280);
    do {
      lVar21 = nn::os::GetCurrentThread();
      do {
        lVar23 = *plVar33;
        lVar27 = *(long *)(param_1 + 0x288);
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *plVar33 = lVar23;
          *(long *)(param_1 + 0x288) = lVar27;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      do {
        while ((lVar23 != 0 && (lVar21 != lVar23))) {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
          do {
            lVar23 = *plVar33;
            lVar27 = *(long *)(param_1 + 0x288);
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar11) {
              *plVar33 = lVar23;
              *(long *)(param_1 + 0x288) = lVar27;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        do {
          lVar30 = *plVar33;
          if (lVar30 != lVar23 || *(long *)(param_1 + 0x288) != lVar27) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_010b8798;
          }
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar11) {
            *plVar33 = lVar23;
            *(long *)(param_1 + 0x284) = lVar27 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        bVar11 = true;
LAB_010b8798:
        lVar23 = lVar30;
        lVar27 = *(long *)(param_1 + 0x288);
      } while (!bVar11);
      FUN_010b97c4(&local_c0,*(undefined8 *)(lVar13 + uVar25 * 0x18));
      plVar22 = local_c0;
      if (local_c0 == (long *)0x0) {
        bVar11 = true;
        plVar20 = local_c0;
      }
      else {
        if (*(short *)((long)local_c0 + 0x1a) != 0) {
          psVar6 = (short *)((long)local_c0 + 0x1a);
          sVar19 = *(short *)((long)local_c0 + 0x1a);
          do {
            sVar9 = *psVar6;
            if (sVar9 == sVar19) {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar6,0x10);
              if (bVar11) {
                *psVar6 = sVar19 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
              if (cVar10 != '\0') goto LAB_010b9238;
              bVar11 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_010b9238:
              bVar11 = false;
            }
            if (bVar11) {
              lVar21 = 0;
              if (local_c0[2] != 0) {
                lVar21 = local_c0[2] + -0x28;
              }
              goto LAB_010b9260;
            }
            sVar19 = sVar9;
          } while (sVar9 != 0);
        }
        lVar21 = 0;
LAB_010b9260:
        bVar11 = lVar21 == 0;
        plVar20 = (long *)0x0;
        if (!bVar11) {
          plVar20 = (long *)(lVar21 + 0x20);
        }
        plVar14 = local_c0 + 3;
        do {
          sVar19 = (short)*plVar14;
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar15) {
            *(short *)plVar14 = sVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar19 == 1) {
          piVar7 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar12 = *piVar7;
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar15) {
              *piVar7 = -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar21;
            local_80 = (long *)*plVar22;
            FUN_00c44438(lVar21 + 0x8040,&local_80);
          }
        }
        else if (sVar19 == 0) goto LAB_010b91dc;
      }
      lVar13 = lVar13 + uVar25 * 0x18;
      puVar1 = (undefined4 *)(lVar13 + 0xc);
      puVar3 = (undefined4 *)(lVar13 + 8);
      puVar5 = (undefined4 *)(lVar13 + 0x10);
      do {
        lVar13 = *plVar33;
        lVar21 = *(long *)(param_1 + 0x288);
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar15) {
          *plVar33 = lVar13;
          *(long *)(param_1 + 0x288) = lVar21;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      do {
        lVar23 = *plVar33;
        lVar27 = *(long *)(param_1 + 0x288);
        if (lVar23 != lVar13 || lVar27 != lVar21) {
          bVar15 = false;
          ClearExclusiveLocal();
          goto LAB_010b8810;
        }
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar15) {
          *plVar33 = lVar13;
          *(long *)(param_1 + 0x284) = lVar21 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar15 = true;
LAB_010b8810:
      if (!bVar15) {
        do {
          lVar13 = *plVar33;
          lVar21 = *(long *)(param_1 + 0x288);
          if (lVar13 != lVar23 || lVar21 != lVar27) {
            bVar15 = false;
            ClearExclusiveLocal();
            goto joined_r0x010b8b90;
          }
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar15) {
            *plVar33 = lVar23;
            *(long *)(param_1 + 0x284) = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        bVar15 = true;
joined_r0x010b8b90:
        if (!bVar15) {
          do {
            lVar23 = *plVar33;
            lVar27 = *(long *)(param_1 + 0x288);
            if (lVar23 != lVar13 || lVar27 != lVar21) {
              bVar15 = false;
              ClearExclusiveLocal();
              lVar13 = lVar23;
              lVar21 = lVar27;
              goto joined_r0x010b8b90;
            }
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar15) {
              *plVar33 = lVar13;
              *(long *)(param_1 + 0x284) = lVar21 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          bVar15 = true;
          lVar13 = lVar23;
          lVar21 = lVar27;
          goto joined_r0x010b8b90;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
      if (plVar20 != (long *)0x0) {
        lVar21 = *(long *)(param_1 + 0x158);
        plVar22 = (long *)(lVar21 + 0x30);
        local_80 = plVar20;
        lVar13 = nn::os::GetCurrentThread();
LAB_010b8844:
        if (*plVar22 == 0) goto code_r0x010b884c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x38));
        do {
          if (*plVar22 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x38));
              while (*plVar22 == 0) {
                cVar10 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar15) {
                  *plVar22 = lVar13;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_010b8854;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar15) {
            *plVar22 = lVar13;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_010b8854:
        lVar27 = *(long *)(lVar21 + 0x198);
        lVar30 = *(long *)(lVar21 + 0x1b8);
        lVar23 = *(long *)(lVar21 + 0x1d8);
        lVar13 = *(long *)(lVar21 + 0x1f8);
        if (lVar27 != 0) {
          if (((lVar30 == 0) && (lVar23 == 0)) && (lVar13 == 0)) {
            if (*(long *)(lVar27 + 0xb0) != 0) {
              uVar16 = 0;
              do {
                FUN_0220f0a4(lVar27,uVar16,&local_80,puVar3,puVar1,puVar5);
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(ulong *)(lVar27 + 0xb0));
            }
          }
          else if (*(long *)(lVar27 + 0xb0) != 0) {
            uVar16 = 0;
            do {
              FUN_010b9b04(lVar27,uVar16,&local_80,puVar3,puVar1,puVar5);
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ulong *)(lVar27 + 0xb0));
          }
        }
        if (lVar30 != 0) {
          lVar27 = *(long *)(lVar21 + 0x1b8);
          if ((lVar23 == 0) && (lVar13 == 0)) {
            if (*(long *)(lVar27 + 0xb0) != 0) {
              uVar16 = 0;
              do {
                FUN_0220f12c(lVar27,uVar16,&local_80,puVar3,puVar1,puVar5);
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(ulong *)(lVar27 + 0xb0));
            }
          }
          else if (*(long *)(lVar27 + 0xb0) != 0) {
            uVar16 = 0;
            do {
              FUN_010b9c50(lVar27,uVar16,&local_80,puVar3,puVar1,puVar5);
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ulong *)(lVar27 + 0xb0));
          }
        }
        plVar22 = local_80;
        if (lVar23 == 0) {
LAB_010b8874:
          if (lVar13 != 0) {
LAB_010b9574:
            FUN_010b9e54(*(undefined8 *)(lVar21 + 0x1f8),&local_80,puVar3,puVar1,puVar5);
          }
        }
        else {
          lVar23 = *(long *)(lVar21 + 0x1d8);
          if (lVar13 != 0) {
            FUN_0220f208(lVar23,&local_80,puVar3,puVar1,puVar5);
            goto LAB_010b9574;
          }
          uVar16 = *(ulong *)(lVar23 + 0x130);
          if (uVar16 != 0) {
            uVar31 = **(ulong **)(lVar23 + 0xf8);
            if ((uVar31 < *(ulong *)(lVar23 + 0xb0)) &&
               ((*(ulong *)(lVar23 + 0x48) <= uVar31 ||
                ((*(ulong *)(*(long *)(lVar23 + 0x40) + (uVar31 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar31 & 0x3f) & 1) == 0)))) {
              puVar28 = (undefined8 *)(*(long *)(lVar23 + 8) + uVar31 * 0x80);
              local_8c = *puVar5;
              local_88 = (long *)CONCAT44(local_88._4_4_,*puVar3);
              local_c0 = local_80;
              local_c8 = (long *)CONCAT44(local_c8._4_4_,*puVar1);
              (*(code *)*puVar28)(puVar28 + 4,&local_c0,&local_88,&local_c8,&local_8c);
              uVar16 = *(ulong *)(lVar23 + 0x130);
            }
            if (1 < uVar16) {
              uVar31 = *(ulong *)(*(long *)(lVar23 + 0xf8) + 0x10);
              if ((uVar31 < *(ulong *)(lVar23 + 0xb0)) &&
                 ((*(ulong *)(lVar23 + 0x48) <= uVar31 ||
                  ((*(ulong *)(*(long *)(lVar23 + 0x40) + (uVar31 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar31 & 0x3f) & 1) == 0)))) {
                puVar28 = (undefined8 *)(*(long *)(lVar23 + 8) + uVar31 * 0x80);
                local_8c = *puVar5;
                local_88 = (long *)CONCAT44(local_88._4_4_,*puVar3);
                local_c0 = plVar22;
                local_c8 = (long *)CONCAT44(local_c8._4_4_,*puVar1);
                (*(code *)*puVar28)(puVar28 + 4,&local_c0,&local_88,&local_c8,&local_8c);
                uVar16 = *(ulong *)(lVar23 + 0x130);
              }
              if (2 < uVar16) {
                local_118 = 2;
                local_110 = 0x20;
                do {
                  uVar31 = *(ulong *)(*(long *)(lVar23 + 0xf8) + local_110);
                  if ((uVar31 < *(ulong *)(lVar23 + 0xb0)) &&
                     ((*(ulong *)(lVar23 + 0x48) <= uVar31 ||
                      ((*(ulong *)(*(long *)(lVar23 + 0x40) + (uVar31 >> 3 & 0x1ffffffffffffff8)) >>
                        (uVar31 & 0x3f) & 1) == 0)))) {
                    puVar28 = (undefined8 *)(*(long *)(lVar23 + 8) + uVar31 * 0x80);
                    local_8c = *puVar5;
                    local_88 = (long *)CONCAT44(local_88._4_4_,*puVar3);
                    local_c0 = plVar22;
                    local_c8 = (long *)CONCAT44(local_c8._4_4_,*puVar1);
                    (*(code *)*puVar28)(puVar28 + 4,&local_c0,&local_88,&local_c8,&local_8c);
                    uVar16 = *(ulong *)(lVar23 + 0x130);
                  }
                  local_118 = local_118 + 1;
                  local_110 = local_110 + 0x10;
                } while (local_118 < uVar16);
              }
            }
            goto LAB_010b8874;
          }
        }
        plVar22 = (long *)(lVar21 + 0x48);
        lVar23 = *plVar22;
        lVar13 = nn::os::GetCurrentThread();
        if (lVar13 != lVar23) {
          lVar13 = nn::os::GetCurrentThread();
LAB_010b8898:
          if (*plVar22 == 0) goto code_r0x010b88a0;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x50));
          do {
            if (*plVar22 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x50));
                while (*plVar22 == 0) {
                  cVar10 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar15) {
                    *plVar22 = lVar13;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                  if (cVar10 == '\0') goto LAB_010b8938;
                }
              } while( true );
            }
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar15) {
              *plVar22 = lVar13;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
LAB_010b8938:
          bVar15 = false;
          goto LAB_010b8940;
        }
        plVar22 = (long *)0x0;
        bVar15 = true;
        goto LAB_010b8940;
      }
LAB_010b8a3c:
      if (!bVar11) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      lVar13 = *(long *)(param_1 + 0x188);
      uVar25 = uVar25 + 1;
    } while (uVar25 < (ulong)((*(long *)(param_1 + 400) - lVar13 >> 3) * -0x5555555555555555));
  }
  lVar21 = *plVar29;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 != lVar21) {
    lVar13 = nn::os::GetCurrentThread();
LAB_010b81f4:
    if (*plVar29 == 0) goto code_r0x010b81fc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x178));
    do {
      if (*plVar29 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x178));
          while (*plVar29 == 0) {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar11) {
              *plVar29 = lVar13;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_010b8204;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar13;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_010b8204:
    *(long *)(param_1 + 0x168) =
         (*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3) * -0x5555555555555555;
    *(undefined8 *)(param_1 + 0x170) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x178));
    goto LAB_010b8228;
  }
  *(long *)(param_1 + 0x168) =
       (*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3) * -0x5555555555555555;
LAB_010b8228:
  if (!bVar34) {
    *plVar32 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar32 + 1));
  }
  plVar29 = (long *)(param_1 + 0x1c0);
  lVar21 = *plVar29;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 == lVar21) {
    plVar29 = (long *)0x0;
    bVar34 = true;
LAB_010b8268:
    lVar13 = *(long *)(param_1 + 0x1d8);
    uVar16 = (*(long *)(param_1 + 0x1e0) - lVar13 >> 4) * -0x3333333333333333;
    uVar25 = *(ulong *)(param_1 + 0x1b8);
    if (uVar16 <= uVar25) {
LAB_010b828c:
      *(ulong *)(param_1 + 0x1b8) = uVar16;
      if (!bVar34) {
        *plVar29 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar29 + 1));
      }
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
      return;
    }
    plVar32 = (long *)(param_1 + 0x280);
    do {
      puVar1 = (undefined4 *)(lVar13 + uVar25 * 0x50 + 0x10);
      lVar21 = nn::os::GetCurrentThread();
      do {
        lVar23 = *plVar32;
        lVar27 = *(long *)(param_1 + 0x288);
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar11) {
          *plVar32 = lVar23;
          *(long *)(param_1 + 0x288) = lVar27;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      do {
        while ((lVar23 != 0 && (lVar21 != lVar23))) {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
          do {
            lVar23 = *plVar32;
            lVar27 = *(long *)(param_1 + 0x288);
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar11) {
              *plVar32 = lVar23;
              *(long *)(param_1 + 0x288) = lVar27;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        do {
          lVar30 = *plVar32;
          if (lVar30 != lVar23 || *(long *)(param_1 + 0x288) != lVar27) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_010b8448;
          }
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar11) {
            *plVar32 = lVar23;
            *(long *)(param_1 + 0x284) = lVar27 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        bVar11 = true;
LAB_010b8448:
        lVar23 = lVar30;
        lVar27 = *(long *)(param_1 + 0x288);
      } while (!bVar11);
      puVar26 = (undefined8 *)(lVar13 + uVar25 * 0x50);
      puVar28 = puVar26 + 8;
      FUN_010b97c4(&local_c0,*puVar26);
      plVar33 = local_c0;
      if (local_c0 == (long *)0x0) {
        plVar22 = (long *)0x0;
        bVar11 = true;
      }
      else {
        if (*(short *)((long)local_c0 + 0x1a) != 0) {
          psVar6 = (short *)((long)local_c0 + 0x1a);
          sVar19 = *(short *)((long)local_c0 + 0x1a);
          do {
            sVar9 = *psVar6;
            if (sVar9 == sVar19) {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar6,0x10);
              if (bVar11) {
                *psVar6 = sVar19 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
              if (cVar10 != '\0') goto LAB_010b917c;
              bVar11 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_010b917c:
              bVar11 = false;
            }
            if (bVar11) {
              lVar13 = 0;
              if (local_c0[2] != 0) {
                lVar13 = local_c0[2] + -0x28;
              }
              goto LAB_010b91a4;
            }
            sVar19 = sVar9;
          } while (sVar9 != 0);
        }
        lVar13 = 0;
LAB_010b91a4:
        bVar11 = lVar13 == 0;
        plVar22 = (long *)0x0;
        if (!bVar11) {
          plVar22 = (long *)(lVar13 + 0x20);
        }
        plVar20 = local_c0 + 3;
        do {
          sVar19 = (short)*plVar20;
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar15) {
            *(short *)plVar20 = sVar19 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar19 == 1) {
          piVar7 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar12 = *piVar7;
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar15) {
              *piVar7 = -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_80 = (long *)*plVar33;
            FUN_00c44438(lVar13 + 0x8040,&local_80);
          }
        }
        else if (sVar19 == 0) {
LAB_010b91dc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      puVar24 = puVar26 + 1;
      puVar2 = puVar26 + 6;
      puVar3 = (undefined4 *)((long)puVar26 + 0xc);
      puVar4 = puVar26 + 4;
      do {
        lVar13 = *plVar32;
        lVar21 = *(long *)(param_1 + 0x288);
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar15) {
          *plVar32 = lVar13;
          *(long *)(param_1 + 0x288) = lVar21;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      do {
        lVar23 = *plVar32;
        lVar27 = *(long *)(param_1 + 0x288);
        if (lVar23 != lVar13 || lVar27 != lVar21) {
          bVar15 = false;
          ClearExclusiveLocal();
          goto LAB_010b84d4;
        }
        cVar10 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar15) {
          *plVar32 = lVar13;
          *(long *)(param_1 + 0x284) = lVar21 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar15 = true;
LAB_010b84d4:
      if (!bVar15) {
        do {
          lVar13 = *plVar32;
          lVar21 = *(long *)(param_1 + 0x288);
          if (lVar13 != lVar23 || lVar21 != lVar27) {
            bVar15 = false;
            ClearExclusiveLocal();
            goto joined_r0x010b8adc;
          }
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar15) {
            *plVar32 = lVar23;
            *(long *)(param_1 + 0x284) = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        bVar15 = true;
joined_r0x010b8adc:
        if (!bVar15) {
          do {
            lVar23 = *plVar32;
            lVar27 = *(long *)(param_1 + 0x288);
            if (lVar23 != lVar13 || lVar27 != lVar21) {
              bVar15 = false;
              ClearExclusiveLocal();
              lVar13 = lVar23;
              lVar21 = lVar27;
              goto joined_r0x010b8adc;
            }
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar15) {
              *plVar32 = lVar13;
              *(long *)(param_1 + 0x284) = lVar21 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          bVar15 = true;
          lVar13 = lVar23;
          lVar21 = lVar27;
          goto joined_r0x010b8adc;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
      if (plVar22 != (long *)0x0) {
        lVar21 = *(long *)(param_1 + 0x160);
        plVar33 = (long *)(lVar21 + 0x30);
        local_c8 = plVar22;
        lVar13 = nn::os::GetCurrentThread();
LAB_010b8500:
        if (*plVar33 == 0) goto code_r0x010b8508;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x38));
        do {
          if (*plVar33 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x38));
              while (*plVar33 == 0) {
                cVar10 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar15) {
                  *plVar33 = lVar13;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_010b8510;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar15) {
            *plVar33 = lVar13;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_010b8510:
        lVar30 = *(long *)(lVar21 + 0x198);
        lVar23 = *(long *)(lVar21 + 0x1b8);
        lVar27 = *(long *)(lVar21 + 0x1d8);
        lVar13 = *(long *)(lVar21 + 0x1f8);
        if (lVar30 != 0) {
          if (((lVar23 == 0) && (lVar27 == 0)) && (lVar13 == 0)) {
            if (*(long *)(lVar30 + 0xb0) != 0) {
              uVar16 = 0;
              do {
                FUN_0220f29c(lVar30,uVar16,&local_c8,puVar24,puVar3,puVar1,puVar4,puVar2,puVar28);
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(ulong *)(lVar30 + 0xb0));
            }
          }
          else if (*(long *)(lVar30 + 0xb0) != 0) {
            uVar16 = 0;
            do {
              FUN_010b9aa4(lVar30,uVar16,&local_c8,puVar24,puVar3,puVar1,puVar4,puVar2,puVar28);
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ulong *)(lVar30 + 0xb0));
          }
        }
        if (lVar23 != 0) {
          lVar23 = *(long *)(lVar21 + 0x1b8);
          if ((lVar27 == 0) && (lVar13 == 0)) {
            if (*(long *)(lVar23 + 0xb0) != 0) {
              uVar16 = 0;
              do {
                FUN_0220f348(lVar23,uVar16,&local_c8,puVar24,puVar3,puVar1,puVar4,puVar2,puVar28);
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(ulong *)(lVar23 + 0xb0));
            }
          }
          else if (*(long *)(lVar23 + 0xb0) != 0) {
            uVar16 = 0;
            do {
              FUN_010b9b8c(lVar23,uVar16,&local_c8,puVar24,puVar3,puVar1,puVar4,puVar2,puVar28);
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ulong *)(lVar23 + 0xb0));
          }
        }
        plVar33 = local_c8;
        if (lVar27 == 0) {
LAB_010b8534:
          if (lVar13 != 0) {
LAB_010b95cc:
            FUN_010b9ee8(*(undefined8 *)(lVar21 + 0x1f8),&local_c8,puVar24,puVar3,puVar1,puVar4,
                         puVar2,puVar28);
          }
        }
        else {
          lVar23 = *(long *)(lVar21 + 0x1d8);
          if (lVar13 != 0) {
            FUN_0220f448(lVar23,&local_c8,puVar24,puVar3,puVar1,puVar4,puVar2,puVar28);
            goto LAB_010b95cc;
          }
          uVar16 = *(ulong *)(lVar23 + 0x130);
          if (uVar16 != 0) {
            lVar27 = 0;
            uVar31 = 0;
            do {
              uVar18 = *(ulong *)(*(long *)(lVar23 + 0xf8) + lVar27);
              if ((uVar18 < *(ulong *)(lVar23 + 0xb0)) &&
                 ((*(ulong *)(lVar23 + 0x48) <= uVar18 ||
                  ((*(ulong *)(*(long *)(lVar23 + 0x40) + (uVar18 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar18 & 0x3f) & 1) == 0)))) {
                local_90 = *puVar3;
                plStack_b8 = (long *)puVar26[5];
                local_c0 = (long *)*puVar4;
                uStack_94 = *puVar1;
                uStack_78 = puVar26[7];
                local_80 = (long *)*puVar2;
                puVar8 = (undefined8 *)(*(long *)(lVar23 + 8) + uVar18 * 0x80);
                local_8c = *(undefined4 *)puVar24;
                local_98 = *(undefined4 *)puVar28;
                local_88 = plVar33;
                (*(code *)*puVar8)(puVar8 + 4,&local_88,&local_8c,&local_90,&uStack_94,&local_c0,
                                   &local_80,&local_98);
                uVar16 = *(ulong *)(lVar23 + 0x130);
              }
              uVar31 = uVar31 + 1;
              lVar27 = lVar27 + 0x10;
            } while (uVar31 < uVar16);
            goto LAB_010b8534;
          }
        }
        plVar33 = (long *)(lVar21 + 0x48);
        lVar23 = *plVar33;
        lVar13 = nn::os::GetCurrentThread();
        if (lVar13 != lVar23) {
          lVar13 = nn::os::GetCurrentThread();
LAB_010b8558:
          if (*plVar33 == 0) goto code_r0x010b8560;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x50));
          do {
            if (*plVar33 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x50));
                while (*plVar33 == 0) {
                  cVar10 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar15) {
                    *plVar33 = lVar13;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                  if (cVar10 == '\0') goto LAB_010b85f8;
                }
              } while( true );
            }
            cVar10 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar15) {
              *plVar33 = lVar13;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
LAB_010b85f8:
          bVar15 = false;
          goto LAB_010b8600;
        }
        plVar33 = (long *)0x0;
        bVar15 = true;
        goto LAB_010b8600;
      }
LAB_010b86fc:
      if (!bVar11) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
      lVar13 = *(long *)(param_1 + 0x1d8);
      uVar16 = (*(long *)(param_1 + 0x1e0) - lVar13 >> 4) * -0x3333333333333333;
      uVar25 = uVar25 + 1;
      if (uVar16 <= uVar25) goto LAB_010b828c;
    } while( true );
  }
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar29 == 0) {
    cVar10 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar34) {
      *plVar29 = lVar13;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB_010b8264;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c8));
  do {
    if (*plVar29 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c8));
        while (*plVar29 == 0) {
          cVar10 = '\x01';
          bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar34) {
            *plVar29 = lVar13;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_010b8264;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar34) {
      *plVar29 = lVar13;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_010b8264:
  bVar34 = false;
  goto LAB_010b8268;
code_r0x010b81a8:
  cVar10 = '\x01';
  bVar34 = (bool)ExclusiveMonitorPass(plVar29,0x10);
  if (bVar34) {
    *plVar29 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_010b81b0;
  goto LAB_010b81a0;
code_r0x010b884c:
  cVar10 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar15) {
    *plVar22 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_010b8854;
  goto LAB_010b8844;
code_r0x010b88a0:
  cVar10 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar15) {
    *plVar22 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto code_r0x010b88a8;
  goto LAB_010b8898;
code_r0x010b88a8:
  bVar15 = false;
LAB_010b8940:
  plVar14 = (long *)(lVar21 + 0x60);
  puVar28 = (undefined8 *)*plVar14;
  puVar24 = *(undefined8 **)(lVar21 + 0x68);
  puVar26 = puVar28;
  if (puVar28 != puVar24) {
    do {
      (*(code *)*puVar28)(puVar28 + 4);
      puVar28 = puVar28 + 0x20;
    } while (puVar28 != puVar24);
    puVar28 = *(undefined8 **)(lVar21 + 0x60);
    puVar24 = *(undefined8 **)(lVar21 + 0x68);
    if (puVar24 == puVar28) {
      puVar28 = puVar24;
      puVar26 = puVar24;
    }
    else {
      puVar26 = puVar28;
      if (puVar28 != puVar24) {
        do {
          puVar26 = puVar24 + -0x20;
          pcVar17 = (code *)puVar24[-0x1f];
          if (pcVar17 != (code *)0x0) {
            puVar24[-0x1e] = 0;
            puVar24[-0x1d] = 0;
            puVar24[-0x20] = 0;
            puVar24[-0x1f] = 0;
            (*pcVar17)(puVar24 + -0x1c);
          }
          puVar24 = puVar26;
        } while (puVar28 != puVar26);
        puVar26 = (undefined8 *)*plVar14;
      }
      *(undefined8 **)(lVar21 + 0x68) = puVar28;
    }
  }
  lVar13 = (long)puVar28 - (long)puVar26;
  if ((ulong)(lVar13 >> 8) < (ulong)(*(long *)(lVar21 + 0x70) - (long)puVar26 >> 8)) {
    puVar28 = (undefined8 *)(lVar21 + 0x78);
    local_a8 = (long *)0x0;
    puStack_a0 = puVar28;
    if (lVar13 == 0) {
      local_100 = (long *)0x0;
    }
    else {
      local_100 = (long *)(**(code **)(*(long *)*puVar28 + 0x10))((long *)*puVar28,lVar13,0x10);
      if (local_100 == (long *)0x0) {
        (**(code **)(*(long *)*puVar28 + 0xe8))();
      }
    }
    plStack_b8 = local_100 + (lVar13 >> 8) * 0x20;
    local_c0 = local_100;
    local_b0 = plStack_b8;
    local_a8 = plStack_b8;
    FUN_0103b38c(plVar14,&local_c0);
    FUN_0103bbd0(&local_c0);
  }
  if (!bVar15) {
    *plVar22 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar22 + 1));
  }
  plVar22 = (long *)(lVar21 + 0x98);
  lVar23 = *plVar22;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 == lVar23) {
    plVar22 = (long *)0x0;
    bVar15 = true;
  }
  else {
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar22 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xa0));
        do {
          if (*plVar22 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xa0));
              while (*plVar22 == 0) {
                cVar10 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar15) {
                  *plVar22 = lVar13;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_010b89fc;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar15) {
            *plVar22 = lVar13;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_010b89fc:
        bVar15 = false;
        goto LAB_010b8a04;
      }
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar15) {
        *plVar22 = lVar13;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar15 = false;
  }
LAB_010b8a04:
  local_f0 = *(long *)(lVar21 + 0xb8) - (long)*(undefined8 **)(lVar21 + 0xb0);
  if (local_f0 != 0) {
    local_f0 = local_f0 >> 3;
    puVar28 = *(undefined8 **)(lVar21 + 0xb0);
    do {
      FUN_01284f38(lVar21,*puVar28);
      local_f0 = local_f0 + -1;
      puVar28 = puVar28 + 1;
    } while (local_f0 != 0);
    if (*(long *)(lVar21 + 0xb8) != *(long *)(lVar21 + 0xb0)) {
      *(long *)(lVar21 + 0xb8) = *(long *)(lVar21 + 0xb0);
    }
  }
  if (!bVar15) {
    *plVar22 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar22 + 1));
  }
  *(undefined8 *)(lVar21 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x38));
  goto LAB_010b8a3c;
code_r0x010b81fc:
  cVar10 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
  if (bVar11) {
    *plVar29 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_010b8204;
  goto LAB_010b81f4;
code_r0x010b8508:
  cVar10 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
  if (bVar15) {
    *plVar33 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_010b8510;
  goto LAB_010b8500;
code_r0x010b8560:
  cVar10 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
  if (bVar15) {
    *plVar33 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto code_r0x010b8568;
  goto LAB_010b8558;
code_r0x010b8568:
  bVar15 = false;
LAB_010b8600:
  plVar20 = (long *)(lVar21 + 0x60);
  puVar28 = (undefined8 *)*plVar20;
  puVar24 = *(undefined8 **)(lVar21 + 0x68);
  puVar26 = puVar28;
  if (puVar28 != puVar24) {
    do {
      (*(code *)*puVar28)(puVar28 + 4);
      puVar28 = puVar28 + 0x20;
    } while (puVar28 != puVar24);
    puVar26 = *(undefined8 **)(lVar21 + 0x60);
    puVar24 = *(undefined8 **)(lVar21 + 0x68);
    if (puVar24 == puVar26) {
      puVar28 = puVar24;
      puVar26 = puVar24;
    }
    else {
      puVar28 = puVar26;
      if (puVar26 != puVar24) {
        do {
          pcVar17 = (code *)puVar24[-0x1f];
          puVar28 = puVar24 + -0x20;
          if (pcVar17 != (code *)0x0) {
            puVar24[-0x1e] = 0;
            puVar24[-0x1d] = 0;
            puVar24[-0x20] = 0;
            puVar24[-0x1f] = 0;
            (*pcVar17)(puVar24 + -0x1c);
          }
          puVar24 = puVar28;
        } while (puVar26 != puVar28);
        puVar28 = (undefined8 *)*plVar20;
      }
      *(undefined8 **)(lVar21 + 0x68) = puVar26;
    }
  }
  lVar13 = (long)puVar26 - (long)puVar28;
  if ((ulong)(lVar13 >> 8) < (ulong)(*(long *)(lVar21 + 0x70) - (long)puVar28 >> 8)) {
    puVar28 = (undefined8 *)(lVar21 + 0x78);
    local_a8 = (long *)0x0;
    puStack_a0 = puVar28;
    if (lVar13 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*(long *)*puVar28 + 0x10))((long *)*puVar28,lVar13,0x10);
      if (plVar14 == (long *)0x0) {
        (**(code **)(*(long *)*puVar28 + 0xe8))();
      }
    }
    plStack_b8 = plVar14 + (lVar13 >> 8) * 0x20;
    local_c0 = plVar14;
    local_b0 = plStack_b8;
    local_a8 = plStack_b8;
    FUN_0103b38c(plVar20,&local_c0);
    FUN_0103bbd0(&local_c0);
  }
  if (!bVar15) {
    *plVar33 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar33 + 1));
  }
  plVar33 = (long *)(lVar21 + 0x98);
  lVar23 = *plVar33;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 == lVar23) {
    plVar33 = (long *)0x0;
    bVar15 = true;
  }
  else {
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar33 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xa0));
        do {
          if (*plVar33 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xa0));
              while (*plVar33 == 0) {
                cVar10 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar15) {
                  *plVar33 = lVar13;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_010b86c0;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar15) {
            *plVar33 = lVar13;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_010b86c0:
        bVar15 = false;
        goto LAB_010b86c8;
      }
      cVar10 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar15) {
        *plVar33 = lVar13;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar15 = false;
  }
LAB_010b86c8:
  lVar13 = *(long *)(lVar21 + 0xb8) - (long)*(undefined8 **)(lVar21 + 0xb0);
  if (lVar13 != 0) {
    lVar13 = lVar13 >> 3;
    puVar28 = *(undefined8 **)(lVar21 + 0xb0);
    do {
      FUN_015ef3ac(lVar21,*puVar28);
      lVar13 = lVar13 + -1;
      puVar28 = puVar28 + 1;
    } while (lVar13 != 0);
    if (*(long *)(lVar21 + 0xb8) != *(long *)(lVar21 + 0xb0)) {
      *(long *)(lVar21 + 0xb8) = *(long *)(lVar21 + 0xb0);
    }
  }
  if (!bVar15) {
    *plVar33 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar33 + 1));
  }
  *(undefined8 *)(lVar21 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x38));
  goto LAB_010b86fc;
}


