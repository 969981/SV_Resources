/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b4064c; name: FUN_02b4064c
 */


void FUN_02b4064c(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  char cVar15;
  ulong uVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  LightEventType *pLVar22;
  void *pvVar23;
  long lVar24;
  ulong uVar25;
  float *pfVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  long *plVar33;
  ulong uVar34;
  undefined8 *local_148;
  undefined8 *puStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 *local_88;
  long *plStack_80;
  
  FUN_00d5f508(&local_a0,param_4);
  local_108 = (long *)0x0;
  local_100 = (long *)0x0;
  FUN_01032b10(&local_108,&local_a0);
  uVar6 = *(undefined4 *)(param_2 + 0xa4);
  local_f8 = param_5;
  local_f0 = param_1;
  local_e8 = param_7;
  FUN_00f338dc(&local_148,param_2);
  uVar18 = FUN_01032970(local_148,&local_108);
  plVar33 = local_108;
  puVar14 = puStack_140;
  puVar13 = local_148;
  *(undefined4 *)(param_2 + 0xa4) = uVar6;
  cVar15 = (char)local_138;
  if (local_108 != (long *)0x0) {
    plVar21 = local_108 + 3;
    do {
      sVar8 = (short)*plVar21;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *(short *)plVar21 = sVar8 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar8 == 1) {
      piVar3 = (int *)((long)local_108 + 0x1c);
      do {
        iVar17 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar17 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_148 = (undefined8 *)*plVar33;
        FUN_00c44438(lVar19 + 0x8040,&local_148);
      }
    }
    else if (sVar8 == 0) goto LAB_02b413e0;
  }
  puVar20 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0 + 3);
    do {
      sVar8 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar8 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar8 == 1) {
      piVar3 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar17 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar17 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_148 = (undefined8 *)*puVar20;
        FUN_00c44438(lVar19 + 0x8040,&local_148);
      }
    }
    else if (sVar8 == 0) goto LAB_02b413e0;
  }
  local_138 = *param_3;
  local_130 = param_3[1];
  local_120 = *param_6;
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  local_148 = param_2;
  puStack_140 = param_8;
  uStack_128 = uVar18;
  FUN_01160880(&local_118,param_6 + 1);
  plVar33 = puVar13 + 0x33;
  fVar7 = *(float *)(param_2 + 0xa4);
  lVar29 = *plVar33;
  lVar19 = nn::os::GetCurrentThread();
  if (lVar19 == lVar29) {
    plVar33 = (long *)0x0;
    bVar10 = true;
  }
  else {
    lVar19 = nn::os::GetCurrentThread();
    do {
      if (*plVar33 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(puVar13 + 0x34));
          while (*plVar33 == 0) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar10) {
              *plVar33 = lVar19;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_02b407a0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar10) {
        *plVar33 = lVar19;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_02b407a0:
    bVar10 = false;
  }
  plVar31 = (long *)*puVar13;
  plVar21 = plVar31 + 6;
  lVar29 = *plVar21;
  lVar19 = nn::os::GetCurrentThread();
  if (lVar19 == lVar29) {
    if (plVar31[0x3f] == 0) {
      local_a0 = (undefined8 *)plVar31[1];
      FUN_0103caf0(&local_108,local_a0,&local_a0);
      plVar21 = local_108;
      local_108 = (long *)0x0;
      lVar19 = plVar31[0x3f];
      plVar31[0x3f] = (long)plVar21;
      if (lVar19 == 0) {
        plVar31[0x42] = CONCAT44(uStack_ec,local_f0);
        plVar31[0x41] = (long)local_f8;
        plVar31[0x40] = (long)local_100;
      }
      else {
        FUN_0103e9d8(plVar31 + 0x40);
        plVar21 = local_108;
        plVar31[0x42] = CONCAT44(uStack_ec,local_f0);
        plVar31[0x41] = (long)local_f8;
        plVar31[0x40] = (long)local_100;
        local_108 = (long *)0x0;
        if (plVar21 != (long *)0x0) {
          FUN_0103e9d8(&local_100);
        }
      }
    }
    local_108 = (long *)0xffffffff00000003;
    plVar27 = (long *)FUN_0103b2e0(plVar31 + 0x1d,&local_108);
    plVar21 = plVar31 + 9;
    lVar29 = *plVar21;
    lVar19 = nn::os::GetCurrentThread();
    if (lVar19 == lVar29) {
      plVar21 = (long *)0x0;
      bVar12 = true;
    }
    else {
      lVar19 = nn::os::GetCurrentThread();
      do {
        if (*plVar21 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar31 + 10));
            while (*plVar21 == 0) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar12) {
                *plVar21 = lVar19;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_02b408b8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar19;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_02b408b8:
      bVar12 = false;
    }
    local_108 = plVar31;
    local_100 = plVar27;
    local_f8 = plVar31;
    memcpy(&local_f0,&local_148,0x28);
    local_c8 = local_120;
    local_c0 = (long *)0x0;
    local_b8 = 0;
    FUN_01160880(&local_c0,&local_118);
    local_a8 = 1;
    puVar20 = (undefined8 *)plVar31[0xd];
    local_b0 = fVar7;
    if (puVar20 < (undefined8 *)plVar31[0xe]) {
      lVar19 = plVar31[0xf];
      if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar29 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar29 != 0) {
        if (0xf < *(ulong *)(lVar29 + 0x80)) goto LAB_02b413a0;
        *(long *)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = lVar19;
        *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
      }
      puVar20[2] = 0;
      puVar20[3] = 0;
      *puVar20 = 0;
      puVar20[1] = 0;
      puVar20[4] = local_108;
      puVar20[5] = local_100;
      puVar20[6] = local_f8;
      memcpy(puVar20 + 7,&local_f0,0x28);
      puVar20[0xc] = local_c8;
      puVar20[0xe] = 0;
      puVar20[0xd] = 0;
      FUN_01161be4(puVar20 + 0xd,&local_c0);
      puVar20[0xf] = CONCAT44(uStack_ac,local_b0);
      puVar20[0x10] = local_a8;
      *puVar20 = &LAB_02b41408;
      puVar20[1] = &LAB_02b41688;
      puVar20[2] = FUN_02b41ff0;
      puVar20[3] = &LAB_02b42054;
      if (lVar29 != 0) {
        *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
      }
      plVar31[0xd] = (long)(puVar20 + 0x20);
    }
    else {
      plVar30 = plVar31 + 0xf;
      lVar24 = FUN_0217ad8c(plVar31 + 0xc,((long)puVar20 - plVar31[0xc] >> 8) + 1);
      lVar19 = plVar31[0xc];
      lVar29 = plVar31[0xd];
      local_88 = (undefined8 *)0x0;
      plStack_80 = plVar30;
      if (lVar24 == 0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        puVar20 = (undefined8 *)
                  (**(code **)(*(long *)*plVar30 + 0x10))((long *)*plVar30,lVar24 << 8,0x10);
        if (puVar20 == (undefined8 *)0x0) {
          (**(code **)(*(long *)*plVar30 + 0xe8))();
        }
      }
      puVar5 = puVar20 + (lVar29 - lVar19 >> 8) * 0x20;
      local_88 = puVar20 + lVar24 * 0x20;
      lVar19 = *plVar30;
      local_a0 = puVar20;
      puStack_98 = puVar5;
      local_90 = puVar5;
      if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar29 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar29 != 0) {
        if (0xf < *(ulong *)(lVar29 + 0x80)) goto LAB_02b413a0;
        *(long *)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = lVar19;
        *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
      }
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = local_108;
      puVar5[5] = local_100;
      puVar5[6] = local_f8;
      memcpy(puVar5 + 7,&local_f0,0x28);
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xc] = local_c8;
      FUN_01161be4(puVar5 + 0xd,&local_c0);
      puVar5[0xf] = CONCAT44(uStack_ac,local_b0);
      puVar5[0x10] = local_a8;
      *puVar5 = &LAB_02b41408;
      puVar5[1] = &LAB_02b41688;
      puVar5[2] = FUN_02b41ff0;
      puVar5[3] = &LAB_02b42054;
      if (lVar29 != 0) {
        *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
      }
      local_90 = local_90 + 0x20;
      FUN_0103b38c(plVar31 + 0xc,&local_a0);
      FUN_0103bbd0(&local_a0);
    }
    plVar31 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar30 = local_c0 + 3;
      do {
        sVar8 = (short)*plVar30;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar11) {
          *(short *)plVar30 = sVar8 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar8 == 1) {
        piVar3 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar17 = *piVar3;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar17 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar19 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar19;
          local_a0 = (undefined8 *)*plVar31;
          FUN_00c44438(lVar19 + 0x8040,&local_a0);
        }
      }
      else if (sVar8 == 0) goto LAB_02b413e0;
    }
    if (!bVar12) {
      *plVar21 = 0;
      pLVar22 = (LightEventType *)(plVar21 + 1);
      goto LAB_02b40f0c;
    }
  }
  else {
    lVar19 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar31 + 7));
          while (*plVar21 == 0) {
            cVar9 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar12) {
              *plVar21 = lVar19;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_02b407d8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar12) {
        *plVar21 = lVar19;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_02b407d8:
    lVar19 = plVar31[0x3f];
    if (lVar19 == 0) {
      local_a0 = (undefined8 *)plVar31[1];
      FUN_0103caf0(&local_108,local_a0,&local_a0);
      plVar21 = local_108;
      local_108 = (long *)0x0;
      lVar19 = plVar31[0x3f];
      plVar31[0x3f] = (long)plVar21;
      if (lVar19 == 0) {
        plVar31[0x42] = CONCAT44(uStack_ec,local_f0);
        plVar31[0x41] = (long)local_f8;
        plVar31[0x40] = (long)local_100;
        local_108 = (long *)0x0;
      }
      else {
        FUN_0103e9d8(plVar31 + 0x40);
        plVar21 = local_108;
        plVar31[0x42] = CONCAT44(uStack_ec,local_f0);
        plVar31[0x41] = (long)local_f8;
        plVar31[0x40] = (long)local_100;
        local_108 = (long *)0x0;
        if (plVar21 != (long *)0x0) {
          FUN_0103e9d8(&local_100);
        }
      }
      lVar19 = plVar31[0x3f];
    }
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,fVar7);
    plVar21 = (long *)FUN_02b420b8(lVar19 + 8,&local_148);
    plVar30 = (long *)(lVar19 + 0xc0);
    lVar29 = *plVar30;
    lVar24 = *(long *)(lVar19 + 200) - lVar29 >> 3;
    plVar27 = (long *)(lVar24 * -0x5555555555555555);
    local_108 = plVar21;
    if (plVar27 <= plVar21) {
      plVar2 = (long *)((long)plVar21 + 1);
      lVar24 = (long)plVar2 + lVar24 * 0x5555555555555555;
      if (plVar2 < plVar27 || lVar24 == 0) {
        if (plVar2 < plVar27) {
          *(long *)(lVar19 + 200) = lVar29 + (long)plVar2 * 0x18;
        }
      }
      else {
        FUN_00e93f30(plVar30,lVar24);
        lVar29 = *plVar30;
      }
    }
    *(undefined1 *)(lVar29 + (long)plVar21 * 0x18) = 0;
    *(undefined8 *)(*(long *)(lVar19 + 0xc0) + (long)plVar21 * 0x18 + 8) = 1;
    uVar6 = local_a0._0_4_;
    *(undefined4 *)(*(long *)(lVar19 + 0xc0) + (long)plVar21 * 0x18 + 0x10) = local_a0._0_4_;
    uVar32 = *(ulong *)(lVar19 + 0x130);
    uVar28 = uVar32 + 1;
    plVar27 = (long *)(lVar19 + 0xf8);
    *(ulong *)(lVar19 + 0x130) = uVar28;
    if (uVar32 == 0) {
      if (*(long *)(lVar19 + 0x100) - (long)*(undefined8 **)(lVar19 + 0xf8) >> 4 != 0) {
        **(undefined8 **)(lVar19 + 0xf8) = plVar21;
LAB_02b40c2c:
        lVar19 = *plVar27;
        goto LAB_02b40d20;
      }
LAB_02b40c3c:
      FUN_01061b74(plVar27,&local_108,&local_a0);
    }
    else {
      pvVar23 = *(void **)(lVar19 + 0xf8);
      uVar25 = *(long *)(lVar19 + 0x100) - (long)pvVar23 >> 4;
      if (*(float *)((long)pvVar23 + (uVar32 - 1) * 0x10 + 8) <= fVar7) {
        if (uVar25 < uVar28) goto LAB_02b40c3c;
        *(long **)((long)pvVar23 + uVar32 * 0x10) = plVar21;
        lVar19 = *plVar27 + uVar32 * 0x10;
      }
      else {
        if (uVar25 <= uVar28 && uVar28 - uVar25 != 0) {
          FUN_0103e51c(plVar27,uVar28 - uVar25);
          pvVar23 = (void *)*plVar27;
        }
        if (fVar7 < *(float *)((long)pvVar23 + 8)) {
          memmove((void *)((long)pvVar23 + 0x10),pvVar23,uVar32 << 4);
          *(long **)*plVar27 = plVar21;
          goto LAB_02b40c2c;
        }
        uVar16 = uVar32 - 1;
        uVar25 = uVar32 - 2;
        uVar28 = 1;
        while (uVar34 = uVar16, 2 < uVar25) {
          uVar4 = uVar28 + (long)((float)uVar25 * 0.5);
          uVar16 = uVar4;
          uVar25 = (long)((float)uVar25 * 0.5);
          if (*(float *)((long)pvVar23 + uVar4 * 0x10 + 8) <= fVar7) {
            uVar16 = uVar34;
            uVar25 = uVar34 - uVar4;
            uVar28 = uVar4;
          }
        }
        if (uVar34 <= uVar32 && uVar28 <= uVar34) {
          pfVar26 = (float *)((long)pvVar23 + uVar34 * 0x10 + 8);
          while (fVar7 < *pfVar26) {
            uVar34 = uVar34 - 1;
            if ((uVar34 < uVar28) || (pfVar26 = pfVar26 + -4, uVar32 < uVar34)) goto LAB_02b40cec;
          }
          uVar34 = uVar34 + 1;
        }
LAB_02b40cec:
        if (uVar34 <= uVar32 && uVar28 <= uVar34) {
          uVar28 = uVar34;
        }
        pvVar23 = (void *)((long)pvVar23 + uVar28 * 0x10);
        memmove((void *)((long)pvVar23 + 0x10),pvVar23,(uVar32 - uVar28) * 0x10);
        *(long **)(*plVar27 + uVar28 * 0x10) = plVar21;
        lVar19 = *plVar27 + uVar28 * 0x10;
      }
LAB_02b40d20:
      *(undefined4 *)(lVar19 + 8) = uVar6;
    }
    local_108 = (long *)0x3;
    do {
      lVar19 = plVar31[0x2c] - plVar31[0x2b];
      local_100 = plVar21;
      if (lVar19 == 0) {
        plVar27 = (long *)(plVar31[0x1e] - plVar31[0x1d] >> 4);
        FUN_01061b4c(plVar31 + 0x1d,&local_108);
        goto LAB_02b40db4;
      }
      plVar27 = *(long **)(plVar31[0x2c] + -8);
      plVar31[0x2c] = lVar19 + plVar31[0x2b] + -8;
      uVar28 = (ulong)plVar27 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(plVar31[0x24] + uVar28) =
           *(ulong *)(plVar31[0x24] + uVar28) &
           (1L << ((ulong)plVar27 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((long *)(plVar31[0x1e] - plVar31[0x1d] >> 4) <= plVar27);
    puVar20 = (undefined8 *)(plVar31[0x1d] + (long)plVar27 * 0x10);
    *puVar20 = 3;
    puVar20[1] = plVar21;
    if ((long *)plVar31[0x32] <= plVar27) {
LAB_02b40db4:
      plVar31[0x32] = (long)plVar27 + 1;
    }
    pLVar22 = (LightEventType *)(plVar31 + 7);
    plVar31[6] = 0;
LAB_02b40f0c:
    nn::os::SignalLightEvent(pLVar22);
  }
  plVar21 = (long *)puVar13[0x37];
  local_108 = plVar27;
  if (plVar21 == (long *)puVar13[0x38]) {
    FUN_01163f20(puVar13 + 0x36,&local_108);
  }
  else {
    uVar18 = puVar13[0x39];
    if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar19 == 0) {
      *plVar21 = (long)plVar27;
    }
    else {
      if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_02b413a0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar18;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
      *plVar21 = (long)local_108;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    }
    puVar13[0x37] = plVar21 + 1;
  }
  if (!bVar10) {
    *plVar33 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar33 + 1));
  }
  puVar13 = local_118;
  *(float *)(param_2 + 0xa4) = fVar7 + 0.01;
  if (local_118 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_118 + 3);
    do {
      sVar8 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar8 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar8 == 1) {
      piVar3 = (int *)((long)local_118 + 0x1c);
      do {
        iVar17 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar17 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_108 = (long *)*puVar13;
        FUN_00c44438(lVar19 + 0x8040,&local_108);
      }
    }
    else if (sVar8 == 0) {
LAB_02b413e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (cVar15 != '\0') {
    *puVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar14 + 1));
  }
  return;
}


