/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e34ca0; name: FUN_00e34ca0
 */


void FUN_00e34ca0(undefined8 *param_1,long *param_2,undefined8 param_3,uint param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long local_d0;
  long local_98;
  long *local_90;
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  uVar13 = (ulong)param_4;
  *param_1 = &PTR_LAB_04608f68;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  lVar9 = tpidr_el0;
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar9 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  puVar12 = param_1 + 8;
  *puVar12 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = lVar5;
  param_1[5] = 0x7ffffffffffffff;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar9 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xb] = lVar5;
  param_1[0xc] = 0x1fffffffffffffff;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar9 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  param_1[0x12] = lVar5;
  lVar9 = param_1[1];
  param_1[0x13] = 0x1fffffffffffffff;
  param_1[0x14] = 0;
  lVar5 = uVar13 * 0x20;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((ulong)(param_1[3] - lVar9 >> 5) < uVar13) {
    puVar10 = param_1 + 4;
    lVar11 = param_1[2];
    lVar6 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar5,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xe8))();
    }
    lVar9 = lVar6 + (lVar11 - lVar9 >> 5) * 0x20;
    lVar11 = param_1[1];
    lVar7 = param_1[2];
    if (lVar7 == lVar11) {
      local_d0 = lVar9;
      lVar7 = lVar11;
    }
    else {
      local_d0 = lVar9 + -0x20;
      FUN_00e381ec(puVar10,local_d0,lVar7 + -0x20);
      if (lVar7 + -0x20 != lVar11) {
        do {
          local_d0 = local_d0 + -0x20;
          FUN_00e381ec(puVar10,local_d0,lVar7 + -0x40);
          lVar7 = lVar7 + -0x20;
        } while (lVar11 + 0x20 != lVar7);
      }
      lVar7 = param_1[1];
      lVar11 = param_1[2];
    }
    param_1[1] = local_d0;
    param_1[2] = lVar9;
    lVar9 = param_1[3];
    param_1[3] = lVar6 + uVar13 * 0x20;
    if ((lVar11 != lVar7) && (FUN_00e38130(lVar11 + -0x20), lVar11 + -0x20 != lVar7)) {
      do {
        FUN_00e38130(lVar11 + -0x40);
        lVar11 = lVar11 + -0x20;
      } while (lVar7 + 0x20 != lVar11);
    }
    if (lVar7 != 0) {
      plVar15 = (long *)*puVar10;
      uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar8 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar7,lVar9 - lVar7,8);
      }
      else {
        FUN_00c48fe8(plVar15,lVar7,lVar9 - lVar7,8);
      }
    }
  }
  FUN_00e37f10(puVar12,uVar13);
  FUN_00e37f10(param_1 + 0xf,uVar13);
  if (param_4 != 0) {
    do {
      lVar9 = (**(code **)(*param_2 + 0x10))(param_2,0x200,8);
      if (lVar9 == 0) {
        lVar6 = 0;
        lVar11 = 0;
        local_88 = 0;
        local_80 = 0;
        local_98 = 0;
        local_90 = (long *)0x0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00e35460;
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        FUN_00e35578(lVar9,param_2,param_3,*param_5);
        lVar6 = 8;
        lVar11 = 0x200;
        local_88 = 0x200;
        local_80 = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        local_98 = lVar9;
        local_90 = param_2;
      }
      plVar3 = local_90;
      plVar15 = (long *)param_1[2];
      if (plVar15 < (long *)param_1[3]) {
        uVar14 = param_1[4];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          *plVar15 = lVar9;
          plVar15[1] = (long)plVar3;
          plVar15[2] = lVar11;
          plVar15[3] = lVar6;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00e35460;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          *plVar15 = local_98;
          plVar15[1] = (long)local_90;
          plVar15[2] = local_88;
          plVar15[3] = local_80;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        param_1[2] = plVar15 + 4;
        local_98 = 0;
      }
      else {
        FUN_00e382d4(param_1 + 1,&local_98);
        lVar9 = local_98;
        local_98 = 0;
        if (lVar9 != 0) {
          FUN_00c4e5a0(auStack_78,0);
          FUN_01048230(lVar9);
          lVar11 = local_80;
          lVar6 = local_88;
          plVar15 = local_90;
          uVar8 = (**(code **)(*local_90 + 0xf8))(local_90);
          if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar9,lVar6,lVar11);
          }
          else {
            FUN_00c48fe8(plVar15,lVar9,lVar6,lVar11);
          }
          FUN_00c4e70c(auStack_78);
        }
      }
      puVar2 = PTR_LAB_047d3900;
      uVar1 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar1;
    } while (uVar1 != 0);
    lVar9 = 0;
    do {
      lVar6 = *(long *)(param_1[1] + lVar9);
      plVar15 = (long *)param_1[9];
      local_98 = lVar6;
      if (plVar15 < (long *)param_1[10]) {
        uVar14 = param_1[0xb];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 == 0) {
          *plVar15 = lVar6;
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00e35460:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar14;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          *plVar15 = local_98;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        param_1[9] = plVar15 + 1;
      }
      else {
        FUN_00e38584(puVar12,&local_98);
      }
      lVar9 = lVar9 + 0x20;
    } while (lVar5 != lVar9);
  }
  return;
}


