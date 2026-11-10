/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b4540; name: FUN_003b4540
 */


undefined8 FUN_003b4540(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = FUN_003b0430(*param_1,param_1[3],param_1 + 1,param_1 + 2,param_2,param_1[0x28]);
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
  FUN_004806c0(0x14,0x10d,0xb9,"external/openssl/ssl/ssl_lib.c",0xa6d);
  return 0;
}


