/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023a56c8; name: FUN_023a56c8
 */


void FUN_023a56c8(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6,undefined8 *param_7,undefined8 param_8)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char cVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  LightEventType *pLVar21;
  void *pvVar22;
  long lVar23;
  ulong uVar24;
  float *pfVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  undefined8 *local_188;
  undefined8 *puStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  long lStack_98;
  long local_90;
  undefined8 *local_88;
  long *plStack_80;
  
  FUN_00d5f508(&local_a0,param_5);
  local_128 = (long *)0x0;
  local_120 = (long *)0x0;
  FUN_01032b10(&local_128,&local_a0);
  uVar5 = *(undefined4 *)(param_2 + 0xa4);
  local_118 = param_6;
  local_110 = param_1;
  local_108 = param_8;
  FUN_00f338dc(&local_188,param_2);
  uVar17 = FUN_01032970(local_188,&local_128);
  plVar32 = local_128;
  puVar13 = puStack_180;
  puVar12 = local_188;
  *(undefined4 *)(param_2 + 0xa4) = uVar5;
  cVar14 = (char)local_178;
  if (local_128 != (long *)0x0) {
    plVar20 = local_128 + 3;
    do {
      sVar7 = (short)*plVar20;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar9) {
        *(short *)plVar20 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar3 = (int *)((long)local_128 + 0x1c);
      do {
        iVar16 = *piVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_188 = (undefined8 *)*plVar32;
        FUN_00c44438(lVar18 + 0x8040,&local_188);
      }
    }
    else if (sVar7 == 0) goto LAB_023a622c;
  }
  puVar19 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0 + 3);
    do {
      sVar7 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar3 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar16 = *piVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_188 = (undefined8 *)*puVar19;
        FUN_00c44438(lVar18 + 0x8040,&local_188);
      }
    }
    else if (sVar7 == 0) goto LAB_023a622c;
  }
  puStack_180 = (undefined8 *)0xffffffffffffffff;
  local_160 = *param_7;
  local_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  local_188 = param_2;
  local_178 = param_3;
  uStack_170 = param_4;
  local_168 = uVar17;
  FUN_00c96b7c(&local_158,param_7 + 1);
  local_148 = param_7[3];
  uStack_140 = param_7[4];
  local_138 = param_7[5];
  local_130 = (long *)param_7[6];
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x18))();
  }
  plVar32 = puVar12 + 0x33;
  fVar6 = *(float *)(param_2 + 0xa4);
  lVar28 = *plVar32;
  lVar18 = nn::os::GetCurrentThread();
  if (lVar18 == lVar28) {
    plVar32 = (long *)0x0;
    bVar9 = true;
  }
  else {
    lVar18 = nn::os::GetCurrentThread();
    do {
      if (*plVar32 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(puVar12 + 0x34));
          while (*plVar32 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar9) {
              *plVar32 = lVar18;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_023a5834;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar9) {
        *plVar32 = lVar18;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_023a5834:
    bVar9 = false;
  }
  plVar30 = (long *)*puVar12;
  plVar20 = plVar30 + 6;
  lVar28 = *plVar20;
  lVar18 = nn::os::GetCurrentThread();
  if (lVar18 == lVar28) {
    if (plVar30[0x3f] == 0) {
      local_a0 = (undefined8 *)plVar30[1];
      FUN_0103caf0(&local_128,local_a0,&local_a0);
      plVar20 = local_128;
      local_128 = (long *)0x0;
      lVar18 = plVar30[0x3f];
      plVar30[0x3f] = (long)plVar20;
      if (lVar18 == 0) {
        plVar30[0x42] = CONCAT44(uStack_10c,local_110);
        plVar30[0x41] = (long)local_118;
        plVar30[0x40] = (long)local_120;
      }
      else {
        FUN_0103e9d8(plVar30 + 0x40);
        plVar20 = local_128;
        plVar30[0x42] = CONCAT44(uStack_10c,local_110);
        plVar30[0x41] = (long)local_118;
        plVar30[0x40] = (long)local_120;
        local_128 = (long *)0x0;
        if (plVar20 != (long *)0x0) {
          FUN_0103e9d8(&local_120);
        }
      }
    }
    local_128 = (long *)0xffffffff00000003;
    plVar26 = (long *)FUN_0103b2e0(plVar30 + 0x1d,&local_128);
    plVar20 = plVar30 + 9;
    lVar28 = *plVar20;
    lVar18 = nn::os::GetCurrentThread();
    if (lVar18 == lVar28) {
      plVar20 = (long *)0x0;
      bVar11 = true;
    }
    else {
      lVar18 = nn::os::GetCurrentThread();
      do {
        if (*plVar20 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar30 + 10));
            while (*plVar20 == 0) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar11) {
                *plVar20 = lVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_023a5958;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar11) {
          *plVar20 = lVar18;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_023a5958:
      bVar11 = false;
    }
    local_128 = plVar30;
    local_120 = plVar26;
    local_118 = plVar30;
    memcpy(&local_110,&local_188,0x28);
    local_e8 = local_160;
    local_e0 = (long *)0x0;
    local_d8 = 0;
    FUN_00c43ef0(&local_e0,&local_158);
    local_d0 = local_148;
    uStack_c8 = uStack_140;
    local_c0 = local_138;
    local_b8 = local_130;
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))();
    }
    plVar29 = plVar30 + 0xf;
    local_a8 = 1;
    uVar27 = plVar30[0xd];
    local_b0 = fVar6;
    if (uVar27 < (ulong)plVar30[0xe]) {
      FUN_02b89294(plVar29,uVar27,&local_128);
      plVar30[0xd] = uVar27 + 0x100;
    }
    else {
      lVar23 = FUN_02373a58(plVar30 + 0xc,((long)(uVar27 - plVar30[0xc]) >> 8) + 1);
      lVar18 = plVar30[0xc];
      lVar28 = plVar30[0xd];
      local_88 = (undefined8 *)0x0;
      plStack_80 = plVar29;
      if (lVar23 == 0) {
        puVar19 = (undefined8 *)0x0;
      }
      else {
        puVar19 = (undefined8 *)
                  (**(code **)(*(long *)*plVar29 + 0x10))((long *)*plVar29,lVar23 << 8,0x10);
        if (puVar19 == (undefined8 *)0x0) {
          (**(code **)(*(long *)*plVar29 + 0xe8))();
        }
      }
      lVar18 = (long)puVar19 + (lVar28 - lVar18);
      local_88 = puVar19 + lVar23 * 0x20;
      local_a0 = puVar19;
      lStack_98 = lVar18;
      FUN_02b89294(plVar29,lVar18,&local_128);
      local_90 = lVar18 + 0x100;
      FUN_0103b38c(plVar30 + 0xc,&local_a0);
      FUN_0103bbd0(&local_a0);
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    plVar30 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar29 = local_e0 + 3;
      do {
        sVar7 = (short)*plVar29;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar10) {
          *(short *)plVar29 = sVar7 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar7 == 1) {
        piVar3 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar16 = *piVar3;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_a0 = (undefined8 *)*plVar30;
          FUN_00c44438(lVar18 + 0x8040,&local_a0);
        }
      }
      else if (sVar7 == 0) goto LAB_023a622c;
    }
    if (!bVar11) {
      *plVar20 = 0;
      pLVar21 = (LightEventType *)(plVar20 + 1);
      goto LAB_023a5e04;
    }
  }
  else {
    lVar18 = nn::os::GetCurrentThread();
    do {
      if (*plVar20 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar30 + 7));
          while (*plVar20 == 0) {
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar11) {
              *plVar20 = lVar18;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_023a5870;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar11) {
        *plVar20 = lVar18;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_023a5870:
    lVar18 = plVar30[0x3f];
    if (lVar18 == 0) {
      local_a0 = (undefined8 *)plVar30[1];
      FUN_0103caf0(&local_128,local_a0,&local_a0);
      plVar20 = local_128;
      local_128 = (long *)0x0;
      lVar18 = plVar30[0x3f];
      plVar30[0x3f] = (long)plVar20;
      if (lVar18 == 0) {
        plVar30[0x42] = CONCAT44(uStack_10c,local_110);
        plVar30[0x41] = (long)local_118;
        plVar30[0x40] = (long)local_120;
        local_128 = (long *)0x0;
      }
      else {
        FUN_0103e9d8(plVar30 + 0x40);
        plVar20 = local_128;
        plVar30[0x42] = CONCAT44(uStack_10c,local_110);
        plVar30[0x41] = (long)local_118;
        plVar30[0x40] = (long)local_120;
        local_128 = (long *)0x0;
        if (plVar20 != (long *)0x0) {
          FUN_0103e9d8(&local_120);
        }
      }
      lVar18 = plVar30[0x3f];
    }
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,fVar6);
    plVar20 = (long *)FUN_02b8c794(lVar18 + 8,&local_188);
    plVar29 = (long *)(lVar18 + 0xc0);
    lVar28 = *plVar29;
    lVar23 = *(long *)(lVar18 + 200) - lVar28 >> 3;
    plVar26 = (long *)(lVar23 * -0x5555555555555555);
    local_128 = plVar20;
    if (plVar26 <= plVar20) {
      plVar2 = (long *)((long)plVar20 + 1);
      lVar23 = (long)plVar2 + lVar23 * 0x5555555555555555;
      if (plVar2 < plVar26 || lVar23 == 0) {
        if (plVar2 < plVar26) {
          *(long *)(lVar18 + 200) = lVar28 + (long)plVar2 * 0x18;
        }
      }
      else {
        FUN_00e93f30(plVar29,lVar23);
        lVar28 = *plVar29;
      }
    }
    *(undefined1 *)(lVar28 + (long)plVar20 * 0x18) = 0;
    *(undefined8 *)(*(long *)(lVar18 + 0xc0) + (long)plVar20 * 0x18 + 8) = 1;
    uVar5 = local_a0._0_4_;
    *(undefined4 *)(*(long *)(lVar18 + 0xc0) + (long)plVar20 * 0x18 + 0x10) = local_a0._0_4_;
    uVar31 = *(ulong *)(lVar18 + 0x130);
    uVar27 = uVar31 + 1;
    plVar26 = (long *)(lVar18 + 0xf8);
    *(ulong *)(lVar18 + 0x130) = uVar27;
    if (uVar31 == 0) {
      if (*(long *)(lVar18 + 0x100) - (long)*(undefined8 **)(lVar18 + 0xf8) >> 4 == 0) {
        FUN_02374074(plVar26,&local_128,&local_a0);
      }
      else {
        **(undefined8 **)(lVar18 + 0xf8) = plVar20;
        lVar18 = *plVar26;
LAB_023a5d54:
        *(undefined4 *)(lVar18 + 8) = uVar5;
      }
    }
    else {
      pvVar22 = *(void **)(lVar18 + 0xf8);
      uVar24 = *(long *)(lVar18 + 0x100) - (long)pvVar22 >> 4;
      if (*(float *)((long)pvVar22 + (uVar31 - 1) * 0x10 + 8) <= fVar6) {
        if (uVar24 < uVar27) {
          FUN_02374074(plVar26,&local_128,&local_a0);
          goto LAB_023a5d5c;
        }
        *(long **)((long)pvVar22 + uVar31 * 0x10) = plVar20;
        lVar18 = *plVar26 + uVar31 * 0x10;
      }
      else {
        if (uVar24 <= uVar27 && uVar27 - uVar24 != 0) {
          FUN_0103e51c(plVar26,uVar27 - uVar24);
          pvVar22 = (void *)*plVar26;
        }
        if (*(float *)((long)pvVar22 + 8) <= fVar6) {
          uVar15 = uVar31 - 1;
          uVar24 = uVar31 - 2;
          uVar27 = 1;
          while (uVar33 = uVar15, 2 < uVar24) {
            uVar4 = uVar27 + (long)((float)uVar24 * 0.5);
            uVar15 = uVar4;
            uVar24 = (long)((float)uVar24 * 0.5);
            if (*(float *)((long)pvVar22 + uVar4 * 0x10 + 8) <= fVar6) {
              uVar15 = uVar33;
              uVar24 = uVar33 - uVar4;
              uVar27 = uVar4;
            }
          }
          if (uVar33 <= uVar31 && uVar27 <= uVar33) {
            pfVar25 = (float *)((long)pvVar22 + uVar33 * 0x10 + 8);
            while (fVar6 < *pfVar25) {
              uVar33 = uVar33 - 1;
              if ((uVar33 < uVar27) || (pfVar25 = pfVar25 + -4, uVar31 < uVar33)) goto LAB_023a5d1c;
            }
            uVar33 = uVar33 + 1;
          }
LAB_023a5d1c:
          if (uVar33 <= uVar31 && uVar27 <= uVar33) {
            uVar27 = uVar33;
          }
          pvVar22 = (void *)((long)pvVar22 + uVar27 * 0x10);
          memmove((void *)((long)pvVar22 + 0x10),pvVar22,(uVar31 - uVar27) * 0x10);
          *(long **)(*plVar26 + uVar27 * 0x10) = plVar20;
          lVar18 = *plVar26 + uVar27 * 0x10;
          goto LAB_023a5d54;
        }
        memmove((void *)((long)pvVar22 + 0x10),pvVar22,uVar31 << 4);
        *(long **)*plVar26 = plVar20;
        lVar18 = *plVar26;
      }
      *(undefined4 *)(lVar18 + 8) = uVar5;
    }
LAB_023a5d5c:
    local_128 = (long *)0x3;
    do {
      lVar18 = plVar30[0x2c] - plVar30[0x2b];
      local_120 = plVar20;
      if (lVar18 == 0) {
        plVar26 = (long *)(plVar30[0x1e] - plVar30[0x1d] >> 4);
        FUN_0237354c(plVar30 + 0x1d,&local_128);
        goto LAB_023a5df0;
      }
      plVar26 = *(long **)(plVar30[0x2c] + -8);
      plVar30[0x2c] = lVar18 + plVar30[0x2b] + -8;
      uVar27 = (ulong)plVar26 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(plVar30[0x24] + uVar27) =
           *(ulong *)(plVar30[0x24] + uVar27) &
           (1L << ((ulong)plVar26 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((long *)(plVar30[0x1e] - plVar30[0x1d] >> 4) <= plVar26);
    puVar19 = (undefined8 *)(plVar30[0x1d] + (long)plVar26 * 0x10);
    *puVar19 = 3;
    puVar19[1] = plVar20;
    if ((long *)plVar30[0x32] <= plVar26) {
LAB_023a5df0:
      plVar30[0x32] = (long)plVar26 + 1;
    }
    pLVar21 = (LightEventType *)(plVar30 + 7);
    plVar30[6] = 0;
LAB_023a5e04:
    nn::os::SignalLightEvent(pLVar21);
  }
  local_128 = plVar26;
  FUN_00ed4e58(puVar12 + 0x36,&local_128);
  if (!bVar9) {
    *plVar32 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar32 + 1));
  }
  *(float *)(param_2 + 0xa4) = fVar6 + 0.01;
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  puVar12 = local_158;
  if (local_158 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_158 + 3);
    do {
      sVar7 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar3 = (int *)((long)local_158 + 0x1c);
      do {
        iVar16 = *piVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_128 = (long *)*puVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_128);
      }
    }
    else if (sVar7 == 0) {
LAB_023a622c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (cVar14 != '\0') {
    *puVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar13 + 1));
  }
  return;
}


