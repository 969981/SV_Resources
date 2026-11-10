/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00445b60; name: FUN_00445b60
 */


undefined8 * FUN_00445b60(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00452ce0(0x20,"external/openssl/crypto/hmac/hmac.c",0x89);
  if ((puVar2 == (undefined8 *)0x0) || (iVar1 = FUN_004459e0(puVar2), iVar1 != 0)) {
    return puVar2;
  }
  FUN_0042bb10(puVar2[2]);
  FUN_0042bb10(puVar2[3]);
  FUN_0042bb10(puVar2[1]);
  *puVar2 = 0;
  FUN_0042bbe0(puVar2[2]);
  FUN_0042bbe0(puVar2[3]);
  FUN_0042bbe0(puVar2[1]);
  FUN_00452f80(puVar2,"external/openssl/crypto/hmac/hmac.c",0xa3);
  return (undefined8 *)0x0;
}


