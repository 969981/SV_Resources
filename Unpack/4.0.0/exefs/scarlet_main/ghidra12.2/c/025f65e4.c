/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025f65e4; name: FUN_025f65e4
 */


void FUN_025f65e4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 local_4;
  
  puVar1 = PTR_FUN_047e0178;
  if (DAT_04854260 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4 = param_3;
  FUN_025f6d54(param_2,puVar1,0,&local_4);
  FUN_025f6d90(param_1);
  return;
}


