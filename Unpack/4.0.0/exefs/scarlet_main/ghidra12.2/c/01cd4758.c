/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cd4758; name: FUN_01cd4758
 */


void FUN_01cd4758(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar7 = param_1[4];
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar4 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 3;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  plVar8 = param_1 + 3;
  if (uVar7 >> 1 <= (ulong)(lVar5 >> 4)) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar4 << 4,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar10 = lVar5 + lVar10 * 0x10;
  FUN_01cd466c(plVar8,lVar10,param_2);
  lVar9 = *param_1;
  lVar13 = param_1[1];
  lVar11 = lVar10;
  if (lVar13 != lVar9) {
    do {
      lVar12 = *plVar8;
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        uVar1 = *(undefined8 *)(lVar13 + -8);
        *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(lVar13 + -0x10);
        *(undefined8 *)(lVar11 + -8) = uVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar1 = *(undefined8 *)(lVar13 + -8);
        *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(lVar13 + -0x10);
        *(undefined8 *)(lVar11 + -8) = uVar1;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar13 = lVar13 + -0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar9 != lVar13);
    lVar9 = *param_1;
  }
  *param_1 = lVar11;
  param_1[1] = lVar10 + 0x10;
  lVar10 = param_1[2];
  param_1[2] = lVar5 + uVar4 * 0x10;
  if (lVar9 == 0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01cd4900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar10 - lVar9,8);
    return;
  }
  FUN_00c48fe8(plVar8,lVar9,lVar10 - lVar9,8);
  return;
}


