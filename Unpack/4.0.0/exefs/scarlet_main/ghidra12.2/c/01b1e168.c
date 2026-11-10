/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1e168; name: FUN_01b1e168
 */


void FUN_01b1e168(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 local_4;
  
  puVar1 = PTR_FUN_047d4168;
  if (DAT_048043c8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4 = param_3;
  FUN_01b1e824(param_2,puVar1,0,&local_4);
  FUN_01b1e860(param_1);
  return;
}


