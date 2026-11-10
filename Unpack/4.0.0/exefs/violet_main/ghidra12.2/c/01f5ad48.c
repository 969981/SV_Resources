/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f5ad48; name: FUN_01f5ad48
 */


void FUN_01f5ad48(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  uVar7 = param_1[4];
  lVar9 = param_1[1] - *param_1 >> 7;
  uVar3 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 6;
  if (uVar3 <= uVar6) {
    uVar3 = uVar6;
  }
  plVar8 = param_1 + 3;
  if (uVar7 >> 1 <= (ulong)(lVar5 >> 7)) {
    uVar3 = uVar7;
  }
  if (uVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar3 << 7,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar12 = *plVar8;
  puVar10 = (undefined8 *)(lVar5 + lVar9 * 0x80);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_01f5ab5c(puVar10,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_01f5ab5c(puVar10,param_2);
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  lVar9 = *param_1;
  lVar12 = param_1[1];
  puVar1 = puVar10 + 0x10;
  if (lVar12 == lVar9) {
    lVar12 = lVar9;
  }
  else {
    do {
      puVar10 = puVar10 + -0x10;
      lVar12 = lVar12 + -0x80;
      FUN_0158fe50(plVar8,puVar10,lVar12);
    } while (lVar9 != lVar12);
    lVar9 = *param_1;
    lVar12 = param_1[1];
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar1;
  lVar11 = param_1[2];
  param_1[2] = lVar5 + uVar3 * 0x80;
  while (lVar5 = lVar12, lVar5 != lVar9) {
    pcVar4 = *(code **)(lVar5 + -0x78);
    lVar12 = lVar5 + -0x80;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar5 + -0x70) = 0;
      *(undefined8 *)(lVar5 + -0x68) = 0;
      *(undefined8 *)(lVar5 + -0x80) = 0;
      *(undefined8 *)(lVar5 + -0x78) = 0;
      (*pcVar4)(lVar5 + -0x60);
    }
  }
  if (lVar9 == 0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01f5af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar11 - lVar9,0x10);
    return;
  }
  FUN_00c48fe8(plVar8,lVar9,lVar11 - lVar9,0x10);
  return;
}


