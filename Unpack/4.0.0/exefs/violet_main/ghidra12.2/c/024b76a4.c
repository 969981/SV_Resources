/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024b76a4; name: FUN_024b76a4
 */


void FUN_024b76a4(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_24;
  undefined8 local_8;
  
  puVar1 = &LAB_024b8328;
  if (DAT_0484c8b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = param_3;
  local_8 = FUN_024b83e8(param_2,puVar1,0,&local_24);
  *param_1 = 1;
  FUN_024a9cf0(param_1 + 8,&local_8);
  return;
}


