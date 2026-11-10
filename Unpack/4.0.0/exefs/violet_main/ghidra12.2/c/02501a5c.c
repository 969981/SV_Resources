/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02501a5c; name: FUN_02501a5c
 */


void FUN_02501a5c(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 local_30 [16];
  
  puVar1 = PTR_LAB_047df1d8;
  if (DAT_0484f1c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30 = FUN_02503c64(param_2,puVar1,0);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


