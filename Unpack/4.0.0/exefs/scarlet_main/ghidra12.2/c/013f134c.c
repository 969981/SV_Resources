/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f134c; name: FUN_013f134c
 */


void FUN_013f134c(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  plVar12 = param_1 + 3;
  lVar4 = FUN_013f17dc(param_1,(param_1[1] - *param_1 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1);
  local_70 = 0;
  lVar9 = param_1[1] - *param_1 >> 4;
  plStack_68 = plVar12;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,lVar4 * 0xb0,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  puVar13 = (undefined8 *)(lVar5 + lVar9 * 0x10);
  local_70 = lVar5 + lVar4 * 0xb0;
  lVar4 = *plVar12;
  local_88 = lVar5;
  local_80 = puVar13;
  local_78 = puVar13;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar1 = *param_3;
  uVar2 = *param_4;
  *puVar13 = *param_2;
  lVar4 = lVar5 + lVar9 * 0x10;
  *(undefined8 *)(lVar4 + 8) = param_2[1];
  *(undefined8 *)(lVar4 + 0x10) = param_2[2];
  plVar7 = (long *)param_2[3];
  *(long **)(lVar4 + 0x18) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  lVar4 = lVar5 + lVar9 * 0x10;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined4 *)(lVar4 + 0x20) = uVar1;
  *(undefined4 *)(lVar4 + 0x24) = uVar2;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,lVar5 + lVar9 * 0x10 + 0x50);
    uVar10 = param_5[3];
    *(undefined8 *)(lVar4 + 0x38) = param_5[1];
    *(undefined8 *)(lVar4 + 0x48) = uVar10;
    uVar10 = *param_5;
    *(undefined8 *)(lVar4 + 0x40) = param_5[2];
    *(undefined8 *)(lVar4 + 0x30) = uVar10;
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  puVar13 = local_78 + 0x16;
  lVar4 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 == lVar4) {
    local_78 = (undefined8 *)lVar4;
  }
  else {
    puVar11 = local_80;
    local_78 = puVar13;
    do {
      puVar11 = puVar11 + -0x16;
      lVar9 = lVar9 + -0xb0;
      FUN_013f166c(plVar12,puVar11,lVar9);
    } while (lVar4 != lVar9);
    lVar4 = *param_1;
    local_80 = puVar11;
    local_78 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)local_80;
  param_1[1] = (long)puVar13;
  lVar9 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar4;
  local_80 = (undefined8 *)lVar4;
  local_70 = lVar9;
  FUN_013f1840(&local_88);
  lVar4 = local_88;
  if (local_88 != 0) {
    lVar9 = local_70 - local_88;
    plVar12 = (long *)*plStack_68;
    uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar4,lVar9,0x10);
    }
    else {
      FUN_00c48fe8(plVar12,lVar4,lVar9,0x10);
    }
  }
  return;
}


