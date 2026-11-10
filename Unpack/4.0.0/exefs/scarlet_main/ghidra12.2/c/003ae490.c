/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ae490; name: FUN_003ae490
 */


undefined8 FUN_003ae490(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_2 + 0x140);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x550);
  }
  lVar5 = *(long *)*puVar1;
  if (lVar5 == 0) {
    return 0;
  }
  iVar2 = FUN_0047e430(param_3);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar4 = FUN_0047e450(param_3,iVar2);
      iVar3 = FUN_003d9b20(param_1,param_2,uVar4,0,0);
      if (iVar3 != 1) {
        FUN_004806c0(0x14,0x154,iVar3,"external/openssl/ssl/ssl_cert.c",0x105);
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_0047e430(param_3);
    } while (iVar2 < iVar3);
  }
  FUN_0047e3b0(*(undefined8 *)(lVar5 + 0x10),PTR_FUN_047cd0a0);
  *(undefined8 *)(lVar5 + 0x10) = param_3;
  return 1;
}


