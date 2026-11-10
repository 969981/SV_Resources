/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d42d6c; name: FUN_00d42d6c
 */


void FUN_00d42d6c(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long *plStack_68;
  
  plVar1 = param_1 + 3;
  lVar3 = FUN_021e2e24(param_1,(param_1[1] - *param_1 >> 3) * -0x1111111111111111 + 1);
  local_70 = 0;
  lVar6 = param_1[1] - *param_1 >> 3;
  plStack_68 = plVar1;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 * 0x78,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar9 = (undefined4 *)(lVar4 + lVar6 * 8);
  local_70 = lVar4 + lVar3 * 0x78;
  lVar3 = *plVar1;
  local_88 = lVar4;
  local_80 = puVar9;
  local_78 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar3;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *puVar9 = *param_2;
  lVar4 = lVar4 + lVar6 * 8;
  uVar7 = *param_3;
  *(undefined8 *)(lVar4 + 0x28) = 0x555555555555555;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined4 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  *(undefined4 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = uVar7;
  *(undefined8 *)(lVar4 + 0x60) = 0xfffffffffffffff;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar9 = local_78 + 0x1e;
  lVar3 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 == lVar3) {
    puVar8 = local_80;
    local_78 = (undefined4 *)lVar3;
  }
  else {
    puVar8 = local_80 + -0x1e;
    local_78 = puVar9;
    FUN_00d43108(plVar1,puVar8,lVar6 + -0x78);
    if (lVar6 + -0x78 != lVar3) {
      do {
        puVar8 = puVar8 + -0x1e;
        FUN_00d43108(plVar1,puVar8,lVar6 + -0xf0);
        lVar6 = lVar6 + -0x78;
      } while (lVar3 + 0x78 != lVar6);
    }
    lVar3 = *param_1;
    local_78 = (undefined4 *)param_1[1];
  }
  *param_1 = (long)puVar8;
  param_1[1] = (long)puVar9;
  lVar6 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar3;
  local_80 = (undefined4 *)lVar3;
  local_70 = lVar6;
  FUN_00d41944(&local_88);
  return;
}


