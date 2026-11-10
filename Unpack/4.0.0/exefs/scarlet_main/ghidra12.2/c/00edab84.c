/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00edab84; name: FUN_00edab84
 */


void FUN_00edab84(long *param_1,ulong param_2)

{
  undefined2 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  
  puVar2 = PTR_LAB_047d3900;
  puVar13 = (undefined2 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar13 >> 1) < param_2) {
    uVar9 = param_1[4];
    lVar11 = (long)puVar13 - *param_1 >> 1;
    uVar7 = param_2 + lVar11;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar8 = param_1[2] - *param_1;
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar9 >> 1 <= (ulong)((long)uVar8 >> 1)) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 1,2);
      if (lVar4 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar14 = (undefined2 *)(lVar4 + lVar11 * 2);
    lVar11 = param_2 << 1;
    puVar1 = puVar14 + param_2;
    puVar13 = puVar14;
    do {
      lVar12 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *puVar13 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00edaf2c;
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *puVar13 = 0;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      puVar13 = puVar13 + 1;
      lVar11 = lVar11 + -2;
    } while (lVar11 != 0);
    lVar11 = *param_1;
    lVar12 = param_1[1];
    if (lVar12 != lVar11) {
      do {
        lVar5 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          puVar14[-1] = *(undefined2 *)(lVar12 + -2);
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00edaf2c;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar5;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          puVar14[-1] = *(undefined2 *)(lVar12 + -2);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar12 = lVar12 + -2;
        puVar14 = puVar14 + -1;
      } while (lVar11 != lVar12);
      lVar11 = *param_1;
    }
    lVar12 = param_1[2];
    *param_1 = (long)puVar14;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar4 + uVar7 * 2;
    if (lVar11 != 0) {
      plVar10 = (long *)param_1[3];
      uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00edad60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar12 - lVar11,2);
        return;
      }
      FUN_00c48fe8(plVar10,lVar11,lVar12 - lVar11,2);
      return;
    }
  }
  else {
    puVar14 = puVar13;
    if (param_2 != 0) {
      puVar14 = puVar13 + param_2;
      lVar11 = param_2 << 1;
      do {
        lVar4 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          *puVar13 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00edaf2c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar4;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *puVar13 = 0;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        puVar13 = puVar13 + 1;
        lVar11 = lVar11 + -2;
      } while (lVar11 != 0);
    }
    param_1[1] = (long)puVar14;
  }
  return;
}


