/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019356cc; name: FUN_019356cc
 */


void FUN_019356cc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  puVar1 = &LAB_008faeb8;
  if (DAT_04804398 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_1c = param_4;
  uStack_18 = param_3;
  local_14 = param_2;
  FUN_01935718(param_1,puVar1,0,&local_14,&uStack_18,&local_1c);
  return;
}


