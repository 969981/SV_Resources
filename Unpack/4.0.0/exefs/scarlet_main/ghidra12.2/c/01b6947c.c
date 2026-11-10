/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b6947c; name: FUN_01b6947c
 */


void FUN_01b6947c(undefined8 param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 local_1c;
  undefined2 local_18 [2];
  undefined1 local_14 [4];
  
  puVar1 = PTR_LAB_047d4bb8;
  if (DAT_04809c18 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c = param_4;
  local_18[0] = param_3;
  local_14[0] = param_2;
  FUN_01b6a248(param_1,puVar1,0,local_14,local_18,&local_1c);
  return;
}


