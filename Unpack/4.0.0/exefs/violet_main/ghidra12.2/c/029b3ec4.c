/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b3ec4; name: FUN_029b3ec4
 */


void FUN_029b3ec4(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_68;
  long *plStack_60;
  long *local_58;
  long local_50;
  long *plStack_48;
  
  plVar5 = param_1 + 3;
  lVar3 = FUN_029b44f4(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar6 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar5;
  if (lVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar3 << 4,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))();
    }
  }
  plVar1 = (long *)(local_68 + (lVar4 - lVar6 >> 4) * 0x10);
  local_50 = local_68 + lVar3 * 0x10;
  lVar6 = *plVar5;
  plStack_60 = plVar1;
  local_58 = plVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
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
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar5 = (long *)*param_2;
  *plVar1 = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(int *)(plVar1 + 1) = (int)param_2[1];
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 2;
  FUN_00c8e0b0(param_1,&local_68);
  FUN_00c8e250(&local_68);
  return;
}


