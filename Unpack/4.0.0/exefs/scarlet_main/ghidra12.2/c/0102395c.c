/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102395c; name: FUN_0102395c
 */


void FUN_0102395c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar6 = FUN_01023af4(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar8 = *param_1;
  lVar7 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar6 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar6 << 5,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar9 = (undefined8 *)(local_68 + (lVar7 - lVar8 >> 5) * 0x20);
  local_50 = local_68 + lVar6 * 0x20;
  lVar8 = *plVar1;
  puStack_60 = puVar9;
  local_58 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar4;
    *puVar9 = uVar2;
    puVar9[1] = uVar3;
  }
  else {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar4;
    *puVar9 = uVar2;
    puVar9[1] = uVar3;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    puVar9 = local_58;
  }
  local_58 = puVar9 + 4;
  FUN_01023b44(param_1,&local_68);
  FUN_01023bac(&local_68);
  return;
}


