/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00494720; name: FUN_00494720
 */


long FUN_00494720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = FUN_0047e430(param_3);
  lVar2 = FUN_0047dcf0(0,iVar1);
  if (lVar2 == 0) {
    FUN_004806c0(0x22,0x76,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x197);
    FUN_0047db00(0);
  }
  else if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar3 = FUN_0047e450(param_3,iVar5);
      lVar4 = FUN_00494820(0,param_1,param_2,uVar3,0);
      if (lVar4 == 0) {
        FUN_0047e3b0(lVar2,PTR_FUN_047cca70);
        return 0;
      }
      FUN_0047e2f0(lVar2,lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return lVar2;
}


