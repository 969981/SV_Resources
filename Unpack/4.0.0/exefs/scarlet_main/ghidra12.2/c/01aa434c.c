/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aa434c; name: FUN_01aa434c
 */


void FUN_01aa434c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_28;
  
  uVar4 = *(long *)(param_2 + 2) + 3U & 0xfffffffffffffffc;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0xe8) = (int)uVar4 - *param_2;
  uVar4 = *(long *)(param_2 + 2) + 7U & 0xfffffffffffffffc;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0xec) = (int)uVar4 - *param_2;
  lVar5 = *(long *)(param_2 + 2);
  *(long *)(param_2 + 2) = lVar5 + 4;
  *(int *)(param_1 + 0xf0) = (int)(lVar5 + 4) - *param_2;
  uVar4 = *(long *)(param_2 + 2) + 8U & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0xf4) = (int)uVar4 - *param_2;
  uVar4 = *(long *)(param_2 + 2) + 0xfU & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0xf8) = (int)uVar4 - *param_2;
  uVar4 = *(long *)(param_2 + 2) + 0xfU & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0xfc) = (int)uVar4 - *param_2;
  uVar4 = *(long *)(param_2 + 2) + 0xfU & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0x100) = (int)uVar4 - *param_2;
  uVar4 = *(long *)(param_2 + 2) + 0x27U & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0x104) = (int)uVar4 - *param_2;
  lVar5 = *(long *)(param_2 + 4);
  *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + 0x18;
  puVar1 = *(undefined8 **)(lVar5 + 8);
  local_28 = param_1;
  if (puVar1 < *(undefined8 **)(lVar5 + 0x10)) {
    uVar6 = *(undefined8 *)(lVar5 + 0x18);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      param_1 = local_28;
    }
    *puVar1 = &LAB_02a86b14;
    puVar1[1] = &LAB_02a86b48;
    puVar1[2] = &LAB_02a86b4c;
    puVar1[3] = &LAB_02a86b58;
    puVar1[4] = param_1;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    *(undefined8 **)(lVar5 + 8) = puVar1 + 0x10;
  }
  else {
    FUN_01aa455c(lVar5,&local_28);
  }
  return;
}


