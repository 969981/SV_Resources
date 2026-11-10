/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e7440; name: FUN_003e7440
 */


undefined8
FUN_003e7440(long *param_1,long *param_2,size_t *param_3,ulong *param_4,undefined1 param_5)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  
  if ((param_2 == (long *)0x0) && (*param_1 == 0)) {
    return 0;
  }
  uVar2 = *param_3;
  if (*param_4 < uVar2) {
    return 0;
  }
  if ((param_2 != (long *)0x0) && (uVar2 == *param_4)) {
    if (0x7ffffbff < uVar2) {
      return 0;
    }
    uVar2 = uVar2 + 0x400;
    *param_4 = uVar2;
    if (*param_2 == 0) {
      __dest = (void *)FUN_00452c30(uVar2,"external/openssl/crypto/bio/b_print.c",0x342);
      *param_2 = (long)__dest;
      if (__dest == (void *)0x0) {
        FUN_004806c0(0x20,0x96,0x41,"external/openssl/crypto/bio/b_print.c",0x343);
        return 0;
      }
      if (*param_3 != 0) {
        if ((void *)*param_1 == (void *)0x0) {
          return 0;
        }
        memcpy(__dest,(void *)*param_1,*param_3);
      }
      *param_1 = 0;
    }
    else {
      lVar1 = FUN_00452db0(*param_2,uVar2,"external/openssl/crypto/bio/b_print.c",0x34e);
      if (lVar1 == 0) {
        return 0;
      }
      *param_2 = lVar1;
    }
  }
  uVar2 = *param_3;
  if (uVar2 < *param_4) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      lVar1 = *param_2;
    }
    *param_3 = uVar2 + 1;
    *(undefined1 *)(lVar1 + uVar2) = param_5;
  }
  return 1;
}


