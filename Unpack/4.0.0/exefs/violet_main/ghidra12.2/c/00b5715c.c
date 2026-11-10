/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b5715c; name: FUN_00b5715c
 */


void FUN_00b5715c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),4,8)
  ;
  *puVar1 = *(undefined4 *)(param_2 + 0x50);
  FUN_01692b7c(param_1,param_2,puVar1,4,param_3,0);
  return;
}


