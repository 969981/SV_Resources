/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025511fc; name: FUN_025511fc
 */


void FUN_025511fc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined1 *puVar1;
  byte local_24 [4];
  undefined8 local_20 [2];
  
  local_24[0] = param_3 & 1;
  puVar1 = &LAB_025576bc;
  if (DAT_04850ab0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_20[0] = param_1;
  FUN_025578a8(param_2,puVar1,0,local_20,local_24);
  return;
}


