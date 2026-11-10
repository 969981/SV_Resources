/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e12778; name: FUN_01e12778
 */


uint FUN_01e12778(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0x9c83dbda0e16e7af;
  pcStack_28 = "stun01_bool";
  local_20 = 0xb;
  uStack_18 = 0;
  uVar1 = FUN_00d93028(param_1,&local_30);
  return uVar1 & 1;
}


