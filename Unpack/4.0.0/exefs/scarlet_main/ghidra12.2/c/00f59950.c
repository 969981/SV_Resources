/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f59950; name: FUN_00f59950
 */


void FUN_00f59950(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  uVar9 = param_1[4];
  lVar11 = param_1[1] - *param_1 >> 4;
  uVar6 = lVar11 + 1;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  uVar8 = lVar7 >> 3;
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (uVar9 >> 1 <= (ulong)(lVar7 >> 4)) {
    uVar6 = uVar9;
  }
  if (uVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 4,8);
    if (lVar7 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(lVar7 + lVar11 * 0x10);
  lVar11 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00f59c24:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  lVar11 = *param_1;
  lVar4 = param_1[1];
  puVar13 = puVar1;
  if (lVar4 != lVar11) {
    do {
      lVar12 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        uVar2 = *(undefined8 *)(lVar4 + -8);
        puVar13[-2] = *(undefined8 *)(lVar4 + -0x10);
        puVar13[-1] = uVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00f59c24;
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        uVar2 = *(undefined8 *)(lVar4 + -8);
        puVar13[-2] = *(undefined8 *)(lVar4 + -0x10);
        puVar13[-1] = uVar2;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar4 = lVar4 + -0x10;
      puVar13 = puVar13 + -2;
    } while (lVar11 != lVar4);
    lVar11 = *param_1;
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)(puVar1 + 2);
  lVar4 = param_1[2];
  param_1[2] = lVar7 + uVar6 * 0x10;
  if (lVar11 == 0) {
    return;
  }
  plVar10 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00c4e600();
    if (0 < *(int *)(lVar7 + 0x12c8)) {
      FUN_00c48fe8(plVar10,lVar11,lVar4 - lVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00f59b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar4 - lVar11,8);
  return;
}


