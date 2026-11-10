/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00477cb0; name: FUN_00477cb0
 */


undefined8 FUN_00477cb0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  lVar1 = FUN_003e1880(0,&local_18,param_2,PTR_DAT_047cd4e8);
  if (lVar1 == 0) {
    FUN_004806c0(0x35,0x68,0x68,"external/openssl/crypto/sm2/sm2_crypt.c",0x47);
    return 0;
  }
  *param_3 = (long)**(int **)(lVar1 + 0x18);
  FUN_003e4550(lVar1,PTR_DAT_047cd4e8);
  return 1;
}


