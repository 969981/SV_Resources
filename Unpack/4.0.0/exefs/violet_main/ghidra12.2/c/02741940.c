/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02741940; name: FUN_02741940
 */


void FUN_02741940(long param_1,undefined4 param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00ccbb30();
  memcpy(__dest,(void *)(param_1 + 0x7c),0x40);
  FUN_00ccbb18(param_1,param_2);
  return;
}


