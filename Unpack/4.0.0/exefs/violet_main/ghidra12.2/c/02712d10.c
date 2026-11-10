/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02712d10; name: FUN_02712d10
 */


void FUN_02712d10(undefined8 param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 local_40 [16];
  
  local_40 = FUN_0166cf08(*(undefined8 *)(*param_2 + 0x38),param_5,param_6);
  FUN_02712d70(param_1,param_3,param_4,local_40);
  return;
}


