/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


