/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00411df0; name: FUN_00411df0
 */


undefined8 FUN_00411df0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 local_18;
  
  lVar1 = FUN_0040fa80();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_003eba50(local_18,lVar1,in_x3);
  FUN_00452f80(local_18,"external/openssl/crypto/ec/ec_print.c",0x1d);
  return uVar2;
}


