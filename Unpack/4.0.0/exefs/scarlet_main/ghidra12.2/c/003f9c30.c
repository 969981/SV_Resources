/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f9c30; name: thunk_FUN_003df070
 */


undefined8 thunk_FUN_003df070(int *param_1,char *param_2,uint param_3)

{
  void *__dest;
  ulong __n;
  void *pvVar1;
  
  if ((int)param_3 < 0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    __n = strlen(param_2);
  }
  else {
    __n = (ulong)param_3;
  }
  if (0x7ffffffe < __n) {
    FUN_004806c0(0xd,0,0xdf,"external/openssl/crypto/asn1/asn1_lib.c",0x122);
    return 0;
  }
  __dest = *(void **)(param_1 + 2);
  if (__n < (ulong)(long)*param_1) {
    if (__dest != (void *)0x0) goto LAB_003df128;
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = __dest;
  }
  __dest = (void *)FUN_00452db0(pvVar1,__n + 1,"external/openssl/crypto/asn1/asn1_lib.c",299);
  *(void **)(param_1 + 2) = __dest;
  if (__dest == (void *)0x0) {
    FUN_004806c0(0xd,0xba,0x41,"external/openssl/crypto/asn1/asn1_lib.c",0x12e);
    *(void **)(param_1 + 2) = pvVar1;
    return 0;
  }
LAB_003df128:
  *param_1 = (int)__n;
  if (param_2 != (char *)0x0) {
    memcpy(__dest,param_2,__n);
    *(undefined1 *)(*(long *)(param_1 + 2) + __n) = 0;
  }
  return 1;
}


