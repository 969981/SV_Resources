/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00452930; name: FUN_00452930
 */


undefined8 FUN_00452930(uint *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  uint uVar2;
  ulong __n;
  size_t __n_00;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    __n_00 = 8 - (ulong)uVar2;
    __dest = (void *)((long)param_1 + (ulong)uVar2 + 4);
    if (param_3 < __n_00) {
      memcpy(__dest,param_2,param_3);
      __n = (ulong)(uVar2 + (int)param_3);
      goto LAB_004529d4;
    }
    memcpy(__dest,param_2,__n_00);
    *param_1 = 0;
    param_3 = param_3 - __n_00;
    param_2 = (void *)((long)param_2 + __n_00);
    FUN_004529f0(param_1,param_1 + 1,8);
  }
  uVar1 = param_3 & 0xfffffffffffffff8;
  if (uVar1 != 0) {
    FUN_004529f0(param_1,param_2,uVar1);
  }
  __n = param_3 & 7;
  if (__n == 0) {
    return 1;
  }
  memcpy(param_1 + 1,(void *)((long)param_2 + uVar1),__n);
LAB_004529d4:
  *param_1 = (uint)__n;
  return 1;
}


