/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003aed50; name: FUN_003aed50
 */


int FUN_003aed50(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_28;
  void *local_18;
  
  local_18 = (void *)0x0;
  local_28 = (void *)0x0;
  uVar1 = FUN_0048b9c0(param_1,&local_18);
  uVar2 = FUN_0048b9c0(param_2,&local_28);
  if ((int)(uVar2 | uVar1) < 0) {
    iVar3 = -2;
  }
  else {
    iVar3 = uVar1 - uVar2;
    if (iVar3 == 0) {
      iVar3 = memcmp(local_18,local_28,(long)(int)uVar1);
    }
  }
  FUN_00452f80(local_18,"external/openssl/ssl/ssl_cert.c",0x24c);
  FUN_00452f80(local_28,"external/openssl/ssl/ssl_cert.c",0x24d);
  return iVar3;
}


