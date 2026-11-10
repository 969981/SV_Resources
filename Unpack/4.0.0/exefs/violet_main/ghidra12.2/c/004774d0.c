/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004774d0; name: FUN_004774d0
 */


undefined8 FUN_004774d0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00452ce0(0x28,"external/openssl/crypto/sm2/sm2_pmeth.c",0x24);
  if (lVar1 == 0) {
    FUN_004806c0(0x35,0x6f,0x41,"external/openssl/crypto/sm2/sm2_pmeth.c",0x25);
    return 0;
  }
  *(long *)(param_1 + 0x28) = lVar1;
  return 1;
}


