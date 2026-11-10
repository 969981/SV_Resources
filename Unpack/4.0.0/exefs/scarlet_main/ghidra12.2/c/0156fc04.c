/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156fc04; name: FUN_0156fc04
 */


void FUN_0156fc04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  uint *local_18;
  
  FUN_0156fc9c(auStack_48,param_2);
  FUN_0156fc94(auStack_48,&DAT_045e7af8);
  FUN_015702a0(&local_18,auStack_48,param_3,param_4);
  uVar2 = FUN_0156fde4((long)local_18 + (ulong)*local_18);
  puVar1 = local_18;
  *param_1 = uVar2;
  local_18 = (uint *)0x0;
  if (puVar1 != (uint *)0x0) {
    operator_delete__(puVar1);
  }
  FUN_0135d2ec(auStack_48);
  return;
}


