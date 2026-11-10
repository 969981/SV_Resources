/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022051ec; name: FUN_022051ec
 */


void FUN_022051ec(long *param_1,undefined8 param_2)

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
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  
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
  lVar13 = *plVar8;
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
    FUN_02205004(puVar10,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar13;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_02205004(puVar10,param_2);
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  puVar11 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  puVar1 = puVar10 + 0x10;
  if (puVar12 == puVar11) {
    puVar12 = puVar11;
  }
  else {
    puVar10 = puVar10 + -0x10;
    FUN_015385dc(plVar8,puVar10,puVar12 + -0x10);
    if (puVar12 + -0x10 != puVar11) {
      do {
        puVar10 = puVar10 + -0x10;
        FUN_015385dc(plVar8,puVar10,puVar12 + -0x20);
        puVar12 = puVar12 + -0x10;
      } while (puVar11 + 0x10 != puVar12);
    }
    puVar11 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar1;
  lVar9 = param_1[2];
  param_1[2] = lVar5 + uVar3 * 0x80;
  if (puVar12 != puVar11) {
    pcVar4 = (code *)puVar12[-0xf];
    puVar10 = puVar12 + -0x10;
    if (pcVar4 != (code *)0x0) {
      puVar12[-0xe] = 0;
      puVar12[-0xd] = 0;
      *puVar10 = 0;
      puVar12[-0xf] = 0;
      (*pcVar4)(puVar12 + -0xc);
    }
    while (puVar1 = puVar10, puVar1 != puVar11) {
      pcVar4 = (code *)puVar1[-0xf];
      puVar10 = puVar1 + -0x10;
      if (pcVar4 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar4)(puVar1 + -0xc);
      }
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x022053f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,lVar9 - (long)puVar11,0x10);
    return;
  }
  FUN_00c48fe8(plVar8,puVar11,lVar9 - (long)puVar11,0x10);
  return;
}


