/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025e1908; name: FUN_025e1908
 */


void FUN_025e1908(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047d7298;
  if (DAT_04853ad8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_8 = FUN_025e1f10(param_2,puVar1,0);
  *param_1 = 1;
  FUN_01cf38a0(param_1 + 8,&local_8);
  return;
}


