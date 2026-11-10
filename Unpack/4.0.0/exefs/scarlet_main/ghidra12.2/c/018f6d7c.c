/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f6d7c; name: FUN_018f6d7c
 */


void FUN_018f6d7c(long param_1,ulong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 local_14;
  
  local_14 = param_3;
  puVar1 = (undefined8 *)FUN_010a1b68(param_1 + 0x140,&local_14);
  FUN_018f6dd8(param_1 + (param_2 & 0xff) * 0x38 + 0x28,*puVar1);
  FUN_018f6eac(param_1,param_3);
  return;
}


