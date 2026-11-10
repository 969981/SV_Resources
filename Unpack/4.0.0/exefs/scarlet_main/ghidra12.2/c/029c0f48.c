/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c0f48; name: FUN_029c0f48
 */


void FUN_029c0f48(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_029c24c8(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar8 = *param_1;
  lVar5 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar4 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 5,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar2 = (undefined8 *)(local_78 + (lVar5 - lVar8 >> 5) * 0x20);
  local_60 = local_78 + lVar4 * 0x20;
  lVar8 = *plVar1;
  local_70 = puVar2;
  local_68 = puVar2;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
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
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  uVar6 = *param_2;
  *param_2 = 0;
  *puVar2 = uVar6;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar2 = local_68 + 4;
  lVar8 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar8) {
    puVar7 = local_70;
    local_68 = (undefined8 *)lVar8;
  }
  else {
    puVar7 = local_70 + -4;
    local_68 = puVar2;
    FUN_00e1b1d8(plVar1,puVar7,lVar5 + -0x20);
    if (lVar5 + -0x20 != lVar8) {
      do {
        puVar7 = puVar7 + -4;
        FUN_00e1b1d8(plVar1,puVar7,lVar5 + -0x40);
        lVar5 = lVar5 + -0x20;
      } while (lVar8 + 0x20 != lVar5);
    }
    lVar8 = *param_1;
    local_68 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar2;
  lVar5 = param_1[2];
  param_1[2] = local_60;
  local_78 = lVar8;
  local_70 = (undefined8 *)lVar8;
  local_60 = lVar5;
  FUN_00e15860(&local_78);
  return;
}


