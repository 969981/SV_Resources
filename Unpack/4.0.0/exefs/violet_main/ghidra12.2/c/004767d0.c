/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004767d0; name: FUN_004767d0
 */


undefined8 FUN_004767d0(long param_1,void *param_2,ulong param_3)

{
  void *__dest;
  void *__dest_00;
  uint uVar1;
  long lVar2;
  ulong __n;
  size_t __n_00;
  
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    __dest = (void *)(param_1 + 0x50);
    if (CARRY8(*(ulong *)(param_1 + 0x40),param_3 * 8)) {
      lVar2 = lVar2 + 1;
      *(long *)(param_1 + 0x48) = lVar2;
    }
    *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) + param_3 * 8;
    *(ulong *)(param_1 + 0x48) = lVar2 + (param_3 >> 0x3d);
    uVar1 = *(uint *)(param_1 + 0xd0);
    if (uVar1 != 0) {
      __n_00 = 0x80 - (ulong)uVar1;
      __dest_00 = (void *)((long)__dest + (ulong)uVar1);
      if (param_3 < __n_00) {
        memcpy(__dest_00,param_2,param_3);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)param_3;
        return 1;
      }
      memcpy(__dest_00,param_2,__n_00);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      param_3 = param_3 - __n_00;
      param_2 = (void *)((long)param_2 + __n_00);
      FUN_00475590(param_1,__dest,1);
    }
    __n = param_3;
    if (0x7f < param_3) {
      FUN_00475590(param_1,param_2,param_3 >> 7);
      __n = param_3 & 0x7f;
      param_2 = (void *)((long)param_2 + (param_3 - __n));
    }
    if (__n != 0) {
      memcpy(__dest,param_2,__n);
      *(int *)(param_1 + 0xd0) = (int)__n;
    }
  }
  return 1;
}


