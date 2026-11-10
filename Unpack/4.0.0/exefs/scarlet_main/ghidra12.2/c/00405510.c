/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00405510; name: FUN_00405510
 */


long FUN_00405510(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0x38e;
    uVar3 = 0x7c;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 == 1) {
      lVar2 = FUN_00404d30(*(undefined8 *)(param_1 + 2));
      if (lVar2 == 0) {
        FUN_004806c0(0x10,0x108,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x39f);
        return 0;
      }
      FUN_0040d590(lVar2,0);
      return lVar2;
    }
    if (iVar1 == 0) {
      FUN_0045bea0(*(undefined8 *)(param_1 + 2));
      lVar2 = FUN_004062c0();
      if (lVar2 == 0) {
        FUN_004806c0(0x10,0x108,0x77,"external/openssl/crypto/ec/ec_asn1.c",0x397);
        return 0;
      }
      FUN_0040d590(lVar2,1);
      return lVar2;
    }
    uVar3 = 0x73;
    uVar4 = 0x3a7;
  }
  FUN_004806c0(0x10,0x108,uVar3,"external/openssl/crypto/ec/ec_asn1.c",uVar4);
  return 0;
}


