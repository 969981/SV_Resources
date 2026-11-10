/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e24734; name: FUN_00e24734
 */


undefined8 FUN_00e24734(long param_1)

{
  short *psVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  long *plVar6;
  short sVar7;
  char cVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  short sVar21;
  bool bVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined4 uVar26;
  long *plVar25;
  long *unaff_x22;
  long lVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  long local_48;
  
  lVar27 = param_1 + 0xe8;
  FUN_00c9e664(&local_88,lVar27);
  uVar16 = (**(code **)(*(long *)local_80[9] + 0xd8))();
  if (local_80 != (long *)0x0) {
    plVar17 = local_80 + 5;
    do {
      lVar20 = *plVar17;
      iVar15 = (int)lVar20 + -1;
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar22) {
        *(int *)plVar17 = iVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_00e24fc8;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x60))();
  }
  if ((uVar16 & 1) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x171) == '\0') {
    FUN_00c9e664(&local_88,lVar27);
    lVar20 = 0;
    if (local_80 != (long *)0x0) {
      lVar20 = local_80[9];
    }
    lVar20 = FUN_010c5a68(lVar20 + 0x108,&local_70);
    if (local_80 != (long *)0x0) {
      plVar17 = local_80 + 5;
      do {
        lVar23 = *plVar17;
        iVar15 = (int)lVar23 + -1;
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar22) {
          *(int *)plVar17 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
      else if ((int)lVar23 == 0) goto LAB_00e24fc8;
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x60))();
    }
    if (lVar20 == 0) {
      return 0;
    }
    lVar23 = *(long *)(lVar20 + 0x120);
    if (((lVar23 == 0) || (*(undefined8 **)(lVar23 + 0x28) == *(undefined8 **)(lVar23 + 0x20))) ||
       (unaff_x22 = (long *)**(undefined8 **)(lVar23 + 0x20), unaff_x22 == (long *)0x0)) {
      uVar26 = 0;
      bVar22 = false;
      local_88 = (long *)0x0;
      local_80 = (long *)0x0;
    }
    else {
      (**(code **)(*(long *)(lVar20 + 0x20) + 0x20))(&local_70,(long *)(lVar20 + 0x20));
      puVar11 = PTR_DAT_047d39b8;
      local_88 = (long *)0x0;
      local_80 = (long *)0x0;
      if (local_70 != (long *)0x0) {
        puVar24 = (undefined8 *)local_70[1];
        if (puVar24 != (undefined8 *)0x0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar15 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar12 = PTR_DAT_047d39c8;
            if (iVar15 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar15 != 0)) {
                *(undefined8 *)puVar12 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar11 = puVar12;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          do {
            if (puVar24 == (undefined8 *)puVar11) {
              FUN_00d30d98(&local_88,&local_70);
              break;
            }
            puVar24 = (undefined8 *)*puVar24;
          } while (puVar24 != (undefined8 *)0x0);
        }
        plVar17 = local_70;
        if (local_70 != (long *)0x0) {
          plVar25 = local_70 + 3;
          do {
            sVar21 = (short)*plVar25;
            cVar8 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar22) {
              *(short *)plVar25 = sVar21 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar21 == 1) {
            piVar2 = (int *)((long)local_70 + 0x1c);
            do {
              iVar15 = *piVar2;
              cVar8 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar22) {
                *piVar2 = -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar15 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar20 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar20;
              local_48 = *plVar17;
              FUN_00c44438(lVar20 + 0x8040,&local_48);
            }
          }
          else if (sVar21 == 0) goto LAB_00e24a04;
        }
      }
      local_78 = unaff_x22;
      if ((local_88 != (long *)0x0) && (*(short *)((long)local_88 + 0x1a) != 0)) {
        psVar1 = (short *)((long)local_88 + 0x1a);
        sVar21 = *(short *)((long)local_88 + 0x1a);
        do {
          sVar7 = *psVar1;
          if (sVar7 == sVar21) {
            cVar8 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar22) {
              *psVar1 = sVar21 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 != '\0') goto LAB_00e25430;
            bVar22 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e25430:
            bVar22 = false;
          }
          if (bVar22) {
            if (local_88[2] != 0) {
              plVar17 = (long *)*unaff_x22;
              goto joined_r0x00e25458;
            }
            break;
          }
          sVar21 = sVar7;
        } while (sVar7 != 0);
      }
      uVar26 = 0;
      bVar22 = false;
    }
    goto LAB_00e24c30;
  }
  goto LAB_00e247ec;
  while( true ) {
    lVar20 = *plVar17;
    plVar25 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar20 + 8) != 0) {
      plVar25 = (long *)(*(long *)(lVar20 + 8) + 0x30);
    }
    plVar17 = plVar17 + 1;
    if (*plVar25 == 0x45e350da1d34436d) break;
joined_r0x00e25458:
    if (plVar17 == (long *)unaff_x22[1]) goto LAB_00e254a0;
  }
  if ((*(char *)(lVar20 + 0x10) == '\a') && (*(long *)(lVar20 + 0x18) != 0)) {
    uVar26 = *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x10);
    bVar22 = true;
  }
  else {
LAB_00e254a0:
    bVar22 = false;
    uVar26 = 0;
  }
  (**(code **)(*(long *)(local_88[2] + -8) + 0x18))();
LAB_00e24c30:
  uVar4 = 0;
  if (bVar22) {
    uVar4 = uVar26;
  }
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  if ((local_88 != (long *)0x0) && (*(short *)((long)local_88 + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_88 + 0x1a);
    sVar21 = *(short *)((long)local_88 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar21) {
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00e25178;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e25178:
        bVar22 = false;
      }
      if (bVar22) {
        if (local_88[2] != 0) {
          plVar17 = (long *)*local_78;
          goto joined_r0x00e25284;
        }
        break;
      }
      sVar21 = sVar7;
    } while (sVar7 != 0);
  }
  fVar28 = 0.0;
  bVar22 = false;
  goto LAB_00e24c48;
  while( true ) {
    lVar20 = *plVar17;
    plVar19 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar20 + 8) != 0) {
      plVar19 = (long *)(*(long *)(lVar20 + 8) + 0x30);
    }
    plVar17 = plVar17 + 1;
    if (*plVar19 == 0x332aad1f0b2eba69) break;
joined_r0x00e252ec:
    if (plVar17 == (long *)local_78[1]) goto LAB_00e2569c;
  }
  if ((*(char *)(lVar20 + 0x10) == '\x03') && (*(long *)(lVar20 + 0x18) != 0)) {
    unaff_x22 = *(long **)(*(long *)(lVar20 + 0x18) + 8);
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x18))(unaff_x22);
    }
    bVar22 = true;
  }
  else {
LAB_00e2569c:
    bVar22 = false;
  }
  (**(code **)(*plVar25 + 0x18))(plVar25);
  goto LAB_00e24c60;
  while( true ) {
    lVar20 = *plVar25;
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar20 + 8) != 0) {
      plVar6 = (long *)(*(long *)(lVar20 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar6 == -0x6940c587df490507) break;
joined_r0x00e2534c:
    if (plVar25 == (long *)local_78[1]) goto LAB_00e25670;
  }
  if ((*(char *)(lVar20 + 0x10) == '\x05') && (*(long *)(lVar20 + 0x18) != 0)) {
    auVar30 = FUN_00c6a4a0();
    bVar10 = 0;
    uStack_98 = auVar30._8_8_;
    local_a0 = auVar30._0_8_;
  }
  else {
LAB_00e25670:
    bVar10 = 1;
  }
  (**(code **)(*plVar19 + 0x18))(plVar19);
  iVar15 = -(uint)bVar10;
  auVar31._0_4_ = -(float)local_a0;
  auVar31._4_4_ = -local_a0._4_4_;
  auVar31._8_4_ = -(float)uStack_98;
  auVar31._12_4_ = -uStack_98._4_4_;
  auVar9._8_4_ = 0x80000000;
  auVar9._0_8_ = 0x8000000080000000;
  auVar9._12_4_ = 0x80000000;
  auVar30._4_4_ = iVar15;
  auVar30._0_4_ = iVar15;
  auVar30._8_4_ = iVar15;
  auVar30._12_4_ = iVar15;
  auVar31 = auVar31 ^ (auVar31 ^ auVar9) & auVar30;
  *(long *)(param_1 + 0x168) = auVar31._8_8_;
  *(long *)(param_1 + 0x160) = auVar31._0_8_;
  goto LAB_00e24cf8;
  while( true ) {
    lVar20 = *plVar25;
    plVar19 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar20 + 8) != 0) {
      plVar19 = (long *)(*(long *)(lVar20 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar19 == -0x21802ff1f4bcfe02) break;
joined_r0x00e253ac:
    if (plVar25 == (long *)local_78[1]) goto LAB_00e253f4;
  }
  if ((*(char *)(lVar20 + 0x10) == '\x01') && (*(long **)(lVar20 + 0x18) != (long *)0x0)) {
    bVar14 = **(long **)(lVar20 + 0x18) != 0;
    bVar22 = true;
  }
  else {
LAB_00e253f4:
    bVar22 = false;
    bVar14 = false;
  }
  (**(code **)(*(long *)(local_88[2] + -8) + 0x18))();
  goto LAB_00e24d00;
code_r0x00e24f20:
  sVar21 = sVar7;
  if (sVar7 == 0) goto LAB_00e24814;
  goto LAB_00e24ef4;
code_r0x00e24850:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar22) {
    *plVar17 = lVar20;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_00e24858;
  goto LAB_00e24848;
  while( true ) {
    lVar20 = *plVar17;
    plVar25 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar20 + 8) != 0) {
      plVar25 = (long *)(*(long *)(lVar20 + 8) + 0x30);
    }
    plVar17 = plVar17 + 1;
    if (*plVar25 == -0x5142ae531d2e856c) break;
joined_r0x00e25284:
    if (plVar17 == (long *)local_78[1]) goto LAB_00e252cc;
  }
  if ((*(char *)(lVar20 + 0x10) == '\x02') && (*(double **)(lVar20 + 0x18) != (double *)0x0)) {
    fVar28 = (float)**(double **)(lVar20 + 0x18);
    bVar22 = true;
  }
  else {
LAB_00e252cc:
    bVar22 = false;
    fVar28 = 0.0;
  }
  (**(code **)(*(long *)(local_88[2] + -8) + 0x18))();
LAB_00e24c48:
  fVar5 = 0.0;
  if (bVar22) {
    fVar5 = fVar28;
  }
  *(float *)(param_1 + 0x150) = fVar5;
  if ((local_88 == (long *)0x0) || (*(short *)((long)local_88 + 0x1a) == 0)) {
LAB_00e24c5c:
    bVar22 = false;
  }
  else {
    psVar1 = (short *)((long)local_88 + 0x1a);
    sVar21 = *(short *)((long)local_88 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar21) {
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00e251c0;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e251c0:
        bVar22 = false;
      }
      if (bVar22) {
        if (local_88[2] == 0) goto LAB_00e24c5c;
        plVar25 = (long *)(local_88[2] + -8);
        plVar17 = (long *)*local_78;
        goto joined_r0x00e252ec;
      }
      bVar22 = false;
      sVar21 = sVar7;
    } while (sVar7 != 0);
  }
LAB_00e24c60:
  puVar11 = PTR_DAT_047d4240;
  if (((*PTR_DAT_047d4240 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar13 = PTR_DAT_047d4250;
  puVar12 = PTR_DAT_047d4248;
  uVar18 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar18;
  FUN_00cf9884(&local_70,uVar18,"default");
  plVar25 = local_70;
  plVar17 = local_70;
  if (bVar22) {
    plVar17 = unaff_x22;
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  if ((bVar22) && (unaff_x22 != (long *)0x0)) {
    (**(code **)(*unaff_x22 + 0x20))(unaff_x22);
  }
  if ((plVar17 == (long *)0x0) || (*(char *)plVar17[7] == '\0')) {
    if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar18 = *(undefined8 *)puVar12;
    *(undefined8 *)puVar13 = uVar18;
    FUN_00cf9884(&local_70,uVar18,"default");
    plVar25 = local_70;
  }
  else {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    plVar25 = plVar17;
  }
  plVar19 = *(long **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  *(long **)(param_1 + 0x148) = plVar25;
  if ((local_88 != (long *)0x0) && (*(short *)((long)local_88 + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_88 + 0x1a);
    sVar21 = *(short *)((long)local_88 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar21) {
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00e2520c;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e2520c:
        bVar22 = false;
      }
      if (bVar22) {
        if (local_88[2] != 0) {
          plVar19 = (long *)(local_88[2] + -8);
          plVar25 = (long *)*local_78;
          goto joined_r0x00e2534c;
        }
        break;
      }
      sVar21 = sVar7;
    } while (sVar7 != 0);
  }
  auVar29._8_4_ = 0x80000000;
  auVar29._0_8_ = 0x8000000080000000;
  auVar29._12_4_ = 0x80000000;
  *(long *)(param_1 + 0x168) = auVar29._8_8_;
  *(undefined8 *)(param_1 + 0x160) = 0x8000000080000000;
LAB_00e24cf8:
  if ((local_88 == (long *)0x0) || (*(short *)((long)local_88 + 0x1a) == 0)) {
LAB_00e24cfc:
    bVar14 = false;
    bVar22 = false;
  }
  else {
    psVar1 = (short *)((long)local_88 + 0x1a);
    sVar21 = *(short *)((long)local_88 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar21) {
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00e25254;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e25254:
        bVar22 = false;
      }
      if (bVar22) {
        if (local_88[2] == 0) goto LAB_00e24cfc;
        plVar25 = (long *)*local_78;
        goto joined_r0x00e253ac;
      }
      bVar14 = false;
      bVar22 = false;
      sVar21 = sVar7;
    } while (sVar7 != 0);
  }
LAB_00e24d00:
  bVar3 = false;
  if (bVar22) {
    bVar3 = bVar14;
  }
  *(bool *)(param_1 + 0x170) = bVar3;
  *(undefined1 *)(param_1 + 0x171) = 1;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  plVar17 = local_88;
  if (local_88 != (long *)0x0) {
    plVar25 = local_88 + 3;
    do {
      sVar21 = (short)*plVar25;
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar22) {
        *(short *)plVar25 = sVar21 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar15 = *piVar2;
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar22) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar20;
        local_70 = (long *)*plVar17;
        FUN_00c44438(lVar20 + 0x8040,&local_70);
      }
    }
    else if (sVar21 == 0) goto LAB_00e24a04;
  }
LAB_00e247ec:
  if (*(int *)(param_1 + 0x140) - 1U < 2) {
    uVar16 = FUN_00e257c0(param_1);
    if ((uVar16 & 1) == 0) {
      return 0;
    }
    lVar20 = *(long *)(param_1 + 0x130);
    if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar20 + 0x1a);
      sVar21 = *(short *)(lVar20 + 0x1a);
LAB_00e24ef4:
      sVar7 = *psVar1;
      if (sVar7 == sVar21) {
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00e24f18;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e24f18:
        bVar22 = false;
      }
      if (!bVar22) goto code_r0x00e24f20;
      lVar20 = *(long *)(lVar20 + 0x10);
      if (lVar20 != 0) {
        lVar27 = *(long *)(lVar20 + 0x70);
        psVar1 = (short *)(lVar27 + 0x1a);
        do {
          sVar21 = *psVar1;
          cVar8 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar22) {
            *psVar1 = sVar21 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar21 == 1) {
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*(long *)(lVar20 + -0x28) + 0x50))();
        }
        else if (sVar21 == 0) goto LAB_00e24f90;
        goto LAB_00e24928;
      }
    }
LAB_00e24814:
    FUN_00c9e664(&local_88,lVar27);
    if (local_80 == (long *)0x0) {
      lVar27 = 0;
    }
    else {
      lVar27 = local_80[9];
    }
    plVar17 = (long *)(lVar27 + 0x110);
    lVar23 = *plVar17;
    lVar20 = nn::os::GetCurrentThread();
    if (lVar20 != lVar23) {
      lVar20 = nn::os::GetCurrentThread();
LAB_00e24848:
      if (*plVar17 == 0) goto code_r0x00e24850;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar27 + 0x118));
      do {
        if (*plVar17 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar27 + 0x118));
            while (*plVar17 == 0) {
              cVar8 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar22) {
                *plVar17 = lVar20;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_00e24858;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar22) {
          *plVar17 = lVar20;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_00e24858:
      bVar22 = false;
      goto LAB_00e2485c;
    }
    bVar22 = true;
LAB_00e2485c:
    plVar17 = (long *)FUN_00e256b0(*(undefined8 *)(lVar27 + 0x128),*(undefined8 *)(lVar27 + 0x130));
    if ((*(long **)(lVar27 + 0x130) == plVar17) || (*plVar17 == 0)) {
      plVar17 = (long *)FUN_00e256b0(*(undefined8 *)(lVar27 + 0x160),*(undefined8 *)(lVar27 + 0x168)
                                    );
      if (*(long **)(lVar27 + 0x168) == plVar17) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        if (*plVar17 != 0) {
          lVar20 = *plVar17 + -0x20;
        }
      }
    }
    else {
      lVar20 = *plVar17 + -0x20;
    }
    if (!bVar22) {
      *(undefined8 *)(lVar27 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar27 + 0x118));
    }
    if (local_80 != (long *)0x0) {
      plVar17 = local_80 + 5;
      do {
        lVar27 = *plVar17;
        iVar15 = (int)lVar27 + -1;
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar22) {
          *(int *)plVar17 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
      else if ((int)lVar27 == 0) {
LAB_00e24fc8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x60))();
    }
    if (lVar20 != 0) {
      local_88 = (long *)0x0;
      local_80 = (long *)0x0;
      FUN_00c43ef0(&local_88,lVar20 + 0x98);
      local_70 = (long *)0x0;
      uStack_68 = 0;
      if (local_88[2] == lVar20 + 0x28) {
        FUN_00d94688(&local_70,&local_88);
      }
      plVar17 = local_88;
      if (local_88 != (long *)0x0) {
        plVar25 = local_88 + 3;
        do {
          sVar21 = (short)*plVar25;
          cVar8 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar22) {
            *(short *)plVar25 = sVar21 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar21 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar15 = *piVar2;
            cVar8 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar22) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar15 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar27 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar27;
            local_48 = *plVar17;
            FUN_00c44438(lVar27 + 0x8040,&local_48);
          }
        }
        else if (sVar21 == 0) goto LAB_00e24a04;
      }
      FUN_00d48230((long *)(param_1 + 0x130),&local_70);
      plVar17 = local_70;
      if (local_70 != (long *)0x0) {
        plVar25 = local_70 + 3;
        do {
          sVar21 = (short)*plVar25;
          cVar8 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar22) {
            *(short *)plVar25 = sVar21 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar21 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar15 = *piVar2;
            cVar8 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar22) {
              *piVar2 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar15 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar27 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar27;
            local_88 = (long *)*plVar17;
            FUN_00c44438(lVar27 + 0x8040,&local_88);
          }
        }
        else if (sVar21 == 0) {
LAB_00e24a04:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
LAB_00e24928:
    lVar27 = *(long *)(param_1 + 0x130);
    if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar27 + 0x1a);
      sVar21 = *(short *)(lVar27 + 0x1a);
      do {
        sVar7 = *psVar1;
        if (sVar7 == sVar21) {
          cVar8 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar22) {
            *psVar1 = sVar21 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_00e24964;
          bVar22 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e24964:
          bVar22 = false;
        }
        if (bVar22) {
          lVar27 = *(long *)(lVar27 + 0x10);
          if (lVar27 == 0) {
            return 0;
          }
          lVar20 = *(long *)(lVar27 + 0x70);
          psVar1 = (short *)(lVar20 + 0x1a);
          do {
            sVar21 = *psVar1;
            cVar8 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar22) {
              *psVar1 = sVar21 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar21 == 1) {
            *(undefined8 *)(lVar20 + 0x10) = 0;
            (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))();
            return 1;
          }
          if (sVar21 != 0) {
            return 1;
          }
LAB_00e24f90:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        sVar21 = sVar7;
        if (sVar7 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else if ((*(int *)(param_1 + 0x140) != 0) || (uVar16 = FUN_00e257c0(param_1), (uVar16 & 1) != 0))
  {
    return 1;
  }
  return 0;
}


