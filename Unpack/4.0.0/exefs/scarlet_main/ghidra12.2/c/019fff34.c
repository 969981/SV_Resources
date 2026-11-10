/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019fff34; name: FUN_019fff34
 */


void FUN_019fff34(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  if (*(ulong *)(param_1 + 0xf8) < *(ulong *)(param_1 + 0x100)) {
    FUN_01a00364(param_1 + 0xf0,param_2);
    return;
  }
  uVar9 = *(ulong *)(param_1 + 0x110);
  lVar13 = (long)(*(ulong *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0)) >> 7;
  uVar5 = lVar13 + 1;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(ulong *)(param_1 + 0x100) - *(long *)(param_1 + 0xf0);
  uVar7 = lVar6 >> 6;
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  puVar1 = (undefined8 *)(param_1 + 0x108);
  if (uVar9 >> 1 <= (ulong)(lVar6 >> 7)) {
    uVar5 = uVar9;
  }
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar5 << 7,0x10);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xe8))();
    }
  }
  uVar15 = *puVar1;
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar15;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar14 = (undefined8 *)(lVar6 + lVar13 * 0x80);
  puVar14[2] = 0;
  puVar14[3] = 0;
  *puVar14 = 0;
  puVar14[1] = 0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,puVar14 + 4);
    uVar15 = param_2[3];
    puVar14[1] = param_2[1];
    puVar14[3] = uVar15;
    uVar15 = *param_2;
    puVar14[2] = param_2[2];
    *puVar14 = uVar15;
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  puVar11 = *(undefined8 **)(param_1 + 0xf0);
  puVar12 = *(undefined8 **)(param_1 + 0xf8);
  puVar2 = puVar14 + 0x10;
  if (puVar12 == puVar11) {
    puVar12 = puVar11;
  }
  else {
    do {
      puVar14 = puVar14 + -0x10;
      puVar12 = puVar12 + -0x10;
      FUN_01a00240(puVar1,puVar14,puVar12);
    } while (puVar11 != puVar12);
    puVar11 = *(undefined8 **)(param_1 + 0xf0);
    puVar12 = *(undefined8 **)(param_1 + 0xf8);
  }
  *(undefined8 **)(param_1 + 0xf0) = puVar14;
  *(undefined8 **)(param_1 + 0xf8) = puVar2;
  lVar13 = *(long *)(param_1 + 0x100);
  *(ulong *)(param_1 + 0x100) = lVar6 + uVar5 * 0x80;
  if (puVar12 != puVar11) {
    pcVar8 = (code *)puVar12[-0xf];
    puVar14 = puVar12 + -0x10;
    if (pcVar8 != (code *)0x0) {
      puVar12[-0xe] = 0;
      puVar12[-0xd] = 0;
      *puVar14 = 0;
      puVar12[-0xf] = 0;
      (*pcVar8)(puVar12 + -0xc);
    }
    while (puVar2 = puVar14, puVar2 != puVar11) {
      pcVar8 = (code *)puVar2[-0xf];
      puVar14 = puVar2 + -0x10;
      if (pcVar8 != (code *)0x0) {
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        (*pcVar8)(puVar2 + -0xc);
      }
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  plVar10 = (long *)*puVar1;
  lVar13 = lVar13 - (long)puVar11;
  uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01a0011c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,lVar13,0x10);
    return;
  }
  FUN_00c48fe8(plVar10,puVar11,lVar13,0x10);
  return;
}


