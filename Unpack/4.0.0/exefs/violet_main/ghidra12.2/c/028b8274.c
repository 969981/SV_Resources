/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b8274; name: FUN_028b8274
 */


void FUN_028b8274(undefined8 *param_1,long param_2)

{
  void *__s;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    FUN_028b867c();
    __s = (void *)param_1[1];
    memset(__s,0,param_2 << 2);
    param_1[1] = (void *)((long)__s + param_2 * 4);
  }
  return;
}


