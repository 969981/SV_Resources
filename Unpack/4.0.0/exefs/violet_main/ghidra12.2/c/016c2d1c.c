/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c2d1c; name: FUN_016c2d1c
 */


void FUN_016c2d1c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  puVar1 = PTR_FUN_047d7ce8;
  if (DAT_048321b8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = param_3;
  local_20[0] = param_1;
  FUN_016c2d68(param_2,puVar1,0,local_20,&local_24);
  return;
}


