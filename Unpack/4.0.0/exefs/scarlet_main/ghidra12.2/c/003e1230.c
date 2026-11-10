/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e1230; name: FUN_003e1230
 */


long FUN_003e1230(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeff) != 2) {
    FUN_004806c0(0xd,0xe4,0xe1,"external/openssl/crypto/asn1/a_int.c",499);
    return 0;
  }
  lVar1 = FUN_003eba50(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    FUN_004806c0(0xd,0xe4,0x69,"external/openssl/crypto/asn1/a_int.c",0x1f9);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
    FUN_003ec230(lVar1,1);
  }
  return lVar1;
}


