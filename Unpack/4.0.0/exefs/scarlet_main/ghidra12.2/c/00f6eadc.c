/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6eadc; name: FUN_00f6eadc
 */


void FUN_00f6eadc(long *param_1,undefined8 param_2)

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
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar9 = param_1[4];
  lVar6 = param_1[1] - *param_1 >> 3;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (uVar9 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar5 * 0x5555555555555556;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  plVar10 = param_1 + 3;
  if (uVar9 >> 1 <= (ulong)(lVar5 * -0x5555555555555555)) {
    uVar1 = uVar9;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar1 * 0x18,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  lVar13 = lVar5 + lVar6 * 8;
  FUN_00f6e960(plVar10,lVar13,param_2);
  lVar6 = *param_1;
  lVar14 = param_1[1];
  lVar11 = lVar13;
  if (lVar14 != lVar6) {
    do {
      lVar12 = *plVar10;
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        uVar2 = *(undefined8 *)(lVar14 + -0x18);
        uVar8 = *(undefined8 *)(lVar14 + -8);
        *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
        *(undefined8 *)(lVar11 + -8) = uVar8;
        *(undefined8 *)(lVar11 + -0x18) = uVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        uVar8 = *(undefined8 *)(lVar14 + -8);
        uVar2 = *(undefined8 *)(lVar14 + -0x10);
        *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
        *(undefined8 *)(lVar11 + -0x10) = uVar2;
        *(undefined8 *)(lVar11 + -8) = uVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar14 = lVar14 + -0x18;
      lVar11 = lVar11 + -0x18;
    } while (lVar6 != lVar14);
    lVar6 = *param_1;
  }
  *param_1 = lVar11;
  param_1[1] = lVar13 + 0x18;
  lVar14 = param_1[2];
  param_1[2] = lVar5 + uVar1 * 0x18;
  if (lVar6 == 0) {
    return;
  }
  plVar10 = (long *)*plVar10;
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar9 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f6ec84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar6,lVar14 - lVar6,8);
    return;
  }
  FUN_00c48fe8(plVar10,lVar6,lVar14 - lVar6,8);
  return;
}


