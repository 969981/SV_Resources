/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dfa020; name: FUN_00dfa020
 */


void FUN_00dfa020(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  size_t sVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  void *pvVar17;
  void *pvVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  bool bVar23;
  ulong uVar24;
  void *pvVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  void *pvVar30;
  int iVar31;
  ulong local_c8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 *local_68;
  
  if (-1 < *(int *)(param_2 + 0x468)) {
    plVar11 = (long *)(param_1 + 0x138);
    lVar28 = *plVar11;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 == lVar28) {
      bVar23 = true;
    }
    else {
      lVar10 = nn::os::GetCurrentThread();
      do {
        if (*plVar11 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
            while (*plVar11 == 0) {
              cVar4 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar23) {
                *plVar11 = lVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00dfa080;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar23) {
          *plVar11 = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00dfa080:
      bVar23 = false;
    }
    lVar10 = *(long *)(param_2 + 0x460);
    if (((lVar10 != 0) && (lVar10 != param_1)) && (-1 < *(int *)(param_2 + 0x468))) {
      FUN_00e60f40(lVar10,param_2);
    }
    if (!bVar23) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
    }
  }
  plVar11 = (long *)(param_1 + 0x138);
  lVar28 = *plVar11;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar28) {
    bVar23 = true;
  }
  else {
    lVar10 = nn::os::GetCurrentThread();
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
          while (*plVar11 == 0) {
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar23) {
              *plVar11 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00dfa0ec;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar23) {
        *plVar11 = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00dfa0ec:
    bVar23 = false;
  }
  plVar11 = (long *)(param_1 + 0x220);
  lVar10 = nn::os::GetCurrentThread();
  do {
    if (*plVar11 != 0 || *(long *)(param_1 + 0x228) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x230));
        while (*plVar11 == 0 && *(long *)(param_1 + 0x228) == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar8) {
            *plVar11 = lVar10;
            *(undefined8 *)(param_1 + 0x228) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00dfa118;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar10;
      *(undefined8 *)(param_1 + 0x228) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00dfa118:
  if (*(long *)(param_1 + 0x1a8) == 0) {
    iVar31 = *(int *)(param_1 + 0x154);
    *(int *)(param_1 + 0x154) = iVar31 + 1;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x1a8) + -1;
    uVar24 = *(long *)(param_1 + 0x1a0) + lVar10;
    iVar31 = *(int *)(*(long *)(*(long *)(param_1 + 0x168) + (uVar24 >> 7 & 0x1fffffffffffff8)) +
                     (uVar24 & 0x3ff) * 4);
    *(long *)(param_1 + 0x1a8) = lVar10;
    lVar28 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168);
    lVar10 = 0;
    if (lVar28 != 0) {
      lVar10 = lVar28 * 0x80 + -1;
    }
    if (0x7ff < lVar10 - uVar24) {
      plVar19 = *(long **)(param_1 + 0x1b0);
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x170) + -8);
      uVar24 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar24 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,uVar12,0x1000,4);
      }
      else {
        FUN_00c48fe8(plVar19,uVar12,0x1000,4);
      }
      *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + -8;
    }
  }
  uVar24 = (long)iVar31 - (long)*(int *)(param_1 + 0x150);
  if (*(ulong *)(param_1 + 0x210) <= uVar24) {
    uVar29 = (ulong)((int)uVar24 + 1);
    uVar13 = uVar29 & 0x3f;
    local_88 = (long *)0x0;
    uVar15 = uVar29 >> 6;
    if (uVar13 != 0) {
      uVar15 = uVar15 + 1;
    }
    uVar1 = *(long *)(param_1 + 0x1e0) - *(long *)(param_1 + 0x1d8) >> 3;
    if (uVar15 != uVar1) {
      if (uVar15 < uVar1 || uVar15 - uVar1 == 0) {
        if (uVar15 < uVar1) {
          *(ulong *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1d8) + uVar15 * 8;
        }
      }
      else {
        FUN_00d1aa80(param_1 + 0x1d8,uVar15 - uVar1,&local_88);
      }
    }
    *(ulong *)(param_1 + 0x210) = uVar29;
    if (uVar13 != 0) {
      *(ulong *)(*(long *)(param_1 + 0x1e0) + -8) =
           *(ulong *)(*(long *)(param_1 + 0x1e0) + -8) & (-1L << uVar13 ^ 0xffffffffffffffffU);
    }
  }
  uVar13 = uVar24 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(param_1 + 0x1d8) + uVar13) =
       *(ulong *)(*(long *)(param_1 + 0x1d8) + uVar13) | 1L << (uVar24 & 0x3f);
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  do {
    lVar10 = *plVar11;
    lVar28 = *(long *)(param_1 + 0x228);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar10;
      *(long *)(param_1 + 0x228) = lVar28;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar21 = *plVar11;
    lVar14 = *(long *)(param_1 + 0x228);
    if (lVar21 != lVar10 || lVar14 != lVar28) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x00dfa26c;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = 0;
      *(long *)(param_1 + 0x224) = lVar28;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
joined_r0x00dfa26c:
  if (!bVar8) {
    do {
      lVar10 = *plVar11;
      lVar28 = *(long *)(param_1 + 0x228);
      if (lVar10 != lVar21 || lVar28 != lVar14) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar21 = lVar10;
        lVar14 = lVar28;
        goto joined_r0x00dfa26c;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = 0;
        *(long *)(param_1 + 0x224) = lVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
    lVar21 = lVar10;
    lVar14 = lVar28;
    goto joined_r0x00dfa26c;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x230));
  uVar24 = *(ulong *)(param_1 + 0x288);
  if (uVar24 <= (ulong)(long)iVar31) {
    iVar9 = iVar31 + 1;
    lVar10 = param_1 + 0x240;
    uVar13 = (ulong)iVar9;
    if (uVar24 < (ulong)(long)iVar9) {
      uVar13 = uVar13 - uVar24;
      puVar16 = *(undefined8 **)(param_1 + 0x250);
      puVar20 = *(undefined8 **)(param_1 + 0x248);
      lVar28 = (long)puVar16 - (long)puVar20;
      uVar15 = *(ulong *)(param_1 + 0x280);
      lVar21 = 0;
      if (lVar28 != 0) {
        lVar21 = lVar28 * 4 + -1;
      }
      uVar29 = uVar24 + uVar15;
      uVar1 = uVar13 - (lVar21 - uVar29);
      if (lVar21 - uVar29 <= uVar13 && uVar1 != 0) {
        if (puVar16 == puVar20) {
          uVar1 = uVar1 + 1;
        }
        uVar24 = uVar1 >> 5;
        if ((uVar1 & 0x1f) != 0) {
          uVar24 = uVar24 + 1;
        }
        local_c8 = uVar24;
        if (uVar15 >> 5 <= uVar24) {
          local_c8 = uVar15 >> 5;
        }
        uVar24 = uVar24 - local_c8;
        if (uVar24 == 0) {
          *(ulong *)(param_1 + 0x280) = uVar15 + local_c8 * -0x20;
          if (local_c8 != 0) {
            local_88 = (long *)*puVar20;
            *(undefined8 **)(param_1 + 0x248) = puVar20 + 1;
            FUN_028f5d74(lVar10,&local_88);
            if (local_c8 != 1) {
              lVar28 = -local_c8;
              do {
                lVar28 = lVar28 + 1;
                local_88 = (long *)**(undefined8 **)(param_1 + 0x248);
                *(undefined8 **)(param_1 + 0x248) = *(undefined8 **)(param_1 + 0x248) + 1;
                FUN_028f5d74(lVar10,&local_88);
              } while (lVar28 != -1);
            }
          }
        }
        else {
          lVar21 = (long)*(undefined8 **)(param_1 + 600) - *(long *)(param_1 + 0x240);
          lVar28 = lVar28 >> 3;
          if ((ulong)((lVar21 >> 3) - lVar28) < uVar24) {
            uVar29 = lVar21 >> 2;
            uVar15 = uVar24 + lVar28;
            if (uVar24 + lVar28 <= uVar29) {
              uVar15 = uVar29;
            }
            puVar16 = (undefined8 *)(param_1 + 0x260);
            local_98 = (long *)0x0;
            local_90 = puVar16;
            if (uVar15 == 0) {
              local_b0 = (long *)0x0;
            }
            else {
              local_b0 = (long *)(**(code **)(*(long *)*puVar16 + 0x10))
                                           ((long *)*puVar16,uVar15 << 3,8);
              if (local_b0 == (long *)0x0) {
                (**(code **)(*(long *)*puVar16 + 0xe8))();
              }
            }
            local_a8 = local_b0 + (lVar28 - local_c8);
            local_98 = local_b0 + uVar15;
            local_a0 = local_a8;
            do {
              plVar11 = local_a0;
              lVar10 = (**(code **)(**(long **)(param_1 + 0x290) + 0x10))
                                 (*(long **)(param_1 + 0x290),0x1000,8);
              if (lVar10 == 0) {
                (**(code **)(**(long **)(param_1 + 0x290) + 0xe8))();
              }
              puVar16 = local_90;
              plVar6 = local_98;
              plVar26 = local_a8;
              plVar22 = local_b0;
              plVar19 = plVar11;
              if (plVar11 == local_98) {
                if (local_a8 < local_b0 || (long)local_a8 - (long)local_b0 == 0) {
                  lVar28 = (long)local_98 - (long)local_b0;
                  uVar15 = lVar28 >> 2;
                  if (lVar28 == 0) {
                    uVar15 = 1;
                  }
                  local_70 = (long *)0x0;
                  local_68 = local_90;
                  plVar19 = (long *)(**(code **)(*(long *)*local_90 + 0x10))
                                              ((long *)*local_90,uVar15 << 3,8);
                  if (plVar19 == (long *)0x0) {
                    (**(code **)(*(long *)*puVar16 + 0xe8))();
                  }
                  local_80 = plVar19 + (uVar15 >> 2);
                  local_70 = plVar19 + uVar15;
                  local_88 = plVar19;
                  local_78 = local_80;
                  FUN_028f5ff0(&local_88,plVar26,plVar11);
                  local_98 = local_70;
                  plVar19 = local_78;
                  local_a8 = local_80;
                  local_b0 = local_88;
                  local_88 = plVar22;
                  local_80 = plVar26;
                  local_70 = plVar6;
                  local_a0 = local_78;
                  local_78 = plVar11;
                  if (plVar26 != plVar11) {
                    local_78 = plVar11 + ((ulong)((long)plVar11 + (-8 - (long)plVar26)) >> 3 ^
                                         0xffffffffffffffff);
                  }
                  if (plVar22 != (long *)0x0) {
                    plVar11 = (long *)*local_68;
                    uVar15 = (**(code **)(*plVar11 + 0xf8))(plVar11);
                    if (((uVar15 & 1) == 0) ||
                       (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
                      (**(code **)(*plVar11 + 0x18))(plVar11,plVar22,lVar28,8);
                    }
                    else {
                      FUN_00c48fe8(plVar11,plVar22,lVar28,8);
                    }
                  }
                }
                else {
                  lVar28 = (long)local_a8 - (long)local_b0 >> 3;
                  uVar15 = lVar28 + 2;
                  if (-1 < lVar28 + 1) {
                    uVar15 = lVar28 + 1;
                  }
                  plVar11 = (long *)((long)local_a8 + (uVar15 & 0x3ffffffffffffffe) * -4);
                  sVar5 = (long)local_98 - (long)local_a8;
                  if (sVar5 != 0) {
                    memmove(plVar11,local_a8,sVar5);
                  }
                  plVar19 = (long *)((long)plVar11 + sVar5);
                  local_a8 = plVar11;
                  local_a0 = plVar19;
                }
              }
              uVar12 = *local_90;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar28 == 0) {
                *plVar19 = lVar10;
              }
              else {
                if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_00dfb3b0;
                *(undefined8 *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = uVar12;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                *plVar19 = lVar10;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              }
              local_a0 = local_a0 + 1;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
            plVar11 = *(long **)(param_1 + 0x248);
            if (local_c8 != 0) {
              lVar10 = -local_c8;
              do {
                FUN_028f63a8(&local_b0,plVar11);
                plVar11 = (long *)(*(long *)(param_1 + 0x248) + 8);
                bVar8 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                *(long **)(param_1 + 0x248) = plVar11;
              } while (bVar8);
            }
            plVar19 = *(long **)(param_1 + 0x250);
            if (plVar19 == plVar11) {
              plVar19 = plVar11;
            }
            else {
              do {
                puVar16 = local_90;
                plVar6 = local_98;
                plVar11 = local_a0;
                plVar26 = local_a8;
                plVar22 = local_b0;
                plVar27 = local_a8;
                plVar7 = local_a8;
                if (local_a8 == local_b0) {
                  if (local_a0 < local_98) {
                    lVar10 = (long)local_98 - (long)local_a0 >> 3;
                    uVar24 = lVar10 + 2;
                    if (-1 < lVar10 + 1) {
                      uVar24 = lVar10 + 1;
                    }
                    sVar5 = (long)local_a0 - (long)local_b0;
                    plVar11 = (long *)((long)local_a0 + (uVar24 & 0x3ffffffffffffffe) * 4);
                    plVar27 = plVar11;
                    plVar7 = plVar11;
                    if (sVar5 != 0) {
                      plVar27 = (long *)((long)plVar11 - sVar5);
                      memmove(plVar27,local_a8,sVar5);
                      plVar7 = plVar27;
                    }
                  }
                  else {
                    lVar28 = (long)local_98 - (long)local_b0;
                    lVar10 = lVar28 >> 2;
                    if (lVar28 == 0) {
                      lVar10 = 1;
                    }
                    local_70 = (long *)0x0;
                    local_68 = local_90;
                    plVar27 = (long *)(**(code **)(*(long *)*local_90 + 0x10))
                                                ((long *)*local_90,lVar10 << 3,8);
                    if (plVar27 == (long *)0x0) {
                      (**(code **)(*(long *)*puVar16 + 0xe8))();
                    }
                    local_80 = plVar27 + (lVar10 + 3U >> 2);
                    local_70 = plVar27 + lVar10;
                    local_88 = plVar27;
                    local_78 = local_80;
                    FUN_028f5ff0(&local_88,plVar26,plVar11);
                    local_98 = local_70;
                    local_a0 = local_78;
                    plVar27 = local_80;
                    local_b0 = local_88;
                    local_88 = plVar22;
                    local_a8 = local_80;
                    local_78 = plVar11;
                    local_70 = plVar6;
                    if ((long)plVar11 - (long)plVar26 != 0) {
                      local_78 = plVar11 + (((long)plVar11 - (long)plVar26) - 8U >> 3 ^
                                           0xffffffffffffffff);
                    }
                    plVar7 = local_a8;
                    plVar11 = local_a0;
                    local_80 = plVar26;
                    if (plVar26 != (long *)0x0) {
                      plVar11 = (long *)*local_68;
                      uVar24 = (**(code **)(*plVar11 + 0xf8))(plVar11);
                      if (((uVar24 & 1) == 0) ||
                         (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                        (**(code **)(*plVar11 + 0x18))(plVar11,plVar26,lVar28,8);
                        plVar7 = local_a8;
                        plVar11 = local_a0;
                      }
                      else {
                        FUN_00c48fe8(plVar11,plVar26,lVar28,8);
                        plVar7 = local_a8;
                        plVar11 = local_a0;
                      }
                    }
                  }
                }
                local_a0 = plVar11;
                local_a8 = plVar7;
                uVar12 = *local_90;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar10 == 0) {
                  plVar27[-1] = plVar19[-1];
                }
                else {
                  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00dfb3b0;
                  *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                  plVar27[-1] = plVar19[-1];
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                }
                local_a8 = local_a8 + -1;
                plVar19 = plVar19 + -1;
              } while (plVar19 != *(long **)(param_1 + 0x248));
              plVar11 = *(long **)(param_1 + 0x250);
            }
            plVar26 = *(long **)(param_1 + 0x240);
            *(long **)(param_1 + 0x240) = local_b0;
            *(long **)(param_1 + 0x248) = local_a8;
            *(long **)(param_1 + 0x250) = local_a0;
            plVar22 = *(long **)(param_1 + 600);
            *(long **)(param_1 + 600) = local_98;
            *(ulong *)(param_1 + 0x280) = *(long *)(param_1 + 0x280) + local_c8 * -0x20;
            local_a0 = plVar11;
            if (plVar19 != plVar11) {
              local_a0 = plVar11 + ((ulong)((long)plVar11 + (-8 - (long)plVar19)) >> 3 ^
                                   0xffffffffffffffff);
            }
            local_b0 = plVar26;
            local_a8 = plVar19;
            local_98 = plVar22;
            if (plVar26 != (long *)0x0) {
              plVar11 = (long *)*local_90;
              uVar24 = (**(code **)(*plVar11 + 0xf8))(plVar11);
              if (((uVar24 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                (**(code **)(*plVar11 + 0x18))(plVar11,plVar26,(long)plVar22 - (long)plVar26,8);
              }
              else {
                FUN_00c48fe8(plVar11,plVar26,(long)plVar22 - (long)plVar26,8);
              }
            }
          }
          else {
            if (*(undefined8 **)(param_1 + 600) != puVar16) {
              puVar16 = (undefined8 *)(param_1 + 0x260);
              do {
                lVar28 = (**(code **)(**(long **)(param_1 + 0x290) + 0x10))
                                   (*(long **)(param_1 + 0x290),0x1000,8);
                if (lVar28 == 0) {
                  (**(code **)(**(long **)(param_1 + 0x290) + 0xe8))();
                }
                plVar11 = *(long **)(param_1 + 0x250);
                if (plVar11 == *(long **)(param_1 + 600)) {
                  pvVar25 = *(void **)(param_1 + 0x248);
                  pvVar18 = *(void **)(param_1 + 0x240);
                  if (pvVar25 < pvVar18 || (long)pvVar25 - (long)pvVar18 == 0) {
                    local_70 = (long *)0x0;
                    lVar21 = (long)*(long **)(param_1 + 600) - (long)pvVar18;
                    uVar15 = lVar21 >> 2;
                    if (lVar21 == 0) {
                      uVar15 = 1;
                    }
                    local_68 = puVar16;
                    plVar11 = (long *)(**(code **)(*(long *)*puVar16 + 0x10))
                                                ((long *)*puVar16,uVar15 << 3,8);
                    if (plVar11 == (long *)0x0) {
                      (**(code **)(*(long *)*puVar16 + 0xe8))();
                    }
                    local_80 = plVar11 + (uVar15 >> 2);
                    local_70 = plVar11 + uVar15;
                    local_88 = plVar11;
                    local_78 = local_80;
                    FUN_028f5ff0(&local_88,*(undefined8 *)(param_1 + 0x248),
                                 *(undefined8 *)(param_1 + 0x250));
                    plVar26 = *(long **)(param_1 + 0x240);
                    *(long **)(param_1 + 0x240) = local_88;
                    plVar22 = *(long **)(param_1 + 0x248);
                    *(long **)(param_1 + 0x248) = local_80;
                    plVar19 = *(long **)(param_1 + 0x250);
                    *(long **)(param_1 + 0x250) = local_78;
                    plVar11 = *(long **)(param_1 + 600);
                    *(long **)(param_1 + 600) = local_70;
                    local_78 = plVar19;
                    if ((long)plVar19 - (long)plVar22 != 0) {
                      local_78 = plVar19 + (((long)plVar19 - (long)plVar22) - 8U >> 3 ^
                                           0xffffffffffffffff);
                    }
                    local_88 = plVar26;
                    local_80 = plVar22;
                    local_70 = plVar11;
                    if (plVar26 != (long *)0x0) {
                      plVar19 = (long *)*local_68;
                      uVar15 = (**(code **)(*plVar19 + 0xf8))();
                      if (((uVar15 & 1) == 0) ||
                         (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
                        (**(code **)(*plVar19 + 0x18))
                                  (plVar19,plVar26,(long)plVar11 - (long)plVar26,8);
                      }
                      else {
                        FUN_00c48fe8(plVar19,plVar26,(long)plVar11 - (long)plVar26,8);
                      }
                    }
                    plVar11 = *(long **)(param_1 + 0x250);
                  }
                  else {
                    lVar14 = (long)pvVar25 - (long)pvVar18 >> 3;
                    lVar21 = lVar14 + 2;
                    if (-1 < lVar14 + 1) {
                      lVar21 = lVar14 + 1;
                    }
                    sVar5 = (long)plVar11 - (long)pvVar25;
                    pvVar18 = (void *)((long)pvVar25 + (lVar21 >> 1) * -8);
                    if (sVar5 != 0) {
                      memmove(pvVar18,pvVar25,sVar5);
                      pvVar25 = *(void **)(param_1 + 0x248);
                    }
                    plVar11 = (long *)((long)pvVar18 + sVar5);
                    *(long **)(param_1 + 0x250) = plVar11;
                    *(void **)(param_1 + 0x248) = (void *)((long)pvVar25 + (lVar21 >> 1) * -8);
                  }
                }
                uVar12 = *puVar16;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar21 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar21 == 0) {
                  *plVar11 = lVar28;
                }
                else {
                  if (0xf < *(ulong *)(lVar21 + 0x80)) {
LAB_00dfb3b0:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar12;
                  *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
                  *plVar11 = lVar28;
                  *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
                }
                lVar28 = *(long *)(param_1 + 0x250) + 8;
                uVar24 = uVar24 - 1;
                *(long *)(param_1 + 0x250) = lVar28;
                if (uVar24 == 0) {
                  lVar28 = *(long *)(param_1 + 0x280);
                  goto LAB_00dfa960;
                }
              } while (*(long *)(param_1 + 600) != lVar28);
            }
            uVar15 = uVar24;
            do {
              plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x290) + 0x10))
                                          (*(long **)(param_1 + 0x290),0x1000,8);
              if (plVar11 == (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0x290) + 0xe8))();
              }
              local_88 = plVar11;
              FUN_028f611c(lVar10,&local_88);
              uVar15 = uVar15 - 1;
              lVar28 = 0x1f;
              if (*(long *)(param_1 + 0x250) - *(long *)(param_1 + 0x248) != 8) {
                lVar28 = 0x20;
              }
              lVar28 = lVar28 + *(long *)(param_1 + 0x280);
              *(long *)(param_1 + 0x280) = lVar28;
            } while (uVar15 != 0);
            local_c8 = uVar24 + local_c8;
LAB_00dfa960:
            *(ulong *)(param_1 + 0x280) = lVar28 + local_c8 * -0x20;
            while( true ) {
              if (local_c8 == 0) break;
              local_88 = (long *)**(undefined8 **)(param_1 + 0x248);
              *(undefined8 **)(param_1 + 0x248) = *(undefined8 **)(param_1 + 0x248) + 1;
              FUN_028f5d74(lVar10,&local_88);
              local_c8 = local_c8 - 1;
            }
          }
        }
        uVar24 = *(ulong *)(param_1 + 0x288);
        uVar29 = *(long *)(param_1 + 0x280) + uVar24;
        puVar20 = *(undefined8 **)(param_1 + 0x248);
        puVar16 = *(undefined8 **)(param_1 + 0x250);
      }
      plVar11 = (long *)((long)puVar20 + (uVar29 >> 2 & 0x3ffffffffffffff8));
      if (puVar16 == puVar20) {
        pvVar25 = (void *)0x0;
      }
      else {
        pvVar25 = (void *)(*plVar11 + (uVar29 & 0x1f) * 0x80);
      }
      plVar19 = plVar11;
      pvVar18 = pvVar25;
      if (uVar13 != 0) {
        uVar13 = uVar13 + ((long)pvVar25 - *plVar11 >> 7);
        if ((long)uVar13 < 1) {
          uVar15 = 0x1f - uVar13;
          uVar13 = 0x3e - uVar13;
          if (-1 < (long)uVar15) {
            uVar13 = uVar15;
          }
          plVar19 = plVar11 + -((long)uVar13 >> 5);
          pvVar18 = (void *)(*plVar19 + ((uVar13 & 0x1ffffffffffffe0) - uVar15) * 0x80 + 0xf80);
        }
        else {
          plVar19 = (long *)((long)plVar11 + (uVar13 >> 2 & 0x3ffffffffffffff8));
          pvVar18 = (void *)(*plVar19 + (uVar13 & 0x1f) * 0x80);
        }
      }
      while (pvVar25 != pvVar18) {
        pvVar30 = pvVar18;
        if (plVar11 != plVar19) {
          pvVar30 = (void *)(*plVar11 + 0x1000);
        }
        pvVar17 = pvVar25;
        if (pvVar30 != pvVar25) {
          do {
            uVar12 = *(undefined8 *)(param_1 + 0x290);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar10 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar10 == 0) {
              memset(pvVar17,0,0x80);
              FUN_012c5e38((long)pvVar17 + 0x10);
              *(undefined8 *)((long)pvVar17 + 0x38) = 0;
              *(undefined8 *)((long)pvVar17 + 0x40) = 0;
              FUN_012c5e38((long)pvVar17 + 0x48);
            }
            else {
              if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00dfb3b0;
              *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
              memset(pvVar17,0,0x80);
              FUN_012c5e38((long)pvVar17 + 0x10);
              *(undefined8 *)((long)pvVar17 + 0x38) = 0;
              *(undefined8 *)((long)pvVar17 + 0x40) = 0;
              FUN_012c5e38((long)pvVar17 + 0x48);
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            }
            pvVar17 = (void *)((long)pvVar17 + 0x80);
          } while (pvVar30 != pvVar17);
          uVar24 = *(ulong *)(param_1 + 0x288);
          pvVar17 = pvVar30;
        }
        uVar24 = uVar24 + ((long)pvVar17 - (long)pvVar25 >> 7);
        *(ulong *)(param_1 + 0x288) = uVar24;
        if (plVar11 == plVar19) break;
        plVar11 = plVar11 + 1;
        pvVar25 = (void *)*plVar11;
      }
    }
    else if (uVar13 < uVar24) {
      plVar11 = (long *)(*(long *)(param_1 + 0x248) +
                        (*(ulong *)(param_1 + 0x280) >> 2 & 0x3ffffffffffffff8));
      if (*(long *)(param_1 + 0x250) == *(long *)(param_1 + 0x248)) {
        lVar28 = 0;
      }
      else {
        lVar28 = *plVar11 + (*(ulong *)(param_1 + 0x280) & 0x1f) * 0x80;
      }
      if (iVar9 != 0) {
        uVar13 = uVar13 + (lVar28 - *plVar11 >> 7);
        if ((long)uVar13 < 1) {
          uVar15 = 0x1f - uVar13;
          uVar24 = 0x3e - uVar13;
          if (-1 < (long)uVar15) {
            uVar24 = uVar15;
          }
          plVar11 = plVar11 + -((long)uVar24 >> 5);
          lVar28 = *plVar11 + ((uVar24 & 0x1ffffffffffffe0) - uVar15) * 0x80 + 0xf80;
        }
        else {
          plVar11 = (long *)((long)plVar11 + (uVar13 >> 2 & 0x3ffffffffffffff8));
          lVar28 = *plVar11 + (uVar13 & 0x1f) * 0x80;
        }
      }
      FUN_028f5b2c(lVar10,plVar11,lVar28);
    }
  }
  uVar24 = *(long *)(param_1 + 0x280) + (long)iVar31;
  lVar10 = *(long *)(*(long *)(param_1 + 0x248) + (uVar24 >> 2 & 0x3ffffffffffffff8)) +
           (uVar24 & 0x1f) * 0x80;
  *(long *)(lVar10 + 0x70) = param_2;
  if (((*PTR_DAT_047e2410 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047e2410), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047e2508,PTR_DAT_047e2418,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2410);
  }
  DAT_04866020 = *(long *)PTR_DAT_047e2418;
  *(undefined4 *)(lVar10 + 0x78) =
       *(undefined4 *)(*(long *)(DAT_04866020 + 0x60) + (ulong)*(byte *)(param_2 + 0x4f0) * 4);
  *(int *)(param_2 + 0x468) = iVar31;
  lVar10 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar2 = (short *)(lVar10 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar8) {
      *psVar2 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar12;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar11 = *(long **)(param_2 + 0x460);
  *(long *)(param_2 + 0x460) = param_1;
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (((param_3 & 1) != 0) &&
     (((*(char *)(param_2 + 0x430) == '\0' &&
       (*(long *)(param_2 + 0x128) != *(long *)(param_2 + 0x130))) ||
      ((*(byte *)(param_2 + 0x458) & 7) == 0)))) {
    FUN_00d37f30(param_1,param_2);
  }
  if (!bVar23) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
    return;
  }
  return;
}


