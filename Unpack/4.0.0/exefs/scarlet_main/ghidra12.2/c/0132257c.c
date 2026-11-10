/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0132257c; name: FUN_0132257c
 */


void FUN_0132257c(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  plVar9 = param_1 + 3;
  lVar2 = FUN_029db294(param_1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7 + 1);
  local_60 = 0;
  lVar6 = param_1[1] - *param_1 >> 3;
  plStack_58 = plVar9;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar2 * 0x38,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  puVar10 = (undefined8 *)(lVar3 + lVar6 * 8);
  local_60 = lVar3 + lVar2 * 0x38;
  lVar2 = *plVar9;
  local_78 = lVar3;
  local_70 = puVar10;
  local_68 = puVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
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
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *puVar10 = *param_2;
  lVar3 = lVar3 + lVar6 * 8;
  *(undefined8 *)(lVar3 + 8) = param_2[1];
  *(undefined8 *)(lVar3 + 0x10) = param_2[2];
  *(undefined8 *)(lVar3 + 0x18) = param_2[3];
  uVar7 = param_2[4];
  param_2[4] = 0;
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  uVar7 = param_2[6];
  *(undefined8 *)(lVar3 + 0x28) = param_2[5];
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_68 = local_68 + 7;
  FUN_013223fc(param_1,&local_78);
  puVar10 = local_70;
  if (local_68 != local_70) {
    puVar8 = local_68 + -7;
    plVar9 = local_68 + -3;
    local_68 = puVar8;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x20))();
    }
    while (puVar8 != puVar10) {
      local_68 = puVar8 + -7;
      plVar9 = puVar8 + -3;
      puVar8 = local_68;
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 0x20))();
      }
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    lVar6 = local_60 - local_78;
    plVar9 = (long *)*plStack_58;
    uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar2,lVar6,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar2,lVar6,8);
    }
  }
  return;
}


