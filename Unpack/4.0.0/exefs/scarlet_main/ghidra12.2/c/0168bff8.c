/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168bff8; name: FUN_0168bff8
 */


void FUN_0168bff8(long *param_1)

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
  *param_1 = (long)&PTR_LAB_04550db8;
  param_1[1] = lVar5;
  param_1[4] = (long)&PTR_LAB_04550de8;
  if (((DAT_04838d00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04838d00), iVar2 != 0)) {
    FUN_00100190(&LAB_00ada26c,&DAT_04838cf0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04838d00);
  }
  DAT_04838cf8 = 1;
  return;
}


