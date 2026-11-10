/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026bd594; name: FUN_026bd594
 */


void FUN_026bd594(undefined8 param_1,undefined4 param_2,byte param_3)

{
  undefined *puVar1;
  byte local_18 [4];
  undefined4 local_14;
  
  puVar1 = PTR_FUN_047e0a48;
  if (DAT_048591b8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18[0] = param_3 & 1;
  local_14 = param_2;
  FUN_026be414(param_1,puVar1,0,&local_14,local_18);
  return;
}


