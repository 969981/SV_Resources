/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d7ff0; name: FUN_003d7ff0
 */


undefined8 FUN_003d7ff0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *__dest;
  size_t __n;
  long local_a0;
  undefined1 auStack_98 [104];
  
  local_a0 = 0;
  uVar2 = FUN_003f4860(param_2,0x3a,1,&LAB_003d80f0,&local_a0);
  lVar1 = local_a0;
  if ((int)uVar2 != 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      __n = local_a0 << 1;
      __dest = (void *)FUN_00452c30(__n,"external/openssl/ssl/t1_lib.c",0x7f9);
      if (__dest == (void *)0x0) {
        FUN_004806c0(0x14,0x276,0x41,"external/openssl/ssl/t1_lib.c",0x7fa);
        uVar2 = 0;
      }
      else {
        memcpy(__dest,auStack_98,__n);
        if (param_3 == 0) {
          FUN_00452f80(*(undefined8 *)(param_1 + 0x198),"external/openssl/ssl/t1_lib.c",0x804);
          uVar2 = 1;
          *(void **)(param_1 + 0x198) = __dest;
          *(long *)(param_1 + 0x1a0) = lVar1;
        }
        else {
          FUN_00452f80(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/t1_lib.c",0x800);
          uVar2 = 1;
          *(void **)(param_1 + 0x1a8) = __dest;
          *(long *)(param_1 + 0x1b0) = lVar1;
        }
      }
    }
  }
  return uVar2;
}


