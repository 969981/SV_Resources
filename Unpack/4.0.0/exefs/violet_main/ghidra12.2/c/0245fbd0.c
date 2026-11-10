/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245fbd0; name: FUN_0245fbd0
 */


void FUN_0245fbd0(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  FUN_0245fc38(&local_8,param_2);
  uVar1 = local_8;
  *param_1 = 1;
  local_8 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_0245e704(&local_8);
  return;
}


