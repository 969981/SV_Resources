/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00487770; name: FUN_00487770
 */


undefined8 FUN_00487770(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 == 0) || (iVar1 = FUN_0043de00(param_1), iVar1 != 0)) {
    iVar1 = FUN_0047e430(param_2);
    if (iVar1 < 1) {
      uVar4 = 0x6b;
      uVar5 = 0x7b8;
LAB_00487814:
      FUN_004806c0(0xb,0x6e,uVar4,"external/openssl/crypto/x509/x509_vfy.c",uVar5);
      return 0;
    }
    iVar1 = 0;
    do {
      FUN_0047e450(param_2,iVar1);
      lVar3 = FUN_00483c90();
      if (lVar3 == 0) {
        uVar4 = 0x6c;
        uVar5 = 0x7b0;
        goto LAB_00487814;
      }
      iVar2 = FUN_0043de00();
      if (iVar2 == 0) {
        if (iVar1 == 0) goto LAB_00487858;
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(param_2);
    } while (iVar1 < iVar2);
    iVar1 = iVar1 + 1;
    do {
      FUN_0047e450(param_2,iVar1 + -2);
      uVar4 = FUN_00483c90();
      FUN_0043dc10(uVar4,lVar3);
      iVar1 = iVar1 + -1;
    } while (1 < iVar1);
LAB_00487858:
    if (param_1 != 0) {
      FUN_0043dc10(param_1,lVar3);
    }
  }
  return 1;
}


