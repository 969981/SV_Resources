/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e3520; name: FUN_003e3520
 */


undefined4 * FUN_003e3520(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  size_t __n;
  void *__dest;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte *__src;
  byte *pbVar4;
  
  __n = param_3 - 1;
  if (param_3 < 1) {
    puVar3 = (undefined4 *)0x0;
    uVar2 = 0x98;
  }
  else if (param_3 < 0x80000000) {
    if (((param_1 == (long *)0x0) || (puVar3 = (undefined4 *)*param_1, puVar3 == (undefined4 *)0x0))
       && (puVar3 = (undefined4 *)FUN_003e5060(), puVar3 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    pbVar4 = (byte *)*param_2;
    __src = pbVar4 + 1;
    bVar1 = *pbVar4;
    if (bVar1 < 8) {
      *(ulong *)(puVar3 + 4) = (ulong)bVar1 | *(ulong *)(puVar3 + 4) & 0xfffffffffffffff0 | 8;
      if (param_3 < 2) {
        __dest = (void *)0x0;
      }
      else {
        __dest = (void *)FUN_00452c30(__n,"external/openssl/crypto/asn1/a_bitstr.c",0x75);
        if (__dest == (void *)0x0) {
          uVar2 = 0x41;
          goto LAB_003e359c;
        }
        memcpy(__dest,__src,__n);
        __src = pbVar4 + param_3;
        *(byte *)((long)__dest + param_3 + -2) =
             *(byte *)((long)__dest + param_3 + -2) & (byte)(0xff << (ulong)(bVar1 & 0x1f));
      }
      *puVar3 = (int)__n;
      FUN_00452f80(*(undefined8 *)(puVar3 + 2),"external/openssl/crypto/asn1/a_bitstr.c",0x81);
      *(void **)(puVar3 + 2) = __dest;
      puVar3[1] = 3;
      if (param_1 != (long *)0x0) {
        *param_1 = (long)puVar3;
      }
      *param_2 = (long)__src;
      return puVar3;
    }
    uVar2 = 0xdc;
  }
  else {
    puVar3 = (undefined4 *)0x0;
    uVar2 = 0x97;
  }
LAB_003e359c:
  FUN_004806c0(0xd,0xbd,uVar2,"external/openssl/crypto/asn1/a_bitstr.c",0x89);
  if ((param_1 == (long *)0x0) || ((undefined4 *)*param_1 != puVar3)) {
    thunk_FUN_003df2e0(puVar3);
  }
  return (undefined4 *)0x0;
}


