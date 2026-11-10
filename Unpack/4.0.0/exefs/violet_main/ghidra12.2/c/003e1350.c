/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e1350; name: FUN_003e1350
 */


long FUN_003e1350(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeff) != 10) {
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


