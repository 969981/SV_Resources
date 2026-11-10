/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01436234; name: FUN_01436234
 */


void FUN_01436234(long *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  puVar2 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar2 = PTR_DAT_047d8c78;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar2 + 0x88);
  plVar18 = param_1 + 5;
  *plVar18 = (long)(puVar2 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar18);
  *param_1 = (long)&PTR_FUN_04543b78;
  param_1[4] = (long)&PTR_LAB_04543bf0;
  *plVar18 = (long)&PTR_LAB_04543c40;
  param_1[0xb] = 0;
  plVar18 = param_1 + 8;
  *plVar18 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  lVar4 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar4 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar4 + 0x30) = DAT_04859430;
  }
  plVar5 = param_1 + 0x10;
  *plVar5 = 0;
  param_1[0xd] = 0x555555555555555;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xc] = lVar6;
  param_1[0x11] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar4 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar4 + 0x30) = DAT_04859430;
  }
  param_1[0x16] = 0;
  param_1[0x13] = 0x555555555555555;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] = lVar6;
  param_1[0x17] = 0;
  FUN_00d0a71c(param_1 + 0x16,param_2);
  uVar7 = param_1[0x11];
  param_1[0x18] = param_3;
  *(undefined4 *)(param_1 + 0x19) = param_4;
  if (uVar7 < 0x20) {
    uVar19 = 0x20 - uVar7;
    plVar10 = (long *)param_1[9];
    plVar12 = (long *)param_1[10];
    lVar6 = (long)plVar12 - (long)plVar10 >> 3;
    uVar14 = param_1[0x10];
    lVar4 = 0;
    if ((long)plVar12 - (long)plVar10 != 0) {
      lVar4 = lVar6 * 0x55 + -1;
    }
    uVar13 = uVar7 + uVar14;
    uVar8 = uVar19 - (lVar4 - uVar13);
    if (lVar4 - uVar13 <= uVar19 && uVar8 != 0) {
      if (plVar12 == plVar10) {
        uVar8 = uVar8 + 1;
      }
      uVar7 = uVar8 / 0x55;
      if (uVar8 % 0x55 != 0) {
        uVar7 = uVar7 + 1;
      }
      uVar13 = uVar7;
      if (uVar14 / 0x55 <= uVar7) {
        uVar13 = uVar14 / 0x55;
      }
      uVar7 = uVar7 - uVar13;
      if (uVar7 == 0) {
        *plVar5 = uVar14 + uVar13 * -0x55;
        if (uVar13 != 0) {
          local_88 = *plVar10;
          param_1[9] = (long)(plVar10 + 1);
          FUN_014370c8(plVar18,&local_88);
          while (uVar13 = uVar13 - 1, uVar13 != 0) {
            local_88 = *(long *)param_1[9];
            param_1[9] = (long)((long *)param_1[9] + 1);
            FUN_014370c8(plVar18,&local_88);
          }
        }
      }
      else {
        lVar4 = param_1[0xb] - param_1[8];
        if ((ulong)((lVar4 >> 3) - lVar6) < uVar7) {
          uVar8 = lVar4 >> 2;
          uVar14 = uVar7 + lVar6;
          if (uVar7 + lVar6 <= uVar8) {
            uVar14 = uVar8;
          }
          plVar18 = param_1 + 0xc;
          local_70 = 0;
          local_68 = plVar18;
          if (uVar14 == 0) {
            local_88 = 0;
          }
          else {
            local_88 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar14 << 3,8);
            if (local_88 == 0) {
              (**(code **)(*(long *)*plVar18 + 0xe8))();
            }
          }
          local_80 = local_88 + (lVar6 - uVar13) * 8;
          local_70 = local_88 + uVar14 * 8;
          local_78 = local_80;
          local_90 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0xff0,8);
          if (local_90 == 0) {
            (**(code **)(*(long *)param_1[0x12] + 0xe8))();
          }
          FUN_01436d80(&local_88,&local_90);
          if (uVar7 != 1) {
            lVar4 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0xff0,8);
            if (lVar4 == 0) {
              (**(code **)(*(long *)param_1[0x12] + 0xe8))();
            }
            local_90 = lVar4;
            FUN_01436d80(&local_88,&local_90);
            for (lVar4 = uVar7 - 2; lVar4 != 0; lVar4 = lVar4 + -1) {
              lVar6 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0xff0,8);
              if (lVar6 == 0) {
                (**(code **)(*(long *)param_1[0x12] + 0xe8))();
              }
              local_90 = lVar6;
              FUN_01436d80(&local_88,&local_90);
            }
          }
          lVar4 = param_1[9];
          if (uVar13 != 0) {
            uVar7 = uVar13;
            do {
              FUN_014382e8(&local_88,lVar4);
              lVar4 = param_1[9] + 8;
              uVar7 = uVar7 - 1;
              param_1[9] = lVar4;
            } while (uVar7 != 0);
          }
          lVar6 = param_1[10];
          if (lVar6 != lVar4) {
            do {
              lVar4 = lVar6 + -8;
              FUN_014384c8(&local_88,lVar4);
              lVar6 = lVar4;
            } while (lVar4 != param_1[9]);
            lVar6 = param_1[10];
          }
          lVar16 = param_1[8];
          param_1[8] = local_88;
          param_1[9] = local_80;
          param_1[10] = local_78;
          lVar9 = param_1[0xb];
          param_1[0xb] = local_70;
          param_1[0x10] = param_1[0x10] + uVar13 * -0x55;
          local_78 = lVar6;
          if (lVar4 != lVar6) {
            local_78 = lVar6 + ((lVar6 - lVar4) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
          }
          local_88 = lVar16;
          local_80 = lVar4;
          local_70 = lVar9;
          if (lVar16 != 0) {
            plVar18 = (long *)*local_68;
            uVar7 = (**(code **)(*plVar18 + 0xf8))(plVar18);
            if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar18 + 0x18))(plVar18,lVar16,lVar9 - lVar16,8);
            }
            else {
              FUN_00c48fe8(plVar18,lVar16,lVar9 - lVar16,8);
            }
          }
        }
        else {
          if ((long *)param_1[0xb] != plVar12) {
            do {
              lVar4 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0xff0,8);
              if (lVar4 == 0) {
                (**(code **)(*(long *)param_1[0x12] + 0xe8))();
              }
              local_88 = lVar4;
              FUN_01437868(plVar18,&local_88);
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) {
                lVar4 = *plVar5;
                goto LAB_0143684c;
              }
            } while (param_1[0xb] != param_1[10]);
          }
          uVar14 = uVar7;
          do {
            lVar4 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0xff0,8);
            if (lVar4 == 0) {
              (**(code **)(*(long *)param_1[0x12] + 0xe8))();
            }
            local_88 = lVar4;
            FUN_01437340(plVar18,&local_88);
            lVar4 = 0x54;
            if (param_1[10] - param_1[9] != 8) {
              lVar4 = 0x55;
            }
            uVar14 = uVar14 - 1;
            lVar4 = lVar4 + param_1[0x10];
            param_1[0x10] = lVar4;
          } while (uVar14 != 0);
          uVar13 = uVar7 + uVar13;
LAB_0143684c:
          *plVar5 = lVar4 + uVar13 * -0x55;
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            local_88 = *(long *)param_1[9];
            param_1[9] = (long)((long *)param_1[9] + 1);
            FUN_014370c8(plVar18,&local_88);
          }
        }
      }
      uVar7 = param_1[0x11];
      uVar13 = param_1[0x10] + uVar7;
      plVar10 = (long *)param_1[9];
      plVar12 = (long *)param_1[10];
    }
    plVar18 = plVar10 + uVar13 / 0x55;
    if (plVar12 == plVar10) {
      puVar11 = (undefined8 *)*plVar18;
      puVar15 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)*plVar18;
      puVar15 = puVar11 + (uVar13 % 0x55) * 6;
    }
    uVar19 = uVar19 + ((long)puVar15 - (long)puVar11 >> 4) * -0x5555555555555555;
    if ((long)uVar19 < 1) {
      lVar6 = 0x54 - uVar19;
      lVar4 = SUB168(SEXT816(lVar6) * SEXT816(-0x6060606060606061),8);
      plVar5 = plVar18 + ((lVar4 >> 5) - (lVar4 >> 0x3f));
      lVar4 = *plVar5;
      uVar19 = ((lVar6 / 0x55) * 0x55 - lVar6) + 0x54;
    }
    else {
      plVar5 = plVar18 + uVar19 / 0x55;
      lVar4 = *plVar5;
      uVar19 = uVar19 % 0x55;
    }
    puVar17 = (undefined8 *)(lVar4 + uVar19 * 0x30);
    while (puVar17 != puVar15) {
      puVar1 = puVar17;
      if (plVar18 != plVar5) {
        puVar1 = puVar11 + 0x1fe;
      }
      puVar11 = puVar15;
      if (puVar1 != puVar15) {
        do {
          lVar4 = param_1[0x12];
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar6 == 0) {
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[5] = &DAT_cbf29ce484222645;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[3] = 0xffffffffffffffff;
            puVar11[4] = 0;
            *(undefined1 *)(puVar11 + 4) = 0;
          }
          else {
            if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            puVar11[5] = &DAT_cbf29ce484222645;
            puVar11[2] = 0;
            puVar11[3] = 0;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[3] = 0xffffffffffffffff;
            puVar11[4] = 0;
            *(undefined1 *)(puVar11 + 4) = 0;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          }
          puVar11 = puVar11 + 6;
        } while (puVar1 != puVar11);
        uVar7 = param_1[0x11];
        puVar11 = puVar1;
      }
      uVar7 = uVar7 + ((long)puVar11 - (long)puVar15 >> 4) * -0x5555555555555555;
      param_1[0x11] = uVar7;
      if (plVar18 == plVar5) {
        return;
      }
      plVar18 = plVar18 + 1;
      puVar11 = (undefined8 *)*plVar18;
      puVar15 = puVar11;
    }
  }
  else if (uVar7 != 0x20) {
    plVar5 = (long *)(param_1[9] + ((ulong)param_1[0x10] / 0x55) * 8);
    if (param_1[10] == param_1[9]) {
      lVar4 = *plVar5;
      lVar6 = 0;
    }
    else {
      lVar4 = *plVar5;
      lVar6 = lVar4 + ((ulong)param_1[0x10] % 0x55) * 0x30;
    }
    lVar9 = lVar6 - lVar4 >> 4;
    if (lVar6 - lVar4 < -0x5ff) {
      lVar6 = lVar9 * 0x5555555555555555 + 0x34;
      lVar4 = SUB168(SEXT816(lVar6) * SEXT816(-0x6060606060606061),8);
      plVar5 = plVar5 + ((lVar4 >> 5) - (lVar4 >> 0x3f));
      lVar4 = *plVar5;
      uVar7 = ((lVar6 / 0x55) * 0x55 - lVar6) + 0x54;
    }
    else {
      uVar7 = lVar9 * -0x5555555555555555 + 0x20;
      plVar5 = plVar5 + uVar7 / 0x55;
      lVar4 = *plVar5;
      uVar7 = uVar7 % 0x55;
    }
    FUN_01e00bac(plVar18,plVar5,lVar4 + uVar7 * 0x30);
    return;
  }
  return;
}


