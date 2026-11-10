/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003eb670; name: FUN_003eb670
 */


long * FUN_003eb670(long *param_1,uint param_2)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)((long)param_1 + 0xc) < (int)param_2) {
    if ((int)param_2 < 0x1000000) {
      if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
        uVar1 = -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2;
        if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
          __dest = (void *)FUN_00452ce0(uVar1,"external/openssl/crypto/bn/bn_lib.c",0x118);
        }
        else {
          __dest = (void *)thunk_FUN_00452ce0(uVar1,"external/openssl/crypto/bn/bn_lib.c",0x116);
        }
        if (__dest != (void *)0x0) {
          if (0 < (int)*(uint *)(param_1 + 1)) {
            memcpy(__dest,(void *)*param_1,(ulong)*(uint *)(param_1 + 1) << 2);
          }
          lVar2 = *param_1;
          if (lVar2 != 0) {
            lVar3 = (long)*(int *)((long)param_1 + 0xc) << 2;
            if ((*(byte *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
              FUN_00453260(lVar2,lVar3,"external/openssl/crypto/bn/bn_lib.c",0xce);
            }
            else {
              FUN_00453360(lVar2,lVar3,"external/openssl/crypto/bn/bn_lib.c",0xcc);
            }
          }
          *param_1 = (long)__dest;
          *(uint *)((long)param_1 + 0xc) = param_2;
          return param_1;
        }
        uVar4 = 0x41;
        uVar5 = 0x11a;
      }
      else {
        uVar4 = 0x69;
        uVar5 = 0x112;
      }
    }
    else {
      uVar4 = 0x72;
      uVar5 = 0x10e;
    }
    FUN_004806c0(3,0x78,uVar4,"external/openssl/crypto/bn/bn_lib.c",uVar5);
    param_1 = (long *)0x0;
  }
  return param_1;
}


