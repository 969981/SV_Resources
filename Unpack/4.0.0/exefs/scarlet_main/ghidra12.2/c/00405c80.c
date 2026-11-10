/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00405c80; name: FUN_00405c80
 */


long FUN_00405c80(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    FUN_004806c0(0x10,0x90,0x43,"external/openssl/crypto/ec/ec_asn1.c",0x48a);
LAB_00405d00:
    lVar2 = 0;
  }
  else {
    if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
      lVar2 = FUN_0040ba50();
      if (lVar2 == 0) {
        FUN_004806c0(0x10,0x90,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x490);
        return 0;
      }
      lVar1 = FUN_00405620(lVar2 + 0x18,param_2,param_3);
      if (lVar1 == 0) {
        FUN_004806c0(0x10,0x90,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x497);
        if (param_1 != (long *)0x0) goto LAB_00405d84;
LAB_00405d90:
        FUN_0040bae0(lVar2);
        goto LAB_00405d00;
      }
      if (param_1 == (long *)0x0) {
        return lVar2;
      }
    }
    else {
      lVar1 = FUN_00405620(lVar2 + 0x18,param_2,param_3);
      if (lVar1 == 0) {
        FUN_004806c0(0x10,0x90,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x497);
LAB_00405d84:
        if (*param_1 != lVar2) goto LAB_00405d90;
        goto LAB_00405d00;
      }
    }
    *param_1 = lVar2;
  }
  return lVar2;
}


