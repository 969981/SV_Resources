/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01771aec; name: FUN_01771aec
 */


void FUN_01771aec(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  lVar4 = 0;
  if ((lVar3 != 0) && (lVar4 = 0, *(long *)(lVar3 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d84d8;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045d8510;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  param_1[8] = 0;
  param_1[9] = lVar4;
  param_1[10] = 0x1fffffffffffffff;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = (long)(param_1 + 0x11);
  param_1[0x12] = (long)(param_1 + 0x11);
  FUN_01771ba4(param_1 + 0x14);
  param_1[0x18] = 0;
  param_1[0x19] = (long)&PTR_LAB_045d8540;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}


