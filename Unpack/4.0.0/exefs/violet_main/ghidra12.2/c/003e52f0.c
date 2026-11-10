/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e52f0; name: FUN_003e52f0
 */


undefined8 FUN_003e52f0(long *param_1,void *param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  size_t __n;
  
  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) ||
      (lVar2 = *(long *)(param_4 + 0x20), lVar2 == 0)) || ((*(byte *)(lVar2 + 8) >> 1 & 1) == 0)) {
    return 1;
  }
  puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
  FUN_00452f80(*puVar1,"external/openssl/crypto/asn1/tasn_utl.c",0x92);
  __n = (size_t)param_3;
  __dest = (void *)FUN_00452c30(__n,"external/openssl/crypto/asn1/tasn_utl.c",0x93);
  *puVar1 = __dest;
  if (__dest == (void *)0x0) {
    FUN_004806c0(0xd,0x73,0x41,"external/openssl/crypto/asn1/tasn_utl.c",0x94);
    return 0;
  }
  memcpy(__dest,param_2,__n);
  puVar1[1] = __n;
  *(undefined4 *)(puVar1 + 2) = 0;
  return 1;
}


