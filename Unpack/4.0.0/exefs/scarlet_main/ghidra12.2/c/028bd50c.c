/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bd50c; name: FUN_028bd50c
 */


undefined8
FUN_028bd50c(long param_1,long param_2,long param_3,long *param_4,uint param_5,byte param_6)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  void *local_108;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  long *plStack_a8;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar21 = *(ulong *)(param_1 + 0x28);
  if (uVar21 == 0) {
LAB_028bdb18:
    uVar12 = 0;
LAB_028bdb1c:
    FUN_028ab7e0(&local_98);
    return uVar12;
  }
  local_f8 = local_f8 & 0xffffffff00000000;
  memset(&uStack_f0,0,0x54);
  FUN_028aa9d0(&local_98,&local_f8);
  pvVar3 = local_c0;
  lVar1 = tpidr_el0;
  if (local_c0 != (void *)0x0) {
    local_b8 = local_c0;
    plVar13 = *(long **)(lVar1 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    }
    else {
      FUN_00c48fe8(plVar13,pvVar3,0,8);
    }
  }
  pvVar3 = local_d8;
  param_6 = param_6 & 1;
  pvVar6 = (void *)(param_3 - param_2);
  if (local_d8 != (void *)0x0) {
    local_d0 = local_d8;
    plVar13 = *(long **)(lVar1 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    }
    else {
      FUN_00c48fe8(plVar13,pvVar3,0,8);
    }
  }
  uVar7 = (local_70 + local_78) - 1;
  *(undefined4 *)(*(long *)(local_90 + (uVar7 / 0x2a) * 8) + (uVar7 % 0x2a) * 0x60) = 0;
  uVar7 = (local_70 + local_78) - 1;
  *(long *)(*(long *)(local_90 + (uVar7 / 0x2a) * 8) + (uVar7 % 0x2a) * 0x60 + 8) = param_2;
  uVar7 = (local_70 + local_78) - 1;
  *(long *)(*(long *)(local_90 + (uVar7 / 0x2a) * 8) + (uVar7 % 0x2a) * 0x60 + 0x10) = param_2;
  uVar7 = (local_70 + local_78) - 1;
  *(long *)(*(long *)(local_90 + (uVar7 / 0x2a) * 8) + (uVar7 % 0x2a) * 0x60 + 0x18) = param_3;
  uVar7 = (local_70 + local_78) - 1;
  uVar10 = uVar7 % 0x2a;
  lVar8 = *(long *)(local_90 + (uVar7 / 0x2a) * 8);
  lVar18 = lVar8 + uVar10 * 0x60;
  plVar19 = (long *)(lVar18 + 0x38);
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  plVar13 = (long *)(lVar18 + 0x40);
  pvVar3 = (void *)*plVar13;
  uVar11 = (long)pvVar3 - *plVar19 >> 4;
  if (uVar11 < uVar7) {
    plVar14 = (long *)(lVar8 + uVar10 * 0x60 + 0x48);
    uVar7 = uVar7 - uVar11;
    if ((ulong)(*plVar14 - (long)pvVar3 >> 4) < uVar7) {
      lVar18 = FUN_028be054(plVar19);
      lVar16 = *plVar13;
      pvVar3 = (void *)*plVar19;
      lVar9 = lVar16 - (long)pvVar3;
      lVar8 = 0;
      if (lVar18 != 0) {
        lVar8 = FUN_028be098(lVar18);
        pvVar3 = (void *)*plVar19;
        lVar16 = *plVar13;
      }
      pvVar4 = (void *)(lVar8 + (lVar9 >> 4) * 0x10);
      memset(pvVar4,0,uVar7 * 0x10);
      sVar5 = lVar16 - (long)pvVar3;
      if (0 < (long)sVar5) {
        memcpy((void *)((long)pvVar4 - sVar5),pvVar3,sVar5);
      }
      *plVar19 = (long)((long)pvVar4 - sVar5);
      *plVar13 = (long)((long)pvVar4 + uVar7 * 0x10);
      *plVar14 = lVar8 + lVar18 * 0x10;
      if (pvVar3 != (void *)0x0) {
        plVar13 = *(long **)(lVar1 + 0x30);
        if (plVar13 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar13 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if ((uVar7 & 1) != 0) goto LAB_028bdef8;
        goto LAB_028bde50;
      }
    }
    else {
      pvVar4 = pvVar3;
      if (uVar7 != 0) {
        pvVar4 = (void *)((long)pvVar3 + uVar7 * 0x10);
        memset(pvVar3,0,uVar7 * 0x10);
      }
      *plVar13 = (long)pvVar4;
    }
  }
  else if (uVar11 != uVar7) {
    *plVar13 = *plVar19 + uVar7 * 0x10;
  }
LAB_028bd75c:
  uVar7 = (local_70 + local_78) - 1;
  uVar15 = 1;
  *(ulong *)(*(long *)(local_90 + (uVar7 / 0x2a) * 8) + (uVar7 % 0x2a) * 0x60 + 0x50) = uVar21;
  uVar7 = (local_70 + local_78) - 1;
  *(uint *)(*(long *)(local_90 + (uVar7 / 0x2a) * 8) + (uVar7 % 0x2a) * 0x60 + 0x58) = param_5;
  uVar7 = (local_70 + local_78) - 1;
  local_108 = (void *)0x0;
  *(byte *)(*(long *)(local_90 + (uVar7 / 0x2a) * 8) + (uVar7 % 0x2a) * 0x60 + 0x5c) = param_6;
  param_6 = 0;
  do {
    plVar13 = (long *)&DAT_c30c30c30c30c30d;
    if (((uVar15 & 0xfff) == 0) && ((int)pvVar6 <= (int)(uVar15 >> 0xc))) goto LAB_028bdef4;
    uVar7 = (local_70 + local_78) - 1;
    uVar21 = uVar7 % 0x2a;
    lVar8 = *(long *)(local_90 + (uVar7 / 0x2a) * 8);
    puVar20 = (ulong *)(lVar8 + uVar21 * 0x60);
    puVar17 = puVar20 + 10;
    plVar19 = (long *)*puVar17;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19,puVar20);
    }
    switch((int)*puVar20) {
    case -1000:
      if (((param_5 >> 5 & 1) != 0) && (*(long *)(lVar8 + uVar21 * 0x60 + 0x10) == param_2))
      goto switchD_028bd8a0_caseD_fffffc1f;
      plVar13 = (long *)(lVar8 + uVar21 * 0x60 + 0x10);
      if ((param_5 >> 0xc & 1) == 0) {
        lVar18 = *plVar13;
      }
      else {
        lVar18 = *plVar13;
        if (lVar18 != param_3) goto switchD_028bd8a0_caseD_fffffc1f;
      }
      pvVar3 = (void *)(lVar18 - *(long *)(lVar8 + uVar21 * 0x60 + 8));
      if ((long)pvVar3 <= (long)local_108 && ((param_6 ^ 0xff) & 1) == 0) {
        pvVar3 = local_108;
      }
      if (pvVar3 == pvVar6) {
        FUN_028ab910(&local_98);
        param_6 = 1;
        local_108 = pvVar6;
      }
      else {
        FUN_028aaedc(&local_98);
        param_6 = 1;
        local_108 = pvVar3;
      }
      break;
    case -999:
    case -0x3e2:
    case -0x3df:
      break;
    default:
      goto switchD_028bd8a0_caseD_fffffc1a;
    case -0x3e3:
      FUN_028ab27c(&local_98,puVar20);
    case -0x3e1:
switchD_028bd8a0_caseD_fffffc1f:
      FUN_028aaedc(&local_98);
      break;
    case -0x3e0:
      local_f8 = *puVar20;
      uStack_f0 = puVar20[1];
      lVar18 = lVar8 + uVar21 * 0x60;
      local_e8 = puVar20[2];
      uStack_e0 = puVar20[3];
      local_d8 = (void *)0x0;
      local_d0 = (void *)0x0;
      local_c8 = (void *)0x0;
      plVar13 = (long *)(lVar18 + 0x28);
      plVar19 = (long *)(lVar18 + 0x20);
      lVar18 = *plVar13 - *plVar19;
      if (lVar18 != 0) {
        lVar18 = lVar18 >> 3;
        uVar7 = lVar18 * -0x5555555555555555;
        if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        pvVar3 = (void *)FUN_028be17c(uVar7);
        local_c8 = (void *)((long)pvVar3 + lVar18 * 8);
        pvVar4 = (void *)*plVar19;
        sVar5 = *plVar13 - (long)pvVar4;
        local_d8 = pvVar3;
        if (0 < (long)sVar5) {
          local_d0 = pvVar3;
          memcpy(pvVar3,pvVar4,sVar5);
          pvVar3 = (void *)((long)pvVar3 + (sVar5 / 0x18) * 0x18);
        }
        local_d0 = pvVar3;
      }
      lVar8 = lVar8 + uVar21 * 0x60;
      local_c0 = (void *)0x0;
      local_b8 = (void *)0x0;
      local_b0 = (void *)0x0;
      plVar13 = (long *)(lVar8 + 0x38);
      plVar19 = (long *)(lVar8 + 0x40);
      lVar8 = *plVar19 - *plVar13;
      if (lVar8 != 0) {
        uVar21 = lVar8 >> 4;
        if (uVar21 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        pvVar3 = (void *)FUN_028be098(uVar21);
        local_b0 = (void *)((long)pvVar3 + uVar21 * 0x10);
        pvVar4 = (void *)*plVar13;
        uVar21 = *plVar19 - (long)pvVar4;
        local_c0 = pvVar3;
        if (0 < (long)uVar21) {
          local_b8 = pvVar3;
          memcpy(pvVar3,pvVar4,uVar21);
          pvVar3 = (void *)((long)pvVar3 + uVar21);
        }
        local_b8 = pvVar3;
      }
      plStack_a8 = (long *)*puVar17;
      (**(code **)(*(long *)*puVar17 + 0x18))((long *)*puVar17,1,puVar20);
      (**(code **)(*plStack_a8 + 0x18))(plStack_a8,0,&local_f8);
      FUN_028aa9d0(&local_98,&local_f8);
      pvVar3 = local_c0;
      if (local_c0 != (void *)0x0) {
        local_b8 = local_c0;
        plVar13 = *(long **)(lVar1 + 0x30);
        if (plVar13 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar13 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
        }
        else {
          FUN_00c48fe8(plVar13,pvVar3,0,8);
        }
      }
      pvVar3 = local_d8;
      if (local_d8 != (void *)0x0) {
        local_d0 = local_d8;
        plVar13 = *(long **)(lVar1 + 0x30);
        if (plVar13 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar13 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
        }
        else {
          FUN_00c48fe8(plVar13,pvVar3,0,8);
        }
      }
    }
    uVar15 = uVar15 + 1;
    if (local_70 == 0) {
      if (param_6 == 0) goto LAB_028bdb18;
      uVar12 = 1;
      *(long *)*param_4 = param_2;
      *(long *)(*param_4 + 8) = param_2 + (long)local_108;
      *(undefined1 *)(*param_4 + 0x10) = 1;
      goto LAB_028bdb1c;
    }
  } while( true );
switchD_028bd8a0_caseD_fffffc1a:
  FUN_028be260();
LAB_028bdef4:
  FUN_028be170();
  pvVar3 = pvVar6;
LAB_028bdef8:
  lVar8 = FUN_00c4e600();
  if (*(int *)(lVar8 + 0x12c8) < 1) {
LAB_028bde50:
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
  }
  else {
    FUN_00c48fe8(plVar13,pvVar3,0,8);
  }
  goto LAB_028bd75c;
}


