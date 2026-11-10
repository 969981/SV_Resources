/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048c550; name: FUN_0048c550
 */


long FUN_0048c550(long param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      return *(long *)(param_1 + 0x10);
    }
    FUN_0048c5d0(&local_18);
    lVar1 = local_18;
    if (local_18 != 0) {
      FUN_004806c0(0xb,0x77,0x44,"external/openssl/crypto/x509/x_pubkey.c",0xa2);
      FUN_0043e1f0(lVar1);
    }
  }
  return 0;
}


