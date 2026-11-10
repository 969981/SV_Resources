/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011dfec0; name: FUN_011dfec0
 */


void FUN_011dfec0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_011e0390;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    *puVar12 = *param_2;
    puVar12[1] = param_2[1];
    puVar12[2] = param_2[2];
    uVar8 = param_2[3];
    param_2[3] = 0;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(param_2 + 4);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar12 + 5);
  }
  else {
    uVar10 = param_1[4];
    lVar9 = (long)puVar12 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar1 = lVar9 * -0x3333333333333333 + 1;
    if (uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (uVar10 >> 1 <= (ulong)(lVar5 * -0x3333333333333333)) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x28,8);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar13 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_011e0390:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar12 = (undefined8 *)(lVar5 + lVar9 * 8);
    *puVar12 = *param_2;
    lVar9 = lVar5 + lVar9 * 8;
    *(undefined8 *)(lVar9 + 8) = param_2[1];
    *(undefined8 *)(lVar9 + 0x10) = param_2[2];
    uVar8 = param_2[3];
    param_2[3] = 0;
    *(undefined8 *)(lVar9 + 0x18) = uVar8;
    *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(param_2 + 4);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar9 = *param_1;
    lVar13 = param_1[1];
    if (lVar13 == lVar9) {
      puVar6 = puVar12;
      lVar13 = lVar9;
    }
    else {
      lVar3 = 0;
      do {
        lVar14 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 != 0) {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_011e0390;
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        }
        lVar14 = lVar13 + lVar3;
        *(undefined8 *)((long)puVar12 + lVar3 + -0x28) = *(undefined8 *)(lVar14 + -0x28);
        *(undefined8 *)((long)puVar12 + lVar3 + -0x20) = *(undefined8 *)(lVar14 + -0x20);
        *(undefined8 *)((long)puVar12 + lVar3 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
        uVar8 = *(undefined8 *)(lVar14 + -0x10);
        *(undefined8 *)(lVar14 + -0x10) = 0;
        *(undefined8 *)((long)puVar12 + lVar3 + -0x10) = uVar8;
        *(undefined4 *)((long)puVar12 + lVar3 + -8) = *(undefined4 *)(lVar14 + -8);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar3 = lVar3 + -0x28;
      } while (lVar9 - lVar13 != lVar3);
      lVar9 = *param_1;
      puVar6 = (undefined8 *)((long)puVar12 + lVar3);
      lVar13 = param_1[1];
    }
    lVar3 = param_1[2];
    *param_1 = (long)puVar6;
    param_1[1] = (long)(puVar12 + 5);
    param_1[2] = lVar5 + uVar1 * 0x28;
    if (lVar13 != lVar9) {
      if (*(long **)(lVar13 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar13 + -0x10) + 0x20))();
      }
      if (lVar13 + -0x28 != lVar9) {
        if (*(long **)(lVar13 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar13 + -0x38) + 0x20))();
        }
        if (lVar13 + -0x50 != lVar9) {
          if (*(long **)(lVar13 + -0x60) != (long *)0x0) {
            (**(code **)(**(long **)(lVar13 + -0x60) + 0x20))();
          }
          if (lVar13 + -0x78 != lVar9) {
            do {
              if (*(long **)(lVar13 + -0x88) != (long *)0x0) {
                (**(code **)(**(long **)(lVar13 + -0x88) + 0x20))();
              }
              lVar13 = lVar13 + -0x28;
            } while (lVar9 + 0x78 != lVar13);
          }
        }
      }
    }
    if (lVar9 != 0) {
      plVar11 = (long *)param_1[3];
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x011e0130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar3 - lVar9,8);
        return;
      }
      FUN_00c48fe8(plVar11,lVar9,lVar3 - lVar9,8);
      return;
    }
  }
  return;
}


