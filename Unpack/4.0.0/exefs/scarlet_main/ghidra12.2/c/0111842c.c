/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111842c; name: FUN_0111842c
 */


void FUN_0111842c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  if (param_2 <= (ulong)((param_1[2] - param_1[1] >> 4) * -0x5555555555555555)) {
    FUN_011199d8(param_1,param_2);
    return;
  }
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar8 = param_1[4];
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar1 = lVar7 * -0x5555555555555555 + param_2;
  if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar6 = lVar5 * 0x5555555555555556;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  plVar9 = param_1 + 3;
  if (uVar8 >> 1 <= (ulong)(lVar5 * -0x5555555555555555)) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar1 * 0x30,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  puVar10 = (undefined8 *)(lVar5 + lVar7 * 0x10);
  lVar7 = param_2 * 0x30;
  puVar2 = puVar10 + param_2 * 6;
  puVar11 = puVar10;
  do {
    lVar12 = *plVar9;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[1] = &DAT_cbf29ce484222645;
      puVar11[2] = &DAT_03c886bc;
      puVar11[3] = 0;
      puVar11[4] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[1] = &DAT_cbf29ce484222645;
      puVar11[2] = &DAT_03c886bc;
      puVar11[3] = 0;
      puVar11[4] = 0;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar7 = lVar7 + -0x30;
    puVar11 = puVar11 + 6;
  } while (lVar7 != 0);
  lVar7 = *param_1;
  lVar12 = param_1[1];
  if (lVar12 == lVar7) {
    lVar12 = lVar7;
  }
  else {
    do {
      puVar10 = puVar10 + -6;
      lVar12 = lVar12 + -0x30;
      FUN_01119218(plVar9,puVar10,lVar12);
    } while (lVar7 != lVar12);
    lVar7 = *param_1;
    lVar12 = param_1[1];
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar2;
  lVar4 = param_1[2];
  param_1[2] = lVar5 + uVar1 * 0x30;
  if (lVar12 != lVar7) {
    if (*(long **)(lVar12 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar12 + -0x10) + 0x20))();
    }
    if (lVar12 + -0x30 != lVar7) {
      do {
        if (*(long **)(lVar12 + -0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + -0x40) + 0x20))();
        }
        lVar12 = lVar12 + -0x30;
      } while (lVar7 + 0x30 != lVar12);
    }
  }
  if (lVar7 == 0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x011186c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar4 - lVar7,8);
    return;
  }
  FUN_00c48fe8(plVar9,lVar7,lVar4 - lVar7,8);
  return;
}


