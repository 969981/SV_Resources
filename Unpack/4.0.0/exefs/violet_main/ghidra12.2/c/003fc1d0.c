/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fc1d0; name: FUN_003fc1d0
 */


ulong FUN_003fc1d0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  uint local_14;
  
  local_14 = 0;
  uVar2 = FUN_003fc270(param_1,param_2,&local_14);
  uVar1 = local_14;
  if ((int)uVar2 != 0) {
    if ((local_14 & 1) != 0) {
      FUN_004806c0(5,0x7b,0x7c,"external/openssl/crypto/dh/dh_check.c",0xab);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004806c0(5,0x7b,0x7b,"external/openssl/crypto/dh/dh_check.c",0xad);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004806c0(5,0x7b,0x7a,"external/openssl/crypto/dh/dh_check.c",0xaf);
    }
    uVar2 = (ulong)(uVar1 == 0);
  }
  return uVar2;
}


