/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ed7ac; name: FUN_012ed7ac
 */


void FUN_012ed7ac(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_50;
  long local_48;
  long lStack_40;
  long local_38;
  long local_18;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045a00b8;
  param_1[1] = lVar3;
  param_1[4] = (long)&PTR_LAB_045a00f0;
  memset(param_1 + 6,0,0x60);
  memcpy(param_1 + 0x12,&DAT_03d625c8,0x30);
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_18 = lVar3;
  FUN_012ed9d0(&local_50,lVar3,&local_18);
  lVar3 = local_50;
  local_50 = 0;
  lVar4 = param_1[6];
  param_1[6] = lVar3;
  if (lVar4 != 0) {
    FUN_02191f30(param_1 + 7);
  }
  param_1[8] = lStack_40;
  param_1[9] = local_38;
  param_1[7] = local_48;
  local_18 = param_1[1];
  FUN_012edb70(&local_50,local_18,&local_18);
  lVar3 = local_50;
  local_50 = 0;
  lVar4 = param_1[10];
  param_1[10] = lVar3;
  if (lVar4 != 0) {
    FUN_021922ec(param_1 + 0xb);
  }
  param_1[0xc] = lStack_40;
  param_1[0xd] = local_38;
  param_1[0xb] = local_48;
  local_18 = param_1[1];
  FUN_012edd10(&local_50,local_18,&local_18);
  lVar3 = local_50;
  local_50 = 0;
  lVar4 = param_1[0xe];
  param_1[0xe] = lVar3;
  if (lVar4 != 0) {
    FUN_021926a8(param_1 + 0xf);
  }
  param_1[0x10] = lStack_40;
  param_1[0x11] = local_38;
  param_1[0xf] = local_48;
  return;
}


