/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fe158; name: FUN_028fe158
 */


void FUN_028fe158(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  
  uVar9 = param_1[4];
  lVar7 = param_1[1] - *param_1 >> 4;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar1 = lVar7 * -0x71c71c71c71c71c7 + 1;
  if (uVar9 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar8 = lVar5 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  plVar10 = param_1 + 3;
  if (uVar9 >> 1 <= (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
    uVar1 = uVar9;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar1 * 0x90,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  lVar11 = *plVar10;
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
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar12 = (undefined8 *)(lVar5 + lVar7 * 0x10);
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  FUN_028fed78(puVar12,param_2);
  *(undefined8 *)(lVar5 + lVar7 * 0x10 + 0x80) = *(undefined8 *)(param_2 + 0x50);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  lVar7 = *param_1;
  lVar11 = param_1[1];
  puVar2 = puVar12 + 0x12;
  if (lVar11 == lVar7) {
    lVar11 = lVar7;
  }
  else {
    do {
      puVar12 = puVar12 + -0x12;
      lVar11 = lVar11 + -0x90;
      FUN_00cbf394(plVar10,puVar12,lVar11);
    } while (lVar7 != lVar11);
    lVar7 = *param_1;
    lVar11 = param_1[1];
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar2;
  lVar4 = param_1[2];
  param_1[2] = lVar5 + uVar1 * 0x90;
  while (lVar5 = lVar11, lVar5 != lVar7) {
    pcVar6 = *(code **)(lVar5 + -0x88);
    lVar11 = lVar5 + -0x90;
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
  plVar10 = (long *)*plVar10;
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar9 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x028fe378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar4 - lVar7,0x10);
    return;
  }
  FUN_00c48fe8(plVar10,lVar7,lVar4 - lVar7,0x10);
  return;
}


