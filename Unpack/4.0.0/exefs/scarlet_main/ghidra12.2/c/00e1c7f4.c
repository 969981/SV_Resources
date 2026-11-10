/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e1c7f4; name: FUN_00e1c7f4
 */


void FUN_00e1c7f4(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e31c0 + 0x10);
  param_2[1] = *(long *)(param_3 + 8);
  FUN_029c4bf0(param_2 + 2,param_3 + 0x10);
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_3 + 0x48);
  *param_2 = (long)(PTR_DAT_047e3210 + 0x10);
  param_2[10] = *(long *)(param_3 + 0x50);
  FUN_00ca3790(param_2 + 0xb,param_3 + 0x58);
  param_2[0x13] = *(long *)(param_3 + 0x98);
  FUN_029c4e00(param_2 + 0x14,param_3 + 0xa0);
  param_2[0x14] = (long)(PTR_DAT_047e31b0 + 0x10);
  lVar1 = *(long *)(param_3 + 0xe0);
  lVar2 = *(long *)(param_3 + 0xe8);
  *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)(param_3 + 0xf0);
  param_2[0x1c] = lVar1;
  param_2[0x1d] = lVar2;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


