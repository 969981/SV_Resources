/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c210; name: FUN_0038c210
 */


undefined8 FUN_0038c210(long param_1,char *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined8 uVar1;
  void *__dest;
  
  __n = strlen(param_2);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_0038ccb0(param_1);
    *param_3 = uVar1;
  }
  if (__n != 0) {
    __dest = (void *)FUN_0038c7b0(__n);
    param_3[1] = __dest;
    param_3[2] = __n;
    memcpy(__dest,param_2,__n);
  }
  return 0;
}


