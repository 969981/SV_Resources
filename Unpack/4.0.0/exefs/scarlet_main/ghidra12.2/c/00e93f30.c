/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e93f30; name: FUN_00e93f30
 */


void FUN_00e93f30(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar3 = PTR_LAB_047d3900;
  puVar15 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar15 >> 3) * -0x5555555555555555) < param_2) {
    lVar9 = (long)puVar15 - *param_1 >> 3;
    uVar11 = param_1[4];
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar1 = lVar9 * -0x5555555555555555 + param_2;
    if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (uVar11 >> 1 <= (ulong)(lVar7 * -0x5555555555555555)) {
      uVar1 = uVar11;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x18,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar14 = (undefined8 *)(lVar7 + lVar9 * 8);
    lVar9 = param_2 * 0x18;
    puVar16 = puVar14 + param_2 * 3;
    puVar15 = puVar14;
    do {
      lVar13 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00e94324;
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      puVar15 = puVar15 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
    lVar9 = *param_1;
    lVar13 = param_1[1];
    if (lVar13 != lVar9) {
      do {
        lVar5 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          uVar2 = *(undefined8 *)(lVar13 + -0x18);
          uVar10 = *(undefined8 *)(lVar13 + -8);
          puVar14[-2] = *(undefined8 *)(lVar13 + -0x10);
          puVar14[-1] = uVar10;
          puVar14[-3] = uVar2;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00e94324;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar5;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar10 = *(undefined8 *)(lVar13 + -8);
          uVar2 = *(undefined8 *)(lVar13 + -0x10);
          puVar14[-3] = *(undefined8 *)(lVar13 + -0x18);
          puVar14[-2] = uVar2;
          puVar14[-1] = uVar10;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar13 = lVar13 + -0x18;
        puVar14 = puVar14 + -3;
      } while (lVar9 != lVar13);
      lVar9 = *param_1;
    }
    lVar13 = param_1[2];
    *param_1 = (long)puVar14;
    param_1[1] = (long)puVar16;
    param_1[2] = lVar7 + uVar1 * 0x18;
    if (lVar9 != 0) {
      plVar12 = (long *)param_1[3];
      uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00e941f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar13 - lVar9,8);
        return;
      }
      FUN_00c48fe8(plVar12,lVar9,lVar13 - lVar9,8);
      return;
    }
  }
  else {
    puVar16 = puVar15;
    if (param_2 != 0) {
      puVar16 = puVar15 + param_2 * 3;
      lVar9 = param_2 * 0x18;
      do {
        lVar7 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00e94324:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar7;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        puVar15 = puVar15 + 3;
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != 0);
    }
    param_1[1] = (long)puVar16;
  }
  return;
}


