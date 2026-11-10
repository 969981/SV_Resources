/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f0a08; name: FUN_013f0a08
 */


void FUN_013f0a08(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  if (param_2 <= (ulong)((param_1[2] - param_1[1] >> 3) * -0x5555555555555555)) {
    FUN_013f10b8(param_1,param_2);
    return;
  }
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar7 = param_1[4];
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar1 = lVar6 * -0x5555555555555555 + param_2;
  if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  plVar8 = param_1 + 3;
  if (uVar7 >> 1 <= (ulong)(lVar4 * -0x5555555555555555)) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar1 * 0x18,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar9 = lVar4 + lVar6 * 8;
  lVar6 = lVar9 + param_2 * 0x18;
  lVar10 = param_2 * 0x18;
  puVar11 = (undefined8 *)(lVar9 + 0x10);
  do {
    lVar12 = *plVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      puVar11[-2] = &DAT_cbf29ce484222645;
      puVar11[-1] = &DAT_03c886bc;
      *puVar11 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar11 = 0;
      puVar11[-2] = &DAT_cbf29ce484222645;
      puVar11[-1] = &DAT_03c886bc;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar10 = lVar10 + -0x18;
    puVar11 = puVar11 + 3;
  } while (lVar10 != 0);
  lVar10 = *param_1;
  lVar12 = param_1[1];
  if (lVar12 != lVar10) {
    do {
      lVar9 = lVar9 + -0x18;
      lVar12 = lVar12 + -0x18;
      FUN_013f0dc4(plVar8,lVar9,lVar12);
    } while (lVar10 != lVar12);
    lVar10 = *param_1;
  }
  *param_1 = lVar9;
  param_1[1] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = lVar4 + uVar1 * 0x18;
  if (lVar10 == 0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar7 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar8,lVar10,lVar6 - lVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x013f0c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar6 - lVar10,8);
  return;
}


