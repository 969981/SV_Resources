/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d1b78; name: FUN_012d1b78
 */


void FUN_012d1b78(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  void *__s;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar11 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_045e7700;
  param_1[1] = lVar11;
  param_1[4] = (long)&PTR_LAB_045e7730;
  if (((*PTR_DAT_047e23d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047e23d8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047e2470,PTR_DAT_047e23e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e23d8);
  }
  PTR_DAT_047e23e0[8] = 1;
  *param_1 = (long)&PTR_LAB_045e76b0;
  param_1[0xc] = 0;
  param_1[4] = (long)&PTR_LAB_045e76e0;
  plVar15 = param_1 + 5;
  *plVar15 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  lVar5 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (plVar12 = *(long **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), plVar12 == (long *)0x0)) &&
     (plVar12 = *(long **)(lVar5 + 0x30), plVar12 == (long *)0x0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar12 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = (long)plVar12;
  param_1[0x13] = 0;
  param_1[0xe] = 0x666666666666666;
  param_1[0xf] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (plVar12 = *(long **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), plVar12 == (long *)0x0)) &&
     (plVar12 = *(long **)(lVar5 + 0x30), plVar12 == (long *)0x0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar12 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x15] = 0x666666666666666;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x14] = (long)plVar12;
  nn::diag::InitializeAbortObserverHolder
            ((AbortObserverHolder *)(param_1 + 0x18),(_func_void_AbortInfo_ptr *)&LAB_02c7c7f0);
  nn::diag::RegisterAbortObserver((AbortObserverHolder *)(param_1 + 0x18));
  if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  plVar12 = DAT_04859430;
  __s = (void *)(**(code **)(*DAT_04859430 + 0x10))(DAT_04859430,0x1000,1);
  if (__s == (void *)0x0) {
    plVar12 = (long *)0x0;
    lVar5 = 0;
    lVar11 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    lVar5 = 0x1000;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    memset(__s,0,0x1000);
    lVar11 = 1;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  lVar6 = *plVar15;
  *plVar15 = (long)__s;
  if (lVar6 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar2 = *(int *)(lVar7 + 0x12c8);
    iVar4 = iVar2 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar4;
    if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
      *(int *)(lVar7 + 0x12cc) = iVar4;
    }
    plVar9 = (long *)param_1[6];
    lVar7 = param_1[7];
    lVar13 = param_1[8];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,lVar7,lVar13);
    }
    else {
      FUN_00c48fe8(plVar9,lVar6,lVar7,lVar13);
    }
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar4;
    if (iVar4 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_90 = plVar9 + plVar9[600] * 3;
        local_80 = plVar9;
        FUN_00c4ea30(&local_80,&local_90);
        local_98 = (long *)*plVar9;
        plVar1 = plVar9;
        if (plVar9[600] != 0) {
          plVar1 = plVar9 + plVar9[600] * 3;
        }
        if (plVar1 == plVar9) {
          lVar7 = 0;
          local_a0 = 0;
        }
        else {
          lVar7 = 0;
          local_a0 = 0;
          plVar14 = plVar9;
          do {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            if ((long *)*plVar14 != local_98) {
              (**(code **)(*local_98 + 0x100))(local_98,plVar9 + local_a0 * 3,plVar14);
              local_98 = (long *)*plVar14;
              local_a0 = lVar7;
            }
            plVar14 = plVar14 + 3;
            lVar7 = lVar7 + 1;
          } while (plVar1 != plVar14);
        }
        (**(code **)(*local_98 + 0x100))(local_98,plVar9 + local_a0 * 3,plVar9 + lVar7 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
    __s = (void *)*plVar15;
  }
  param_1[8] = lVar11;
  param_1[6] = (long)plVar12;
  param_1[7] = lVar5;
  nn::os::SetDyingMessageRegion((ulong)__s,0x1000);
  local_80 = (long *)0xeaf7a3383d5452a1;
  pcStack_78 = "AbortInfo";
  local_90 = (long *)&LAB_02c7d50c;
  uStack_88 = 0;
  local_70 = 9;
  uStack_68 = 0;
  FUN_02c7c8a8(param_1,&local_80,1,0x100,&local_90);
  return;
}


