/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00451510; name: FUN_00451510
 */


void FUN_00451510(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 3);
  lVar1 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        do {
          lVar1 = *(long *)(lVar2 + 8);
          FUN_00452f80(lVar2,"external/openssl/crypto/lhash/lhash.c",0x58);
          lVar2 = lVar1;
        } while (lVar1 != 0);
        uVar3 = *(uint *)(param_1 + 3);
        lVar1 = *param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_00452f80(lVar1,"external/openssl/crypto/lhash/lhash.c",0x5c);
  FUN_00452f80(param_1,"external/openssl/crypto/lhash/lhash.c",0x5d);
  return;
}


