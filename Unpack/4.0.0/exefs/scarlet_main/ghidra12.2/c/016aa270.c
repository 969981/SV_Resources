/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016aa270; name: FUN_016aa270
 */


void FUN_016aa270(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined4 *)FUN_01053840();
  lVar4 = nn::os::GetTlsValue(*puVar3);
  lVar5 = 0;
  if ((lVar4 != 0) && (lVar5 = 0, *(long *)(lVar4 + 0x80) != 0)) {
    lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
  }
  *param_1 = (long)&DAT_04583a80;
  param_1[1] = lVar5;
  param_1[4] = (long)&PTR_LAB_04583ab0;
  if (((DAT_04840ad8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04840ad8), iVar2 != 0)) {
    FUN_00100190(&LAB_02b0d008,&DAT_04840ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ad8);
  }
  DAT_04840ad0 = 1;
  return;
}


