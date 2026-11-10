/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0166f098; name: FUN_0166f098
 */


void FUN_0166f098(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar3 = FUN_0166f228(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar6 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 << 3,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar7 = (undefined8 *)(local_68 + (lVar4 - lVar6 >> 3) * 8);
  local_50 = local_68 + lVar3 * 8;
  lVar6 = *plVar1;
  puStack_60 = puVar7;
  local_58 = puVar7;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar7 = local_58;
  }
  local_58 = puVar7 + 1;
  FUN_0166f278(param_1,&local_68);
  FUN_0166f2e0(&local_68);
  return;
}


