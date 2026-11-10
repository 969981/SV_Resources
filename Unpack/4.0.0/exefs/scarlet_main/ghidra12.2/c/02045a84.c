/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02045a84; name: FUN_02045a84
 */


void FUN_02045a84(long param_1,uint *param_2,byte param_3)

{
  uint *puVar1;
  uint *puVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  short sVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  uint *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  size_t sVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  char *pcVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  char local_308 [4];
  undefined1 auStack_304 [4];
  undefined1 auStack_300 [248];
  ulong local_208;
  undefined1 auStack_200 [7];
  undefined1 auStack_1f9 [9];
  undefined8 uStack_1f0;
  uint *local_108;
  undefined8 local_100;
  ulong local_f8;
  long *local_f0;
  code *local_e8;
  char *local_e0;
  undefined1 *puStack_d8;
  uint *local_d0;
  uint *puStack_c8;
  ulong *local_c0;
  uint local_6c [3];
  
  iVar17 = *(int *)(param_1 + 0x294);
  if (iVar17 == -1) {
    return;
  }
  uVar19 = FUN_01e13898(param_1,*param_2,iVar17);
  if ((uVar19 & 1) == 0) {
    return;
  }
  uVar7 = *param_2;
  local_208 = 0xc0d19c3696f8bb0f;
  _auStack_200 = "wild_int";
  auStack_1f9._1_8_ = 8;
  uStack_1f0 = 0;
  uVar16 = FUN_00d93250(param_1,&local_208);
  local_208 = 0xc55ea8ec3c868172;
  _auStack_200 = "wild_bool";
  auStack_1f9._1_8_ = 9;
  uStack_1f0 = 0;
  bVar15 = FUN_00d93028(param_1,&local_208);
  bVar15 = uVar16 == uVar7 & bVar15;
  if (((bVar15 != 1) || ((param_3 & 1) != 0)) && (*(int *)(param_1 + 0x390) != 0)) {
    return;
  }
  memset(&local_208,0,0x100);
  memset(local_308,0,0x100);
  puVar11 = PTR_DAT_047d8c28;
  if (*param_2 == 2) {
    if ((param_3 & 1) == 0) {
      if (bVar15 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x390) == 1) goto LAB_02045f68;
      uVar28 = *(undefined8 *)(param_1 + 8);
      lVar26 = tpidr_el0;
      if (*(long *)(lVar26 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar26 + 0x30) = DAT_04859430;
      }
      local_108 = *(uint **)(lVar26 + 0x30);
      local_100 = *(undefined8 *)(lVar26 + 0x38);
      *(undefined8 *)(lVar26 + 0x30) = uVar28;
      *(undefined2 *)(lVar26 + 0x38) = 1;
      std::to_string(iVar17);
      pcVar24 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar24 = local_e0;
      }
      local_208 = local_208 & 0xffffffffffffff00;
      strcat((char *)&local_208,pcVar24);
      sVar20 = strlen((char *)&local_208);
      *(undefined8 *)(auStack_300 + sVar20 + 0xf8) = s_0262_wild_bool02_end_03be27a5._0_8_;
      *(ulong *)(auStack_200 + sVar20) =
           CONCAT35(s_0262_wild_bool02_end_03be27a5._13_3_,s_0262_wild_bool02_end_03be27a5._8_5_);
      *(ulong *)(auStack_200 + sVar20 + 5) =
           CONCAT53(s_0262_wild_bool02_end_03be27a5._16_5_,s_0262_wild_bool02_end_03be27a5._13_3_);
      pcVar24 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar22 = *(long **)(lVar26 + 0x30);
        if (plVar22 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
LAB_02046a88:
          plVar22 = DAT_04859430;
          *(long **)(lVar26 + 0x30) = DAT_04859430;
        }
LAB_020466cc:
        uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
        if (((uVar19 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
          (**(code **)(*plVar22 + 0x18))(plVar22,pcVar24,0,8);
        }
        else {
          FUN_00c48fe8(plVar22,pcVar24,0,8);
        }
      }
LAB_02046080:
      *(uint **)(lVar26 + 0x30) = local_108;
      *(undefined2 *)(lVar26 + 0x38) = (undefined2)local_100;
      local_308[0] = '\0';
      sVar20 = strlen(local_308);
      builtin_strncpy(local_308 + sVar20,"Exit",4);
      auStack_304[sVar20] = 0;
    }
    else {
      if (bVar15 != 0) {
        return;
      }
      lVar27 = *(long *)(param_1 + 8);
      lVar26 = tpidr_el0;
      if (*(long *)(lVar26 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar26 + 0x30) = DAT_04859430;
      }
      local_108 = *(uint **)(lVar26 + 0x30);
      local_100 = *(undefined8 *)(lVar26 + 0x38);
      *(long *)(lVar26 + 0x30) = lVar27;
      *(undefined2 *)(lVar26 + 0x38) = 1;
      std::to_string(iVar17);
      pcVar24 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar24 = local_e0;
      }
      local_208 = local_208 & 0xffffffffffffff00;
      strcat((char *)&local_208,pcVar24);
      sVar20 = strlen((char *)&local_208);
      *(undefined8 *)(auStack_300 + sVar20 + 0xf8) = s_0260_wild_bool02_start_03c989af._0_8_;
      *(ulong *)(auStack_200 + sVar20) =
           CONCAT17(s_0260_wild_bool02_start_03c989af[0xf],s_0260_wild_bool02_start_03c989af._8_7_);
      *(ulong *)(auStack_1f9 + sVar20) =
           CONCAT71(s_0260_wild_bool02_start_03c989af._16_7_,s_0260_wild_bool02_start_03c989af[0xf])
      ;
      pcVar24 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar22 = *(long **)(lVar26 + 0x30);
        if (plVar22 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar22 = DAT_04859430;
          *(long **)(lVar26 + 0x30) = DAT_04859430;
        }
        uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
        if (((uVar19 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
          (**(code **)(*plVar22 + 0x18))(plVar22,pcVar24,0,8);
        }
        else {
          FUN_00c48fe8(plVar22,pcVar24,0,8);
        }
      }
      *(uint **)(lVar26 + 0x30) = local_108;
      *(undefined2 *)(lVar26 + 0x38) = (undefined2)local_100;
      uVar28 = *(undefined8 *)(param_1 + 8);
      if (local_108 == (uint *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar26 + 0x30) = DAT_04859430;
      }
      local_108 = *(uint **)(lVar26 + 0x30);
      local_100 = *(undefined8 *)(lVar26 + 0x38);
      *(undefined8 *)(lVar26 + 0x30) = uVar28;
      *(undefined2 *)(lVar26 + 0x38) = 1;
      std::to_string(iVar17);
      pcVar24 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar24 = local_e0;
      }
      local_308[0] = '\0';
      strcat(local_308,pcVar24);
      sVar20 = strlen(local_308);
      pcVar24 = "0261_wild_bool02_loop";
LAB_02045e20:
      uVar28 = *(undefined8 *)(pcVar24 + 8);
      uVar25 = *(undefined8 *)(pcVar24 + 0xe);
      *(undefined8 *)(local_308 + sVar20) = *(undefined8 *)pcVar24;
      *(undefined8 *)(auStack_300 + sVar20) = uVar28;
      *(undefined8 *)(auStack_300 + sVar20 + 6) = uVar25;
      pcVar24 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar22 = *(long **)(lVar26 + 0x30);
        if (plVar22 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar22 = DAT_04859430;
          *(long **)(lVar26 + 0x30) = DAT_04859430;
        }
        uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
        if (((uVar19 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
          (**(code **)(*plVar22 + 0x18))(plVar22,pcVar24,0,8);
        }
        else {
          FUN_00c48fe8(plVar22,pcVar24,0,8);
        }
      }
      *(uint **)(lVar26 + 0x30) = local_108;
      *(undefined2 *)(lVar26 + 0x38) = (undefined2)local_100;
    }
    uVar29 = 1;
  }
  else {
    uVar29 = 0;
    if (*param_2 == 1) {
      if ((param_3 & 1) != 0) {
        if (bVar15 != 0) {
          return;
        }
        lVar27 = *(long *)(param_1 + 8);
        lVar26 = tpidr_el0;
        if (*(long *)(lVar26 + 0x30) == 0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          *(long **)(lVar26 + 0x30) = DAT_04859430;
        }
        local_108 = *(uint **)(lVar26 + 0x30);
        local_100 = *(undefined8 *)(lVar26 + 0x38);
        *(long *)(lVar26 + 0x30) = lVar27;
        *(undefined2 *)(lVar26 + 0x38) = 1;
        std::to_string(iVar17);
        pcVar24 = (char *)((ulong)&local_f0 | 1);
        if (((ulong)local_f0 & 1) != 0) {
          pcVar24 = local_e0;
        }
        local_208 = local_208 & 0xffffffffffffff00;
        strcat((char *)&local_208,pcVar24);
        sVar20 = strlen((char *)&local_208);
        *(undefined8 *)(auStack_300 + sVar20 + 0xf8) = s_0270_wild_bool01_start_03c7de5c._0_8_;
        *(ulong *)(auStack_200 + sVar20) =
             CONCAT17(s_0270_wild_bool01_start_03c7de5c[0xf],s_0270_wild_bool01_start_03c7de5c._8_7_
                     );
        *(ulong *)(auStack_1f9 + sVar20) =
             CONCAT71(s_0270_wild_bool01_start_03c7de5c._16_7_,
                      s_0270_wild_bool01_start_03c7de5c[0xf]);
        pcVar24 = local_e0;
        if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
          plVar22 = *(long **)(lVar26 + 0x30);
          if (plVar22 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar22 = DAT_04859430;
            *(long **)(lVar26 + 0x30) = DAT_04859430;
          }
          uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
          if (((uVar19 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
            (**(code **)(*plVar22 + 0x18))(plVar22,pcVar24,0,8);
          }
          else {
            FUN_00c48fe8(plVar22,pcVar24,0,8);
          }
        }
        *(uint **)(lVar26 + 0x30) = local_108;
        *(undefined2 *)(lVar26 + 0x38) = (undefined2)local_100;
        uVar28 = *(undefined8 *)(param_1 + 8);
        if (local_108 == (uint *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          *(long **)(lVar26 + 0x30) = DAT_04859430;
        }
        local_108 = *(uint **)(lVar26 + 0x30);
        local_100 = *(undefined8 *)(lVar26 + 0x38);
        *(undefined8 *)(lVar26 + 0x30) = uVar28;
        *(undefined2 *)(lVar26 + 0x38) = 1;
        std::to_string(iVar17);
        pcVar24 = (char *)((ulong)&local_f0 | 1);
        if (((ulong)local_f0 & 1) != 0) {
          pcVar24 = local_e0;
        }
        local_308[0] = '\0';
        strcat(local_308,pcVar24);
        sVar20 = strlen(local_308);
        pcVar24 = "0271_wild_bool01_loop";
        goto LAB_02045e20;
      }
      if (bVar15 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x390) != 1) {
        uVar28 = *(undefined8 *)(param_1 + 8);
        lVar26 = tpidr_el0;
        if (*(long *)(lVar26 + 0x30) == 0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          *(long **)(lVar26 + 0x30) = DAT_04859430;
        }
        local_108 = *(uint **)(lVar26 + 0x30);
        local_100 = *(undefined8 *)(lVar26 + 0x38);
        *(undefined8 *)(lVar26 + 0x30) = uVar28;
        *(undefined2 *)(lVar26 + 0x38) = 1;
        std::to_string(iVar17);
        pcVar24 = (char *)((ulong)&local_f0 | 1);
        if (((ulong)local_f0 & 1) != 0) {
          pcVar24 = local_e0;
        }
        local_208 = local_208 & 0xffffffffffffff00;
        strcat((char *)&local_208,pcVar24);
        sVar20 = strlen((char *)&local_208);
        *(undefined8 *)(auStack_300 + sVar20 + 0xf8) = s_0272_wild_bool01_end_03c9f4eb._0_8_;
        *(ulong *)(auStack_200 + sVar20) =
             CONCAT35(s_0272_wild_bool01_end_03c9f4eb._13_3_,s_0272_wild_bool01_end_03c9f4eb._8_5_);
        *(ulong *)(auStack_200 + sVar20 + 5) =
             CONCAT53(s_0272_wild_bool01_end_03c9f4eb._16_5_,s_0272_wild_bool01_end_03c9f4eb._13_3_)
        ;
        pcVar24 = local_e0;
        if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
          plVar22 = *(long **)(lVar26 + 0x30);
          if (plVar22 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            goto LAB_02046a88;
          }
          goto LAB_020466cc;
        }
        goto LAB_02046080;
      }
LAB_02045f68:
      if (((*PTR_DAT_047d8c28 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar17 != 0)) {
        local_f0 = (long *)FUN_00d44228();
        puVar12 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_f0);
        FUN_00100190(PTR_LAB_047d9240,puVar12,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      puVar12 = PTR_DAT_047d8c30;
      puVar5 = (undefined8 *)PTR_PTR_047d4508;
      local_208 = local_208 & 0xffffffffffffff00;
      puVar4 = (undefined8 *)PTR_PTR_047d4508;
      if (*(long *)PTR_DAT_047d8c30 != 0) {
        puVar4 = (undefined8 *)(*(long *)PTR_DAT_047d8c30 + 0x38);
      }
      strcat((char *)&local_208,(char *)*puVar4);
      if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar17 != 0)) {
        local_f0 = (long *)FUN_00d44228();
        puVar11 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_f0);
        FUN_00100190(PTR_LAB_047d9240,puVar11,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      local_308[0] = '\0';
      if (*(long *)puVar12 != 0) {
        puVar5 = (undefined8 *)(*(long *)puVar12 + 0x38);
      }
      strcat(local_308,(char *)*puVar5);
      uVar29 = 0;
    }
  }
  puVar13 = PTR_DAT_047d4250;
  puVar12 = PTR_DAT_047d4248;
  puVar11 = PTR_DAT_047d4240;
  if ((char)local_208 == '\0') {
    plVar22 = (long *)FUN_00d44228();
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar28 = *(undefined8 *)puVar12;
    *(undefined8 *)puVar13 = uVar28;
    FUN_00cf9884(&local_f0,uVar28,&local_208);
    plVar22 = local_f0;
  }
  if (local_308[0] == '\0') {
    plVar23 = (long *)FUN_00d44228();
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  else {
    if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar28 = *(undefined8 *)puVar12;
    *(undefined8 *)puVar13 = uVar28;
    FUN_00cf9884(&local_f0,uVar28,local_308);
    plVar23 = local_f0;
  }
  plVar21 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))();
  }
  plVar21 = *(long **)(param_1 + 0x388);
  *(long **)(param_1 + 0x380) = plVar22;
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))();
  }
  *(long **)(param_1 + 0x388) = plVar23;
  *(undefined4 *)(param_1 + 0x390) = uVar29;
  uVar7 = *param_2;
  FUN_00d64f48(&local_108,param_1);
  puVar10 = local_108;
  if (local_108 != (uint *)0x0) {
    puVar1 = local_108 + 0x20;
    puVar2 = local_108 + 0xc0;
    uVar28 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(puVar10 + 0xc2));
          while (*(long *)puVar2 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *(undefined8 *)puVar2 = uVar28;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_02046190;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *(undefined8 *)puVar2 = uVar28;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_02046190:
    plVar22 = *(long **)(puVar10 + 0x20);
    plVar23 = *(long **)(puVar10 + 0x22);
    plVar21 = plVar22;
    if ((plVar22 != plVar23) && (*plVar22 != -0x3f2e63c9690744f1)) {
      do {
        plVar21 = plVar21 + 0xb;
        if (plVar23 == plVar21) {
          plVar21 = plVar23;
          goto LAB_02046200;
        }
      } while (*plVar21 != -0x3f2e63c9690744f1);
    }
LAB_02046200:
    if (plVar23 == plVar21) {
      puVar10[0xc0] = 0;
      puVar10[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar10 + 0xc2));
      local_f8 = 0;
    }
    else {
      puVar10[0xc0] = 0;
      puVar10[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar10 + 0xc2));
      local_f8 = (ulong)(uint)((int)((ulong)((long)plVar21 - (long)plVar22) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      if (*(long *)(puVar10 + 0x6e) == 0) {
        local_d0 = local_6c;
        local_f0 = (long *)&LAB_02e657b0;
        local_e8 = FUN_02e657f0;
        local_e0 = "\b";
        puStack_d8 = &LAB_02e65800;
      }
      else {
        puStack_c8 = local_6c;
        local_d0 = puVar10;
        local_c0 = &local_f8;
        local_f0 = (long *)&LAB_029e901c;
        local_e8 = FUN_02e65784;
        local_e0 = &LAB_02e65788;
        puStack_d8 = &LAB_02e6579c;
      }
      local_6c[0] = uVar7;
      FUN_00c837c0(puVar10,puVar1,&local_f8,&local_f0);
      pcVar14 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (char *)0x0;
        puStack_d8 = (undefined1 *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar14)(&local_d0);
      }
    }
    lVar26 = *(long *)(puVar10 + 0xc);
    psVar3 = (short *)(lVar26 + 0x1a);
    do {
      sVar6 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*(long *)puVar10 + 0x50))(puVar10);
    }
    else if (sVar6 == 0) goto LAB_02046aa0;
  }
  FUN_00d64f48(&local_108,param_1);
  puVar10 = local_108;
  if (local_108 != (uint *)0x0) {
    puVar1 = local_108 + 0x3c;
    puVar2 = local_108 + 0xc0;
    uVar28 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(puVar10 + 0xc2));
          while (*(long *)puVar2 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *(undefined8 *)puVar2 = uVar28;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_02046314;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *(undefined8 *)puVar2 = uVar28;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_02046314:
    plVar22 = *(long **)(puVar10 + 0x3c);
    plVar23 = *(long **)(puVar10 + 0x3e);
    plVar21 = plVar22;
    if ((plVar22 != plVar23) && (*plVar22 != -0x3aa15713c3797e8e)) {
      do {
        plVar21 = plVar21 + 0xb;
        if (plVar23 == plVar21) {
          plVar21 = plVar23;
          goto LAB_02046384;
        }
      } while (*plVar21 != -0x3aa15713c3797e8e);
    }
LAB_02046384:
    if (plVar23 == plVar21) {
      puVar10[0xc0] = 0;
      puVar10[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar10 + 0xc2));
      local_f8 = 0;
    }
    else {
      puVar10[0xc0] = 0;
      puVar10[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar10 + 0xc2));
      local_f8 = (ulong)(uint)((int)((ulong)((long)plVar21 - (long)plVar22) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      local_6c[0] = CONCAT31(local_6c[0]._1_3_,param_3) & 0xffffff01;
      if (*(long *)(puVar10 + 0xa2) == 0) {
        local_d0 = local_6c;
        local_f0 = (long *)&LAB_02e658c0;
        local_e8 = FUN_02e65908;
        local_e0 = "\b";
        puStack_d8 = &LAB_02e65918;
      }
      else {
        puStack_c8 = local_6c;
        local_d0 = puVar10;
        local_c0 = &local_f8;
        local_f0 = (long *)&LAB_029e9640;
        local_e8 = FUN_02e65894;
        local_e0 = &LAB_02e65898;
        puStack_d8 = &LAB_02e658ac;
      }
      FUN_00c837c0(puVar10,puVar1,&local_f8,&local_f0);
      pcVar14 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (char *)0x0;
        puStack_d8 = (undefined1 *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar14)(&local_d0);
      }
    }
    lVar26 = *(long *)(puVar10 + 0xc);
    psVar3 = (short *)(lVar26 + 0x1a);
    do {
      sVar6 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*(long *)puVar10 + 0x50))(puVar10);
    }
    else if (sVar6 == 0) {
LAB_02046aa0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


