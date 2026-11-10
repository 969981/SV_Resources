/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a23b0; name: FUN_003a23b0
 */


undefined8 FUN_003a23b0(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    param_1[2] = 0;
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = -1;
    lVar1 = FUN_00452ce0(0x28,"external/openssl/ssl/packet.c",0x61);
    param_1[5] = lVar1;
    if (lVar1 != 0) {
      return 1;
    }
    FUN_004806c0(0x14,0x279,0x41,"external/openssl/ssl/packet.c",0x62);
  }
  return 0;
}


