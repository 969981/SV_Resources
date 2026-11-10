/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0211dd70; name: FUN_0211dd70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211dd70(undefined1 param_1 [16],undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  ulong uVar22;
  ushort *puVar23;
  long lVar24;
  short sVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 uVar29;
  float fVar30;
  float extraout_var;
  float extraout_var_00;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float extraout_s0;
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar42;
  int iVar43;
  float extraout_var_01;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  float fVar65;
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 local_140;
  float fStack_138;
  long local_130;
  float fStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined8 local_100 [7];
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  ulong local_38;
  
  piVar15 = (int *)*param_2;
  uVar29 = param_1._8_8_;
  auVar62._0_8_ = param_1._0_8_;
  puVar23 = (ushort *)((long)piVar15 - (long)*piVar15);
  if (*puVar23 < 0xb) {
    iVar20 = 0;
    iVar13 = 0;
    iVar7 = 0;
    if (8 < *puVar23) goto LAB_0211ddc4;
  }
  else {
    iVar7 = 0;
    if ((ulong)puVar23[5] != 0) {
      iVar7 = *(int *)((long)piVar15 + (ulong)puVar23[5]);
    }
LAB_0211ddc4:
    iVar20 = iVar7;
    if ((ulong)puVar23[4] == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)((long)piVar15 + (ulong)puVar23[4]);
    }
  }
  if (iVar20 - iVar13 == 1) {
    return;
  }
  local_b0 = param_2[0x22];
  uStack_a8 = param_2[0x23];
  local_a0 = param_2[0x24];
  plVar21 = (long *)param_2[0x25];
  local_98 = plVar21;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
  }
  else {
    (*(code *)param_2[2])(&local_90,param_2 + 6,&local_b0);
    plVar21 = local_98;
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
  if (local_90 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_90 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_90 + 0x1a);
    sVar25 = *(short *)((long)local_90 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar25) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0211dec0;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0211dec0:
        bVar12 = false;
      }
      puVar11 = PTR_PTR_047d9248;
      if (bVar12) {
        lVar19 = local_90[2];
        plVar21 = (long *)(lVar19 + -0x28);
        if (lVar19 != 0) {
          uVar16 = param_2[0x2c];
          if (uVar16 == 0) {
            local_140 = 0;
            fStack_138 = 0.0;
            fStack_118 = 0.0;
            local_120 = 0.0;
            fStack_11c = 0.0;
            fStack_108 = 0.0;
            local_110 = 0.0;
            fStack_10c = 0.0;
            fStack_128 = 0.0;
            local_130 = 0;
            goto LAB_0211e298;
          }
          uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar26 = uVar16 - 1 & 0x55c0d7a581349f0f;
          }
          else {
            uVar26 = 0x55c0d7a581349f0f;
            if (uVar16 < 0x55c0d7a581349f10) {
              uVar26 = 0;
              if (uVar16 != 0) {
                uVar26 = 0x55c0d7a581349f0f / uVar16;
              }
              uVar26 = 0x55c0d7a581349f0f - uVar26 * uVar16;
            }
          }
          lVar24 = param_2[0x2b];
          fStack_108 = 0.0;
          local_110 = 0.0;
          fStack_10c = 0.0;
          plVar27 = *(long **)(lVar24 + uVar26 * 8);
          if ((plVar27 == (long *)0x0) || (plVar27 = (long *)*plVar27, plVar27 == (long *)0x0))
          goto LAB_0211e004;
          if (1 < uVar22) goto LAB_0211dfc4;
          goto LAB_0211df68;
        }
        break;
      }
      sVar25 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_0211e66c;
LAB_0211dfc4:
  do {
    uVar28 = plVar27[1];
    if (uVar28 == 0x55c0d7a581349f0f) {
      if (plVar27[2] == 0x55c0d7a581349f0f) goto LAB_0211dffc;
    }
    else {
      if (uVar16 <= uVar28) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar28 / uVar16;
        }
        uVar28 = uVar28 - uVar5 * uVar16;
      }
      if (uVar28 != uVar26) break;
    }
    plVar27 = (long *)*plVar27;
  } while (plVar27 != (long *)0x0);
  goto LAB_0211e004;
LAB_0211dffc:
  fStack_108 = (float)plVar27[7];
  local_110 = (float)plVar27[6];
  fStack_10c = (float)((ulong)plVar27[6] >> 0x20);
  goto LAB_0211e004;
LAB_0211e0d8:
  fStack_118 = (float)plVar27[7];
  local_120 = (float)plVar27[6];
  fStack_11c = (float)((ulong)plVar27[6] >> 0x20);
  goto LAB_0211e0e0;
LAB_0211e1b4:
  local_130 = plVar27[6];
  fStack_128 = (float)plVar27[7];
  goto LAB_0211e1bc;
LAB_0211e290:
  local_140 = plVar27[6];
  fStack_138 = (float)plVar27[7];
  goto LAB_0211e298;
LAB_0211e654:
  if ((char)plVar27[6] == '\0') goto LAB_0211e698;
  goto LAB_0211e65c;
  while (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0) {
LAB_0211df68:
    if (plVar27[1] == 0x55c0d7a581349f0f) {
      if (plVar27[2] == 0x55c0d7a581349f0f) goto LAB_0211dffc;
    }
    else if ((plVar27[1] & uVar16 - 1) != uVar26) break;
  }
LAB_0211e004:
  if (uVar22 < 2) {
    uVar26 = uVar16 - 1 & 0x17ea73508677cdff;
  }
  else {
    uVar26 = 0x17ea73508677cdff;
    if (uVar16 < 0x17ea73508677ce00) {
      uVar26 = 0;
      if (uVar16 != 0) {
        uVar26 = 0x17ea73508677cdff / uVar16;
      }
      uVar26 = 0x17ea73508677cdff - uVar26 * uVar16;
    }
  }
  plVar27 = *(long **)(lVar24 + uVar26 * 8);
  fStack_118 = 0.0;
  local_120 = 0.0;
  fStack_11c = 0.0;
  if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
    if (uVar22 < 2) {
      do {
        if (plVar27[1] == 0x17ea73508677cdff) {
          if (plVar27[2] == 0x17ea73508677cdff) goto LAB_0211e0d8;
        }
        else if ((plVar27[1] & uVar16 - 1) != uVar26) break;
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
    else {
      do {
        uVar28 = plVar27[1];
        if (uVar28 == 0x17ea73508677cdff) {
          if (plVar27[2] == 0x17ea73508677cdff) goto LAB_0211e0d8;
        }
        else {
          if (uVar16 <= uVar28) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar28 / uVar16;
            }
            uVar28 = uVar28 - uVar5 * uVar16;
          }
          if (uVar28 != uVar26) break;
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
  }
LAB_0211e0e0:
  if (uVar22 < 2) {
    uVar26 = uVar16 - 1 & 0x306313b8c647eda4;
  }
  else {
    uVar26 = 0x306313b8c647eda4;
    if (uVar16 < 0x306313b8c647eda5) {
      uVar26 = 0;
      if (uVar16 != 0) {
        uVar26 = 0x306313b8c647eda4 / uVar16;
      }
      uVar26 = 0x306313b8c647eda4 - uVar26 * uVar16;
    }
  }
  plVar27 = *(long **)(lVar24 + uVar26 * 8);
  fStack_128 = 0.0;
  local_130 = 0;
  if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
    if (uVar22 < 2) {
      do {
        if (plVar27[1] == 0x306313b8c647eda4) {
          if (plVar27[2] == 0x306313b8c647eda4) goto LAB_0211e1b4;
        }
        else if ((plVar27[1] & uVar16 - 1) != uVar26) break;
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
    else {
      do {
        uVar28 = plVar27[1];
        if (uVar28 == 0x306313b8c647eda4) {
          if (plVar27[2] == 0x306313b8c647eda4) goto LAB_0211e1b4;
        }
        else {
          if (uVar16 <= uVar28) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar28 / uVar16;
            }
            uVar28 = uVar28 - uVar5 * uVar16;
          }
          if (uVar28 != uVar26) break;
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
  }
LAB_0211e1bc:
  if (uVar22 < 2) {
    uVar26 = uVar16 - 1 & 0xa58c5a85fa20a7f4;
  }
  else {
    uVar26 = 0xa58c5a85fa20a7f4;
    if (uVar16 < 0xa58c5a85fa20a7f5) {
      uVar26 = 0;
      if (uVar16 != 0) {
        uVar26 = 0xa58c5a85fa20a7f4 / uVar16;
      }
      uVar26 = 0xa58c5a85fa20a7f4 - uVar26 * uVar16;
    }
  }
  plVar27 = *(long **)(lVar24 + uVar26 * 8);
  fStack_138 = 0.0;
  local_140 = 0;
  if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
    if (uVar22 < 2) {
      do {
        if (plVar27[1] == 0xa58c5a85fa20a7f4) {
          if (plVar27[2] == -0x5a73a57a05df580c) goto LAB_0211e290;
        }
        else if ((plVar27[1] & uVar16 - 1) != uVar26) break;
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
    else {
      do {
        uVar22 = plVar27[1];
        if (uVar22 == 0xa58c5a85fa20a7f4) {
          if (plVar27[2] == -0x5a73a57a05df580c) goto LAB_0211e290;
        }
        else {
          if (uVar16 <= uVar22) {
            uVar28 = 0;
            if (uVar16 != 0) {
              uVar28 = uVar22 / uVar16;
            }
            uVar22 = uVar22 - uVar28 * uVar16;
          }
          if (uVar22 != uVar26) break;
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
  }
LAB_0211e298:
  piVar15 = (int *)*param_2;
  if (((*(ushort *)((long)piVar15 - (long)*piVar15) < 0x17) ||
      (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[0xb], uVar16 == 0)) ||
     (puVar17 = (uint *)((long)piVar15 + uVar16),
     puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17), *puVar17 < 5)) {
LAB_0211e30c:
    uVar16 = 0;
  }
  else {
    puVar17 = puVar17 + 5;
    piVar15 = (int *)((long)puVar17 + (ulong)*puVar17);
    puVar17 = (uint *)((long)piVar15 + (ulong)*(ushort *)((long)piVar15 + (8 - (long)*piVar15)));
    piVar15 = (int *)((long)puVar17 + (ulong)*puVar17);
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
       (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar16 == 0))
    goto LAB_0211e30c;
    uVar16 = (ulong)*(uint *)((long)piVar15 + uVar16);
  }
  auVar62._8_8_ = uVar29;
  fVar30 = (float)(**(code **)(PTR_PTR_047d9248 + uVar16 * 8))(auVar62);
  auVar51._8_8_ = uVar29;
  auVar51._0_8_ = auVar62._0_8_;
  fVar31 = (float)(**(code **)(puVar11 + uVar16 * 8))(auVar51);
  auVar54._8_8_ = uVar29;
  auVar54._0_8_ = auVar62._0_8_;
  fVar32 = (float)(**(code **)(puVar11 + uVar16 * 8))(auVar54);
  auVar57._8_8_ = uVar29;
  auVar57._0_8_ = auVar62._0_8_;
  fVar33 = (float)(**(code **)(puVar11 + uVar16 * 8))(auVar57);
  auVar37._8_8_ = uVar29;
  auVar37._0_8_ = auVar62._0_8_;
  fVar34 = (float)(**(code **)(puVar11 + uVar16 * 8))(auVar37);
  auVar38._8_8_ = uVar29;
  auVar38._0_8_ = auVar62._0_8_;
  fVar35 = (float)(**(code **)(puVar11 + uVar16 * 8))(auVar38);
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_00d0a71c(&local_c0,&local_90);
  lVar24 = FUN_01180e7c(param_2,&local_c0);
  puVar14 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c0 + 3);
    do {
      sVar25 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar25 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar25 == 1) {
      piVar15 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar13 = *piVar15;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_100[0] = *puVar14;
        FUN_00c44438(lVar18 + 0x8040,local_100);
      }
    }
    else if (sVar25 == 0) goto LAB_0211e5f4;
  }
  if (lVar24 != 0) {
    local_110 = local_110 + fVar30 * (local_120 - local_110);
    fStack_10c = fStack_10c + fVar31 * (fStack_11c - fStack_10c);
    piVar15 = (int *)*param_2;
    fStack_108 = fStack_108 + fVar32 * (fStack_118 - fStack_108);
    puVar23 = (ushort *)((long)piVar15 - (long)*piVar15);
    if (((0x16 < *puVar23) && ((ulong)puVar23[0xb] != 0)) &&
       (puVar17 = (uint *)((long)piVar15 + (ulong)puVar23[0xb]),
       puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17), 5 < *puVar17)) {
      puVar17 = puVar17 + 6;
      piVar2 = (int *)((long)puVar17 + (ulong)*puVar17);
      puVar17 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
      piVar2 = (int *)((long)puVar17 + (ulong)*puVar17);
      if (((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
          (uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar16 != 0)) &&
         (*(char *)((long)piVar2 + uVar16) != '\0')) {
        uVar16 = param_2[0x2c];
        if (uVar16 == 0) {
LAB_0211e6a8:
          fStack_118 = 0.0;
          local_120 = 0.0;
          fStack_11c = 0.0;
          if ((ulong)puVar23[0xb] != 0) {
            puVar17 = (uint *)((long)piVar15 + (ulong)puVar23[0xb]);
            puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17);
            fStack_118 = 0.0;
            local_120 = 0.0;
            fStack_11c = 0.0;
            if (6 < *puVar17) {
              puVar17 = puVar17 + 7;
              piVar15 = (int *)((long)puVar17 + (ulong)*puVar17);
              puVar17 = (uint *)((long)piVar15 +
                                (ulong)*(ushort *)((long)piVar15 + (8 - (long)*piVar15)));
              piVar15 = (int *)((long)puVar17 + (ulong)*puVar17);
              auVar10 = *(undefined1 (*) [12])
                         ((long)piVar15 + (ulong)*(ushort *)((long)piVar15 + (4 - (long)*piVar15)));
              fStack_118 = auVar10._8_4_;
              local_120 = auVar10._0_4_;
              fStack_11c = auVar10._4_4_;
            }
          }
        }
        else {
          uVar22 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar26 = uVar16 - 1 & 0x178243c67380d9e6;
          }
          else {
            uVar26 = 0x178243c67380d9e6;
            if (uVar16 < 0x178243c67380d9e7) {
              uVar26 = 0;
              if (uVar16 != 0) {
                uVar26 = 0x178243c67380d9e6 / uVar16;
              }
              uVar26 = 0x178243c67380d9e6 - uVar26 * uVar16;
            }
          }
          plVar27 = *(long **)(param_2[0x2b] + uVar26 * 8);
          if ((plVar27 == (long *)0x0) || (plVar27 = (long *)*plVar27, plVar27 == (long *)0x0))
          goto LAB_0211e6a8;
          if (uVar22 < 2) {
            do {
              if (plVar27[1] == 0x178243c67380d9e6) {
                if (plVar27[2] == 0x178243c67380d9e6) goto LAB_0211e654;
              }
              else if ((plVar27[1] & uVar16 - 1) != uVar26) break;
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
          else {
            do {
              uVar22 = plVar27[1];
              if (uVar22 == 0x178243c67380d9e6) {
                if (plVar27[2] == 0x178243c67380d9e6) goto LAB_0211e654;
              }
              else {
                if (uVar16 <= uVar22) {
                  uVar28 = 0;
                  if (uVar16 != 0) {
                    uVar28 = uVar22 / uVar16;
                  }
                  uVar22 = uVar22 - uVar28 * uVar16;
                }
                if (uVar22 != uVar26) break;
              }
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
LAB_0211e698:
          fStack_118 = 0.0;
          local_120 = 0.0;
          fStack_11c = 0.0;
          if (0x16 < *puVar23) goto LAB_0211e6a8;
        }
        if (((*PTR_DAT_047d8c00 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c00);
        }
        lVar18 = *(long *)PTR_DAT_047d8c08;
        *(long *)PTR_DAT_047d8c10 = lVar18;
        uVar29 = *(undefined8 *)(lVar18 + 0x70);
        FUN_0211a080(lVar24);
        auVar62 = *(undefined1 (*) [16])(lVar24 + 0x80);
        auVar51 = *(undefined1 (*) [16])(lVar24 + 0x90);
        local_c8 = 0;
        auVar47._0_4_ = local_120 + extraout_s0;
        auVar47._4_4_ = fStack_11c + extraout_var;
        auVar47._8_4_ = fStack_118 + extraout_var_00;
        auVar47._12_4_ = extraout_var_01 + 0.0;
        auVar44._0_4_ =
             local_120 +
             local_110 +
             (extraout_s0 -
             (auVar51._0_4_ + auVar62._0_4_ + *(float *)(lVar24 + 0x60) + *(float *)(lVar24 + 0x50))
             );
        auVar44._4_4_ =
             fStack_11c +
             fStack_10c +
             (extraout_var -
             (auVar51._4_4_ + auVar62._4_4_ + *(float *)(lVar24 + 100) + *(float *)(lVar24 + 0x54)))
        ;
        auVar44._8_4_ =
             fStack_118 +
             fStack_108 +
             (extraout_var_00 -
             (auVar51._8_4_ + auVar62._8_4_ + *(float *)(lVar24 + 0x68) + *(float *)(lVar24 + 0x58))
             );
        auVar44._12_4_ =
             (extraout_var_01 -
             (auVar51._12_4_ +
             auVar62._12_4_ + *(float *)(lVar24 + 0x6c) + *(float *)(lVar24 + 0x5c))) + 0.0 + 0.0;
        local_38 = local_38 & 0xffffffffff000000;
        uVar16 = FUN_00c7a0cc(auVar47,auVar44,auVar47,auVar62,auVar51,uVar29,0xffffffff,local_100,0,
                              &local_38);
        if ((uVar16 & 1) != 0) {
          local_38 = 0x178243c67380d9e6;
          puVar14 = (undefined8 *)FUN_01235878(param_2 + 0x2b,&local_38);
          puVar11 = PTR_LAB_047dcd90;
          *(undefined1 *)(puVar14 + 2) = 1;
          *puVar14 = puVar11;
          FUN_012c7df0(&local_c8);
          goto LAB_0211e65c;
        }
        FUN_012c7df0(&local_c8);
      }
    }
    fVar31 = (float)((ulong)local_130 >> 0x20);
    fVar30 = (float)local_130 + fVar33 * ((float)local_140 - (float)local_130);
    fVar31 = fVar31 + fVar34 * (local_140._4_4_ - fVar31);
    fStack_128 = fStack_128 + fVar35 * (fStack_138 - fStack_128);
    uVar29 = CONCAT44(fStack_10c,local_110);
    *(ulong *)(lVar24 + 0x58) = (ulong)(uint)fStack_108;
    *(undefined8 *)(lVar24 + 0x50) = uVar29;
    *(ulong *)(lVar24 + 200) = (ulong)(uint)fStack_128;
    *(ulong *)(lVar24 + 0xc0) = CONCAT44(fVar31,fVar30);
    *(undefined1 *)(lVar24 + 0xe0) = 1;
    *(ulong *)(lVar19 + 0xc0) = (ulong)(uint)fStack_108;
    *(undefined8 *)(lVar19 + 0xb8) = uVar29;
    if (*(char *)(lVar19 + 0xcc) == '\0') {
      *(undefined1 *)(lVar19 + 0xcc) = 1;
      (**(code **)(*plVar21 + 0x78))(plVar21);
      bVar12 = *(char *)(lVar19 + 0xcc) == '\0';
    }
    else {
      bVar12 = false;
    }
    fVar30 = fVar30 * 0.5;
    fVar31 = fVar31 * 0.5;
    fStack_128 = fStack_128 * 0.5;
    iVar13 = -(uint)(fVar30 == 0.0);
    iVar7 = -(uint)(fVar31 == 0.0);
    iVar20 = -(uint)(fStack_128 == 0.0);
    iVar36 = -(uint)(ABS(fVar30) == INFINITY);
    iVar42 = -(uint)(ABS(fVar31) == INFINITY);
    iVar43 = -(uint)(ABS(fStack_128) == INFINITY);
    auVar39[0] = ~(byte)iVar36;
    auVar39[1] = ~(byte)((uint)iVar36 >> 8);
    auVar39[2] = ~(byte)((uint)iVar36 >> 0x10);
    auVar39[3] = ~(byte)((uint)iVar36 >> 0x18);
    auVar39[4] = ~(byte)iVar42;
    auVar39[5] = ~(byte)((uint)iVar42 >> 8);
    auVar39[6] = ~(byte)((uint)iVar42 >> 0x10);
    auVar39[7] = ~(byte)((uint)iVar42 >> 0x18);
    auVar39[8] = ~(byte)iVar43;
    auVar39[9] = ~(byte)((uint)iVar43 >> 8);
    auVar39[10] = ~(byte)((uint)iVar43 >> 0x10);
    auVar39[0xb] = ~(byte)((uint)iVar43 >> 0x18);
    auVar39[0xc] = 0xff;
    auVar39[0xd] = 0xff;
    auVar39[0xe] = 0xff;
    auVar39[0xf] = 0xff;
    auVar55._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000) + fVar30 * 0.15915494);
    auVar55._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar31) & 0x80000000 ^ 0xbf000000) + fVar31 * 0.15915494);
    auVar55._8_4_ =
         (int)((float)(-(uint)(0.0 <= fStack_128) & 0x80000000 ^ 0xbf000000) +
              fStack_128 * 0.15915494);
    auVar55._12_4_ = 0;
    auVar62 = NEON_scvtf(auVar55,4);
    fVar32 = fVar30 + 1.5707964;
    fVar33 = fVar31 + 1.5707964;
    fVar34 = fStack_128 + 1.5707964;
    auVar58._0_4_ = fVar30 - auVar62._0_4_ * 6.2831855;
    auVar58._4_4_ = fVar31 - auVar62._4_4_ * 6.2831855;
    auVar58._8_4_ = fStack_128 - auVar62._8_4_ * 6.2831855;
    auVar58._12_4_ = 0.0 - auVar62._12_4_ * 6.2831855;
    auVar63._0_4_ = -(uint)(auVar58._0_4_ < -1.5707964);
    auVar63._4_4_ = -(uint)(auVar58._4_4_ < -1.5707964);
    auVar63._8_4_ = -(uint)(auVar58._8_4_ < -1.5707964);
    auVar63._12_4_ = -(uint)(auVar58._12_4_ < -1.5707964);
    iVar36 = -(uint)(ABS(fVar32) == INFINITY);
    iVar42 = -(uint)(ABS(fVar33) == INFINITY);
    iVar43 = -(uint)(ABS(fVar34) == INFINITY);
    auVar48[0] = ~(byte)iVar36;
    auVar48[1] = ~(byte)((uint)iVar36 >> 8);
    auVar48[2] = ~(byte)((uint)iVar36 >> 0x10);
    auVar48[3] = ~(byte)((uint)iVar36 >> 0x18);
    auVar48[4] = ~(byte)iVar42;
    auVar48[5] = ~(byte)((uint)iVar42 >> 8);
    auVar48[6] = ~(byte)((uint)iVar42 >> 0x10);
    auVar48[7] = ~(byte)((uint)iVar42 >> 0x18);
    auVar48[8] = ~(byte)iVar43;
    auVar48[9] = ~(byte)((uint)iVar43 >> 8);
    auVar48[10] = ~(byte)((uint)iVar43 >> 0x10);
    auVar48[0xb] = ~(byte)((uint)iVar43 >> 0x18);
    auVar48[0xc] = 0xff;
    auVar48[0xd] = 0xff;
    auVar48[0xe] = 0xff;
    auVar48[0xf] = 0xff;
    auVar8._4_4_ = -3.1415927 - auVar58._4_4_;
    auVar8._0_4_ = -3.1415927 - auVar58._0_4_;
    auVar8._8_4_ = -3.1415927 - auVar58._8_4_;
    auVar8._12_4_ = -3.1415927 - auVar58._12_4_;
    auVar58 = auVar58 ^ (auVar58 ^ auVar8) & auVar63;
    auVar64._0_4_ = -(uint)(1.5707964 < auVar58._0_4_);
    auVar64._4_4_ = -(uint)(1.5707964 < auVar58._4_4_);
    auVar64._8_4_ = -(uint)(1.5707964 < auVar58._8_4_);
    auVar64._12_4_ = -(uint)(1.5707964 < auVar58._12_4_);
    auVar45._0_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar32) & 0x80000000 ^ 0x3f000000) + fVar32 * 0.15915494);
    auVar45._4_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar33) & 0x80000000 ^ 0x3f000000) + fVar33 * 0.15915494);
    auVar45._8_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar34) & 0x80000000 ^ 0x3f000000) + fVar34 * 0.15915494);
    auVar45._12_4_ = 0;
    auVar62 = NEON_scvtf(auVar45,4);
    fVar32 = fVar32 - auVar62._0_4_ * 6.2831855;
    fVar33 = fVar33 - auVar62._4_4_ * 6.2831855;
    fVar34 = fVar34 - auVar62._8_4_ * 6.2831855;
    fVar30 = 1.5707964 - auVar62._12_4_ * 6.2831855;
    auVar9._4_4_ = 3.1415927 - auVar58._4_4_;
    auVar9._0_4_ = 3.1415927 - auVar58._0_4_;
    auVar9._8_4_ = 3.1415927 - auVar58._8_4_;
    auVar9._12_4_ = 3.1415927 - auVar58._12_4_;
    auVar58 = auVar58 ^ (auVar58 ^ auVar9) & auVar64;
    fVar31 = auVar58._0_4_;
    fVar61 = fVar31 * fVar31;
    fVar35 = auVar58._4_4_;
    fVar65 = fVar35 * fVar35;
    fVar59 = auVar58._8_4_;
    fVar66 = fVar59 * fVar59;
    fVar60 = auVar58._12_4_;
    fVar67 = fVar60 * fVar60;
    fVar32 = (float)((uint)fVar32 ^
                    ((uint)fVar32 ^ (uint)(-3.1415927 - fVar32)) & -(uint)(fVar32 < -1.5707964));
    fVar33 = (float)((uint)fVar33 ^
                    ((uint)fVar33 ^ (uint)(-3.1415927 - fVar33)) & -(uint)(fVar33 < -1.5707964));
    fVar34 = (float)((uint)fVar34 ^
                    ((uint)fVar34 ^ (uint)(-3.1415927 - fVar34)) & -(uint)(fVar34 < -1.5707964));
    fVar30 = (float)((uint)fVar30 ^
                    ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964));
    auVar40._8_4_ = 0x7fc00000;
    auVar40._0_8_ = 0x7fc000007fc00000;
    auVar40._12_4_ = 0x7fc00000;
    fVar32 = (float)((uint)fVar32 ^
                    ((uint)fVar32 ^ (uint)(3.1415927 - fVar32)) & -(uint)(1.5707964 < fVar32));
    fVar33 = (float)((uint)fVar33 ^
                    ((uint)fVar33 ^ (uint)(3.1415927 - fVar33)) & -(uint)(1.5707964 < fVar33));
    fVar34 = (float)((uint)fVar34 ^
                    ((uint)fVar34 ^ (uint)(3.1415927 - fVar34)) & -(uint)(1.5707964 < fVar34));
    fVar30 = (float)((uint)fVar30 ^
                    ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
    auVar62 = NEON_fmov(0x3f800000,4);
    fVar68 = fVar32 * fVar32;
    fVar69 = fVar33 * fVar33;
    fVar70 = fVar34 * fVar34;
    fVar71 = fVar30 * fVar30;
    auVar46._0_4_ =
         fVar32 * (auVar62._0_4_ +
                  fVar68 * (fVar68 * (fVar68 * (fVar68 * (fVar68 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar46._4_4_ =
         fVar33 * (auVar62._4_4_ +
                  fVar69 * (fVar69 * (fVar69 * (fVar69 * (fVar69 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar46._8_4_ =
         fVar34 * (auVar62._8_4_ +
                  fVar70 * (fVar70 * (fVar70 * (fVar70 * (fVar70 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar46._12_4_ =
         fVar30 * (auVar62._12_4_ +
                  fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar46 = auVar46 ^ (auVar46 ^ auVar40) & ~auVar48;
    auVar6[1] = ~(byte)((uint)iVar13 >> 8);
    auVar6[0] = ~(byte)iVar13;
    auVar6[2] = ~(byte)((uint)iVar13 >> 0x10);
    auVar6[3] = ~(byte)((uint)iVar13 >> 0x18);
    auVar6[4] = ~(byte)iVar7;
    auVar6[5] = ~(byte)((uint)iVar7 >> 8);
    auVar6[6] = ~(byte)((uint)iVar7 >> 0x10);
    auVar6[7] = ~(byte)((uint)iVar7 >> 0x18);
    auVar6[8] = ~(byte)iVar20;
    auVar6[9] = ~(byte)((uint)iVar20 >> 8);
    auVar6[10] = ~(byte)((uint)iVar20 >> 0x10);
    auVar6[0xb] = ~(byte)((uint)iVar20 >> 0x18);
    auVar6._12_4_ = 0;
    auVar49._0_4_ =
         fVar31 * (auVar62._0_4_ +
                  fVar61 * (fVar61 * (fVar61 * (fVar61 * (fVar61 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar49._4_4_ =
         fVar35 * (auVar62._4_4_ +
                  fVar65 * (fVar65 * (fVar65 * (fVar65 * (fVar65 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar49._8_4_ =
         fVar59 * (auVar62._8_4_ +
                  fVar66 * (fVar66 * (fVar66 * (fVar66 * (fVar66 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar49._12_4_ =
         fVar60 * (auVar62._12_4_ +
                  fVar67 * (fVar67 * (fVar67 * (fVar67 * (fVar67 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar49 = auVar49 ^ (auVar49 ^ auVar40) & ~auVar39;
    fVar33 = auVar49._4_4_;
    auVar56._4_4_ = fVar33;
    auVar56._0_4_ = fVar33;
    auVar56._8_4_ = fVar33;
    auVar56._12_4_ = fVar33;
    auVar40 = auVar40 ^ (auVar40 ^ auVar46 ^ (auVar46 ^ auVar62) & ~auVar6) & auVar39;
    fVar30 = auVar40._4_4_;
    auVar50._4_4_ = fVar30;
    auVar50._0_4_ = fVar30;
    auVar50._8_4_ = fVar30;
    auVar50._12_4_ = fVar30;
    fVar31 = auVar40._8_4_;
    auVar53._4_4_ = fVar31;
    auVar53._0_4_ = fVar31;
    auVar53._8_4_ = fVar31;
    auVar53._12_4_ = fVar31;
    auVar51 = NEON_ext(auVar50,auVar40,0xc,1);
    auVar54 = NEON_ext(auVar53,auVar40,8,1);
    auVar57 = NEON_ext(auVar56,auVar49,0xc,1);
    fVar32 = auVar49._8_4_;
    auVar52._4_4_ = fVar32;
    auVar52._0_4_ = fVar32;
    auVar52._8_4_ = fVar32;
    auVar52._12_4_ = fVar32;
    auVar62 = NEON_ext(auVar52,auVar49,8,1);
    auVar41._0_8_ =
         CONCAT44(auVar54._4_4_ * fVar33 * auVar51._4_4_ +
                  auVar62._4_4_ * auVar57._4_4_ * fVar30 * (float)((ulong)_DAT_03cac210 >> 0x20),
                  auVar54._0_4_ * auVar49._0_4_ * auVar51._0_4_ +
                  auVar62._0_4_ * auVar57._0_4_ * auVar40._0_4_ * (float)_DAT_03cac210);
    auVar41._8_4_ =
         auVar54._8_4_ * fVar32 * auVar51._8_4_ +
         auVar62._8_4_ * auVar57._8_4_ * fVar31 * (float)_UNK_03cac218;
    auVar41._12_4_ =
         auVar54._12_4_ * auVar40._0_4_ * auVar51._12_4_ +
         auVar62._12_4_ * auVar57._12_4_ * auVar49._0_4_ * (float)((ulong)_UNK_03cac218 >> 0x20);
    *(long *)(lVar19 + 0xb0) = auVar41._8_8_;
    *(undefined8 *)(lVar19 + 0xa8) = auVar41._0_8_;
    if (bVar12) {
      *(undefined1 *)(lVar19 + 0xcc) = 1;
      (**(code **)(*plVar21 + 0x78))(plVar21);
    }
  }
LAB_0211e65c:
  (**(code **)(*plVar21 + 0x60))(plVar21);
LAB_0211e66c:
  puVar14 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar25 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar25 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar25 == 1) {
      piVar15 = (int *)((long)local_90 + 0x1c);
      do {
        iVar13 = *piVar15;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_100[0] = *puVar14;
        FUN_00c44438(lVar19 + 0x8040,local_100);
      }
    }
    else if (sVar25 == 0) {
LAB_0211e5f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


