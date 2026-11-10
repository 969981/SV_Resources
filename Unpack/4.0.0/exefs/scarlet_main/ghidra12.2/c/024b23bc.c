/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024b23bc; name: FUN_024b23bc
 */


void FUN_024b23bc(undefined8 *param_1,void *param_2,undefined8 param_3,void *param_4,long param_5)

{
  size_t __n;
  void *pvVar1;
  void *__src;
  
  __src = (void *)param_1[1];
  if (__src == (void *)0x0) {
    memset(param_2,0,param_5 * 0x28);
    pvVar1 = (void *)((long)param_2 + param_5 * 0x28);
  }
  else {
    pvVar1 = param_2;
    if (__src != param_4) {
      memmove(param_2,__src,(long)param_4 - (long)__src);
      pvVar1 = (void *)((long)param_2 + ((long)param_4 - (long)__src));
    }
    memset(pvVar1,0,param_5 * 0x28);
    pvVar1 = (void *)((long)pvVar1 + param_5 * 0x28);
    __n = (long)__src + (param_1[2] * 0x28 - (long)param_4);
    if (__n != 0) {
      memmove(pvVar1,param_4,__n);
      pvVar1 = (void *)((long)pvVar1 + __n);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[1],param_1[3] * 0x28,8);
  }
  param_1[3] = param_3;
  param_1[1] = param_2;
  param_1[2] = ((long)pvVar1 - (long)param_2 >> 3) * -0x3333333333333333;
  return;
}


