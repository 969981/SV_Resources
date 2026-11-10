/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ca810; name: FUN_003ca810
 */


ulong FUN_003ca810(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((int)param_2 < 1) {
    uVar3 = (ulong)param_2;
    iVar1 = FUN_003a15d0(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_003c39d0(param_1), iVar1 == 0)) {
      iVar1 = FUN_003c38d0(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_003b35d0(param_1);
        FUN_003e8cd0(uVar2,1);
        return uVar3;
      }
      uVar3 = FUN_003a1340(param_1);
      return uVar3;
    }
  }
  else {
    FUN_003c3950(param_1,0x50,0x153,0x44,"external/openssl/ssl/statem/statem_dtls.c",0x3cc);
    uVar3 = 0;
  }
  return uVar3;
}


