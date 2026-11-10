/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043def0; name: FUN_0043def0
 */


undefined8 * FUN_0043def0(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_00452ce0(0x48,"external/openssl/crypto/evp/p_lib.c",0x8e);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x91);
    return (undefined8 *)0x0;
  }
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)(puVar1 + 6) = 1;
  lVar2 = FUN_0047e540();
  puVar1[8] = lVar2;
  if (lVar2 == 0) {
    FUN_004806c0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x9a);
    FUN_00452f80(puVar1,"external/openssl/crypto/evp/p_lib.c",0x9b);
    return (undefined8 *)0x0;
  }
  return puVar1;
}


