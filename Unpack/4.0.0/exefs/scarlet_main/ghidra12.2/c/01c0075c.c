/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c0075c; name: FUN_01c0075c
 */


void FUN_01c0075c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  puVar1 = PTR_FUN_047d5a58;
  if (DAT_04810e98 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c = param_4;
  uStack_18 = param_3;
  local_14 = param_2;
  FUN_01c00f78(param_1,puVar1,0,&local_14,&uStack_18,&local_1c);
  return;
}


