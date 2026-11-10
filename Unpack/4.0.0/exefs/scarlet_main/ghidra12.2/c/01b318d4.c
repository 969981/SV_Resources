/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b318d4; name: FUN_01b318d4
 */


void FUN_01b318d4(undefined8 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined *puVar1;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*param_4 == '\0') || (*param_4 == '\x01')) {
    local_20 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_20 = 0;
  }
  puVar1 = PTR_FUN_047d4728;
  if (DAT_04805f30 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18 = param_3;
  local_14 = param_2;
  FUN_01b32910(param_1,puVar1,0,&local_14,&local_18,&local_20);
  return;
}


