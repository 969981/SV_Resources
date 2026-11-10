/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003693d0; name: FUN_003693d0
 */


void FUN_003693d0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  void *__dest;
  ulong uVar2;
  undefined8 *__src;
  
  if (param_3 != 0) {
    memmove((void *)*param_1,(void *)param_1[1],param_1[2] << 5);
    param_1[1] = *param_1;
    return;
  }
  __src = (undefined8 *)*param_1;
  uVar2 = (ulong)(param_1[3] * 3) >> 1;
  param_1[3] = uVar2;
  if (__src == param_1 + 5) {
    __dest = (void *)FUN_0038c780(uVar2 << 5);
    *param_1 = __dest;
    memcpy(__dest,__src,param_2 << 5);
    uVar1 = *param_1;
  }
  else {
    uVar1 = FUN_0038c7f0(__src,uVar2 << 5);
    *param_1 = uVar1;
  }
  param_1[1] = uVar1;
  return;
}


