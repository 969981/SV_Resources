/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cbb0c; name: FUN_019cbb0c
 */


void FUN_019cbb0c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_68;
  long *plStack_60;
  long *local_58;
  long local_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_1;
  plVar6 = (long *)*plVar3;
  plVar1 = (long *)plVar3[1];
  if ((plVar6 != plVar1) && (*plVar6 != *param_2)) {
    do {
      plVar6 = plVar6 + 1;
      if (plVar1 == plVar6) {
        plVar6 = plVar1;
        goto LAB_019cbb1c;
      }
    } while (*plVar6 != *param_2);
  }
LAB_019cbb1c:
  if (plVar1 != plVar6) {
    return;
  }
  if (plVar3[1] != plVar3[2]) {
    FUN_0289e56c();
    return;
  }
  plVar6 = plVar3 + 3;
  lVar4 = FUN_019cbd00(plVar3,(plVar3[1] - *plVar3 >> 3) + 1);
  lVar7 = *plVar3;
  lVar5 = plVar3[1];
  local_50 = 0;
  plStack_48 = plVar6;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar4 << 3,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))();
    }
  }
  plVar1 = (long *)(local_68 + (lVar5 - lVar7 >> 3) * 8);
  local_50 = local_68 + lVar4 * 8;
  lVar7 = *plVar6;
  plStack_60 = plVar1;
  local_58 = plVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *plVar1 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *plVar1 = *param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = local_58 + 1;
  FUN_0178fc1c(plVar3,&local_68);
  FUN_0178fc84(&local_68);
  return;
}


