/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d837c; name: FUN_029d837c
 */


void FUN_029d837c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  lVar4 = 0;
  if ((lVar3 != 0) && (lVar4 = 0, *(long *)(lVar3 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_04608a80;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_04608ad8;
  param_1[6] = param_2;
  return;
}


