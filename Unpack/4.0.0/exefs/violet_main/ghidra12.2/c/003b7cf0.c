/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b7cf0; name: FUN_003b7cf0
 */


undefined8 FUN_003b7cf0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    iVar1 = 0x43;
    uVar2 = 0x128;
  }
  else {
    iVar1 = FUN_003d9b20(0,param_1,param_2,0,1);
    if (iVar1 == 1) {
      uVar2 = FUN_003b78e0(*(undefined8 *)(param_1 + 0x140),param_2);
      return uVar2;
    }
    uVar2 = 0x12d;
  }
  FUN_004806c0(0x14,0xab,iVar1,"external/openssl/ssl/ssl_rsa.c",uVar2);
  return 0;
}


