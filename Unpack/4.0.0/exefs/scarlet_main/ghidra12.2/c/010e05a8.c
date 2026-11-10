/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e05a8; name: FUN_010e05a8
 */


void FUN_010e05a8(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar3 = FUN_029bfba0(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  lVar6 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar3 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 * 0x28,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar7 = (undefined8 *)(local_78 + (lVar4 - lVar6 >> 3) * 8);
  local_60 = local_78 + lVar3 * 0x28;
  lVar6 = *plVar1;
  local_70 = puVar7;
  local_68 = puVar7;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    puVar7[3] = 0;
    puVar7[4] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar7 = local_68;
  }
  lVar6 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar6) {
    puVar5 = local_70;
    local_68 = (undefined8 *)lVar6;
  }
  else {
    puVar5 = local_70 + -5;
    local_68 = puVar7 + 5;
    FUN_010e0290(plVar1,puVar5,lVar4 + -0x28);
    if (lVar4 + -0x28 != lVar6) {
      do {
        puVar5 = puVar5 + -5;
        FUN_010e0290(plVar1,puVar5,lVar4 + -0x50);
        lVar4 = lVar4 + -0x28;
      } while (lVar6 + 0x28 != lVar4);
    }
    lVar6 = *param_1;
    local_68 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar5;
  param_1[1] = (long)(puVar7 + 5);
  lVar4 = param_1[2];
  param_1[2] = local_60;
  local_78 = lVar6;
  local_70 = (undefined8 *)lVar6;
  local_60 = lVar4;
  FUN_010ddf50(&local_78);
  return;
}


