/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003aa800; name: FUN_003aa800
 */


ulong FUN_003aa800(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_00452ce0(0x410,"external/openssl/ssl/s3_lib.c",0xce4);
  uVar3 = 0;
  if (lVar2 != 0) {
    *(long *)(param_1 + 0xa8) = lVar2;
    uVar3 = FUN_003da7f0(param_1);
    if ((int)uVar3 != 0) {
      iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
      uVar3 = (ulong)(iVar1 != 0);
    }
  }
  return uVar3;
}


