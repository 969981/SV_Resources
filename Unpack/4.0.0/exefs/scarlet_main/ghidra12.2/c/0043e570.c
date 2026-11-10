/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


