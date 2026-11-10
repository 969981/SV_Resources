/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a6d244; name: FUN_01a6d244
 */


undefined4 FUN_01a6d244(long param_1,void *param_2,ulong param_3)

{
  undefined4 uVar1;
  void *__dest;
  long lVar2;
  ulong __n;
  
  FUN_0157190c(param_1,param_3,4);
  __n = param_3 * 4;
  if (__n != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if ((ulong)(lVar2 - *(long *)(param_1 + 0x38)) < __n) {
      FUN_0157184c(param_1,__n);
      lVar2 = *(long *)(param_1 + 0x30);
    }
    __dest = (void *)(lVar2 + param_3 * -4);
    *(void **)(param_1 + 0x30) = __dest;
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar1 = FUN_015713f8(param_1,param_3 & 0xffffffff);
  return uVar1;
}


