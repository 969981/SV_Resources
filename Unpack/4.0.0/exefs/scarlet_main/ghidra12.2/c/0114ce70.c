/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0114ce70; name: FUN_0114ce70
 */


void FUN_0114ce70(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar5 = FUN_029caa9c(param_1,(param_1[1] - *param_1 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1);
  local_60 = 0;
  lVar8 = param_1[1] - *param_1 >> 3;
  plStack_58 = plVar1;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar5 * 0x58,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar10 = (undefined8 *)(lVar6 + lVar8 * 8);
  local_60 = lVar6 + lVar5 * 0x58;
  lVar5 = *plVar1;
  local_78 = lVar6;
  puStack_70 = puVar10;
  local_68 = puVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar5;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  lVar6 = lVar6 + lVar8 * 8;
  *puVar10 = 0;
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[6];
  *(undefined8 *)(lVar6 + 0x28) = param_2[5];
  *(undefined8 *)(lVar6 + 0x30) = uVar9;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(undefined8 *)(lVar6 + 0x20) = uVar3;
  *puVar10 = *param_2;
  *(undefined8 *)(lVar6 + 8) = param_2[1];
  *(undefined8 *)(lVar6 + 0x10) = param_2[2];
  uVar9 = param_2[9];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(param_2 + 10);
  *(undefined8 *)(lVar6 + 0x40) = uVar3;
  *(undefined8 *)(lVar6 + 0x48) = uVar9;
  *(undefined8 *)(lVar6 + 0x38) = uVar2;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  local_68 = local_68 + 0xb;
  FUN_0114c94c(param_1,&local_78);
  FUN_0114c4b4(&local_78);
  return;
}


