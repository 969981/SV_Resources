/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00402be0; name: FUN_00402be0
 */


undefined8 FUN_00402be0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0xf5;
  }
  else if (*(long *)(param_1 + 0x38) == 0) {
    lVar1 = FUN_0045abd0(param_2,"external/openssl/crypto/dso/dso_lib.c",0xfd);
    if (lVar1 != 0) {
      FUN_00452f80(*(undefined8 *)(param_1 + 0x30),"external/openssl/crypto/dso/dso_lib.c",0x102);
      *(long *)(param_1 + 0x30) = lVar1;
      return 1;
    }
    uVar2 = 0x41;
    uVar3 = 0xff;
  }
  else {
    uVar2 = 0x6e;
    uVar3 = 0xf9;
  }
  FUN_004806c0(0x25,0x81,uVar2,"external/openssl/crypto/dso/dso_lib.c",uVar3);
  return 0;
}


