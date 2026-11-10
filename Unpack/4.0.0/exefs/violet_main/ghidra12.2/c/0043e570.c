/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043e570; name: FUN_0043e570
 */


long FUN_0043e570(int *param_1)

{
  long lVar1;
  
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    FUN_004806c0(6,0x79,0x7f,"external/openssl/crypto/evp/p_lib.c",0x1d5);
    return 0;
  }
  lVar1 = *(long *)(param_1 + 10);
  if (lVar1 != 0) {
    FUN_0046a320(lVar1);
  }
  return lVar1;
}


