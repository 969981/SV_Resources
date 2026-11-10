/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ed1c0; name: FUN_003ed1c0
 */


undefined8 * FUN_003ed1c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00452ce0(0x40,"external/openssl/crypto/bn/bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(3,0x6a,0x41,"external/openssl/crypto/bn/bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return puVar1;
}


