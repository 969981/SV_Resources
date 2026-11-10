/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026da2ec; name: FUN_026da2ec
 */


void FUN_026da2ec(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  if (param_1[1] != param_1[2]) {
    puVar6 = (undefined8 *)param_1[1];
    lVar8 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar6 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar6 = *param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar6 + 1);
    return;
  }
  plVar7 = param_1 + 3;
  lVar3 = FUN_026da628(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar8 = *param_1;
  lVar2 = param_1[1];
  local_50 = 0;
  lVar4 = 0;
  local_48 = plVar7;
  if ((lVar3 != 0) &&
     (lVar4 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar3 << 3,8), lVar4 == 0)) {
    (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
  }
  puVar6 = (undefined8 *)(lVar4 + (lVar2 - lVar8 >> 3) * 8);
  local_50 = lVar4 + lVar3 * 8;
  lVar8 = *plVar7;
  local_60 = puVar6;
  local_58 = puVar6;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    *puVar6 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar6 = *param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    puVar6 = local_58;
  }
  local_58 = puVar6 + 1;
  FUN_026d9388(plVar7,*param_1,param_1[1],&local_60);
  puVar6 = (undefined8 *)*param_1;
  lVar8 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar2 = param_1[2];
  param_1[2] = local_50;
  local_58 = (undefined8 *)lVar8;
  if (lVar8 - (long)puVar6 != 0) {
    local_58 = (undefined8 *)(lVar8 + ((lVar8 - (long)puVar6) - 8U >> 3 ^ 0xffffffffffffffff) * 8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    lVar8 = lVar2 - (long)puVar6;
    plVar7 = (long *)*local_48;
    local_60 = puVar6;
    local_50 = lVar2;
    uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar5 & 1) != 0) && (lVar2 = FUN_00c4e600(), 0 < *(int *)(lVar2 + 0x12c8))) {
      FUN_00c48fe8(plVar7,puVar6,lVar8,8);
      return;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,lVar8,8);
  }
  return;
}


