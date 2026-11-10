/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b45f0; name: FUN_003b45f0
 */


undefined8 FUN_003b45f0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = FUN_003b0430(**(undefined8 **)(param_1 + 0x660),*(undefined8 *)(param_1 + 0x130),
                       param_1 + 0x120,param_1 + 0x128,param_2,*(undefined8 *)(param_1 + 0x550));
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_0047e430();
  if (0 < iVar1) {
    iVar5 = 0;
    iVar1 = 0;
    do {
      lVar4 = FUN_0047e450(lVar3,iVar1);
      if (*(int *)(lVar4 + 0x2c) < 0x304) {
        iVar5 = iVar5 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(lVar3);
    } while (iVar1 < iVar2);
    if (iVar5 != 0) {
      return 1;
    }
  }
  FUN_004806c0(0x14,0x10f,0xb9,"external/openssl/ssl/ssl_lib.c",0xa7f);
  return 0;
}


