/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118e4f4; name: FUN_0118e4f4
 */


void FUN_0118e4f4(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong local_68;
  
  plVar11 = (long *)*param_2;
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 6);
  }
  uVar12 = *puVar1;
  plVar10 = (long *)PTR_PTR_047d4508;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 7;
  }
  lVar15 = *plVar10;
  if (plVar11 == (long *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = plVar11[8];
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    if ((uVar13 & uVar7) == 0) {
      local_68 = uVar7 & uVar12;
      plVar10 = *(long **)(*param_1 + local_68 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) || (plVar10[1] != uVar12 && (plVar10[1] & uVar7) != local_68)
             ) goto LAB_0118e5d8;
        } while (plVar10[2] != uVar12);
        goto LAB_0118e7d8;
      }
    }
    else {
      local_68 = uVar12;
      if (uVar13 <= uVar12) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar12 / uVar13;
        }
        local_68 = uVar12 - uVar7 * uVar13;
      }
      plVar10 = *(long **)(*param_1 + local_68 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_0118e5d8;
          uVar7 = plVar10[1];
          if (uVar7 != uVar12) {
            if (uVar13 <= uVar7) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar7 / uVar13;
              }
              uVar7 = uVar7 - uVar6 * uVar13;
            }
            if (uVar7 != local_68) goto LAB_0118e5d8;
          }
        } while (plVar10[2] != uVar12);
        goto LAB_0118e7d8;
      }
    }
  }
LAB_0118e5d8:
  plVar10 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x88,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar9 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar10[2] = uVar12;
  plVar10[3] = lVar15;
  plVar10[4] = lVar14;
  plVar10[5] = (long)plVar11;
  memset(plVar10 + 6,0,0x58);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
     (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) {
    lVar14 = tpidr_el0;
    lVar15 = *(long *)(lVar14 + 0x30);
    if (lVar15 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar15 = DAT_04859430;
      *(long *)(lVar14 + 0x30) = DAT_04859430;
    }
  }
  plVar10[10] = lVar15;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  *(undefined4 *)(plVar10 + 0xd) = 0;
  *(undefined4 *)(plVar10 + 0x10) = 0;
  *(undefined2 *)((long)plVar10 + 0x84) = 1;
  plVar10[0xb] = 0x666666666666666;
  plVar10[0xc] = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar12;
  if ((uVar13 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar13 < (float)(param_1[0xb] + 1))) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar13) {
      uVar7 = uVar13;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar13 = param_1[1];
    if (uVar13 < uVar7) {
      uVar6 = uVar7;
LAB_0118e74c:
      FUN_0118eb70(param_1,uVar6);
    }
    else if (uVar7 < uVar13) {
      uVar6 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar13 < 3) ||
         (uVar8 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar6 = std::__next_prime(uVar6);
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar13) goto LAB_0118e74c;
    }
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      local_68 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      local_68 = uVar12;
    }
    else {
      uVar7 = 0;
      if (uVar13 != 0) {
        uVar7 = uVar12 / uVar13;
      }
      local_68 = uVar12 - uVar7 * uVar13;
    }
  }
  plVar11 = *(long **)(*param_1 + local_68 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 6;
    *plVar10 = *plVar11;
    *plVar11 = (long)plVar10;
    *(long **)(*param_1 + local_68 * 8) = plVar11;
    if (*plVar10 != 0) {
      uVar12 = *(ulong *)(*plVar10 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar12 = uVar12 & uVar13 - 1;
      }
      else if (uVar13 <= uVar12) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar12 / uVar13;
        }
        uVar12 = uVar12 - uVar7 * uVar13;
      }
      plVar11 = (long *)(*param_1 + uVar12 * 8);
      goto LAB_0118e7c4;
    }
  }
  else {
    *plVar10 = *plVar11;
LAB_0118e7c4:
    *plVar11 = (long)plVar10;
  }
  plVar11 = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
LAB_0118e7d8:
  plVar5 = (long *)plVar10[6];
  plVar10[6] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar15 = *param_2;
  *param_2 = 0;
  plVar5 = plVar10 + 7;
  lVar14 = *plVar5;
  plVar10[6] = lVar15;
  if (lVar14 != 0) {
    lVar9 = plVar10[8];
    lVar15 = lVar14;
    if (lVar9 != lVar14) {
      do {
        lVar15 = lVar9 + -0x20;
        lVar9 = lVar9 + -0x28;
        FUN_0104328c(lVar15);
      } while (lVar14 != lVar9);
      lVar15 = *plVar5;
    }
    lVar9 = plVar10[9];
    plVar2 = (long *)plVar10[10];
    plVar10[8] = lVar14;
    uVar12 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar15,lVar9 - lVar15,8);
    }
    else {
      FUN_00c48fe8(plVar2,lVar15,lVar9 - lVar15,8);
    }
    plVar10[8] = 0;
    plVar10[9] = 0;
    *plVar5 = 0;
  }
  lVar15 = param_2[4];
  lVar14 = param_2[5];
  lVar9 = param_2[7];
  plVar10[0xc] = param_2[6];
  plVar10[0xd] = lVar9;
  plVar10[10] = lVar15;
  plVar10[0xb] = lVar14;
  plVar10[7] = param_2[1];
  plVar10[8] = param_2[2];
  plVar10[9] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar15 = param_2[8];
  lVar14 = param_2[9];
  *(undefined8 *)((long)plVar10 + 0x7e) = *(undefined8 *)((long)param_2 + 0x4e);
  plVar10[0xe] = lVar15;
  plVar10[0xf] = lVar14;
  if (plVar11 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0118e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}


