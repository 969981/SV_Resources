/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d9a10; name: FUN_001d9a10
 */


size_t FUN_001d9a10(undefined8 param_1,int param_2,void *param_3,ulong param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  
  if (param_2 == 0) {
    __n = 0xfffffffffffffe0b;
  }
  else {
    lVar1 = FUN_001f3774();
    if ((lVar1 == 0) || (lVar3 = *(long *)(lVar1 + 0x1e8), lVar3 == 0)) {
      __n = 0xfffffffffffffc7a;
    }
    else {
      __n = *(ulong *)(lVar3 + 0x278);
      if (param_4 <= *(ulong *)(lVar3 + 0x278)) {
        __n = param_4;
      }
      if (__n == 0) {
        if (*(long *)(lVar3 + 0x280) != 0) {
          return 0xfffffffffffffe04;
        }
      }
      else {
        memcpy(param_3,*(void **)(lVar3 + 0x270),__n);
        *(size_t *)(lVar3 + 0x270) = *(long *)(lVar3 + 0x270) + __n;
        *(size_t *)(lVar3 + 0x278) = *(long *)(lVar3 + 0x278) - __n;
        lVar2 = *(long *)(lVar3 + 0x280);
        if (*(long *)(lVar1 + 0x1518) != -1) {
          lVar2 = lVar2 - __n;
          *(long *)(lVar3 + 0x280) = lVar2;
        }
        if (lVar2 != 0) {
          return __n;
        }
      }
      *param_5 = 1;
    }
  }
  return __n;
}


