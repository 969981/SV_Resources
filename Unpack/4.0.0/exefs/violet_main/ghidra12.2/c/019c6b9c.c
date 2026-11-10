/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c6b9c; name: FUN_019c6b9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019c6b9c(undefined8 *param_1)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  short sVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  int iVar25;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  long local_90;
  long lStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  piVar12 = (int *)*param_1;
  puVar16 = (ushort *)((long)piVar12 - (long)*piVar12);
  uVar2 = *puVar16;
  if (uVar2 < 0xb) {
    iVar21 = 0;
    iVar10 = 0;
    iVar6 = 0;
    if (8 < uVar2) goto LAB_019c6bd8;
  }
  else {
    iVar6 = 0;
    if ((ulong)puVar16[5] != 0) {
      iVar6 = *(int *)((long)piVar12 + (ulong)puVar16[5]);
    }
LAB_019c6bd8:
    iVar21 = iVar6;
    iVar10 = 0;
    if ((ulong)puVar16[4] != 0) {
      iVar10 = *(int *)((long)piVar12 + (ulong)puVar16[4]);
    }
  }
  if (iVar21 - iVar10 == 1) {
    return;
  }
  if (((0x16 < uVar2) && ((ulong)puVar16[0xb] != 0)) &&
     (puVar13 = (uint *)((long)piVar12 + (ulong)puVar16[0xb]),
     puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13), 5 < *puVar13)) {
    puVar13 = puVar13 + 6;
    piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
    puVar13 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (8 - (long)*piVar12)));
    piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
    if (((4 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
        (uVar17 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar17 != 0)) &&
       ((*(char *)((long)piVar12 + uVar17) != '\0' && (uVar17 = param_1[0x2c], uVar17 != 0)))) {
      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar17 - 1 & 0x178243c67380d9e6;
      }
      else {
        uVar19 = 0x178243c67380d9e6;
        if (uVar17 < 0x178243c67380d9e7) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = 0x178243c67380d9e6 / uVar17;
          }
          uVar19 = 0x178243c67380d9e6 - uVar19 * uVar17;
        }
      }
      plVar22 = *(long **)(param_1[0x2b] + uVar19 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar22[1] == 0x178243c67380d9e6) {
              if (plVar22[2] == 0x178243c67380d9e6) goto LAB_019c6d80;
            }
            else if ((plVar22[1] & uVar17 - 1) != uVar19) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar22[1];
            if (uVar18 == 0x178243c67380d9e6) {
              if (plVar22[2] == 0x178243c67380d9e6) goto LAB_019c6d80;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar24 = 0;
                if (uVar17 != 0) {
                  uVar24 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar24 * uVar17;
              }
              if (uVar18 != uVar19) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_019c6d88;
LAB_019c6d80:
  if ((char)plVar22[6] != '\0') {
    return;
  }
LAB_019c6d88:
  local_60 = param_1[0x22];
  uStack_58 = param_1[0x23];
  local_50 = param_1[0x24];
  plVar22 = (long *)param_1[0x25];
  local_48 = plVar22;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_40,param_1 + 6,&local_60);
    plVar22 = local_48;
  }
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_40 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_40 + 0x1a);
    sVar20 = *(short *)((long)local_40 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar20) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_019c6e10;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019c6e10:
        bVar9 = false;
      }
      if (bVar9) {
        lVar14 = local_40[2];
        plVar22 = (long *)(lVar14 + -0x28);
        if (lVar14 == 0) goto LAB_019c72d0;
        uVar17 = param_1[0x2c];
        if (uVar17 == 0) {
          auVar50 = ZEXT816(0);
          lStack_88 = 0;
          local_90 = 0;
          goto LAB_019c7050;
        }
        uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = uVar17 - 1 & 0x17ea73508677cdff;
        }
        else {
          uVar19 = 0x17ea73508677cdff;
          if (uVar17 < 0x17ea73508677ce00) {
            uVar19 = 0;
            if (uVar17 != 0) {
              uVar19 = 0x17ea73508677cdff / uVar17;
            }
            uVar19 = 0x17ea73508677cdff - uVar19 * uVar17;
          }
        }
        lStack_88 = 0;
        local_90 = 0;
        plVar23 = *(long **)(param_1[0x2b] + uVar19 * 8);
        if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
        goto LAB_019c6f78;
        if (1 < uVar18) goto LAB_019c6f38;
        goto LAB_019c6ee0;
      }
      sVar20 = sVar3;
    } while (sVar3 != 0);
    goto LAB_019c72cc;
  }
  goto LAB_019c72d0;
LAB_019c6f38:
  do {
    uVar24 = plVar23[1];
    if (uVar24 == 0x17ea73508677cdff) {
      if (plVar23[2] == 0x17ea73508677cdff) goto LAB_019c6f70;
    }
    else {
      if (uVar17 <= uVar24) {
        uVar5 = 0;
        if (uVar17 != 0) {
          uVar5 = uVar24 / uVar17;
        }
        uVar24 = uVar24 - uVar5 * uVar17;
      }
      if (uVar24 != uVar19) break;
    }
    plVar23 = (long *)*plVar23;
  } while (plVar23 != (long *)0x0);
  goto LAB_019c6f78;
LAB_019c6f70:
  local_90 = plVar23[6];
  lStack_88 = plVar23[7];
  goto LAB_019c6f78;
LAB_019c704c:
  auVar50 = *(undefined1 (*) [16])(plVar23 + 6);
LAB_019c7050:
  fStack_78 = auVar50._8_4_;
  fStack_74 = auVar50._12_4_;
  local_80 = auVar50._0_4_;
  fStack_7c = auVar50._4_4_;
  goto LAB_019c7054;
  while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
LAB_019c6ee0:
    if (plVar23[1] == 0x17ea73508677cdff) {
      if (plVar23[2] == 0x17ea73508677cdff) goto LAB_019c6f70;
    }
    else if ((plVar23[1] & uVar17 - 1) != uVar19) break;
  }
LAB_019c6f78:
  if (uVar18 < 2) {
    uVar19 = uVar17 - 1 & 0xa58c5a85fa20a7f4;
  }
  else {
    uVar19 = 0xa58c5a85fa20a7f4;
    if (uVar17 < 0xa58c5a85fa20a7f5) {
      uVar19 = 0;
      if (uVar17 != 0) {
        uVar19 = 0xa58c5a85fa20a7f4 / uVar17;
      }
      uVar19 = 0xa58c5a85fa20a7f4 - uVar19 * uVar17;
    }
  }
  plVar23 = *(long **)(param_1[0x2b] + uVar19 * 8);
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  local_80 = 0.0;
  fStack_7c = 0.0;
  if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
    if (uVar18 < 2) {
      do {
        if (plVar23[1] == 0xa58c5a85fa20a7f4) {
          if (plVar23[2] == -0x5a73a57a05df580c) goto LAB_019c704c;
        }
        else if ((plVar23[1] & uVar17 - 1) != uVar19) break;
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
    else {
      do {
        uVar18 = plVar23[1];
        if (uVar18 == 0xa58c5a85fa20a7f4) {
          if (plVar23[2] == -0x5a73a57a05df580c) goto LAB_019c704c;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar24 = 0;
            if (uVar17 != 0) {
              uVar24 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar24 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
  }
LAB_019c7054:
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_00d0a71c(&local_70,&local_40);
  lVar11 = FUN_01180e7c(param_1,&local_70);
  puVar8 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar20 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar20 == 1) {
      piVar12 = (int *)((long)local_70 + 0x1c);
      do {
        iVar10 = *piVar12;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar9) {
          *piVar12 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_18 = *puVar8;
        FUN_00c44438(lVar15 + 0x8040,&local_18);
      }
    }
    else if (sVar20 == 0) goto LAB_019c72f4;
  }
  if (lVar11 != 0) {
    auVar50._8_4_ = fStack_78;
    auVar50._0_8_ = CONCAT44(fStack_7c,local_80);
    auVar50._12_4_ = fStack_74;
    *(undefined1 *)(lVar11 + 0xe0) = 1;
    *(long *)(lVar11 + 200) = auVar50._8_8_;
    *(ulong *)(lVar11 + 0xc0) = CONCAT44(fStack_7c,local_80);
    *(long *)(lVar11 + 0x58) = lStack_88;
    *(long *)(lVar11 + 0x50) = local_90;
    *(long *)(lVar14 + 0xc0) = lStack_88;
    *(long *)(lVar14 + 0xb8) = local_90;
    if (*(char *)(lVar14 + 0xcc) == '\0') {
      *(undefined1 *)(lVar14 + 0xcc) = 1;
      (**(code **)(*plVar22 + 0x78))(plVar22);
      bVar9 = *(char *)(lVar14 + 0xcc) == '\0';
    }
    else {
      bVar9 = false;
    }
    local_80 = local_80 * 0.5;
    fStack_7c = fStack_7c * 0.5;
    fStack_78 = fStack_78 * 0.5;
    fStack_74 = fStack_74 * 0.5;
    iVar10 = -(uint)(local_80 == 0.0);
    iVar6 = -(uint)(fStack_7c == 0.0);
    iVar21 = -(uint)(fStack_78 == 0.0);
    iVar7 = -(uint)(fStack_74 == 0.0);
    iVar25 = -(uint)(ABS(local_80) == INFINITY);
    iVar29 = -(uint)(ABS(fStack_7c) == INFINITY);
    iVar30 = -(uint)(ABS(fStack_78) == INFINITY);
    iVar31 = -(uint)(ABS(fStack_74) == INFINITY);
    auVar26[0] = ~(byte)iVar25;
    auVar26[1] = ~(byte)((uint)iVar25 >> 8);
    auVar26[2] = ~(byte)((uint)iVar25 >> 0x10);
    auVar26[3] = ~(byte)((uint)iVar25 >> 0x18);
    auVar26[4] = ~(byte)iVar29;
    auVar26[5] = ~(byte)((uint)iVar29 >> 8);
    auVar26[6] = ~(byte)((uint)iVar29 >> 0x10);
    auVar26[7] = ~(byte)((uint)iVar29 >> 0x18);
    auVar26[8] = ~(byte)iVar30;
    auVar26[9] = ~(byte)((uint)iVar30 >> 8);
    auVar26[10] = ~(byte)((uint)iVar30 >> 0x10);
    auVar26[0xb] = ~(byte)((uint)iVar30 >> 0x18);
    auVar26[0xc] = ~(byte)iVar31;
    auVar26[0xd] = ~(byte)((uint)iVar31 >> 8);
    auVar26[0xe] = ~(byte)((uint)iVar31 >> 0x10);
    auVar26[0xf] = ~(byte)((uint)iVar31 >> 0x18);
    auVar41._0_4_ =
         (int)((float)(-(uint)(0.0 <= local_80) & 0x80000000 ^ 0xbf000000) + local_80 * 0.15915494);
    auVar41._4_4_ =
         (int)((float)(-(uint)(0.0 <= fStack_7c) & 0x80000000 ^ 0xbf000000) + fStack_7c * 0.15915494
              );
    auVar41._8_4_ =
         (int)((float)(-(uint)(0.0 <= fStack_78) & 0x80000000 ^ 0xbf000000) + fStack_78 * 0.15915494
              );
    auVar41._12_4_ =
         (int)((float)(-(uint)(0.0 <= fStack_74) & 0x80000000 ^ 0xbf000000) + fStack_74 * 0.15915494
              );
    auVar50 = NEON_scvtf(auVar41,4);
    fVar60 = local_80 + 1.5707964;
    fVar61 = fStack_7c + 1.5707964;
    fVar62 = fStack_78 + 1.5707964;
    fVar63 = fStack_74 + 1.5707964;
    auVar45._0_4_ = local_80 - auVar50._0_4_ * 6.2831855;
    auVar45._4_4_ = fStack_7c - auVar50._4_4_ * 6.2831855;
    auVar45._8_4_ = fStack_78 - auVar50._8_4_ * 6.2831855;
    auVar45._12_4_ = fStack_74 - auVar50._12_4_ * 6.2831855;
    auVar51._0_4_ = -(uint)(auVar45._0_4_ < -1.5707964);
    auVar51._4_4_ = -(uint)(auVar45._4_4_ < -1.5707964);
    auVar51._8_4_ = -(uint)(auVar45._8_4_ < -1.5707964);
    auVar51._12_4_ = -(uint)(auVar45._12_4_ < -1.5707964);
    iVar25 = -(uint)(ABS(fVar60) == INFINITY);
    iVar29 = -(uint)(ABS(fVar61) == INFINITY);
    iVar30 = -(uint)(ABS(fVar62) == INFINITY);
    iVar31 = -(uint)(ABS(fVar63) == INFINITY);
    auVar34[0] = ~(byte)iVar25;
    auVar34[1] = ~(byte)((uint)iVar25 >> 8);
    auVar34[2] = ~(byte)((uint)iVar25 >> 0x10);
    auVar34[3] = ~(byte)((uint)iVar25 >> 0x18);
    auVar34[4] = ~(byte)iVar29;
    auVar34[5] = ~(byte)((uint)iVar29 >> 8);
    auVar34[6] = ~(byte)((uint)iVar29 >> 0x10);
    auVar34[7] = ~(byte)((uint)iVar29 >> 0x18);
    auVar34[8] = ~(byte)iVar30;
    auVar34[9] = ~(byte)((uint)iVar30 >> 8);
    auVar34[10] = ~(byte)((uint)iVar30 >> 0x10);
    auVar34[0xb] = ~(byte)((uint)iVar30 >> 0x18);
    auVar34[0xc] = ~(byte)iVar31;
    auVar34[0xd] = ~(byte)((uint)iVar31 >> 8);
    auVar34[0xe] = ~(byte)((uint)iVar31 >> 0x10);
    auVar34[0xf] = ~(byte)((uint)iVar31 >> 0x18);
    auVar40._4_4_ = -3.1415927 - auVar45._4_4_;
    auVar40._0_4_ = -3.1415927 - auVar45._0_4_;
    auVar40._8_4_ = -3.1415927 - auVar45._8_4_;
    auVar40._12_4_ = -3.1415927 - auVar45._12_4_;
    auVar45 = auVar45 ^ (auVar45 ^ auVar40) & auVar51;
    auVar52._0_4_ = -(uint)(1.5707964 < auVar45._0_4_);
    auVar52._4_4_ = -(uint)(1.5707964 < auVar45._4_4_);
    auVar52._8_4_ = -(uint)(1.5707964 < auVar45._8_4_);
    auVar52._12_4_ = -(uint)(1.5707964 < auVar45._12_4_);
    auVar32._0_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar60) & 0x80000000 ^ 0x3f000000) + fVar60 * 0.15915494);
    auVar32._4_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar61) & 0x80000000 ^ 0x3f000000) + fVar61 * 0.15915494);
    auVar32._8_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar62) & 0x80000000 ^ 0x3f000000) + fVar62 * 0.15915494);
    auVar32._12_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar63) & 0x80000000 ^ 0x3f000000) + fVar63 * 0.15915494);
    auVar50 = NEON_scvtf(auVar32,4);
    fVar60 = fVar60 - auVar50._0_4_ * 6.2831855;
    fVar61 = fVar61 - auVar50._4_4_ * 6.2831855;
    fVar62 = fVar62 - auVar50._8_4_ * 6.2831855;
    fVar63 = fVar63 - auVar50._12_4_ * 6.2831855;
    auVar43._4_4_ = 3.1415927 - auVar45._4_4_;
    auVar43._0_4_ = 3.1415927 - auVar45._0_4_;
    auVar43._8_4_ = 3.1415927 - auVar45._8_4_;
    auVar43._12_4_ = 3.1415927 - auVar45._12_4_;
    auVar45 = auVar45 ^ (auVar45 ^ auVar43) & auVar52;
    fVar44 = auVar45._0_4_;
    fVar49 = fVar44 * fVar44;
    fVar46 = auVar45._4_4_;
    fVar53 = fVar46 * fVar46;
    fVar47 = auVar45._8_4_;
    fVar54 = fVar47 * fVar47;
    fVar48 = auVar45._12_4_;
    fVar55 = fVar48 * fVar48;
    fVar60 = (float)((uint)fVar60 ^
                    ((uint)fVar60 ^ (uint)(-3.1415927 - fVar60)) & -(uint)(fVar60 < -1.5707964));
    fVar61 = (float)((uint)fVar61 ^
                    ((uint)fVar61 ^ (uint)(-3.1415927 - fVar61)) & -(uint)(fVar61 < -1.5707964));
    fVar62 = (float)((uint)fVar62 ^
                    ((uint)fVar62 ^ (uint)(-3.1415927 - fVar62)) & -(uint)(fVar62 < -1.5707964));
    fVar63 = (float)((uint)fVar63 ^
                    ((uint)fVar63 ^ (uint)(-3.1415927 - fVar63)) & -(uint)(fVar63 < -1.5707964));
    auVar27._8_4_ = 0x7fc00000;
    auVar27._0_8_ = 0x7fc000007fc00000;
    auVar27._12_4_ = 0x7fc00000;
    fVar60 = (float)((uint)fVar60 ^
                    ((uint)fVar60 ^ (uint)(3.1415927 - fVar60)) & -(uint)(1.5707964 < fVar60));
    fVar61 = (float)((uint)fVar61 ^
                    ((uint)fVar61 ^ (uint)(3.1415927 - fVar61)) & -(uint)(1.5707964 < fVar61));
    fVar62 = (float)((uint)fVar62 ^
                    ((uint)fVar62 ^ (uint)(3.1415927 - fVar62)) & -(uint)(1.5707964 < fVar62));
    fVar63 = (float)((uint)fVar63 ^
                    ((uint)fVar63 ^ (uint)(3.1415927 - fVar63)) & -(uint)(1.5707964 < fVar63));
    auVar50 = NEON_fmov(0x3f800000,4);
    fVar56 = fVar60 * fVar60;
    fVar57 = fVar61 * fVar61;
    fVar58 = fVar62 * fVar62;
    fVar59 = fVar63 * fVar63;
    auVar33._0_4_ =
         fVar60 * (auVar50._0_4_ +
                  fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar33._4_4_ =
         fVar61 * (auVar50._4_4_ +
                  fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar33._8_4_ =
         fVar62 * (auVar50._8_4_ +
                  fVar58 * (fVar58 * (fVar58 * (fVar58 * (fVar58 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar33._12_4_ =
         fVar63 * (auVar50._12_4_ +
                  fVar59 * (fVar59 * (fVar59 * (fVar59 * (fVar59 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar33 = auVar33 ^ (auVar33 ^ auVar27) & ~auVar34;
    auVar37[1] = ~(byte)((uint)iVar10 >> 8);
    auVar37[0] = ~(byte)iVar10;
    auVar37[2] = ~(byte)((uint)iVar10 >> 0x10);
    auVar37[3] = ~(byte)((uint)iVar10 >> 0x18);
    auVar37[4] = ~(byte)iVar6;
    auVar37[5] = ~(byte)((uint)iVar6 >> 8);
    auVar37[6] = ~(byte)((uint)iVar6 >> 0x10);
    auVar37[7] = ~(byte)((uint)iVar6 >> 0x18);
    auVar37[8] = ~(byte)iVar21;
    auVar37[9] = ~(byte)((uint)iVar21 >> 8);
    auVar37[10] = ~(byte)((uint)iVar21 >> 0x10);
    auVar37[0xb] = ~(byte)((uint)iVar21 >> 0x18);
    auVar37[0xc] = ~(byte)iVar7;
    auVar37[0xd] = ~(byte)((uint)iVar7 >> 8);
    auVar37[0xe] = ~(byte)((uint)iVar7 >> 0x10);
    auVar37[0xf] = ~(byte)((uint)iVar7 >> 0x18);
    auVar35._0_4_ =
         fVar44 * (auVar50._0_4_ +
                  fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar35._4_4_ =
         fVar46 * (auVar50._4_4_ +
                  fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar35._8_4_ =
         fVar47 * (auVar50._8_4_ +
                  fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar35._12_4_ =
         fVar48 * (auVar50._12_4_ +
                  fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar35 = auVar35 ^ (auVar35 ^ auVar27) & ~auVar26;
    fVar63 = auVar35._4_4_;
    auVar42._4_4_ = fVar63;
    auVar42._0_4_ = fVar63;
    auVar42._8_4_ = fVar63;
    auVar42._12_4_ = fVar63;
    auVar27 = auVar27 ^ (auVar27 ^ auVar33 ^ (auVar33 ^ auVar50) & ~auVar37) & auVar26;
    fVar60 = auVar27._4_4_;
    auVar36._4_4_ = fVar60;
    auVar36._0_4_ = fVar60;
    auVar36._8_4_ = fVar60;
    auVar36._12_4_ = fVar60;
    fVar61 = auVar27._8_4_;
    auVar39._4_4_ = fVar61;
    auVar39._0_4_ = fVar61;
    auVar39._8_4_ = fVar61;
    auVar39._12_4_ = fVar61;
    auVar37 = NEON_ext(auVar36,auVar27,0xc,1);
    auVar40 = NEON_ext(auVar39,auVar27,8,1);
    auVar43 = NEON_ext(auVar42,auVar35,0xc,1);
    fVar62 = auVar35._8_4_;
    auVar38._4_4_ = fVar62;
    auVar38._0_4_ = fVar62;
    auVar38._8_4_ = fVar62;
    auVar38._12_4_ = fVar62;
    auVar50 = NEON_ext(auVar38,auVar35,8,1);
    auVar28._0_8_ =
         CONCAT44(auVar40._4_4_ * fVar63 * auVar37._4_4_ +
                  auVar50._4_4_ * auVar43._4_4_ * fVar60 * (float)((ulong)_DAT_03cac210 >> 0x20),
                  auVar40._0_4_ * auVar35._0_4_ * auVar37._0_4_ +
                  auVar50._0_4_ * auVar43._0_4_ * auVar27._0_4_ * (float)_DAT_03cac210);
    auVar28._8_4_ =
         auVar40._8_4_ * fVar62 * auVar37._8_4_ +
         auVar50._8_4_ * auVar43._8_4_ * fVar61 * (float)_UNK_03cac218;
    auVar28._12_4_ =
         auVar40._12_4_ * auVar27._0_4_ * auVar37._12_4_ +
         auVar50._12_4_ * auVar43._12_4_ * auVar35._0_4_ * (float)((ulong)_UNK_03cac218 >> 0x20);
    *(long *)(lVar14 + 0xb0) = auVar28._8_8_;
    *(undefined8 *)(lVar14 + 0xa8) = auVar28._0_8_;
    if (bVar9) {
      *(undefined1 *)(lVar14 + 0xcc) = 1;
      (**(code **)(*plVar22 + 0x78))(plVar22);
    }
  }
  (**(code **)(*plVar22 + 0x60))(plVar22);
LAB_019c72cc:
  if (local_40 != (undefined8 *)0x0) {
LAB_019c72d0:
    puVar8 = local_40;
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar20 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar20 == 1) {
      piVar12 = (int *)((long)local_40 + 0x1c);
      do {
        iVar10 = *piVar12;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar9) {
          *piVar12 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_18 = *puVar8;
        FUN_00c44438(lVar14 + 0x8040,&local_18);
      }
    }
    else if (sVar20 == 0) {
LAB_019c72f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


