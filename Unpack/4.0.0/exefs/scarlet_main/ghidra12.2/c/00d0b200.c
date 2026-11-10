/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0b200; name: FUN_00d0b200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d0b200(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 6)) {
    FUN_00d0b714(param_1,param_2);
    return;
  }
  uVar11 = param_1[4];
  lVar14 = param_1[1] - *param_1 >> 6;
  uVar8 = param_2 + lVar14;
  if (0x7ffffffffffffffe < uVar11) {
    uVar11 = 0x7fffffffffffffff;
  }
  if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1;
  uVar10 = lVar9 >> 5;
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  plVar12 = param_1 + 3;
  if (uVar11 >> 1 <= (ulong)(lVar9 >> 6)) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar8 << 6,0x10);
    if (lVar9 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  uVar5 = _UNK_03cabe58;
  uVar4 = _DAT_03cabe50;
  uVar3 = _UNK_03caa988;
  uVar2 = _DAT_03caa980;
  puVar13 = (undefined8 *)(lVar9 + lVar14 * 0x40);
  puVar1 = puVar13 + param_2 * 8;
  lVar14 = param_2 << 6;
  puVar15 = puVar13;
  do {
    lVar16 = *plVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[3] = uVar3;
      puVar15[2] = uVar2;
      puVar15[5] = uVar5;
      puVar15[4] = uVar4;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar16;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[3] = uVar3;
      puVar15[2] = uVar2;
      puVar15[5] = uVar5;
      puVar15[4] = uVar4;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    lVar14 = lVar14 + -0x40;
    puVar15 = puVar15 + 8;
  } while (lVar14 != 0);
  lVar14 = *param_1;
  lVar16 = param_1[1];
  if (lVar16 != lVar14) {
    do {
      puVar13 = puVar13 + -8;
      lVar16 = lVar16 + -0x40;
      FUN_00d0b50c(plVar12,puVar13,lVar16);
    } while (lVar14 != lVar16);
    lVar14 = *param_1;
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar1;
  lVar16 = param_1[2];
  param_1[2] = lVar9 + uVar8 * 0x40;
  if (lVar14 == 0) {
    return;
  }
  plVar12 = (long *)*plVar12;
  uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00c4e600();
    if (0 < *(int *)(lVar9 + 0x12c8)) {
      FUN_00c48fe8(plVar12,lVar14,lVar16 - lVar14,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00d0b400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,lVar16 - lVar14,0x10);
  return;
}


