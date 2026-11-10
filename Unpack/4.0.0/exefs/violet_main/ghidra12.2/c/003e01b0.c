/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e01b0; name: FUN_003e01b0
 */


long FUN_003e01b0(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 2);
  lVar1 = FUN_003e1880(0,&local_18,(long)*param_1,param_2);
  if (lVar1 == 0) {
    FUN_004806c0(0xd,199,0x6e,"external/openssl/crypto/asn1/asn_pack.c",0x3c);
    return 0;
  }
  return lVar1;
}


