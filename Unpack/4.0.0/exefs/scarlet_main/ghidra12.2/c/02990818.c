/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02990818; name: FUN_02990818
 */


void FUN_02990818(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  *param_1 = (long)&PTR_FUN_045ff390;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045ff3c8;
  param_1[6] = param_2;
  memset(param_1 + 7,0,0x60);
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x13) = 5;
  FUN_010aeb40(param_1 + 0x14);
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  FUN_029908ec(param_1,param_3,param_4);
  FUN_02990a04(param_1);
  FUN_02990afc(param_1);
  return;
}


