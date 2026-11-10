/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ab150; name: FUN_015ab150
 */


void FUN_015ab150(long param_1,undefined8 *param_2)

{
  ulong __n;
  undefined8 local_48;
  ulong local_40;
  void *local_38;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = (void *)0x0;
  __n = local_40 >> 0x20;
  local_38 = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),__n,8);
  memcpy(local_38,param_2 + 2,__n);
  FUN_015ab1c4(param_1,&local_48);
  return;
}


