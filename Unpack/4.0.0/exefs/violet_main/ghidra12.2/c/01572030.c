/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01572030; name: FUN_01572030
 */


void * FUN_01572030(long *param_1,void *param_2,long param_3,ulong param_4,size_t param_5,
                   size_t param_6)

{
  void *pvVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015720e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6)
    ;
    return pvVar1;
  }
  pvVar1 = operator_new__(param_4);
  memcpy((void *)((long)pvVar1 + (param_4 - param_5)),(void *)((long)param_2 + (param_3 - param_5)),
         param_5);
  memcpy(pvVar1,param_2,param_6);
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return pvVar1;
}


