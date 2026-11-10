/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee1518; name: FUN_00ee1518
 */


void FUN_00ee1518(long *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar8 = param_1[4];
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar5 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  uVar7 = lVar6 >> 3;
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (uVar8 >> 1 <= (ulong)(lVar6 >> 4)) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 4,0x10);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(lVar6 + lVar10 * 0x10);
  lVar10 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    uVar13 = *param_2;
    uVar14 = *param_3;
    puVar1[1] = (ulong)*param_4;
    *puVar1 = CONCAT44(uVar14,uVar13);
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00ee1810:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar13 = *param_2;
    uVar14 = *param_3;
    puVar1[1] = (ulong)*param_4;
    *puVar1 = CONCAT44(uVar14,uVar13);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  lVar10 = *param_1;
  lVar3 = param_1[1];
  puVar12 = puVar1;
  if (lVar3 != lVar10) {
    do {
      lVar11 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        puVar12[-1] = *(undefined8 *)(lVar3 + -8);
        puVar12[-2] = *(undefined8 *)(lVar3 + -0x10);
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00ee1810;
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        puVar12[-1] = *(undefined8 *)(lVar3 + -8);
        puVar12[-2] = *(undefined8 *)(lVar3 + -0x10);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar3 = lVar3 + -0x10;
      puVar12 = puVar12 + -2;
    } while (lVar10 != lVar3);
    lVar10 = *param_1;
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)(puVar1 + 2);
  lVar3 = param_1[2];
  param_1[2] = lVar6 + uVar5 * 0x10;
  if (lVar10 == 0) {
    return;
  }
  plVar9 = (long *)param_1[3];
  uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00c4e600();
    if (0 < *(int *)(lVar6 + 0x12c8)) {
      FUN_00c48fe8(plVar9,lVar10,lVar3 - lVar10,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00ee1708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar3 - lVar10,0x10);
  return;
}


