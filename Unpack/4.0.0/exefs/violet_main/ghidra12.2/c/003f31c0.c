/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f31c0; name: FUN_003f31c0
 */


ulong FUN_003f31c0(ulong *param_1,ulong param_2)

{
  void *__dest;
  void *__s;
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  if (param_2 <= uVar2) goto LAB_003f32cc;
  if (param_1[2] < param_2) {
    if (0x5ffffffc < param_2) {
      uVar1 = 0x5a;
      goto LAB_003f32f8;
    }
    uVar3 = (ulong)((int)param_2 + 3) * 0xaaaaaaab >> 0x1f & 0x1fffffffc;
    if ((param_1[3] & 1) == 0) {
      __dest = (void *)FUN_00452db0(param_1[1],uVar3,"external/openssl/crypto/buffer/buffer.c",0x61)
      ;
LAB_003f32b0:
      if (__dest == (void *)0x0) {
        uVar1 = 99;
LAB_003f32f8:
        FUN_004806c0(7,100,0x41,"external/openssl/crypto/buffer/buffer.c",uVar1);
        return 0;
      }
    }
    else {
      __dest = (void *)thunk_FUN_00452c30(uVar3,"external/openssl/crypto/buffer/buffer.c",0x3e);
      if ((__dest == (void *)0x0) || ((void *)param_1[1] == (void *)0x0)) goto LAB_003f32b0;
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
    if (param_1[1] == 0) goto LAB_003f32cc;
    __s = (void *)(param_1[1] + uVar2);
  }
  memset(__s,0,param_2 - uVar2);
LAB_003f32cc:
  *param_1 = param_2;
  return param_2;
}


