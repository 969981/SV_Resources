/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00255194; name: FUN_00255194
 */


void FUN_00255194(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  size_t sVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long **pplVar18;
  char *pcVar19;
  void *pvVar20;
  long *plVar21;
  void *pvVar22;
  long **pplVar23;
  long *plVar24;
  long *plVar25;
  ulong local_f8;
  long *local_f0;
  void *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  void *local_c8;
  long *plStack_c0;
  long **local_b8;
  long *local_b0;
  void *local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  int local_80;
  int iStack_7c;
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  
  if ((char)param_1[0xe] != '\0') {
                    /* try { // try from 002551c8 to 002551d3 has its CatchHandler @ 00255d8c */
    uVar7 = (**(code **)(*param_2 + 0x10))(param_2,0);
    if ((uVar7 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,param_2,param_1[1] + 0x58);
                    /* try { // try from 002551f8 to 002551ff has its CatchHandler @ 00255d8c */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
                    /* try { // try from 002554e4 to 00255527 has its CatchHandler @ 00255d8c */
    uVar7 = (**(code **)(*param_2 + 0x10))(param_2,10);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 00255600 to 00255607 has its CatchHandler @ 00255d8c */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
    piVar10 = (int *)(**(code **)(*param_2 + 0x78))(param_2);
    if (*piVar10 == 0x10) {
      FUN_0025e1bc(param_1[1]);
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
                    /* try { // try from 00255204 to 0025520f has its CatchHandler @ 00255d88 */
  uVar7 = (**(code **)(*param_2 + 0x10))(param_2,0);
  if ((uVar7 & 1) != 0) {
    FUN_0025dcac(&local_d8,param_1[1]);
    uVar7 = (**(code **)(*local_d8 + 0x20))();
    if (((uVar7 & 1) == 0) || (piVar10 = (int *)(**(code **)(*local_d8 + 0x38))(), *piVar10 != 0)) {
      plVar11 = local_d0;
      lVar16 = *(long *)(param_1[1] + 0x10);
      if (local_d0 != (long *)0x0) {
        plVar12 = local_d0 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar21 = *(long **)(lVar16 + 0x240);
      puVar17 = *(undefined8 **)(lVar16 + 0x4b8);
      plVar8 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x78,8);
      plVar8[2] = 0;
      plVar24 = plVar8 + 1;
      *plVar24 = 0;
      puVar5 = PTR_DAT_047cc0d8;
      plVar8[3] = (long)plVar21;
      plVar12 = plVar8 + 4;
      *plVar8 = (long)(puVar5 + 0x10);
      FUN_006c4254(plVar12);
      plVar8[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
      nn::os::InitializeEvent(plVar8 + 6,0,0);
      plVar8[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
      if (plVar8 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *plVar24 = *plVar24 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar9 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x160,8);
      plVar25 = plVar9 + 1;
      *plVar25 = 0;
      plVar9[2] = 0;
      plVar9[3] = (long)plVar21;
      *plVar9 = (long)&PTR_FUN_0448b770;
      FUN_006c5398(plVar9 + 4);
      plVar9[4] = (long)&PTR_LAB_0448b7c0;
      lVar16 = (**(code **)(*plVar21 + 0x10))(plVar21,0x10000,0x10);
      if (lVar16 == 0) {
        local_98 = (long *)CONCAT44(local_98._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_98,"");
      }
      FUN_006c4058(plVar9 + 10,plVar12,0,lVar16,0x10000,1);
      plVar9[10] = (long)&PTR_LAB_0448b808;
      plVar9[0x27] = (long)plVar21;
      plVar9[0x28] = 0x10000;
      *(undefined1 *)((long)plVar9 + 0x159) = 1;
      plVar9[0x29] = (long)plVar12;
      plVar9[0x2a] = (long)plVar8;
      plVar9[0x23] = (long)param_1;
      plVar9[0x24] = (long)local_d8;
      plVar9[0x25] = (long)plVar11;
      plVar9[0x26] = (long)param_2;
      local_b8 = (long **)0x0;
      local_b0 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = *plVar25 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_98 = plVar9 + 4;
      local_90 = plVar9;
      (**(code **)*puVar17)(puVar17,&local_98,&local_b8);
      if (local_90 != (long *)0x0) {
        plVar11 = local_90 + 1;
        do {
          lVar16 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_b0 != (long *)0x0) {
        plVar11 = local_b0 + 1;
        do {
          lVar16 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar9 != (long *)0x0) {
        do {
          lVar16 = *plVar25;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar8 != (long *)0x0) {
        do {
          lVar16 = *plVar24;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *plVar24 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    else {
      lVar16 = (**(code **)(*local_d8 + 0x38))();
      (**(code **)(*param_1 + 0x20))(param_1,param_2,lVar16 + 0x50,param_1[1] + 0x58);
                    /* try { // try from 00255724 to 0025572b has its CatchHandler @ 00255c20 */
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    if (local_d0 == (long *)0x0) {
      return;
    }
    plVar11 = local_d0 + 1;
    do {
      lVar16 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_d0 + 0x10))(local_d0);
      std::__shared_weak_count::__release_weak();
      return;
    }
    return;
  }
                    /* try { // try from 00255534 to 0025553f has its CatchHandler @ 00255d88 */
  uVar7 = (**(code **)(*param_2 + 0x10))(param_2,10);
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 00255614 to 0025561b has its CatchHandler @ 00255d88 */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  plVar11 = param_1 + 4;
  if ((int)*plVar11 == 0) goto LAB_00255b1c;
                    /* try { // try from 00255550 to 0025555b has its CatchHandler @ 00255d00 */
  FUN_00263cd4(&local_98,0);
  puVar5 = PTR_PTR_047cc208;
  FUN_00255d94(&local_b8,plVar11,*(undefined8 *)PTR_PTR_047cc208);
  pvVar22 = (void *)((ulong)&local_b8 | 1);
  if (((ulong)local_b8 & 1) != 0) {
    pvVar22 = local_a8;
  }
  FUN_00255d94(&local_d8,plVar11,*(undefined8 *)puVar5);
  uVar1 = (uint)((byte)local_d8 >> 1);
  if (((ulong)local_d8 & 1) != 0) {
    uVar1 = (uint)local_d0;
  }
                    /* try { // try from 002555b0 to 002555bb has its CatchHandler @ 00255c8c */
  uVar7 = FUN_0052d43c(&local_98,pvVar22,uVar1);
  if (((ulong)local_d8 & 1) == 0) {
    if (((ulong)local_b8 & 1) != 0) goto LAB_0025578c;
LAB_002555d0:
    if ((uVar7 & 1) == 0) goto LAB_002557ac;
LAB_002555d4:
    FUN_01e74fb0(&local_d8);
                    /* try { // try from 002555dc to 002555eb has its CatchHandler @ 00255c1c */
    FUN_01ea15b4(&local_b8,plVar11);
    pplVar23 = local_b8;
    while (pplVar23 != &local_b0) {
      pcVar19 = *(char **)puVar5;
      plVar11 = (long *)strlen(pcVar19);
      bVar2 = *(byte *)(pplVar23 + 4);
      if ((bVar2 & 1) == 0) {
        if (plVar11 != (long *)(ulong)(bVar2 >> 1)) {
LAB_00255690:
          plVar11 = (long *)((long)pplVar23 + 0x21);
          goto LAB_0025569c;
        }
        if (plVar11 == (long *)0xffffffffffffffff) {
LAB_00255ba4:
                    /* try { // try from 00255ba4 to 00255bab has its CatchHandler @ 00255bf8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar12 = (long *)((long)pplVar23 + 0x21);
joined_r0x0025567c:
        if ((plVar11 != (long *)0x0) &&
           (iVar6 = memcmp(plVar12,pcVar19,(size_t)plVar11), iVar6 != 0)) {
          if ((bVar2 & 1) != 0) goto LAB_00255698;
          goto LAB_00255690;
        }
      }
      else {
        if (plVar11 == pplVar23[5]) {
          if (plVar11 == (long *)0xffffffffffffffff) goto LAB_00255ba4;
          plVar12 = pplVar23[6];
          goto joined_r0x0025567c;
        }
LAB_00255698:
        plVar11 = pplVar23[6];
LAB_0025569c:
        FUN_027c3e80(&local_d8,plVar11,pplVar23 + 8);
      }
      pplVar18 = (long **)pplVar23[1];
      if ((long **)pplVar23[1] == (long **)0x0) {
        pplVar18 = pplVar23 + 2;
        if ((long **)**pplVar18 == pplVar23) {
          pplVar23 = (long **)*pplVar18;
        }
        else {
          do {
            plVar11 = *pplVar18;
            pplVar18 = (long **)(plVar11 + 2);
            pplVar23 = (long **)*pplVar18;
          } while (*pplVar23 != plVar11);
        }
      }
      else {
        do {
          pplVar23 = pplVar18;
          pplVar18 = (long **)*pplVar23;
        } while ((long **)*pplVar23 != (long **)0x0);
      }
    }
    FUN_01cfa44c(&local_b8,local_b0);
    piVar10 = (int *)CONCAT71(uStack_77,local_78);
    if (piVar10 == (int *)0x0) {
      iVar6 = iStack_7c;
LAB_0025580c:
                    /* try { // try from 00255818 to 0025588f has its CatchHandler @ 00255d04 */
      FUN_00532334(&local_88,iVar6 + 1);
      piVar10 = (int *)CONCAT71(uStack_77,local_78);
      iVar6 = *piVar10;
LAB_00255824:
      *piVar10 = iVar6 + 1;
      lVar16 = FUN_0049f2bc(local_88);
      *(long *)(CONCAT71(uStack_77,local_78) + (long)local_80 * 8 + 8) = lVar16;
    }
    else {
      iVar6 = *piVar10;
      if (iVar6 <= local_80) {
        if (iVar6 == iStack_7c) goto LAB_0025580c;
        goto LAB_00255824;
      }
      lVar16 = *(long *)(piVar10 + (long)local_80 * 2 + 2);
    }
    local_80 = local_80 + 1;
    uVar13 = FUN_00258a7c(&local_d8);
    puVar5 = PTR_s_type_googleapis_com__047cc210;
    sVar14 = strlen(PTR_s_type_googleapis_com__047cc210);
    FUN_0051fccc(lVar16 + 0x28,uVar13,puVar5,sVar14,"nn.npln.common.MapValue",0x17);
    local_b8 = (long **)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (void *)0x0;
                    /* try { // try from 00255898 to 002558a7 has its CatchHandler @ 00255bfc */
    FUN_0052d77c(&local_98,&local_b8);
    plVar11 = (long *)((ulong)local_b8 >> 1 & 0x7f);
    pvVar22 = (void *)((ulong)&local_b8 | 1);
    if (((ulong)local_b8 & 1) != 0) {
      plVar11 = local_b0;
      pvVar22 = local_a8;
    }
    local_e0 = (long *)FUN_01cf7e20();
    if ((long *)0xffffffffffffffef < plVar11) {
                    /* try { // try from 00255be0 to 00255be7 has its CatchHandler @ 00255bfc */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (plVar11 < (long *)0x17) {
      local_f8 = CONCAT71(local_f8._1_7_,(char)((int)plVar11 << 1));
      pvVar20 = (void *)((ulong)&local_f8 | 1);
      if (plVar11 != (long *)0x0) goto LAB_00255920;
    }
    else {
      pvVar20 = (void *)(**(code **)(*local_e0 + 0x10))
                                  (local_e0,(ulong)(plVar11 + 2) & 0xfffffffffffffff0,1);
      local_f8 = (ulong)(plVar11 + 2) & 0xfffffffffffffff0 | 1;
      local_f0 = plVar11;
      local_e8 = pvVar20;
LAB_00255920:
      memcpy(pvVar20,pvVar22,(size_t)plVar11);
    }
    *(undefined1 *)((long)pvVar20 + (long)plVar11) = 0;
    if (((ulong)local_b8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a8);
    }
    FUN_01cfa410(&local_d8);
  }
  else {
    (**(code **)(*plStack_c0 + 0x18))(plStack_c0,local_c8,(ulong)local_d8 & 0xfffffffffffffffe,1);
    if (((ulong)local_b8 & 1) == 0) goto LAB_002555d0;
LAB_0025578c:
    (**(code **)(*plStack_a0 + 0x18))(plStack_a0,local_a8,(ulong)local_b8 & 0xfffffffffffffffe,1);
    if ((uVar7 & 1) != 0) goto LAB_002555d4;
LAB_002557ac:
    FUN_00255d94(&local_f8,plVar11,*(undefined8 *)puVar5);
  }
  FUN_00264004(&local_98);
  lVar16 = param_1[4];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    pcVar19 = (char *)((long)param_1 + 0x29);
  }
  else {
    pcVar19 = (char *)param_1[7];
  }
  plVar11 = (long *)strlen(pcVar19);
  if ((long *)0xffffffffffffffef < plVar11) {
                    /* try { // try from 00255bd0 to 00255bd7 has its CatchHandler @ 00255bf0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (plVar11 < (long *)0x17) {
    local_b8 = (long **)CONCAT71(local_b8._1_7_,(char)((int)plVar11 << 1));
    pvVar22 = (void *)((ulong)&local_b8 | 1);
    if (plVar11 != (long *)0x0) goto LAB_002559d4;
  }
  else {
    pvVar22 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(plVar11 + 2) & 0xfffffffffffffff0);
    local_b8 = (long **)((ulong)(plVar11 + 2) & 0xfffffffffffffff0 | 1);
    local_b0 = plVar11;
    local_a8 = pvVar22;
LAB_002559d4:
    memcpy(pvVar22,pcVar19,(size_t)plVar11);
  }
  *(undefined1 *)((long)pvVar22 + (long)plVar11) = 0;
  if ((local_f8 & 1) == 0) {
    plVar11 = (long *)(local_f8 >> 1 & 0x7f);
    pvVar22 = (void *)((ulong)&local_f8 | 1);
    if ((long *)0x16 < plVar11) goto LAB_00255a34;
LAB_00255a04:
    local_d8 = (long *)CONCAT71(local_d8._1_7_,(char)((int)plVar11 << 1));
    pvVar20 = (void *)((ulong)&local_d8 | 1);
    if (plVar11 != (long *)0x0) goto LAB_00255a5c;
  }
  else {
    if ((long *)0xffffffffffffffef < local_f0) {
                    /* try { // try from 00255bd8 to 00255bdf has its CatchHandler @ 00255be8 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    plVar11 = local_f0;
    pvVar22 = local_e8;
    if (local_f0 < (long *)0x17) goto LAB_00255a04;
LAB_00255a34:
    pvVar20 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(plVar11 + 2) & 0xfffffffffffffff0);
    local_d8 = (long *)((ulong)(plVar11 + 2) & 0xfffffffffffffff0 | 1);
    local_d0 = plVar11;
    local_c8 = pvVar20;
LAB_00255a5c:
    memcpy(pvVar20,pvVar22,(size_t)plVar11);
  }
  *(undefined1 *)((long)pvVar20 + (long)plVar11) = 0;
                    /* try { // try from 00255a70 to 00255a83 has its CatchHandler @ 00255c60 */
  FUN_00223930(&local_98,(int)lVar16,&local_b8,&local_d8);
  if (((ulong)local_d8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_c8);
  }
  if (((ulong)local_b8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a8);
  }
                    /* try { // try from 00255abc to 00255ae7 has its CatchHandler @ 00255d20 */
  puVar15 = (undefined4 *)(**(code **)(*param_2 + 0x78))(param_2);
  *puVar15 = local_98._0_4_;
  FUN_001fcec0(puVar15 + 2,&local_90);
  FUN_001fcec0(puVar15 + 8,&local_78);
  if ((local_78 & 1) == 0) {
    if (((ulong)local_90 & 1) != 0) {
LAB_00255b88:
      FUN_0049e790(PTR_LAB_047cba48,CONCAT44(iStack_7c,local_80));
    }
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
    if (((byte)local_90 & 1) != 0) goto LAB_00255b88;
  }
  if ((local_f8 & 1) != 0) {
    (**(code **)(*local_e0 + 0x18))(local_e0,local_e8,local_f8 & 0xfffffffffffffffe,1);
  }
LAB_00255b1c:
                    /* try { // try from 00255b24 to 00255b4f has its CatchHandler @ 00255d88 */
  piVar10 = (int *)(**(code **)(*param_2 + 0x78))(param_2);
  if (*piVar10 == 0x10) {
    FUN_0025e1bc(param_1[1]);
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  return;
}


