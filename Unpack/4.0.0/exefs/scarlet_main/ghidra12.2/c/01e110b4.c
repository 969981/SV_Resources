/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e110b4; name: FUN_01e110b4
 */


uint FUN_01e110b4(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0xa54af86f3a0b011d;
  pcStack_28 = "loop_attack_bool";
  local_20 = 0x10;
  uStack_18 = 0;
  uVar1 = FUN_00d93028(param_1,&local_30);
  return uVar1 & 1;
}


