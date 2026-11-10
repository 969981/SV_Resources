/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f3310; name: FUN_003f3310
 */


ulong FUN_003f3310(ulong *param_1,ulong param_2)

{
  void *__dest;
  void *__s;
  size_t __n;
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  __n = uVar2 - param_2;
  if (uVar2 < param_2) {
    if (param_1[2] < param_2) {
      if (0x5ffffffc < param_2) {
        uVar1 = 0x80;
        goto LAB_003f345c;
      }
      uVar3 = (ulong)((int)param_2 + 3) * 0xaaaaaaab >> 0x1f & 0x1fffffffc;
      if ((param_1[3] & 1) == 0) {
        __dest = (void *)FUN_00453010(param_1[1],param_1[2],uVar3,
                                      "external/openssl/crypto/buffer/buffer.c",0x87);
LAB_003f3410:
        if (__dest == (void *)0x0) {
          uVar1 = 0x89;
LAB_003f345c:
          FUN_004806c0(7,0x69,0x41,"external/openssl/crypto/buffer/buffer.c",uVar1);
          return 0;
        }
      }
      else {
        __dest = (void *)thunk_FUN_00452c30(uVar3,"external/openssl/crypto/buffer/buffer.c",0x3e);
        if ((__dest == (void *)0x0) || ((void *)param_1[1] == (void *)0x0)) goto LAB_003f3410;
        memcpy(__dest,(void *)param_1[1],*param_1);
        FUN_00453360(param_1[1],*param_1,"external/openssl/crypto/buffer/buffer.c",0x42);
        param_1[1] = 0;
      }
      uVar2 = *param_1;
      __s = (void *)((long)__dest + uVar2);
      param_1[1] = (ulong)__dest;
      param_1[2] = uVar3;
    }
    else {
      __s = (void *)(param_1[1] + uVar2);
    }
    __n = param_2 - uVar2;
  }
  else {
    if (param_1[1] == 0) goto LAB_003f342c;
    __s = (void *)(param_1[1] + param_2);
  }
  memset(__s,0,__n);
LAB_003f342c:
  *param_1 = param_2;
  return param_2;
}


