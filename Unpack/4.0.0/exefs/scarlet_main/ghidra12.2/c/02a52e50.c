/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a52e50; name: FUN_02a52e50
 */


void FUN_02a52e50(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_02a53270:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    uVar7 = param_2[3];
    param_2[3] = 0;
    puVar1[3] = uVar7;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 4);
  }
  else {
    uVar9 = param_1[4];
    lVar11 = (long)puVar1 - *param_1 >> 5;
    uVar6 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar8 = lVar3 >> 4;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar9 >> 1 <= (ulong)(lVar3 >> 5)) {
      uVar6 = uVar9;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 5,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar12 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_02a53270;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar1 = (undefined8 *)(lVar3 + lVar11 * 0x20);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    uVar7 = param_2[3];
    param_2[3] = 0;
    puVar1[3] = uVar7;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar11 = *param_1;
    lVar12 = param_1[1];
    puVar13 = puVar1;
    if (lVar12 == lVar11) {
      lVar12 = lVar11;
    }
    else {
      do {
        lVar4 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_02a53270;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar4;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        puVar13[-4] = *(undefined8 *)(lVar12 + -0x20);
        puVar13[-3] = *(undefined8 *)(lVar12 + -0x18);
        puVar13[-2] = *(undefined8 *)(lVar12 + -0x10);
        uVar7 = *(undefined8 *)(lVar12 + -8);
        *(undefined8 *)(lVar12 + -8) = 0;
        lVar12 = lVar12 + -0x20;
        puVar13[-1] = uVar7;
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        puVar13 = puVar13 + -4;
      } while (lVar11 != lVar12);
      lVar11 = param_1[1];
      lVar12 = *param_1;
    }
    lVar4 = param_1[2];
    *param_1 = (long)puVar13;
    param_1[1] = (long)(puVar1 + 4);
    param_1[2] = lVar3 + uVar6 * 0x20;
    while (lVar11 != lVar12) {
      plVar10 = (long *)(lVar11 + -8);
      lVar11 = lVar11 + -0x20;
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x20))();
      }
    }
    if (lVar12 != 0) {
      plVar10 = (long *)param_1[3];
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar6 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x02a53174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar4 - lVar12,8);
        return;
      }
      FUN_00c48fe8(plVar10,lVar12,lVar4 - lVar12,8);
      return;
    }
  }
  return;
}


