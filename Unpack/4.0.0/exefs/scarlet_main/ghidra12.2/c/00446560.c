/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00446560; name: FUN_00446560
 */


undefined8 FUN_00446560(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00452c30(0x10,"external/openssl/crypto/init.c",0x33b);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(0xf,0x72,0x41,"external/openssl/crypto/init.c",0x33c);
    return 0;
  }
  *puVar1 = param_1;
  puVar1[1] = DAT_047f1988;
  DAT_047f1988 = puVar1;
  return 1;
}


