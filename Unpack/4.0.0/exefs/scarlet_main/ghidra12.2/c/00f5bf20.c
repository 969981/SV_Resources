/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5bf20; name: FUN_00f5bf20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f5bf20(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,long param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined *puVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  short sVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  bool bVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  int unaff_w27;
  float fVar28;
  float extraout_var;
  float extraout_var_00;
  float extraout_s0;
  int iVar29;
  int iVar32;
  int iVar33;
  float extraout_var_01;
  int iVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_68;
  
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_00c43ef0(&local_a8,param_4 + 0x30);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  lVar18 = 0;
  if (param_4 != 0) {
    lVar18 = param_4 + 0x28;
  }
  if (local_a8[2] == lVar18) {
    FUN_00f5d3e8(&local_80,&local_a8);
  }
  puVar16 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
    do {
      sVar19 = *psVar1;
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar17 = *piVar2;
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar23) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar17 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = (long *)*puVar16;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else if (sVar19 == 0) goto LAB_00f5bfdc;
  }
  puVar16 = local_80;
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_80 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_80 + 0x1a);
    sVar19 = *(short *)((long)local_80 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar19) {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00f5c098;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f5c098:
        bVar23 = false;
      }
      if (bVar23) {
        plVar20 = (long *)0x0;
        if (local_80[2] != 0) {
          plVar20 = (long *)(local_80[2] + -0x28);
        }
        goto LAB_00f5c0c0;
      }
      sVar19 = sVar3;
    } while (sVar3 != 0);
  }
  plVar20 = (long *)0x0;
LAB_00f5c0c0:
  psVar1 = (short *)(local_80 + 3);
  do {
    sVar19 = *psVar1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar19 == 1) {
    piVar2 = (int *)((long)local_80 + 0x1c);
    do {
      iVar17 = *piVar2;
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar23) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar17 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar18 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar18;
      local_a8 = (undefined8 *)*puVar16;
      FUN_00c44438(lVar18 + 0x8040,&local_a8);
    }
  }
  else if (sVar19 == 0) goto LAB_00f5bfdc;
  if (plVar20 == (long *)0x0) {
    return;
  }
  local_68 = (long *)FUN_00d1e658(param_4);
  local_68 = (long *)*local_68;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  lVar24 = *(long *)(param_4 + 8);
  lVar18 = tpidr_el0;
  if (*(long *)(lVar18 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar18 + 0x30) = DAT_04859430;
  }
  local_a8 = *(undefined8 **)(lVar18 + 0x30);
  local_a0 = *(undefined8 *)(lVar18 + 0x38);
  *(long *)(lVar18 + 0x30) = lVar24;
  *(undefined2 *)(lVar18 + 0x38) = 1;
  plVar25 = *(long **)(param_4 + 0xd0);
  *(undefined8 *)(param_4 + 200) = 0;
  *(undefined8 *)(param_4 + 0xd0) = 0;
  if (plVar25 != (long *)0x0) {
    plVar26 = plVar25 + 1;
    do {
      lVar24 = *plVar26;
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar23) {
        *plVar26 = lVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined8 **)(lVar18 + 0x30) = local_a8;
  *(undefined2 *)(lVar18 + 0x38) = (undefined2)local_a0;
  plVar25 = *(long **)(param_4 + 8);
  if (local_a8 == (undefined8 *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar18 + 0x30) = DAT_04859430;
  }
  local_a8 = *(undefined8 **)(lVar18 + 0x30);
  local_a0 = *(undefined8 *)(lVar18 + 0x38);
  *(long **)(lVar18 + 0x30) = plVar25;
  *(undefined2 *)(lVar18 + 0x38) = 1;
  if (plVar25 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar25 = DAT_04859430;
    *(long **)(lVar18 + 0x30) = DAT_04859430;
  }
  plVar25 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x50,8);
  plVar27 = plVar25 + 1;
  *plVar27 = 0;
  *plVar25 = (long)&PTR_LAB_045a0360;
  plVar25[2] = 0;
  plVar26 = plVar25 + 3;
  *plVar26 = (long)&PTR_LAB_045a0398;
  plVar25[4] = 0;
  plVar25[5] = (long)&PTR_LAB_045a0398;
  plVar25[6] = 0;
  plVar25[7] = 0;
  plVar25[8] = 0;
  plVar25[9] = 0;
  if (param_5 != 0) {
    FUN_00f5de3c(param_5,plVar26,0);
  }
  *(undefined8 **)(lVar18 + 0x30) = local_a8;
  *(undefined2 *)(lVar18 + 0x38) = (undefined2)local_a0;
  do {
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar23) {
      *plVar27 = *plVar27 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar21 = *(long **)(param_4 + 0xd0);
  *(long **)(param_4 + 200) = plVar26;
  *(long **)(param_4 + 0xd0) = plVar25;
  if (plVar21 != (long *)0x0) {
    plVar26 = plVar21 + 1;
    do {
      lVar18 = *plVar26;
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar23) {
        *plVar26 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar18 = *plVar27;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar23) {
      *plVar27 = lVar18 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar18 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    std::__shared_weak_count::__release_weak();
  }
  local_88 = (long *)FUN_00d1e658(param_4);
  local_88 = (long *)*local_88;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))();
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar17 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar22 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar22;
  puVar15 = PTR_DAT_047d8b70;
  plVar25 = (long *)PTR_DAT_047d8b70;
  if (local_68 != (long *)0x0) {
    plVar25 = local_68 + 6;
  }
  plVar26 = (long *)PTR_DAT_047d8b70;
  if (local_88 != (long *)0x0) {
    plVar26 = local_88 + 6;
  }
  if (*plVar25 != *plVar26) {
    if ((local_68 != (long *)0x0) && (*(char *)local_68[7] != '\0')) {
      FUN_0135d26c(&local_a8,&local_68);
      FUN_00f3d3b0(uVar22,&local_a8,param_4);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
    }
    if ((local_88 != (long *)0x0) && (*(char *)local_88[7] != '\0')) {
      FUN_0135d26c(&local_a8,&local_88);
      FUN_0219c290(uVar22,&local_a8,param_4);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
    }
  }
  FUN_00e28240(&local_a8,param_4);
  if (local_a8 != (undefined8 *)0x0) {
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5c6b8;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5c6b8:
          bVar23 = false;
        }
        if (bVar23) {
          if (local_a8[2] != 0) {
            plVar26 = (long *)(local_a8[2] + -8);
            plVar25 = (long *)*local_98;
            goto joined_r0x00f5c6e4;
          }
          break;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_00f5c984;
  }
  goto LAB_00f5c2fc;
  while( true ) {
    lVar18 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar18 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar18 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == -0x1ddf8754d374fd56) break;
joined_r0x00f5c6e4:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5c978;
  }
  if (*(char *)(lVar18 + 0x10) == '\x02') {
    lVar18 = *(long *)(lVar18 + 0x18);
    (**(code **)(*plVar26 + 0x18))();
    if (lVar18 != 0) {
      plVar25 = &DAT_045a02d0;
      goto LAB_00f5c74c;
    }
  }
  else {
LAB_00f5c978:
    (**(code **)(*plVar26 + 0x18))();
  }
LAB_00f5c984:
  if (local_a8 != (undefined8 *)0x0) {
    lVar18 = -0x9bd0700d03f5441;
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5c9d0;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5c9d0:
          bVar23 = false;
        }
        if (bVar23) {
          if (local_a8[2] != 0) {
            plVar26 = (long *)(local_a8[2] + -8);
            plVar25 = (long *)*local_98;
            goto joined_r0x00f5cb0c;
          }
          break;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_00f5cc70;
  }
  goto LAB_00f5c2fc;
  while( true ) {
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == -0x9bd0700d03f5441) break;
joined_r0x00f5cb0c:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5cc64;
  }
  if (*(char *)(lVar24 + 0x10) == '\x02') {
    lVar24 = *(long *)(lVar24 + 0x18);
    (**(code **)(*plVar26 + 0x18))();
    if (lVar24 != 0) {
      plVar25 = &DAT_045a02e8;
      goto LAB_00f5c74c;
    }
  }
  else {
LAB_00f5cc64:
    (**(code **)(*plVar26 + 0x18))();
  }
LAB_00f5cc70:
  if (local_a8 != (undefined8 *)0x0) {
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5ccbc;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5ccbc:
          bVar23 = false;
        }
        if (bVar23) {
          if (local_a8[2] != 0) {
            plVar26 = (long *)(local_a8[2] + -8);
            plVar25 = (long *)*local_98;
            goto joined_r0x00f5cf08;
          }
          break;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_00f5cf70;
  }
  goto LAB_00f5c2fc;
  while( true ) {
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == 0x557bd0198c9bd3ca) break;
joined_r0x00f5cf08:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5cf64;
  }
  if (*(char *)(lVar24 + 0x10) == '\x02') {
    lVar24 = *(long *)(lVar24 + 0x18);
    (**(code **)(*plVar26 + 0x18))();
    if (lVar24 != 0) {
      plVar25 = &DAT_045a0300;
      goto LAB_00f5c74c;
    }
  }
  else {
LAB_00f5cf64:
    (**(code **)(*plVar26 + 0x18))();
  }
LAB_00f5cf70:
  if (local_a8 != (undefined8 *)0x0) {
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5cfbc;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5cfbc:
          bVar23 = false;
        }
        if (bVar23) {
          if (local_a8[2] != 0) {
            plVar26 = (long *)(local_a8[2] + -8);
            plVar25 = (long *)*local_98;
            goto joined_r0x00f5cfe8;
          }
          break;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_00f5d050;
  }
  goto LAB_00f5c2fc;
  while( true ) {
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == -0x1ddf8754d374fd56) break;
joined_r0x00f5d0b8:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5d130;
  }
  if ((*(char *)(lVar24 + 0x10) == '\x05') && (*(long *)(lVar24 + 0x18) != 0)) {
    FUN_00c6a4a0();
    (**(code **)(*plVar26 + 0x18))(plVar26);
    bVar23 = false;
    unaff_w27 = 1;
    lVar18 = -0x1ddf8754d374fd56;
    goto LAB_00f5c758;
  }
LAB_00f5d130:
  (**(code **)(*plVar26 + 0x18))(plVar26);
LAB_00f5d144:
  if (local_a8 != (undefined8 *)0x0) {
LAB_00f5d148:
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5d17c;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5d17c:
          bVar23 = false;
        }
        if (bVar23) {
          if (local_a8[2] == 0) goto LAB_00f5d224;
          plVar26 = (long *)(local_a8[2] + -8);
          plVar25 = (long *)*local_98;
          goto joined_r0x00f5d1a8;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
      goto LAB_00f5d220;
    }
    goto LAB_00f5d224;
  }
  goto LAB_00f5d3e0;
  while( true ) {
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == -0x9bd0700d03f5441) break;
joined_r0x00f5d1a8:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5d20c;
  }
  if ((*(char *)(lVar24 + 0x10) == '\x05') && (*(long *)(lVar24 + 0x18) != 0)) {
    FUN_00c6a4a0();
    (**(code **)(*plVar26 + 0x18))(plVar26);
    bVar23 = false;
    unaff_w27 = 1;
    goto LAB_00f5c758;
  }
LAB_00f5d20c:
  (**(code **)(*plVar26 + 0x18))(plVar26);
LAB_00f5d220:
  if (local_a8 != (undefined8 *)0x0) {
LAB_00f5d224:
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5d258;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5d258:
          bVar23 = false;
        }
        if (bVar23) {
          if (local_a8[2] == 0) goto LAB_00f5d304;
          plVar26 = (long *)(local_a8[2] + -8);
          plVar25 = (long *)*local_98;
          goto joined_r0x00f5d284;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
      goto LAB_00f5d300;
    }
    goto LAB_00f5d304;
  }
  goto LAB_00f5d3e0;
  while( true ) {
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == 0x557bd0198c9bd3ca) break;
joined_r0x00f5d284:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5d2ec;
  }
  if ((*(char *)(lVar24 + 0x10) == '\x05') && (*(long *)(lVar24 + 0x18) != 0)) {
    FUN_00c6a4a0();
    (**(code **)(*plVar26 + 0x18))(plVar26);
    bVar23 = false;
    unaff_w27 = 1;
    lVar18 = 0x557bd0198c9bd3ca;
    goto LAB_00f5c758;
  }
LAB_00f5d2ec:
  (**(code **)(*plVar26 + 0x18))(plVar26);
LAB_00f5d300:
  if (local_a8 != (undefined8 *)0x0) {
LAB_00f5d304:
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      bVar23 = true;
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5d33c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5d33c:
          bVar5 = false;
        }
        if (bVar5) {
          if (local_a8[2] == 0) goto LAB_00f5d3e0;
          plVar26 = (long *)(local_a8[2] + -8);
          plVar25 = (long *)*local_98;
          goto joined_r0x00f5d368;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
      goto LAB_00f5c758;
    }
  }
LAB_00f5d3e0:
  bVar23 = true;
LAB_00f5c758:
  puVar16 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
    do {
      sVar19 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar17 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar17 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar24 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar24;
        local_80 = (undefined8 *)*puVar16;
        FUN_00c44438(lVar24 + 0x8040,&local_80);
      }
    }
    else if (sVar19 == 0) goto LAB_00f5bfdc;
  }
  if (bVar23) goto LAB_00f5c2fc;
  FUN_00e28240(&local_a8,param_4);
  if (unaff_w27 == 1) {
    if ((local_a8 == (undefined8 *)0x0) || (*(short *)((long)local_a8 + 0x1a) == 0))
    goto LAB_00f5c7fc;
    psVar1 = (short *)((long)local_a8 + 0x1a);
    sVar19 = *(short *)((long)local_a8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar19) {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00f5ca64;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f5ca64:
        bVar23 = false;
      }
      if (bVar23) {
        if (local_a8[2] == 0) goto LAB_00f5c7fc;
        plVar26 = (long *)(local_a8[2] + -8);
        plVar25 = (long *)*local_98;
        goto joined_r0x00f5cb94;
      }
      bVar23 = false;
      sVar19 = sVar3;
    } while (sVar3 != 0);
  }
  else if (((unaff_w27 == 0) && (local_a8 != (undefined8 *)0x0)) &&
          (*(short *)((long)local_a8 + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_a8 + 0x1a);
    sVar19 = *(short *)((long)local_a8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar19) {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00f5c7b8;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f5c7b8:
        bVar23 = false;
      }
      if (bVar23) {
        if (local_a8[2] == 0) goto LAB_00f5c7fc;
        fVar28 = 0.0;
        plVar25 = (long *)*local_98;
        goto joined_r0x00f5ca00;
      }
      bVar23 = false;
      sVar19 = sVar3;
    } while (sVar3 != 0);
  }
  else {
LAB_00f5c7fc:
    bVar23 = false;
  }
LAB_00f5c800:
  puVar16 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
    do {
      sVar19 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar17 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar17 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_80 = (undefined8 *)*puVar16;
        FUN_00c44438(lVar18 + 0x8040,&local_80);
      }
    }
    else if (sVar19 == 0) {
LAB_00f5bfdc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  goto LAB_00f5c300;
  while( true ) {
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == 0x432098fd1d6852df) break;
joined_r0x00f5d368:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5d3d0;
  }
  if ((*(char *)(lVar24 + 0x10) != '\x05') || (*(long *)(lVar24 + 0x18) == 0)) {
LAB_00f5d3d0:
    (**(code **)(*plVar26 + 0x18))(plVar26);
    goto LAB_00f5d3e0;
  }
  FUN_00c6a4a0();
  (**(code **)(*plVar26 + 0x18))(plVar26);
  bVar23 = false;
  unaff_w27 = 1;
  lVar18 = 0x432098fd1d6852df;
  goto LAB_00f5c758;
joined_r0x00f5cb94:
  do {
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5ccd0;
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
  } while (*plVar27 != lVar18);
  if ((*(char *)(lVar24 + 0x10) == '\x05') && (*(long *)(lVar24 + 0x18) != 0)) {
    FUN_00c6a4a0();
    bVar23 = false;
    local_c0 = extraout_s0 * 3.1415927;
    fStack_bc = extraout_var * 3.1415927;
    fStack_b8 = extraout_var_00 * 3.1415927;
    fStack_b4 = extraout_var_01 * 3.1415927;
  }
  else {
LAB_00f5ccd0:
    fStack_b8 = NAN;
    fStack_b4 = NAN;
    fStack_bc = NAN;
    local_c0 = NAN;
    bVar23 = true;
  }
  (**(code **)(*plVar26 + 0x18))(plVar26);
  if (!bVar23) {
    auVar46._0_4_ = local_c0 / 180.0;
    auVar46._4_4_ = fStack_bc / 180.0;
    auVar46._8_4_ = fStack_b8 / 180.0;
    auVar46._12_4_ = fStack_b4 / 180.0;
    auVar37._0_8_ = param_3._4_8_ << 0x20;
    auVar37._12_4_ = param_3._12_4_;
    auVar37._8_4_ = 0;
    auVar14._4_8_ = auVar37._8_8_;
    auVar14._0_4_ = auVar46._0_4_;
    auVar38._0_12_ = auVar14 << 0x20;
    auVar38._12_4_ = auVar46._8_4_;
    auVar38 = NEON_ext(auVar38,auVar46,8,1);
    auVar46 = NEON_ext(ZEXT816(0),auVar46,0xc,1);
    auVar46 = NEON_ext(auVar38,auVar46,4,1);
    fVar42 = auVar46._0_4_ * 0.5;
    fVar43 = auVar46._4_4_ * 0.5;
    fVar28 = auVar46._8_4_;
    fVar44 = auVar46._12_4_ * 0.5;
    goto LAB_00f5cd14;
  }
  goto LAB_00f5c7fc;
  while( true ) {
    lVar24 = *plVar25;
    plVar26 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar26 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar26 == lVar18) break;
joined_r0x00f5ca00:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5cbf0;
  }
  if ((*(char *)(lVar24 + 0x10) == '\x02') && (*(double **)(lVar24 + 0x18) != (double *)0x0)) {
    fVar28 = (float)**(double **)(lVar24 + 0x18) * 3.1415927;
    bVar23 = false;
  }
  else {
LAB_00f5cbf0:
    bVar23 = true;
  }
  (**(code **)(*(long *)(local_a8[2] + -8) + 0x18))();
  if (bVar23) goto LAB_00f5c7fc;
  fVar28 = fVar28 / 180.0;
  fVar44 = 0.0;
  fVar42 = 0.0;
  fVar43 = 0.0;
LAB_00f5cd14:
  fVar28 = fVar28 * 0.5;
  iVar17 = -(uint)(fVar42 == 0.0);
  iVar10 = -(uint)(fVar43 == 0.0);
  iVar11 = -(uint)(fVar28 == 0.0);
  iVar12 = -(uint)(fVar44 == 0.0);
  bVar23 = true;
  iVar29 = -(uint)(ABS(fVar42) == INFINITY);
  iVar32 = -(uint)(ABS(fVar43) == INFINITY);
  iVar33 = -(uint)(ABS(fVar28) == INFINITY);
  iVar34 = -(uint)(ABS(fVar44) == INFINITY);
  auVar30[0] = ~(byte)iVar29;
  auVar30[1] = ~(byte)((uint)iVar29 >> 8);
  auVar30[2] = ~(byte)((uint)iVar29 >> 0x10);
  auVar30[3] = ~(byte)((uint)iVar29 >> 0x18);
  auVar30[4] = ~(byte)iVar32;
  auVar30[5] = ~(byte)((uint)iVar32 >> 8);
  auVar30[6] = ~(byte)((uint)iVar32 >> 0x10);
  auVar30[7] = ~(byte)((uint)iVar32 >> 0x18);
  auVar30[8] = ~(byte)iVar33;
  auVar30[9] = ~(byte)((uint)iVar33 >> 8);
  auVar30[10] = ~(byte)((uint)iVar33 >> 0x10);
  auVar30[0xb] = ~(byte)((uint)iVar33 >> 0x18);
  auVar30[0xc] = ~(byte)iVar34;
  auVar30[0xd] = ~(byte)((uint)iVar34 >> 8);
  auVar30[0xe] = ~(byte)((uint)iVar34 >> 0x10);
  auVar30[0xf] = ~(byte)((uint)iVar34 >> 0x18);
  auVar41._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar42) & 0x80000000 ^ 0xbf000000) + fVar42 * 0.15915494);
  auVar41._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar43) & 0x80000000 ^ 0xbf000000) + fVar43 * 0.15915494);
  auVar41._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar28) & 0x80000000 ^ 0xbf000000) + fVar28 * 0.15915494);
  auVar41._12_4_ =
       (int)((float)(-(uint)(0.0 <= fVar44) & 0x80000000 ^ 0xbf000000) + fVar44 * 0.15915494);
  auVar46 = NEON_scvtf(auVar41,4);
  fVar54 = fVar42 + 1.5707964;
  fVar55 = fVar43 + 1.5707964;
  fVar56 = fVar28 + 1.5707964;
  fVar57 = fVar44 + 1.5707964;
  fVar42 = fVar42 - auVar46._0_4_ * 6.2831855;
  fVar43 = fVar43 - auVar46._4_4_ * 6.2831855;
  fVar28 = fVar28 - auVar46._8_4_ * 6.2831855;
  fVar44 = fVar44 - auVar46._12_4_ * 6.2831855;
  iVar29 = -(uint)(ABS(fVar54) == INFINITY);
  iVar32 = -(uint)(ABS(fVar55) == INFINITY);
  iVar33 = -(uint)(ABS(fVar56) == INFINITY);
  iVar34 = -(uint)(ABS(fVar57) == INFINITY);
  auVar39[0] = ~(byte)iVar29;
  auVar39[1] = ~(byte)((uint)iVar29 >> 8);
  auVar39[2] = ~(byte)((uint)iVar29 >> 0x10);
  auVar39[3] = ~(byte)((uint)iVar29 >> 0x18);
  auVar39[4] = ~(byte)iVar32;
  auVar39[5] = ~(byte)((uint)iVar32 >> 8);
  auVar39[6] = ~(byte)((uint)iVar32 >> 0x10);
  auVar39[7] = ~(byte)((uint)iVar32 >> 0x18);
  auVar39[8] = ~(byte)iVar33;
  auVar39[9] = ~(byte)((uint)iVar33 >> 8);
  auVar39[10] = ~(byte)((uint)iVar33 >> 0x10);
  auVar39[0xb] = ~(byte)((uint)iVar33 >> 0x18);
  auVar39[0xc] = ~(byte)iVar34;
  auVar39[0xd] = ~(byte)((uint)iVar34 >> 8);
  auVar39[0xe] = ~(byte)((uint)iVar34 >> 0x10);
  auVar39[0xf] = ~(byte)((uint)iVar34 >> 0x18);
  fVar42 = (float)((uint)fVar42 ^
                  ((uint)fVar42 ^ (uint)(-3.1415927 - fVar42)) & -(uint)(fVar42 < -1.5707964));
  fVar43 = (float)((uint)fVar43 ^
                  ((uint)fVar43 ^ (uint)(-3.1415927 - fVar43)) & -(uint)(fVar43 < -1.5707964));
  fVar28 = (float)((uint)fVar28 ^
                  ((uint)fVar28 ^ (uint)(-3.1415927 - fVar28)) & -(uint)(fVar28 < -1.5707964));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(-3.1415927 - fVar44)) & -(uint)(fVar44 < -1.5707964));
  auVar35._0_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar54) & 0x80000000 ^ 0x3f000000) + fVar54 * 0.15915494);
  auVar35._4_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar55) & 0x80000000 ^ 0x3f000000) + fVar55 * 0.15915494);
  auVar35._8_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar56) & 0x80000000 ^ 0x3f000000) + fVar56 * 0.15915494);
  auVar35._12_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar57) & 0x80000000 ^ 0x3f000000) + fVar57 * 0.15915494);
  auVar46 = NEON_scvtf(auVar35,4);
  fVar54 = fVar54 - auVar46._0_4_ * 6.2831855;
  fVar55 = fVar55 - auVar46._4_4_ * 6.2831855;
  fVar56 = fVar56 - auVar46._8_4_ * 6.2831855;
  fVar57 = fVar57 - auVar46._12_4_ * 6.2831855;
  fVar42 = (float)((uint)fVar42 ^
                  ((uint)fVar42 ^ (uint)(3.1415927 - fVar42)) & -(uint)(1.5707964 < fVar42));
  fVar43 = (float)((uint)fVar43 ^
                  ((uint)fVar43 ^ (uint)(3.1415927 - fVar43)) & -(uint)(1.5707964 < fVar43));
  fVar28 = (float)((uint)fVar28 ^
                  ((uint)fVar28 ^ (uint)(3.1415927 - fVar28)) & -(uint)(1.5707964 < fVar28));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(3.1415927 - fVar44)) & -(uint)(1.5707964 < fVar44));
  fVar45 = fVar42 * fVar42;
  fVar47 = fVar43 * fVar43;
  fVar48 = fVar28 * fVar28;
  fVar49 = fVar44 * fVar44;
  fVar54 = (float)((uint)fVar54 ^
                  ((uint)fVar54 ^ (uint)(-3.1415927 - fVar54)) & -(uint)(fVar54 < -1.5707964));
  fVar55 = (float)((uint)fVar55 ^
                  ((uint)fVar55 ^ (uint)(-3.1415927 - fVar55)) & -(uint)(fVar55 < -1.5707964));
  fVar56 = (float)((uint)fVar56 ^
                  ((uint)fVar56 ^ (uint)(-3.1415927 - fVar56)) & -(uint)(fVar56 < -1.5707964));
  fVar57 = (float)((uint)fVar57 ^
                  ((uint)fVar57 ^ (uint)(-3.1415927 - fVar57)) & -(uint)(fVar57 < -1.5707964));
  fVar54 = (float)((uint)fVar54 ^
                  ((uint)fVar54 ^ (uint)(3.1415927 - fVar54)) & -(uint)(1.5707964 < fVar54));
  fVar55 = (float)((uint)fVar55 ^
                  ((uint)fVar55 ^ (uint)(3.1415927 - fVar55)) & -(uint)(1.5707964 < fVar55));
  fVar56 = (float)((uint)fVar56 ^
                  ((uint)fVar56 ^ (uint)(3.1415927 - fVar56)) & -(uint)(1.5707964 < fVar56));
  fVar57 = (float)((uint)fVar57 ^
                  ((uint)fVar57 ^ (uint)(3.1415927 - fVar57)) & -(uint)(1.5707964 < fVar57));
  auVar46 = NEON_fmov(0x3f800000,4);
  fVar50 = fVar54 * fVar54;
  fVar51 = fVar55 * fVar55;
  fVar52 = fVar56 * fVar56;
  fVar53 = fVar57 * fVar57;
  auVar36._0_4_ =
       fVar54 * (auVar46._0_4_ +
                fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar36._4_4_ =
       fVar55 * (auVar46._4_4_ +
                fVar51 * (fVar51 * (fVar51 * (fVar51 * (fVar51 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar36._8_4_ =
       fVar56 * (auVar46._8_4_ +
                fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar36._12_4_ =
       fVar57 * (auVar46._12_4_ +
                fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar6._8_4_ = 0x7fc00000;
  auVar6._0_8_ = 0x7fc000007fc00000;
  auVar6._12_4_ = 0x7fc00000;
  auVar36 = auVar36 ^ (auVar36 ^ auVar6) & ~auVar39;
  auVar9[1] = ~(byte)((uint)iVar17 >> 8);
  auVar9[0] = ~(byte)iVar17;
  auVar9[2] = ~(byte)((uint)iVar17 >> 0x10);
  auVar9[3] = ~(byte)((uint)iVar17 >> 0x18);
  auVar9[4] = ~(byte)iVar10;
  auVar9[5] = ~(byte)((uint)iVar10 >> 8);
  auVar9[6] = ~(byte)((uint)iVar10 >> 0x10);
  auVar9[7] = ~(byte)((uint)iVar10 >> 0x18);
  auVar9[8] = ~(byte)iVar11;
  auVar9[9] = ~(byte)((uint)iVar11 >> 8);
  auVar9[10] = ~(byte)((uint)iVar11 >> 0x10);
  auVar9[0xb] = ~(byte)((uint)iVar11 >> 0x18);
  auVar9[0xc] = ~(byte)iVar12;
  auVar9[0xd] = ~(byte)((uint)iVar12 >> 8);
  auVar9[0xe] = ~(byte)((uint)iVar12 >> 0x10);
  auVar9[0xf] = ~(byte)((uint)iVar12 >> 0x18);
  auVar40._0_4_ =
       fVar42 * (auVar46._0_4_ +
                fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar40._4_4_ =
       fVar43 * (auVar46._4_4_ +
                fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar40._8_4_ =
       fVar28 * (auVar46._8_4_ +
                fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar40._12_4_ =
       fVar44 * (auVar46._12_4_ +
                fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar7._8_4_ = 0x7fc00000;
  auVar7._0_8_ = 0x7fc000007fc00000;
  auVar7._12_4_ = 0x7fc00000;
  auVar40 = auVar40 ^ (auVar40 ^ auVar7) & ~auVar30;
  fVar43 = auVar40._0_4_;
  auVar8._8_4_ = 0x7fc00000;
  auVar8._0_8_ = 0x7fc000007fc00000;
  auVar8._12_4_ = 0x7fc00000;
  auVar31._8_4_ = 0x7fc00000;
  auVar31._0_8_ = 0x7fc000007fc00000;
  auVar31._12_4_ = 0x7fc00000;
  auVar31 = auVar31 ^ (auVar8 ^ auVar36 ^ (auVar36 ^ auVar46) & ~auVar9) & auVar30;
  fVar44 = auVar31._0_4_;
  fVar28 = auVar31._4_4_;
  fVar54 = auVar40._4_4_;
  fVar42 = auVar31._8_4_;
  fVar55 = auVar40._8_4_;
  local_c0 = fVar42 * fVar44 * fVar54 + fVar55 * fVar28 * fVar43 * (float)_DAT_03cab3a0;
  fStack_bc = fVar55 * fVar44 * fVar28 +
              fVar42 * fVar54 * fVar43 * (float)((ulong)_DAT_03cab3a0 >> 0x20);
  fStack_b8 = fVar42 * fVar43 * fVar28 + fVar55 * fVar54 * fVar44 * (float)_UNK_03cab3a8;
  fStack_b4 = fVar42 * fVar44 * fVar28 +
              fVar55 * fVar54 * fVar43 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
  goto LAB_00f5c800;
  while( true ) {
    lVar24 = *plVar25;
    plVar27 = (long *)puVar15;
    if (*(long *)(lVar24 + 8) != 0) {
      plVar27 = (long *)(*(long *)(lVar24 + 8) + 0x30);
    }
    plVar25 = plVar25 + 1;
    if (*plVar27 == 0x432098fd1d6852df) break;
joined_r0x00f5cfe8:
    if (plVar25 == (long *)local_98[1]) goto LAB_00f5d044;
  }
  if (*(char *)(lVar24 + 0x10) == '\x02') {
    lVar24 = *(long *)(lVar24 + 0x18);
    (**(code **)(*plVar26 + 0x18))();
    if (lVar24 != 0) {
      plVar25 = &DAT_045a0318;
LAB_00f5c74c:
      lVar18 = *plVar25;
      unaff_w27 = 0;
      bVar23 = false;
      goto LAB_00f5c758;
    }
  }
  else {
LAB_00f5d044:
    (**(code **)(*plVar26 + 0x18))();
  }
LAB_00f5d050:
  if (local_a8 != (undefined8 *)0x0) {
    if (*(short *)((long)local_a8 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_a8 + 0x1a);
      sVar19 = *(short *)((long)local_a8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f5d08c;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5d08c:
          bVar23 = false;
        }
        if (bVar23) {
          if (local_a8[2] == 0) goto LAB_00f5d148;
          plVar26 = (long *)(local_a8[2] + -8);
          plVar25 = (long *)*local_98;
          goto joined_r0x00f5d0b8;
        }
        sVar19 = sVar3;
      } while (sVar3 != 0);
      goto LAB_00f5d144;
    }
    goto LAB_00f5d148;
  }
LAB_00f5c2fc:
  bVar23 = false;
LAB_00f5c300:
  if (*(char *)(param_4 + 0xa0) == '\0') {
    if (!bVar23) goto LAB_00f5c314;
    *(undefined1 *)(param_4 + 0xa0) = 1;
  }
  else if (!bVar23) {
    *(undefined1 *)(param_4 + 0xa0) = 0;
    goto LAB_00f5c314;
  }
  auVar13._8_4_ = fStack_b8;
  auVar13._0_8_ = CONCAT44(fStack_bc,local_c0);
  auVar13._12_4_ = fStack_b4;
  *(long *)(param_4 + 0xb8) = auVar13._8_8_;
  *(ulong *)(param_4 + 0xb0) = CONCAT44(fStack_bc,local_c0);
LAB_00f5c314:
  FUN_00f5f010(uVar22,param_4);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar18 = plVar20[6];
  psVar1 = (short *)(lVar18 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar18 + 0x10) = 0;
    (**(code **)(*plVar20 + 0x50))(plVar20);
  }
  else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


