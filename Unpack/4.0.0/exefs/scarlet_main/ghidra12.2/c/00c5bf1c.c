/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5bf1c; name: FUN_00c5bf1c
 */


void FUN_00c5bf1c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      uVar2 = *param_2;
      uVar8 = param_2[2];
      puVar12[1] = param_2[1];
      puVar12[2] = uVar8;
      *puVar12 = uVar2;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00c5c22c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      uVar8 = param_2[2];
      uVar2 = param_2[1];
      *puVar12 = *param_2;
      puVar12[1] = uVar2;
      puVar12[2] = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar12 + 3);
  }
  else {
    uVar9 = param_1[4];
    lVar11 = (long)puVar12 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar1 = lVar11 * -0x5555555555555555 + 1;
    if (uVar9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (uVar9 >> 1 <= (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = uVar9;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x18,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar12 = (undefined8 *)(lVar4 + lVar11 * 8);
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      uVar2 = *param_2;
      uVar8 = param_2[2];
      puVar12[1] = param_2[1];
      puVar12[2] = uVar8;
      *puVar12 = uVar2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c5c22c;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      uVar8 = param_2[2];
      uVar2 = param_2[1];
      *puVar12 = *param_2;
      puVar12[1] = uVar2;
      puVar12[2] = uVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar11 = *param_1;
    lVar5 = param_1[1];
    puVar13 = puVar12;
    if (lVar5 != lVar11) {
      do {
        lVar14 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          uVar2 = *(undefined8 *)(lVar5 + -0x18);
          uVar8 = *(undefined8 *)(lVar5 + -8);
          puVar13[-2] = *(undefined8 *)(lVar5 + -0x10);
          puVar13[-1] = uVar8;
          puVar13[-3] = uVar2;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00c5c22c;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar8 = *(undefined8 *)(lVar5 + -8);
          uVar2 = *(undefined8 *)(lVar5 + -0x10);
          puVar13[-3] = *(undefined8 *)(lVar5 + -0x18);
          puVar13[-2] = uVar2;
          puVar13[-1] = uVar8;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar5 = lVar5 + -0x18;
        puVar13 = puVar13 + -3;
      } while (lVar11 != lVar5);
      lVar11 = *param_1;
    }
    *param_1 = (long)puVar13;
    param_1[1] = (long)(puVar12 + 3);
    lVar5 = param_1[2];
    param_1[2] = lVar4 + uVar1 * 0x18;
    if (lVar11 != 0) {
      plVar10 = (long *)param_1[3];
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
        FUN_00c48fe8(plVar10,lVar11,lVar5 - lVar11,8);
        return;
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar5 - lVar11,8);
    }
  }
  return;
}


