/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b53c0; name: FUN_003b53c0
 */


undefined8 FUN_003b53c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_003e7f90();
    lVar1 = FUN_003e8a30();
    if ((lVar1 == 0) || (lVar2 = FUN_003e9540(lVar1,0x75,1,0), lVar2 == 0)) {
      FUN_003e8b90(lVar1);
      FUN_004806c0(0x14,0xb8,7,"external/openssl/ssl/ssl_lib.c",0x1030);
      return 0;
    }
    *(long *)(param_1 + 0x20) = lVar1;
    uVar3 = FUN_003e9810(lVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return 1;
}


