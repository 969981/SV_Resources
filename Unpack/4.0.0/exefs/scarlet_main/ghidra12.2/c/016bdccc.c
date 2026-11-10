/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bdccc; name: FUN_016bdccc
 */


void FUN_016bdccc(long *param_1,char *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_016bde78(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar6 = *param_1;
  lVar5 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 5,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar2 = (undefined1 *)(local_68 + (lVar5 - lVar6 >> 5) * 0x20);
  local_50 = local_68 + lVar4 * 0x20;
  lVar6 = *plVar1;
  puStack_60 = puVar2;
  local_58 = puVar2;
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
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *puVar2 = 0;
  if (*param_2 != '\0') {
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    FUN_016be1d4(puVar2 + 8,param_2 + 8);
    *puVar2 = 1;
  }
  puVar2[0x18] = param_2[0x18];
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = local_58 + 0x20;
  FUN_016bdec8(param_1,&local_68);
  FUN_016bdf30(&local_68);
  return;
}


