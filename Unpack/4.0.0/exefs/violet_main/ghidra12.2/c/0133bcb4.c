/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133bcb4; name: FUN_0133bcb4
 */


void FUN_0133bcb4(long *param_1,undefined2 *param_2)

{
  long *plVar1;
  undefined2 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68;
  undefined2 *puStack_60;
  undefined2 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_0133be3c(param_1,(param_1[1] - *param_1 >> 1) + 1);
  lVar6 = *param_1;
  lVar5 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 1,2);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar2 = (undefined2 *)(local_68 + (lVar5 - lVar6 >> 1) * 2);
  local_50 = local_68 + lVar4 * 2;
  lVar6 = *plVar1;
  puStack_60 = puVar2;
  local_58 = puVar2;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *puVar2 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar2 = *param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = local_58 + 1;
  FUN_0133be88(param_1,&local_68);
  FUN_0133c00c(&local_68);
  return;
}


