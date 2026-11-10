/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f87e8; name: FUN_011f87e8
 */


void FUN_011f87e8(long *param_1,long param_2,undefined4 param_3,void *param_4,byte param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *local_130;
  long local_128;
  long local_120;
  long *local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  byte local_80;
  
  pcVar11 = *(char **)(param_2 + 8);
  if (*pcVar11 == '\0') {
    plVar4 = (long *)FUN_00d44228();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar2;
    FUN_00cf9884(&local_130,uVar2,pcVar11);
    plVar4 = local_130;
  }
  local_130 = (long *)PTR_DAT_047d8b70;
  if (plVar4 != (long *)0x0) {
    local_130 = plVar4 + 6;
  }
  local_130 = (long *)*local_130;
  plVar12 = (long *)PTR_PTR_047d4508;
  if (plVar4 != (long *)0x0) {
    plVar12 = plVar4 + 7;
  }
  local_128 = *plVar12;
  param_5 = param_5 & 1;
  if (plVar4 == (long *)0x0) {
    local_120 = 0;
  }
  else {
    local_120 = plVar4[8];
  }
  local_118 = (long *)0x0;
  plVar12 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar12 = plVar4;
  }
  local_10c = 1;
  local_118 = plVar12;
  local_110 = param_3;
  memcpy(auStack_100,param_4,0x40);
  memcpy(auStack_c0,param_4,0x40);
  local_80 = param_5;
  if ((ulong)param_1[0x75] < (ulong)param_1[0x76]) {
    FUN_011f9db0(param_1 + 0x74,&local_130);
  }
  else {
    lVar10 = param_1[0x75] - param_1[0x74] >> 6;
    uVar6 = lVar10 * -0x5555555555555555 + 1;
    if (0x155555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[0x76] - param_1[0x74] >> 6;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (0xaaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar6 = 0x155555555555555;
    }
    if (uVar6 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)param_1[0x77] + 0x10))((long *)param_1[0x77],uVar6 * 0xc0,0x10);
      if (lVar8 == 0) {
        (**(code **)(*(long *)param_1[0x77] + 0xe8))();
      }
    }
    lVar13 = param_1[0x77];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    plVar12 = local_118;
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_011f8d88:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    plVar14 = (long *)(lVar8 + lVar10 * 0x40);
    *plVar14 = (long)local_130;
    lVar10 = lVar8 + lVar10 * 0x40;
    *(long *)(lVar10 + 8) = local_128;
    *(long *)(lVar10 + 0x10) = local_120;
    local_118 = (long *)0x0;
    *(long **)(lVar10 + 0x18) = plVar12;
    memcpy((void *)(lVar10 + 0x20),&local_110,0x91);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar13 = param_1[0x74];
    lVar10 = param_1[0x75];
    if (lVar10 == lVar13) {
      plVar12 = plVar14;
      lVar10 = lVar13;
    }
    else {
      lVar3 = 0;
      do {
        lVar7 = param_1[0x77];
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_011f8d88;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        lVar7 = lVar10 + lVar3;
        *(undefined8 *)((long)plVar14 + lVar3 + -0xc0) = *(undefined8 *)(lVar7 + -0xc0);
        *(undefined8 *)((long)plVar14 + lVar3 + -0xb8) = *(undefined8 *)(lVar7 + -0xb8);
        *(undefined8 *)((long)plVar14 + lVar3 + -0xb0) = *(undefined8 *)(lVar7 + -0xb0);
        uVar2 = *(undefined8 *)(lVar7 + -0xa8);
        *(undefined8 *)(lVar7 + -0xa8) = 0;
        *(undefined8 *)((long)plVar14 + lVar3 + -0xa8) = uVar2;
        memcpy((void *)((long)plVar14 + lVar3 + -0xa0),(void *)(lVar7 + -0xa0),0x91);
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar3 = lVar3 + -0xc0;
      } while (lVar13 - lVar10 != lVar3);
      lVar13 = param_1[0x74];
      plVar12 = (long *)((long)plVar14 + lVar3);
      lVar10 = param_1[0x75];
    }
    lVar3 = param_1[0x76];
    param_1[0x74] = (long)plVar12;
    param_1[0x75] = (long)(plVar14 + 0x18);
    param_1[0x76] = lVar8 + uVar6 * 0xc0;
    if (lVar10 != lVar13) {
      if (*(long **)(lVar10 + -0xa8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + -0xa8) + 0x20))();
      }
      if (lVar10 + -0xc0 != lVar13) {
        do {
          if (*(long **)(lVar10 + -0x168) != (long *)0x0) {
            (**(code **)(**(long **)(lVar10 + -0x168) + 0x20))();
          }
          lVar10 = lVar10 + -0xc0;
        } while (lVar13 + 0xc0 != lVar10);
      }
    }
    if (lVar13 != 0) {
      plVar12 = (long *)param_1[0x77];
      uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,lVar3 - lVar13,0x10);
      }
      else {
        FUN_00c48fe8(plVar12,lVar13,lVar3 - lVar13,0x10);
      }
    }
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  FUN_011f8d90(param_1[0x74],param_1[0x75]);
  *(undefined1 *)((long)param_1 + 0x4fd) = 1;
  if (*(char *)((long)param_1 + 0xf4) == '\0') {
    *(undefined1 *)((long)param_1 + 0xf4) = 1;
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  return;
}


