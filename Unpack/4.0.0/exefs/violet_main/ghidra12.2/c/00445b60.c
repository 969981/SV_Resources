/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


