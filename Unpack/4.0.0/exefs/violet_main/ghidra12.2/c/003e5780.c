/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e5780; name: FUN_003e5780
 */


undefined8 FUN_003e5780(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_003e3920(param_2,&local_18,param_1);
    if (local_18 != 0) {
      local_20 = local_18;
      uVar2 = FUN_003e1880(0,&local_20,(long)iVar1,param_1);
      FUN_00452f80(local_18,"external/openssl/crypto/asn1/a_dup.c",0x42);
      return uVar2;
    }
    FUN_004806c0(0xd,0xbf,0x41,"external/openssl/crypto/asn1/a_dup.c",0x3d);
  }
  return 0;
}


