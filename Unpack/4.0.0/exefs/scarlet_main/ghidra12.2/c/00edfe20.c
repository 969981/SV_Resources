/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00edfe20; name: FUN_00edfe20
 */


void FUN_00edfe20(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  
  uVar10 = param_1[4];
  lVar7 = param_1[1] - *param_1 >> 4;
  if (0x7ffffffffffffffe < uVar10) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar1 = lVar7 * -0x71c71c71c71c71c7 + 1;
  if (uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar9 = lVar5 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  plVar11 = param_1 + 3;
  if (uVar10 >> 1 <= (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
    uVar1 = uVar10;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar1 * 0x90,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xe8))();
    }
  }
  lVar12 = *plVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar13 = (undefined8 *)(lVar5 + lVar7 * 0x10);
  puVar13[2] = 0;
  puVar13[3] = 0;
  lVar7 = lVar5 + lVar7 * 0x10;
  *puVar13 = 0;
  puVar13[1] = 0;
  uVar8 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  uVar8 = param_2[1];
  param_2[1] = 0;
  *(undefined8 *)(lVar7 + 0x28) = uVar8;
  *puVar13 = FUN_016c46cc;
  *(undefined1 **)(lVar7 + 8) = &LAB_02bb1df8;
  *(undefined1 **)(lVar7 + 0x10) = &LAB_02bb1edc;
  *(undefined1 **)(lVar7 + 0x18) = &LAB_02bb1fec;
  *(undefined8 *)(lVar7 + 0x80) = param_2[2];
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  lVar7 = *param_1;
  lVar12 = param_1[1];
  puVar2 = puVar13 + 0x12;
  if (lVar12 == lVar7) {
    lVar12 = lVar7;
  }
  else {
    do {
      puVar13 = puVar13 + -0x12;
      lVar12 = lVar12 + -0x90;
      FUN_00cbf394(plVar11,puVar13,lVar12);
    } while (lVar7 != lVar12);
    lVar7 = *param_1;
    lVar12 = param_1[1];
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar2;
  lVar4 = param_1[2];
  param_1[2] = lVar5 + uVar1 * 0x90;
  while (lVar5 = lVar12, lVar5 != lVar7) {
    pcVar6 = *(code **)(lVar5 + -0x88);
    lVar12 = lVar5 + -0x90;
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar5 + -0x80) = 0;
      *(undefined8 *)(lVar5 + -0x78) = 0;
      *(undefined8 *)(lVar5 + -0x90) = 0;
      *(undefined8 *)(lVar5 + -0x88) = 0;
      (*pcVar6)(lVar5 + -0x70);
    }
  }
  if (lVar7 == 0) {
    return;
  }
  plVar11 = (long *)*plVar11;
  uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ee0068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,lVar4 - lVar7,0x10);
    return;
  }
  FUN_00c48fe8(plVar11,lVar7,lVar4 - lVar7,0x10);
  return;
}


