/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b3ebf4; name: FUN_00b3ebf4
 */


void * FUN_00b3ebf4(long *param_1,void *param_2,long param_3,long param_4,size_t param_5,
                   size_t param_6)

{
  void *__dest;
  
  __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,param_4);
  memcpy((void *)((long)__dest + (param_4 - param_5)),(void *)((long)param_2 + (param_3 - param_5)),
         param_5);
  memcpy(__dest,param_2,param_6);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  return __dest;
}


