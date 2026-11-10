/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03045954; name: FUN_03045954
 */


void FUN_03045954(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x2f0))(param_2,param_3);
  if (((~*(uint *)(puVar1 + 1) & 0xffffff) == 0) || ((~*(uint *)(puVar1 + 3) & 0xffffff) == 0)) {
    return;
  }
  FUN_03046234(param_1,param_2,*puVar1,puVar1[2],0);
  return;
}


