/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02829840; name: FUN_02829840
 */


long FUN_02829840(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x78,8);
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_50 = *param_2;
  *param_2 = 0;
  lStack_48 = param_2[1];
  local_40 = param_2[2];
  lStack_38 = param_2[3];
  FUN_028299a4(lVar4,&local_50);
  lVar1 = local_50;
  local_50 = 0;
  if (lVar1 != 0) {
    FUN_02829a00(&lStack_48);
  }
  *(undefined4 *)(lVar4 + 0x18) = 0x80078;
  *(long **)(lVar4 + 8) = param_1;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return lVar4;
}


