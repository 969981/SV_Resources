/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c280; name: FUN_0038c280
 */


undefined8 FUN_0038c280(long param_1,void *param_2,size_t param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  void *__dest;
  
  param_4[2] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  if (param_1 != 0) {
    uVar1 = FUN_0038ccb0();
    *param_4 = uVar1;
  }
  if (param_3 != 0) {
    __dest = (void *)FUN_0038c7b0(param_3);
    param_4[1] = __dest;
    param_4[2] = param_3;
    memcpy(__dest,param_2,param_3);
  }
  return 0;
}


