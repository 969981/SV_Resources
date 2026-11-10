/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e05488; name: FUN_00e05488
 */


/* WARNING: Removing unreachable block (ram,0x00e059dc) */

void FUN_00e05488(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong *puVar1;
  short *psVar2;
  ulong *puVar3;
  int *piVar4;
  code *pcVar5;
  long lVar6;
  ulong **ppuVar7;
  ulong **ppuVar8;
  short sVar9;
  bool bVar10;
  char cVar11;
  char *pcVar12;
  bool bVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  uint *puVar20;
  undefined1 *puVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  short sVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  int iVar39;
  undefined1 auVar40 [12];
  float fVar43;
  float fVar45;
  undefined1 auVar41 [16];
  int iVar44;
  int iVar46;
  int iVar47;
  undefined1 auVar42 [16];
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  long *local_198;
  long *local_180;
  long *local_160;
  ulong local_158;
  char *pcStack_150;
  undefined8 local_148;
  long *local_140;
  ulong *local_138;
  long local_130;
  long local_128;
  long *local_120;
  char *local_118;
  int *piStack_110;
  long *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulong *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  ulong *local_c8;
  char *local_c0;
  int *local_b8;
  long *local_b0;
  long *local_98;
  
  if ((param_3 & 1) == 0) {
    pfVar14 = (float *)FUN_00da75d8();
  }
  else {
    pfVar14 = (float *)FUN_00d3ccd4();
  }
  lVar15 = FUN_00e06b88(param_1);
  lVar16 = (*(code *)**(undefined8 **)*param_2)
                     ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
  if (pfVar14 == (float *)0x0) {
    return;
  }
  if (lVar15 == 0) {
    return;
  }
  fVar65 = (float)((double)*(long *)(lVar16 + 8) / 1000000000.0);
  if (fVar65 < 1.1920929e-07) {
    return;
  }
  bVar13 = (param_3 & 1) == 0;
  pcVar5 = (code *)&LAB_01f96ba0;
  if (bVar13) {
    pcVar5 = FUN_00ea349c;
  }
  lVar16 = 0x158;
  if (bVar13) {
    lVar16 = 0x150;
  }
  lVar6 = 0x15c;
  lVar17 = param_1 + 0x290;
  pcVar12 = (char *)(param_1 + 0x1d0);
  if (bVar13) {
    lVar6 = 0x154;
    lVar17 = param_1 + 0x260;
    pcVar12 = (char *)(param_1 + 0x1c8);
  }
  lVar18 = param_1 + 0x220;
  if (bVar13) {
    lVar18 = param_1 + 0x1e0;
  }
  if ((0.0 < *(float *)(lVar17 + 0x24)) && (0.0 < *(float *)(lVar17 + 0x28))) {
    fVar49 = *(float *)(lVar17 + 0x28) - fVar65;
    local_c8 = (ulong *)((ulong)local_c8 & 0xffffffff00000000);
    local_e8 = (ulong *)CONCAT44(local_e8._4_4_,fVar49);
    ppuVar7 = &local_e8;
    if (fVar49 <= 0.0) {
      ppuVar7 = &local_c8;
    }
    *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)ppuVar7;
    (**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(lVar17 + 0x20) * 8))();
  }
  if ((0.0 < *(float *)(param_1 + 0x20c)) &&
     (1.1920929e-07 < *(float *)(param_1 + 0x20c) - *(float *)(param_1 + 0x208))) {
    FUN_00e071fc(param_1,param_2,lVar18,pcVar5,0,param_1);
    return;
  }
  if (*(char *)((long)pfVar14 + 0x11) != '\0') {
    local_b8 = (int *)&DAT_00000005;
    local_b0 = (long *)0x0;
    local_c8 = (ulong *)&DAT_ef6385841d796acf;
    local_c0 = "orbit";
    local_e8 = (ulong *)0xc74c2a4484f5512a;
    pcStack_e0 = "defaultResetRotationTime";
    local_d8 = 0x18;
    local_d0 = (long *)0x0;
    auVar41 = FUN_00e06d80(lVar15,&local_c8,&local_e8);
    uVar27 = auVar41._8_8_;
    FUN_0156cf88(&local_138,param_1);
    if ((local_138 != (ulong *)0x0) && (*(short *)((long)local_138 + 0x1a) != 0)) {
      psVar2 = (short *)((long)local_138 + 0x1a);
      sVar25 = *(short *)((long)local_138 + 0x1a);
      do {
        sVar9 = *psVar2;
        if (sVar9 == sVar25) {
          cVar11 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar13) {
            *psVar2 = sVar25 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 != '\0') goto LAB_00e06658;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e06658:
          bVar13 = false;
        }
        if (bVar13) {
          local_160 = (long *)0x0;
          if (local_138[2] != 0) {
            local_160 = (long *)(local_138[2] - 0x28);
          }
          goto LAB_00e05c30;
        }
        sVar25 = sVar9;
      } while (sVar9 != 0);
    }
    local_160 = (long *)0x0;
LAB_00e05c30:
    plVar29 = local_160;
    auVar41._8_8_ = uVar27;
    FUN_0156d194(auVar41,&local_160,pfVar14,lVar18,pcVar5,0,param_1);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 0x60))(plVar29);
    }
    if (local_138 == (ulong *)0x0) {
LAB_00e05c6c:
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_b0 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_b0 + 0x20))();
      return;
    }
    puVar1 = local_138 + 3;
    do {
      sVar25 = (short)*puVar1;
      cVar11 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *(short *)puVar1 = sVar25 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar25 == 1) {
      piVar4 = (int *)((long)local_138 + 0x1c);
      do {
        iVar39 = *piVar4;
        cVar11 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar13) {
          *piVar4 = -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar39 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar39 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar39 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_158 = *local_138;
        FUN_00c44438(lVar15 + 0x8040,&local_158);
      }
      goto LAB_00e05c6c;
    }
    if (sVar25 != 0) goto LAB_00e05c6c;
    goto LAB_00e069e0;
  }
  if (((param_3 & 1) == 0) && (*(char *)((long)pfVar14 + 0x12) != '\0')) {
    local_c8 = (ulong *)0x0;
    local_c0 = (char *)0x0;
    FUN_00cbb698(&local_c8,param_1 + 0x120);
    puVar1 = local_c8;
    if (local_c8 != (ulong *)0x0) {
      if (*(short *)((long)local_c8 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_c8 + 0x1a);
        sVar25 = *(short *)((long)local_c8 + 0x1a);
        do {
          sVar9 = *psVar2;
          if (sVar9 == sVar25) {
            cVar11 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar13) {
              *psVar2 = sVar25 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 != '\0') goto LAB_00e063fc;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e063fc:
            bVar13 = false;
          }
          if (bVar13) {
            local_180 = (long *)0x0;
            if (local_c8[2] != 0) {
              local_180 = (long *)(local_c8[2] - 0x28);
            }
            goto LAB_00e06428;
          }
          sVar25 = sVar9;
        } while (sVar9 != 0);
      }
      local_180 = (long *)0x0;
LAB_00e06428:
      puVar3 = local_c8 + 3;
      do {
        sVar25 = (short)*puVar3;
        cVar11 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar13) {
          *(short *)puVar3 = sVar25 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar25 == 1) {
        piVar4 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar39 = *piVar4;
          cVar11 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar13) {
            *piVar4 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar39 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar39 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar39 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_e8 = (ulong *)*puVar1;
          FUN_00c44438(lVar17 + 0x8040,&local_e8);
        }
      }
      else if (sVar25 == 0) goto LAB_00e069e0;
      if (local_180 != (long *)0x0) {
        local_c8 = (ulong *)0x55c1e09773f56693;
        FUN_01951fc0(local_180,&local_c8,1);
        lVar17 = local_180[0x13];
        psVar2 = (short *)(lVar17 + 0x1a);
        do {
          sVar25 = *psVar2;
          cVar11 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar13) {
            *psVar2 = sVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar25 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*local_180 + 0x50))();
        }
        else if (sVar25 == 0) goto LAB_00e06a38;
      }
    }
  }
  if ((*pcVar12 == '\0') && (pcVar12[1] == '\0')) goto LAB_00e0587c;
  lVar17 = FUN_00e06b88(param_1);
  lVar18 = (*(code *)**(undefined8 **)*param_2)
                     ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
  if ((lVar17 == 0) ||
     (fVar49 = (float)((double)*(long *)(lVar18 + 8) / 1000000000.0), fVar49 < 1.1920929e-07))
  goto LAB_00e0587c;
  if (pcVar12[2] != '\0') {
    FUN_00e06ff0(&local_c8,param_1);
    puVar1 = local_c8;
    if (local_c8 != (ulong *)0x0) {
      if (*(short *)((long)local_c8 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_c8 + 0x1a);
        sVar25 = *(short *)((long)local_c8 + 0x1a);
        do {
          sVar9 = *psVar2;
          if (sVar9 == sVar25) {
            cVar11 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar13) {
              *psVar2 = sVar25 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 != '\0') goto LAB_00e05d30;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e05d30:
            bVar13 = false;
          }
          if (bVar13) {
            local_198 = (long *)0x0;
            if (local_c8[2] != 0) {
              local_198 = (long *)(local_c8[2] - 0x28);
            }
            goto LAB_00e05d5c;
          }
          sVar25 = sVar9;
        } while (sVar9 != 0);
      }
      local_198 = (long *)0x0;
LAB_00e05d5c:
      puVar3 = local_c8 + 3;
      do {
        sVar25 = (short)*puVar3;
        cVar11 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar13) {
          *(short *)puVar3 = sVar25 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar25 == 1) {
        piVar4 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar39 = *piVar4;
          cVar11 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar13) {
            *piVar4 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar39 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar39 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar39 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_e8 = (ulong *)*puVar1;
          FUN_00c44438(lVar18 + 0x8040,&local_e8);
        }
      }
      else if (sVar25 == 0) goto LAB_00e069e0;
      puVar32 = &DAT_ef6385841d796acf;
      if (local_198 != (long *)0x0) {
        plVar29 = (long *)(param_1 + 0x160);
        local_e8 = (ulong *)&DAT_ef6385841d796acf;
        pcStack_e0 = "orbit";
        local_d8 = 5;
        local_d0 = (long *)0x0;
        puVar26 = (undefined1 *)local_198[0x90];
        puVar31 = *(undefined1 **)(param_1 + 0x168);
        if (puVar31 == (undefined1 *)0x0) {
LAB_00e05e18:
          plVar30 = (long *)(**(code **)(**(long **)(param_1 + 0x198) + 0x10))
                                      (*(long **)(param_1 + 0x198),0x30,8);
          if (plVar30 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x198) + 0xe8))();
          }
          uVar27 = *(undefined8 *)(param_1 + 0x198);
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar39 = __cxa_guard_acquire(&DAT_04865a38), iVar39 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar18 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar18 != 0) {
            if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar27;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          }
          plVar30[2] = (long)puVar26;
          plVar30[3] = (long)&DAT_cbf29ce484222645;
          plVar30[4] = (long)&DAT_03c886bc;
          plVar30[5] = 0;
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          }
          *plVar30 = 0;
          plVar30[1] = (long)puVar26;
          fVar37 = (float)(*(long *)(param_1 + 0x1b8) + 1);
          if ((puVar31 == (undefined1 *)0x0) ||
             (*(float *)(param_1 + 0x1c0) * (float)puVar31 < fVar37)) {
            uVar28 = (ulong)(puVar31 < (undefined1 *)0x3 ||
                            ((ulong)puVar31 & (ulong)(puVar31 + -1)) != 0) | (long)puVar31 << 1;
            uVar24 = (ulong)(fVar37 / *(float *)(param_1 + 0x1c0));
            if (uVar24 <= uVar28) {
              uVar24 = uVar28;
            }
            FUN_01021aa4(plVar29,uVar24);
            puVar31 = *(undefined1 **)(param_1 + 0x168);
            if (((ulong)puVar31 & (ulong)(puVar31 + -1)) == 0) {
              puVar32 = (undefined1 *)((ulong)(puVar31 + -1) & (ulong)puVar26);
            }
            else if (puVar26 < puVar31) {
              puVar32 = puVar26;
            }
            else {
              uVar28 = 0;
              if (puVar31 != (undefined1 *)0x0) {
                uVar28 = (ulong)puVar26 / (ulong)puVar31;
              }
              puVar32 = puVar26 + -(uVar28 * (long)puVar31);
            }
          }
          plVar22 = *(long **)(*plVar29 + (long)puVar32 * 8);
          if (plVar22 == (long *)0x0) {
            *plVar30 = *(long *)(param_1 + 400);
            *(long **)(param_1 + 400) = plVar30;
            *(long *)(*(long *)(param_1 + 0x160) + (long)puVar32 * 8) = param_1 + 400;
            if (*plVar30 != 0) {
              puVar32 = *(undefined1 **)(*plVar30 + 8);
              if (((ulong)puVar31 & (ulong)(puVar31 + -1)) == 0) {
                puVar32 = (undefined1 *)((ulong)puVar32 & (ulong)(puVar31 + -1));
              }
              else if (puVar31 <= puVar32) {
                uVar28 = 0;
                if (puVar31 != (undefined1 *)0x0) {
                  uVar28 = (ulong)puVar32 / (ulong)puVar31;
                }
                puVar32 = puVar32 + -(uVar28 * (long)puVar31);
              }
              plVar22 = (long *)(*plVar29 + (long)puVar32 * 8);
              goto LAB_00e05ef4;
            }
          }
          else {
            *plVar30 = *plVar22;
LAB_00e05ef4:
            *plVar22 = (long)plVar30;
          }
          *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) + 1;
        }
        else {
          puVar21 = puVar31 + -1;
          if (((ulong)puVar31 & (ulong)puVar21) == 0) {
            puVar32 = (undefined1 *)((ulong)puVar21 & (ulong)puVar26);
            plVar30 = *(long **)(*plVar29 + (long)puVar32 * 8);
            if (plVar30 == (long *)0x0) goto LAB_00e05e18;
            do {
              plVar30 = (long *)*plVar30;
              if ((plVar30 == (long *)0x0) ||
                 ((undefined1 *)plVar30[1] != puVar26 &&
                  (undefined1 *)((ulong)plVar30[1] & (ulong)puVar21) != puVar32)) goto LAB_00e05e18;
            } while ((undefined1 *)plVar30[2] != puVar26);
          }
          else {
            puVar32 = puVar26;
            if (puVar31 <= puVar26) {
              uVar28 = 0;
              if (puVar31 != (undefined1 *)0x0) {
                uVar28 = (ulong)puVar26 / (ulong)puVar31;
              }
              puVar32 = puVar26 + -(uVar28 * (long)puVar31);
            }
            plVar30 = *(long **)(*plVar29 + (long)puVar32 * 8);
            if (plVar30 == (long *)0x0) goto LAB_00e05e18;
            do {
              plVar30 = (long *)*plVar30;
              if (plVar30 == (long *)0x0) goto LAB_00e05e18;
              puVar21 = (undefined1 *)plVar30[1];
              if (puVar21 != puVar26) {
                if (puVar31 <= puVar21) {
                  uVar28 = 0;
                  if (puVar31 != (undefined1 *)0x0) {
                    uVar28 = (ulong)puVar21 / (ulong)puVar31;
                  }
                  puVar21 = puVar21 + -(uVar28 * (long)puVar31);
                }
                if (puVar21 != puVar32) goto LAB_00e05e18;
              }
            } while ((undefined1 *)plVar30[2] != puVar26);
          }
        }
        local_138 = (ulong *)plVar30[3];
        local_130 = plVar30[4];
        local_128 = plVar30[5];
        local_120 = (long *)0x0;
        local_158 = 0xf0c16fcac0343c8;
        pcStack_150 = "autoBackRotationEnable";
        local_148 = 0x16;
        local_140 = (long *)0x0;
        lVar18 = *(long *)(lVar17 + 0x40);
        if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
          psVar2 = (short *)(lVar18 + 0x1a);
          sVar25 = *(short *)(lVar18 + 0x1a);
LAB_00e064e8:
          sVar9 = *psVar2;
          if (sVar9 == sVar25) {
            cVar11 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar13) {
              *psVar2 = sVar25 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 != '\0') goto LAB_00e0650c;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e0650c:
            bVar13 = false;
          }
          if (!bVar13) goto code_r0x00e06514;
          lVar18 = *(long *)(lVar18 + 0x10);
          if (lVar18 != 0) {
            if (*(char *)(lVar18 + 0xf2) == '\0') {
              local_f8 = 0;
              uStack_f0 = 0;
              local_100 = 0;
            }
            else {
              local_100 = *(long *)(lVar18 + 0xf8);
              local_f8 = *(undefined8 *)(lVar18 + 0x100);
              uStack_f0 = *(undefined8 *)(lVar18 + 0x108);
            }
            FUN_00d996a8(&local_118,&local_100,&local_e8);
            local_c0 = local_118;
            local_b8 = piStack_110;
            local_b0 = local_108;
            local_c8 = (ulong *)CONCAT71(local_c8._1_7_,1);
            lVar23 = *(long *)(lVar18 + 0x70);
            psVar2 = (short *)(lVar23 + 0x1a);
            do {
              sVar25 = *psVar2;
              cVar11 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar13) {
                *psVar2 = sVar25 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (sVar25 == 1) {
              *(undefined8 *)(lVar23 + 0x10) = 0;
              (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))((long *)(lVar18 + -0x28));
            }
            else if (sVar25 == 0) goto LAB_00e06a38;
            if ((char)local_c8 != '\0') {
              if (local_b8 == (int *)0x0) goto LAB_00e05f40;
              if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 7) ||
                 (uVar28 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[3], uVar28 == 0)) {
                puVar20 = (uint *)0x0;
              }
              else {
                puVar20 = (uint *)((long)local_b8 + uVar28);
                puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20);
              }
              local_100 = local_130;
              pvVar19 = bsearch(&local_100,puVar20 + 1,(ulong)*puVar20,4,
                                (__compar_fn_t)PTR_LAB_047d5600);
              if (pvVar19 == (void *)0x0) goto LAB_00e05f40;
              FUN_00d996a8(&local_100,&local_c0,&local_138);
              uVar28 = FUN_00cf7518(&local_100,&local_158);
              uVar28 = uVar28 & 0xffffffff;
              if ((char)local_c8 == '\0') goto LAB_00e05f48;
              goto LAB_00e05f44;
            }
            uVar28 = 0;
            goto LAB_00e05f48;
          }
        }
LAB_00e05f40:
        uVar28 = 0;
LAB_00e05f44:
        local_c8 = (ulong *)((ulong)local_c8 & 0xffffffffffffff00);
LAB_00e05f48:
        if (local_140 != (long *)0x0) {
          (**(code **)(*local_140 + 0x20))();
        }
        if (local_120 != (long *)0x0) {
          (**(code **)(*local_120 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if ((uVar28 & 1) == 0) {
          bVar13 = false;
        }
        else {
          local_b0 = (long *)0x0;
          local_d0 = (long *)0x0;
          local_c8 = (ulong *)&DAT_ef6385841d796acf;
          local_c0 = "orbit";
          local_b8 = (int *)0x5;
          local_e8 = (ulong *)0xe0c74df5a7a32638;
          pcStack_e0 = "targetMoveTolerance";
          local_d8 = 0x13;
          fVar37 = (float)FUN_00e06d80(lVar17,&local_c8,&local_e8);
          if (local_d0 != (long *)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          local_b0 = (long *)0x0;
          local_d0 = (long *)0x0;
          local_c8 = (ulong *)&DAT_ef6385841d796acf;
          local_c0 = "orbit";
          local_b8 = (int *)&DAT_00000005;
          local_e8 = (ulong *)0x1181a1524b55e651;
          pcStack_e0 = "autoBackRotationTimeTolerance";
          local_d8 = 0x1d;
          fVar38 = (float)FUN_00e06d80(lVar17,&local_c8,&local_e8);
          if (local_d0 != (long *)0x0) {
            (**(code **)(*local_d0 + 0x20))();
          }
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if ((*(char *)(pfVar14 + 4) != '\0') ||
             (fVar58 = (pfVar14[0x2c] / fVar49) * (pfVar14[0x2c] / fVar49),
             fVar59 = (pfVar14[0x2d] / fVar49) * (pfVar14[0x2d] / fVar49),
             fVar60 = (pfVar14[0x2e] / fVar49) * (pfVar14[0x2e] / fVar49),
             fVar48 = (pfVar14[0x2f] / fVar49) * (pfVar14[0x2f] / fVar49),
             auVar51._0_4_ = fVar58 + fVar59, auVar51._4_4_ = fVar60 + fVar48,
             auVar51._8_4_ = fVar58 + fVar59, auVar51._12_4_ = fVar60 + fVar48,
             auVar41 = NEON_ext(auVar51,auVar51,4,1),
             auVar41._0_4_ + auVar41._4_4_ < fVar37 * fVar37)) {
            pcVar12[4] = '\0';
            pcVar12[5] = '\0';
            pcVar12[6] = '\0';
            pcVar12[7] = '\0';
            fVar37 = 0.0;
          }
          else {
            fVar37 = *(float *)(pcVar12 + 4);
            if (fVar37 < fVar38) {
              fVar37 = fVar37 + fVar49;
              *(float *)(pcVar12 + 4) = fVar37;
            }
          }
          if (fVar38 <= fVar37) {
            FUN_0156cf88(&local_c8,param_1);
            puVar1 = local_c8;
            if (local_c8 != (ulong *)0x0) {
              if (*(short *)((long)local_c8 + 0x1a) != 0) {
                psVar2 = (short *)((long)local_c8 + 0x1a);
                sVar25 = *(short *)((long)local_c8 + 0x1a);
                do {
                  sVar9 = *psVar2;
                  if (sVar9 == sVar25) {
                    cVar11 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar13) {
                      *psVar2 = sVar25 + 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    if (cVar11 != '\0') goto LAB_00e06798;
                    bVar13 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_00e06798:
                    bVar13 = false;
                  }
                  if (bVar13) {
                    plVar29 = (long *)0x0;
                    if (local_c8[2] != 0) {
                      plVar29 = (long *)(local_c8[2] - 0x28);
                    }
                    goto LAB_00e067c0;
                  }
                  sVar25 = sVar9;
                } while (sVar9 != 0);
              }
              plVar29 = (long *)0x0;
LAB_00e067c0:
              puVar3 = local_c8 + 3;
              do {
                sVar25 = (short)*puVar3;
                cVar11 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar13) {
                  *(short *)puVar3 = sVar25 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (sVar25 == 1) {
                piVar4 = (int *)((long)local_c8 + 0x1c);
                do {
                  iVar39 = *piVar4;
                  cVar11 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar13) {
                    *piVar4 = -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar39 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar39 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar39 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar18 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar18;
                  local_e8 = (ulong *)*puVar1;
                  FUN_00c44438(lVar18 + 0x8040,&local_e8);
                }
              }
              else if (sVar25 == 0) {
LAB_00e069e0:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
              if (plVar29 != (long *)0x0) {
                fVar38 = (pfVar14[0x30] * 180.0) / 3.1415927;
                fVar37 = fVar38 + 360.0;
                if (0.0 <= fVar38) {
                  fVar37 = fVar38;
                }
                local_98 = plVar29;
                (**(code **)(*plVar29 + 0x58))(plVar29);
                fVar38 = (float)FUN_0156da00(&local_98);
                fVar58 = (fVar38 * 180.0) / 3.1415927;
                fVar38 = fVar58 + 360.0;
                if (0.0 <= fVar58) {
                  fVar38 = fVar58;
                }
                (**(code **)(*plVar29 + 0x60))(plVar29);
                fVar37 = fVar37 - fVar38;
                fVar38 = fVar37 + -360.0;
                if (fVar37 <= 180.0) {
                  fVar38 = fVar37;
                }
                local_d0 = (long *)0x0;
                local_c8 = (ulong *)&DAT_ef6385841d796acf;
                local_c0 = "orbit";
                local_b8 = (int *)&DAT_00000005;
                local_e8 = (ulong *)0x30a060b5af53b096;
                pcStack_e0 = "autoBackRotationAngle";
                local_b0 = (long *)0x0;
                fVar37 = fVar38 + 360.0;
                if (-180.0 <= fVar38) {
                  fVar37 = fVar38;
                }
                local_d8 = 0x15;
                fVar38 = (float)FUN_00e06d80(lVar17,&local_c8,&local_e8);
                if (local_d0 != (long *)0x0) {
                  (**(code **)(*local_d0 + 0x20))();
                }
                if (local_b0 != (long *)0x0) {
                  (**(code **)(*local_b0 + 0x20))();
                }
                if ((fVar38 * 3.1415927) / 180.0 < ABS(fVar37)) {
                  local_b0 = (long *)0x0;
                  local_d0 = (long *)0x0;
                  local_c8 = (ulong *)&DAT_ef6385841d796acf;
                  local_c0 = "orbit";
                  local_b8 = (int *)&DAT_00000005;
                  local_e8 = (ulong *)0x6c93020fea2ea2fd;
                  pcStack_e0 = "autoBackRotationYawSpeed";
                  local_d8 = 0x18;
                  fVar38 = (float)FUN_00e06d80(lVar17,&local_c8,&local_e8);
                  if (local_d0 != (long *)0x0) {
                    (**(code **)(*local_d0 + 0x20))();
                  }
                  if (local_b0 != (long *)0x0) {
                    (**(code **)(*local_b0 + 0x20))();
                  }
                  fVar58 = ABS((fVar37 * 3.1415927) / 180.0);
                  if (1.1920929e-07 < fVar58) {
                    fVar59 = (fVar38 * 3.1415927) / 180.0;
                    fVar38 = -fVar59;
                    if (fVar37 <= 0.0) {
                      fVar38 = fVar59;
                    }
                    *(float *)(param_1 + lVar16) = fVar58 * fVar38 * fVar49;
                  }
                }
                (**(code **)(*plVar29 + 0x60))(plVar29);
              }
            }
          }
          bVar13 = true;
        }
        lVar18 = local_198[6];
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar25 = *psVar2;
          cVar11 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar10) {
            *psVar2 = sVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar25 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*local_198 + 0x50))();
        }
        else if (sVar25 == 0) {
LAB_00e06a38:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (bVar13) goto LAB_00e0587c;
      }
    }
  }
  local_b8 = (int *)0x5;
  local_b0 = (long *)0x0;
  local_e8 = (ulong *)0xe0c74df5a7a32638;
  pcStack_e0 = "targetMoveTolerance";
  local_c8 = (ulong *)&DAT_ef6385841d796acf;
  local_c0 = "orbit";
  local_d8 = 0x13;
  local_d0 = (long *)0x0;
  fVar37 = (float)FUN_00e06d80(lVar17,&local_c8,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  local_b8 = (int *)0x5;
  local_b0 = (long *)0x0;
  local_e8 = (ulong *)0x7541de9c61db48e0;
  pcStack_e0 = "autoRotationTimeTolerance";
  local_c8 = (ulong *)&DAT_ef6385841d796acf;
  local_c0 = "orbit";
  local_d8 = 0x19;
  local_d0 = (long *)0x0;
  fVar38 = (float)FUN_00e06d80(lVar17,&local_c8,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if ((*(char *)(pfVar14 + 4) != '\0') ||
     (((pcVar12[3] == '\0' && (*(char *)((long)pfVar14 + 0x13) == '\0')) ||
      (fVar58 = (pfVar14[0x2c] / fVar49) * (pfVar14[0x2c] / fVar49),
      fVar59 = (pfVar14[0x2d] / fVar49) * (pfVar14[0x2d] / fVar49),
      fVar60 = (pfVar14[0x2e] / fVar49) * (pfVar14[0x2e] / fVar49),
      fVar48 = (pfVar14[0x2f] / fVar49) * (pfVar14[0x2f] / fVar49), auVar62._0_4_ = fVar58 + fVar59,
      auVar62._4_4_ = fVar60 + fVar48, auVar62._8_4_ = fVar58 + fVar59,
      auVar62._12_4_ = fVar60 + fVar48, auVar41 = NEON_ext(auVar62,auVar62,4,1),
      auVar41._0_4_ + auVar41._4_4_ < fVar37 * fVar37)))) {
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    fVar37 = 0.0;
  }
  else {
    fVar37 = *(float *)(pcVar12 + 4);
    if (fVar37 < fVar38) {
      fVar37 = fVar37 + fVar49;
      *(float *)(pcVar12 + 4) = fVar37;
    }
  }
  if ((fVar38 <= fVar37) && (*pcVar12 != '\0')) {
    auVar41 = *(undefined1 (*) [16])(pfVar14 + 0x150);
    auVar51 = NEON_ext(auVar41,auVar41,0xc,1);
    auVar62 = NEON_fmov(0x3f800000,4);
    fVar60 = auVar41._8_4_;
    fVar48 = auVar41._4_4_;
    auVar52._4_12_ = auVar51._4_12_;
    auVar52._0_4_ = auVar41._0_4_;
    auVar54._12_4_ = auVar51._12_4_;
    auVar54._0_8_ = auVar52._0_8_;
    auVar54._8_4_ = fVar48;
    auVar53._8_8_ = auVar54._8_8_;
    auVar53._4_4_ = auVar51._0_4_;
    auVar53._0_4_ = auVar41._0_4_;
    auVar55._0_12_ = auVar53._0_12_;
    auVar55._12_4_ = auVar51._4_4_;
    auVar51 = NEON_ext(auVar55,auVar55,8,1);
    fVar43 = fVar48 * auVar41._12_4_;
    fVar45 = fVar60 * auVar41._12_4_;
    fVar56 = auVar51._4_4_ * fVar60;
    fVar57 = auVar51._8_4_ * fVar48;
    fVar37 = pfVar14[0x2c];
    fVar38 = pfVar14[0x2d];
    fVar58 = pfVar14[0x2e];
    fVar59 = pfVar14[0x2f];
    auVar33._0_4_ = fVar37 * fVar37 + fVar38 * fVar38;
    auVar33._4_4_ = fVar58 * fVar58 + fVar59 * fVar59;
    auVar33._8_4_ = fVar37 * fVar37 + fVar38 * fVar38;
    auVar33._12_4_ = fVar58 * fVar58 + fVar59 * fVar59;
    auVar41 = NEON_ext(auVar33,auVar33,4,1);
    local_b8 = (int *)0x5;
    local_b0 = (long *)0x0;
    auVar34._0_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar34._4_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar34._8_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar34._12_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar41 = NEON_frsqrte(auVar34,4);
    auVar63._0_4_ = auVar34._0_4_ * auVar41._0_4_;
    auVar63._4_4_ = auVar34._4_4_ * auVar41._4_4_;
    auVar63._8_4_ = auVar34._8_4_ * auVar41._8_4_;
    auVar63._12_4_ = auVar34._12_4_ * auVar41._12_4_;
    local_e8 = (ulong *)0xcdb36cb607ea7de2;
    pcStack_e0 = "autoRotationYawSpeed";
    local_c8 = (ulong *)&DAT_ef6385841d796acf;
    local_c0 = "orbit";
    auVar51 = NEON_frsqrts(auVar41,auVar63,4);
    auVar61._0_4_ = auVar41._0_4_ * auVar51._0_4_;
    auVar61._4_4_ = auVar41._4_4_ * auVar51._4_4_;
    auVar61._8_4_ = auVar41._8_4_ * auVar51._8_4_;
    auVar61._12_4_ = auVar41._12_4_ * auVar51._12_4_;
    auVar64._0_4_ = auVar34._0_4_ * auVar61._0_4_;
    auVar64._4_4_ = auVar34._4_4_ * auVar61._4_4_;
    auVar64._8_4_ = auVar34._8_4_ * auVar61._8_4_;
    auVar64._12_4_ = auVar34._12_4_ * auVar61._12_4_;
    iVar39 = -(uint)(auVar34._0_4_ == 0.0);
    iVar44 = -(uint)(auVar34._4_4_ == 0.0);
    iVar46 = -(uint)(auVar34._8_4_ == 0.0);
    iVar47 = -(uint)(auVar34._12_4_ == 0.0);
    auVar41 = NEON_frsqrts(auVar61,auVar64,4);
    fVar37 = fVar37 * auVar61._0_4_ * auVar41._0_4_;
    fVar38 = fVar38 * auVar61._4_4_ * auVar41._4_4_;
    fVar58 = fVar58 * auVar61._8_4_ * auVar41._8_4_;
    fVar59 = fVar59 * auVar61._12_4_ * auVar41._12_4_;
    fVar37 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                             CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                                      CONCAT11((byte)((uint)fVar37 >> 8) &
                                               ~(byte)((uint)iVar39 >> 8),
                                               SUB41(fVar37,0) & ~(byte)iVar39)));
    auVar40._0_8_ =
         CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                  CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                           CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                    CONCAT14(SUB41(fVar38,0) & ~(byte)iVar44,fVar37))));
    auVar40[8] = SUB41(fVar58,0) & ~(byte)iVar46;
    auVar40[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar40[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar40[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    auVar42[0xc] = SUB41(fVar59,0) & ~(byte)iVar47;
    auVar42._0_12_ = auVar40;
    auVar42[0xd] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar47 >> 8);
    auVar42[0xe] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
    auVar42[0xf] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
    fVar37 = ((auVar62._4_4_ - (fVar48 * fVar48 + fVar48 * fVar48)) -
             (fVar60 * fVar60 + fVar60 * fVar60)) * fVar37;
    fVar38 = (fVar57 + fVar57 + fVar45 + fVar45) * (float)((ulong)auVar40._0_8_ >> 0x20);
    fVar58 = ((fVar56 + fVar56) - (fVar43 + fVar43)) * auVar40._8_4_;
    fVar59 = auVar42._12_4_ * 0.0;
    auVar35._0_4_ = fVar37 + fVar38;
    auVar35._4_4_ = fVar58 + fVar59;
    auVar35._8_4_ = fVar37 + fVar38;
    auVar35._12_4_ = fVar58 + fVar59;
    auVar41 = NEON_ext(auVar35,auVar35,4,1);
    local_d8 = 0x14;
    local_d0 = (long *)0x0;
    fVar37 = (float)FUN_00e06d80(lVar17,&local_c8,&local_e8);
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    auVar36._0_8_ = CONCAT44(auVar41._8_4_ + auVar41._12_4_,auVar41._0_4_ + auVar41._4_4_);
    auVar36._8_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar36._12_4_ = auVar41._8_4_ + auVar41._12_4_;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
      auVar36._8_8_ = auVar36._8_8_;
    }
    fVar38 = ABS(auVar36._0_4_);
    if (1.1920929e-07 < fVar38) {
      fVar37 = (fVar37 * 3.1415927) / 180.0;
      if (0.0 <= auVar36._0_4_) {
        fVar37 = -fVar37;
      }
      *(float *)(param_1 + lVar16) = fVar38 * fVar37 * fVar49;
    }
  }
LAB_00e0587c:
  fVar37 = *pfVar14;
  local_b8 = (int *)0x5;
  local_b0 = (long *)0x0;
  local_e8 = (ulong *)0xc49c0b5bf3c56b3d;
  pcStack_e0 = "rotationYawSpeed";
  local_c8 = (ulong *)&DAT_ef6385841d796acf;
  local_c0 = "orbit";
  local_d8 = 0x10;
  local_d0 = (long *)0x0;
  fVar49 = (float)FUN_00e06d80(lVar15,&local_c8,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  fVar58 = pfVar14[1];
  local_c8 = (ulong *)&DAT_ef6385841d796acf;
  local_c0 = "orbit";
  local_b8 = (int *)0x5;
  local_b0 = (long *)0x0;
  local_e8 = (ulong *)0x9a691de104dc1bd6;
  pcStack_e0 = "rotationPitchSpeed";
  local_d8 = 0x12;
  local_d0 = (long *)0x0;
  fVar38 = (float)FUN_00e06d80(lVar15,&local_c8,&local_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  fVar59 = *(float *)(param_1 + lVar16);
  fVar60 = pfVar14[0x30];
  local_e8 = (ulong *)((ulong)local_e8 & 0xffffffff00000000);
  fVar38 = (*(float *)(param_1 + lVar6) - fVar58 * ((fVar38 * 3.1415927) / 180.0) * fVar65) +
           pfVar14[0x31];
  local_138 = (ulong *)CONCAT44(local_138._4_4_,0x3f800000);
  ppuVar7 = &local_138;
  if (fVar38 <= 1.0) {
    ppuVar7 = &local_c8;
  }
  local_c8 = (ulong *)CONCAT44(local_c8._4_4_,fVar38);
  ppuVar8 = &local_e8;
  if (0.0 <= fVar38) {
    ppuVar8 = ppuVar7;
  }
  uVar50 = *(undefined4 *)ppuVar8;
  *(undefined4 *)(param_1 + lVar6) = 0;
  *(undefined4 *)(param_1 + lVar16) = 0;
  (*pcVar5)((fVar59 - fVar37 * ((fVar49 * 3.1415927) / 180.0) * fVar65) + fVar60,uVar50,fVar60,
            param_1);
  return;
code_r0x00e06514:
  sVar25 = sVar9;
  if (sVar9 == 0) goto LAB_00e05f40;
  goto LAB_00e064e8;
}


