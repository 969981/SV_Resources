/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01713524; name: FUN_01713524
 */


void FUN_01713524(undefined8 param_1,undefined4 param_2,byte param_3)

{
  undefined1 *puVar1;
  byte local_18 [4];
  undefined4 local_14;
  
  puVar1 = &LAB_008fae8c;
  if (DAT_04804390 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_18[0] = param_3 & 1;
  local_14 = param_2;
  FUN_01713574(param_1,puVar1,0,&local_14,local_18);
  return;
}


