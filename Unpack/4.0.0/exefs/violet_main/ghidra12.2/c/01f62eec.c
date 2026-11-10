/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f62eec; name: FUN_01f62eec
 */


void FUN_01f62eec(undefined8 param_1,long param_2,undefined8 param_3)

{
  void *__dest;
  
  __dest = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x2c,8);
  memcpy(__dest,(void *)(param_2 + 0x50),0x2c);
  FUN_01692b7c(param_1,param_2,__dest,0x2c,param_3,0);
  return;
}


