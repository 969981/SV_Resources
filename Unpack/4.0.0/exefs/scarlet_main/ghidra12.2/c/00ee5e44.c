/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee5e44; name: FUN_00ee5e44
 */


void FUN_00ee5e44(long *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = param_1[1];
  if ((ulong)(param_1[2] - lVar9 >> 2) < param_2) {
    uVar7 = param_1[4];
    lVar9 = lVar9 - *param_1 >> 2;
    uVar3 = param_2 + lVar9;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1;
    uVar6 = lVar5 >> 1;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    plVar8 = param_1 + 3;
    if (uVar7 >> 1 <= (ulong)(lVar5 >> 2)) {
      uVar3 = uVar7;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar3 << 2,4);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))();
      }
    }
    lVar12 = lVar5 + lVar9 * 4;
    lVar10 = param_2 << 2;
    lVar1 = lVar12 + param_2 * 4;
    lVar9 = lVar12;
    do {
      FUN_0271c12c(plVar8,lVar9);
      lVar9 = lVar9 + 4;
      lVar10 = lVar10 + -4;
    } while (lVar10 != 0);
    lVar9 = *param_1;
    lVar10 = param_1[1];
    if (lVar10 != lVar9) {
      do {
        lVar11 = *plVar8;
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          *(undefined4 *)(lVar12 + -4) = *(undefined4 *)(lVar10 + -4);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *(undefined4 *)(lVar12 + -4) = *(undefined4 *)(lVar10 + -4);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar10 = lVar10 + -4;
        lVar12 = lVar12 + -4;
      } while (lVar9 != lVar10);
      lVar9 = *param_1;
    }
    lVar10 = param_1[2];
    param_1[2] = lVar5 + uVar3 * 4;
    *param_1 = lVar12;
    param_1[1] = lVar1;
    if (lVar9 != 0) {
      plVar8 = (long *)*plVar8;
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ee5f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar10 - lVar9,4);
        return;
      }
      FUN_00c48fe8(plVar8,lVar9,lVar10 - lVar9,4);
      return;
    }
  }
  else {
    lVar5 = lVar9;
    if (param_2 != 0) {
      lVar5 = lVar9 + param_2 * 4;
      lVar12 = param_2 << 2;
      do {
        FUN_0271c12c(param_1 + 3,lVar9);
        lVar9 = lVar9 + 4;
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
    param_1[1] = lVar5;
  }
  return;
}


