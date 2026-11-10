/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ae6b84; name: FUN_01ae6b84
 */


void FUN_01ae6b84(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 local_4;
  
  puVar1 = PTR_FUN_047d3bd8;
  if (DAT_04802148 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4 = param_3;
  FUN_01ae7e78(param_2,puVar1,0,&local_4);
  FUN_00e918c0(param_1);
  return;
}


