/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003df440; name: FUN_003df440
 */


void FUN_003df440(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if ((*(long *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) >> 4 & 1) == 0)) {
      FUN_00453300(*(long *)(param_1 + 2),(long)*param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + 4);
    if (((uint)uVar1 >> 4 & 1) == 0) {
      FUN_00452f80(*(undefined8 *)(param_1 + 2),"external/openssl/crypto/asn1/asn1_lib.c",0x15f);
    }
    if (((uint)uVar1 >> 7 & 1) == 0) {
      FUN_00452f80(param_1,"external/openssl/crypto/asn1/asn1_lib.c",0x161);
      return;
    }
  }
  return;
}


