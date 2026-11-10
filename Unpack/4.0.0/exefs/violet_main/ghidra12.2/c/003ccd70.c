/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ccd70; name: FUN_003ccd70
 */


undefined8 FUN_003ccd70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x8b8) != 0) {
    return 1;
  }
  uVar2 = FUN_003acf80(param_1,1);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_0042bbc0();
    *(long *)(param_1 + 0x8b8) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0x989;
    }
    else {
      iVar1 = FUN_0042bfb0(lVar3,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8));
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = 0x990;
    }
    FUN_003c3950(param_1,0x50,0x26a,0x44,"external/openssl/ssl/statem/statem_lib.c",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}


