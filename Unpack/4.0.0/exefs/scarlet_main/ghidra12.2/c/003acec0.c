/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003acec0; name: FUN_003acec0
 */


undefined8 FUN_003acec0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0xe8);
  if (lVar2 == 0) {
    if (param_3 >> 0x1f == 0) {
      iVar1 = FUN_003e8f00(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),param_2,
                           param_3 & 0xffffffff);
      if (0 < iVar1 && iVar1 == (int)param_3) {
        return 1;
      }
      uVar3 = 0x44;
      uVar4 = 0x16a;
    }
    else {
      uVar3 = 0xed;
      uVar4 = 0x164;
    }
  }
  else {
    iVar1 = FUN_0042bd60(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 0x44;
    uVar4 = 0x171;
  }
  FUN_003c3950(param_1,0x50,0x24b,uVar3,"external/openssl/ssl/s3_enc.c",uVar4);
  return 0;
}


